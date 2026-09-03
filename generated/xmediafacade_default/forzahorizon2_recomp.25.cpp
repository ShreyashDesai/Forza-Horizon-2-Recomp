#include "forzahorizon2_funcs.25.h"

DEFINE_REX_FUNC(sub_88050250) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050250);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050250;
	ctx.current_instruction = 0x88050250;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,112(r11)
	ctx.current_instruction = 0x88050258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__restgprlr_16) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050868);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x88050868;
	ctx.current_instruction = 0x88050868;
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

DEFINE_REX_FUNC(sub_880522D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880522D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880522D8) {
			switch (rex_dispatch_address) {
				case 0x880522F8:
				case 0x88052310:
				case 0x8805231C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880522D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880522F8: goto loc_880522F8;
		case 0x88052310: goto loc_88052310;
		case 0x8805231C: goto loc_8805231C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880522DC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880522E0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880522E4;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880522F0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88052f00
	ctx.lr = 0x880522F8;
	sub_88052F00(ctx, base);
loc_880522F8:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x88052324
	if (!ctx.cr0.eq) goto loc_88052324;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88052300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88052324
	if (ctx.cr6.eq) goto loc_88052324;
	// bl 0x880529c8
	ctx.lr = 0x88052310;
	sub_880529C8(ctx, base);
loc_88052310:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x88052324
	if (ctx.cr0.eq) goto loc_88052324;
	// bl 0x880529c8
	ctx.lr = 0x8805231C;
	sub_880529C8(ctx, base);
loc_8805231C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805231C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r3)
	ctx.current_instruction = 0x88052320;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_88052324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805232C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88052334;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88056A60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88056A60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88056A60) {
			switch (rex_dispatch_address) {
				case 0x88056A68:
				case 0x88056AD0:
				case 0x88056AE4:
				case 0x88056B2C:
				case 0x88056B98:
				case 0x88056C60:
				case 0x88056D18:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88056A60;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88056A68: goto loc_88056A68;
		case 0x88056AD0: goto loc_88056AD0;
		case 0x88056AE4: goto loc_88056AE4;
		case 0x88056B2C: goto loc_88056B2C;
		case 0x88056B98: goto loc_88056B98;
		case 0x88056C60: goto loc_88056C60;
		case 0x88056D18: goto loc_88056D18;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x88056A68;
	__savegprlr_15(ctx, base);
loc_88056A68:
	// stwu r1,-384(r1)
	ctx.current_instruction = 0x88056A68;
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88056aa0
	if (!ctx.cr6.eq) goto loc_88056AA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88056AA0:
	// lwz r20,532(r1)
	ctx.current_instruction = 0x88056AA0;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lbz r11,0(r20)
	ctx.current_instruction = 0x88056AA4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88056adc
	if (ctx.cr6.eq) goto loc_88056ADC;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r9,524(r1)
	ctx.current_instruction = 0x88056AB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ld r8,464(r1)
	ctx.current_instruction = 0x88056ABC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 464);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805dcd8
	ctx.lr = 0x88056AD0;
	sub_8805DCD8(ctx, base);
loc_88056AD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88056ADC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88060360
	ctx.lr = 0x88056AE4;
	sub_88060360(ctx, base);
loc_88056AE4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88056af8
	if (!ctx.cr6.eq) goto loc_88056AF8;
loc_88056AEC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88056AF8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x88056b24
	if (ctx.cr6.eq) goto loc_88056B24;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// lwz r11,16(r26)
	ctx.current_instruction = 0x88056B04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88056b24
	if (ctx.cr6.eq) goto loc_88056B24;
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88056aec
	if (!ctx.cr6.eq) goto loc_88056AEC;
loc_88056B24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805e058
	ctx.lr = 0x88056B2C;
	sub_8805E058(ctx, base);
loc_88056B2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x88056b98
	if (!ctx.cr6.gt) goto loc_88056B98;
	// lhz r10,14(r29)
	ctx.current_instruction = 0x88056B34;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 14);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// divw r11,r3,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r3.s32 / ctx.r9.s32 : 0);
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x88056aec
	if (!ctx.cr6.eq) goto loc_88056AEC;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// lwz r9,16(r29)
	ctx.current_instruction = 0x88056B64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// ori r8,r10,22105
	ctx.r8.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88056b80
	if (!ctx.cr6.eq) goto loc_88056B80;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88056aec
	if (!ctx.cr6.eq) goto loc_88056AEC;
loc_88056B80:
	// lwz r10,4(r29)
	ctx.current_instruction = 0x88056B80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88056b98
	if (!ctx.cr6.eq) goto loc_88056B98;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805e048
	ctx.lr = 0x88056B98;
	sub_8805E048(ctx, base);
loc_88056B98:
	// lwz r27,508(r1)
	ctx.current_instruction = 0x88056B98;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88056c84
	if (ctx.cr6.eq) goto loc_88056C84;
	// lwz r28,516(r1)
	ctx.current_instruction = 0x88056BA4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88056c84
	if (ctx.cr6.eq) goto loc_88056C84;
	// lwz r10,0(r27)
	ctx.current_instruction = 0x88056BB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r28)
	ctx.current_instruction = 0x88056BB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// lbz r18,479(r1)
	ctx.current_instruction = 0x88056BC0;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 479);
	// addi r19,r1,224
	ctx.r19.s64 = ctx.r1.s64 + 224;
	// lwz r3,524(r1)
	ctx.current_instruction = 0x88056BC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// clrlwi r21,r21,24
	ctx.r21.u64 = ctx.r21.u32 & 0xFF;
	// lwz r17,492(r1)
	ctx.current_instruction = 0x88056BD0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// cntlzw r8,r18
	ctx.r8.u64 = ctx.r18.u32 == 0 ? 32 : __builtin_clz(ctx.r18.u32);
	// stw r10,232(r1)
	ctx.current_instruction = 0x88056BD8;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r9,236(r1)
	ctx.current_instruction = 0x88056BE0;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lbz r16,503(r1)
	ctx.current_instruction = 0x88056BE8;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 503);
	// rlwinm r26,r8,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lbz r15,487(r1)
	ctx.current_instruction = 0x88056BF0;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 487);
	// li r8,-1
	ctx.r8.s64 = -1;
	// ld r23,464(r1)
	ctx.current_instruction = 0x88056BF8;
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + 464);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r3,140(r1)
	ctx.current_instruction = 0x88056C00;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r11,224(r1)
	ctx.current_instruction = 0x88056C0C;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,212(r1)
	ctx.current_instruction = 0x88056C14;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,228(r1)
	ctx.current_instruction = 0x88056C1C;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r11,204(r1)
	ctx.current_instruction = 0x88056C20;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stw r11,196(r1)
	ctx.current_instruction = 0x88056C24;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r17,116(r1)
	ctx.current_instruction = 0x88056C28;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r11,188(r1)
	ctx.current_instruction = 0x88056C2C;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r18,100(r1)
	ctx.current_instruction = 0x88056C30;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// stw r11,172(r1)
	ctx.current_instruction = 0x88056C34;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r26,180(r1)
	ctx.current_instruction = 0x88056C38;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r31,164(r1)
	ctx.current_instruction = 0x88056C3C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r11,156(r1)
	ctx.current_instruction = 0x88056C40;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r11,148(r1)
	ctx.current_instruction = 0x88056C44;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r19,132(r1)
	ctx.current_instruction = 0x88056C48;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// stw r16,124(r1)
	ctx.current_instruction = 0x88056C4C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// stw r15,108(r1)
	ctx.current_instruction = 0x88056C50;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// std r23,88(r1)
	ctx.current_instruction = 0x88056C54;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r23.u64);
	// stw r21,84(r1)
	ctx.current_instruction = 0x88056C58;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// bl 0x8805e9e0
	ctx.lr = 0x88056C60;
	sub_8805E9E0(ctx, base);
loc_88056C60:
	// lwz r5,232(r1)
	ctx.current_instruction = 0x88056C60;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,224(r1)
	ctx.current_instruction = 0x88056C64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r11,236(r1)
	ctx.current_instruction = 0x88056C68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r10,228(r1)
	ctx.current_instruction = 0x88056C6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,0(r27)
	ctx.current_instruction = 0x88056C78;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r8,0(r28)
	ctx.current_instruction = 0x88056C7C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// b 0x88056d18
	goto loc_88056D18;
loc_88056C84:
	// lbz r3,503(r1)
	ctx.current_instruction = 0x88056C84;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 503);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r28,479(r1)
	ctx.current_instruction = 0x88056C8C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r1.u32 + 479);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,204(r1)
	ctx.current_instruction = 0x88056C94;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,196(r1)
	ctx.current_instruction = 0x88056C9C;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// stw r11,188(r1)
	ctx.current_instruction = 0x88056CA4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// clrlwi r27,r21,24
	ctx.r27.u64 = ctx.r21.u32 & 0xFF;
	// stw r3,124(r1)
	ctx.current_instruction = 0x88056CAC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,172(r1)
	ctx.current_instruction = 0x88056CB4;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r11,156(r1)
	ctx.current_instruction = 0x88056CBC;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r11,148(r1)
	ctx.current_instruction = 0x88056CC4;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r11,132(r1)
	ctx.current_instruction = 0x88056CCC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r9,524(r1)
	ctx.current_instruction = 0x88056CD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r11,492(r1)
	ctx.current_instruction = 0x88056CDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// ld r30,464(r1)
	ctx.current_instruction = 0x88056CE0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 464);
	// lbz r29,487(r1)
	ctx.current_instruction = 0x88056CE4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 487);
	// stw r8,180(r1)
	ctx.current_instruction = 0x88056CE8;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,140(r1)
	ctx.current_instruction = 0x88056CF0;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r31,212(r1)
	ctx.current_instruction = 0x88056CF8;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r31,164(r1)
	ctx.current_instruction = 0x88056CFC;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r28,100(r1)
	ctx.current_instruction = 0x88056D00;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,84(r1)
	ctx.current_instruction = 0x88056D04;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r11,116(r1)
	ctx.current_instruction = 0x88056D08;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// std r30,88(r1)
	ctx.current_instruction = 0x88056D0C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// stw r29,108(r1)
	ctx.current_instruction = 0x88056D10;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x8805e9e0
	ctx.lr = 0x88056D18;
	sub_8805E9E0(ctx, base);
loc_88056D18:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x88056D18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// srawi r10,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 31;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r31.u64 - ctx.r11.u64;
	// adde r7,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r7,0(r20)
	ctx.current_instruction = 0x88056D30;
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r7.u8);
	// beq cr6,0x88056ad0
	if (ctx.cr6.eq) goto loc_88056AD0;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x88056d4c
	if (!ctx.cr6.eq) goto loc_88056D4C;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88056D4C:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// li r3,4
	ctx.r3.s64 = 4;
	// beq cr6,0x88056d5c
	if (ctx.cr6.eq) goto loc_88056D5C;
	// li r3,6
	ctx.r3.s64 = 6;
loc_88056D5C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805DD20) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805DD20;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805DD20) {
			switch (rex_dispatch_address) {
				case 0x8805DD40:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805DD20;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805DD40: goto loc_8805DD40;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805DD24;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8805DD28;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805DD2C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805DD30;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x881ee8e8
	ctx.lr = 0x8805DD40;
	sub_881EE8E8(ctx, base);
loc_8805DD40:
	// clrlwi r8,r3,30
	ctx.r8.u64 = ctx.r3.u32 & 0x3;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// ble cr6,0x8805dd6c
	if (!ctx.cr6.gt) goto loc_8805DD6C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8805DD58:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x8805DD58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r9,r10,r30
	ctx.current_instruction = 0x8805DD64;
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u8);
	// bdnz 0x8805dd58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8805DD58;
loc_8805DD6C:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805DD6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r31)
	ctx.current_instruction = 0x8805DD74;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805DD7C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8805DD84;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805DD88;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88061468) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88061468);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88061468;
	ctx.current_instruction = 0x88061468;
	PPCRegister temp{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x88061468;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x8806146C;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x88061470;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// lis r8,22101
	ctx.r8.s64 = 1448411136;
	// ori r10,r11,21846
	ctx.r10.u64 = ctx.r11.u64 | 21846;
	// lis r7,12338
	ctx.r7.s64 = 808583168;
	// ori r30,r8,22857
	ctx.r30.u64 = ctx.r8.u64 | 22857;
	// lwz r11,16(r9)
	ctx.current_instruction = 0x88061488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// ori r4,r7,13385
	ctx.r4.u64 = ctx.r7.u64 | 13385;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x88061984
	if (ctx.cr6.gt) goto loc_88061984;
	// beq cr6,0x88061908
	if (ctx.cr6.eq) goto loc_88061908;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r10,r10,22094
	ctx.r10.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x88061748
	if (ctx.cr6.gt) goto loc_88061748;
	// beq cr6,0x880616b4
	if (ctx.cr6.eq) goto loc_880616B4;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x88061630
	if (ctx.cr6.gt) goto loc_88061630;
	// beq cr6,0x88061be8
	if (ctx.cr6.eq) goto loc_88061BE8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880614cc
	if (ctx.cr6.eq) goto loc_880614CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_880614CC:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x880614CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r8,r10,22857
	ctx.r8.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x880614D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x880614fc
	if (ctx.cr6.eq) goto loc_880614FC;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880614fc
	if (ctx.cr6.eq) goto loc_880614FC;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r8,r10,22105
	ctx.r8.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_880614FC:
	// lhz r11,14(r9)
	ctx.current_instruction = 0x880614FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8806154c
	if (!ctx.cr6.eq) goto loc_8806154C;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x88061508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88061530
	if (!ctx.cr6.eq) goto loc_88061530;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x8806151C;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061524;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061528;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061530:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,2016
	ctx.r10.s64 = ctx.r11.s64 + 2016;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061538;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061540;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061544;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806154C:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x88061598
	if (!ctx.cr6.eq) goto loc_88061598;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x88061554;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806157c
	if (!ctx.cr6.eq) goto loc_8806157C;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061568;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061570;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061574;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806157C:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061584;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8806158C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061590;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061598:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x880615e4
	if (!ctx.cr6.eq) goto loc_880615E4;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x880615A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880615c8
	if (!ctx.cr6.eq) goto loc_880615C8;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x880615B4;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880615BC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880615C0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880615C8:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x880615D0;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880615D8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880615DC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880615E4:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x880615EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88061614
	if (!ctx.cr6.eq) goto loc_88061614;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061600;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061608;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8806160C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061614:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x8806161C;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061624;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061628;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061630:
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r9,r10,22094
	ctx.r9.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88061640;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x8806164C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061670
	if (ctx.cr6.eq) goto loc_88061670;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x88061670
	if (ctx.cr6.eq) goto loc_88061670;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_88061670:
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x88061670;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88061698
	if (!ctx.cr6.eq) goto loc_88061698;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x88061684;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8806168C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061690;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061698:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x880616A0;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880616A8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880616AC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880616B4:
	// lwz r11,14612(r3)
	ctx.current_instruction = 0x880616B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880616f4
	if (ctx.cr6.eq) goto loc_880616F4;
	// lwz r9,14512(r3)
	ctx.current_instruction = 0x880616C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14512);
	// lwz r8,14600(r3)
	ctx.current_instruction = 0x880616C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14600);
	// lwz r7,14516(r3)
	ctx.current_instruction = 0x880616C8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 14516);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r10,14596(r3)
	ctx.current_instruction = 0x880616D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14596);
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// mullw r8,r7,r9
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addze r9,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r9.s64 = temp.s64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r5,56(r3)
	ctx.current_instruction = 0x880616E8;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,60(r3)
	ctx.current_instruction = 0x880616F0;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
loc_880616F4:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x880616F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x88061700;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8806172c
	if (ctx.cr6.eq) goto loc_8806172C;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8806172c
	if (ctx.cr6.eq) goto loc_8806172C;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_8806172C:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x88061734;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8806173C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061740;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061748:
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88061858
	if (ctx.cr6.eq) goto loc_88061858;
	// lis r9,12889
	ctx.r9.s64 = 844693504;
	// ori r8,r9,21849
	ctx.r8.u64 = ctx.r9.u64 | 21849;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x880617e4
	if (ctx.cr6.eq) goto loc_880617E4;
	// lis r10,14677
	ctx.r10.s64 = 961871872;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x88061778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880617a0
	if (!ctx.cr6.eq) goto loc_880617A0;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x8806178C;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061794;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061798;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880617A0:
	// lwz r11,14612(r3)
	ctx.current_instruction = 0x880617A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880617c8
	if (ctx.cr6.eq) goto loc_880617C8;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x880617B4;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880617BC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880617C0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880617C8:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x880617D0;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880617D8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880617DC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880617E4:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x880617E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,22101
	ctx.r9.s64 = 1448411136;
	// ori r8,r9,22857
	ctx.r8.u64 = ctx.r9.u64 | 22857;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x880617F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88061814
	if (ctx.cr6.eq) goto loc_88061814;
	// lis r9,12338
	ctx.r9.s64 = 808583168;
	// ori r8,r9,13385
	ctx.r8.u64 = ctx.r9.u64 | 13385;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88061814
	if (ctx.cr6.eq) goto loc_88061814;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_88061814:
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x88061814;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806183c
	if (!ctx.cr6.eq) goto loc_8806183C;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061828;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061830;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061834;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806183C:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,4720
	ctx.r10.s64 = ctx.r11.s64 + 4720;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061844;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8806184C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061850;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061858:
	// lwz r4,14612(r3)
	ctx.current_instruction = 0x88061858;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 14612);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880618bc
	if (ctx.cr6.eq) goto loc_880618BC;
	// lwz r11,14512(r3)
	ctx.current_instruction = 0x88061864;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14512);
	// lwz r10,14600(r3)
	ctx.current_instruction = 0x88061868;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14600);
	// lwz r9,14516(r3)
	ctx.current_instruction = 0x8806186C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14516);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r7,14596(r3)
	ctx.current_instruction = 0x88061874;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 14596);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r8,56(r3)
	ctx.current_instruction = 0x880618AC;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,64(r3)
	ctx.current_instruction = 0x880618B4;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// stw r6,60(r3)
	ctx.current_instruction = 0x880618B8;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r6.u32);
loc_880618BC:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x880618BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x880618C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880618e4
	if (ctx.cr6.eq) goto loc_880618E4;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_880618E4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88061c98
	if (ctx.cr6.eq) goto loc_88061C98;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,1776
	ctx.r10.s64 = ctx.r11.s64 + 1776;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x880618F4;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880618FC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061900;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061908:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88061908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x88061914;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061940
	if (ctx.cr6.eq) goto loc_88061940;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061940
	if (ctx.cr6.eq) goto loc_88061940;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_88061940:
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x88061940;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88061968
	if (!ctx.cr6.eq) goto loc_88061968;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061954;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8806195C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061960;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061968:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061970;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061978;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8806197C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061984:
	// lis r10,21849
	ctx.r10.s64 = 1431896064;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x88061b4c
	if (ctx.cr6.gt) goto loc_88061B4C;
	// beq cr6,0x88061ad0
	if (ctx.cr6.eq) goto loc_88061AD0;
	// lis r10,20529
	ctx.r10.s64 = 1345388544;
	// ori r9,r10,13401
	ctx.r9.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061a7c
	if (ctx.cr6.eq) goto loc_88061A7C;
	// lis r10,21553
	ctx.r10.s64 = 1412497408;
	// ori r9,r10,13401
	ctx.r9.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061a28
	if (ctx.cr6.eq) goto loc_88061A28;
	// lis r10,21554
	ctx.r10.s64 = 1412562944;
	// ori r9,r10,13401
	ctx.r9.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x880619C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x880619D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061a00
	if (ctx.cr6.eq) goto loc_88061A00;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061a00
	if (ctx.cr6.eq) goto loc_88061A00;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_88061A00:
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x88061A00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88061ac0
	if (ctx.cr6.eq) goto loc_88061AC0;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061A14;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061A1C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061A20;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061A28:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88061A28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x88061A34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061a60
	if (ctx.cr6.eq) goto loc_88061A60;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061a60
	if (ctx.cr6.eq) goto loc_88061A60;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_88061A60:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,1360
	ctx.r10.s64 = ctx.r11.s64 + 1360;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061A68;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061A70;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061A74;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061A7C:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88061A7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x88061A88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061ab4
	if (ctx.cr6.eq) goto loc_88061AB4;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061ab4
	if (ctx.cr6.eq) goto loc_88061AB4;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_88061AB4:
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x88061AB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88061a60
	if (!ctx.cr6.eq) goto loc_88061A60;
loc_88061AC0:
	// li r3,5
	ctx.r3.s64 = 5;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061AC4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061AC8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061AD0:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88061AD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x88061ADC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061b08
	if (ctx.cr6.eq) goto loc_88061B08;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061b08
	if (ctx.cr6.eq) goto loc_88061B08;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_88061B08:
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x88061B08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88061b30
	if (!ctx.cr6.eq) goto loc_88061B30;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,3872
	ctx.r10.s64 = ctx.r11.s64 + 3872;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061B1C;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061B24;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061B28;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061B30:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061B38;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061B40;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061B44;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061B4C:
	// lis r10,22068
	ctx.r10.s64 = 1446248448;
	// ori r9,r10,12592
	ctx.r9.u64 = ctx.r10.u64 | 12592;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061cb4
	if (ctx.cr6.eq) goto loc_88061CB4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88061be8
	if (ctx.cr6.eq) goto loc_88061BE8;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r9,r10,22869
	ctx.r9.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88061B74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r11)
	ctx.current_instruction = 0x88061B78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88061ba4
	if (ctx.cr6.eq) goto loc_88061BA4;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061ba4
	if (ctx.cr6.eq) goto loc_88061BA4;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_88061BA4:
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x88061BA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88061bcc
	if (!ctx.cr6.eq) goto loc_88061BCC;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061BB8;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061BC0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061BC4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061BCC:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061BD4;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061BDC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061BE0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061BE8:
	// lwz r31,14612(r3)
	ctx.current_instruction = 0x88061BE8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 14612);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x88061c4c
	if (ctx.cr6.eq) goto loc_88061C4C;
	// lwz r11,14512(r3)
	ctx.current_instruction = 0x88061BF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14512);
	// lwz r10,14600(r3)
	ctx.current_instruction = 0x88061BF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14600);
	// lwz r9,14516(r3)
	ctx.current_instruction = 0x88061BFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14516);
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r8,14596(r3)
	ctx.current_instruction = 0x88061C04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14596);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r8,56(r3)
	ctx.current_instruction = 0x88061C3C;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,60(r3)
	ctx.current_instruction = 0x88061C44;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// stw r6,64(r3)
	ctx.current_instruction = 0x88061C48;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
loc_88061C4C:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88061C4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r11)
	ctx.current_instruction = 0x88061C50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x88061c74
	if (ctx.cr6.eq) goto loc_88061C74;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88061c74
	if (ctx.cr6.eq) goto loc_88061C74;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_88061C74:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x88061c98
	if (ctx.cr6.eq) goto loc_88061C98;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,1776
	ctx.r10.s64 = ctx.r11.s64 + 1776;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x88061C84;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061C8C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061C90;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061C98:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r10,r11,-24168
	ctx.r10.s64 = ctx.r11.s64 + -24168;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x88061CA0;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061CA8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061CAC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88061CB4:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88061CB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x88061CC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061cec
	if (ctx.cr6.eq) goto loc_88061CEC;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88061cec
	if (ctx.cr6.eq) goto loc_88061CEC;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88061ac0
	if (!ctx.cr6.eq) goto loc_88061AC0;
loc_88061CEC:
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x88061CEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88061ac0
	if (ctx.cr6.eq) goto loc_88061AC0;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14708(r3)
	ctx.current_instruction = 0x88061D00;
	REX_STORE_U32(ctx.r3.u32 + 14708, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88061D08;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88061D0C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807CE58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807CE58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807CE58) {
			switch (rex_dispatch_address) {
				case 0x8807CEB8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807CE58;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807CEB8: goto loc_8807CEB8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8807CE5C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8807CE60;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8807CE64;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8807CE68;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8807CE6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8807ce88
	if (!ctx.cr6.eq) goto loc_8807CE88;
loc_8807CE80:
	// li r3,-100
	ctx.r3.s64 = -100;
	// b 0x8807cef4
	goto loc_8807CEF4;
loc_8807CE88:
	// lwz r4,24(r31)
	ctx.current_instruction = 0x8807CE88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807CE8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// lwz r9,20(r31)
	ctx.current_instruction = 0x8807CE94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r10,r11
	ctx.r8.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8807ce80
	if (ctx.cr6.eq) goto loc_8807CE80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807cd90
	ctx.lr = 0x8807CEB8;
	sub_8807CD90(ctx, base);
loc_8807CEB8:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8807CEB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r31)
	ctx.current_instruction = 0x8807CEBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r30,r10,r9
	ctx.current_instruction = 0x8807CED0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r8,4(r31)
	ctx.current_instruction = 0x8807CED4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8807CEDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// divwu r6,r7,r8
	ctx.r6.u64 = uint32_t(ctx.r8.u32 ? ctx.r7.u32 / ctx.r8.u32 : 0);
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r4,r5,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r5.u64;
	// stw r4,24(r31)
	ctx.current_instruction = 0x8807CEF0;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
loc_8807CEF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8807CEF8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8807CF00;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8807CF04;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807D9DC) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807D9DC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807D9DC;
	ctx.current_instruction = 0x8807D9DC;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807DEF8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807DEF8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807DEF8;
	ctx.current_instruction = 0x8807DEF8;
	PPCRegister temp{};
	// lwz r10,30640(r3)
	ctx.current_instruction = 0x8807DEF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30640);
	// li r11,20
	ctx.r11.s64 = 20;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807E6E8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807E6E8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807E6E8;
	ctx.current_instruction = 0x8807E6E8;
	// lwz r11,30672(r3)
	ctx.current_instruction = 0x8807E6E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30672);
	// stw r11,0(r4)
	ctx.current_instruction = 0x8807E6EC;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,30676(r3)
	ctx.current_instruction = 0x8807E6F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30676);
	// stw r10,0(r5)
	ctx.current_instruction = 0x8807E6F4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807EF48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807EF48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807EF48) {
			switch (rex_dispatch_address) {
				case 0x8807EFEC:
				case 0x8807F0A4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807EF48;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807EFEC: goto loc_8807EFEC;
		case 0x8807F0A4: goto loc_8807F0A4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8807EF4C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8807EF50;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8807EF54;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30808(r3)
	ctx.current_instruction = 0x8807EF58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30808);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8807f1f8
	if (ctx.cr6.eq) goto loc_8807F1F8;
	// lwz r10,30740(r3)
	ctx.current_instruction = 0x8807EF68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30740);
	// lfs f0,30816(r3)
	ctx.current_instruction = 0x8807EF6C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 30816);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,30816(r3)
	ctx.current_instruction = 0x8807EF70;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 30816, temp.u32);
	// stw r5,30808(r3)
	ctx.current_instruction = 0x8807EF74;
	REX_STORE_U32(ctx.r3.u32 + 30808, ctx.r5.u32);
	// stfs f0,30820(r3)
	ctx.current_instruction = 0x8807EF78;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 30820, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,30812(r3)
	ctx.current_instruction = 0x8807EF80;
	REX_STORE_U32(ctx.r3.u32 + 30812, ctx.r11.u32);
	// beq cr6,0x8807f04c
	if (ctx.cr6.eq) goto loc_8807F04C;
	// lwz r11,30696(r3)
	ctx.current_instruction = 0x8807EF88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807f014
	if (ctx.cr6.eq) goto loc_8807F014;
	// lwz r11,30748(r3)
	ctx.current_instruction = 0x8807EF94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30748);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807f014
	if (ctx.cr6.eq) goto loc_8807F014;
	// lwz r11,30704(r3)
	ctx.current_instruction = 0x8807EFA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807f014
	if (ctx.cr6.eq) goto loc_8807F014;
	// lwz r11,30668(r3)
	ctx.current_instruction = 0x8807EFAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30668);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,30680(r3)
	ctx.current_instruction = 0x8807EFB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 30680);
	// lfd f13,30688(r3)
	ctx.current_instruction = 0x8807EFB8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 30688);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	ctx.current_instruction = 0x8807EFC4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8807EFC8;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	ctx.current_instruction = 0x8807EFCC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.current_instruction = 0x8807EFD0;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfd f0,8624(r10)
	ctx.current_instruction = 0x8807EFD8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 8624);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fsub f2,f13,f0
	ctx.f2.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fdiv f1,f10,f9
	ctx.f1.f64 = ctx.f10.f64 / ctx.f9.f64;
	// bl 0x881ef940
	ctx.lr = 0x8807EFEC;
	sub_881EF940(ctx, base);
loc_8807EFEC:
	// lfd f8,30768(r31)
	ctx.current_instruction = 0x8807EFEC;
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r31.u32 + 30768);
	// lfd f7,30776(r31)
	ctx.current_instruction = 0x8807EFF0;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r31.u32 + 30776);
	// fsub f6,f8,f7
	ctx.f6.f64 = ctx.f8.f64 - ctx.f7.f64;
	// lfd f5,30800(r31)
	ctx.current_instruction = 0x8807EFF8;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r31.u32 + 30800);
	// lfs f4,30820(r31)
	ctx.current_instruction = 0x8807EFFC;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30820);
	ctx.f4.f64 = double(temp.f32);
	// fmul f3,f6,f5
	ctx.f3.f64 = ctx.f6.f64 * ctx.f5.f64;
	// fmadd f2,f1,f4,f3
	ctx.f2.f64 = std::fma(ctx.f1.f64, ctx.f4.f64, ctx.f3.f64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// stfs f1,30820(r31)
	ctx.current_instruction = 0x8807F00C;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 30820, temp.u32);
	// b 0x8807f0b4
	goto loc_8807F0B4;
loc_8807F014:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807f04c
	if (ctx.cr6.eq) goto loc_8807F04C;
	// lwz r11,30748(r31)
	ctx.current_instruction = 0x8807F01C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30748);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807f04c
	if (ctx.cr6.eq) goto loc_8807F04C;
	// lfd f0,30768(r31)
	ctx.current_instruction = 0x8807F028;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 30768);
	// lfd f13,30776(r31)
	ctx.current_instruction = 0x8807F02C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 30776);
	// fsub f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 - ctx.f13.f64;
	// lfs f11,30820(r31)
	ctx.current_instruction = 0x8807F034;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30820);
	ctx.f11.f64 = double(temp.f32);
	// lfd f10,30800(r31)
	ctx.current_instruction = 0x8807F038;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r31.u32 + 30800);
	// fmadd f9,f12,f10,f11
	ctx.f9.f64 = std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f11.f64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,30820(r31)
	ctx.current_instruction = 0x8807F044;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 30820, temp.u32);
	// b 0x8807f0b4
	goto loc_8807F0B4;
loc_8807F04C:
	// lwz r11,30696(r31)
	ctx.current_instruction = 0x8807F04C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807f0b4
	if (ctx.cr6.eq) goto loc_8807F0B4;
	// lwz r11,30704(r31)
	ctx.current_instruction = 0x8807F058;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807f0b4
	if (ctx.cr6.eq) goto loc_8807F0B4;
	// lwz r11,30680(r31)
	ctx.current_instruction = 0x8807F064;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30680);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,30668(r31)
	ctx.current_instruction = 0x8807F06C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30668);
	// lfd f13,30688(r31)
	ctx.current_instruction = 0x8807F070;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 30688);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	ctx.current_instruction = 0x8807F07C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,8624(r10)
	ctx.current_instruction = 0x8807F080;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 8624);
	// fsub f2,f13,f0
	ctx.f2.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8807F088;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	ctx.current_instruction = 0x8807F08C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.current_instruction = 0x8807F090;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fdiv f1,f9,f10
	ctx.f1.f64 = ctx.f9.f64 / ctx.f10.f64;
	// bl 0x881ef940
	ctx.lr = 0x8807F0A4;
	sub_881EF940(ctx, base);
loc_8807F0A4:
	// lfs f8,30820(r31)
	ctx.current_instruction = 0x8807F0A4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30820);
	ctx.f8.f64 = double(temp.f32);
	// fmul f7,f1,f8
	ctx.f7.f64 = ctx.f1.f64 * ctx.f8.f64;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,30820(r31)
	ctx.current_instruction = 0x8807F0B0;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + 30820, temp.u32);
loc_8807F0B4:
	// ld r11,736(r31)
	ctx.current_instruction = 0x8807F0B4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// beq cr6,0x8807f1b0
	if (ctx.cr6.eq) goto loc_8807F1B0;
	// lwz r11,30808(r31)
	ctx.current_instruction = 0x8807F0C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30808);
	// lwz r10,30812(r31)
	ctx.current_instruction = 0x8807F0C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30812);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8807f1b0
	if (ctx.cr6.eq) goto loc_8807F1B0;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lfs f9,30816(r31)
	ctx.current_instruction = 0x8807F0D4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30816);
	ctx.f9.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfs f8,30820(r31)
	ctx.current_instruction = 0x8807F0DC;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30820);
	ctx.f8.f64 = double(temp.f32);
	// std r7,80(r1)
	ctx.current_instruction = 0x8807F0E0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// std r9,88(r1)
	ctx.current_instruction = 0x8807F0E8;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f7,88(r1)
	ctx.current_instruction = 0x8807F0EC;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8807F0F8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	ctx.current_instruction = 0x8807F0FC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfd f11,80(r1)
	ctx.current_instruction = 0x8807F104;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// lfs f12,6732(r5)
	ctx.current_instruction = 0x8807F118;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 6732);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmuls f4,f13,f13
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f11,f2,f9
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fsubs f1,f11,f7
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fdivs f10,f1,f3
	ctx.f10.f64 = double(float(ctx.f1.f64 / ctx.f3.f64));
	// stfs f10,30824(r31)
	ctx.current_instruction = 0x8807F138;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 30824, temp.u32);
	// fnmsubs f6,f10,f0,f11
	ctx.f6.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f11.f64)));
	// stfs f6,30828(r31)
	ctx.current_instruction = 0x8807F140;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + 30828, temp.u32);
	// fcmpu cr6,f6,f12
	ctx.cr6.compare(ctx.f6.f64, ctx.f12.f64);
	// bge cr6,0x8807f17c
	if (!ctx.cr6.lt) goto loc_8807F17C;
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stfs f12,30828(r31)
	ctx.current_instruction = 0x8807F154;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 30828, temp.u32);
	// lfs f0,6728(r11)
	ctx.current_instruction = 0x8807F158;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f13,f8,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f11.f64)));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,30824(r31)
	ctx.current_instruction = 0x8807F164;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r31.u32 + 30824, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8807F16C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8807F174;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8807F17C:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x8807f1f8
	if (!ctx.cr6.lt) goto loc_8807F1F8;
	// fadds f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stfs f12,30824(r31)
	ctx.current_instruction = 0x8807F18C;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 30824, temp.u32);
	// lfs f0,6728(r11)
	ctx.current_instruction = 0x8807F190;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,30828(r31)
	ctx.current_instruction = 0x8807F198;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 30828, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8807F1A0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8807F1A8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8807F1B0:
	// lwz r11,30808(r31)
	ctx.current_instruction = 0x8807F1B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30808);
	// lfs f0,30816(r31)
	ctx.current_instruction = 0x8807F1B4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30816);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,88(r1)
	ctx.current_instruction = 0x8807F1C4;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.current_instruction = 0x8807F1C8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	ctx.current_instruction = 0x8807F1CC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfd f10,88(r1)
	ctx.current_instruction = 0x8807F1D8;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fdivs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f7.f64));
	// stfs f5,30828(r31)
	ctx.current_instruction = 0x8807F1F0;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r31.u32 + 30828, temp.u32);
	// stfs f5,30824(r31)
	ctx.current_instruction = 0x8807F1F4;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r31.u32 + 30824, temp.u32);
loc_8807F1F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8807F1FC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8807F204;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88093BC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88093BC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88093BC8) {
			switch (rex_dispatch_address) {
				case 0x88093BD0:
				case 0x88093C58:
				case 0x88093CA8:
				case 0x88093CC4:
				case 0x88093CDC:
				case 0x88093D24:
				case 0x88093D54:
				case 0x88093D80:
				case 0x88093E40:
				case 0x88093E60:
				case 0x88093E9C:
				case 0x880941AC:
				case 0x880941C0:
				case 0x880941E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88093BC8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88093BD0: goto loc_88093BD0;
		case 0x88093C58: goto loc_88093C58;
		case 0x88093CA8: goto loc_88093CA8;
		case 0x88093CC4: goto loc_88093CC4;
		case 0x88093CDC: goto loc_88093CDC;
		case 0x88093D24: goto loc_88093D24;
		case 0x88093D54: goto loc_88093D54;
		case 0x88093D80: goto loc_88093D80;
		case 0x88093E40: goto loc_88093E40;
		case 0x88093E60: goto loc_88093E60;
		case 0x88093E9C: goto loc_88093E9C;
		case 0x880941AC: goto loc_880941AC;
		case 0x880941C0: goto loc_880941C0;
		case 0x880941E0: goto loc_880941E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88093BD0;
	__savegprlr_14(ctx, base);
loc_88093BD0:
	// stwu r1,-336(r1)
	ctx.current_instruction = 0x88093BD0;
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,476(r1)
	ctx.current_instruction = 0x88093BD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r26,468(r1)
	ctx.current_instruction = 0x88093BE0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lwz r9,444(r1)
	ctx.current_instruction = 0x88093BE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// stw r8,144(r1)
	ctx.current_instruction = 0x88093BEC;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lwz r10,436(r1)
	ctx.current_instruction = 0x88093BF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r21,8(r11)
	ctx.current_instruction = 0x88093BFC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r8,0(r11)
	ctx.current_instruction = 0x88093C04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r25,4(r11)
	ctx.current_instruction = 0x88093C0C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,12(r11)
	ctx.current_instruction = 0x88093C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r22,8(r10)
	ctx.current_instruction = 0x88093C20;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r21,136(r1)
	ctx.current_instruction = 0x88093C24;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// stw r8,128(r1)
	ctx.current_instruction = 0x88093C2C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r25,132(r1)
	ctx.current_instruction = 0x88093C34;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,140(r1)
	ctx.current_instruction = 0x88093C3C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r28,r30,256
	ctx.r28.s64 = ctx.r30.s64 + 256;
	// lwz r21,12(r10)
	ctx.current_instruction = 0x88093C44;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r20,8(r9)
	ctx.current_instruction = 0x88093C48;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r19,12(r9)
	ctx.current_instruction = 0x88093C4C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r16,8(r26)
	ctx.current_instruction = 0x88093C50;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x8810a970
	ctx.lr = 0x88093C58;
	sub_8810A970(ctx, base);
loc_88093C58:
	// lwz r8,132(r1)
	ctx.current_instruction = 0x88093C58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,128(r1)
	ctx.current_instruction = 0x88093C5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r25,16
	ctx.r25.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88093C64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r26,428(r1)
	ctx.current_instruction = 0x88093C70;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// mullw r6,r10,r4
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88093C88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// bne cr6,0x88093cac
	if (!ctx.cr6.eq) goto loc_88093CAC;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x88093C90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r25,84(r1)
	ctx.current_instruction = 0x88093C98;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88093CA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88093CA8:
	// b 0x88093cc4
	goto loc_88093CC4;
loc_88093CAC:
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x88093CAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,84(r1)
	ctx.current_instruction = 0x88093CB4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88093CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88093CC4:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810a970
	ctx.lr = 0x88093CDC;
	sub_8810A970(ctx, base);
loc_88093CDC:
	// lwz r8,140(r1)
	ctx.current_instruction = 0x88093CDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88093CE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// lwz r7,136(r1)
	ctx.current_instruction = 0x88093CE8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x88093d28
	if (!ctx.cr6.eq) goto loc_88093D28;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x88093CFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88093D04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// stw r25,84(r1)
	ctx.current_instruction = 0x88093D0C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x88093D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88093D24:
	// b 0x88093d54
	goto loc_88093D54;
loc_88093D28:
	// stw r25,84(r1)
	ctx.current_instruction = 0x88093D28;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x88093D30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88093D3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x88093D54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88093D54:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x88093D54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x88093D80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88093D80:
	// lwz r3,2604(r31)
	ctx.current_instruction = 0x88093D80;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// lwz r11,128(r1)
	ctx.current_instruction = 0x88093D84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r10,r22,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r22.u64;
	// lwz r9,132(r1)
	ctx.current_instruction = 0x88093D8C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,136(r1)
	ctx.current_instruction = 0x88093D90;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// subf r6,r20,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r20.u64;
	// lwz r5,140(r1)
	ctx.current_instruction = 0x88093D98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r26,2608(r31)
	ctx.current_instruction = 0x88093DA0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r28,2616(r31)
	ctx.current_instruction = 0x88093DA4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r8,r21,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r21.u64;
	// lwz r29,2612(r31)
	ctx.current_instruction = 0x88093DAC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// subf r4,r19,r26
	ctx.r4.u64 = ctx.r26.u64 - ctx.r19.u64;
	// lwz r22,28020(r31)
	ctx.current_instruction = 0x88093DB4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// and r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 & ctx.r28.u64;
	// and r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 & ctx.r29.u64;
	// and r4,r8,r28
	ctx.r4.u64 = ctx.r8.u64 & ctx.r28.u64;
	// and r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 & ctx.r29.u64;
	// subf r28,r26,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r26.u64;
	// subf r29,r3,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r27,r3,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r3.u64;
	// stw r28,168(r1)
	ctx.current_instruction = 0x88093DE0;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// subf r26,r26,r4
	ctx.r26.u64 = ctx.r4.u64 - ctx.r26.u64;
	// stw r29,160(r1)
	ctx.current_instruction = 0x88093DE8;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r27,176(r1)
	ctx.current_instruction = 0x88093DEC;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r26,180(r1)
	ctx.current_instruction = 0x88093DF4;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// beq cr6,0x88093ec0
	if (ctx.cr6.eq) goto loc_88093EC0;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// stw r23,116(r1)
	ctx.current_instruction = 0x88093E00;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// stw r24,108(r1)
	ctx.current_instruction = 0x88093E08;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r9,92(r1)
	ctx.current_instruction = 0x88093E10;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	ctx.current_instruction = 0x88093E14;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x88093E20;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88093E40;
	sub_88085938(ctx, base);
loc_88093E40:
	// lwz r25,420(r1)
	ctx.current_instruction = 0x88093E40;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r30,144(r1)
	ctx.current_instruction = 0x88093E4C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x88085e60
	ctx.lr = 0x88093E60;
	sub_88085E60(ctx, base);
loc_88093E60:
	// lwz r7,148(r1)
	ctx.current_instruction = 0x88093E60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r24,r3,r7
	ctx.r24.u64 = ctx.r3.u64 + ctx.r7.u64;
	// bne cr6,0x88093e84
	if (!ctx.cr6.eq) goto loc_88093E84;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x88093e84
	if (!ctx.cr6.eq) goto loc_88093E84;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x88093e88
	if (ctx.cr6.eq) goto loc_88093E88;
loc_88093E84:
	// li r6,1
	ctx.r6.s64 = 1;
loc_88093E88:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x88093E9C;
	sub_88085E60(ctx, base);
loc_88093E9C:
	// lwz r10,108(r17)
	ctx.current_instruction = 0x88093E9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 108);
	// add r9,r3,r24
	ctx.r9.u64 = ctx.r3.u64 + ctx.r24.u64;
	// lwz r11,152(r1)
	ctx.current_instruction = 0x88093EA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,484(r1)
	ctx.current_instruction = 0x88093EA8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r8)
	ctx.current_instruction = 0x88093EB4;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88093EC0:
	// lwz r11,28024(r31)
	ctx.current_instruction = 0x88093EC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88094198
	if (ctx.cr6.eq) goto loc_88094198;
	// addi r11,r18,14
	ctx.r11.s64 = ctx.r18.s64 + 14;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// subf r8,r18,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r18.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r11,140(r1)
	ctx.current_instruction = 0x88093EDC;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// stw r8,152(r1)
	ctx.current_instruction = 0x88093EE4;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// b 0x88093ef4
	goto loc_88093EF4;
loc_88093EEC:
	// lwz r10,148(r1)
	ctx.current_instruction = 0x88093EEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,152(r1)
	ctx.current_instruction = 0x88093EF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_88093EF4:
	// lbz r5,31(r10)
	ctx.current_instruction = 0x88093EF4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 31);
	// lbz r3,29(r10)
	ctx.current_instruction = 0x88093EF8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 29);
	// lbz r7,28(r10)
	ctx.current_instruction = 0x88093EFC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 28);
	// lbz r31,24(r10)
	ctx.current_instruction = 0x88093F00;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 24);
	// lbz r4,27(r10)
	ctx.current_instruction = 0x88093F04;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 27);
	// lbz r30,26(r10)
	ctx.current_instruction = 0x88093F08;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 26);
	// lbz r6,25(r10)
	ctx.current_instruction = 0x88093F0C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 25);
	// lbz r27,23(r10)
	ctx.current_instruction = 0x88093F10;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// lbz r29,22(r10)
	ctx.current_instruction = 0x88093F14;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// lbz r28,21(r10)
	ctx.current_instruction = 0x88093F18;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// lbz r24,20(r10)
	ctx.current_instruction = 0x88093F1C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// lbz r26,19(r10)
	ctx.current_instruction = 0x88093F20;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// lbz r25,18(r10)
	ctx.current_instruction = 0x88093F24;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// lbz r23,17(r10)
	ctx.current_instruction = 0x88093F28;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// lbzu r9,16(r10)
	ctx.current_instruction = 0x88093F2C;
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbz r22,-14(r11)
	ctx.current_instruction = 0x88093F30;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + -14);
	// lbz r21,-13(r11)
	ctx.current_instruction = 0x88093F34;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + -13);
	// subf r9,r22,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r22.u64;
	// lbz r20,-12(r11)
	ctx.current_instruction = 0x88093F3C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + -12);
	// subf r23,r21,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r21.u64;
	// stw r7,156(r1)
	ctx.current_instruction = 0x88093F44;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// stw r10,148(r1)
	ctx.current_instruction = 0x88093F48;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// mullw r10,r9,r9
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// lbzx r8,r8,r11
	ctx.current_instruction = 0x88093F50;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stw r10,136(r1)
	ctx.current_instruction = 0x88093F54;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lbz r7,-3(r11)
	ctx.current_instruction = 0x88093F58;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r22,-11(r11)
	ctx.current_instruction = 0x88093F5C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + -11);
	// lbz r9,-10(r11)
	ctx.current_instruction = 0x88093F60;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -10);
	// lbz r21,-9(r11)
	ctx.current_instruction = 0x88093F64;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + -9);
	// lbz r19,-8(r11)
	ctx.current_instruction = 0x88093F68;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + -8);
	// lbz r18,-7(r11)
	ctx.current_instruction = 0x88093F6C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + -7);
	// lbz r17,-6(r11)
	ctx.current_instruction = 0x88093F70;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// subf r25,r20,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r20.u64;
	// lbz r16,-5(r11)
	ctx.current_instruction = 0x88093F78;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// mullw r10,r23,r23
	ctx.r10.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r23.s32);
	// lbz r15,1(r11)
	ctx.current_instruction = 0x88093F80;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r14,0(r11)
	ctx.current_instruction = 0x88093F84;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r20,-1(r11)
	ctx.current_instruction = 0x88093F88;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r23,-2(r11)
	ctx.current_instruction = 0x88093F8C;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r11,-4(r11)
	ctx.current_instruction = 0x88093F90;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// stw r5,132(r1)
	ctx.current_instruction = 0x88093F94;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r11,128(r1)
	ctx.current_instruction = 0x88093F98;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mullw r11,r25,r25
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r25.s32);
	// lwz r5,136(r1)
	ctx.current_instruction = 0x88093FA0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r5,r22,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r22.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r5,r5
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// lwz r5,132(r1)
	ctx.current_instruction = 0x88093FB4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// subf r9,r9,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r9,r9
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// subf r9,r21,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r21.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r9,r9
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// subf r9,r19,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r19.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r9,r9
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// subf r9,r18,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r18.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r9,r9
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// subf r9,r17,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r17.u64;
	// lwz r31,128(r1)
	ctx.current_instruction = 0x88093FEC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r9,r9
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// subf r6,r16,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r16.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r6,r6
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// lwz r6,144(r1)
	ctx.current_instruction = 0x88094004;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r31,r31,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r31.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r31,r31
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// subf r4,r7,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r7.u64;
	// lwz r7,156(r1)
	ctx.current_instruction = 0x88094018;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// subf r9,r14,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r14.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r20,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r20.u64;
	// lwz r3,140(r1)
	ctx.current_instruction = 0x88094028;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mullw r11,r4,r4
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// subf r5,r15,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r15.u64;
	// subf r4,r23,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r23.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r4,r4
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r8,r8
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r9,r9
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r5,r5
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r11,140(r1)
	ctx.current_instruction = 0x88094064;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r10,144(r1)
	ctx.current_instruction = 0x88094068;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bdnz 0x88093eec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88093EEC;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lwz r10,168(r1)
	ctx.current_instruction = 0x88094074;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lwz r11,160(r1)
	ctx.current_instruction = 0x8809407C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// std r9,168(r1)
	ctx.current_instruction = 0x88094080;
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfd f0,168(r1)
	ctx.current_instruction = 0x88094084;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfd f0,12088(r8)
	ctx.current_instruction = 0x88094094;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// xor r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// subf r9,r6,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r6.u64;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// addi r11,r11,6848
	ctx.r11.s64 = ctx.r11.s64 + 6848;
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,168(r1)
	ctx.current_instruction = 0x880940C0;
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.f10.u64);
	// lwz r6,172(r1)
	ctx.current_instruction = 0x880940C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// bgt cr6,0x88094100
	if (ctx.cr6.gt) goto loc_88094100;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x88094100
	if (ctx.cr6.gt) goto loc_88094100;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,460(r1)
	ctx.current_instruction = 0x880940DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwzx r4,r7,r11
	ctx.current_instruction = 0x880940E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r5,r8,r11
	ctx.current_instruction = 0x880940E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.current_instruction = 0x880940F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r8,r3,r10
	ctx.current_instruction = 0x880940F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x8809410c
	goto loc_8809410C;
loc_88094100:
	// lwz r10,460(r1)
	ctx.current_instruction = 0x88094100;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r9,20(r10)
	ctx.current_instruction = 0x88094104;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809410C:
	// lwz r9,176(r1)
	ctx.current_instruction = 0x8809410C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r8,180(r1)
	ctx.current_instruction = 0x88094110;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// srawi r4,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 31;
	// xor r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// xor r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// subf r9,r5,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x88094178
	if (ctx.cr6.gt) goto loc_88094178;
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x88094178
	if (ctx.cr6.gt) goto loc_88094178;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r11
	ctx.current_instruction = 0x88094144;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.current_instruction = 0x88094148;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r3,r10
	ctx.current_instruction = 0x88094154;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r11,r11,r10
	ctx.current_instruction = 0x88094158;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,484(r1)
	ctx.current_instruction = 0x8809415C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r11,0(r10)
	ctx.current_instruction = 0x8809416C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88094178:
	// lwz r11,20(r10)
	ctx.current_instruction = 0x88094178;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,484(r1)
	ctx.current_instruction = 0x8809417C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r11,0(r10)
	ctx.current_instruction = 0x8809418C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88094198:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,460(r1)
	ctx.current_instruction = 0x8809419C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085820
	ctx.lr = 0x880941AC;
	sub_88085820(ctx, base);
loc_880941AC:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085820
	ctx.lr = 0x880941C0;
	sub_88085820(ctx, base);
loc_880941C0:
	// add r31,r27,r3
	ctx.r31.u64 = ctx.r27.u64 + ctx.r3.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,452(r1)
	ctx.current_instruction = 0x880941C8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x880941E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880941E0:
	// lwz r11,484(r1)
	ctx.current_instruction = 0x880941E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stw r10,0(r11)
	ctx.current_instruction = 0x880941E8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BC698) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BC698;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BC698) {
			switch (rex_dispatch_address) {
				case 0x880BC6A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BC698;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880BC6A0: goto loc_880BC6A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880BC6A0;
	__savegprlr_20(ctx, base);
loc_880BC6A0:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r4,r6,3
	ctx.r4.s64 = ctx.r6.s64 + 3;
	// addi r30,r6,2
	ctx.r30.s64 = ctx.r6.s64 + 2;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,0(r10)
	ctx.current_instruction = 0x880BC6C8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r25,4(r10)
	ctx.current_instruction = 0x880BC6D0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// lwzx r30,r4,r5
	ctx.current_instruction = 0x880BC6E4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// addi r26,r11,2
	ctx.r26.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r24,r28,r5
	ctx.current_instruction = 0x880BC6F0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r10)
	ctx.current_instruction = 0x880BC6FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r28,4(r10)
	ctx.current_instruction = 0x880BC704;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r22,r11,2
	ctx.r22.s64 = ctx.r11.s64 + 2;
	// rlwinm r21,r29,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r5
	ctx.current_instruction = 0x880BC714;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r5
	ctx.current_instruction = 0x880BC71C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,4(r9)
	ctx.current_instruction = 0x880BC724;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r20,r4,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r22,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lwzx r4,r21,r5
	ctx.current_instruction = 0x880BC734;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r5.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r26,r26,r5
	ctx.current_instruction = 0x880BC73C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.current_instruction = 0x880BC744;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r30,r20,r5
	ctx.current_instruction = 0x880BC74C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r5.u32);
	// lwzx r29,r22,r5
	ctx.current_instruction = 0x880BC750;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r5.u32);
	// add r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 + ctx.r26.u64;
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,0(r11)
	ctx.current_instruction = 0x880BC760;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880BC764;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r9,0(r23)
	ctx.current_instruction = 0x880BC7B0;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// lwzx r8,r8,r5
	ctx.current_instruction = 0x880BC7B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lwzx r4,r4,r5
	ctx.current_instruction = 0x880BC7B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r3,4(r10)
	ctx.current_instruction = 0x880BC7C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// lwz r4,0(r10)
	ctx.current_instruction = 0x880BC7CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,4(r10)
	ctx.current_instruction = 0x880BC7E4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r27,0(r10)
	ctx.current_instruction = 0x880BC7EC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r26,r11,3
	ctx.r26.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r9,r5
	ctx.current_instruction = 0x880BC7F8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// addi r25,r11,2
	ctx.r25.s64 = ctx.r11.s64 + 2;
	// lwzx r3,r31,r5
	ctx.current_instruction = 0x880BC800;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r8,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,0(r10)
	ctx.current_instruction = 0x880BC824;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r22,r31,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r10)
	ctx.current_instruction = 0x880BC82C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwzx r8,r26,r5
	ctx.current_instruction = 0x880BC838;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// lwzx r31,r25,r5
	ctx.current_instruction = 0x880BC83C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwzx r3,r24,r5
	ctx.current_instruction = 0x880BC848;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r5.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwzx r28,r22,r5
	ctx.current_instruction = 0x880BC850;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r5.u32);
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r31,4(r10)
	ctx.current_instruction = 0x880BC85C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r8,0(r10)
	ctx.current_instruction = 0x880BC864;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,4(r23)
	ctx.current_instruction = 0x880BC8AC;
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r8.u32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r10)
	ctx.current_instruction = 0x880BC8B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,0(r10)
	ctx.current_instruction = 0x880BC8B8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r28,r5
	ctx.current_instruction = 0x880BC8C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r4,r30,r5
	ctx.current_instruction = 0x880BC8D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// lwz r3,4(r10)
	ctx.current_instruction = 0x880BC8D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,0(r10)
	ctx.current_instruction = 0x880BC8DC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r26,r11,3
	ctx.r26.s64 = ctx.r11.s64 + 3;
	// addi r25,r11,2
	ctx.r25.s64 = ctx.r11.s64 + 2;
	// lwzx r9,r9,r5
	ctx.current_instruction = 0x880BC8E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// add r10,r27,r5
	ctx.r10.u64 = ctx.r27.u64 + ctx.r5.u64;
	// lwzx r28,r28,r5
	ctx.current_instruction = 0x880BC8F0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwzx r8,r26,r5
	ctx.current_instruction = 0x880BC908;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwzx r31,r25,r5
	ctx.current_instruction = 0x880BC910;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lwz r4,4(r10)
	ctx.current_instruction = 0x880BC918;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwzx r4,r27,r5
	ctx.current_instruction = 0x880BC944;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwzx r8,r31,r5
	ctx.current_instruction = 0x880BC950;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 + 12;
	// lwzx r6,r3,r5
	ctx.current_instruction = 0x880BC958;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r10)
	ctx.current_instruction = 0x880BC964;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r6,0(r10)
	ctx.current_instruction = 0x880BC96C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r23)
	ctx.current_instruction = 0x880BC994;
	REX_STORE_U32(ctx.r23.u32 + 8, ctx.r8.u32);
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// lwz r28,4(r10)
	ctx.current_instruction = 0x880BC99C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwzx r30,r4,r5
	ctx.current_instruction = 0x880BC9A4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r10)
	ctx.current_instruction = 0x880BC9B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r27,r11,3
	ctx.r27.s64 = ctx.r11.s64 + 3;
	// lwz r31,0(r10)
	ctx.current_instruction = 0x880BC9C0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r26,r27,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r5
	ctx.current_instruction = 0x880BC9D0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// addi r25,r11,2
	ctx.r25.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r27,r3,r5
	ctx.current_instruction = 0x880BC9DC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r10)
	ctx.current_instruction = 0x880BC9E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r26,r5
	ctx.current_instruction = 0x880BC9EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// addi r26,r11,3
	ctx.r26.s64 = ctx.r11.s64 + 3;
	// addi r24,r11,2
	ctx.r24.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r5
	ctx.current_instruction = 0x880BCA00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r7,r6,r5
	ctx.current_instruction = 0x880BCA08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r6,r9,r5
	ctx.current_instruction = 0x880BCA0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r9,r25,r5
	ctx.current_instruction = 0x880BCA14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwz r7,4(r11)
	ctx.current_instruction = 0x880BCA20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwzx r10,r26,r5
	ctx.current_instruction = 0x880BCA34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r4,r4,r5
	ctx.current_instruction = 0x880BCA3C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r9,0(r11)
	ctx.current_instruction = 0x880BCA48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r3,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,12(r23)
	ctx.current_instruction = 0x880BCA6C;
	REX_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BFAE0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880BFAE0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BFAE0;
	ctx.current_instruction = 0x880BFAE0;
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880BFAE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.current_instruction = 0x880BFAE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880bfaf8
	if (!ctx.cr6.gt) goto loc_880BFAF8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880BFAF8:
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880C0180) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C0180;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C0180) {
			switch (rex_dispatch_address) {
				case 0x880C0188:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C0180;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C0188: goto loc_880C0188;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880C0188;
	__savegprlr_26(ctx, base);
loc_880C0188:
	// lwz r29,84(r1)
	ctx.current_instruction = 0x880C0188;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r3,92(r1)
	ctx.current_instruction = 0x880C0190;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r28,r4,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r27,r5,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r26,r29,r3
	ctx.r26.u64 = ctx.r3.u64 - ctx.r29.u64;
	// addi r30,r3,-2
	ctx.r30.s64 = ctx.r3.s64 + -2;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// addi r31,r6,-1
	ctx.r31.s64 = ctx.r6.s64 + -1;
	// addi r29,r28,-2
	ctx.r29.s64 = ctx.r28.s64 + -2;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// addi r28,r27,-2
	ctx.r28.s64 = ctx.r27.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r5,2
	ctx.r8.s64 = ctx.r5.s64 + 2;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// addi r27,r26,-4
	ctx.r27.s64 = ctx.r26.s64 + -4;
loc_880C01D4:
	// lbz r4,-2(r11)
	ctx.current_instruction = 0x880C01D4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbzx r5,r29,r11
	ctx.current_instruction = 0x880C01D8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// sth r5,2(r10)
	ctx.current_instruction = 0x880C01E0;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r5.u16);
	// lbz r4,2(r7)
	ctx.current_instruction = 0x880C01E4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// lbz r5,-1(r11)
	ctx.current_instruction = 0x880C01E8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,4(r10)
	ctx.current_instruction = 0x880C01F0;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r5.u16);
	// lbz r4,3(r7)
	ctx.current_instruction = 0x880C01F4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// lbz r5,0(r11)
	ctx.current_instruction = 0x880C01F8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,6(r10)
	ctx.current_instruction = 0x880C0200;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r5.u16);
	// lbz r4,4(r7)
	ctx.current_instruction = 0x880C0204;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lbz r5,1(r11)
	ctx.current_instruction = 0x880C0208;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,8(r10)
	ctx.current_instruction = 0x880C0210;
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r5.u16);
	// lbz r4,5(r7)
	ctx.current_instruction = 0x880C0214;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// lbz r5,2(r11)
	ctx.current_instruction = 0x880C0218;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,10(r10)
	ctx.current_instruction = 0x880C0220;
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r5.u16);
	// lbz r4,6(r7)
	ctx.current_instruction = 0x880C0224;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 6);
	// lbz r5,3(r11)
	ctx.current_instruction = 0x880C0228;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,12(r10)
	ctx.current_instruction = 0x880C0230;
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r5.u16);
	// lbz r4,7(r7)
	ctx.current_instruction = 0x880C0234;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 7);
	// lbz r5,4(r11)
	ctx.current_instruction = 0x880C0238;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,14(r10)
	ctx.current_instruction = 0x880C0240;
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r5.u16);
	// lbz r4,8(r7)
	ctx.current_instruction = 0x880C0244;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 8);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x880C0248;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,16(r10)
	ctx.current_instruction = 0x880C0250;
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r5.u16);
	// lbz r4,9(r7)
	ctx.current_instruction = 0x880C0254;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 9);
	// lbz r5,6(r11)
	ctx.current_instruction = 0x880C0258;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,18(r10)
	ctx.current_instruction = 0x880C0260;
	REX_STORE_U16(ctx.r10.u32 + 18, ctx.r5.u16);
	// lbz r4,10(r7)
	ctx.current_instruction = 0x880C0264;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 10);
	// lbz r5,7(r11)
	ctx.current_instruction = 0x880C0268;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,20(r10)
	ctx.current_instruction = 0x880C0270;
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r5.u16);
	// lbz r4,11(r7)
	ctx.current_instruction = 0x880C0274;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 11);
	// lbz r5,8(r11)
	ctx.current_instruction = 0x880C0278;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,22(r10)
	ctx.current_instruction = 0x880C0280;
	REX_STORE_U16(ctx.r10.u32 + 22, ctx.r5.u16);
	// lbz r4,12(r7)
	ctx.current_instruction = 0x880C0284;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 12);
	// lbz r5,9(r11)
	ctx.current_instruction = 0x880C0288;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,24(r10)
	ctx.current_instruction = 0x880C0290;
	REX_STORE_U16(ctx.r10.u32 + 24, ctx.r5.u16);
	// lbz r4,13(r7)
	ctx.current_instruction = 0x880C0294;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 13);
	// lbz r5,10(r11)
	ctx.current_instruction = 0x880C0298;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,26(r10)
	ctx.current_instruction = 0x880C02A0;
	REX_STORE_U16(ctx.r10.u32 + 26, ctx.r5.u16);
	// lbz r4,14(r7)
	ctx.current_instruction = 0x880C02A4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 14);
	// lbz r5,11(r11)
	ctx.current_instruction = 0x880C02A8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,28(r10)
	ctx.current_instruction = 0x880C02B0;
	REX_STORE_U16(ctx.r10.u32 + 28, ctx.r5.u16);
	// lbz r4,15(r7)
	ctx.current_instruction = 0x880C02B4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 15);
	// lbz r5,12(r11)
	ctx.current_instruction = 0x880C02B8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,30(r10)
	ctx.current_instruction = 0x880C02C0;
	REX_STORE_U16(ctx.r10.u32 + 30, ctx.r5.u16);
	// lbz r4,16(r7)
	ctx.current_instruction = 0x880C02C4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 16);
	// lbz r5,13(r11)
	ctx.current_instruction = 0x880C02C8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,32(r10)
	ctx.current_instruction = 0x880C02D0;
	REX_STORE_U16(ctx.r10.u32 + 32, ctx.r5.u16);
	// lbz r4,17(r7)
	ctx.current_instruction = 0x880C02D4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 17);
	// lbz r5,14(r11)
	ctx.current_instruction = 0x880C02D8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,34(r10)
	ctx.current_instruction = 0x880C02E0;
	REX_STORE_U16(ctx.r10.u32 + 34, ctx.r5.u16);
	// lbz r4,18(r7)
	ctx.current_instruction = 0x880C02E4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 18);
	// lbz r5,15(r11)
	ctx.current_instruction = 0x880C02E8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,36(r10)
	ctx.current_instruction = 0x880C02F0;
	REX_STORE_U16(ctx.r10.u32 + 36, ctx.r5.u16);
	// lbz r4,19(r7)
	ctx.current_instruction = 0x880C02F4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 19);
	// lbz r5,16(r11)
	ctx.current_instruction = 0x880C02F8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,38(r10)
	ctx.current_instruction = 0x880C0300;
	REX_STORE_U16(ctx.r10.u32 + 38, ctx.r5.u16);
	// lbz r5,17(r11)
	ctx.current_instruction = 0x880C0304;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r4,20(r7)
	ctx.current_instruction = 0x880C0308;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 20);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,40(r10)
	ctx.current_instruction = 0x880C0310;
	REX_STORE_U16(ctx.r10.u32 + 40, ctx.r5.u16);
	// lbz r5,18(r11)
	ctx.current_instruction = 0x880C0314;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r4,21(r7)
	ctx.current_instruction = 0x880C0318;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 21);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,42(r10)
	ctx.current_instruction = 0x880C0320;
	REX_STORE_U16(ctx.r10.u32 + 42, ctx.r5.u16);
	// lbz r4,22(r7)
	ctx.current_instruction = 0x880C0324;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 22);
	// lbz r5,19(r11)
	ctx.current_instruction = 0x880C0328;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,44(r10)
	ctx.current_instruction = 0x880C0330;
	REX_STORE_U16(ctx.r10.u32 + 44, ctx.r5.u16);
	// lbz r4,23(r7)
	ctx.current_instruction = 0x880C0334;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 23);
	// lbz r5,20(r11)
	ctx.current_instruction = 0x880C0338;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,46(r10)
	ctx.current_instruction = 0x880C0340;
	REX_STORE_U16(ctx.r10.u32 + 46, ctx.r5.u16);
	// lbz r4,24(r7)
	ctx.current_instruction = 0x880C0344;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 24);
	// lbz r5,21(r11)
	ctx.current_instruction = 0x880C0348;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,48(r10)
	ctx.current_instruction = 0x880C0350;
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r5.u16);
	// lbz r4,25(r7)
	ctx.current_instruction = 0x880C0354;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 25);
	// lbz r5,22(r11)
	ctx.current_instruction = 0x880C0358;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,50(r10)
	ctx.current_instruction = 0x880C0360;
	REX_STORE_U16(ctx.r10.u32 + 50, ctx.r5.u16);
	// lbz r4,26(r7)
	ctx.current_instruction = 0x880C0364;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 26);
	// lbz r5,23(r11)
	ctx.current_instruction = 0x880C0368;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,52(r10)
	ctx.current_instruction = 0x880C0370;
	REX_STORE_U16(ctx.r10.u32 + 52, ctx.r5.u16);
	// lbz r4,27(r7)
	ctx.current_instruction = 0x880C0374;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 27);
	// lbz r5,24(r11)
	ctx.current_instruction = 0x880C0378;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,54(r10)
	ctx.current_instruction = 0x880C0380;
	REX_STORE_U16(ctx.r10.u32 + 54, ctx.r5.u16);
	// lbz r5,28(r7)
	ctx.current_instruction = 0x880C0384;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 28);
	// lbz r4,25(r11)
	ctx.current_instruction = 0x880C0388;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// sth r4,56(r10)
	ctx.current_instruction = 0x880C0390;
	REX_STORE_U16(ctx.r10.u32 + 56, ctx.r4.u16);
	// lbz r5,29(r7)
	ctx.current_instruction = 0x880C0394;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 29);
	// lbz r4,26(r11)
	ctx.current_instruction = 0x880C0398;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 26);
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// sth r4,58(r10)
	ctx.current_instruction = 0x880C03A0;
	REX_STORE_U16(ctx.r10.u32 + 58, ctx.r4.u16);
	// lbz r5,30(r7)
	ctx.current_instruction = 0x880C03A4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 30);
	// lbz r4,27(r11)
	ctx.current_instruction = 0x880C03A8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 27);
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// sth r4,60(r10)
	ctx.current_instruction = 0x880C03B0;
	REX_STORE_U16(ctx.r10.u32 + 60, ctx.r4.u16);
	// lbz r5,31(r7)
	ctx.current_instruction = 0x880C03B4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 31);
	// lbz r4,28(r11)
	ctx.current_instruction = 0x880C03B8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// sth r4,62(r10)
	ctx.current_instruction = 0x880C03C0;
	REX_STORE_U16(ctx.r10.u32 + 62, ctx.r4.u16);
	// lbz r5,29(r11)
	ctx.current_instruction = 0x880C03C4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 29);
	// lbzu r4,32(r7)
	ctx.current_instruction = 0x880C03C8;
	ea = 32 + ctx.r7.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sthu r4,64(r10)
	ctx.current_instruction = 0x880C03D0;
	ea = 64 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// lbz r4,1(r6)
	ctx.current_instruction = 0x880C03D4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r5,-2(r8)
	ctx.current_instruction = 0x880C03D8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + -2);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,-4(r9)
	ctx.current_instruction = 0x880C03E0;
	REX_STORE_U16(ctx.r9.u32 + -4, ctx.r5.u16);
	// lbz r5,2(r6)
	ctx.current_instruction = 0x880C03E4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r4,-1(r8)
	ctx.current_instruction = 0x880C03E8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// sth r4,-2(r9)
	ctx.current_instruction = 0x880C03F0;
	REX_STORE_U16(ctx.r9.u32 + -2, ctx.r4.u16);
	// lbz r4,3(r6)
	ctx.current_instruction = 0x880C03F4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r5,0(r8)
	ctx.current_instruction = 0x880C03F8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,0(r9)
	ctx.current_instruction = 0x880C0400;
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r5.u16);
	// lbz r5,4(r6)
	ctx.current_instruction = 0x880C0404;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// lbz r4,1(r8)
	ctx.current_instruction = 0x880C0408;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// sth r4,2(r9)
	ctx.current_instruction = 0x880C0410;
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r4.u16);
	// lbz r4,5(r6)
	ctx.current_instruction = 0x880C0414;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// lbz r5,2(r8)
	ctx.current_instruction = 0x880C0418;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,4(r9)
	ctx.current_instruction = 0x880C0420;
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r5.u16);
	// lbz r5,6(r6)
	ctx.current_instruction = 0x880C0424;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// lbz r4,3(r8)
	ctx.current_instruction = 0x880C0428;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// sth r4,6(r9)
	ctx.current_instruction = 0x880C0430;
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r4.u16);
	// lbz r4,7(r6)
	ctx.current_instruction = 0x880C0434;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r5,4(r8)
	ctx.current_instruction = 0x880C0438;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,8(r9)
	ctx.current_instruction = 0x880C0440;
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r5.u16);
	// lbz r4,5(r8)
	ctx.current_instruction = 0x880C0444;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 5);
	// lbzu r5,8(r6)
	ctx.current_instruction = 0x880C0448;
	ea = 8 + ctx.r6.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// sth r4,10(r9)
	ctx.current_instruction = 0x880C0450;
	REX_STORE_U16(ctx.r9.u32 + 10, ctx.r4.u16);
	// lbzx r4,r28,r8
	ctx.current_instruction = 0x880C0454;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r8.u32);
	// lbz r5,1(r3)
	ctx.current_instruction = 0x880C0458;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// sthx r4,r27,r9
	ctx.current_instruction = 0x880C0464;
	REX_STORE_U16(ctx.r27.u32 + ctx.r9.u32, ctx.r4.u16);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lbz r4,2(r3)
	ctx.current_instruction = 0x880C046C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lbz r5,2(r31)
	ctx.current_instruction = 0x880C0474;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,4(r30)
	ctx.current_instruction = 0x880C047C;
	REX_STORE_U16(ctx.r30.u32 + 4, ctx.r5.u16);
	// lbz r5,3(r31)
	ctx.current_instruction = 0x880C0480;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r4,3(r3)
	ctx.current_instruction = 0x880C0484;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,6(r30)
	ctx.current_instruction = 0x880C048C;
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r5.u16);
	// lbz r4,4(r31)
	ctx.current_instruction = 0x880C0490;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r5,4(r3)
	ctx.current_instruction = 0x880C0494;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// sth r5,8(r30)
	ctx.current_instruction = 0x880C049C;
	REX_STORE_U16(ctx.r30.u32 + 8, ctx.r5.u16);
	// lbz r4,5(r3)
	ctx.current_instruction = 0x880C04A0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r5,5(r31)
	ctx.current_instruction = 0x880C04A4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,10(r30)
	ctx.current_instruction = 0x880C04AC;
	REX_STORE_U16(ctx.r30.u32 + 10, ctx.r5.u16);
	// lbz r5,6(r31)
	ctx.current_instruction = 0x880C04B0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r4,6(r3)
	ctx.current_instruction = 0x880C04B4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r4,12(r30)
	ctx.current_instruction = 0x880C04BC;
	REX_STORE_U16(ctx.r30.u32 + 12, ctx.r4.u16);
	// lbz r5,7(r31)
	ctx.current_instruction = 0x880C04C0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// lbz r4,7(r3)
	ctx.current_instruction = 0x880C04C4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 7);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r5,14(r30)
	ctx.current_instruction = 0x880C04CC;
	REX_STORE_U16(ctx.r30.u32 + 14, ctx.r5.u16);
	// lbzu r5,8(r31)
	ctx.current_instruction = 0x880C04D0;
	ea = 8 + ctx.r31.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// lbzu r4,8(r3)
	ctx.current_instruction = 0x880C04D4;
	ea = 8 + ctx.r3.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// sthu r5,16(r30)
	ctx.current_instruction = 0x880C04E0;
	ea = 16 + ctx.r30.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r30.u32 = ea;
	// bdnz 0x880c01d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C01D4;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C8070) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C8070;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C8070) {
			switch (rex_dispatch_address) {
				case 0x880C8078:
				case 0x880C80DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C8070;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C8078: goto loc_880C8078;
		case 0x880C80DC: goto loc_880C80DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880C8078;
	__savegprlr_29(ctx, base);
loc_880C8078:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880C8078;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r6,32(r3)
	ctx.current_instruction = 0x880C8080;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r4,16(r3)
	ctx.current_instruction = 0x880C8088;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r5,20(r3)
	ctx.current_instruction = 0x880C8090;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r4,40(r3)
	ctx.current_instruction = 0x880C8098;
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r3,148(r1)
	ctx.current_instruction = 0x880C80A0;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r6,48(r11)
	ctx.current_instruction = 0x880C80A4;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r31,44(r3)
	ctx.current_instruction = 0x880C80AC;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	ctx.current_instruction = 0x880C80B8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,36(r11)
	ctx.current_instruction = 0x880C80C0;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,52(r11)
	ctx.current_instruction = 0x880C80C8;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r29.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x880c7ed8
	ctx.lr = 0x880C80DC;
	sub_880C7ED8(ctx, base);
loc_880C80DC:
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r3,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C87C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C87C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C87C0) {
			switch (rex_dispatch_address) {
				case 0x880C87C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C87C0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C87C8: goto loc_880C87C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880C87C8;
	__savegprlr_19(ctx, base);
loc_880C87C8:
	// stw r4,-196(r1)
	ctx.current_instruction = 0x880C87C8;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r4.u32);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stw r3,-244(r1)
	ctx.current_instruction = 0x880C87D0;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r3.u32);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r10,108(r1)
	ctx.current_instruction = 0x880C87D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r30,r1,-256
	ctx.r30.s64 = ctx.r1.s64 + -256;
	// addi r29,r1,-208
	ctx.r29.s64 = ctx.r1.s64 + -208;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vspltish v22,4
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_set1_epi16(short(0x4)));
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v21,5
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_set1_epi16(short(0x5)));
	// lwz r11,25788(r11)
	ctx.current_instruction = 0x880C87F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 25788);
	// vspltisw128 v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x2)));
	// vspltisw128 v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x8)));
	// rlwinm r26,r7,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// stw r7,-272(r1)
	ctx.current_instruction = 0x880C880C;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r7.u32);
	// lwz r9,100(r1)
	ctx.current_instruction = 0x880C8810;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// vrlh v18,v22,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, result);
	}
	// stw r26,-268(r1)
	ctx.current_instruction = 0x880C8818;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r26.u32);
	// vspltish v25,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_set1_epi16(short(0x1)));
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v24,2
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v23,3
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_set1_epi16(short(0x3)));
	// vslw128 v15,v62,v63
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v63.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vspltish v20,7
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_set1_epi16(short(0x7)));
	// stw r28,-260(r1)
	ctx.current_instruction = 0x880C8834;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r28.u32);
	// vspltish v19,8
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_set1_epi16(short(0x8)));
	// vor v17,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// add r25,r10,r3
	ctx.r25.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v60,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r7,-264(r1)
	ctx.current_instruction = 0x880C884C;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r7.u32);
	// lvx128 v61,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// vspltw128 v27,v60,3
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x0));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vspltw128 v14,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v14.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// stvx128 v27,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x880c8ce8
	if (!ctx.cr6.gt) goto loc_880C8CE8;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// lwz r22,92(r1)
	ctx.current_instruction = 0x880C8870;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r1,-272
	ctx.r9.s64 = ctx.r1.s64 + -272;
	// lwz r21,84(r1)
	ctx.current_instruction = 0x880C8878;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r3,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r3.u64;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// add r23,r11,r4
	ctx.r23.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r19,r10,1
	ctx.r19.s64 = ctx.r10.s64 + 1;
	// lvx128 v16,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r20,r5,r6
	ctx.r20.u64 = ctx.r6.u64 - ctx.r5.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r24,4
	ctx.r24.s64 = 4;
loc_880C88A0:
	// vor v13,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v17.u8));
	// addi r9,r1,-272
	ctx.r9.s64 = ctx.r1.s64 + -272;
	// vor v12,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// addi r5,r1,-224
	ctx.r5.s64 = ctx.r1.s64 + -224;
	// addi r4,r1,-240
	ctx.r4.s64 = ctx.r1.s64 + -240;
	// vaddsws v17,v17,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// vaddsws v16,v16,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v11,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// vaddsws v10,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// add r29,r20,r27
	ctx.r29.u64 = ctx.r20.u64 + ctx.r27.u64;
	// vaddsws v9,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// vaddsws v8,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// stvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-268(r1)
	ctx.current_instruction = 0x880C88E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// stvx128 v10,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-264(r1)
	ctx.current_instruction = 0x880C88E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r5,-260(r1)
	ctx.current_instruction = 0x880C88EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// stvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,-220(r1)
	ctx.current_instruction = 0x880C88F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// stvx128 v8,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,-272(r1)
	ctx.current_instruction = 0x880C88FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-228(r1)
	ctx.current_instruction = 0x880C8908;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// lvx128 v59,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-256(r1)
	ctx.current_instruction = 0x880C8910;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lvx128 v58,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-224(r1)
	ctx.current_instruction = 0x880C8918;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// lvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v60,v59,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v57,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v56,v62,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,-240(r1)
	ctx.current_instruction = 0x880C8930;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// vperm128 v54,v63,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v62,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v61,v55,v63,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v63,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v60,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v52,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-252(r1)
	ctx.current_instruction = 0x880C8950;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lvx128 v49,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v51,v53,v63,v6
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v48,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v50,v63,v52,v6
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v60,v49,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v47,v62,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v62,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,-232(r1)
	ctx.current_instruction = 0x880C8978;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// vperm128 v3,v61,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v61,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// lvx128 v46,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v39,v62,v40,v6
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v45,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v29,v60,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v60,v42,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v63,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v61,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v44,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v43,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-236(r1)
	ctx.current_instruction = 0x880C89B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// vperm128 v61,v44,v63,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v41,v63,v43,v6
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v35,v63,v45,v5
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v28,v61,v41,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v36,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v61,v46,v63,v5
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v63,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v34,v38,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v33,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v32,v62,v37,v5
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v62,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v58,v36,v63,v5
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v56,v33,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v52,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v54,v62,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v62,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v26,v60,v39,v7
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v49,v52,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v48,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v55,v63,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v63,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v60,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// vperm128 v46,v62,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v50,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v51,v53,v63,v5
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor128 v62,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vperm128 v13,v61,v35,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v61,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vperm128 v12,v60,v32,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v60,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vperm128 v47,v63,v50,v5
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// addi r4,r1,-176
	ctx.r4.s64 = ctx.r1.s64 + -176;
	// vperm128 v11,v62,v46,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// vperm128 v10,v61,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lwz r5,-216(r1)
	ctx.current_instruction = 0x880C8A60;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// vperm128 v4,v60,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lwz r7,-212(r1)
	ctx.current_instruction = 0x880C8A68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// vmrghb v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lwz r6,-248(r1)
	ctx.current_instruction = 0x880C8A70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// vperm128 v3,v63,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lwz r9,-244(r1)
	ctx.current_instruction = 0x880C8A78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// vmrghb v1,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpw cr6,r21,r22
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r22.s32, ctx.xer);
	// vmrghb v29,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v26,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// bge cr6,0x880c8cd8
	if (!ctx.cr6.lt) goto loc_880C8CD8;
	// subf r4,r21,r22
	ctx.r4.u64 = ctx.r22.u64 - ctx.r21.u64;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// rlwinm r4,r4,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_880C8AC4:
	// vor v27,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvx128 v63,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v26,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// lvx128 v45,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v2,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvx128 v44,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v1,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vperm128 v61,v45,v63,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vor v31,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vperm128 v43,v63,v44,v6
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vor v30,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
	// addi r4,r1,-144
	ctx.r4.s64 = ctx.r1.s64 + -144;
	// vor128 v39,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r3,r1,-192
	ctx.r3.s64 = ctx.r1.s64 + -192;
	// vor128 v37,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v62,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vperm128 v29,v61,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v12,v2,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvx128 v42,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v38,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v41,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v60,v42,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// vslh v11,v13,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v9,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v40,v62,v41,v6
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v10,v12,v20
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// cmplw cr6,r7,r25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r25.u32, ctx.xer);
	// vsubshs v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vperm128 v28,v60,v40,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vslh v26,v12,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v28,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubuhm v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v11,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v12,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vslh v27,v13,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v9,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// vsubshs v27,v13,v27
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// lvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v26,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vslh v10,v12,v23
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v13,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v12,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vor128 v10,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// vaddshs v27,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v13,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v11,v39,v39
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// vadduhm v12,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v27,v12,v18
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrh v26,v27,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// vpkshus128 v36,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// stvewx128 v36,r0,r28
	ctx.current_instruction = 0x880C8BB0;
	ea = (ctx.r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r28,r24
	ctx.current_instruction = 0x880C8BB4;
	ea = (ctx.r28.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// add r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 + ctx.r8.u64;
	// ble cr6,0x880c8bc8
	if (!ctx.cr6.gt) goto loc_880C8BC8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_880C8BC8:
	// vor v27,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// lvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v11,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v26,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v34,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vperm128 v61,v35,v63,v5
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor v9,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vperm128 v33,v63,v34,v5
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor v8,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v62,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// lvx128 v63,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-128
	ctx.r3.s64 = ctx.r1.s64 + -128;
	// vaddshs v13,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vperm128 v4,v61,v33,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v12,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vperm128 v60,v32,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor128 v61,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vperm128 v62,v62,v63,v5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor128 v59,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// vslh v11,v13,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v9,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + ctx.r26.u64;
	// vperm128 v3,v60,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v60,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vslh v10,v12,v20
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// vsubshs v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v26,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v26,v12,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// stvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v12,v27,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v27,v13,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v26,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vslh v10,v12,v23
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v11,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v27,v13,v27
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor128 v9,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vsubshs v13,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v12,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vor128 v10,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vaddshs v27,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v13,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v11,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vadduhm v12,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v27,v12,v18
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrh v26,v27,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// vpkshus128 v58,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// stvewx128 v58,r0,r29
	ctx.current_instruction = 0x880C8CB4;
	ea = (ctx.r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r29,r24
	ctx.current_instruction = 0x880C8CB8;
	ea = (ctx.r29.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// ble cr6,0x880c8ccc
	if (!ctx.cr6.gt) goto loc_880C8CCC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_880C8CCC:
	// bdnz 0x880c8ac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C8AC4;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// lvx128 v27,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_880C8CD8:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// bne 0x880c88a0
	if (!ctx.cr0.eq) goto loc_880C88A0;
loc_880C8CE8:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DF9F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DF9F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DF9F8) {
			switch (rex_dispatch_address) {
				case 0x880DFA00:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DF9F8;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880DFA00: goto loc_880DFA00;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880DFA00;
	__savegprlr_14(ctx, base);
loc_880DFA00:
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880DFA00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,76(r1)
	ctx.current_instruction = 0x880DFA08;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// stw r7,52(r1)
	ctx.current_instruction = 0x880DFA0C;
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x880DFA10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,68(r1)
	ctx.current_instruction = 0x880DFA14;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880DFA18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x880DFA1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,-216(r1)
	ctx.current_instruction = 0x880DFA24;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r31.u32);
	// stw r31,-212(r1)
	ctx.current_instruction = 0x880DFA28;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r31.u32);
	// stw r31,-228(r1)
	ctx.current_instruction = 0x880DFA2C;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r31.u32);
	// stw r10,-336(r1)
	ctx.current_instruction = 0x880DFA30;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r10.u32);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// stw r31,-220(r1)
	ctx.current_instruction = 0x880DFA38;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r31,-188(r1)
	ctx.current_instruction = 0x880DFA40;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r31.u32);
	// stw r31,-204(r1)
	ctx.current_instruction = 0x880DFA44;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r31.u32);
	// stw r31,-196(r1)
	ctx.current_instruction = 0x880DFA48;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r31.u32);
	// stw r31,-180(r1)
	ctx.current_instruction = 0x880DFA4C;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r31.u32);
	// stw r31,-168(r1)
	ctx.current_instruction = 0x880DFA50;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// stw r31,-192(r1)
	ctx.current_instruction = 0x880DFA54;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r31.u32);
	// stw r31,-164(r1)
	ctx.current_instruction = 0x880DFA58;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r31.u32);
	// stw r31,-172(r1)
	ctx.current_instruction = 0x880DFA5C;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r31,-176(r1)
	ctx.current_instruction = 0x880DFA64;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r31.u32);
	// stw r31,-224(r1)
	ctx.current_instruction = 0x880DFA68;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r31,-208(r1)
	ctx.current_instruction = 0x880DFA74;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r31.u32);
	// stw r31,-184(r1)
	ctx.current_instruction = 0x880DFA78;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r31.u32);
	// stw r4,28(r1)
	ctx.current_instruction = 0x880DFA7C;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	ctx.current_instruction = 0x880DFA80;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	ctx.current_instruction = 0x880DFA84;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// lbz r31,2(r10)
	ctx.current_instruction = 0x880DFA88;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r30,8(r10)
	ctx.current_instruction = 0x880DFA8C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// stw r9,-328(r1)
	ctx.current_instruction = 0x880DFA90;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r9.u32);
	// stw r3,-320(r1)
	ctx.current_instruction = 0x880DFA94;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r3.u32);
	// lbz r9,7(r10)
	ctx.current_instruction = 0x880DFA98;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r3,6(r10)
	ctx.current_instruction = 0x880DFA9C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r4,5(r10)
	ctx.current_instruction = 0x880DFAA0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r5,4(r10)
	ctx.current_instruction = 0x880DFAA4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r6,3(r10)
	ctx.current_instruction = 0x880DFAA8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r8,1(r10)
	ctx.current_instruction = 0x880DFAAC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880DFAB0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stw r10,-316(r1)
	ctx.current_instruction = 0x880DFAB4;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// stw r31,-288(r1)
	ctx.current_instruction = 0x880DFAB8;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r31.u32);
	// stw r30,-304(r1)
	ctx.current_instruction = 0x880DFABC;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r30.u32);
	// b 0x880dfad4
	goto loc_880DFAD4;
loc_880DFAC4:
	// lwz r3,-300(r1)
	ctx.current_instruction = 0x880DFAC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r4,-292(r1)
	ctx.current_instruction = 0x880DFAC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lwz r5,-256(r1)
	ctx.current_instruction = 0x880DFACC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r6,-240(r1)
	ctx.current_instruction = 0x880DFAD0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
loc_880DFAD4:
	// lbz r31,3(r11)
	ctx.current_instruction = 0x880DFAD4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r30,4(r11)
	ctx.current_instruction = 0x880DFAD8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lbz r29,5(r11)
	ctx.current_instruction = 0x880DFAE0;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// subf r5,r5,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r5.u64;
	// lbz r26,6(r11)
	ctx.current_instruction = 0x880DFAE8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r27,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r6.s32 >> 31;
	// lbz r28,7(r11)
	ctx.current_instruction = 0x880DFAF0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// subf r4,r4,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r4.u64;
	// lbz r24,1(r11)
	ctx.current_instruction = 0x880DFAF8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// xor r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r27.u64;
	// lbz r23,2(r11)
	ctx.current_instruction = 0x880DFB00;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// srawi r25,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r5.s32 >> 31;
	// lbz r22,9(r11)
	ctx.current_instruction = 0x880DFB08;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// subf r6,r27,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r27.u64;
	// lbz r27,10(r11)
	ctx.current_instruction = 0x880DFB10;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// xor r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r25.u64;
	// lbz r21,11(r11)
	ctx.current_instruction = 0x880DFB18;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// stw r6,-312(r1)
	ctx.current_instruction = 0x880DFB1C;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r6.u32);
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// subf r3,r3,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r3.u64;
	// lbz r19,12(r11)
	ctx.current_instruction = 0x880DFB28;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r20,r9,r28
	ctx.r20.u64 = ctx.r28.u64 - ctx.r9.u64;
	// lbz r18,15(r11)
	ctx.current_instruction = 0x880DFB30;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// xor r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// lbz r16,9(r10)
	ctx.current_instruction = 0x880DFB38;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// subf r9,r25,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r25.u64;
	// lbz r5,0(r11)
	ctx.current_instruction = 0x880DFB40;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r17,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r3.s32 >> 31;
	// lbz r25,13(r11)
	ctx.current_instruction = 0x880DFB48;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// lbz r15,10(r10)
	ctx.current_instruction = 0x880DFB50;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// xor r4,r3,r17
	ctx.r4.u64 = ctx.r3.u64 ^ ctx.r17.u64;
	// lbz r6,11(r10)
	ctx.current_instruction = 0x880DFB58;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// lbz r3,12(r10)
	ctx.current_instruction = 0x880DFB5C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lbz r10,13(r10)
	ctx.current_instruction = 0x880DFB64;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// subf r8,r8,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r8.u64;
	// stw r5,-256(r1)
	ctx.current_instruction = 0x880DFB6C;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r5.u32);
	// srawi r14,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r20.s32 >> 31;
	// lwz r5,-288(r1)
	ctx.current_instruction = 0x880DFB74;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r15,r15,r27
	ctx.r15.u64 = ctx.r27.u64 - ctx.r15.u64;
	// stw r24,-288(r1)
	ctx.current_instruction = 0x880DFB7C;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r24.u32);
	// xor r20,r20,r14
	ctx.r20.u64 = ctx.r20.u64 ^ ctx.r14.u64;
	// subf r5,r5,r23
	ctx.r5.u64 = ctx.r23.u64 - ctx.r5.u64;
	// stw r23,-244(r1)
	ctx.current_instruction = 0x880DFB88;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r23.u32);
	// stw r10,-280(r1)
	ctx.current_instruction = 0x880DFB8C;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r6,r6,r21
	ctx.r6.u64 = ctx.r21.u64 - ctx.r6.u64;
	// lwz r10,-320(r1)
	ctx.current_instruction = 0x880DFB94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r3,r3,r19
	ctx.r3.u64 = ctx.r19.u64 - ctx.r3.u64;
	// stw r28,-292(r1)
	ctx.current_instruction = 0x880DFB9C;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r28.u32);
	// srawi r28,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 31;
	// stw r31,-300(r1)
	ctx.current_instruction = 0x880DFBA4;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r31.u32);
	// subf r31,r16,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r16.u64;
	// srawi r16,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r8.s32 >> 31;
	// stw r22,-200(r1)
	ctx.current_instruction = 0x880DFBB0;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r22.u32);
	// srawi r22,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r5.s32 >> 31;
	// stw r27,-236(r1)
	ctx.current_instruction = 0x880DFBB8;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r27.u32);
	// lbz r24,14(r10)
	ctx.current_instruction = 0x880DFBBC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// xor r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// lbz r23,8(r10)
	ctx.current_instruction = 0x880DFBC4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// srawi r27,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r31.s32 >> 31;
	// lwz r10,-312(r1)
	ctx.current_instruction = 0x880DFBCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// stw r21,-264(r1)
	ctx.current_instruction = 0x880DFBD0;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r21.u32);
	// srawi r21,r15,31
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r15.s32 >> 31;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r19,-272(r1)
	ctx.current_instruction = 0x880DFBDC;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r19.u32);
	// xor r9,r8,r16
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r16.u64;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,-312(r1)
	ctx.current_instruction = 0x880DFBE8;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r10.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r11,r17,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r17.u64;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,-312(r1)
	ctx.current_instruction = 0x880DFBF8;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r10.u32);
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r11,r14,r20
	ctx.r11.u64 = ctx.r20.u64 - ctx.r14.u64;
	// xor r8,r31,r27
	ctx.r8.u64 = ctx.r31.u64 ^ ctx.r27.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r28,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r28.u64;
	// xor r7,r15,r21
	ctx.r7.u64 = ctx.r15.u64 ^ ctx.r21.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x880DFC1C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r16,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r16.u64;
	// lwz r9,-180(r1)
	ctx.current_instruction = 0x880DFC24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// xor r5,r5,r22
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r22.u64;
	// stw r25,-268(r1)
	ctx.current_instruction = 0x880DFC2C;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r25.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r20,-300(r1)
	ctx.current_instruction = 0x880DFC34;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r11,r22,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r22.u64;
	// lwz r22,-280(r1)
	ctx.current_instruction = 0x880DFC3C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// subf r8,r27,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r27.u64;
	// lwz r5,-304(r1)
	ctx.current_instruction = 0x880DFC44;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,-276(r1)
	ctx.current_instruction = 0x880DFC4C;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r23.u32);
	// subf r22,r22,r25
	ctx.r22.u64 = ctx.r25.u64 - ctx.r22.u64;
	// stw r24,-304(r1)
	ctx.current_instruction = 0x880DFC54;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r24.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,-316(r1)
	ctx.current_instruction = 0x880DFC5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// subf r9,r21,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r21.u64;
	// stw r22,-280(r1)
	ctx.current_instruction = 0x880DFC64;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r22.u32);
	// stw r10,-180(r1)
	ctx.current_instruction = 0x880DFC68;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// xor r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r18,-248(r1)
	ctx.current_instruction = 0x880DFC74;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r18.u32);
	// srawi r31,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 31;
	// lbz r7,14(r11)
	ctx.current_instruction = 0x880DFC7C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// srawi r25,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r22.s32 >> 31;
	// lbz r6,15(r11)
	ctx.current_instruction = 0x880DFC84;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r9,r7,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r7.u64;
	// subf r7,r6,r18
	ctx.r7.u64 = ctx.r18.u64 - ctx.r6.u64;
	// stw r11,-316(r1)
	ctx.current_instruction = 0x880DFC94;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// stw r9,-240(r1)
	ctx.current_instruction = 0x880DFC9C;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// subf r9,r4,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r4.u64;
	// lbz r27,3(r11)
	ctx.current_instruction = 0x880DFCA4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// subf r5,r5,r23
	ctx.r5.u64 = ctx.r23.u64 - ctx.r5.u64;
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// lbz r23,4(r11)
	ctx.current_instruction = 0x880DFCB0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r4,r27,r20
	ctx.r4.u64 = ctx.r20.u64 - ctx.r27.u64;
	// lbz r22,5(r11)
	ctx.current_instruction = 0x880DFCB8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// srawi r28,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 31;
	// lbz r21,6(r11)
	ctx.current_instruction = 0x880DFCC0;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// subf r10,r31,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r31.u64;
	// lbz r19,7(r11)
	ctx.current_instruction = 0x880DFCC8;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r18,0(r11)
	ctx.current_instruction = 0x880DFCD0;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r24,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r5.s32 >> 31;
	// stw r23,-284(r1)
	ctx.current_instruction = 0x880DFCD8;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r23.u32);
	// srawi r20,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r4.s32 >> 31;
	// stw r22,-344(r1)
	ctx.current_instruction = 0x880DFCE0;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r22.u32);
	// subf r30,r23,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r23.u64;
	// lwz r23,-292(r1)
	ctx.current_instruction = 0x880DFCE8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r10,10(r11)
	ctx.current_instruction = 0x880DFCF0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// xor r4,r4,r20
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r20.u64;
	// lbz r16,1(r11)
	ctx.current_instruction = 0x880DFCF8;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r17,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r30.s32 >> 31;
	// lbz r15,2(r11)
	ctx.current_instruction = 0x880DFD00;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r4,r20,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r20.u64;
	// lbz r3,14(r11)
	ctx.current_instruction = 0x880DFD08;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// subf r31,r22,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r22.u64;
	// lbz r8,15(r11)
	ctx.current_instruction = 0x880DFD10;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// xor r30,r30,r17
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r17.u64;
	// stw r4,-312(r1)
	ctx.current_instruction = 0x880DFD18;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r4.u32);
	// stw r10,-260(r1)
	ctx.current_instruction = 0x880DFD1C;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// srawi r22,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r31.s32 >> 31;
	// subf r10,r17,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r17.u64;
	// lbz r29,13(r11)
	ctx.current_instruction = 0x880DFD28;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// subf r4,r21,r26
	ctx.r4.u64 = ctx.r26.u64 - ctx.r21.u64;
	// lwz r26,-312(r1)
	ctx.current_instruction = 0x880DFD30;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lbz r14,12(r11)
	ctx.current_instruction = 0x880DFD34;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r23,r19,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r19.u64;
	// lbz r20,11(r11)
	ctx.current_instruction = 0x880DFD3C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// srawi r17,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r4.s32 >> 31;
	// lbz r30,9(r11)
	ctx.current_instruction = 0x880DFD44;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// stw r9,-312(r1)
	ctx.current_instruction = 0x880DFD48;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r9.u32);
	// xor r9,r31,r22
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r22.u64;
	// stw r6,-300(r1)
	ctx.current_instruction = 0x880DFD50;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r6.u32);
	// add r6,r26,r10
	ctx.r6.u64 = ctx.r26.u64 + ctx.r10.u64;
	// lbz r11,8(r11)
	ctx.current_instruction = 0x880DFD58;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stw r6,-292(r1)
	ctx.current_instruction = 0x880DFD5C;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r6.u32);
	// srawi r10,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r23.s32 >> 31;
	// lwz r6,-280(r1)
	ctx.current_instruction = 0x880DFD64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// xor r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r24.u64;
	// stw r11,-232(r1)
	ctx.current_instruction = 0x880DFD6C;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r11.u32);
	// subf r11,r22,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r22.u64;
	// xor r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r25.u64;
	// lwz r31,-256(r1)
	ctx.current_instruction = 0x880DFD78;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// xor r9,r4,r17
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r17.u64;
	// lwz r22,-240(r1)
	ctx.current_instruction = 0x880DFD80;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// subf r6,r25,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r25.u64;
	// lwz r26,-312(r1)
	ctx.current_instruction = 0x880DFD88;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// subf r4,r17,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r17.u64;
	// stw r21,-252(r1)
	ctx.current_instruction = 0x880DFD90;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r21.u32);
	// xor r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 ^ ctx.r10.u64;
	// lwz r23,-300(r1)
	ctx.current_instruction = 0x880DFD98;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r31,r18,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r18.u64;
	// stw r6,-280(r1)
	ctx.current_instruction = 0x880DFDA0;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r6.u32);
	// lwz r25,-292(r1)
	ctx.current_instruction = 0x880DFDA4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// xor r22,r22,r23
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r23.u64;
	// srawi r21,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r31.s32 >> 31;
	// stw r4,-312(r1)
	ctx.current_instruction = 0x880DFDB0;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r4.u32);
	// add r4,r25,r11
	ctx.r4.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r6,-288(r1)
	ctx.current_instruction = 0x880DFDB8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r4,-292(r1)
	ctx.current_instruction = 0x880DFDC0;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r4.u32);
	// xor r9,r31,r21
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r21.u64;
	// stw r8,-348(r1)
	ctx.current_instruction = 0x880DFDC8;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r8.u32);
	// xor r4,r7,r28
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// stw r10,-256(r1)
	ctx.current_instruction = 0x880DFDD0;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r10.u32);
	// subf r11,r23,r22
	ctx.r11.u64 = ctx.r22.u64 - ctx.r23.u64;
	// stw r11,-300(r1)
	ctx.current_instruction = 0x880DFDD8;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r11.u32);
	// subf r7,r16,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r16.u64;
	// lwz r10,-244(r1)
	ctx.current_instruction = 0x880DFDE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// subf r11,r21,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r21.u64;
	// stw r11,-244(r1)
	ctx.current_instruction = 0x880DFDE8;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r11.u32);
	// srawi r11,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 31;
	// lwz r23,-276(r1)
	ctx.current_instruction = 0x880DFDF0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// subf r9,r28,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lwz r4,-184(r1)
	ctx.current_instruction = 0x880DFDF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// subf r6,r15,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r15.u64;
	// lwz r31,-204(r1)
	ctx.current_instruction = 0x880DFE00;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// xor r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// stw r9,-240(r1)
	ctx.current_instruction = 0x880DFE08;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// lwz r9,-304(r1)
	ctx.current_instruction = 0x880DFE0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// srawi r28,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 31;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,-248(r1)
	ctx.current_instruction = 0x880DFE18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// subf r22,r3,r9
	ctx.r22.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lwz r25,-320(r1)
	ctx.current_instruction = 0x880DFE20;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r9,r24,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r24.u64;
	// stw r19,-296(r1)
	ctx.current_instruction = 0x880DFE28;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r19.u32);
	// subf r5,r8,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lwz r8,-280(r1)
	ctx.current_instruction = 0x880DFE30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// lwz r10,-312(r1)
	ctx.current_instruction = 0x880DFE34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// xor r7,r6,r28
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// add r8,r26,r8
	ctx.r8.u64 = ctx.r26.u64 + ctx.r8.u64;
	// lwz r6,44(r1)
	ctx.current_instruction = 0x880DFE40;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// stw r3,-324(r1)
	ctx.current_instruction = 0x880DFE44;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r3.u32);
	// srawi r3,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r22.s32 >> 31;
	// stw r8,-276(r1)
	ctx.current_instruction = 0x880DFE4C;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r18,-332(r1)
	ctx.current_instruction = 0x880DFE54;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r18.u32);
	// lwz r26,-292(r1)
	ctx.current_instruction = 0x880DFE58;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// stw r16,-288(r1)
	ctx.current_instruction = 0x880DFE5C;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r16.u32);
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// lwz r26,-256(r1)
	ctx.current_instruction = 0x880DFE64;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r24,-300(r1)
	ctx.current_instruction = 0x880DFE68;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r10,-276(r1)
	ctx.current_instruction = 0x880DFE6C;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + ctx.r24.u64;
	// stw r15,-304(r1)
	ctx.current_instruction = 0x880DFE78;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r15.u32);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r26,-244(r1)
	ctx.current_instruction = 0x880DFE80;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// stw r8,-276(r1)
	ctx.current_instruction = 0x880DFE84;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r10,-248(r1)
	ctx.current_instruction = 0x880DFE8C;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r26,-240(r1)
	ctx.current_instruction = 0x880DFE98;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// lwz r26,-260(r1)
	ctx.current_instruction = 0x880DFEA4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// subf r11,r28,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r28.u64;
	// lwz r15,-332(r1)
	ctx.current_instruction = 0x880DFEAC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r31,-272(r1)
	ctx.current_instruction = 0x880DFEBC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r9,-236(r1)
	ctx.current_instruction = 0x880DFEC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// stw r7,-204(r1)
	ctx.current_instruction = 0x880DFEC8;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r7.u32);
	// add r11,r25,r6
	ctx.r11.u64 = ctx.r25.u64 + ctx.r6.u64;
	// lwz r7,-232(r1)
	ctx.current_instruction = 0x880DFED0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// xor r4,r22,r3
	ctx.r4.u64 = ctx.r22.u64 ^ ctx.r3.u64;
	// lwz r6,-200(r1)
	ctx.current_instruction = 0x880DFED8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// subf r9,r26,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r26.u64;
	// subf r10,r7,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r7.u64;
	// stw r8,-184(r1)
	ctx.current_instruction = 0x880DFEE4;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r8.u32);
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r9,-260(r1)
	ctx.current_instruction = 0x880DFEEC;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r9.u32);
	// subf r8,r30,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r30.u64;
	// lwz r6,-264(r1)
	ctx.current_instruction = 0x880DFEF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// stw r10,-264(r1)
	ctx.current_instruction = 0x880DFEFC;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r10.u32);
	// srawi r28,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 31;
	// stw r4,-272(r1)
	ctx.current_instruction = 0x880DFF04;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r4.u32);
	// srawi r10,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 31;
	// lbz r24,3(r11)
	ctx.current_instruction = 0x880DFF0C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// xor r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// lbz r23,4(r11)
	ctx.current_instruction = 0x880DFF14;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// lbz r25,6(r11)
	ctx.current_instruction = 0x880DFF1C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r22,5(r11)
	ctx.current_instruction = 0x880DFF20;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// srawi r9,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 31;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// lbz r21,0(r11)
	ctx.current_instruction = 0x880DFF2C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r8,r20,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r20.u64;
	// lbz r19,1(r11)
	ctx.current_instruction = 0x880DFF34;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r6,r14,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r14.u64;
	// lbz r31,7(r11)
	ctx.current_instruction = 0x880DFF3C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r17,2(r11)
	ctx.current_instruction = 0x880DFF40;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// srawi r18,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r8.s32 >> 31;
	// stw r11,-320(r1)
	ctx.current_instruction = 0x880DFF48;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// subf r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	// lwz r4,-268(r1)
	ctx.current_instruction = 0x880DFF50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// subf r3,r27,r24
	ctx.r3.u64 = ctx.r24.u64 - ctx.r27.u64;
	// lwz r27,-284(r1)
	ctx.current_instruction = 0x880DFF58;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// srawi r16,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r6.s32 >> 31;
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r29.u64;
	// stw r10,-268(r1)
	ctx.current_instruction = 0x880DFF64;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// subf r10,r27,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r27.u64;
	// stw r23,-248(r1)
	ctx.current_instruction = 0x880DFF6C;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r23.u32);
	// lwz r5,-252(r1)
	ctx.current_instruction = 0x880DFF70;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// srawi r23,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r4.s32 >> 31;
	// stw r7,-284(r1)
	ctx.current_instruction = 0x880DFF78;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r7.u32);
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// stw r30,-252(r1)
	ctx.current_instruction = 0x880DFF80;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r30.u32);
	// srawi r30,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 31;
	// stw r26,-236(r1)
	ctx.current_instruction = 0x880DFF88;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r26.u32);
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// stw r29,-232(r1)
	ctx.current_instruction = 0x880DFF94;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r29.u32);
	// lwz r26,-264(r1)
	ctx.current_instruction = 0x880DFF98;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// subf r5,r5,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r5.u64;
	// stw r20,-264(r1)
	ctx.current_instruction = 0x880DFFA0;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r20.u32);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lwz r20,-272(r1)
	ctx.current_instruction = 0x880DFFA8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// xor r26,r26,r28
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r28.u64;
	// stw r10,-332(r1)
	ctx.current_instruction = 0x880DFFB0;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r10.u32);
	// add r10,r20,r11
	ctx.r10.u64 = ctx.r20.u64 + ctx.r11.u64;
	// lwz r29,-260(r1)
	ctx.current_instruction = 0x880DFFB8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// subf r11,r28,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r28.u64;
	// stw r24,-276(r1)
	ctx.current_instruction = 0x880DFFC0;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r24.u32);
	// lwz r24,-344(r1)
	ctx.current_instruction = 0x880DFFC4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r27,-296(r1)
	ctx.current_instruction = 0x880DFFCC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// xor r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r9.u64;
	// lwz r29,-268(r1)
	ctx.current_instruction = 0x880DFFD4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// subf r24,r24,r22
	ctx.r24.u64 = ctx.r22.u64 - ctx.r24.u64;
	// stw r14,-272(r1)
	ctx.current_instruction = 0x880DFFDC;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r14.u32);
	// stw r25,-200(r1)
	ctx.current_instruction = 0x880DFFE0;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r25.u32);
	// stw r11,-344(r1)
	ctx.current_instruction = 0x880DFFE4;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r7,-344(r1)
	ctx.current_instruction = 0x880DFFEC;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r7.u32);
	// subf r28,r27,r31
	ctx.r28.u64 = ctx.r31.u64 - ctx.r27.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r27,-332(r1)
	ctx.current_instruction = 0x880DFFF8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r3,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r24.s32 >> 31;
	// lwz r29,-344(r1)
	ctx.current_instruction = 0x880E0000;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// stw r7,-332(r1)
	ctx.current_instruction = 0x880E0004;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r7,r24,r3
	ctx.r7.u64 = ctx.r24.u64 ^ ctx.r3.u64;
	// stw r11,-296(r1)
	ctx.current_instruction = 0x880E0010;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r11.u32);
	// xor r11,r8,r18
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r18.u64;
	// lwz r25,-348(r1)
	ctx.current_instruction = 0x880E0018;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// subf r8,r3,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r3.u64;
	// lwz r7,-332(r1)
	ctx.current_instruction = 0x880E0020;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r30,r30,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lwz r24,-284(r1)
	ctx.current_instruction = 0x880E0028;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// lwz r20,-252(r1)
	ctx.current_instruction = 0x880E0030;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// stw r30,-344(r1)
	ctx.current_instruction = 0x880E0034;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r30.u32);
	// subf r11,r18,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r18.u64;
	// lwz r10,-344(r1)
	ctx.current_instruction = 0x880E003C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r3,r29,r10
	ctx.r3.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r8,-344(r1)
	ctx.current_instruction = 0x880E0044;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r8.u32);
	// xor r6,r6,r16
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r16.u64;
	// stw r3,-332(r1)
	ctx.current_instruction = 0x880E004C;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r3.u32);
	// xor r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// lwz r10,-296(r1)
	ctx.current_instruction = 0x880E0054;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// xor r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r23.u64;
	// lwz r5,-288(r1)
	ctx.current_instruction = 0x880E005C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r27,r15,r21
	ctx.r27.u64 = ctx.r21.u64 - ctx.r15.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r3,-224(r1)
	ctx.current_instruction = 0x880E0068;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// subf r5,r5,r19
	ctx.r5.u64 = ctx.r19.u64 - ctx.r5.u64;
	// lwz r7,-316(r1)
	ctx.current_instruction = 0x880E0070;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r16,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r16.u64;
	// lwz r6,84(r1)
	ctx.current_instruction = 0x880E007C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r30,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r28.s32 >> 31;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r23,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r23.u64;
	// lwz r4,-236(r1)
	ctx.current_instruction = 0x880E008C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// srawi r26,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r27.s32 >> 31;
	// srawi r23,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 31;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r8,-304(r1)
	ctx.current_instruction = 0x880E009C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r10,r5,r23
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r23.u64;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-320(r1)
	ctx.current_instruction = 0x880E00AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r3,r8,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r8.u64;
	// subf r10,r23,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r23.u64;
	// stw r5,-224(r1)
	ctx.current_instruction = 0x880E00B8;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r5.u32);
	// xor r29,r28,r30
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r30.u64;
	// lwz r28,-324(r1)
	ctx.current_instruction = 0x880E00C0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// lwz r8,-344(r1)
	ctx.current_instruction = 0x880E00C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// xor r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r26.u64;
	// lwz r23,-332(r1)
	ctx.current_instruction = 0x880E00CC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r5,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 31;
	// lbz r18,14(r11)
	ctx.current_instruction = 0x880E00D4;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// add r8,r23,r8
	ctx.r8.u64 = ctx.r23.u64 + ctx.r8.u64;
	// lbz r23,15(r11)
	ctx.current_instruction = 0x880E00DC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// subf r28,r28,r18
	ctx.r28.u64 = ctx.r18.u64 - ctx.r28.u64;
	// lbz r16,8(r11)
	ctx.current_instruction = 0x880E00E4;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r15,9(r11)
	ctx.current_instruction = 0x880E00EC;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// subf r9,r30,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r30.u64;
	// lbz r30,10(r11)
	ctx.current_instruction = 0x880E00F4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// subf r29,r25,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r25.u64;
	// lbz r25,11(r11)
	ctx.current_instruction = 0x880E00FC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r14,12(r11)
	ctx.current_instruction = 0x880E0104;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r9,r26,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r26.u64;
	// lbz r27,13(r11)
	ctx.current_instruction = 0x880E010C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r24,r16
	ctx.r8.u64 = ctx.r16.u64 - ctx.r24.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r7,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 31;
	// lbz r26,3(r10)
	ctx.current_instruction = 0x880E0128;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// xor r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// lbz r24,4(r10)
	ctx.current_instruction = 0x880E0130;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r6,r20,r15
	ctx.r6.u64 = ctx.r15.u64 - ctx.r20.u64;
	// stw r16,-352(r1)
	ctx.current_instruction = 0x880E0138;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r16.u32);
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// lbz r16,5(r10)
	ctx.current_instruction = 0x880E0140;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// xor r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r7.u64;
	// stw r23,-340(r1)
	ctx.current_instruction = 0x880E0148;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r23.u32);
	// subf r4,r4,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r4.u64;
	// stw r26,-240(r1)
	ctx.current_instruction = 0x880E0150;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r26.u32);
	// subf r11,r7,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r7.u64;
	// lbz r23,6(r10)
	ctx.current_instruction = 0x880E0158;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// xor r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// stw r24,-256(r1)
	ctx.current_instruction = 0x880E0160;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r24.u32);
	// stw r28,-324(r1)
	ctx.current_instruction = 0x880E0164;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r28.u32);
	// stw r16,-292(r1)
	ctx.current_instruction = 0x880E0168;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r16.u32);
	// stw r18,-244(r1)
	ctx.current_instruction = 0x880E016C;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r18.u32);
	// stw r23,-300(r1)
	ctx.current_instruction = 0x880E0170;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r23.u32);
	// lbz r18,7(r10)
	ctx.current_instruction = 0x880E0174;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r26,2(r10)
	ctx.current_instruction = 0x880E0178;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stw r10,-316(r1)
	ctx.current_instruction = 0x880E017C;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,-348(r1)
	ctx.current_instruction = 0x880E0184;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r9.u32);
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// srawi r20,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r6.s32 >> 31;
	// lwz r28,-272(r1)
	ctx.current_instruction = 0x880E0190;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// stw r31,-332(r1)
	ctx.current_instruction = 0x880E0194;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r31.u32);
	// srawi r29,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 31;
	// xor r7,r6,r20
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r20.u64;
	// lwz r6,-264(r1)
	ctx.current_instruction = 0x880E01A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lbz r23,1(r10)
	ctx.current_instruction = 0x880E01A4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r28,r28,r14
	ctx.r28.u64 = ctx.r14.u64 - ctx.r28.u64;
	// lbz r10,0(r10)
	ctx.current_instruction = 0x880E01AC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r6,r6,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r6.u64;
	// lwz r31,-188(r1)
	ctx.current_instruction = 0x880E01B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// xor r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// lwz r24,-232(r1)
	ctx.current_instruction = 0x880E01BC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// xor r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r29.u64;
	// stw r15,-260(r1)
	ctx.current_instruction = 0x880E01C4;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r15.u32);
	// lwz r15,-276(r1)
	ctx.current_instruction = 0x880E01C8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// subf r24,r24,r27
	ctx.r24.u64 = ctx.r27.u64 - ctx.r24.u64;
	// lwz r16,-240(r1)
	ctx.current_instruction = 0x880E01D0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// stw r14,-264(r1)
	ctx.current_instruction = 0x880E01D4;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r14.u32);
	// stw r17,-252(r1)
	ctx.current_instruction = 0x880E01D8;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r17.u32);
	// subf r16,r16,r15
	ctx.r16.u64 = ctx.r15.u64 - ctx.r16.u64;
	// lwz r14,-256(r1)
	ctx.current_instruction = 0x880E01E0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r17,-248(r1)
	ctx.current_instruction = 0x880E01E4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// stw r10,-280(r1)
	ctx.current_instruction = 0x880E01E8;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// stw r18,-304(r1)
	ctx.current_instruction = 0x880E01EC;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r18.u32);
	// srawi r18,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r6.s32 >> 31;
	// lwz r10,-324(r1)
	ctx.current_instruction = 0x880E01F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r17,r14,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r14.u64;
	// stw r30,-268(r1)
	ctx.current_instruction = 0x880E01FC;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r30.u32);
	// xor r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r18.u64;
	// stw r25,-272(r1)
	ctx.current_instruction = 0x880E0204;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r25.u32);
	// srawi r25,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r28.s32 >> 31;
	// lwz r30,-292(r1)
	ctx.current_instruction = 0x880E020C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r19,-284(r1)
	ctx.current_instruction = 0x880E0214;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r19.u32);
	// srawi r19,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r24.s32 >> 31;
	// stw r31,-344(r1)
	ctx.current_instruction = 0x880E021C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r31.u32);
	// srawi r31,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r16.s32 >> 31;
	// stw r27,-236(r1)
	ctx.current_instruction = 0x880E0224;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r27.u32);
	// subf r30,r30,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r30.u64;
	// stw r26,-288(r1)
	ctx.current_instruction = 0x880E022C;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r26.u32);
	// srawi r26,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r17.s32 >> 31;
	// lwz r27,-200(r1)
	ctx.current_instruction = 0x880E0234;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r15,-300(r1)
	ctx.current_instruction = 0x880E023C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// xor r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r25.u64;
	// stw r21,-296(r1)
	ctx.current_instruction = 0x880E0244;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r21.u32);
	// xor r24,r24,r19
	ctx.r24.u64 = ctx.r24.u64 ^ ctx.r19.u64;
	// stw r23,-312(r1)
	ctx.current_instruction = 0x880E024C;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r23.u32);
	// srawi r23,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r30.s32 >> 31;
	// lwz r14,-348(r1)
	ctx.current_instruction = 0x880E0254;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// subf r27,r15,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r15.u64;
	// lwz r21,-196(r1)
	ctx.current_instruction = 0x880E025C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// xor r22,r16,r31
	ctx.r22.u64 = ctx.r16.u64 ^ ctx.r31.u64;
	// xor r8,r17,r26
	ctx.r8.u64 = ctx.r17.u64 ^ ctx.r26.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r20,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r20.u64;
	// lwz r16,-208(r1)
	ctx.current_instruction = 0x880E0270;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// subf r9,r5,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r5.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r29.u64;
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,-348(r1)
	ctx.current_instruction = 0x880E0284;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r7.u32);
	// subf r7,r31,r22
	ctx.r7.u64 = ctx.r22.u64 - ctx.r31.u64;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// subf r11,r18,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r18.u64;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,-348(r1)
	ctx.current_instruction = 0x880E0298;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r3.u32);
	// xor r6,r30,r23
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r23.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r25,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r25.u64;
	// lwz r25,-260(r1)
	ctx.current_instruction = 0x880E02A8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// subf r8,r26,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r26.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r19,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r19.u64;
	// lwz r24,-268(r1)
	ctx.current_instruction = 0x880E02B8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// srawi r5,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r27.s32 >> 31;
	// lwz r19,-272(r1)
	ctx.current_instruction = 0x880E02C0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r23,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r23.u64;
	// lwz r6,-344(r1)
	ctx.current_instruction = 0x880E02CC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r9,r14,r9
	ctx.r9.u64 = ctx.r14.u64 + ctx.r9.u64;
	// lwz r14,-176(r1)
	ctx.current_instruction = 0x880E02D4;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,-280(r1)
	ctx.current_instruction = 0x880E02DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,-332(r1)
	ctx.current_instruction = 0x880E02E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// xor r4,r27,r5
	ctx.r4.u64 = ctx.r27.u64 ^ ctx.r5.u64;
	// add r3,r9,r21
	ctx.r3.u64 = ctx.r9.u64 + ctx.r21.u64;
	// lwz r9,-304(r1)
	ctx.current_instruction = 0x880E02F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,-188(r1)
	ctx.current_instruction = 0x880E02F8;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// stw r3,-196(r1)
	ctx.current_instruction = 0x880E0300;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r3.u32);
	// subf r5,r9,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r9.u64;
	// stw r10,-348(r1)
	ctx.current_instruction = 0x880E0308;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r10.u32);
	// stw r8,-324(r1)
	ctx.current_instruction = 0x880E030C;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r8.u32);
	// srawi r4,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// lwz r8,-312(r1)
	ctx.current_instruction = 0x880E0314;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r10,-316(r1)
	ctx.current_instruction = 0x880E0318;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// lwz r5,-284(r1)
	ctx.current_instruction = 0x880E0320;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// lwz r6,-296(r1)
	ctx.current_instruction = 0x880E0324;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r30,r8,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lwz r11,-288(r1)
	ctx.current_instruction = 0x880E032C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// lwz r5,-252(r1)
	ctx.current_instruction = 0x880E0330;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// subf r31,r7,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lbz r6,8(r10)
	ctx.current_instruction = 0x880E0338;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// subf r28,r11,r5
	ctx.r28.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lbz r11,9(r10)
	ctx.current_instruction = 0x880E0340;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r5,10(r10)
	ctx.current_instruction = 0x880E0344;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// srawi r27,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r31.s32 >> 31;
	// subf r11,r11,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r11.u64;
	// lbz r25,11(r10)
	ctx.current_instruction = 0x880E0350;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// srawi r26,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 31;
	// lbz r22,13(r10)
	ctx.current_instruction = 0x880E0358;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// subf r5,r5,r24
	ctx.r5.u64 = ctx.r24.u64 - ctx.r5.u64;
	// stw r6,-304(r1)
	ctx.current_instruction = 0x880E0360;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r6.u32);
	// srawi r23,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r28.s32 >> 31;
	// lbz r24,12(r10)
	ctx.current_instruction = 0x880E0368;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
	// lbz r20,14(r10)
	ctx.current_instruction = 0x880E0370;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// srawi r21,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r5.s32 >> 31;
	// xor r18,r11,r6
	ctx.r18.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// lwz r11,-264(r1)
	ctx.current_instruction = 0x880E037C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// subf r25,r25,r19
	ctx.r25.u64 = ctx.r19.u64 - ctx.r25.u64;
	// lbz r19,15(r10)
	ctx.current_instruction = 0x880E0384;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// xor r5,r5,r21
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r21.u64;
	// srawi r15,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r25.s32 >> 31;
	// lwz r29,-348(r1)
	ctx.current_instruction = 0x880E0390;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// subf r24,r24,r11
	ctx.r24.u64 = ctx.r11.u64 - ctx.r24.u64;
	// lwz r17,-324(r1)
	ctx.current_instruction = 0x880E0398;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r11,r21,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r21.u64;
	// subf r6,r6,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r6.u64;
	// xor r5,r25,r15
	ctx.r5.u64 = ctx.r25.u64 ^ ctx.r15.u64;
	// srawi r25,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r24.s32 >> 31;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r21,-236(r1)
	ctx.current_instruction = 0x880E03B0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// subf r11,r15,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r15.u64;
	// xor r5,r24,r25
	ctx.r5.u64 = ctx.r24.u64 ^ ctx.r25.u64;
	// subf r22,r22,r21
	ctx.r22.u64 = ctx.r21.u64 - ctx.r22.u64;
	// lwz r21,-244(r1)
	ctx.current_instruction = 0x880E03C0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r11,r25,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r25.u64;
	// lwz r5,-340(r1)
	ctx.current_instruction = 0x880E03CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// srawi r24,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r22.s32 >> 31;
	// subf r21,r20,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r20.u64;
	// xor r25,r22,r24
	ctx.r25.u64 = ctx.r22.u64 ^ ctx.r24.u64;
	// lwz r22,-304(r1)
	ctx.current_instruction = 0x880E03DC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// subf r19,r19,r5
	ctx.r19.u64 = ctx.r5.u64 - ctx.r19.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r5,r4,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r4.u64;
	// srawi r20,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r21.s32 >> 31;
	// subf r11,r24,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r24.u64;
	// lwz r25,-352(r1)
	ctx.current_instruction = 0x880E03F4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r4,r29,r17
	ctx.r4.u64 = ctx.r29.u64 + ctx.r17.u64;
	// xor r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r27.u64;
	// xor r31,r21,r20
	ctx.r31.u64 = ctx.r21.u64 ^ ctx.r20.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r29,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r19.s32 >> 31;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r5,r27,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r27.u64;
	// subf r25,r22,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r22.u64;
	// subf r11,r20,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r20.u64;
	// xor r3,r30,r26
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r26.u64;
	// xor r31,r19,r29
	ctx.r31.u64 = ctx.r19.u64 ^ ctx.r29.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r30,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r25.s32 >> 31;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r5,r26,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r26.u64;
	// subf r11,r29,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r29.u64;
	// xor r3,r28,r23
	ctx.r3.u64 = ctx.r28.u64 ^ ctx.r23.u64;
	// xor r31,r25,r30
	ctx.r31.u64 = ctx.r25.u64 ^ ctx.r30.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r5,r23,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r23.u64;
	// lwz r3,44(r1)
	ctx.current_instruction = 0x880E044C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// subf r11,r30,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r30.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r4,-320(r1)
	ctx.current_instruction = 0x880E0458;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r6,r5,r16
	ctx.r6.u64 = ctx.r5.u64 + ctx.r16.u64;
	// add r5,r11,r14
	ctx.r5.u64 = ctx.r11.u64 + ctx.r14.u64;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r6,-208(r1)
	ctx.current_instruction = 0x880E046C;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r6.u32);
	// stw r5,-176(r1)
	ctx.current_instruction = 0x880E0470;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r5.u32);
	// stw r11,-320(r1)
	ctx.current_instruction = 0x880E0474;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// bdnz 0x880dfac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DFAC4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_880E0484:
	// lbz r6,3(r11)
	ctx.current_instruction = 0x880E0484;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r5,-240(r1)
	ctx.current_instruction = 0x880E0488;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// lbz r4,4(r11)
	ctx.current_instruction = 0x880E048C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r3,r5,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r5.u64;
	// lwz r5,-256(r1)
	ctx.current_instruction = 0x880E0494;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lbz r31,5(r11)
	ctx.current_instruction = 0x880E0498;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// srawi r30,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 31;
	// lwz r29,-292(r1)
	ctx.current_instruction = 0x880E04A0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lbz r28,7(r11)
	ctx.current_instruction = 0x880E04A8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// lbz r27,6(r11)
	ctx.current_instruction = 0x880E04B0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r26,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r5.s32 >> 31;
	// lwz r25,-300(r1)
	ctx.current_instruction = 0x880E04B8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r3,r30,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lbz r30,1(r11)
	ctx.current_instruction = 0x880E04C0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r29,r29,r31
	ctx.r29.u64 = ctx.r31.u64 - ctx.r29.u64;
	// lbz r24,2(r11)
	ctx.current_instruction = 0x880E04C8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stw r3,-352(r1)
	ctx.current_instruction = 0x880E04CC;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// xor r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r26.u64;
	// subf r22,r9,r28
	ctx.r22.u64 = ctx.r28.u64 - ctx.r9.u64;
	// lbz r20,0(r11)
	ctx.current_instruction = 0x880E04D8;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r3,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 31;
	// lbz r23,9(r11)
	ctx.current_instruction = 0x880E04E0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// subf r9,r26,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r5,11(r11)
	ctx.current_instruction = 0x880E04E8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// subf r26,r25,r27
	ctx.r26.u64 = ctx.r27.u64 - ctx.r25.u64;
	// lbz r21,10(r11)
	ctx.current_instruction = 0x880E04F0;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// xor r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r3.u64;
	// lbz r25,12(r11)
	ctx.current_instruction = 0x880E04F8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// srawi r18,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r26.s32 >> 31;
	// lbz r19,13(r11)
	ctx.current_instruction = 0x880E0500;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r17,15(r11)
	ctx.current_instruction = 0x880E0504;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// subf r11,r3,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r3.u64;
	// xor r29,r26,r18
	ctx.r29.u64 = ctx.r26.u64 ^ ctx.r18.u64;
	// lbz r26,10(r10)
	ctx.current_instruction = 0x880E0510;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// lbz r3,9(r10)
	ctx.current_instruction = 0x880E0514;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// subf r7,r7,r20
	ctx.r7.u64 = ctx.r20.u64 - ctx.r7.u64;
	// lbz r15,11(r10)
	ctx.current_instruction = 0x880E051C;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// subf r8,r8,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r8.u64;
	// lbz r14,12(r10)
	ctx.current_instruction = 0x880E0524;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r16,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r22.s32 >> 31;
	// lbz r10,13(r10)
	ctx.current_instruction = 0x880E052C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// subf r3,r3,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r3.u64;
	// stw r31,-324(r1)
	ctx.current_instruction = 0x880E0534;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r31.u32);
	// subf r15,r15,r5
	ctx.r15.u64 = ctx.r5.u64 - ctx.r15.u64;
	// stw r28,-332(r1)
	ctx.current_instruction = 0x880E053C;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r28.u32);
	// xor r22,r22,r16
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r16.u64;
	// lwz r28,-288(r1)
	ctx.current_instruction = 0x880E0544;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// stw r6,-340(r1)
	ctx.current_instruction = 0x880E0548;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// stw r10,-348(r1)
	ctx.current_instruction = 0x880E054C;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r10.u32);
	// subf r6,r28,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r28.u64;
	// lwz r10,-320(r1)
	ctx.current_instruction = 0x880E0554;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r20,-296(r1)
	ctx.current_instruction = 0x880E0558;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r20.u32);
	// srawi r20,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r7.s32 >> 31;
	// lwz r31,-352(r1)
	ctx.current_instruction = 0x880E0560;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stw r27,-344(r1)
	ctx.current_instruction = 0x880E0564;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r27.u32);
	// srawi r27,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 31;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r30,-252(r1)
	ctx.current_instruction = 0x880E0570;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r30.u32);
	// subf r30,r26,r21
	ctx.r30.u64 = ctx.r21.u64 - ctx.r26.u64;
	// stw r24,-260(r1)
	ctx.current_instruction = 0x880E0578;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r24.u32);
	// stw r9,-352(r1)
	ctx.current_instruction = 0x880E057C;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbz r28,14(r10)
	ctx.current_instruction = 0x880E0584;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// srawi r26,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r6.s32 >> 31;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r24,8(r10)
	ctx.current_instruction = 0x880E0590;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// stw r5,-200(r1)
	ctx.current_instruction = 0x880E0598;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r5.u32);
	// stw r9,-352(r1)
	ctx.current_instruction = 0x880E059C;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r9.u32);
	// subf r11,r18,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r18.u64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,-352(r1)
	ctx.current_instruction = 0x880E05A8;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r10.u32);
	// srawi r31,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 31;
	// stw r23,-236(r1)
	ctx.current_instruction = 0x880E05B0;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r23.u32);
	// xor r7,r7,r20
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r20.u64;
	// stw r21,-232(r1)
	ctx.current_instruction = 0x880E05B8;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r21.u32);
	// srawi r5,r15,31
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r15.s32 >> 31;
	// subf r29,r14,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r14.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r11,r16,r22
	ctx.r11.u64 = ctx.r22.u64 - ctx.r16.u64;
	// lwz r9,-220(r1)
	ctx.current_instruction = 0x880E05CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// xor r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r27.u64;
	// stw r25,-276(r1)
	ctx.current_instruction = 0x880E05D4;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r25.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r25,-340(r1)
	ctx.current_instruction = 0x880E05DC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r11,r20,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r20.u64;
	// lwz r7,-352(r1)
	ctx.current_instruction = 0x880E05E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stw r28,-268(r1)
	ctx.current_instruction = 0x880E05E8;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r28.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,-264(r1)
	ctx.current_instruction = 0x880E05F0;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r24.u32);
	// subf r11,r27,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r27.u64;
	// lwz r27,84(r1)
	ctx.current_instruction = 0x880E05F8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// xor r8,r6,r26
	ctx.r8.u64 = ctx.r6.u64 ^ ctx.r26.u64;
	// lwz r6,-304(r1)
	ctx.current_instruction = 0x880E0600;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r17,-272(r1)
	ctx.current_instruction = 0x880E0608;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r17.u32);
	// subf r11,r26,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r26.u64;
	// lwz r8,-348(r1)
	ctx.current_instruction = 0x880E0610;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// lwz r14,-344(r1)
	ctx.current_instruction = 0x880E0618;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r19,-248(r1)
	ctx.current_instruction = 0x880E0620;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r19.u32);
	// subf r8,r8,r19
	ctx.r8.u64 = ctx.r19.u64 - ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,-316(r1)
	ctx.current_instruction = 0x880E062C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// srawi r10,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 31;
	// stw r8,-348(r1)
	ctx.current_instruction = 0x880E0634;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r8.u32);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// stw r9,-220(r1)
	ctx.current_instruction = 0x880E063C;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r9.u32);
	// subf r8,r7,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r7.u64;
	// xor r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// lbz r7,14(r11)
	ctx.current_instruction = 0x880E0648;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// subf r6,r6,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r6.u64;
	// lbz r3,15(r11)
	ctx.current_instruction = 0x880E0650;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// subf r3,r3,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r3.u64;
	// lwz r17,-324(r1)
	ctx.current_instruction = 0x880E0660;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r31.u64;
	// stw r7,-284(r1)
	ctx.current_instruction = 0x880E0668;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r7.u32);
	// srawi r31,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r7.s32 >> 31;
	// stw r11,-316(r1)
	ctx.current_instruction = 0x880E0670;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// lbz r30,3(r11)
	ctx.current_instruction = 0x880E0674;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// srawi r28,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 31;
	// lbz r27,4(r11)
	ctx.current_instruction = 0x880E0680;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r25,r30,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r30.u64;
	// lbz r23,5(r11)
	ctx.current_instruction = 0x880E0688;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// xor r24,r15,r5
	ctx.r24.u64 = ctx.r15.u64 ^ ctx.r5.u64;
	// lbz r22,6(r11)
	ctx.current_instruction = 0x880E0690;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r21,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r25.s32 >> 31;
	// lbz r20,7(r11)
	ctx.current_instruction = 0x880E0698;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r19,0(r11)
	ctx.current_instruction = 0x880E06A0;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// xor r25,r25,r21
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r21.u64;
	// lbz r18,1(r11)
	ctx.current_instruction = 0x880E06A8;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r9,r5,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r5.u64;
	// lbz r5,2(r11)
	ctx.current_instruction = 0x880E06B0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// xor r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r10.u64;
	// lbz r24,14(r11)
	ctx.current_instruction = 0x880E06B8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// subf r25,r21,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r21.u64;
	// lbz r21,15(r11)
	ctx.current_instruction = 0x880E06C0;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r16,12(r11)
	ctx.current_instruction = 0x880E06C8;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r4,r27,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r27.u64;
	// stw r25,-340(r1)
	ctx.current_instruction = 0x880E06D0;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r25.u32);
	// subf r10,r10,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r10.u64;
	// lbz r29,13(r11)
	ctx.current_instruction = 0x880E06D8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// srawi r25,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r4.s32 >> 31;
	// lbz r15,11(r11)
	ctx.current_instruction = 0x880E06E0;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,9(r11)
	ctx.current_instruction = 0x880E06E8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// subf r17,r23,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r23.u64;
	// stw r23,-256(r1)
	ctx.current_instruction = 0x880E06F0;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r23.u32);
	// subf r8,r22,r14
	ctx.r8.u64 = ctx.r14.u64 - ctx.r22.u64;
	// lbz r14,10(r11)
	ctx.current_instruction = 0x880E06F8;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r11,8(r11)
	ctx.current_instruction = 0x880E06FC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// srawi r23,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r17.s32 >> 31;
	// xor r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r25.u64;
	// stw r10,-344(r1)
	ctx.current_instruction = 0x880E0708;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r10.u32);
	// stw r31,-324(r1)
	ctx.current_instruction = 0x880E070C;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r31.u32);
	// srawi r31,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 31;
	// lwz r10,-332(r1)
	ctx.current_instruction = 0x880E0714;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// stw r20,-300(r1)
	ctx.current_instruction = 0x880E071C;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r20.u32);
	// subf r10,r20,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r20.u64;
	// lwz r20,-296(r1)
	ctx.current_instruction = 0x880E0724;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r30,-244(r1)
	ctx.current_instruction = 0x880E0728;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r30.u32);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// stw r10,-352(r1)
	ctx.current_instruction = 0x880E0730;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r10.u32);
	// subf r10,r25,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r25.u64;
	// xor r4,r17,r23
	ctx.r4.u64 = ctx.r17.u64 ^ ctx.r23.u64;
	// lwz r17,-348(r1)
	ctx.current_instruction = 0x880E073C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// stw r29,-296(r1)
	ctx.current_instruction = 0x880E0740;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r29.u32);
	// subf r20,r19,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r19.u64;
	// lwz r25,-352(r1)
	ctx.current_instruction = 0x880E0748;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// xor r17,r17,r26
	ctx.r17.u64 = ctx.r17.u64 ^ ctx.r26.u64;
	// lwz r29,-284(r1)
	ctx.current_instruction = 0x880E0750;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// stw r22,-312(r1)
	ctx.current_instruction = 0x880E0754;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r22.u32);
	// srawi r22,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r25.s32 >> 31;
	// lwz r30,-324(r1)
	ctx.current_instruction = 0x880E075C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r26,r26,r17
	ctx.r26.u64 = ctx.r17.u64 - ctx.r26.u64;
	// stw r19,-292(r1)
	ctx.current_instruction = 0x880E0764;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r19.u32);
	// xor r3,r25,r22
	ctx.r3.u64 = ctx.r25.u64 ^ ctx.r22.u64;
	// xor r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r30.u64;
	// lwz r19,-340(r1)
	ctx.current_instruction = 0x880E0770;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// stw r16,-332(r1)
	ctx.current_instruction = 0x880E0774;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r16.u32);
	// subf r3,r22,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r22.u64;
	// lwz r16,-344(r1)
	ctx.current_instruction = 0x880E077C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r30,r30,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r30.u64;
	// stw r27,-280(r1)
	ctx.current_instruction = 0x880E0784;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r27.u32);
	// srawi r27,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r20.s32 >> 31;
	// stw r26,-348(r1)
	ctx.current_instruction = 0x880E078C;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r26.u32);
	// add r10,r19,r10
	ctx.r10.u64 = ctx.r19.u64 + ctx.r10.u64;
	// stw r11,-344(r1)
	ctx.current_instruction = 0x880E0794;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r11.u32);
	// subf r11,r23,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r23.u64;
	// lwz r26,-252(r1)
	ctx.current_instruction = 0x880E079C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// xor r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r31.u64;
	// stw r30,-352(r1)
	ctx.current_instruction = 0x880E07A4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r30.u32);
	// xor r20,r20,r27
	ctx.r20.u64 = ctx.r20.u64 ^ ctx.r27.u64;
	// stw r3,-324(r1)
	ctx.current_instruction = 0x880E07AC;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r3.u32);
	// subf r3,r18,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r18.u64;
	// stw r7,-352(r1)
	ctx.current_instruction = 0x880E07B4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// subf r27,r27,r20
	ctx.r27.u64 = ctx.r20.u64 - ctx.r27.u64;
	// stw r10,-352(r1)
	ctx.current_instruction = 0x880E07BC;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r10.u32);
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r31.u64;
	// lwz r8,-352(r1)
	ctx.current_instruction = 0x880E07C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r8,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 31;
	// lwz r11,-348(r1)
	ctx.current_instruction = 0x880E07D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// stw r27,-340(r1)
	ctx.current_instruction = 0x880E07D8;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r27.u32);
	// stw r10,-340(r1)
	ctx.current_instruction = 0x880E07DC;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r10.u32);
	// xor r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// stw r4,-352(r1)
	ctx.current_instruction = 0x880E07E4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r4.u32);
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,-352(r1)
	ctx.current_instruction = 0x880E07EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rotlwi r30,r30,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r11,-352(r1)
	ctx.current_instruction = 0x880E07F4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r8,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r8.u64;
	// lwz r8,-340(r1)
	ctx.current_instruction = 0x880E07FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r26,r30
	ctx.r10.u64 = ctx.r26.u64 + ctx.r30.u64;
	// lwz r20,-260(r1)
	ctx.current_instruction = 0x880E0808;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// stw r3,-352(r1)
	ctx.current_instruction = 0x880E080C;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// xor r3,r6,r28
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// stw r10,-340(r1)
	ctx.current_instruction = 0x880E0814;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r10.u32);
	// subf r4,r5,r20
	ctx.r4.u64 = ctx.r20.u64 - ctx.r5.u64;
	// lwz r10,-352(r1)
	ctx.current_instruction = 0x880E081C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rotlwi r27,r27,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// lwz r8,-324(r1)
	ctx.current_instruction = 0x880E0824;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r31,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 31;
	// stw r9,-348(r1)
	ctx.current_instruction = 0x880E0830;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r9.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r29,-172(r1)
	ctx.current_instruction = 0x880E0838;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r8,-352(r1)
	ctx.current_instruction = 0x880E0840;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// xor r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// subf r9,r28,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r28.u64;
	// add r10,r6,r27
	ctx.r10.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lwz r3,-340(r1)
	ctx.current_instruction = 0x880E0850;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r31,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r31.u64;
	// stw r5,-252(r1)
	ctx.current_instruction = 0x880E085C;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r5.u32);
	// add r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r3,-268(r1)
	ctx.current_instruction = 0x880E0864;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-320(r1)
	ctx.current_instruction = 0x880E086C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r7,r24,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r24.u64;
	// lwz r10,44(r1)
	ctx.current_instruction = 0x880E0874;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,-212(r1)
	ctx.current_instruction = 0x880E087C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r31,-348(r1)
	ctx.current_instruction = 0x880E0884;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r19,-244(r1)
	ctx.current_instruction = 0x880E088C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r4,-272(r1)
	ctx.current_instruction = 0x880E0894;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// xor r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// lwz r7,-344(r1)
	ctx.current_instruction = 0x880E089C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r10,-264(r1)
	ctx.current_instruction = 0x880E08A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r9,-236(r1)
	ctx.current_instruction = 0x880E08A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
	// stw r8,-172(r1)
	ctx.current_instruction = 0x880E08B0;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r8.u32);
	// subf r8,r21,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r21.u64;
	// stw r6,-212(r1)
	ctx.current_instruction = 0x880E08B8;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r6.u32);
	// subf r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r10,r31,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r31.u64;
	// stw r5,-340(r1)
	ctx.current_instruction = 0x880E08C4;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r5.u32);
	// srawi r3,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 31;
	// stw r6,-352(r1)
	ctx.current_instruction = 0x880E08CC;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r6.u32);
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// lwz r4,-232(r1)
	ctx.current_instruction = 0x880E08D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// lbz r27,3(r11)
	ctx.current_instruction = 0x880E08DC;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r9,-200(r1)
	ctx.current_instruction = 0x880E08E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// subf r4,r14,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r14.u64;
	// xor r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// lwz r30,-276(r1)
	ctx.current_instruction = 0x880E08EC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// lwz r29,-248(r1)
	ctx.current_instruction = 0x880E08F0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// subf r5,r5,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r5.u64;
	// lwz r22,-296(r1)
	ctx.current_instruction = 0x880E08FC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r10,r19,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r19.u64;
	// lbz r26,4(r11)
	ctx.current_instruction = 0x880E0904;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stw r5,-324(r1)
	ctx.current_instruction = 0x880E0908;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r5.u32);
	// subf r9,r15,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r15.u64;
	// lwz r5,-332(r1)
	ctx.current_instruction = 0x880E0910;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r29,r22,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r22.u64;
	// lbz r19,2(r11)
	ctx.current_instruction = 0x880E0918;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stw r18,-284(r1)
	ctx.current_instruction = 0x880E091C;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r18.u32);
	// subf r30,r5,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r5.u64;
	// stw r24,-260(r1)
	ctx.current_instruction = 0x880E0924;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r24.u32);
	// lbz r28,6(r11)
	ctx.current_instruction = 0x880E0928;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r25,5(r11)
	ctx.current_instruction = 0x880E092C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r24,7(r11)
	ctx.current_instruction = 0x880E0930;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r23,0(r11)
	ctx.current_instruction = 0x880E0934;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r20,1(r11)
	ctx.current_instruction = 0x880E0938;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lwz r18,-280(r1)
	ctx.current_instruction = 0x880E093C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// stw r11,-320(r1)
	ctx.current_instruction = 0x880E0940;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// subf r11,r3,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r3.u64;
	// stw r4,-348(r1)
	ctx.current_instruction = 0x880E0948;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r4.u32);
	// srawi r4,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 31;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// stw r27,-276(r1)
	ctx.current_instruction = 0x880E0954;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r27.u32);
	// subf r18,r18,r26
	ctx.r18.u64 = ctx.r26.u64 - ctx.r18.u64;
	// stw r21,-344(r1)
	ctx.current_instruction = 0x880E095C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r21.u32);
	// srawi r16,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r30.s32 >> 31;
	// stw r26,-248(r1)
	ctx.current_instruction = 0x880E0964;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r26.u32);
	// srawi r27,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r29.s32 >> 31;
	// stw r7,-332(r1)
	ctx.current_instruction = 0x880E096C;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// srawi r21,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r10.s32 >> 31;
	// stw r31,-296(r1)
	ctx.current_instruction = 0x880E0974;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r31.u32);
	// stw r19,-268(r1)
	ctx.current_instruction = 0x880E0978;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r19.u32);
	// srawi r7,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r18.s32 >> 31;
	// lwz r3,-312(r1)
	ctx.current_instruction = 0x880E0980;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r17,-300(r1)
	ctx.current_instruction = 0x880E0984;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r26,-292(r1)
	ctx.current_instruction = 0x880E0988;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lwz r31,-352(r1)
	ctx.current_instruction = 0x880E098C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r19,-256(r1)
	ctx.current_instruction = 0x880E0990;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// xor r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r21.u64;
	// stw r14,-272(r1)
	ctx.current_instruction = 0x880E0998;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r14.u32);
	// lwz r14,-340(r1)
	ctx.current_instruction = 0x880E099C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// stw r10,-352(r1)
	ctx.current_instruction = 0x880E09A4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r10.u32);
	// xor r18,r18,r7
	ctx.r18.u64 = ctx.r18.u64 ^ ctx.r7.u64;
	// add r10,r14,r11
	ctx.r10.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stw r28,-200(r1)
	ctx.current_instruction = 0x880E09B0;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r28.u32);
	// subf r11,r6,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r6.u64;
	// stw r5,-236(r1)
	ctx.current_instruction = 0x880E09B8;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r5.u32);
	// subf r6,r3,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r3.u64;
	// lwz r5,-348(r1)
	ctx.current_instruction = 0x880E09C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-324(r1)
	ctx.current_instruction = 0x880E09C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r19,r19,r25
	ctx.r19.u64 = ctx.r25.u64 - ctx.r19.u64;
	// stw r22,-232(r1)
	ctx.current_instruction = 0x880E09D0;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r22.u32);
	// stw r3,-340(r1)
	ctx.current_instruction = 0x880E09D4;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r3.u32);
	// subf r7,r7,r18
	ctx.r7.u64 = ctx.r18.u64 - ctx.r7.u64;
	// lwz r28,-340(r1)
	ctx.current_instruction = 0x880E09DC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// srawi r11,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 31;
	// stw r7,-340(r1)
	ctx.current_instruction = 0x880E09E4;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r7.u32);
	// xor r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// lwz r3,-352(r1)
	ctx.current_instruction = 0x880E09EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// xor r5,r19,r11
	ctx.r5.u64 = ctx.r19.u64 ^ ctx.r11.u64;
	// subf r3,r21,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r21.u64;
	// lwz r21,-344(r1)
	ctx.current_instruction = 0x880E09F8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stw r3,-352(r1)
	ctx.current_instruction = 0x880E0A00;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lwz r11,-340(r1)
	ctx.current_instruction = 0x880E0A08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// stw r10,-348(r1)
	ctx.current_instruction = 0x880E0A0C;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r10.u32);
	// subf r7,r4,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwz r10,-352(r1)
	ctx.current_instruction = 0x880E0A14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,-352(r1)
	ctx.current_instruction = 0x880E0A1C;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r5.u32);
	// xor r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwz r22,-352(r1)
	ctx.current_instruction = 0x880E0A24;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// srawi r3,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 31;
	// subf r31,r17,r24
	ctx.r31.u64 = ctx.r24.u64 - ctx.r17.u64;
	// stw r4,-352(r1)
	ctx.current_instruction = 0x880E0A30;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r4.u32);
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// stw r7,-352(r1)
	ctx.current_instruction = 0x880E0A38;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// xor r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// lwz r6,-352(r1)
	ctx.current_instruction = 0x880E0A40;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r10,-348(r1)
	ctx.current_instruction = 0x880E0A48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// srawi r28,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r31.s32 >> 31;
	// lwz r5,-284(r1)
	ctx.current_instruction = 0x880E0A50;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r6,84(r1)
	ctx.current_instruction = 0x880E0A58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lwz r3,-316(r1)
	ctx.current_instruction = 0x880E0A60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// xor r7,r30,r16
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r16.u64;
	// lwz r30,-252(r1)
	ctx.current_instruction = 0x880E0A68;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + ctx.r22.u64;
	// lwz r22,-260(r1)
	ctx.current_instruction = 0x880E0A70;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// xor r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 ^ ctx.r28.u64;
	// lwz r19,-332(r1)
	ctx.current_instruction = 0x880E0A78;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r26,r26,r23
	ctx.r26.u64 = ctx.r23.u64 - ctx.r26.u64;
	// stw r15,-264(r1)
	ctx.current_instruction = 0x880E0A80;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r15.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r5,r5,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r5.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r11,r16,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r16.u64;
	// subf r9,r28,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lwz r4,-192(r1)
	ctx.current_instruction = 0x880E0A98;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// srawi r31,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r26.s32 >> 31;
	// xor r7,r29,r27
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r27.u64;
	// lwz r29,-296(r1)
	ctx.current_instruction = 0x880E0AA4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r27,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r27.u64;
	// xor r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// xor r26,r26,r31
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r31.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r9,r31,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r31.u64;
	// subf r10,r28,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r28.u64;
	// lwz r5,-268(r1)
	ctx.current_instruction = 0x880E0ACC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r9,r30,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r30.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-320(r1)
	ctx.current_instruction = 0x880E0ADC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r8,-340(r1)
	ctx.current_instruction = 0x880E0AE8;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r8.u32);
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// stw r4,-192(r1)
	ctx.current_instruction = 0x880E0AF0;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// lwz r4,-272(r1)
	ctx.current_instruction = 0x880E0AF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// lbz r30,8(r11)
	ctx.current_instruction = 0x880E0AF8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r31,15(r11)
	ctx.current_instruction = 0x880E0AFC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r3,14(r11)
	ctx.current_instruction = 0x880E0B00;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// subf r7,r21,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r21.u64;
	// lbz r14,11(r11)
	ctx.current_instruction = 0x880E0B08;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// subf r21,r19,r30
	ctx.r21.u64 = ctx.r30.u64 - ctx.r19.u64;
	// lbz r28,9(r11)
	ctx.current_instruction = 0x880E0B10;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// stw r30,-308(r1)
	ctx.current_instruction = 0x880E0B14;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r30.u32);
	// subf r8,r22,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r22.u64;
	// lbz r30,12(r11)
	ctx.current_instruction = 0x880E0B1C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r29,r29,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r29.u64;
	// lbz r15,10(r11)
	ctx.current_instruction = 0x880E0B24;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// lbz r11,13(r11)
	ctx.current_instruction = 0x880E0B2C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// srawi r18,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r7.s32 >> 31;
	// lbz r27,3(r10)
	ctx.current_instruction = 0x880E0B34;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r16,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r21.s32 >> 31;
	// lbz r22,4(r10)
	ctx.current_instruction = 0x880E0B3C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// xor r7,r7,r18
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r18.u64;
	// lbz r19,5(r10)
	ctx.current_instruction = 0x880E0B44;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// xor r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r26.u64;
	// lbz r17,6(r10)
	ctx.current_instruction = 0x880E0B4C;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// stw r11,-352(r1)
	ctx.current_instruction = 0x880E0B50;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r18,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r18.u64;
	// stw r27,-240(r1)
	ctx.current_instruction = 0x880E0B58;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r27.u32);
	// subf r7,r4,r15
	ctx.r7.u64 = ctx.r15.u64 - ctx.r4.u64;
	// stw r22,-256(r1)
	ctx.current_instruction = 0x880E0B60;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r22.u32);
	// subf r8,r26,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r26.u64;
	// lwz r27,-264(r1)
	ctx.current_instruction = 0x880E0B68;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// stw r19,-292(r1)
	ctx.current_instruction = 0x880E0B6C;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r19.u32);
	// subf r4,r27,r14
	ctx.r4.u64 = ctx.r14.u64 - ctx.r27.u64;
	// stw r17,-300(r1)
	ctx.current_instruction = 0x880E0B74;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r17.u32);
	// stw r31,-244(r1)
	ctx.current_instruction = 0x880E0B78;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r31.u32);
	// srawi r31,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 31;
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// stw r8,-348(r1)
	ctx.current_instruction = 0x880E0B84;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r8.u32);
	// srawi r22,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r4.s32 >> 31;
	// lbz r8,7(r10)
	ctx.current_instruction = 0x880E0B8C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// lbz r26,2(r10)
	ctx.current_instruction = 0x880E0B94;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// xor r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r22.u64;
	// stw r10,-316(r1)
	ctx.current_instruction = 0x880E0B9C;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// lwz r19,-236(r1)
	ctx.current_instruction = 0x880E0BA4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r18,-232(r1)
	ctx.current_instruction = 0x880E0BAC;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// subf r4,r22,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r22.u64;
	// stw r7,-324(r1)
	ctx.current_instruction = 0x880E0BB4;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r7.u32);
	// xor r7,r21,r16
	ctx.r7.u64 = ctx.r21.u64 ^ ctx.r16.u64;
	// stw r30,-252(r1)
	ctx.current_instruction = 0x880E0BBC;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r30.u32);
	// stw r4,-344(r1)
	ctx.current_instruction = 0x880E0BC0;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// subf r21,r19,r30
	ctx.r21.u64 = ctx.r30.u64 - ctx.r19.u64;
	// xor r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// lwz r30,-248(r1)
	ctx.current_instruction = 0x880E0BCC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lbz r29,1(r10)
	ctx.current_instruction = 0x880E0BD0;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r19,0(r10)
	ctx.current_instruction = 0x880E0BD4;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r10,r16,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r16.u64;
	// srawi r16,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r21.s32 >> 31;
	// stw r3,-268(r1)
	ctx.current_instruction = 0x880E0BE0;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r3.u32);
	// lwz r17,-352(r1)
	ctx.current_instruction = 0x880E0BE4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r27,-240(r1)
	ctx.current_instruction = 0x880E0BE8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// subf r7,r18,r17
	ctx.r7.u64 = ctx.r17.u64 - ctx.r18.u64;
	// lwz r22,-256(r1)
	ctx.current_instruction = 0x880E0BF0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// stw r14,-284(r1)
	ctx.current_instruction = 0x880E0BF4;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r14.u32);
	// subf r30,r22,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r22.u64;
	// lwz r18,-292(r1)
	ctx.current_instruction = 0x880E0BFC;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// stw r17,-260(r1)
	ctx.current_instruction = 0x880E0C00;
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r17.u32);
	// srawi r14,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r7.s32 >> 31;
	// lwz r17,-276(r1)
	ctx.current_instruction = 0x880E0C08;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// lwz r3,-200(r1)
	ctx.current_instruction = 0x880E0C0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// subf r27,r27,r17
	ctx.r27.u64 = ctx.r17.u64 - ctx.r27.u64;
	// lwz r17,-300(r1)
	ctx.current_instruction = 0x880E0C14;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r22,-340(r1)
	ctx.current_instruction = 0x880E0C18;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// stw r28,-332(r1)
	ctx.current_instruction = 0x880E0C1C;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r28.u32);
	// srawi r28,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 31;
	// stw r8,-304(r1)
	ctx.current_instruction = 0x880E0C24;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r8.u32);
	// srawi r8,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 31;
	// stw r26,-288(r1)
	ctx.current_instruction = 0x880E0C2C;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r26.u32);
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// stw r8,-352(r1)
	ctx.current_instruction = 0x880E0C34;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// xor r21,r21,r16
	ctx.r21.u64 = ctx.r21.u64 ^ ctx.r16.u64;
	// lwz r26,-348(r1)
	ctx.current_instruction = 0x880E0C3C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r8.u64;
	// stw r5,-340(r1)
	ctx.current_instruction = 0x880E0C44;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r5.u32);
	// subf r25,r18,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r18.u64;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stw r29,-312(r1)
	ctx.current_instruction = 0x880E0C50;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r29.u32);
	// lwz r29,-344(r1)
	ctx.current_instruction = 0x880E0C54;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r15,-296(r1)
	ctx.current_instruction = 0x880E0C60;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r15.u32);
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r31.u64;
	// lwz r31,-324(r1)
	ctx.current_instruction = 0x880E0C68;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// xor r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r28.u64;
	// lwz r15,-228(r1)
	ctx.current_instruction = 0x880E0C70;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,-216(r1)
	ctx.current_instruction = 0x880E0C78;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// subf r10,r16,r21
	ctx.r10.u64 = ctx.r21.u64 - ctx.r16.u64;
	// stw r19,-280(r1)
	ctx.current_instruction = 0x880E0C80;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r19.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// xor r7,r7,r14
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r14.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// srawi r4,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 31;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r28,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r28.u64;
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r14.u64;
	// subf r3,r17,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r17.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// lwz r6,-352(r1)
	ctx.current_instruction = 0x880E0CAC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r8,r22,r8
	ctx.r8.u64 = ctx.r22.u64 + ctx.r8.u64;
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// subf r10,r6,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r6.u64;
	// lwz r27,-340(r1)
	ctx.current_instruction = 0x880E0CBC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r6,r25,r4
	ctx.r6.u64 = ctx.r25.u64 ^ ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r4,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r4.u64;
	// lwz r25,-296(r1)
	ctx.current_instruction = 0x880E0CCC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r6,r8,r15
	ctx.r6.u64 = ctx.r8.u64 + ctx.r15.u64;
	// lwz r8,-312(r1)
	ctx.current_instruction = 0x880E0CD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-316(r1)
	ctx.current_instruction = 0x880E0CDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// stw r6,-228(r1)
	ctx.current_instruction = 0x880E0CE4;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r6.u32);
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r9,-304(r1)
	ctx.current_instruction = 0x880E0CEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r6,-288(r1)
	ctx.current_instruction = 0x880E0CF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// rotlwi r7,r19,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r11,-348(r1)
	ctx.current_instruction = 0x880E0CF8;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
	// subf r31,r8,r20
	ctx.r31.u64 = ctx.r20.u64 - ctx.r8.u64;
	// lbz r11,8(r10)
	ctx.current_instruction = 0x880E0D00;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// subf r27,r6,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r6.u64;
	// stw r5,-216(r1)
	ctx.current_instruction = 0x880E0D08;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r5.u32);
	// subf r5,r9,r24
	ctx.r5.u64 = ctx.r24.u64 - ctx.r9.u64;
	// lbz r30,9(r10)
	ctx.current_instruction = 0x880E0D10;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// subf r3,r7,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r7.u64;
	// lwz r6,-332(r1)
	ctx.current_instruction = 0x880E0D18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// lbz r28,10(r10)
	ctx.current_instruction = 0x880E0D1C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// stw r4,-352(r1)
	ctx.current_instruction = 0x880E0D20;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r4.u32);
	// srawi r4,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// subf r6,r30,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r30.u64;
	// stw r11,-304(r1)
	ctx.current_instruction = 0x880E0D2C;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// srawi r29,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 31;
	// lbz r30,11(r10)
	ctx.current_instruction = 0x880E0D34;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// subf r11,r28,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r28.u64;
	// lbz r28,12(r10)
	ctx.current_instruction = 0x880E0D3C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r26,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r31.s32 >> 31;
	// lbz r24,13(r10)
	ctx.current_instruction = 0x880E0D44;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// srawi r25,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r27.s32 >> 31;
	// lbz r22,14(r10)
	ctx.current_instruction = 0x880E0D4C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// srawi r23,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r6.s32 >> 31;
	// lwz r20,-352(r1)
	ctx.current_instruction = 0x880E0D54;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r19,-284(r1)
	ctx.current_instruction = 0x880E0D58;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// srawi r21,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 31;
	// xor r18,r6,r23
	ctx.r18.u64 = ctx.r6.u64 ^ ctx.r23.u64;
	// lwz r15,-252(r1)
	ctx.current_instruction = 0x880E0D64;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// subf r30,r30,r19
	ctx.r30.u64 = ctx.r19.u64 - ctx.r30.u64;
	// lbz r19,15(r10)
	ctx.current_instruction = 0x880E0D6C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// xor r6,r11,r21
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r21.u64;
	// lwz r17,-164(r1)
	ctx.current_instruction = 0x880E0D74;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// srawi r16,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r30.s32 >> 31;
	// subf r11,r23,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r23.u64;
	// lwz r18,-260(r1)
	ctx.current_instruction = 0x880E0D80;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// subf r28,r28,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r28.u64;
	// subf r6,r21,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r21.u64;
	// lwz r21,-348(r1)
	ctx.current_instruction = 0x880E0D8C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r30,r30,r16
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r16.u64;
	// srawi r23,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r28.s32 >> 31;
	// subf r24,r24,r18
	ctx.r24.u64 = ctx.r18.u64 - ctx.r24.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// xor r18,r5,r4
	ctx.r18.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// lwz r5,-268(r1)
	ctx.current_instruction = 0x880E0DA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// subf r6,r16,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r16.u64;
	// lwz r16,-304(r1)
	ctx.current_instruction = 0x880E0DAC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// xor r30,r28,r23
	ctx.r30.u64 = ctx.r28.u64 ^ ctx.r23.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// subf r22,r22,r5
	ctx.r22.u64 = ctx.r5.u64 - ctx.r22.u64;
	// srawi r28,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r24.s32 >> 31;
	// subf r5,r23,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r23.u64;
	// lwz r23,-244(r1)
	ctx.current_instruction = 0x880E0DC4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// subf r4,r4,r18
	ctx.r4.u64 = ctx.r18.u64 - ctx.r4.u64;
	// add r6,r20,r21
	ctx.r6.u64 = ctx.r20.u64 + ctx.r21.u64;
	// xor r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r29.u64;
	// xor r30,r24,r28
	ctx.r30.u64 = ctx.r24.u64 ^ ctx.r28.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// srawi r24,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r22.s32 >> 31;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r4,r29,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r29,-308(r1)
	ctx.current_instruction = 0x880E0DE8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r23,r19,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r19.u64;
	// subf r5,r28,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r28.u64;
	// xor r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r26.u64;
	// xor r3,r22,r24
	ctx.r3.u64 = ctx.r22.u64 ^ ctx.r24.u64;
	// srawi r30,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r23.s32 >> 31;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r29,r16,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r16.u64;
	// subf r5,r24,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r24.u64;
	// subf r4,r26,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r26.u64;
	// xor r3,r23,r30
	ctx.r3.u64 = ctx.r23.u64 ^ ctx.r30.u64;
	// xor r28,r27,r25
	ctx.r28.u64 = ctx.r27.u64 ^ ctx.r25.u64;
	// srawi r31,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 31;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r5,r30,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r30.u64;
	// subf r4,r25,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r25.u64;
	// xor r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r5,r31,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r31.u64;
	// lwz r31,44(r1)
	ctx.current_instruction = 0x880E0E40;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// add r4,r6,r17
	ctx.r4.u64 = ctx.r6.u64 + ctx.r17.u64;
	// lwz r6,-168(r1)
	ctx.current_instruction = 0x880E0E48;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r5,-320(r1)
	ctx.current_instruction = 0x880E0E50;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r4,-164(r1)
	ctx.current_instruction = 0x880E0E54;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stw r3,-168(r1)
	ctx.current_instruction = 0x880E0E60;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r11,-320(r1)
	ctx.current_instruction = 0x880E0E64;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// bdnz 0x880e0484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E0484;
	// lwz r11,108(r1)
	ctx.current_instruction = 0x880E0E6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e2144
	if (!ctx.cr6.eq) goto loc_880E2144;
	// lwz r11,-328(r1)
	ctx.current_instruction = 0x880E0E78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,-336(r1)
	ctx.current_instruction = 0x880E0E80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r8,92(r1)
	ctx.current_instruction = 0x880E0E88;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r7,68(r1)
	ctx.current_instruction = 0x880E0E90;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r6,36(r1)
	ctx.current_instruction = 0x880E0E94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r5,76(r1)
	ctx.current_instruction = 0x880E0EA0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// stw r6,-304(r1)
	ctx.current_instruction = 0x880E0EA4;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r6.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,28(r1)
	ctx.current_instruction = 0x880E0EAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r11,-288(r1)
	ctx.current_instruction = 0x880E0EB8;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// stw r4,-320(r1)
	ctx.current_instruction = 0x880E0EBC;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r4.u32);
	// lbz r6,3(r10)
	ctx.current_instruction = 0x880E0EC0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.current_instruction = 0x880E0EC4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r7,1(r10)
	ctx.current_instruction = 0x880E0EC8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.current_instruction = 0x880E0ECC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,4(r10)
	ctx.current_instruction = 0x880E0ED0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
loc_880E0ED4:
	// lbz r4,0(r11)
	ctx.current_instruction = 0x880E0ED4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.current_instruction = 0x880E0ED8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lbz r31,2(r11)
	ctx.current_instruction = 0x880E0EE0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r30,3(r11)
	ctx.current_instruction = 0x880E0EE8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r29,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 31;
	// lwz r28,92(r1)
	ctx.current_instruction = 0x880E0EF0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// lbz r26,5(r10)
	ctx.current_instruction = 0x880E0EF8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// subf r5,r5,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r5.u64;
	// lbz r25,6(r10)
	ctx.current_instruction = 0x880E0F00;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// lbz r24,7(r10)
	ctx.current_instruction = 0x880E0F08;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// stw r5,-336(r1)
	ctx.current_instruction = 0x880E0F10;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// srawi r23,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 31;
	// lbz r5,5(r11)
	ctx.current_instruction = 0x880E0F1C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stw r7,-352(r1)
	ctx.current_instruction = 0x880E0F20;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// stw r23,-328(r1)
	ctx.current_instruction = 0x880E0F2C;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r23.u32);
	// stw r8,-308(r1)
	ctx.current_instruction = 0x880E0F30;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r8.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r6,-340(r1)
	ctx.current_instruction = 0x880E0F38;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// subf r8,r26,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r29,6(r11)
	ctx.current_instruction = 0x880E0F40;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// lbz r7,7(r11)
	ctx.current_instruction = 0x880E0F48;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r11,4(r11)
	ctx.current_instruction = 0x880E0F4C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r28,r25,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r25.u64;
	// lbz r26,0(r10)
	ctx.current_instruction = 0x880E0F54;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r27,r24,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r24.u64;
	// lbz r21,3(r10)
	ctx.current_instruction = 0x880E0F5C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r25,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 31;
	// lbz r24,1(r10)
	ctx.current_instruction = 0x880E0F64;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r23,r9,r11
	ctx.r23.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// lbz r22,2(r10)
	ctx.current_instruction = 0x880E0F70;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// lbz r19,5(r10)
	ctx.current_instruction = 0x880E0F78;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r20,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r27.s32 >> 31;
	// lbz r18,7(r10)
	ctx.current_instruction = 0x880E0F80;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// lbz r16,6(r10)
	ctx.current_instruction = 0x880E0F88;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// srawi r17,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 31;
	// lbz r14,4(r10)
	ctx.current_instruction = 0x880E0F90;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r15,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r4.s32 >> 31;
	// stw r10,-316(r1)
	ctx.current_instruction = 0x880E0F98;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// stw r29,-344(r1)
	ctx.current_instruction = 0x880E0F9C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r29.u32);
	// xor r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r25.u64;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// stw r5,-348(r1)
	ctx.current_instruction = 0x880E0FA8;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r5.u32);
	// xor r29,r28,r9
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// stw r21,-284(r1)
	ctx.current_instruction = 0x880E0FB0;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r21.u32);
	// subf r30,r21,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r21.u64;
	// stw r6,-324(r1)
	ctx.current_instruction = 0x880E0FB8;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r6.u32);
	// subf r5,r22,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r22.u64;
	// lwz r21,-352(r1)
	ctx.current_instruction = 0x880E0FC0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// stw r11,-352(r1)
	ctx.current_instruction = 0x880E0FC8;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r9,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r9.u64;
	// lwz r31,-336(r1)
	ctx.current_instruction = 0x880E0FD0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// xor r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lwz r6,-328(r1)
	ctx.current_instruction = 0x880E0FD8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// stw r7,-332(r1)
	ctx.current_instruction = 0x880E0FE0;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// xor r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r15.u64;
	// lwz r7,-308(r1)
	ctx.current_instruction = 0x880E0FE8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r8,-328(r1)
	ctx.current_instruction = 0x880E0FEC;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r22,-296(r1)
	ctx.current_instruction = 0x880E0FF4;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r22.u32);
	// xor r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// stw r11,-308(r1)
	ctx.current_instruction = 0x880E0FFC;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// lwz r22,-340(r1)
	ctx.current_instruction = 0x880E1004;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r27,r27,r20
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r20.u64;
	// stw r19,-336(r1)
	ctx.current_instruction = 0x880E100C;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r19.u32);
	// subf r11,r15,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r15.u64;
	// xor r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,-184(r1)
	ctx.current_instruction = 0x880E101C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	// lwz r4,-288(r1)
	ctx.current_instruction = 0x880E1024;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// xor r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// lwz r10,52(r1)
	ctx.current_instruction = 0x880E102C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r25,-344(r1)
	ctx.current_instruction = 0x880E1034;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r8,r29,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r29,-308(r1)
	ctx.current_instruction = 0x880E103C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r9,r7,r21
	ctx.r9.u64 = ctx.r7.u64 + ctx.r21.u64;
	// lwz r3,92(r1)
	ctx.current_instruction = 0x880E1044;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,-328(r1)
	ctx.current_instruction = 0x880E104C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r7,r20,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r20.u64;
	// lwz r27,-348(r1)
	ctx.current_instruction = 0x880E1054;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r4,-324(r1)
	ctx.current_instruction = 0x880E1060;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,-332(r1)
	ctx.current_instruction = 0x880E1068;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r31,-316(r1)
	ctx.current_instruction = 0x880E1070;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,-288(r1)
	ctx.current_instruction = 0x880E1078;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-184(r1)
	ctx.current_instruction = 0x880E1080;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r5.u32);
	// lbz r7,5(r11)
	ctx.current_instruction = 0x880E1084;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r30,r19,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r7,-336(r1)
	ctx.current_instruction = 0x880E108C;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r7.u32);
	// xor r28,r23,r17
	ctx.r28.u64 = ctx.r23.u64 ^ ctx.r17.u64;
	// lbz r6,6(r11)
	ctx.current_instruction = 0x880E1094;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// xor r29,r22,r4
	ctx.r29.u64 = ctx.r22.u64 ^ ctx.r4.u64;
	// stw r6,-328(r1)
	ctx.current_instruction = 0x880E109C;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r6.u32);
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lbz r22,0(r11)
	ctx.current_instruction = 0x880E10A4;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r6,r4,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r4.u64;
	// lwz r23,-352(r1)
	ctx.current_instruction = 0x880E10AC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r7,r17,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r25,r16,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r16.u64;
	// lbz r21,1(r11)
	ctx.current_instruction = 0x880E10B8;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r20,2(r11)
	ctx.current_instruction = 0x880E10BC;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r8,r18,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r18.u64;
	// lbz r19,3(r11)
	ctx.current_instruction = 0x880E10C4;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r15,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r27.s32 >> 31;
	// lbz r29,7(r11)
	ctx.current_instruction = 0x880E10CC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// subf r23,r14,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r14.u64;
	// lbz r28,4(r11)
	ctx.current_instruction = 0x880E10D4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r31,r26,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r26.u64;
	// lwz r3,-180(r1)
	ctx.current_instruction = 0x880E10E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// srawi r4,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 31;
	// stw r11,-316(r1)
	ctx.current_instruction = 0x880E10E8;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// stw r8,-352(r1)
	ctx.current_instruction = 0x880E10F0;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// srawi r5,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r23.s32 >> 31;
	// stw r23,-340(r1)
	ctx.current_instruction = 0x880E10F8;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r23.u32);
	// stw r26,-308(r1)
	ctx.current_instruction = 0x880E10FC;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r26.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880E1104;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r24,r24,r21
	ctx.r24.u64 = ctx.r21.u64 - ctx.r24.u64;
	// lwz r26,-284(r1)
	ctx.current_instruction = 0x880E110C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-332(r1)
	ctx.current_instruction = 0x880E1114;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r5.u32);
	// srawi r8,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 31;
	// lwz r5,-296(r1)
	ctx.current_instruction = 0x880E111C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r7,r26,r19
	ctx.r7.u64 = ctx.r19.u64 - ctx.r26.u64;
	// lwz r17,-204(r1)
	ctx.current_instruction = 0x880E1124;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// srawi r6,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 31;
	// lwz r26,-336(r1)
	ctx.current_instruction = 0x880E112C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r5,r5,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r5.u64;
	// stw r11,-312(r1)
	ctx.current_instruction = 0x880E1134;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r23,-328(r1)
	ctx.current_instruction = 0x880E113C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// stw r22,-348(r1)
	ctx.current_instruction = 0x880E1144;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r22.u32);
	// srawi r30,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 31;
	// stw r21,-324(r1)
	ctx.current_instruction = 0x880E114C;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r21.u32);
	// subf r22,r16,r23
	ctx.r22.u64 = ctx.r23.u64 - ctx.r16.u64;
	// add r3,r10,r17
	ctx.r3.u64 = ctx.r10.u64 + ctx.r17.u64;
	// srawi r21,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r7.s32 >> 31;
	// stw r5,-336(r1)
	ctx.current_instruction = 0x880E115C;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// xor r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r4.u64;
	// lwz r10,-316(r1)
	ctx.current_instruction = 0x880E1164;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// xor r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r15.u64;
	// subf r4,r4,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r4.u64;
	// stw r9,-180(r1)
	ctx.current_instruction = 0x880E1170;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r9.u32);
	// subf r27,r15,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r15.u64;
	// lwz r15,-316(r1)
	ctx.current_instruction = 0x880E1178;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// stw r4,-344(r1)
	ctx.current_instruction = 0x880E117C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// xor r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// stw r27,-328(r1)
	ctx.current_instruction = 0x880E1184;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// xor r4,r24,r6
	ctx.r4.u64 = ctx.r24.u64 ^ ctx.r6.u64;
	// lbz r10,1(r10)
	ctx.current_instruction = 0x880E118C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r9,r18,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r18.u64;
	// subf r5,r6,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r3,-204(r1)
	ctx.current_instruction = 0x880E1198;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
	// lbz r6,3(r15)
	ctx.current_instruction = 0x880E119C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 3);
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// srawi r18,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r22.s32 >> 31;
	// lwz r27,-196(r1)
	ctx.current_instruction = 0x880E11A8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// lwz r24,-224(r1)
	ctx.current_instruction = 0x880E11B0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// stw r10,-280(r1)
	ctx.current_instruction = 0x880E11B4;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r10,r8,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r8.u64;
	// lbz r8,2(r15)
	ctx.current_instruction = 0x880E11BC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r15.u32 + 2);
	// srawi r16,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r9.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,-292(r1)
	ctx.current_instruction = 0x880E11C8;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r6.u32);
	// xor r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r21.u64;
	// lwz r31,-308(r1)
	ctx.current_instruction = 0x880E11D0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// lwz r3,-324(r1)
	ctx.current_instruction = 0x880E11D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// xor r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r16.u64;
	// stw r8,-300(r1)
	ctx.current_instruction = 0x880E11E0;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r8.u32);
	// xor r8,r22,r18
	ctx.r8.u64 = ctx.r22.u64 ^ ctx.r18.u64;
	// subf r17,r14,r28
	ctx.r17.u64 = ctx.r28.u64 - ctx.r14.u64;
	// lwz r22,-188(r1)
	ctx.current_instruction = 0x880E11EC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// subf r6,r18,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r18.u64;
	// lwz r8,-312(r1)
	ctx.current_instruction = 0x880E11F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r4,-336(r1)
	ctx.current_instruction = 0x880E11F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r25,-348(r1)
	ctx.current_instruction = 0x880E1204;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// subf r6,r16,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r16.u64;
	// subf r5,r30,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r30.u64;
	// lwz r4,-352(r1)
	ctx.current_instruction = 0x880E1214;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-344(r1)
	ctx.current_instruction = 0x880E1218;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r30,-340(r1)
	ctx.current_instruction = 0x880E1224;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r5,r21,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r21.u64;
	// xor r7,r4,r31
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r5,-328(r1)
	ctx.current_instruction = 0x880E1234;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r4,r31,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lwz r31,-332(r1)
	ctx.current_instruction = 0x880E123C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r7,-280(r1)
	ctx.current_instruction = 0x880E1244;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// srawi r21,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r17.s32 >> 31;
	// xor r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r6,-196(r1)
	ctx.current_instruction = 0x880E125C;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r6.u32);
	// xor r18,r17,r21
	ctx.r18.u64 = ctx.r17.u64 ^ ctx.r21.u64;
	// lwz r5,-300(r1)
	ctx.current_instruction = 0x880E1264;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// rotlwi r10,r15,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// subf r25,r8,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r8.u64;
	// subf r6,r21,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r21.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r31,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 31;
	// subf r3,r7,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r27,5(r10)
	ctx.current_instruction = 0x880E1280;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r21,6(r10)
	ctx.current_instruction = 0x880E1288;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lwz r6,-292(r1)
	ctx.current_instruction = 0x880E1290;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lbz r24,7(r10)
	ctx.current_instruction = 0x880E1294;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// srawi r30,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 31;
	// xor r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r31.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// stw r4,-224(r1)
	ctx.current_instruction = 0x880E12A4;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r4.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,4(r10)
	ctx.current_instruction = 0x880E12AC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r31,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r31.u64;
	// lwz r25,-176(r1)
	ctx.current_instruction = 0x880E12B4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// subf r31,r30,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r30.u64;
	// stw r11,-188(r1)
	ctx.current_instruction = 0x880E12BC;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// subf r22,r5,r20
	ctx.r22.u64 = ctx.r20.u64 - ctx.r5.u64;
	// subf r30,r6,r19
	ctx.r30.u64 = ctx.r19.u64 - ctx.r6.u64;
	// lwz r19,-288(r1)
	ctx.current_instruction = 0x880E12C8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r3,r27,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r11,r21,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r21.u64;
	// lwz r21,-208(r1)
	ctx.current_instruction = 0x880E12D4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// srawi r27,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r22.s32 >> 31;
	// srawi r26,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 31;
	// srawi r23,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r3.s32 >> 31;
	// srawi r20,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 31;
	// subf r29,r24,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r24.u64;
	// lwz r24,52(r1)
	ctx.current_instruction = 0x880E12EC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// xor r18,r3,r23
	ctx.r18.u64 = ctx.r3.u64 ^ ctx.r23.u64;
	// xor r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r20.u64;
	// srawi r17,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r29.s32 >> 31;
	// subf r28,r9,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r9.u64;
	// subf r3,r20,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r20.u64;
	// subf r11,r23,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r23.u64;
	// xor r29,r29,r17
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r17.u64;
	// srawi r23,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r28.s32 >> 31;
	// xor r22,r22,r27
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r27.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r17,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r17.u64;
	// subf r31,r27,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r27.u64;
	// xor r29,r28,r23
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r23.u64;
	// xor r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r26.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r23,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r23.u64;
	// subf r31,r26,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r26.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r11,r19,r24
	ctx.r11.u64 = ctx.r19.u64 + ctx.r24.u64;
	// stw r3,-176(r1)
	ctx.current_instruction = 0x880E1350;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r3.u32);
	// stw r4,-208(r1)
	ctx.current_instruction = 0x880E1354;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r4.u32);
	// stw r11,-288(r1)
	ctx.current_instruction = 0x880E1358;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// bdnz 0x880e0ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E0ED4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_880E1368:
	// lbz r4,0(r11)
	ctx.current_instruction = 0x880E1368;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.current_instruction = 0x880E136C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lbz r31,2(r11)
	ctx.current_instruction = 0x880E1374;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r30,3(r11)
	ctx.current_instruction = 0x880E137C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r29,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 31;
	// lwz r28,92(r1)
	ctx.current_instruction = 0x880E1384;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// lbz r26,5(r10)
	ctx.current_instruction = 0x880E138C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// subf r5,r5,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r5.u64;
	// lbz r25,6(r10)
	ctx.current_instruction = 0x880E1394;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// lbz r24,7(r10)
	ctx.current_instruction = 0x880E139C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// stw r5,-336(r1)
	ctx.current_instruction = 0x880E13A4;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// srawi r23,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 31;
	// lbz r5,5(r11)
	ctx.current_instruction = 0x880E13B0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stw r7,-352(r1)
	ctx.current_instruction = 0x880E13B4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// stw r23,-328(r1)
	ctx.current_instruction = 0x880E13C0;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r23.u32);
	// stw r8,-308(r1)
	ctx.current_instruction = 0x880E13C4;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r8.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r6,-340(r1)
	ctx.current_instruction = 0x880E13CC;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// subf r8,r26,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r29,6(r11)
	ctx.current_instruction = 0x880E13D4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// lbz r7,7(r11)
	ctx.current_instruction = 0x880E13DC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r11,4(r11)
	ctx.current_instruction = 0x880E13E0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r28,r25,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r25.u64;
	// lbz r26,0(r10)
	ctx.current_instruction = 0x880E13E8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r27,r24,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r24.u64;
	// lbz r21,3(r10)
	ctx.current_instruction = 0x880E13F0;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r25,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 31;
	// lbz r24,1(r10)
	ctx.current_instruction = 0x880E13F8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r23,r9,r11
	ctx.r23.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// lbz r22,2(r10)
	ctx.current_instruction = 0x880E1404;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// lbz r19,5(r10)
	ctx.current_instruction = 0x880E140C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r20,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r27.s32 >> 31;
	// lbz r18,7(r10)
	ctx.current_instruction = 0x880E1414;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// lbz r16,6(r10)
	ctx.current_instruction = 0x880E141C;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// srawi r17,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 31;
	// lbz r14,4(r10)
	ctx.current_instruction = 0x880E1424;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r15,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r4.s32 >> 31;
	// stw r10,-316(r1)
	ctx.current_instruction = 0x880E142C;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// stw r29,-344(r1)
	ctx.current_instruction = 0x880E1430;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r29.u32);
	// xor r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r25.u64;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// stw r5,-348(r1)
	ctx.current_instruction = 0x880E143C;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r5.u32);
	// xor r29,r28,r9
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// stw r21,-284(r1)
	ctx.current_instruction = 0x880E1444;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r21.u32);
	// subf r30,r21,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r21.u64;
	// stw r6,-324(r1)
	ctx.current_instruction = 0x880E144C;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r6.u32);
	// subf r5,r22,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r22.u64;
	// lwz r21,-352(r1)
	ctx.current_instruction = 0x880E1454;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// stw r11,-352(r1)
	ctx.current_instruction = 0x880E145C;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r9,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r9.u64;
	// lwz r31,-336(r1)
	ctx.current_instruction = 0x880E1464;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// xor r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lwz r6,-328(r1)
	ctx.current_instruction = 0x880E146C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// stw r7,-332(r1)
	ctx.current_instruction = 0x880E1474;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// xor r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r15.u64;
	// lwz r7,-308(r1)
	ctx.current_instruction = 0x880E147C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r8,-328(r1)
	ctx.current_instruction = 0x880E1480;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r22,-296(r1)
	ctx.current_instruction = 0x880E1488;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r22.u32);
	// xor r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// stw r11,-308(r1)
	ctx.current_instruction = 0x880E1490;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// lwz r22,-340(r1)
	ctx.current_instruction = 0x880E1498;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r27,r27,r20
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r20.u64;
	// stw r19,-336(r1)
	ctx.current_instruction = 0x880E14A0;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r19.u32);
	// subf r11,r15,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r15.u64;
	// xor r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,-172(r1)
	ctx.current_instruction = 0x880E14B0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	// lwz r4,-288(r1)
	ctx.current_instruction = 0x880E14B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// xor r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// lwz r10,52(r1)
	ctx.current_instruction = 0x880E14C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r25,-344(r1)
	ctx.current_instruction = 0x880E14C8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r8,r29,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r29,-308(r1)
	ctx.current_instruction = 0x880E14D0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r9,r7,r21
	ctx.r9.u64 = ctx.r7.u64 + ctx.r21.u64;
	// lwz r3,92(r1)
	ctx.current_instruction = 0x880E14D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,-328(r1)
	ctx.current_instruction = 0x880E14E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r7,r20,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r20.u64;
	// lwz r27,-348(r1)
	ctx.current_instruction = 0x880E14E8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r4,-324(r1)
	ctx.current_instruction = 0x880E14F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,-332(r1)
	ctx.current_instruction = 0x880E14FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r31,-316(r1)
	ctx.current_instruction = 0x880E1504;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,-288(r1)
	ctx.current_instruction = 0x880E150C;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-172(r1)
	ctx.current_instruction = 0x880E1514;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r5.u32);
	// lbz r7,5(r11)
	ctx.current_instruction = 0x880E1518;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r30,r19,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r7,-336(r1)
	ctx.current_instruction = 0x880E1520;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r7.u32);
	// xor r28,r23,r17
	ctx.r28.u64 = ctx.r23.u64 ^ ctx.r17.u64;
	// lbz r6,6(r11)
	ctx.current_instruction = 0x880E1528;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// xor r29,r22,r4
	ctx.r29.u64 = ctx.r22.u64 ^ ctx.r4.u64;
	// stw r6,-328(r1)
	ctx.current_instruction = 0x880E1530;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r6.u32);
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lbz r22,0(r11)
	ctx.current_instruction = 0x880E1538;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r6,r4,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r4.u64;
	// lwz r23,-352(r1)
	ctx.current_instruction = 0x880E1540;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r7,r17,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r25,r16,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r16.u64;
	// lbz r21,1(r11)
	ctx.current_instruction = 0x880E154C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r20,2(r11)
	ctx.current_instruction = 0x880E1550;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r8,r18,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r18.u64;
	// lbz r19,3(r11)
	ctx.current_instruction = 0x880E1558;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r15,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r27.s32 >> 31;
	// lbz r29,7(r11)
	ctx.current_instruction = 0x880E1560;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// subf r23,r14,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r14.u64;
	// lbz r28,4(r11)
	ctx.current_instruction = 0x880E1568;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r31,r26,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r26.u64;
	// lwz r3,-220(r1)
	ctx.current_instruction = 0x880E1574;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// srawi r4,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 31;
	// stw r11,-316(r1)
	ctx.current_instruction = 0x880E157C;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r11.u32);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// stw r8,-352(r1)
	ctx.current_instruction = 0x880E1584;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// srawi r5,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r23.s32 >> 31;
	// stw r23,-340(r1)
	ctx.current_instruction = 0x880E158C;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r23.u32);
	// stw r26,-308(r1)
	ctx.current_instruction = 0x880E1590;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r26.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880E1598;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r24,r24,r21
	ctx.r24.u64 = ctx.r21.u64 - ctx.r24.u64;
	// lwz r26,-284(r1)
	ctx.current_instruction = 0x880E15A0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-332(r1)
	ctx.current_instruction = 0x880E15A8;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r5.u32);
	// srawi r8,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 31;
	// lwz r5,-296(r1)
	ctx.current_instruction = 0x880E15B0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r7,r26,r19
	ctx.r7.u64 = ctx.r19.u64 - ctx.r26.u64;
	// lwz r17,-212(r1)
	ctx.current_instruction = 0x880E15B8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// srawi r6,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 31;
	// lwz r26,-336(r1)
	ctx.current_instruction = 0x880E15C0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r5,r5,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r5.u64;
	// stw r11,-312(r1)
	ctx.current_instruction = 0x880E15C8;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r23,-328(r1)
	ctx.current_instruction = 0x880E15D0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// stw r22,-348(r1)
	ctx.current_instruction = 0x880E15D8;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r22.u32);
	// srawi r30,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 31;
	// stw r21,-324(r1)
	ctx.current_instruction = 0x880E15E0;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r21.u32);
	// subf r22,r16,r23
	ctx.r22.u64 = ctx.r23.u64 - ctx.r16.u64;
	// add r3,r10,r17
	ctx.r3.u64 = ctx.r10.u64 + ctx.r17.u64;
	// srawi r21,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r7.s32 >> 31;
	// stw r5,-336(r1)
	ctx.current_instruction = 0x880E15F0;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// xor r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r4.u64;
	// lwz r10,-316(r1)
	ctx.current_instruction = 0x880E15F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// xor r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r15.u64;
	// subf r4,r4,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r4.u64;
	// stw r9,-220(r1)
	ctx.current_instruction = 0x880E1604;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r9.u32);
	// subf r27,r15,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r15.u64;
	// lwz r15,-316(r1)
	ctx.current_instruction = 0x880E160C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// stw r4,-344(r1)
	ctx.current_instruction = 0x880E1610;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// xor r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// stw r27,-328(r1)
	ctx.current_instruction = 0x880E1618;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// xor r4,r24,r6
	ctx.r4.u64 = ctx.r24.u64 ^ ctx.r6.u64;
	// lbz r10,1(r10)
	ctx.current_instruction = 0x880E1620;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r9,r18,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r18.u64;
	// subf r5,r6,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r3,-212(r1)
	ctx.current_instruction = 0x880E162C;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r3.u32);
	// lbz r6,3(r15)
	ctx.current_instruction = 0x880E1630;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 3);
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// srawi r18,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r22.s32 >> 31;
	// lwz r27,-228(r1)
	ctx.current_instruction = 0x880E163C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// lwz r24,-192(r1)
	ctx.current_instruction = 0x880E1644;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r10,-280(r1)
	ctx.current_instruction = 0x880E1648;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r10,r8,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r8.u64;
	// lbz r8,2(r15)
	ctx.current_instruction = 0x880E1650;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r15.u32 + 2);
	// srawi r16,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r9.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,-292(r1)
	ctx.current_instruction = 0x880E165C;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r6.u32);
	// xor r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r21.u64;
	// lwz r31,-308(r1)
	ctx.current_instruction = 0x880E1664;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// lwz r3,-324(r1)
	ctx.current_instruction = 0x880E166C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// xor r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r16.u64;
	// stw r8,-300(r1)
	ctx.current_instruction = 0x880E1674;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r8.u32);
	// xor r8,r22,r18
	ctx.r8.u64 = ctx.r22.u64 ^ ctx.r18.u64;
	// subf r17,r14,r28
	ctx.r17.u64 = ctx.r28.u64 - ctx.r14.u64;
	// lwz r22,-216(r1)
	ctx.current_instruction = 0x880E1680;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// subf r6,r18,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r18.u64;
	// lwz r8,-312(r1)
	ctx.current_instruction = 0x880E1688;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r4,-336(r1)
	ctx.current_instruction = 0x880E168C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r25,-348(r1)
	ctx.current_instruction = 0x880E1698;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// subf r6,r16,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r16.u64;
	// subf r5,r30,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r30.u64;
	// lwz r4,-352(r1)
	ctx.current_instruction = 0x880E16A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-344(r1)
	ctx.current_instruction = 0x880E16AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r30,-340(r1)
	ctx.current_instruction = 0x880E16B8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r5,r21,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r21.u64;
	// xor r7,r4,r31
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r5,-328(r1)
	ctx.current_instruction = 0x880E16C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r4,r31,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lwz r31,-332(r1)
	ctx.current_instruction = 0x880E16D0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r7,-280(r1)
	ctx.current_instruction = 0x880E16D8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// srawi r21,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r17.s32 >> 31;
	// xor r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r6,-228(r1)
	ctx.current_instruction = 0x880E16F0;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r6.u32);
	// xor r18,r17,r21
	ctx.r18.u64 = ctx.r17.u64 ^ ctx.r21.u64;
	// lwz r5,-300(r1)
	ctx.current_instruction = 0x880E16F8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// rotlwi r10,r15,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// subf r25,r8,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r8.u64;
	// subf r6,r21,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r21.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r31,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 31;
	// subf r3,r7,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r27,5(r10)
	ctx.current_instruction = 0x880E1714;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r21,6(r10)
	ctx.current_instruction = 0x880E171C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lwz r6,-292(r1)
	ctx.current_instruction = 0x880E1724;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lbz r24,7(r10)
	ctx.current_instruction = 0x880E1728;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// srawi r30,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 31;
	// xor r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r31.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// stw r4,-192(r1)
	ctx.current_instruction = 0x880E1738;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,4(r10)
	ctx.current_instruction = 0x880E1740;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r31,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r31.u64;
	// lwz r25,-168(r1)
	ctx.current_instruction = 0x880E1748;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// subf r31,r30,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r30.u64;
	// stw r11,-216(r1)
	ctx.current_instruction = 0x880E1750;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r11.u32);
	// subf r22,r5,r20
	ctx.r22.u64 = ctx.r20.u64 - ctx.r5.u64;
	// subf r30,r6,r19
	ctx.r30.u64 = ctx.r19.u64 - ctx.r6.u64;
	// lwz r19,-288(r1)
	ctx.current_instruction = 0x880E175C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r3,r27,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r11,r21,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r21.u64;
	// lwz r21,-164(r1)
	ctx.current_instruction = 0x880E1768;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// srawi r27,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r22.s32 >> 31;
	// srawi r26,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 31;
	// srawi r23,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r3.s32 >> 31;
	// srawi r20,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 31;
	// subf r29,r24,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r24.u64;
	// lwz r24,52(r1)
	ctx.current_instruction = 0x880E1780;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// xor r18,r3,r23
	ctx.r18.u64 = ctx.r3.u64 ^ ctx.r23.u64;
	// xor r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r20.u64;
	// srawi r17,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r29.s32 >> 31;
	// subf r28,r9,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r9.u64;
	// subf r3,r20,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r20.u64;
	// subf r11,r23,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r23.u64;
	// xor r29,r29,r17
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r17.u64;
	// srawi r23,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r28.s32 >> 31;
	// xor r22,r22,r27
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r27.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r17,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r17.u64;
	// subf r31,r27,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r27.u64;
	// xor r29,r28,r23
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r23.u64;
	// xor r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r26.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r23,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r23.u64;
	// subf r31,r26,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r26.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r11,r19,r24
	ctx.r11.u64 = ctx.r19.u64 + ctx.r24.u64;
	// stw r3,-168(r1)
	ctx.current_instruction = 0x880E17E4;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r4,-164(r1)
	ctx.current_instruction = 0x880E17E8;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// stw r11,-288(r1)
	ctx.current_instruction = 0x880E17EC;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// bdnz 0x880e1368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E1368;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,-320(r1)
	ctx.current_instruction = 0x880E17F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r6,3(r10)
	ctx.current_instruction = 0x880E1800;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.current_instruction = 0x880E1804;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r7,1(r10)
	ctx.current_instruction = 0x880E1808;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,0(r10)
	ctx.current_instruction = 0x880E180C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,4(r10)
	ctx.current_instruction = 0x880E1810;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lwz r11,-304(r1)
	ctx.current_instruction = 0x880E1814;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
loc_880E1818:
	// lbz r4,0(r11)
	ctx.current_instruction = 0x880E1818;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.current_instruction = 0x880E181C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lbz r31,2(r11)
	ctx.current_instruction = 0x880E1824;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r30,3(r11)
	ctx.current_instruction = 0x880E182C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r29,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 31;
	// lwz r28,92(r1)
	ctx.current_instruction = 0x880E1834;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// lbz r26,5(r10)
	ctx.current_instruction = 0x880E183C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// subf r5,r5,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r5.u64;
	// lbz r25,6(r10)
	ctx.current_instruction = 0x880E1844;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// lbz r24,7(r10)
	ctx.current_instruction = 0x880E184C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// stw r5,-336(r1)
	ctx.current_instruction = 0x880E1854;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// srawi r23,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 31;
	// lbz r5,5(r11)
	ctx.current_instruction = 0x880E1860;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stw r7,-352(r1)
	ctx.current_instruction = 0x880E1864;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// stw r23,-328(r1)
	ctx.current_instruction = 0x880E1870;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r23.u32);
	// stw r8,-308(r1)
	ctx.current_instruction = 0x880E1874;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r8.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r6,-340(r1)
	ctx.current_instruction = 0x880E187C;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// subf r8,r26,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r29,6(r11)
	ctx.current_instruction = 0x880E1884;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// lbz r7,7(r11)
	ctx.current_instruction = 0x880E188C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r11,4(r11)
	ctx.current_instruction = 0x880E1890;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r28,r25,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r25.u64;
	// lbz r26,0(r10)
	ctx.current_instruction = 0x880E1898;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r27,r24,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r24.u64;
	// lbz r21,3(r10)
	ctx.current_instruction = 0x880E18A0;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r25,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 31;
	// lbz r24,1(r10)
	ctx.current_instruction = 0x880E18A8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r23,r9,r11
	ctx.r23.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// lbz r22,2(r10)
	ctx.current_instruction = 0x880E18B4;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// lbz r19,4(r10)
	ctx.current_instruction = 0x880E18BC;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r20,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r27.s32 >> 31;
	// lbz r18,7(r10)
	ctx.current_instruction = 0x880E18C4;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// lbz r16,6(r10)
	ctx.current_instruction = 0x880E18CC;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// srawi r17,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 31;
	// lbz r14,5(r10)
	ctx.current_instruction = 0x880E18D4;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r15,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r4.s32 >> 31;
	// stw r10,-320(r1)
	ctx.current_instruction = 0x880E18DC;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r10.u32);
	// stw r29,-344(r1)
	ctx.current_instruction = 0x880E18E0;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r29.u32);
	// xor r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r25.u64;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// stw r5,-324(r1)
	ctx.current_instruction = 0x880E18EC;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r5.u32);
	// xor r29,r28,r9
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// stw r21,-284(r1)
	ctx.current_instruction = 0x880E18F4;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r21.u32);
	// subf r30,r21,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r21.u64;
	// stw r6,-348(r1)
	ctx.current_instruction = 0x880E18FC;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r6.u32);
	// subf r5,r22,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r22.u64;
	// lwz r21,-352(r1)
	ctx.current_instruction = 0x880E1904;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// stw r11,-352(r1)
	ctx.current_instruction = 0x880E190C;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r9,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r9.u64;
	// lwz r31,-336(r1)
	ctx.current_instruction = 0x880E1914;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// xor r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lwz r6,-328(r1)
	ctx.current_instruction = 0x880E191C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// stw r7,-332(r1)
	ctx.current_instruction = 0x880E1924;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// xor r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r15.u64;
	// lwz r7,-308(r1)
	ctx.current_instruction = 0x880E192C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r8,-328(r1)
	ctx.current_instruction = 0x880E1930;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r22,-296(r1)
	ctx.current_instruction = 0x880E1938;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r22.u32);
	// xor r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// stw r11,-308(r1)
	ctx.current_instruction = 0x880E1940;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// lwz r22,-340(r1)
	ctx.current_instruction = 0x880E1948;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r27,r27,r20
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r20.u64;
	// stw r19,-336(r1)
	ctx.current_instruction = 0x880E1950;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r19.u32);
	// subf r11,r15,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r15.u64;
	// xor r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,-184(r1)
	ctx.current_instruction = 0x880E1960;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	// lwz r4,-304(r1)
	ctx.current_instruction = 0x880E1968;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// xor r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// lwz r10,52(r1)
	ctx.current_instruction = 0x880E1970;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r25,-324(r1)
	ctx.current_instruction = 0x880E1978;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r8,r29,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r29,-308(r1)
	ctx.current_instruction = 0x880E1980;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r9,r7,r21
	ctx.r9.u64 = ctx.r7.u64 + ctx.r21.u64;
	// lwz r3,92(r1)
	ctx.current_instruction = 0x880E1988;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,-328(r1)
	ctx.current_instruction = 0x880E1990;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r7,r20,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r20.u64;
	// lwz r27,-352(r1)
	ctx.current_instruction = 0x880E1998;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r4,-348(r1)
	ctx.current_instruction = 0x880E19A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,-344(r1)
	ctx.current_instruction = 0x880E19AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r31,-320(r1)
	ctx.current_instruction = 0x880E19B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,-304(r1)
	ctx.current_instruction = 0x880E19BC;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-184(r1)
	ctx.current_instruction = 0x880E19C4;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r5.u32);
	// lbz r7,4(r11)
	ctx.current_instruction = 0x880E19C8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r30,r19,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r7,-336(r1)
	ctx.current_instruction = 0x880E19D0;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r7.u32);
	// xor r28,r23,r17
	ctx.r28.u64 = ctx.r23.u64 ^ ctx.r17.u64;
	// lbz r6,5(r11)
	ctx.current_instruction = 0x880E19D8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// xor r29,r22,r4
	ctx.r29.u64 = ctx.r22.u64 ^ ctx.r4.u64;
	// stw r6,-328(r1)
	ctx.current_instruction = 0x880E19E0;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r6.u32);
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lbz r22,0(r11)
	ctx.current_instruction = 0x880E19E8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r6,r4,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r4.u64;
	// lwz r23,-332(r1)
	ctx.current_instruction = 0x880E19F0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r7,r17,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r25,r14,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r14.u64;
	// lbz r21,1(r11)
	ctx.current_instruction = 0x880E19FC;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r20,2(r11)
	ctx.current_instruction = 0x880E1A00;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r8,r16,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r16.u64;
	// lbz r19,3(r11)
	ctx.current_instruction = 0x880E1A08;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r15,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r27.s32 >> 31;
	// lbz r29,6(r11)
	ctx.current_instruction = 0x880E1A10;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// subf r23,r18,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r18.u64;
	// lbz r28,7(r11)
	ctx.current_instruction = 0x880E1A18;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r31,r26,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r26.u64;
	// lwz r3,-180(r1)
	ctx.current_instruction = 0x880E1A24;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// srawi r4,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 31;
	// stw r11,-320(r1)
	ctx.current_instruction = 0x880E1A2C;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// stw r8,-352(r1)
	ctx.current_instruction = 0x880E1A34;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// srawi r5,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r23.s32 >> 31;
	// stw r23,-340(r1)
	ctx.current_instruction = 0x880E1A3C;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r23.u32);
	// stw r26,-308(r1)
	ctx.current_instruction = 0x880E1A40;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r26.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880E1A48;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r24,r24,r21
	ctx.r24.u64 = ctx.r21.u64 - ctx.r24.u64;
	// lwz r26,-284(r1)
	ctx.current_instruction = 0x880E1A50;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-332(r1)
	ctx.current_instruction = 0x880E1A58;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r5.u32);
	// srawi r8,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 31;
	// lwz r5,-296(r1)
	ctx.current_instruction = 0x880E1A60;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r7,r26,r19
	ctx.r7.u64 = ctx.r19.u64 - ctx.r26.u64;
	// lwz r17,-204(r1)
	ctx.current_instruction = 0x880E1A68;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// srawi r6,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 31;
	// lwz r26,-336(r1)
	ctx.current_instruction = 0x880E1A70;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r5,r5,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r5.u64;
	// stw r11,-312(r1)
	ctx.current_instruction = 0x880E1A78;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r23,-328(r1)
	ctx.current_instruction = 0x880E1A80;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// stw r22,-348(r1)
	ctx.current_instruction = 0x880E1A88;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r22.u32);
	// srawi r30,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 31;
	// stw r21,-324(r1)
	ctx.current_instruction = 0x880E1A90;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r21.u32);
	// subf r22,r14,r23
	ctx.r22.u64 = ctx.r23.u64 - ctx.r14.u64;
	// add r3,r10,r17
	ctx.r3.u64 = ctx.r10.u64 + ctx.r17.u64;
	// srawi r21,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r7.s32 >> 31;
	// stw r5,-336(r1)
	ctx.current_instruction = 0x880E1AA0;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// xor r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r4.u64;
	// lwz r10,-320(r1)
	ctx.current_instruction = 0x880E1AA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// xor r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r15.u64;
	// subf r4,r4,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r4.u64;
	// stw r3,-204(r1)
	ctx.current_instruction = 0x880E1AB4;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
	// subf r27,r15,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r15.u64;
	// lwz r15,-320(r1)
	ctx.current_instruction = 0x880E1ABC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r4,-344(r1)
	ctx.current_instruction = 0x880E1AC0;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// xor r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// stw r27,-328(r1)
	ctx.current_instruction = 0x880E1AC8;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// xor r4,r24,r6
	ctx.r4.u64 = ctx.r24.u64 ^ ctx.r6.u64;
	// lbz r10,1(r10)
	ctx.current_instruction = 0x880E1AD0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// subf r5,r6,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r9,-180(r1)
	ctx.current_instruction = 0x880E1ADC;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r9.u32);
	// lbz r6,3(r15)
	ctx.current_instruction = 0x880E1AE0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 3);
	// srawi r17,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r22.s32 >> 31;
	// subf r9,r16,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r16.u64;
	// lwz r27,-196(r1)
	ctx.current_instruction = 0x880E1AEC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// lwz r24,-224(r1)
	ctx.current_instruction = 0x880E1AF4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// stw r10,-280(r1)
	ctx.current_instruction = 0x880E1AF8;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r10,r8,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r8.u64;
	// lbz r8,2(r15)
	ctx.current_instruction = 0x880E1B00;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r15.u32 + 2);
	// srawi r16,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r9.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,-292(r1)
	ctx.current_instruction = 0x880E1B0C;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r6.u32);
	// xor r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r21.u64;
	// lwz r31,-308(r1)
	ctx.current_instruction = 0x880E1B14;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// lwz r3,-324(r1)
	ctx.current_instruction = 0x880E1B1C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// xor r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r16.u64;
	// stw r8,-300(r1)
	ctx.current_instruction = 0x880E1B24;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r8.u32);
	// xor r8,r22,r17
	ctx.r8.u64 = ctx.r22.u64 ^ ctx.r17.u64;
	// subf r18,r18,r28
	ctx.r18.u64 = ctx.r28.u64 - ctx.r18.u64;
	// lwz r22,-188(r1)
	ctx.current_instruction = 0x880E1B30;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// subf r6,r17,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r17.u64;
	// lwz r8,-312(r1)
	ctx.current_instruction = 0x880E1B38;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r4,-336(r1)
	ctx.current_instruction = 0x880E1B3C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r25,-348(r1)
	ctx.current_instruction = 0x880E1B48;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// xor r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// subf r6,r16,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r16.u64;
	// subf r5,r30,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r30.u64;
	// lwz r4,-352(r1)
	ctx.current_instruction = 0x880E1B58;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-344(r1)
	ctx.current_instruction = 0x880E1B5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r30,-340(r1)
	ctx.current_instruction = 0x880E1B68;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r5,r21,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r21.u64;
	// xor r7,r4,r31
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r5,-328(r1)
	ctx.current_instruction = 0x880E1B78;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r4,r31,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lwz r31,-332(r1)
	ctx.current_instruction = 0x880E1B80;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r7,-280(r1)
	ctx.current_instruction = 0x880E1B88;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// srawi r21,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r18.s32 >> 31;
	// xor r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// stw r6,-196(r1)
	ctx.current_instruction = 0x880E1BA0;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r6.u32);
	// xor r18,r18,r21
	ctx.r18.u64 = ctx.r18.u64 ^ ctx.r21.u64;
	// lwz r5,-300(r1)
	ctx.current_instruction = 0x880E1BA8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// rotlwi r10,r15,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// subf r25,r8,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r8.u64;
	// subf r6,r21,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r21.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// srawi r31,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 31;
	// subf r3,r7,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r27,5(r10)
	ctx.current_instruction = 0x880E1BC4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r21,6(r10)
	ctx.current_instruction = 0x880E1BCC;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lwz r6,-292(r1)
	ctx.current_instruction = 0x880E1BD4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lbz r24,7(r10)
	ctx.current_instruction = 0x880E1BD8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// srawi r30,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 31;
	// xor r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r31.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// stw r4,-224(r1)
	ctx.current_instruction = 0x880E1BE8;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r4.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,4(r10)
	ctx.current_instruction = 0x880E1BF0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r31,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r31.u64;
	// lwz r25,-176(r1)
	ctx.current_instruction = 0x880E1BF8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// subf r31,r30,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r30.u64;
	// stw r11,-188(r1)
	ctx.current_instruction = 0x880E1C00;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// subf r22,r5,r20
	ctx.r22.u64 = ctx.r20.u64 - ctx.r5.u64;
	// subf r30,r6,r19
	ctx.r30.u64 = ctx.r19.u64 - ctx.r6.u64;
	// lwz r19,-304(r1)
	ctx.current_instruction = 0x880E1C0C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// subf r3,r27,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r27.u64;
	// subf r11,r21,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r21.u64;
	// lwz r21,-208(r1)
	ctx.current_instruction = 0x880E1C18;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// srawi r27,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r22.s32 >> 31;
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// srawi r23,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r3.s32 >> 31;
	// srawi r20,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 31;
	// subf r28,r24,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r24.u64;
	// lwz r24,52(r1)
	ctx.current_instruction = 0x880E1C30;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// xor r18,r3,r23
	ctx.r18.u64 = ctx.r3.u64 ^ ctx.r23.u64;
	// xor r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r20.u64;
	// srawi r17,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r28.s32 >> 31;
	// subf r26,r9,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r9.u64;
	// subf r3,r20,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r20.u64;
	// subf r11,r23,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r23.u64;
	// xor r28,r28,r17
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r17.u64;
	// srawi r23,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r26.s32 >> 31;
	// xor r22,r22,r27
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r27.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r17,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r31,r27,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r27.u64;
	// xor r28,r26,r23
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r23.u64;
	// xor r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r23,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r23.u64;
	// subf r31,r29,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r29.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 + ctx.r21.u64;
	// add r11,r19,r24
	ctx.r11.u64 = ctx.r19.u64 + ctx.r24.u64;
	// stw r3,-176(r1)
	ctx.current_instruction = 0x880E1C94;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r3.u32);
	// stw r4,-208(r1)
	ctx.current_instruction = 0x880E1C98;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r4.u32);
	// stw r11,-304(r1)
	ctx.current_instruction = 0x880E1C9C;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// bdnz 0x880e1818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E1818;
	// li r4,2
	ctx.r4.s64 = 2;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_880E1CAC:
	// lbz r4,0(r11)
	ctx.current_instruction = 0x880E1CAC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.current_instruction = 0x880E1CB0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lbz r31,2(r11)
	ctx.current_instruction = 0x880E1CB8;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r7,r7,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r7.u64;
	// lbz r30,3(r11)
	ctx.current_instruction = 0x880E1CC0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r29,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 31;
	// lwz r28,92(r1)
	ctx.current_instruction = 0x880E1CC8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// lbz r26,5(r10)
	ctx.current_instruction = 0x880E1CD0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// subf r5,r5,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r5.u64;
	// lbz r25,6(r10)
	ctx.current_instruction = 0x880E1CD8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// lbz r24,7(r10)
	ctx.current_instruction = 0x880E1CE0;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// stw r5,-336(r1)
	ctx.current_instruction = 0x880E1CE8;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// subf r7,r27,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r27.u64;
	// srawi r23,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 31;
	// lbz r5,5(r11)
	ctx.current_instruction = 0x880E1CF4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stw r7,-352(r1)
	ctx.current_instruction = 0x880E1CF8;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// stw r23,-328(r1)
	ctx.current_instruction = 0x880E1D04;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r23.u32);
	// stw r8,-308(r1)
	ctx.current_instruction = 0x880E1D08;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r8.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r6,-340(r1)
	ctx.current_instruction = 0x880E1D10;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// subf r8,r26,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r29,6(r11)
	ctx.current_instruction = 0x880E1D18;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// lbz r7,7(r11)
	ctx.current_instruction = 0x880E1D20;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r11,4(r11)
	ctx.current_instruction = 0x880E1D24;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r28,r25,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r25.u64;
	// lbz r26,0(r10)
	ctx.current_instruction = 0x880E1D2C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r27,r24,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r24.u64;
	// lbz r21,3(r10)
	ctx.current_instruction = 0x880E1D34;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r25,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 31;
	// lbz r24,1(r10)
	ctx.current_instruction = 0x880E1D3C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r23,r9,r11
	ctx.r23.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r9,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 31;
	// lbz r22,2(r10)
	ctx.current_instruction = 0x880E1D48;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// lbz r19,4(r10)
	ctx.current_instruction = 0x880E1D50;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r20,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r27.s32 >> 31;
	// lbz r18,7(r10)
	ctx.current_instruction = 0x880E1D58;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// lbz r16,6(r10)
	ctx.current_instruction = 0x880E1D60;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// srawi r17,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r23.s32 >> 31;
	// lbz r14,5(r10)
	ctx.current_instruction = 0x880E1D68;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r15,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r4.s32 >> 31;
	// stw r10,-320(r1)
	ctx.current_instruction = 0x880E1D70;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r10.u32);
	// stw r29,-344(r1)
	ctx.current_instruction = 0x880E1D74;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r29.u32);
	// xor r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r25.u64;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// stw r5,-324(r1)
	ctx.current_instruction = 0x880E1D80;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r5.u32);
	// xor r29,r28,r9
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// stw r21,-284(r1)
	ctx.current_instruction = 0x880E1D88;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r21.u32);
	// subf r30,r21,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r21.u64;
	// stw r6,-348(r1)
	ctx.current_instruction = 0x880E1D90;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r6.u32);
	// subf r5,r22,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r22.u64;
	// lwz r21,-352(r1)
	ctx.current_instruction = 0x880E1D98;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// stw r11,-352(r1)
	ctx.current_instruction = 0x880E1DA0;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// subf r11,r9,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r9.u64;
	// lwz r31,-336(r1)
	ctx.current_instruction = 0x880E1DA8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// xor r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lwz r6,-328(r1)
	ctx.current_instruction = 0x880E1DB0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// stw r7,-332(r1)
	ctx.current_instruction = 0x880E1DB8;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r7.u32);
	// xor r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r15.u64;
	// lwz r7,-308(r1)
	ctx.current_instruction = 0x880E1DC0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r8,-328(r1)
	ctx.current_instruction = 0x880E1DC4;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r22,-296(r1)
	ctx.current_instruction = 0x880E1DCC;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r22.u32);
	// xor r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r6.u64;
	// stw r11,-308(r1)
	ctx.current_instruction = 0x880E1DD4;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// srawi r29,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 31;
	// lwz r22,-340(r1)
	ctx.current_instruction = 0x880E1DDC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// xor r27,r27,r20
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r20.u64;
	// stw r19,-336(r1)
	ctx.current_instruction = 0x880E1DE4;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r19.u32);
	// subf r11,r15,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r15.u64;
	// xor r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,-172(r1)
	ctx.current_instruction = 0x880E1DF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	// lwz r4,-304(r1)
	ctx.current_instruction = 0x880E1DFC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// xor r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// lwz r10,52(r1)
	ctx.current_instruction = 0x880E1E04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r25,-324(r1)
	ctx.current_instruction = 0x880E1E0C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r8,r29,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r29,-308(r1)
	ctx.current_instruction = 0x880E1E14;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// add r9,r7,r21
	ctx.r9.u64 = ctx.r7.u64 + ctx.r21.u64;
	// lwz r3,92(r1)
	ctx.current_instruction = 0x880E1E1C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,-328(r1)
	ctx.current_instruction = 0x880E1E24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r7,r20,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r20.u64;
	// lwz r27,-352(r1)
	ctx.current_instruction = 0x880E1E2C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r4,-348(r1)
	ctx.current_instruction = 0x880E1E38;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,-344(r1)
	ctx.current_instruction = 0x880E1E40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r31,-320(r1)
	ctx.current_instruction = 0x880E1E48;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,-304(r1)
	ctx.current_instruction = 0x880E1E50;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-172(r1)
	ctx.current_instruction = 0x880E1E58;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r5.u32);
	// lbz r7,4(r11)
	ctx.current_instruction = 0x880E1E5C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r30,r19,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r7,-336(r1)
	ctx.current_instruction = 0x880E1E64;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r7.u32);
	// xor r28,r23,r17
	ctx.r28.u64 = ctx.r23.u64 ^ ctx.r17.u64;
	// lbz r6,5(r11)
	ctx.current_instruction = 0x880E1E6C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// xor r29,r22,r4
	ctx.r29.u64 = ctx.r22.u64 ^ ctx.r4.u64;
	// stw r6,-328(r1)
	ctx.current_instruction = 0x880E1E74;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r6.u32);
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// lbz r22,0(r11)
	ctx.current_instruction = 0x880E1E7C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r6,r4,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r4.u64;
	// lwz r23,-332(r1)
	ctx.current_instruction = 0x880E1E84;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r7,r17,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r25,r14,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r14.u64;
	// lbz r21,1(r11)
	ctx.current_instruction = 0x880E1E90;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r20,2(r11)
	ctx.current_instruction = 0x880E1E94;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r8,r16,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r16.u64;
	// lbz r19,3(r11)
	ctx.current_instruction = 0x880E1E9C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r15,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r27.s32 >> 31;
	// lbz r4,6(r11)
	ctx.current_instruction = 0x880E1EA4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// subf r29,r26,r22
	ctx.r29.u64 = ctx.r22.u64 - ctx.r26.u64;
	// lbz r28,7(r11)
	ctx.current_instruction = 0x880E1EAC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r23,r18,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r18.u64;
	// lwz r31,-220(r1)
	ctx.current_instruction = 0x880E1EB8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// srawi r3,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r25.s32 >> 31;
	// stw r11,-320(r1)
	ctx.current_instruction = 0x880E1EC0;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// srawi r26,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 31;
	// stw r8,-352(r1)
	ctx.current_instruction = 0x880E1EC8;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r8.u32);
	// srawi r5,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r23.s32 >> 31;
	// stw r23,-340(r1)
	ctx.current_instruction = 0x880E1ED0;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r23.u32);
	// stw r26,-308(r1)
	ctx.current_instruction = 0x880E1ED4;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r26.u32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880E1EDC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r24,r24,r21
	ctx.r24.u64 = ctx.r21.u64 - ctx.r24.u64;
	// lwz r26,-284(r1)
	ctx.current_instruction = 0x880E1EE4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-332(r1)
	ctx.current_instruction = 0x880E1EEC;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r5.u32);
	// srawi r8,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 31;
	// lwz r5,-296(r1)
	ctx.current_instruction = 0x880E1EF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// subf r7,r26,r19
	ctx.r7.u64 = ctx.r19.u64 - ctx.r26.u64;
	// lwz r17,-212(r1)
	ctx.current_instruction = 0x880E1EFC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// srawi r6,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 31;
	// lwz r26,-336(r1)
	ctx.current_instruction = 0x880E1F04;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r5,r5,r20
	ctx.r5.u64 = ctx.r20.u64 - ctx.r5.u64;
	// stw r11,-312(r1)
	ctx.current_instruction = 0x880E1F0C;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r11.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r23,-328(r1)
	ctx.current_instruction = 0x880E1F14;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// stw r22,-348(r1)
	ctx.current_instruction = 0x880E1F1C;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r22.u32);
	// srawi r30,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 31;
	// stw r21,-324(r1)
	ctx.current_instruction = 0x880E1F24;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r21.u32);
	// subf r22,r14,r23
	ctx.r22.u64 = ctx.r23.u64 - ctx.r14.u64;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// srawi r31,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r7.s32 >> 31;
	// stw r5,-336(r1)
	ctx.current_instruction = 0x880E1F34;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r5.u32);
	// xor r25,r25,r3
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r3.u64;
	// stw r10,-212(r1)
	ctx.current_instruction = 0x880E1F3C;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// xor r27,r27,r15
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r15.u64;
	// lwz r10,-320(r1)
	ctx.current_instruction = 0x880E1F44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r3,r3,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r3.u64;
	// subf r27,r15,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r15.u64;
	// lwz r15,-320(r1)
	ctx.current_instruction = 0x880E1F50;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r3,-344(r1)
	ctx.current_instruction = 0x880E1F54;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// xor r3,r24,r6
	ctx.r3.u64 = ctx.r24.u64 ^ ctx.r6.u64;
	// stw r27,-328(r1)
	ctx.current_instruction = 0x880E1F5C;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r27.u32);
	// xor r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r8.u64;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// stw r9,-220(r1)
	ctx.current_instruction = 0x880E1F68;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r9.u32);
	// lbz r10,1(r10)
	ctx.current_instruction = 0x880E1F6C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// srawi r21,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 31;
	// lbz r6,3(r15)
	ctx.current_instruction = 0x880E1F74;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r15.u32 + 3);
	// srawi r17,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r22.s32 >> 31;
	// subf r9,r16,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r16.u64;
	// lwz r27,-228(r1)
	ctx.current_instruction = 0x880E1F80;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// xor r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r31.u64;
	// lwz r24,-192(r1)
	ctx.current_instruction = 0x880E1F88;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// xor r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r21.u64;
	// stw r10,-280(r1)
	ctx.current_instruction = 0x880E1F90;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r10,r8,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r8.u64;
	// lbz r8,2(r15)
	ctx.current_instruction = 0x880E1F98;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r15.u32 + 2);
	// srawi r16,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r9.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r29,-308(r1)
	ctx.current_instruction = 0x880E1FA4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// stw r6,-292(r1)
	ctx.current_instruction = 0x880E1FA8;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r6.u32);
	// subf r11,r21,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r21.u64;
	// xor r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r16.u64;
	// subf r18,r18,r28
	ctx.r18.u64 = ctx.r28.u64 - ctx.r18.u64;
	// stw r8,-300(r1)
	ctx.current_instruction = 0x880E1FB8;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r8.u32);
	// xor r8,r22,r17
	ctx.r8.u64 = ctx.r22.u64 ^ ctx.r17.u64;
	// srawi r21,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r18.s32 >> 31;
	// lwz r22,-216(r1)
	ctx.current_instruction = 0x880E1FC4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r3,-336(r1)
	ctx.current_instruction = 0x880E1FC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r6,r17,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r17.u64;
	// stw r4,-336(r1)
	ctx.current_instruction = 0x880E1FD0;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r4.u32);
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// xor r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// lwz r25,-348(r1)
	ctx.current_instruction = 0x880E1FDC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r8,-312(r1)
	ctx.current_instruction = 0x880E1FE4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// subf r5,r30,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r3,-352(r1)
	ctx.current_instruction = 0x880E1FEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r30,-340(r1)
	ctx.current_instruction = 0x880E1FF0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// subf r6,r16,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r16.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r5,r31,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lwz r31,-324(r1)
	ctx.current_instruction = 0x880E2000;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// xor r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r29.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r5,-328(r1)
	ctx.current_instruction = 0x880E200C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r4,r29,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r3,-344(r1)
	ctx.current_instruction = 0x880E2014;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r29,-332(r1)
	ctx.current_instruction = 0x880E2018;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// xor r18,r18,r21
	ctx.r18.u64 = ctx.r18.u64 ^ ctx.r21.u64;
	// add r9,r5,r3
	ctx.r9.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lwz r7,-280(r1)
	ctx.current_instruction = 0x880E2024;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// xor r17,r30,r29
	ctx.r17.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
	// subf r4,r29,r17
	ctx.r4.u64 = ctx.r17.u64 - ctx.r29.u64;
	// rotlwi r10,r15,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// stw r30,-228(r1)
	ctx.current_instruction = 0x880E203C;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r30.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r5,-300(r1)
	ctx.current_instruction = 0x880E2044;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r6,r21,r18
	ctx.r6.u64 = ctx.r18.u64 - ctx.r21.u64;
	// subf r3,r8,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r8.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r31,r7,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r7.u64;
	// lbz r21,5(r10)
	ctx.current_instruction = 0x880E2058;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r27,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r3.s32 >> 31;
	// lbz r18,6(r10)
	ctx.current_instruction = 0x880E2060;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,-292(r1)
	ctx.current_instruction = 0x880E2068;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r4,r9,r24
	ctx.r4.u64 = ctx.r9.u64 + ctx.r24.u64;
	// lbz r24,7(r10)
	ctx.current_instruction = 0x880E2070;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// srawi r25,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r31.s32 >> 31;
	// xor r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r27.u64;
	// stw r4,-192(r1)
	ctx.current_instruction = 0x880E207C;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,4(r10)
	ctx.current_instruction = 0x880E2084;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r27,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r27.u64;
	// lwz r3,-336(r1)
	ctx.current_instruction = 0x880E208C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// xor r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r25.u64;
	// lwz r17,-304(r1)
	ctx.current_instruction = 0x880E2094;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// subf r22,r5,r20
	ctx.r22.u64 = ctx.r20.u64 - ctx.r5.u64;
	// stw r29,-216(r1)
	ctx.current_instruction = 0x880E209C;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// subf r27,r6,r19
	ctx.r27.u64 = ctx.r19.u64 - ctx.r6.u64;
	// lwz r19,-164(r1)
	ctx.current_instruction = 0x880E20A4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// subf r31,r25,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r25.u64;
	// subf r11,r21,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r21.u64;
	// lwz r21,-168(r1)
	ctx.current_instruction = 0x880E20B0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// subf r3,r18,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r18.u64;
	// srawi r25,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r22.s32 >> 31;
	// srawi r23,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r27.s32 >> 31;
	// srawi r20,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 31;
	// srawi r18,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r3.s32 >> 31;
	// subf r28,r24,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r24.u64;
	// lwz r24,52(r1)
	ctx.current_instruction = 0x880E20CC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// xor r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r20.u64;
	// xor r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r18.u64;
	// srawi r16,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r28.s32 >> 31;
	// subf r26,r9,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r9.u64;
	// subf r11,r20,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r20.u64;
	// subf r3,r18,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r18.u64;
	// xor r28,r28,r16
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r16.u64;
	// srawi r20,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r26.s32 >> 31;
	// xor r22,r22,r25
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r25.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r16,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r16.u64;
	// subf r31,r25,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r25.u64;
	// xor r28,r26,r20
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r20.u64;
	// xor r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r23.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r3,r20,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r20.u64;
	// subf r31,r23,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r23.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r4,r4,r19
	ctx.r4.u64 = ctx.r4.u64 + ctx.r19.u64;
	// add r11,r17,r24
	ctx.r11.u64 = ctx.r17.u64 + ctx.r24.u64;
	// stw r3,-168(r1)
	ctx.current_instruction = 0x880E2130;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r4,-164(r1)
	ctx.current_instruction = 0x880E2134;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r4.u32);
	// stw r11,-304(r1)
	ctx.current_instruction = 0x880E2138;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// bdnz 0x880e1cac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E1CAC;
	// b 0x880e214c
	goto loc_880E214C;
loc_880E2144:
	// lwz r29,-216(r1)
	ctx.current_instruction = 0x880E2144;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r30,-228(r1)
	ctx.current_instruction = 0x880E2148;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
loc_880E214C:
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880E214C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,-220(r1)
	ctx.current_instruction = 0x880E2150;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r6,-212(r1)
	ctx.current_instruction = 0x880E2154;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// add r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 + ctx.r7.u64;
	// lwz r31,-196(r1)
	ctx.current_instruction = 0x880E215C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// add r9,r29,r6
	ctx.r9.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lwz r5,-204(r1)
	ctx.current_instruction = 0x880E2164;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r27,-188(r1)
	ctx.current_instruction = 0x880E2168;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,20(r11)
	ctx.current_instruction = 0x880E2170;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r9,-180(r1)
	ctx.current_instruction = 0x880E2174;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// add r8,r27,r5
	ctx.r8.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stw r10,16(r11)
	ctx.current_instruction = 0x880E217C;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// add r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwz r26,-172(r1)
	ctx.current_instruction = 0x880E2184;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r25,-184(r1)
	ctx.current_instruction = 0x880E218C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// add r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r24,-224(r1)
	ctx.current_instruction = 0x880E2194;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r5,r29,r27
	ctx.r5.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lwz r23,-192(r1)
	ctx.current_instruction = 0x880E219C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r22,-208(r1)
	ctx.current_instruction = 0x880E21A0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r29,-176(r1)
	ctx.current_instruction = 0x880E21A8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r31,r26,r25
	ctx.r31.u64 = ctx.r26.u64 + ctx.r25.u64;
	// stw r8,12(r11)
	ctx.current_instruction = 0x880E21B0;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// add r30,r23,r24
	ctx.r30.u64 = ctx.r23.u64 + ctx.r24.u64;
	// add r4,r4,r22
	ctx.r4.u64 = ctx.r4.u64 + ctx.r22.u64;
	// stw r9,28(r11)
	ctx.current_instruction = 0x880E21BC;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r7,32(r11)
	ctx.current_instruction = 0x880E21C4;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// stw r6,36(r11)
	ctx.current_instruction = 0x880E21CC;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r5,40(r11)
	ctx.current_instruction = 0x880E21D4;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r10,8(r11)
	ctx.current_instruction = 0x880E21DC;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r31,44(r11)
	ctx.current_instruction = 0x880E21E4;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r30,48(r11)
	ctx.current_instruction = 0x880E21EC;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r4,52(r11)
	ctx.current_instruction = 0x880E21F4;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// stw r3,56(r11)
	ctx.current_instruction = 0x880E21F8;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// stw r9,60(r11)
	ctx.current_instruction = 0x880E21FC;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// stw r8,24(r11)
	ctx.current_instruction = 0x880E2200;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r7,64(r11)
	ctx.current_instruction = 0x880E2204;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// stw r6,68(r11)
	ctx.current_instruction = 0x880E2208;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r6.u32);
	// stw r5,72(r11)
	ctx.current_instruction = 0x880E220C;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r5.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814C338) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814C338;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814C338) {
			switch (rex_dispatch_address) {
				case 0x8814C340:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814C338;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814C340: goto loc_8814C340;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8814C340;
	__savegprlr_22(ctx, base);
loc_8814C340:
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// sth r8,-98(r1)
	ctx.current_instruction = 0x8814C34C;
	REX_STORE_U16(ctx.r1.u32 + -98, ctx.r8.u16);
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lwz r11,25792(r10)
	ctx.current_instruction = 0x8814C358;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25792);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v11,v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0x100))));
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x8814c504
	if (!ctx.cr6.eq) goto loc_8814C504;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lvx128 v5,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v10,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v61,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// vperm128 v2,v5,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvx128 v9,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v8,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v60,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v59,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v9,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v7,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v29,v8,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v27,v6,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v19,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v30,v3,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v4,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v1,v7
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v57,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v29,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vaddshs v22,v27,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vperm128 v17,v4,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v9,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vslh v24,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r10,4
	ctx.r10.s64 = 4;
	// vslh v21,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vslh v18,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vslh v16,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vsrah v6,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v10,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v5,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v56,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v15,v24,v11
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vaddshs v14,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// add r30,r8,r6
	ctx.r30.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vpkshus128 v55,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v8,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v54,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v30,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// vsrah v3,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm128 v28,v10,v56,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrah v2,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v1,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v29,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvewx128 v55,r0,r5
	ctx.current_instruction = 0x8814C490;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r5,r10
	ctx.current_instruction = 0x8814C494;
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v53,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vpkshus128 v52,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvewx128 v54,r0,r3
	ctx.current_instruction = 0x8814C4A0;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v51,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v27,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v50,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v26,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvewx128 v54,r3,r10
	ctx.current_instruction = 0x8814C4B4;
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v25,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v53,r0,r8
	ctx.current_instruction = 0x8814C4BC;
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r8,r10
	ctx.current_instruction = 0x8814C4C0;
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r0,r30
	ctx.current_instruction = 0x8814C4C4;
	ea = (ctx.r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// vslh v24,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvewx128 v52,r30,r10
	ctx.current_instruction = 0x8814C4CC;
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v49,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// stvewx128 v51,r0,r9
	ctx.current_instruction = 0x8814C4D4;
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r9,r10
	ctx.current_instruction = 0x8814C4D8;
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r0,r7
	ctx.current_instruction = 0x8814C4DC;
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v23,v24,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v50,r7,r10
	ctx.current_instruction = 0x8814C4E4;
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v22,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v49,r0,r4
	ctx.current_instruction = 0x8814C4EC;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r4,r10
	ctx.current_instruction = 0x8814C4F0;
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v48,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// stvewx128 v48,r0,r6
	ctx.current_instruction = 0x8814C4F8;
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r6,r10
	ctx.current_instruction = 0x8814C4FC;
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8814C504:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r4,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r25,r6,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r6,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r4,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r22,r6,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
loc_8814C530:
	// add r8,r27,r3
	ctx.r8.u64 = ctx.r27.u64 + ctx.r3.u64;
	// lvx128 v28,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r29,r9,r3
	ctx.r29.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v1,r27,r3
	ea = (ctx.r27.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r26,r3
	ctx.r7.u64 = ctx.r26.u64 + ctx.r3.u64;
	// lvx128 v31,r26,r3
	ea = (ctx.r26.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvx128 v4,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lvx128 v2,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r28,r24,r5
	ctx.r28.u64 = ctx.r24.u64 + ctx.r5.u64;
	// lvx128 v10,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v44,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v25,v1,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v22,v28,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v8,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v18,v10,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v43,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v21,v9,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v24,v2,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v17,v8,v43,v0
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v6,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v18,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvx128 v45,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v20,v7,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v5,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v16,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vperm128 v19,v6,v45,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v42,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v17,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vperm v23,v31,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v15,v20,v7
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vperm128 v14,v5,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v18,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v30,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v19,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// vslh v20,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v21,v30,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v4,v41,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v15,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v27,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v14,v14,v5
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v29,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v26,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v3,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v8,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v40,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// add r4,r28,r6
	ctx.r4.u64 = ctx.r28.u64 + ctx.r6.u64;
	// vaddshs v20,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vperm v18,v27,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r7,r25,r5
	ctx.r7.u64 = ctx.r25.u64 + ctx.r5.u64;
	// vsrah v15,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r31,r4,r6
	ctx.r31.u64 = ctx.r4.u64 + ctx.r6.u64;
	// vsrah v10,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm v6,v29,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrah v9,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm128 v16,v3,v40,v0
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v2,v24,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vperm v14,v26,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrah v8,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r3,r23,r3
	ctx.r3.u64 = ctx.r23.u64 + ctx.r3.u64;
	// vaddshs v28,v22,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v24,v21,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsrah v7,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v5,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v25,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v22,v19,v4
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v21,v23,v31
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v19,v6,v29
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vslh v20,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v4,v18,v27
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vslh v6,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v14,v26
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v3,v16,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v2,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v29,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v28,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v27,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v25,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v23,v2,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v22,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v20,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v19,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v17,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v16,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v14,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v24,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v39,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsrah v4,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v3,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v38,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vsrah v2,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v1,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v17,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v37,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v30,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v36,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v28,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v35,v1,v8
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v27,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v34,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// stvx128 v39,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v33,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// stvx128 v38,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v37,r25,r5
	ea = (ctx.r25.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r22,r5
	ctx.r5.u64 = ctx.r22.u64 + ctx.r5.u64;
	// vpkshus128 v32,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// stvx128 v36,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r28,r6
	ea = (ctx.r28.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v32,r31,r6
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x8814c530
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8814C530;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8816E118) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8816E118);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816E118;
	ctx.current_instruction = 0x8816E118;
	// lbz r11,0(r3)
	ctx.current_instruction = 0x8816E118;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// neg r9,r4
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8816e13c
	if (!ctx.cr6.lt) goto loc_8816E13C;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r11,0(r3)
	ctx.current_instruction = 0x8816E134;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x8816e150
	goto loc_8816E150;
loc_8816E13C:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8816e150
	if (ctx.cr6.lt) goto loc_8816E150;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stb r8,0(r3)
	ctx.current_instruction = 0x8816E14C;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
loc_8816E150:
	// lbz r11,1(r3)
	ctx.current_instruction = 0x8816E150;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8816e170
	if (!ctx.cr6.lt) goto loc_8816E170;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r11,1(r3)
	ctx.current_instruction = 0x8816E168;
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8816E170:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stb r9,1(r3)
	ctx.current_instruction = 0x8816E180;
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88171708) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88171708);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88171708;
	ctx.current_instruction = 0x88171708;
	// addis r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 65536;
	// addi r7,r7,-20148
	ctx.r7.s64 = ctx.r7.s64 + -20148;
	// lwz r11,0(r7)
	ctx.current_instruction = 0x88171710;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881717c4
	if (!ctx.cr6.eq) goto loc_881717C4;
	// lwz r10,24688(r3)
	ctx.current_instruction = 0x8817171C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,712(r10)
	ctx.current_instruction = 0x88171724;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 712);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881717c0
	if (ctx.cr6.eq) goto loc_881717C0;
	// lwz r11,188(r3)
	ctx.current_instruction = 0x88171730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r6,180(r3)
	ctx.current_instruction = 0x88171738;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// ori r5,r9,22528
	ctx.r5.u64 = ctx.r9.u64 | 22528;
	// lwz r8,776(r10)
	ctx.current_instruction = 0x88171740;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 776);
	// mullw r4,r11,r6
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addis r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 131072;
	// addi r11,r11,22527
	ctx.r11.s64 = ctx.r11.s64 + 22527;
	// divw r11,r11,r5
	ctx.r11.u64 = uint32_t((ctx.r5.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r11.s32 / ctx.r5.s32 : 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88171760
	if (!ctx.cr6.lt) goto loc_88171760;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_88171760:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8817176c
	if (ctx.cr6.lt) goto loc_8817176C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8817176C:
	// lwz r9,288(r3)
	ctx.current_instruction = 0x8817176C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x88171798
	if (ctx.cr6.eq) goto loc_88171798;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x88171798
	if (ctx.cr6.eq) goto loc_88171798;
	// lwz r9,780(r10)
	ctx.current_instruction = 0x88171780;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 780);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88171790
	if (!ctx.cr6.gt) goto loc_88171790;
	// li r11,1
	ctx.r11.s64 = 1;
loc_88171790:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x881717a0
	goto loc_881717A0;
loc_88171798:
	// lwz r9,780(r10)
	ctx.current_instruction = 0x88171798;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 780);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_881717A0:
	// stw r9,780(r10)
	ctx.current_instruction = 0x881717A0;
	REX_STORE_U32(ctx.r10.u32 + 780, ctx.r9.u32);
	// lwz r10,18464(r10)
	ctx.current_instruction = 0x881717A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 18464);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881717c0
	if (ctx.cr6.eq) goto loc_881717C0;
	// lwz r10,288(r3)
	ctx.current_instruction = 0x881717B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x881717c0
	if (!ctx.cr6.eq) goto loc_881717C0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_881717C0:
	// stw r11,0(r7)
	ctx.current_instruction = 0x881717C0;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_881717C4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88175308) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88175308;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88175308) {
			switch (rex_dispatch_address) {
				case 0x88175310:
				case 0x88175318:
				case 0x8817534C:
				case 0x8817540C:
				case 0x88175430:
				case 0x88175470:
				case 0x88175498:
				case 0x881754A0:
				case 0x881754B4:
				case 0x8817550C:
				case 0x88175530:
				case 0x88175564:
				case 0x88175594:
				case 0x88175A30:
				case 0x88175D68:
				case 0x88176154:
				case 0x88176618:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88175308;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88175310: goto loc_88175310;
		case 0x88175318: goto loc_88175318;
		case 0x8817534C: goto loc_8817534C;
		case 0x8817540C: goto loc_8817540C;
		case 0x88175430: goto loc_88175430;
		case 0x88175470: goto loc_88175470;
		case 0x88175498: goto loc_88175498;
		case 0x881754A0: goto loc_881754A0;
		case 0x881754B4: goto loc_881754B4;
		case 0x8817550C: goto loc_8817550C;
		case 0x88175530: goto loc_88175530;
		case 0x88175564: goto loc_88175564;
		case 0x88175594: goto loc_88175594;
		case 0x88175A30: goto loc_88175A30;
		case 0x88175D68: goto loc_88175D68;
		case 0x88176154: goto loc_88176154;
		case 0x88176618: goto loc_88176618;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88175310;
	__savegprlr_14(ctx, base);
loc_88175310:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef274
	ctx.lr = 0x88175318;
	__savefpr_23(ctx, base);
loc_88175318:
	// stwu r1,-464(r1)
	ctx.current_instruction = 0x88175318;
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// fmr f23,f2
	ctx.f23.f64 = ctx.f2.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// fmr f24,f5
	ctx.f24.f64 = ctx.f5.f64;
	// bne cr6,0x88175350
	if (!ctx.cr6.eq) goto loc_88175350;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2c0
	ctx.lr = 0x8817534C;
	__restfpr_23(ctx, base);
loc_8817534C:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88175350:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,20(r31)
	ctx.current_instruction = 0x88175354;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lwz r8,15392(r31)
	ctx.current_instruction = 0x8817535C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r23,15408(r31)
	ctx.current_instruction = 0x88175364;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 15408);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lwz r22,15412(r31)
	ctx.current_instruction = 0x8817536C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 15412);
	// srawi r19,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r10.s32 >> 1;
	// frsp f13,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f24.f64));
	// lfs f0,6708(r11)
	ctx.current_instruction = 0x88175378;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// srawi r26,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 1;
	// stfs f0,192(r1)
	ctx.current_instruction = 0x88175380;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// srawi r25,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 5;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// srawi r24,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 6;
	// lfd f28,1488(r6)
	ctx.current_instruction = 0x88175394;
	ctx.f28.u64 = REX_LOAD_U64(ctx.r6.u32 + 1488);
	// stfs f13,224(r1)
	ctx.current_instruction = 0x88175398;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r23,100(r1)
	ctx.current_instruction = 0x8817539C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r22,96(r1)
	ctx.current_instruction = 0x881753A0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// fcmpu cr6,f25,f28
	ctx.cr6.compare(ctx.f25.f64, ctx.f28.f64);
	// stw r26,148(r1)
	ctx.current_instruction = 0x881753A8;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r25,168(r1)
	ctx.current_instruction = 0x881753B0;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// stw r24,176(r1)
	ctx.current_instruction = 0x881753B4;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// beq cr6,0x88176608
	if (ctx.cr6.eq) goto loc_88176608;
	// fcmpu cr6,f27,f28
	ctx.cr6.compare(ctx.f27.f64, ctx.f28.f64);
	// beq cr6,0x88176608
	if (ctx.cr6.eq) goto loc_88176608;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	ctx.current_instruction = 0x881753D0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x881753D4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f29,12544(r10)
	ctx.current_instruction = 0x881753DC;
	ctx.f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 12544);
	// fsub f11,f13,f23
	ctx.f11.f64 = ctx.f13.f64 - ctx.f23.f64;
	// fdiv f12,f29,f25
	ctx.f12.f64 = ctx.f29.f64 / ctx.f25.f64;
	// fdiv f30,f11,f25
	ctx.f30.f64 = ctx.f11.f64 / ctx.f25.f64;
	// fmul f0,f12,f23
	ctx.f0.f64 = ctx.f12.f64 * ctx.f23.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x88175404
	if (!ctx.cr6.gt) goto loc_88175404;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_88175404:
	// fsel f1,f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f28.f64;
	// bl 0x881ef210
	ctx.lr = 0x8817540C;
	sub_881EF210(ctx, base);
loc_8817540C:
	// lwz r11,15392(r31)
	ctx.current_instruction = 0x8817540C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x88175414;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88175418;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x8817542c
	if (!ctx.cr6.lt) goto loc_8817542C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8817542C:
	// bl 0x881f0228
	ctx.lr = 0x88175430;
	sub_881F0228(ctx, base);
loc_88175430:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	ctx.current_instruction = 0x88175434;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,15392(r31)
	ctx.current_instruction = 0x88175438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfd f0,23432(r10)
	ctx.current_instruction = 0x88175444;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 23432);
	// fadd f0,f30,f0
	ctx.f0.f64 = ctx.f30.f64 + ctx.f0.f64;
	// lwz r27,84(r1)
	ctx.current_instruction = 0x8817544C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// std r9,80(r1)
	ctx.current_instruction = 0x88175450;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x88175454;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x88175468
	if (!ctx.cr6.lt) goto loc_88175468;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_88175468:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x881f0228
	ctx.lr = 0x88175470;
	sub_881F0228(ctx, base);
loc_88175470:
	// lwz r11,15392(r31)
	ctx.current_instruction = 0x88175470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x8817547C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88175480;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x88175494
	if (ctx.cr6.lt) goto loc_88175494;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
loc_88175494:
	// bl 0x881f0228
	ctx.lr = 0x88175498;
	sub_881F0228(ctx, base);
loc_88175498:
	// fsel f1,f1,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f28.f64;
	// bl 0x881ef210
	ctx.lr = 0x881754A0;
	sub_881EF210(ctx, base);
loc_881754A0:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	ctx.current_instruction = 0x881754A4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.current_instruction = 0x881754A8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fsel f1,f31,f31,f28
	ctx.f1.f64 = ctx.f31.f64 >= 0.0 ? ctx.f31.f64 : ctx.f28.f64;
	// bl 0x881ef210
	ctx.lr = 0x881754B4;
	sub_881EF210(ctx, base);
loc_881754B4:
	// fctiwz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f12,80(r1)
	ctx.current_instruction = 0x881754B8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,15388(r31)
	ctx.current_instruction = 0x881754BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15388);
	// fdiv f13,f29,f27
	ctx.f13.f64 = ctx.f29.f64 / ctx.f27.f64;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfd f30,8624(r10)
	ctx.current_instruction = 0x881754CC;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 8624);
	// fmul f0,f13,f26
	ctx.f0.f64 = ctx.f13.f64 * ctx.f26.f64;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x881754D4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// std r9,80(r1)
	ctx.current_instruction = 0x881754D8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.current_instruction = 0x881754DC;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fsub f9,f10,f26
	ctx.f9.f64 = ctx.f10.f64 - ctx.f26.f64;
	// fdiv f8,f9,f27
	ctx.f8.f64 = ctx.f9.f64 / ctx.f27.f64;
	// fadd f31,f8,f30
	ctx.f31.f64 = ctx.f8.f64 + ctx.f30.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x88175504
	if (!ctx.cr6.gt) goto loc_88175504;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_88175504:
	// fsel f1,f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f28.f64;
	// bl 0x881ef210
	ctx.lr = 0x8817550C;
	sub_881EF210(ctx, base);
loc_8817550C:
	// lwz r11,15396(r31)
	ctx.current_instruction = 0x8817550C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15396);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x88175514;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88175518;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x8817552c
	if (!ctx.cr6.lt) goto loc_8817552C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8817552C:
	// bl 0x881f0228
	ctx.lr = 0x88175530;
	sub_881F0228(ctx, base);
loc_88175530:
	// lwz r11,15396(r31)
	ctx.current_instruction = 0x88175530;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15396);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	ctx.current_instruction = 0x88175538;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r30,108(r1)
	ctx.current_instruction = 0x88175540;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// std r10,80(r1)
	ctx.current_instruction = 0x88175544;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x88175548;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8817555c
	if (ctx.cr6.lt) goto loc_8817555C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_8817555C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x881f0228
	ctx.lr = 0x88175564;
	sub_881F0228(ctx, base);
loc_88175564:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// fsel f1,f1,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f28.f64;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// rlwinm r18,r11,0,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r30,r10,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r29,r29,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r18,172(r1)
	ctx.current_instruction = 0x8817557C;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r18.u32);
	// rlwinm r14,r28,0,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,112(r1)
	ctx.current_instruction = 0x88175584;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r29,132(r1)
	ctx.current_instruction = 0x88175588;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r14,152(r1)
	ctx.current_instruction = 0x8817558C;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r14.u32);
	// bl 0x881ef210
	ctx.lr = 0x88175594;
	sub_881EF210(ctx, base);
loc_88175594:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	ctx.current_instruction = 0x88175598;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x8817559C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r28,r9,0,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r28,160(r1)
	ctx.current_instruction = 0x881755A4;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bge cr6,0x881755b8
	if (!ctx.cr6.lt) goto loc_881755B8;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r28,160(r1)
	ctx.current_instruction = 0x881755B4;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
loc_881755B8:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r3,15420(r31)
	ctx.current_instruction = 0x881755BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15420);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r6,15424(r31)
	ctx.current_instruction = 0x881755C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15424);
	// srawi r9,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 1;
	// lwz r16,15416(r31)
	ctx.current_instruction = 0x881755CC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 15416);
	// srawi r7,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 1;
	// fcmpu cr6,f24,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f30.f64);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// stw r9,136(r1)
	ctx.current_instruction = 0x881755DC;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lfd f0,23424(r11)
	ctx.current_instruction = 0x881755E0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 23424);
	// stw r7,156(r1)
	ctx.current_instruction = 0x881755E4;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lfd f13,12360(r10)
	ctx.current_instruction = 0x881755E8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12360);
	// fmul f10,f23,f0
	ctx.f10.f64 = ctx.f23.f64 * ctx.f0.f64;
	// fmul f9,f25,f13
	ctx.f9.f64 = ctx.f25.f64 * ctx.f13.f64;
	// srawi r5,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r14.s32 >> 1;
	// fmul f11,f26,f0
	ctx.f11.f64 = ctx.f26.f64 * ctx.f0.f64;
	// stw r3,92(r1)
	ctx.current_instruction = 0x881755FC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// fmul f8,f27,f13
	ctx.f8.f64 = ctx.f27.f64 * ctx.f13.f64;
	// lfd f12,12296(r8)
	ctx.current_instruction = 0x88175604;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 12296);
	// stw r6,88(r1)
	ctx.current_instruction = 0x88175608;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r5,140(r1)
	ctx.current_instruction = 0x8817560C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// fctiwz f6,f10
	ctx.f6.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f6,104(r1)
	ctx.current_instruction = 0x88175614;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f6.u64);
	// lwz r10,108(r1)
	ctx.current_instruction = 0x88175618;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f5,f9
	ctx.f5.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f5,104(r1)
	ctx.current_instruction = 0x88175620;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f5.u64);
	// lwz r29,108(r1)
	ctx.current_instruction = 0x88175624;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f7,f11
	ctx.f7.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f7,80(r1)
	ctx.current_instruction = 0x8817562C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r4,84(r1)
	ctx.current_instruction = 0x88175630;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f8
	ctx.f4.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f4,80(r1)
	ctx.current_instruction = 0x88175638;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8817563C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r9,r11,r18
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r18.s32);
	// fmul f3,f9,f12
	ctx.f3.f64 = ctx.f9.f64 * ctx.f12.f64;
	// mullw r7,r29,r30
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,104(r1)
	ctx.current_instruction = 0x88175650;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f2.u64);
	// subf r8,r4,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r4,r10,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r15,r11,r8
	ctx.r15.u64 = ctx.r11.u64 & ctx.r8.u64;
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// stw r15,116(r1)
	ctx.current_instruction = 0x88175674;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// stw r9,128(r1)
	ctx.current_instruction = 0x88175678;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// ble cr6,0x88175688
	if (!ctx.cr6.gt) goto loc_88175688;
	// fmr f24,f30
	ctx.f24.f64 = ctx.f30.f64;
	// b 0x88175694
	goto loc_88175694;
loc_88175688:
	// fcmpu cr6,f24,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f28.f64);
	// bge cr6,0x88175694
	if (!ctx.cr6.lt) goto loc_88175694;
	// fmr f24,f28
	ctx.f24.f64 = ctx.f28.f64;
loc_88175694:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,128
	ctx.r30.s64 = 128;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfd f0,23440(r11)
	ctx.current_instruction = 0x881756A8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 23440);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// fmul f0,f24,f0
	ctx.f0.f64 = ctx.f24.f64 * ctx.f0.f64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v1,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,120(r1)
	ctx.current_instruction = 0x881756C0;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// ble cr6,0x88175764
	if (!ctx.cr6.gt) goto loc_88175764;
loc_881756C8:
	// lwz r10,15392(r31)
	ctx.current_instruction = 0x881756C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881756f0
	if (!ctx.cr6.gt) goto loc_881756F0;
	// addi r10,r16,-1
	ctx.r10.s64 = ctx.r16.s64 + -1;
loc_881756DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r4,1(r10)
	ctx.current_instruction = 0x881756E0;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r10.u32 = ea;
	// lwz r8,15392(r31)
	ctx.current_instruction = 0x881756E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881756dc
	if (ctx.cr6.lt) goto loc_881756DC;
loc_881756F0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88175714
	if (!ctx.cr6.gt) goto loc_88175714;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// subf r10,r6,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r6.u64;
loc_88175704:
	// stbx r30,r10,r11
	ctx.current_instruction = 0x88175704;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u8);
	// stb r30,0(r11)
	ctx.current_instruction = 0x88175708;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88175704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175704;
loc_88175714:
	// lwz r11,15392(r31)
	ctx.current_instruction = 0x88175714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + ctx.r26.u64;
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + ctx.r16.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8817574c
	if (!ctx.cr6.gt) goto loc_8817574C;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_88175738:
	// stbu r4,1(r9)
	ctx.current_instruction = 0x88175738;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15392(r31)
	ctx.current_instruction = 0x88175740;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88175738
	if (ctx.cr6.lt) goto loc_88175738;
loc_8817574C:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r16,r11,r8
	ctx.r16.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x881756c8
	if (ctx.cr6.lt) goto loc_881756C8;
	// stw r6,88(r1)
	ctx.current_instruction = 0x8817575C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r3,92(r1)
	ctx.current_instruction = 0x88175760;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_88175764:
	// lwz r10,20(r31)
	ctx.current_instruction = 0x88175764;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// srawi r8,r15,11
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r15.s32 >> 11;
	// lwz r9,15404(r31)
	ctx.current_instruction = 0x8817576C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15404);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x8817579c
	if (!ctx.cr6.gt) goto loc_8817579C;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_8817578C:
	// dcbt r11,r9
	// dcbt r11,r10
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8817578c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817578C;
loc_8817579C:
	// srawi r11,r15,12
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 12;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mullw r11,r11,r19
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r19.s32);
	// ble cr6,0x881757c0
	if (!ctx.cr6.gt) goto loc_881757C0;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_881757B0:
	// dcbt r11,r23
	// dcbt r11,r22
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x881757b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881757B0;
loc_881757C0:
	// addi r4,r28,-2
	ctx.r4.s64 = ctx.r28.s64 + -2;
	// cmpw cr6,r18,r4
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x88176288
	if (!ctx.cr6.lt) goto loc_88176288;
	// lwz r11,136(r1)
	ctx.current_instruction = 0x881757CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,156(r1)
	ctx.current_instruction = 0x881757D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,112(r1)
	ctx.current_instruction = 0x881757D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r8,132(r1)
	ctx.current_instruction = 0x881757DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// stw r7,180(r1)
	ctx.current_instruction = 0x881757E8;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r17,r11,-11136
	ctx.r17.s64 = ctx.r11.s64 + -11136;
	// stw r6,144(r1)
	ctx.current_instruction = 0x881757F4;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lfs f13,20016(r10)
	ctx.current_instruction = 0x881757F8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20016);
	ctx.f13.f64 = double(temp.f32);
	// stw r17,164(r1)
	ctx.current_instruction = 0x881757FC;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r17.u32);
loc_88175800:
	// clrlwi r26,r15,21
	ctx.r26.u64 = ctx.r15.u32 & 0x7FF;
	// lwz r9,20(r31)
	ctx.current_instruction = 0x88175804;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// srawi r8,r15,11
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r15.s32 >> 11;
	// lwz r11,15404(r31)
	ctx.current_instruction = 0x8817580C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15404);
	// extsw r7,r26
	ctx.r7.s64 = ctx.r26.s32;
	// lwz r30,128(r1)
	ctx.current_instruction = 0x88175814;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// std r7,208(r1)
	ctx.current_instruction = 0x8817581C;
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// lfd f0,208(r1)
	ctx.current_instruction = 0x88175820;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,168(r1)
	ctx.current_instruction = 0x88175830;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// ble cr6,0x88175858
	if (!ctx.cr6.gt) goto loc_88175858;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8817584C:
	// dcbt r11,r28
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8817584c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817584C;
loc_88175858:
	// lwz r9,112(r1)
	ctx.current_instruction = 0x88175858;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88175884
	if (!ctx.cr6.gt) goto loc_88175884;
	// addi r11,r16,-1
	ctx.r11.s64 = ctx.r16.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88175880
	if (ctx.cr6.eq) goto loc_88175880;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88175878:
	// stbu r10,1(r11)
	ctx.current_instruction = 0x88175878;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88175878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175878;
loc_88175880:
	// add r3,r16,r9
	ctx.r3.u64 = ctx.r16.u64 + ctx.r9.u64;
loc_88175884:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r17,-8
	ctx.r11.s64 = ctx.r17.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88175890:
	// stwu r26,16(r11)
	ctx.current_instruction = 0x88175890;
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88175890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175890;
	// subfic r27,r26,2048
	ctx.xer.ca = ctx.r26.u32 <= 2048;
	ctx.r27.u64 = static_cast<uint64_t>(2048) - ctx.r26.u64;
	// stfs f0,204(r1)
	ctx.current_instruction = 0x8817589C;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// srawi. r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r24,r10,r6
	ctx.r24.u64 = ctx.r6.u64 - ctx.r10.u64;
	// ble 0x88175a4c
	if (!ctx.cr0.gt) goto loc_88175A4C;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v2,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_881758BC:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r17,256
	ctx.r11.s64 = ctx.r17.s64 + 256;
	// addi r10,r17,-4
	ctx.r10.s64 = ctx.r17.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881758D0:
	// srawi r9,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 11;
	// lwz r7,20(r31)
	ctx.current_instruction = 0x881758D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r8,r30,r29
	ctx.r8.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// clrlwi r4,r30,21
	ctx.r4.u64 = ctx.r30.u32 & 0x7FF;
	// clrlwi r30,r8,21
	ctx.r30.u64 = ctx.r8.u32 & 0x7FF;
	// lbz r23,1(r9)
	ctx.current_instruction = 0x881758F0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r22,r4,r27
	ctx.r22.u64 = ctx.r27.u64 - ctx.r4.u64;
	// lbz r6,0(r9)
	ctx.current_instruction = 0x881758F8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + ctx.r28.u64;
	// lbz r21,0(r7)
	ctx.current_instruction = 0x88175900;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lbz r7,1(r7)
	ctx.current_instruction = 0x88175908;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r20,r30,r27
	ctx.r20.u64 = ctx.r27.u64 - ctx.r30.u64;
	// stw r4,8(r10)
	ctx.current_instruction = 0x88175910;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// subf r7,r21,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r21.u64;
	// stw r23,8(r11)
	ctx.current_instruction = 0x8817591C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// stw r6,4(r11)
	ctx.current_instruction = 0x88175920;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// clrlwi r15,r8,21
	ctx.r15.u64 = ctx.r8.u32 & 0x7FF;
	// subf r7,r23,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r23.u64;
	// stw r21,12(r11)
	ctx.current_instruction = 0x8817592C;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r21.u32);
	// stw r4,16(r10)
	ctx.current_instruction = 0x88175930;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r22,4(r10)
	ctx.current_instruction = 0x8817593C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r22.u32);
	// srawi r4,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 11;
	// stw r7,16(r11)
	ctx.current_instruction = 0x88175944;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// subf r23,r15,r27
	ctx.r23.u64 = ctx.r27.u64 - ctx.r15.u64;
	// lbz r22,1(r9)
	ctx.current_instruction = 0x8817594C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r21,r8,21
	ctx.r21.u64 = ctx.r8.u32 & 0x7FF;
	// lbz r6,0(r9)
	ctx.current_instruction = 0x88175954;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r7,20(r31)
	ctx.current_instruction = 0x88175958;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r14,0(r7)
	ctx.current_instruction = 0x88175960;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + ctx.r28.u64;
	// lbz r7,1(r7)
	ctx.current_instruction = 0x88175968;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r14.u64;
	// subf r7,r22,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r22.u64;
	// stw r22,24(r11)
	ctx.current_instruction = 0x88175974;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r22.u32);
	// stw r6,20(r11)
	ctx.current_instruction = 0x88175978;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// subf r22,r21,r27
	ctx.r22.u64 = ctx.r27.u64 - ctx.r21.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r14,28(r11)
	ctx.current_instruction = 0x88175984;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r14.u32);
	// stw r30,24(r10)
	ctx.current_instruction = 0x88175988;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// stw r7,32(r11)
	ctx.current_instruction = 0x8817598C;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r30,32(r10)
	ctx.current_instruction = 0x88175990;
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r30.u32);
	// stw r20,20(r10)
	ctx.current_instruction = 0x88175994;
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r20.u32);
	// lbz r30,1(r9)
	ctx.current_instruction = 0x88175998;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r6,r5,r28
	ctx.current_instruction = 0x8817599C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r28.u32);
	// lwz r7,20(r31)
	ctx.current_instruction = 0x881759A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,0(r7)
	ctx.current_instruction = 0x881759A8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r9,r4,r28
	ctx.r9.u64 = ctx.r4.u64 + ctx.r28.u64;
	// lbz r7,1(r7)
	ctx.current_instruction = 0x881759B0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r7,r30,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r30.u64;
	// stw r6,36(r11)
	ctx.current_instruction = 0x881759BC;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r5,44(r11)
	ctx.current_instruction = 0x881759C0;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r30,40(r11)
	ctx.current_instruction = 0x881759C8;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// stw r15,40(r10)
	ctx.current_instruction = 0x881759CC;
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r15.u32);
	// stw r7,48(r11)
	ctx.current_instruction = 0x881759D0;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r15,48(r10)
	ctx.current_instruction = 0x881759D4;
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r15.u32);
	// stw r23,36(r10)
	ctx.current_instruction = 0x881759D8;
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r23.u32);
	// lbzx r7,r4,r28
	ctx.current_instruction = 0x881759DC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r28.u32);
	// lbz r5,1(r9)
	ctx.current_instruction = 0x881759E0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lwz r6,20(r31)
	ctx.current_instruction = 0x881759E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r4,0(r9)
	ctx.current_instruction = 0x881759EC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,1(r9)
	ctx.current_instruction = 0x881759F0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r6,r4,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r4,60(r11)
	ctx.current_instruction = 0x881759FC;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// stw r5,56(r11)
	ctx.current_instruction = 0x88175A00;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,52(r11)
	ctx.current_instruction = 0x88175A08;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stw r22,52(r10)
	ctx.current_instruction = 0x88175A0C;
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r22.u32);
	// stwu r9,64(r11)
	ctx.current_instruction = 0x88175A10;
	ea = 64 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r21,56(r10)
	ctx.current_instruction = 0x88175A14;
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r21.u32);
	// add r30,r8,r29
	ctx.r30.u64 = ctx.r8.u64 + ctx.r29.u64;
	// stwu r21,64(r10)
	ctx.current_instruction = 0x88175A1C;
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r21.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881758d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881758D0;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r4,r17,256
	ctx.r4.s64 = ctx.r17.s64 + 256;
	// bl 0x88173520
	ctx.lr = 0x88175A30;
	sub_88173520(ctx, base);
loc_88175A30:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x881758bc
	if (!ctx.cr0.eq) goto loc_881758BC;
	// lwz r14,152(r1)
	ctx.current_instruction = 0x88175A3C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r5,140(r1)
	ctx.current_instruction = 0x88175A40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,144(r1)
	ctx.current_instruction = 0x88175A44;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r15,116(r1)
	ctx.current_instruction = 0x88175A48;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_88175A4C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x88175ad4
	if (!ctx.cr6.gt) goto loc_88175AD4;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_88175A58:
	// srawi r11,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 11;
	// lwz r10,20(r31)
	ctx.current_instruction = 0x88175A5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r7,r30,21
	ctx.r7.u64 = ctx.r30.u32 & 0x7FF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,1(r11)
	ctx.current_instruction = 0x88175A70;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.current_instruction = 0x88175A74;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.current_instruction = 0x88175A78;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r9,r4,r7
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lbz r10,1(r10)
	ctx.current_instruction = 0x88175A80;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mullw r8,r8,r26
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r4,r7
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r10,r26
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// srawi r10,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 11;
	// subfic r7,r7,2048
	ctx.xer.ca = ctx.r7.u32 <= 2048;
	ctx.r7.u64 = static_cast<uint64_t>(2048) - ctx.r7.u64;
	// subf r4,r26,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r26.u64;
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,124(r1)
	ctx.current_instruction = 0x88175AB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r9,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 11;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	ctx.current_instruction = 0x88175AC8;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x88175a58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175A58;
loc_88175AD4:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88175AD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x88175b0c
	if (!ctx.cr6.lt) goto loc_88175B0C;
	// subf r11,r11,r14
	ctx.r11.u64 = ctx.r14.u64 - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88175AE8:
	// srawi r10,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 11;
	// lwz r11,124(r1)
	ctx.current_instruction = 0x88175AEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbzx r9,r10,r28
	ctx.current_instruction = 0x88175AF4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	ctx.current_instruction = 0x88175B00;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x88175ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175AE8;
loc_88175B0C:
	// lwz r11,15392(r31)
	ctx.current_instruction = 0x88175B0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88175b38
	if (!ctx.cr6.lt) goto loc_88175B38;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_88175B24:
	// stbu r9,1(r10)
	ctx.current_instruction = 0x88175B24;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,15392(r31)
	ctx.current_instruction = 0x88175B2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88175b24
	if (ctx.cr6.lt) goto loc_88175B24;
loc_88175B38:
	// srawi r11,r15,12
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 12;
	// lwz r10,176(r1)
	ctx.current_instruction = 0x88175B3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// srawi r9,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r15.s32 >> 1;
	// lwz r30,128(r1)
	ctx.current_instruction = 0x88175B44;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r20,r11,r19
	ctx.r20.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r19.s32);
	// lwz r25,92(r1)
	ctx.current_instruction = 0x88175B4C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r24,88(r1)
	ctx.current_instruction = 0x88175B50;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r23,r9,21
	ctx.r23.u64 = ctx.r9.u32 & 0x7FF;
	// add r11,r20,r19
	ctx.r11.u64 = ctx.r20.u64 + ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88175b80
	if (!ctx.cr6.gt) goto loc_88175B80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r9,96(r1)
	ctx.current_instruction = 0x88175B68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.current_instruction = 0x88175B6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_88175B70:
	// dcbt r11,r10
	// dcbt r11,r9
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x88175b70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175B70;
loc_88175B80:
	// lwz r11,136(r1)
	ctx.current_instruction = 0x88175B80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88175ba8
	if (!ctx.cr6.gt) goto loc_88175BA8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,128
	ctx.r11.s64 = 128;
loc_88175B94:
	// stb r11,0(r25)
	ctx.current_instruction = 0x88175B94;
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stb r11,0(r24)
	ctx.current_instruction = 0x88175B9C;
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// bdnz 0x88175b94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175B94;
loc_88175BA8:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r17,-8
	ctx.r11.s64 = ctx.r17.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88175BB4:
	// stwu r23,16(r11)
	ctx.current_instruction = 0x88175BB4;
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88175bb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175BB4;
	// lwz r10,180(r1)
	ctx.current_instruction = 0x88175BBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// subfic r26,r23,2048
	ctx.xer.ca = ctx.r23.u32 <= 2048;
	ctx.r26.u64 = static_cast<uint64_t>(2048) - ctx.r23.u64;
	// srawi. r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r21,r9,r10
	ctx.r21.u64 = ctx.r10.u64 - ctx.r9.u64;
	// ble 0x88175d84
	if (!ctx.cr0.gt) goto loc_88175D84;
	// lwz r10,100(r1)
	ctx.current_instruction = 0x88175BD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lwz r9,96(r1)
	ctx.current_instruction = 0x88175BDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r28,r20,r10
	ctx.r28.u64 = ctx.r20.u64 + ctx.r10.u64;
	// add r27,r20,r9
	ctx.r27.u64 = ctx.r20.u64 + ctx.r9.u64;
loc_88175BE8:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r17,256
	ctx.r11.s64 = ctx.r17.s64 + 256;
	// addi r10,r17,-12
	ctx.r10.s64 = ctx.r17.s64 + -12;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88175BFC:
	// srawi r7,r30,12
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 12;
	// lwz r6,108(r1)
	ctx.current_instruction = 0x88175C00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r8,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 1;
	// add r9,r28,r7
	ctx.r9.u64 = ctx.r28.u64 + ctx.r7.u64;
	// clrlwi r5,r8,21
	ctx.r5.u64 = ctx.r8.u32 & 0x7FF;
	// add r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 + ctx.r6.u64;
	// lbzx r4,r28,r7
	ctx.current_instruction = 0x88175C14;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// subf r3,r5,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r5.u64;
	// lbz r30,1(r9)
	ctx.current_instruction = 0x88175C1C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r14,r9,r19
	ctx.current_instruction = 0x88175C20;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r19.u32);
	// add r9,r27,r7
	ctx.r9.u64 = ctx.r27.u64 + ctx.r7.u64;
	// stw r5,16(r10)
	ctx.current_instruction = 0x88175C28;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// stw r3,12(r10)
	ctx.current_instruction = 0x88175C30;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// stw r4,8(r11)
	ctx.current_instruction = 0x88175C38;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r30,12(r11)
	ctx.current_instruction = 0x88175C40;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// clrlwi r4,r5,21
	ctx.r4.u64 = ctx.r5.u32 & 0x7FF;
	// stw r14,16(r11)
	ctx.current_instruction = 0x88175C48;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r14.u32);
	// lbzx r3,r9,r19
	ctx.current_instruction = 0x88175C4C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r19.u32);
	// subf r5,r4,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r4.u64;
	// lbz r30,0(r9)
	ctx.current_instruction = 0x88175C54;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r14,1(r9)
	ctx.current_instruction = 0x88175C58;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r28,r7
	ctx.r9.u64 = ctx.r28.u64 + ctx.r7.u64;
	// stw r3,32(r11)
	ctx.current_instruction = 0x88175C60;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// stw r14,28(r11)
	ctx.current_instruction = 0x88175C64;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r14.u32);
	// stw r30,24(r11)
	ctx.current_instruction = 0x88175C68;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// lbzx r14,r28,r7
	ctx.current_instruction = 0x88175C6C;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// lbzx r3,r9,r19
	ctx.current_instruction = 0x88175C70;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r19.u32);
	// lbz r30,1(r9)
	ctx.current_instruction = 0x88175C74;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r27,r7
	ctx.r9.u64 = ctx.r27.u64 + ctx.r7.u64;
	// stw r4,32(r10)
	ctx.current_instruction = 0x88175C7C;
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r4.u32);
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// stw r3,48(r11)
	ctx.current_instruction = 0x88175C88;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// stw r5,28(r10)
	ctx.current_instruction = 0x88175C8C;
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// clrlwi r3,r4,21
	ctx.r3.u64 = ctx.r4.u32 & 0x7FF;
	// stw r30,44(r11)
	ctx.current_instruction = 0x88175C94;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r14,40(r11)
	ctx.current_instruction = 0x88175C9C;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r14.u32);
	// subf r5,r3,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r3.u64;
	// lbz r4,1(r9)
	ctx.current_instruction = 0x88175CA4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r30,r9,r19
	ctx.current_instruction = 0x88175CA8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r19.u32);
	// lbz r14,0(r9)
	ctx.current_instruction = 0x88175CAC;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r28,r7
	ctx.r9.u64 = ctx.r28.u64 + ctx.r7.u64;
	// stw r4,60(r11)
	ctx.current_instruction = 0x88175CB4;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// stw r30,64(r11)
	ctx.current_instruction = 0x88175CB8;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
	// stw r14,56(r11)
	ctx.current_instruction = 0x88175CBC;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r14.u32);
	// lbzx r14,r9,r19
	ctx.current_instruction = 0x88175CC0;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r19.u32);
	// lbzx r4,r28,r7
	ctx.current_instruction = 0x88175CC4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// lbz r30,1(r9)
	ctx.current_instruction = 0x88175CC8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r27,r7
	ctx.r9.u64 = ctx.r27.u64 + ctx.r7.u64;
	// stw r3,48(r10)
	ctx.current_instruction = 0x88175CD0;
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r3.u32);
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// stw r5,44(r10)
	ctx.current_instruction = 0x88175CD8;
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// stw r4,72(r11)
	ctx.current_instruction = 0x88175CE0;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// stw r30,76(r11)
	ctx.current_instruction = 0x88175CE4;
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// clrlwi r5,r3,21
	ctx.r5.u64 = ctx.r3.u32 & 0x7FF;
	// stw r14,80(r11)
	ctx.current_instruction = 0x88175CEC;
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r14.u32);
	// lbz r4,1(r9)
	ctx.current_instruction = 0x88175CF0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r3,r5,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r5.u64;
	// lbzx r30,r9,r19
	ctx.current_instruction = 0x88175CF8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r19.u32);
	// lbz r14,0(r9)
	ctx.current_instruction = 0x88175CFC;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r28,r7
	ctx.r9.u64 = ctx.r28.u64 + ctx.r7.u64;
	// stw r4,92(r11)
	ctx.current_instruction = 0x88175D04;
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// stw r30,96(r11)
	ctx.current_instruction = 0x88175D08;
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r30.u32);
	// stw r14,88(r11)
	ctx.current_instruction = 0x88175D0C;
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r14.u32);
	// lbzx r30,r9,r19
	ctx.current_instruction = 0x88175D10;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r19.u32);
	// lbzx r14,r28,r7
	ctx.current_instruction = 0x88175D14;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// lbz r4,1(r9)
	ctx.current_instruction = 0x88175D18;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r9,r27,r7
	ctx.r9.u64 = ctx.r27.u64 + ctx.r7.u64;
	// stw r3,60(r10)
	ctx.current_instruction = 0x88175D20;
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r3.u32);
	// stwu r5,64(r10)
	ctx.current_instruction = 0x88175D24;
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stw r4,108(r11)
	ctx.current_instruction = 0x88175D28;
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r4.u32);
	// stw r30,112(r11)
	ctx.current_instruction = 0x88175D2C;
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r30.u32);
	// stw r14,104(r11)
	ctx.current_instruction = 0x88175D30;
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r14.u32);
	// lbzx r3,r27,r7
	ctx.current_instruction = 0x88175D34;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r7.u32);
	// lbz r7,1(r9)
	ctx.current_instruction = 0x88175D38;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r5,r9,r19
	ctx.current_instruction = 0x88175D3C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r19.u32);
	// stw r3,120(r11)
	ctx.current_instruction = 0x88175D40;
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r3.u32);
	// add r30,r8,r6
	ctx.r30.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r7,124(r11)
	ctx.current_instruction = 0x88175D48;
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r7.u32);
	// stwu r5,128(r11)
	ctx.current_instruction = 0x88175D4C;
	ea = 128 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88175bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175BFC;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r17,256
	ctx.r5.s64 = ctx.r17.s64 + 256;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x88173be0
	ctx.lr = 0x88175D68;
	sub_88173BE0(ctx, base);
loc_88175D68:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// bne 0x88175be8
	if (!ctx.cr0.eq) goto loc_88175BE8;
	// lwz r6,144(r1)
	ctx.current_instruction = 0x88175D78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.current_instruction = 0x88175D7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r14,152(r1)
	ctx.current_instruction = 0x88175D80;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_88175D84:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x88175e48
	if (!ctx.cr6.gt) goto loc_88175E48;
	// lwz r11,100(r1)
	ctx.current_instruction = 0x88175D8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// lwz r10,96(r1)
	ctx.current_instruction = 0x88175D94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r8,r20,r11
	ctx.r8.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r7,r20,r10
	ctx.r7.u64 = ctx.r20.u64 + ctx.r10.u64;
loc_88175DA0:
	// srawi r10,r30,12
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 12;
	// lwz r9,108(r1)
	ctx.current_instruction = 0x88175DA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r4,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 1;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r3,r4,21
	ctx.r3.u64 = ctx.r4.u32 & 0x7FF;
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// subfic r9,r3,2048
	ctx.xer.ca = ctx.r3.u32 <= 2048;
	ctx.r9.u64 = static_cast<uint64_t>(2048) - ctx.r3.u64;
	// lbzx r4,r8,r10
	ctx.current_instruction = 0x88175DBC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r28,r11,r19
	ctx.current_instruction = 0x88175DC0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// subf r27,r23,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r23.u64;
	// lbz r11,1(r11)
	ctx.current_instruction = 0x88175DC8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r9,r28,r23
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r23.s32);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r11,r4,r27
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,124(r1)
	ctx.current_instruction = 0x88175DE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r10,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 11;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r4,r10,r9
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r4,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// stb r10,0(r25)
	ctx.current_instruction = 0x88175DFC;
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r10.u8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lbz r4,1(r11)
	ctx.current_instruction = 0x88175E04;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r28,0(r11)
	ctx.current_instruction = 0x88175E08;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r11,r11,r19
	ctx.current_instruction = 0x88175E0C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r28,r27
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 11;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// mullw r3,r4,r9
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r24)
	ctx.current_instruction = 0x88175E3C;
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r10.u8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// bdnz 0x88175da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175DA0;
loc_88175E48:
	// lwz r11,156(r1)
	ctx.current_instruction = 0x88175E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88175ebc
	if (!ctx.cr6.lt) goto loc_88175EBC;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lwz r10,100(r1)
	ctx.current_instruction = 0x88175E58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.current_instruction = 0x88175E5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r9,r20,r10
	ctx.r9.u64 = ctx.r20.u64 + ctx.r10.u64;
	// add r8,r20,r8
	ctx.r8.u64 = ctx.r20.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88175E6C:
	// srawi r11,r30,12
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 12;
	// lwz r10,108(r1)
	ctx.current_instruction = 0x88175E70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,124(r1)
	ctx.current_instruction = 0x88175E74;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbzx r10,r9,r11
	ctx.current_instruction = 0x88175E7C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw r4,r10,r7
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r4,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// stb r3,0(r25)
	ctx.current_instruction = 0x88175E90;
	REX_STORE_U8(ctx.r25.u32 + 0, ctx.r3.u8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lbzx r11,r8,r11
	ctx.current_instruction = 0x88175E98;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// mullw r3,r4,r7
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r24)
	ctx.current_instruction = 0x88175EB0;
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r10.u8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// bdnz 0x88175e6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175E6C;
loc_88175EBC:
	// lwz r7,148(r1)
	ctx.current_instruction = 0x88175EBC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88175ef0
	if (!ctx.cr6.lt) goto loc_88175EF0;
	// subf r8,r5,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r10,r5,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r5.u64;
	// subf r9,r5,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,128
	ctx.r8.s64 = 128;
loc_88175EE0:
	// stbx r8,r10,r11
	ctx.current_instruction = 0x88175EE0;
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r8,r9,r11
	ctx.current_instruction = 0x88175EE4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88175ee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175EE0;
loc_88175EF0:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88175EF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r21,r18,1
	ctx.r21.s64 = ctx.r18.s64 + 1;
	// lwz r9,15392(r31)
	ctx.current_instruction = 0x88175EF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// add r11,r15,r11
	ctx.r11.u64 = ctx.r15.u64 + ctx.r11.u64;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x88175F00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r22,r16,r9
	ctx.r22.u64 = ctx.r16.u64 + ctx.r9.u64;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x88175F08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r30,128(r1)
	ctx.current_instruction = 0x88175F10;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,15388(r31)
	ctx.current_instruction = 0x88175F18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15388);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r3,92(r1)
	ctx.current_instruction = 0x88175F24;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// and r23,r9,r11
	ctx.r23.u64 = ctx.r9.u64 & ctx.r11.u64;
	// stw r8,88(r1)
	ctx.current_instruction = 0x88175F2C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// clrlwi r26,r23,21
	ctx.r26.u64 = ctx.r23.u32 & 0x7FF;
	// srawi r11,r23,11
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 11;
	// extsw r7,r26
	ctx.r7.s64 = ctx.r26.s32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// std r7,224(r1)
	ctx.current_instruction = 0x88175F44;
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lfd f0,224(r1)
	ctx.current_instruction = 0x88175F48;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// blt cr6,0x88175f60
	if (ctx.cr6.lt) goto loc_88175F60;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_88175F60:
	// lwz r8,20(r31)
	ctx.current_instruction = 0x88175F60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,112(r1)
	ctx.current_instruction = 0x88175F64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,15404(r31)
	ctx.current_instruction = 0x88175F68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15404);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x88175f9c
	if (!ctx.cr6.gt) goto loc_88175F9C;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88175f98
	if (ctx.cr6.eq) goto loc_88175F98;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88175F90:
	// stbu r10,1(r11)
	ctx.current_instruction = 0x88175F90;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88175f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175F90;
loc_88175F98:
	// add r3,r22,r9
	ctx.r3.u64 = ctx.r22.u64 + ctx.r9.u64;
loc_88175F9C:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r17,-8
	ctx.r11.s64 = ctx.r17.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88175FA8:
	// stwu r26,16(r11)
	ctx.current_instruction = 0x88175FA8;
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88175fa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175FA8;
	// subfic r27,r26,2048
	ctx.xer.ca = ctx.r26.u32 <= 2048;
	ctx.r27.u64 = static_cast<uint64_t>(2048) - ctx.r26.u64;
	// stfs f0,204(r1)
	ctx.current_instruction = 0x88175FB4;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// srawi. r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r24,r10,r6
	ctx.r24.u64 = ctx.r6.u64 - ctx.r10.u64;
	// ble 0x8817616c
	if (!ctx.cr0.gt) goto loc_8817616C;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v2,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88175FD4:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r17,256
	ctx.r11.s64 = ctx.r17.s64 + 256;
	// addi r10,r17,-4
	ctx.r10.s64 = ctx.r17.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88175FE8:
	// srawi r9,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 11;
	// lwz r8,20(r31)
	ctx.current_instruction = 0x88175FEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r4,r30,21
	ctx.r4.u64 = ctx.r30.u32 & 0x7FF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// subf r20,r4,r27
	ctx.r20.u64 = ctx.r27.u64 - ctx.r4.u64;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r30,r29
	ctx.r8.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r30,1(r9)
	ctx.current_instruction = 0x88176004;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// lbz r6,0(r9)
	ctx.current_instruction = 0x8817600C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r18,r8,21
	ctx.r18.u64 = ctx.r8.u32 & 0x7FF;
	// lbz r17,0(r7)
	ctx.current_instruction = 0x88176014;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + ctx.r28.u64;
	// lbz r7,1(r7)
	ctx.current_instruction = 0x8817601C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r16,r18,r27
	ctx.r16.u64 = ctx.r27.u64 - ctx.r18.u64;
	// stw r4,8(r10)
	ctx.current_instruction = 0x88176024;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// subf r7,r17,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r17.u64;
	// stw r4,16(r10)
	ctx.current_instruction = 0x88176030;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// stw r30,8(r11)
	ctx.current_instruction = 0x88176034;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// subf r7,r30,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r30.u64;
	// stw r17,12(r11)
	ctx.current_instruction = 0x88176040;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r17.u32);
	// stw r20,4(r10)
	ctx.current_instruction = 0x88176044;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r20.u32);
	// clrlwi r30,r8,21
	ctx.r30.u64 = ctx.r8.u32 & 0x7FF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,4(r11)
	ctx.current_instruction = 0x88176050;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// stw r7,16(r11)
	ctx.current_instruction = 0x88176058;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// subf r20,r30,r27
	ctx.r20.u64 = ctx.r27.u64 - ctx.r30.u64;
	// srawi r4,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 11;
	// clrlwi r17,r8,21
	ctx.r17.u64 = ctx.r8.u32 & 0x7FF;
	// subf r15,r17,r27
	ctx.r15.u64 = ctx.r27.u64 - ctx.r17.u64;
	// lwz r7,20(r31)
	ctx.current_instruction = 0x8817606C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r6,0(r9)
	ctx.current_instruction = 0x88176074;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,1(r9)
	ctx.current_instruction = 0x88176078;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r14,0(r7)
	ctx.current_instruction = 0x8817607C;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r7,1(r7)
	ctx.current_instruction = 0x88176080;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r14.u64;
	// stw r14,28(r11)
	ctx.current_instruction = 0x88176088;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r14.u32);
	// stw r9,116(r1)
	ctx.current_instruction = 0x8817608C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// add r9,r5,r28
	ctx.r9.u64 = ctx.r5.u64 + ctx.r28.u64;
	// lwz r14,116(r1)
	ctx.current_instruction = 0x88176094;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r14.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r18,24(r10)
	ctx.current_instruction = 0x881760A0;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r18.u32);
	// stw r18,32(r10)
	ctx.current_instruction = 0x881760A4;
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r18.u32);
	// stw r7,32(r11)
	ctx.current_instruction = 0x881760A8;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r16,20(r10)
	ctx.current_instruction = 0x881760AC;
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r16.u32);
	// stw r14,24(r11)
	ctx.current_instruction = 0x881760B0;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r14.u32);
	// stw r6,20(r11)
	ctx.current_instruction = 0x881760B4;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r7,20(r31)
	ctx.current_instruction = 0x881760B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lbzx r6,r5,r28
	ctx.current_instruction = 0x881760BC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r28.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r9,1(r9)
	ctx.current_instruction = 0x881760C4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r5,0(r7)
	ctx.current_instruction = 0x881760C8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r7,1(r7)
	ctx.current_instruction = 0x881760CC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// stw r9,40(r11)
	ctx.current_instruction = 0x881760D0;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// stw r5,44(r11)
	ctx.current_instruction = 0x881760D8;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stw r6,36(r11)
	ctx.current_instruction = 0x881760E0;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// add r9,r4,r28
	ctx.r9.u64 = ctx.r4.u64 + ctx.r28.u64;
	// stw r30,40(r10)
	ctx.current_instruction = 0x881760E8;
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r30.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r30,48(r10)
	ctx.current_instruction = 0x881760F0;
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r30.u32);
	// stw r7,48(r11)
	ctx.current_instruction = 0x881760F4;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r20,36(r10)
	ctx.current_instruction = 0x881760F8;
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r20.u32);
	// lbz r6,1(r9)
	ctx.current_instruction = 0x881760FC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lwz r7,20(r31)
	ctx.current_instruction = 0x88176100;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,0(r7)
	ctx.current_instruction = 0x88176108;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r7,1(r7)
	ctx.current_instruction = 0x8817610C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// lbzx r9,r4,r28
	ctx.current_instruction = 0x88176110;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r28.u32);
	// subf r4,r5,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r7,r6,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r9,52(r11)
	ctx.current_instruction = 0x8817611C;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r6,56(r11)
	ctx.current_instruction = 0x88176120;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r5,60(r11)
	ctx.current_instruction = 0x88176128;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// stw r15,52(r10)
	ctx.current_instruction = 0x8817612C;
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r15.u32);
	// add r30,r8,r29
	ctx.r30.u64 = ctx.r8.u64 + ctx.r29.u64;
	// stw r17,56(r10)
	ctx.current_instruction = 0x88176134;
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r17.u32);
	// stwu r9,64(r11)
	ctx.current_instruction = 0x88176138;
	ea = 64 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r17,64(r10)
	ctx.current_instruction = 0x8817613C;
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r17.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88175fe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88175FE8;
	// lwz r17,164(r1)
	ctx.current_instruction = 0x88176144;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// addi r4,r17,256
	ctx.r4.s64 = ctx.r17.s64 + 256;
	// bl 0x88173520
	ctx.lr = 0x88176154;
	sub_88173520(ctx, base);
loc_88176154:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x88175fd4
	if (!ctx.cr0.eq) goto loc_88175FD4;
	// lwz r6,144(r1)
	ctx.current_instruction = 0x88176160;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.current_instruction = 0x88176164;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r14,152(r1)
	ctx.current_instruction = 0x88176168;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_8817616C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881761f4
	if (!ctx.cr6.gt) goto loc_881761F4;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_88176178:
	// srawi r11,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 11;
	// lwz r10,20(r31)
	ctx.current_instruction = 0x8817617C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r7,r30,21
	ctx.r7.u64 = ctx.r30.u32 & 0x7FF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,1(r11)
	ctx.current_instruction = 0x88176190;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.current_instruction = 0x88176194;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.current_instruction = 0x88176198;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r9,r4,r7
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lbz r10,1(r10)
	ctx.current_instruction = 0x881761A0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mullw r8,r8,r26
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r4,r7
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r10,r26
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// srawi r10,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 11;
	// subfic r7,r7,2048
	ctx.xer.ca = ctx.r7.u32 <= 2048;
	ctx.r7.u64 = static_cast<uint64_t>(2048) - ctx.r7.u64;
	// subf r4,r26,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r26.u64;
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,124(r1)
	ctx.current_instruction = 0x881761D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r9,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 11;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	ctx.current_instruction = 0x881761E8;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x88176178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176178;
loc_881761F4:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x881761F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r11,r14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x8817622c
	if (!ctx.cr6.lt) goto loc_8817622C;
	// subf r11,r11,r14
	ctx.r11.u64 = ctx.r14.u64 - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88176208:
	// srawi r10,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 11;
	// lwz r11,124(r1)
	ctx.current_instruction = 0x8817620C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbzx r9,r10,r28
	ctx.current_instruction = 0x88176214;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// stb r7,0(r3)
	ctx.current_instruction = 0x88176220;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x88176208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176208;
loc_8817622C:
	// lwz r11,15392(r31)
	ctx.current_instruction = 0x8817622C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88176258
	if (!ctx.cr6.lt) goto loc_88176258;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_88176244:
	// stbu r8,1(r9)
	ctx.current_instruction = 0x88176244;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15392(r31)
	ctx.current_instruction = 0x8817624C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88176244
	if (ctx.cr6.lt) goto loc_88176244;
loc_88176258:
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88176258;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r18,r21,1
	ctx.r18.s64 = ctx.r21.s64 + 1;
	// lwz r9,160(r1)
	ctx.current_instruction = 0x88176260;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r16,r11,r22
	ctx.r16.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 + ctx.r10.u64;
	// addi r4,r9,-2
	ctx.r4.s64 = ctx.r9.s64 + -2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmpw cr6,r18,r4
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r4.s32, ctx.xer);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// and r15,r8,r10
	ctx.r15.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r15,116(r1)
	ctx.current_instruction = 0x88176280;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// blt cr6,0x88175800
	if (ctx.cr6.lt) goto loc_88175800;
loc_88176288:
	// lwz r11,15388(r31)
	ctx.current_instruction = 0x88176288;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15388);
	// srawi r6,r15,11
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r15.s32 >> 11;
	// lwz r23,128(r1)
	ctx.current_instruction = 0x88176290;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// blt cr6,0x881762a4
	if (ctx.cr6.lt) goto loc_881762A4;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
loc_881762A4:
	// lwz r11,172(r1)
	ctx.current_instruction = 0x881762A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r17,160(r1)
	ctx.current_instruction = 0x881762A8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r17,r10
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8817654c
	if (ctx.cr6.lt) goto loc_8817654C;
	// cmpw cr6,r4,r17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8817654c
	if (!ctx.cr6.lt) goto loc_8817654C;
	// lwz r18,96(r1)
	ctx.current_instruction = 0x881762C0;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r28,148(r1)
	ctx.current_instruction = 0x881762C8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r14,128
	ctx.r14.s64 = 128;
	// lwz r30,112(r1)
	ctx.current_instruction = 0x881762D0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r24,92(r1)
	ctx.current_instruction = 0x881762D4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r20,100(r1)
	ctx.current_instruction = 0x881762D8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r25,88(r1)
	ctx.current_instruction = 0x881762DC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,156(r1)
	ctx.current_instruction = 0x881762E0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r21,136(r1)
	ctx.current_instruction = 0x881762E4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r26,132(r1)
	ctx.current_instruction = 0x881762E8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_881762EC:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x88176318
	if (!ctx.cr6.gt) goto loc_88176318;
	// addi r11,r16,-1
	ctx.r11.s64 = ctx.r16.s64 + -1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88176314
	if (ctx.cr6.eq) goto loc_88176314;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_8817630C:
	// stbu r10,1(r11)
	ctx.current_instruction = 0x8817630C;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8817630c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817630C;
loc_88176314:
	// add r11,r16,r30
	ctx.r11.u64 = ctx.r16.u64 + ctx.r30.u64;
loc_88176318:
	// lwz r9,20(r31)
	ctx.current_instruction = 0x88176318;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// lwz r10,15404(r31)
	ctx.current_instruction = 0x88176320;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15404);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x8817635c
	if (!ctx.cr6.lt) goto loc_8817635C;
	// subf r9,r30,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88176338:
	// srawi r7,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 11;
	// lwz r9,124(r1)
	ctx.current_instruction = 0x8817633C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lbzx r6,r7,r10
	ctx.current_instruction = 0x88176344;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r5,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stb r3,0(r11)
	ctx.current_instruction = 0x88176350;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88176338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176338;
loc_8817635C:
	// lwz r9,15392(r31)
	ctx.current_instruction = 0x8817635C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88176384
	if (!ctx.cr6.lt) goto loc_88176384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88176370:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r22,1(r11)
	ctx.current_instruction = 0x88176374;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r22.u8);
	ctx.r11.u32 = ea;
	// lwz r9,15392(r31)
	ctx.current_instruction = 0x88176378;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88176370
	if (ctx.cr6.lt) goto loc_88176370;
loc_88176384:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x881763ac
	if (!ctx.cr6.gt) goto loc_881763AC;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
loc_88176398:
	// stb r14,0(r11)
	ctx.current_instruction = 0x88176398;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r14.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r14,0(r10)
	ctx.current_instruction = 0x881763A0;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r14.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x88176398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176398;
loc_881763AC:
	// lwz r7,15388(r31)
	ctx.current_instruction = 0x881763AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15388);
	// srawi r9,r15,12
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r15.s32 >> 12;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881763c8
	if (ctx.cr6.lt) goto loc_881763C8;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_881763C8:
	// mullw r9,r9,r19
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// cmpw cr6,r21,r27
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x88176434
	if (!ctx.cr6.lt) goto loc_88176434;
	// subf r7,r21,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r21.u64;
	// add r6,r9,r20
	ctx.r6.u64 = ctx.r9.u64 + ctx.r20.u64;
	// add r5,r9,r18
	ctx.r5.u64 = ctx.r9.u64 + ctx.r18.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881763E4:
	// srawi r9,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 12;
	// lwz r7,108(r1)
	ctx.current_instruction = 0x881763E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,124(r1)
	ctx.current_instruction = 0x881763EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r6,r9
	ctx.current_instruction = 0x881763F4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// mullw r7,r7,r3
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// stb r7,0(r11)
	ctx.current_instruction = 0x88176408;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r5,r9
	ctx.current_instruction = 0x88176410;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// mullw r7,r9,r3
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// rlwinm r9,r7,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// addi r3,r9,128
	ctx.r3.s64 = ctx.r9.s64 + 128;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stb r9,0(r10)
	ctx.current_instruction = 0x88176428;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881763e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881763E4;
loc_88176434:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88176460
	if (!ctx.cr6.lt) goto loc_88176460;
	// subf r8,r27,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r27.u64;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	// subf r10,r27,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r27.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88176450:
	// stbx r14,r11,r9
	ctx.current_instruction = 0x88176450;
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r14.u8);
	// stbx r14,r10,r9
	ctx.current_instruction = 0x88176454;
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r14.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x88176450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176450;
loc_88176460:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88176460;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r24,r24,r28
	ctx.r24.u64 = ctx.r24.u64 + ctx.r28.u64;
	// lwz r9,15392(r31)
	ctx.current_instruction = 0x88176468;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// add r25,r25,r28
	ctx.r25.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r11,r15,r11
	ctx.r11.u64 = ctx.r15.u64 + ctx.r11.u64;
	// lwz r10,15388(r31)
	ctx.current_instruction = 0x88176474;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15388);
	// add r7,r16,r9
	ctx.r7.u64 = ctx.r16.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// and r15,r9,r11
	ctx.r15.u64 = ctx.r9.u64 & ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// srawi r6,r15,11
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r15.s32 >> 11;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881764a4
	if (ctx.cr6.lt) goto loc_881764A4;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
loc_881764A4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881764cc
	if (!ctx.cr6.gt) goto loc_881764CC;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881764c8
	if (ctx.cr6.eq) goto loc_881764C8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_881764C0:
	// stbu r10,1(r11)
	ctx.current_instruction = 0x881764C0;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x881764c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881764C0;
loc_881764C8:
	// add r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 + ctx.r30.u64;
loc_881764CC:
	// lwz r9,20(r31)
	ctx.current_instruction = 0x881764CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// lwz r10,15404(r31)
	ctx.current_instruction = 0x881764D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15404);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x88176510
	if (!ctx.cr6.lt) goto loc_88176510;
	// subf r9,r30,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881764EC:
	// srawi r4,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 11;
	// lwz r9,124(r1)
	ctx.current_instruction = 0x881764F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lbzx r3,r4,r10
	ctx.current_instruction = 0x881764F8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r4,0(r11)
	ctx.current_instruction = 0x88176504;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881764ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881764EC;
loc_88176510:
	// lwz r10,15392(r31)
	ctx.current_instruction = 0x88176510;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88176538
	if (!ctx.cr6.lt) goto loc_88176538;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88176524:
	// stbu r22,1(r11)
	ctx.current_instruction = 0x88176524;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r22.u8);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,15392(r31)
	ctx.current_instruction = 0x8817652C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88176524
	if (ctx.cr6.lt) goto loc_88176524;
loc_88176538:
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// add r16,r10,r7
	ctx.r16.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r4,r17
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x881762ec
	if (ctx.cr6.lt) goto loc_881762EC;
	// b 0x88176560
	goto loc_88176560;
loc_8817654C:
	// lwz r28,148(r1)
	ctx.current_instruction = 0x8817654C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r24,92(r1)
	ctx.current_instruction = 0x88176554;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r14,128
	ctx.r14.s64 = 128;
	// lwz r25,88(r1)
	ctx.current_instruction = 0x8817655C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88176560:
	// lwz r11,15396(r31)
	ctx.current_instruction = 0x88176560;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15396);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88176608
	if (!ctx.cr6.lt) goto loc_88176608;
loc_88176570:
	// lwz r10,15392(r31)
	ctx.current_instruction = 0x88176570;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88176598
	if (!ctx.cr6.gt) goto loc_88176598;
	// addi r10,r16,-1
	ctx.r10.s64 = ctx.r16.s64 + -1;
loc_88176584:
	// stbu r22,1(r10)
	ctx.current_instruction = 0x88176584;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r22.u8);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,15392(r31)
	ctx.current_instruction = 0x8817658C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88176584
	if (ctx.cr6.lt) goto loc_88176584;
loc_88176598:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x881765bc
	if (!ctx.cr6.gt) goto loc_881765BC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// subf r10,r25,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r25.u64;
loc_881765AC:
	// stbx r14,r11,r10
	ctx.current_instruction = 0x881765AC;
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r14.u8);
	// stb r14,0(r11)
	ctx.current_instruction = 0x881765B0;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r14.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881765ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881765AC;
loc_881765BC:
	// lwz r11,15392(r31)
	ctx.current_instruction = 0x881765BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// add r24,r24,r28
	ctx.r24.u64 = ctx.r24.u64 + ctx.r28.u64;
	// add r25,r25,r28
	ctx.r25.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + ctx.r16.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881765f4
	if (!ctx.cr6.gt) goto loc_881765F4;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_881765E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r22,1(r9)
	ctx.current_instruction = 0x881765E4;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r22.u8);
	ctx.r9.u32 = ea;
	// lwz r11,15392(r31)
	ctx.current_instruction = 0x881765E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15392);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881765e0
	if (ctx.cr6.lt) goto loc_881765E0;
loc_881765F4:
	// lwz r10,15396(r31)
	ctx.current_instruction = 0x881765F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15396);
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r16,r11,r8
	ctx.r16.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88176570
	if (ctx.cr6.lt) goto loc_88176570;
loc_88176608:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2c0
	ctx.lr = 0x88176618;
	__restfpr_23(ctx, base);
loc_88176618:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A7A58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A7A58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A7A58) {
			switch (rex_dispatch_address) {
				case 0x881A7A60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A7A58;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881A7A60: goto loc_881A7A60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881A7A60;
	__savegprlr_14(ctx, base);
loc_881A7A60:
	// lwz r23,136(r3)
	ctx.current_instruction = 0x881A7A60;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r6,44(r1)
	ctx.current_instruction = 0x881A7A68;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// addi r6,r23,1
	ctx.r6.s64 = ctx.r23.s64 + 1;
	// stw r4,-220(r1)
	ctx.current_instruction = 0x881A7A70;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r4.u32);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x881A7A74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r22,r6,31,1,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,36(r1)
	ctx.current_instruction = 0x881A7A7C;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r23,-184(r1)
	ctx.current_instruction = 0x881A7A84;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r23.u32);
	// add r3,r22,r7
	ctx.r3.u64 = ctx.r22.u64 + ctx.r7.u64;
	// stw r22,-200(r1)
	ctx.current_instruction = 0x881A7A8C;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r22.u32);
	// add r4,r22,r4
	ctx.r4.u64 = ctx.r22.u64 + ctx.r4.u64;
	// stw r3,-208(r1)
	ctx.current_instruction = 0x881A7A94;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// stw r4,-216(r1)
	ctx.current_instruction = 0x881A7A98;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// beq cr6,0x881a7e34
	if (ctx.cr6.eq) goto loc_881A7E34;
	// li r6,1
	ctx.r6.s64 = 1;
	// srawi. r11,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,84(r1)
	ctx.current_instruction = 0x881A7AA8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// ble 0x881a7c80
	if (!ctx.cr0.gt) goto loc_881A7C80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881A7AB4:
	// lbz r11,1(r10)
	ctx.current_instruction = 0x881A7AB4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,6(r10)
	ctx.current_instruction = 0x881A7AB8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lbz r5,7(r10)
	ctx.current_instruction = 0x881A7AC0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r11,9(r10)
	ctx.current_instruction = 0x881A7AC4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r30,8(r10)
	ctx.current_instruction = 0x881A7ACC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lbz r29,3(r10)
	ctx.current_instruction = 0x881A7AD4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// lbz r27,13(r10)
	ctx.current_instruction = 0x881A7AE0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// lbz r26,18(r10)
	ctx.current_instruction = 0x881A7AE8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// extsb r24,r30
	ctx.r24.s64 = ctx.r30.s8;
	// lbz r25,19(r10)
	ctx.current_instruction = 0x881A7AF0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// lbz r22,21(r10)
	ctx.current_instruction = 0x881A7AF8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// extsb r20,r29
	ctx.r20.s64 = ctx.r29.s8;
	// lbz r21,20(r10)
	ctx.current_instruction = 0x881A7B00;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// srawi r28,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 6;
	// lbz r18,15(r10)
	ctx.current_instruction = 0x881A7B08;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// lbz r19,2(r10)
	ctx.current_instruction = 0x881A7B10;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// lbz r17,0(r10)
	ctx.current_instruction = 0x881A7B18;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r24,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 4;
	// lbz r15,14(r10)
	ctx.current_instruction = 0x881A7B20;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// extsb r26,r26
	ctx.r26.s64 = ctx.r26.s8;
	// lbz r16,12(r10)
	ctx.current_instruction = 0x881A7B28;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r20,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 2;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r27,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 2;
	// srawi r26,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 4;
	// rlwimi r4,r6,0,28,29
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r25,r25
	ctx.r25.s64 = ctx.r25.s8;
	// rlwimi r28,r24,0,28,29
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r6,r22
	ctx.r6.s64 = ctx.r22.s8;
	// rlwimi r27,r26,0,28,29
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xC) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r24,r21
	ctx.r24.s64 = ctx.r21.s8;
	// srawi r26,r25,6
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3F) != 0);
	ctx.r26.s64 = ctx.r25.s32 >> 6;
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// srawi r25,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r25.s64 = ctx.r24.s32 >> 4;
	// rlwimi r4,r5,0,30,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x3) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r6,r25,0,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r25,r18
	ctx.r25.s64 = ctx.r18.s8;
	// rlwimi r29,r19,2,22,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3F0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// rlwimi r4,r17,0,24,25
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF3F);
	// srawi r5,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r25.s32 >> 2;
	// lbz r25,4(r10)
	ctx.current_instruction = 0x881A7B7C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r29,r29,2,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xF0;
	// stb r4,0(r7)
	ctx.current_instruction = 0x881A7B84;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r4.u8);
	// rlwimi r6,r5,0,26,27
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFCF);
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// lbz r29,22(r10)
	ctx.current_instruction = 0x881A7B90;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// rlwimi r28,r20,0,26,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x30) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r4,r30,0,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
	// rlwimi r27,r26,0,30,31
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x3) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFFC);
	// lbz r26,23(r10)
	ctx.current_instruction = 0x881A7BA0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// rlwimi r6,r15,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwimi r28,r19,0,24,25
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xC0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lbz r5,10(r10)
	ctx.current_instruction = 0x881A7BB4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// rlwimi r27,r16,0,24,25
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xC0) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFF3F);
	// stb r28,0(r3)
	ctx.current_instruction = 0x881A7BBC;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stb r4,0(r31)
	ctx.current_instruction = 0x881A7BC4;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// rlwinm r6,r22,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC;
	// lbz r4,16(r10)
	ctx.current_instruction = 0x881A7BCC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// stbu r27,1(r7)
	ctx.current_instruction = 0x881A7BD0;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r27.u8);
	ctx.r7.u32 = ea;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// lbz r28,11(r10)
	ctx.current_instruction = 0x881A7BDC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// lbz r27,17(r10)
	ctx.current_instruction = 0x881A7BE0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// stbu r11,1(r3)
	ctx.current_instruction = 0x881A7BF8;
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r3.u32 = ea;
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// lbz r24,5(r10)
	ctx.current_instruction = 0x881A7C04;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r11,r27
	ctx.r11.s64 = ctx.r27.s8;
	// srawi r29,r29,6
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3F) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 6;
	// srawi r28,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 2;
	// rlwimi r5,r4,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// extsb r4,r26
	ctx.r4.s64 = ctx.r26.s8;
	// rlwimi r18,r15,2,22,27
	ctx.r18.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3F0) | (ctx.r18.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r28,r11,0,28,29
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r11,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 6;
	// rlwinm r4,r18,2,24,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xF0;
	// rlwimi r28,r11,0,30,31
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFFC);
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwimi r5,r29,0,30,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwinm r6,r21,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xC;
	// rlwimi r5,r25,0,24,25
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r28,r24,0,24,25
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 | ctx.r6.u64;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// stbu r4,1(r31)
	ctx.current_instruction = 0x881A7C54;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r31.u32 = ea;
	// stb r11,0(r8)
	ctx.current_instruction = 0x881A7C58;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r6,0(r9)
	ctx.current_instruction = 0x881A7C60;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bdnz 0x881a7ab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A7AB4;
	// lwz r22,-200(r1)
	ctx.current_instruction = 0x881A7C78;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// stw r31,-220(r1)
	ctx.current_instruction = 0x881A7C7C;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r31.u32);
loc_881A7C80:
	// clrlwi r6,r23,30
	ctx.r6.u64 = ctx.r23.u32 & 0x3;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881a7e20
	if (ctx.cr6.eq) goto loc_881A7E20;
	// lbz r11,1(r10)
	ctx.current_instruction = 0x881A7C8C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r5,r23,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// lbz r4,3(r10)
	ctx.current_instruction = 0x881A7C94;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r30,2(r10)
	ctx.current_instruction = 0x881A7C9C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r29,r4
	ctx.r29.s64 = ctx.r4.s8;
	// lbz r28,0(r10)
	ctx.current_instruction = 0x881A7CA4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lbz r27,4(r10)
	ctx.current_instruction = 0x881A7CAC;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lbz r25,5(r10)
	ctx.current_instruction = 0x881A7CB4;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r29,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 2;
	// rlwimi r11,r28,0,24,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r4,r30,2,22,27
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3F0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r26,r29,0,26,27
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x30) | (ctx.r26.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r30,r11,0,24,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// rlwinm r28,r4,2,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xF0;
	// rlwinm r29,r26,0,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xF0;
	// rlwinm r11,r27,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r4,r25,0,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x881a7d70
	if (!ctx.cr6.eq) goto loc_881A7D70;
	// lbz r5,1(r10)
	ctx.current_instruction = 0x881A7CE8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r26,0(r10)
	ctx.current_instruction = 0x881A7CEC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r25,2(r10)
	ctx.current_instruction = 0x881A7CF0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// lbz r27,3(r10)
	ctx.current_instruction = 0x881A7CF8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r26,r26
	ctx.r26.s64 = ctx.r26.s8;
	// extsb r20,r25
	ctx.r20.s64 = ctx.r25.s8;
	// lbz r21,4(r10)
	ctx.current_instruction = 0x881A7D04;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r24,r27,0,28,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	// lbz r19,5(r10)
	ctx.current_instruction = 0x881A7D0C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// srawi r26,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 4;
	// srawi r20,r20,4
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xF) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 4;
	// srawi r27,r27,6
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3F) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 6;
	// extsb r21,r21
	ctx.r21.s64 = ctx.r21.s8;
	// extsb r19,r19
	ctx.r19.s64 = ctx.r19.s8;
	// srawi r24,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 2;
	// rlwimi r20,r27,0,30,31
	ctx.r20.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3) | (ctx.r20.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r5,r26,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r21,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 2;
	// rlwinm r27,r25,0,28,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC;
	// srawi r26,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r19.s32 >> 2;
	// or r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 | ctx.r27.u64;
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// clrlwi r25,r20,28
	ctx.r25.u64 = ctx.r20.u32 & 0xF;
	// rlwinm r24,r21,0,26,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x30;
	// rlwinm r26,r26,0,26,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x30;
	// or r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 | ctx.r30.u64;
	// or r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 | ctx.r29.u64;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// or r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 | ctx.r11.u64;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_881A7D70:
	// stb r28,0(r31)
	ctx.current_instruction = 0x881A7D70;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r30,0(r7)
	ctx.current_instruction = 0x881A7D78;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r30.u8);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// stb r29,0(r3)
	ctx.current_instruction = 0x881A7D80;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r31,-220(r1)
	ctx.current_instruction = 0x881A7D88;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r31.u32);
	// bne cr6,0x881a7e10
	if (!ctx.cr6.eq) goto loc_881A7E10;
	// lbz r6,1(r10)
	ctx.current_instruction = 0x881A7D90;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r5,3(r10)
	ctx.current_instruction = 0x881A7D94;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r30,2(r10)
	ctx.current_instruction = 0x881A7D9C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r29,4(r10)
	ctx.current_instruction = 0x881A7DA0;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r28,r5
	ctx.r28.s64 = ctx.r5.s8;
	// lbz r25,0(r10)
	ctx.current_instruction = 0x881A7DA8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// lbz r26,5(r10)
	ctx.current_instruction = 0x881A7DB0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwimi r5,r30,2,22,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// srawi r28,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 2;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// rlwimi r6,r25,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// extsb r27,r26
	ctx.r27.s64 = ctx.r26.s8;
	// rlwinm r5,r5,2,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xF0;
	// rlwimi r30,r28,0,26,27
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x30) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// stb r5,0(r31)
	ctx.current_instruction = 0x881A7DD8;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// rlwinm r6,r6,0,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// srawi r28,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 4;
	// rlwinm r5,r30,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0;
	// stb r6,1(r7)
	ctx.current_instruction = 0x881A7DE8;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r6.u8);
	// rlwinm r30,r29,0,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC;
	// rlwinm r7,r28,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC;
	// stb r5,0(r3)
	ctx.current_instruction = 0x881A7DF4;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// or r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 | ctx.r11.u64;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r31,-220(r1)
	ctx.current_instruction = 0x881A7E04;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r31.u32);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_881A7E10:
	// stb r11,0(r8)
	ctx.current_instruction = 0x881A7E10;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r4,0(r9)
	ctx.current_instruction = 0x881A7E18;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_881A7E20:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// add r4,r22,r31
	ctx.r4.u64 = ctx.r22.u64 + ctx.r31.u64;
	// add r3,r22,r3
	ctx.r3.u64 = ctx.r22.u64 + ctx.r3.u64;
	// stw r4,-216(r1)
	ctx.current_instruction = 0x881A7E2C;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// stw r3,-208(r1)
	ctx.current_instruction = 0x881A7E30;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
loc_881A7E34:
	// lwz r11,92(r1)
	ctx.current_instruction = 0x881A7E34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x881A7E38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881a83e8
	if (!ctx.cr6.lt) goto loc_881A83E8;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// lwz r30,36(r1)
	ctx.current_instruction = 0x881A7E48;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r5,44(r1)
	ctx.current_instruction = 0x881A7E4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// srawi r6,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r23.s32 >> 2;
	// addi r27,r30,-1
	ctx.r27.s64 = ctx.r30.s64 + -1;
	// stw r11,-180(r1)
	ctx.current_instruction = 0x881A7E58;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// addi r26,r5,-1
	ctx.r26.s64 = ctx.r5.s64 + -1;
	// stw r6,-176(r1)
	ctx.current_instruction = 0x881A7E60;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// addi r25,r8,-1
	ctx.r25.s64 = ctx.r8.s64 + -1;
	// stw r27,36(r1)
	ctx.current_instruction = 0x881A7E68;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r27.u32);
	// addi r24,r9,-1
	ctx.r24.s64 = ctx.r9.s64 + -1;
	// stw r26,44(r1)
	ctx.current_instruction = 0x881A7E70;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r26.u32);
	// stw r25,60(r1)
	ctx.current_instruction = 0x881A7E74;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r25.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r24,68(r1)
	ctx.current_instruction = 0x881A7E7C;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r24.u32);
	// b 0x881a7e88
	goto loc_881A7E88;
loc_881A7E84:
	// lwz r6,-176(r1)
	ctx.current_instruction = 0x881A7E84;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_881A7E88:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881a8164
	if (!ctx.cr6.gt) goto loc_881A8164;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_881A7E94:
	// lbz r10,8(r11)
	ctx.current_instruction = 0x881A7E94;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r9,7(r11)
	ctx.current_instruction = 0x881A7E98;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881A7E9C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// lbz r5,10(r11)
	ctx.current_instruction = 0x881A7EA4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// lbz r31,9(r11)
	ctx.current_instruction = 0x881A7EAC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// extsb r30,r8
	ctx.r30.s64 = ctx.r8.s8;
	// lbz r29,4(r11)
	ctx.current_instruction = 0x881A7EB4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// srawi r6,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 6;
	// lbz r26,19(r11)
	ctx.current_instruction = 0x881A7EBC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// extsb r28,r5
	ctx.r28.s64 = ctx.r5.s8;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// lbz r27,20(r11)
	ctx.current_instruction = 0x881A7EC8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// extsb r24,r31
	ctx.r24.s64 = ctx.r31.s8;
	// lbz r22,3(r11)
	ctx.current_instruction = 0x881A7ED0;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// lbz r25,14(r11)
	ctx.current_instruction = 0x881A7ED8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// extsb r20,r29
	ctx.r20.s64 = ctx.r29.s8;
	// lbz r23,1(r11)
	ctx.current_instruction = 0x881A7EE0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r28,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 6;
	// stb r26,-224(r1)
	ctx.current_instruction = 0x881A7EE8;
	REX_STORE_U8(ctx.r1.u32 + -224, ctx.r26.u8);
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lbz r21,13(r11)
	ctx.current_instruction = 0x881A7EF0;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// rlwinm r5,r5,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// lbz r16,22(r11)
	ctx.current_instruction = 0x881A7EF8;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// srawi r24,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 4;
	// lwz r19,-220(r1)
	ctx.current_instruction = 0x881A7F00;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// rlwimi r6,r4,0,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// lbz r17,21(r11)
	ctx.current_instruction = 0x881A7F08;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// srawi r20,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 2;
	// lbz r18,16(r11)
	ctx.current_instruction = 0x881A7F10;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r14,r27
	ctx.r14.s64 = ctx.r27.s8;
	// lbz r15,15(r11)
	ctx.current_instruction = 0x881A7F18;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// extsb r26,r26
	ctx.r26.s64 = ctx.r26.s8;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// rlwimi r6,r30,0,26,27
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x30) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r14,r14,6
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3F) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 6;
	// srawi r26,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 4;
	// rlwimi r28,r24,0,28,29
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xC) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwimi r29,r22,2,22,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3F0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// extsb r4,r25
	ctx.r4.s64 = ctx.r25.s8;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// rlwimi r6,r23,0,24,25
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xC0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwimi r8,r23,2,22,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3F0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stb r6,0(r7)
	ctx.current_instruction = 0x881A7F50;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// rlwimi r14,r26,0,28,29
	ctx.r14.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xC) | (ctx.r14.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// rlwimi r28,r20,0,26,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x30) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r30,r29,2,24,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xF0;
	// lbz r29,5(r11)
	ctx.current_instruction = 0x881A7F64;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r8,r8,2,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xF0;
	// or r6,r30,r5
	ctx.r6.u64 = ctx.r30.u64 | ctx.r5.u64;
	// lbz r30,11(r11)
	ctx.current_instruction = 0x881A7F70;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rlwimi r14,r4,0,26,27
	ctx.r14.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30) | (ctx.r14.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r28,r22,0,24,25
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r5,r31,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC;
	// lbz r31,24(r11)
	ctx.current_instruction = 0x881A7F80;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r28,0(r3)
	ctx.current_instruction = 0x881A7F88;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lbz r28,17(r11)
	ctx.current_instruction = 0x881A7F90;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// rlwimi r14,r21,0,24,25
	ctx.r14.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xC0) | (ctx.r14.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stbu r14,1(r7)
	ctx.current_instruction = 0x881A7FA0;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r14.u8);
	ctx.r7.u32 = ea;
	// or r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 | ctx.r9.u64;
	// extsb r5,r16
	ctx.r5.s64 = ctx.r16.s8;
	// extsb r10,r17
	ctx.r10.s64 = ctx.r17.s8;
	// stb r4,0(r19)
	ctx.current_instruction = 0x881A7FB0;
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r4.u8);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lbz r4,23(r11)
	ctx.current_instruction = 0x881A7FB8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// srawi r5,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 6;
	// rlwinm r20,r27,0,28,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	// lbz r27,6(r11)
	ctx.current_instruction = 0x881A7FC4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r14,r16,0,28,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xC;
	// extsb r26,r18
	ctx.r26.s64 = ctx.r18.s8;
	// lwz r22,-216(r1)
	ctx.current_instruction = 0x881A7FD8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// rlwimi r5,r10,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// lbz r24,12(r11)
	ctx.current_instruction = 0x881A7FE0;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r23,r4,0,28,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r6,-192(r1)
	ctx.current_instruction = 0x881A7FEC;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// rotlwi r10,r19,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// lbz r19,18(r11)
	ctx.current_instruction = 0x881A7FF4;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// rlwimi r25,r21,2,22,27
	ctx.r25.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3F0) | (ctx.r25.u64 & 0xFFFFFFFFFFFFFC0F);
	// std r11,-168(r1)
	ctx.current_instruction = 0x881A7FFC;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// stb r3,0(r22)
	ctx.current_instruction = 0x881A8000;
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r3.u8);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// srawi r3,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 2;
	// stb r27,-223(r1)
	ctx.current_instruction = 0x881A800C;
	REX_STORE_U8(ctx.r1.u32 + -223, ctx.r27.u8);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// lwz r9,-208(r1)
	ctx.current_instruction = 0x881A8014;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r7,36(r1)
	ctx.current_instruction = 0x881A801C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// rlwimi r22,r29,2,22,27
	ctx.r22.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3F0) | (ctx.r22.u64 & 0xFFFFFFFFFFFFFC0F);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// srawi r20,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 2;
	// srawi r14,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 2;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// rlwinm r16,r31,0,28,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// rlwinm r23,r22,2,24,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xF0;
	// lbz r22,-224(r1)
	ctx.current_instruction = 0x881A8040;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r1.u32 + -224);
	// rlwimi r11,r21,2,22,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r5,r3,0,26,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x30) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFCF);
	// extsb r27,r28
	ctx.r27.s64 = ctx.r28.s8;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// or r6,r23,r6
	ctx.r6.u64 = ctx.r23.u64 | ctx.r6.u64;
	// srawi r3,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r16.s32 >> 2;
	// rlwinm r21,r11,2,24,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xF0;
	// rlwinm r28,r28,0,28,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC;
	// rlwimi r5,r15,0,24,25
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xC0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF3F);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// or r3,r21,r3
	ctx.r3.u64 = ctx.r21.u64 | ctx.r3.u64;
	// stbu r5,1(r9)
	ctx.current_instruction = 0x881A8070;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// srawi r4,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 6;
	// rlwinm r26,r25,2,24,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xF0;
	// or r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 | ctx.r28.u64;
	// rlwinm r23,r19,0,28,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xC;
	// srawi r27,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 4;
	// stb r6,1(r7)
	ctx.current_instruction = 0x881A8088;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r6.u8);
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// lwz r6,44(r1)
	ctx.current_instruction = 0x881A8090;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// or r5,r3,r23
	ctx.r5.u64 = ctx.r3.u64 | ctx.r23.u64;
	// or r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 | ctx.r20.u64;
	// rlwinm r22,r22,0,28,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC;
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// rlwimi r4,r27,0,28,29
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF3);
	// stb r5,1(r6)
	ctx.current_instruction = 0x881A80A8;
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
	// extsb r3,r31
	ctx.r3.s64 = ctx.r31.s8;
	// extsb r31,r19
	ctx.r31.s64 = ctx.r19.s8;
	// or r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 | ctx.r22.u64;
	// rlwimi r4,r30,0,26,27
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x30) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFCF);
	// srawi r3,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 6;
	// stbu r26,1(r10)
	ctx.current_instruction = 0x881A80C0;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r26.u8);
	ctx.r10.u32 = ea;
	// rlwimi r18,r15,2,22,27
	ctx.r18.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x3F0) | (ctx.r18.u64 & 0xFFFFFFFFFFFFFC0F);
	// srawi r31,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 4;
	// extsb r30,r24
	ctx.r30.s64 = ctx.r24.s8;
	// rlwinm r25,r18,2,24,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xF0;
	// srawi r5,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 2;
	// rlwimi r3,r31,0,28,29
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF3);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lwz r10,60(r1)
	ctx.current_instruction = 0x881A80E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// or r27,r25,r14
	ctx.r27.u64 = ctx.r25.u64 | ctx.r14.u64;
	// rlwimi r3,r5,0,26,27
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFCF);
	// lbz r5,-223(r1)
	ctx.current_instruction = 0x881A80EC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + -223);
	// rlwinm r25,r17,0,28,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xC;
	// stw r31,-220(r1)
	ctx.current_instruction = 0x881A80F4;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r31.u32);
	// rlwimi r4,r29,0,24,25
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 | ctx.r25.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r4,1(r10)
	ctx.current_instruction = 0x881A8104;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// lwz r10,68(r1)
	ctx.current_instruction = 0x881A810C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// stbu r27,1(r8)
	ctx.current_instruction = 0x881A8110;
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r27.u8);
	ctx.r8.u32 = ea;
	// rlwimi r30,r5,0,24,25
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC0) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFF3F);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// ld r11,-168(r1)
	ctx.current_instruction = 0x881A811C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// addi r27,r7,1
	ctx.r27.s64 = ctx.r7.s64 + 1;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// lwz r7,-192(r1)
	ctx.current_instruction = 0x881A8128;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// addi r26,r6,1
	ctx.r26.s64 = ctx.r6.s64 + 1;
	// stw r25,60(r1)
	ctx.current_instruction = 0x881A8130;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r25.u32);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// stw r3,-208(r1)
	ctx.current_instruction = 0x881A8138;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// addi r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 1;
	// stw r4,-216(r1)
	ctx.current_instruction = 0x881A8140;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// stw r27,36(r1)
	ctx.current_instruction = 0x881A8144;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r27.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r26,44(r1)
	ctx.current_instruction = 0x881A814C;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r26.u32);
	// stb r9,1(r10)
	ctx.current_instruction = 0x881A8150;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stw r24,68(r1)
	ctx.current_instruction = 0x881A8154;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r24.u32);
	// bdnz 0x881a7e94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A7E94;
	// lwz r22,-200(r1)
	ctx.current_instruction = 0x881A815C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r23,-184(r1)
	ctx.current_instruction = 0x881A8160;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
loc_881A8164:
	// clrlwi r10,r23,30
	ctx.r10.u64 = ctx.r23.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881a83bc
	if (ctx.cr6.eq) goto loc_881A83BC;
	// lbz r10,2(r11)
	ctx.current_instruction = 0x881A8170;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r21,r23,0,30,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// lbz r9,4(r11)
	ctx.current_instruction = 0x881A8178;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r6,1(r11)
	ctx.current_instruction = 0x881A817C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lbz r5,3(r11)
	ctx.current_instruction = 0x881A8184;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r30,r9
	ctx.r30.s64 = ctx.r9.s8;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// lbz r20,5(r11)
	ctx.current_instruction = 0x881A8190;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbz r19,6(r11)
	ctx.current_instruction = 0x881A8198;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// rlwimi r29,r8,0,26,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r28,r30,0,26,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x30) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r10,r6,2,22,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3F0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r9,r5,2,22,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3F0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwinm r5,r29,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF0;
	// rlwinm r29,r28,0,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF0;
	// rlwinm r30,r10,2,24,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xF0;
	// rlwinm r28,r9,2,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xF0;
	// rlwinm r10,r20,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r9,r19,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r8,r20,4,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xC0;
	// rlwinm r6,r19,4,24,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xC0;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 2, ctx.xer);
	// bne cr6,0x881a82d8
	if (!ctx.cr6.eq) goto loc_881A82D8;
	// lbz r21,1(r11)
	ctx.current_instruction = 0x881A81E0;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbz r25,2(r11)
	ctx.current_instruction = 0x881A81E8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// extsb r23,r21
	ctx.r23.s64 = ctx.r21.s8;
	// std r7,-168(r1)
	ctx.current_instruction = 0x881A81F4;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r7.u64);
	// rlwinm r16,r25,0,28,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC;
	// std r4,-192(r1)
	ctx.current_instruction = 0x881A81FC;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r4.u64);
	// extsb r18,r25
	ctx.r18.s64 = ctx.r25.s8;
	// std r31,-216(r1)
	ctx.current_instruction = 0x881A8204;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r31.u64);
	// srawi r25,r23,4
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xF) != 0);
	ctx.r25.s64 = ctx.r23.s32 >> 4;
	// std r3,-208(r1)
	ctx.current_instruction = 0x881A820C;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r3.u64);
	// lbz r19,3(r11)
	ctx.current_instruction = 0x881A8210;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r18,r18,6
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3F) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 6;
	// stb r25,-224(r1)
	ctx.current_instruction = 0x881A8218;
	REX_STORE_U8(ctx.r1.u32 + -224, ctx.r25.u8);
	// srawi r16,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r16.s64 = ctx.r16.s32 >> 2;
	// lbz r20,4(r11)
	ctx.current_instruction = 0x881A8220;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r7,r19,24
	ctx.r7.u64 = ctx.r19.u32 & 0xFF;
	// lbz r17,5(r11)
	ctx.current_instruction = 0x881A8228;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r21,r21,0,28,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xC;
	// rlwinm r14,r20,0,28,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xC;
	// lbz r15,6(r11)
	ctx.current_instruction = 0x881A8234;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// extsb r20,r20
	ctx.r20.s64 = ctx.r20.s8;
	// stb r19,-223(r1)
	ctx.current_instruction = 0x881A823C;
	REX_STORE_U8(ctx.r1.u32 + -223, ctx.r19.u8);
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// lwz r24,68(r1)
	ctx.current_instruction = 0x881A8244;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// srawi r20,r20,6
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3F) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 6;
	// lwz r25,60(r1)
	ctx.current_instruction = 0x881A824C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// extsb r4,r17
	ctx.r4.s64 = ctx.r17.s8;
	// lwz r22,-200(r1)
	ctx.current_instruction = 0x881A8254;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// extsb r3,r15
	ctx.r3.s64 = ctx.r15.s8;
	// lwz r23,-184(r1)
	ctx.current_instruction = 0x881A825C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// rlwimi r7,r20,0,30,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x3) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFC);
	// srawi r14,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 2;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// rlwinm r20,r19,0,28,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xC;
	// srawi r19,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r3.s32 >> 2;
	// or r21,r16,r21
	ctx.r21.u64 = ctx.r16.u64 | ctx.r21.u64;
	// or r20,r14,r20
	ctx.r20.u64 = ctx.r14.u64 | ctx.r20.u64;
	// clrlwi r16,r7,28
	ctx.r16.u64 = ctx.r7.u32 & 0xF;
	// ld r7,-168(r1)
	ctx.current_instruction = 0x881A8280;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// rlwinm r14,r4,0,26,27
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30;
	// ld r4,-192(r1)
	ctx.current_instruction = 0x881A8288;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// rlwinm r19,r19,0,26,27
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x30;
	// ld r3,-208(r1)
	ctx.current_instruction = 0x881A8290;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// or r30,r21,r30
	ctx.r30.u64 = ctx.r21.u64 | ctx.r30.u64;
	// lbz r31,-224(r1)
	ctx.current_instruction = 0x881A8298;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -224);
	// or r29,r16,r29
	ctx.r29.u64 = ctx.r16.u64 | ctx.r29.u64;
	// or r28,r20,r28
	ctx.r28.u64 = ctx.r20.u64 | ctx.r28.u64;
	// rlwimi r31,r18,0,30,31
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x3) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwinm r18,r17,2,26,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0x30;
	// rlwinm r17,r15,2,26,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0x30;
	// clrlwi r15,r31,28
	ctx.r15.u64 = ctx.r31.u32 & 0xF;
	// ld r31,-216(r1)
	ctx.current_instruction = 0x881A82B4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// or r8,r18,r8
	ctx.r8.u64 = ctx.r18.u64 | ctx.r8.u64;
	// or r6,r17,r6
	ctx.r6.u64 = ctx.r17.u64 | ctx.r6.u64;
	// or r5,r15,r5
	ctx.r5.u64 = ctx.r15.u64 | ctx.r5.u64;
	// or r10,r14,r10
	ctx.r10.u64 = ctx.r14.u64 | ctx.r10.u64;
	// or r9,r19,r9
	ctx.r9.u64 = ctx.r19.u64 | ctx.r9.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_881A82D8:
	// stb r5,0(r7)
	ctx.current_instruction = 0x881A82D8;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// clrlwi r5,r23,30
	ctx.r5.u64 = ctx.r23.u32 & 0x3;
	// stb r30,0(r31)
	ctx.current_instruction = 0x881A82E0;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stb r29,0(r3)
	ctx.current_instruction = 0x881A82E4;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// stb r28,0(r4)
	ctx.current_instruction = 0x881A82EC;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r28.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x881a839c
	if (!ctx.cr6.eq) goto loc_881A839C;
	// lbz r5,2(r11)
	ctx.current_instruction = 0x881A82FC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// lbz r29,4(r11)
	ctx.current_instruction = 0x881A8304;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbz r28,1(r11)
	ctx.current_instruction = 0x881A830C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// lbz r21,3(r11)
	ctx.current_instruction = 0x881A8314;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r20,r29
	ctx.r20.s64 = ctx.r29.s8;
	// srawi r18,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r18.s64 = ctx.r8.s32 >> 2;
	// lbz r19,5(r11)
	ctx.current_instruction = 0x881A8320;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// lbzu r8,6(r11)
	ctx.current_instruction = 0x881A8328;
	ea = 6 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r20,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 2;
	// mr r16,r21
	ctx.r16.u64 = ctx.r21.u64;
	// rlwimi r17,r18,0,26,27
	ctx.r17.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x30) | (ctx.r17.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwimi r5,r28,2,22,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwimi r16,r20,0,26,27
	ctx.r16.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x30) | (ctx.r16.u64 & 0xFFFFFFFFFFFFFFCF);
	// rlwinm r20,r17,0,24,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xF0;
	// rlwimi r29,r21,2,22,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3F0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFC0F);
	// extsb r15,r19
	ctx.r15.s64 = ctx.r19.s8;
	// stb r20,1(r7)
	ctx.current_instruction = 0x881A834C;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r20.u8);
	// extsb r14,r8
	ctx.r14.s64 = ctx.r8.s8;
	// rlwinm r5,r5,2,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xF0;
	// srawi r28,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r15.s32 >> 4;
	// rlwinm r7,r29,2,24,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xF0;
	// stb r5,1(r31)
	ctx.current_instruction = 0x881A8360;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r5.u8);
	// srawi r21,r14,4
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0xF) != 0);
	ctx.r21.s64 = ctx.r14.s32 >> 4;
	// rlwinm r5,r8,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stb r7,0(r4)
	ctx.current_instruction = 0x881A836C;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// rlwinm r8,r28,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC;
	// rlwinm r18,r16,0,24,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xF0;
	// rlwinm r7,r21,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xC;
	// rlwinm r31,r19,0,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xC;
	// stb r18,0(r3)
	ctx.current_instruction = 0x881A8380;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r18.u8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r8,r31,r30
	ctx.r8.u64 = ctx.r31.u64 | ctx.r30.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_881A839C:
	// stbu r8,1(r27)
	ctx.current_instruction = 0x881A839C;
	ea = 1 + ctx.r27.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r27.u32 = ea;
	// stbu r6,1(r26)
	ctx.current_instruction = 0x881A83A0;
	ea = 1 + ctx.r26.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r26.u32 = ea;
	// stbu r10,1(r25)
	ctx.current_instruction = 0x881A83A4;
	ea = 1 + ctx.r25.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r25.u32 = ea;
	// stbu r9,1(r24)
	ctx.current_instruction = 0x881A83A8;
	ea = 1 + ctx.r24.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r24.u32 = ea;
	// stw r27,36(r1)
	ctx.current_instruction = 0x881A83AC;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r27.u32);
	// stw r26,44(r1)
	ctx.current_instruction = 0x881A83B0;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r26.u32);
	// stw r25,60(r1)
	ctx.current_instruction = 0x881A83B4;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r25.u32);
	// stw r24,68(r1)
	ctx.current_instruction = 0x881A83B8;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r24.u32);
loc_881A83BC:
	// lwz r10,-180(r1)
	ctx.current_instruction = 0x881A83BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r4,-220(r1)
	ctx.current_instruction = 0x881A83C8;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r4.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r3,r22,r3
	ctx.r3.u64 = ctx.r22.u64 + ctx.r3.u64;
	// add r4,r22,r4
	ctx.r4.u64 = ctx.r22.u64 + ctx.r4.u64;
	// stw r10,-180(r1)
	ctx.current_instruction = 0x881A83D8;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r3,-208(r1)
	ctx.current_instruction = 0x881A83DC;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// stw r4,-216(r1)
	ctx.current_instruction = 0x881A83E0;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// bne 0x881a7e84
	if (!ctx.cr0.eq) goto loc_881A7E84;
loc_881A83E8:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C3AB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C3AB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C3AB8) {
			switch (rex_dispatch_address) {
				case 0x881C3AC0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C3AB8;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x881C3AC0: goto loc_881C3AC0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881C3AC0;
	__savegprlr_27(ctx, base);
loc_881C3AC0:
	// li r8,8
	ctx.r8.s64 = 8;
	// subf r7,r3,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// addi r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 2;
	// addi r27,r7,-2
	ctx.r27.s64 = ctx.r7.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r28,255
	ctx.r28.s64 = 255;
loc_881C3AE0:
	// lhz r8,-4(r11)
	ctx.current_instruction = 0x881C3AE0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lbzx r7,r9,r27
	ctx.current_instruction = 0x881C3AE4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r27.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r4,-2(r11)
	ctx.current_instruction = 0x881C3AEC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	ctx.current_instruction = 0x881C3AF0;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r29,2(r11)
	ctx.current_instruction = 0x881C3AF4;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lbz r5,-1(r10)
	ctx.current_instruction = 0x881C3B00;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// lbz r3,0(r10)
	ctx.current_instruction = 0x881C3B08;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r30,1(r10)
	ctx.current_instruction = 0x881C3B0C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// add r29,r5,r7
	ctx.r29.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r7,r30,r31
	ctx.r7.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x881c3b34
	if (!ctx.cr6.gt) goto loc_881C3B34;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & ctx.r28.u64;
loc_881C3B34:
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 255, ctx.xer);
	// ble cr6,0x881c3b48
	if (!ctx.cr6.gt) goto loc_881C3B48;
	// rlwinm r4,r29,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// and r29,r4,r28
	ctx.r29.u64 = ctx.r4.u64 & ctx.r28.u64;
loc_881C3B48:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// ble cr6,0x881c3b5c
	if (!ctx.cr6.gt) goto loc_881C3B5C;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 & ctx.r28.u64;
loc_881C3B5C:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x881c3b70
	if (!ctx.cr6.gt) goto loc_881C3B70;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ctx.r28.u64;
loc_881C3B70:
	// stb r7,1(r9)
	ctx.current_instruction = 0x881C3B70;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r8,-2(r9)
	ctx.current_instruction = 0x881C3B74;
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r8.u8);
	// stb r5,0(r9)
	ctx.current_instruction = 0x881C3B78;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// stb r29,-1(r9)
	ctx.current_instruction = 0x881C3B7C;
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r29.u8);
	// lhz r5,6(r11)
	ctx.current_instruction = 0x881C3B80;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r3,8(r11)
	ctx.current_instruction = 0x881C3B84;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r29,10(r11)
	ctx.current_instruction = 0x881C3B88;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lbz r8,2(r10)
	ctx.current_instruction = 0x881C3B8C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r31,3(r10)
	ctx.current_instruction = 0x881C3B90;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r4,4(r10)
	ctx.current_instruction = 0x881C3B94;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lhz r7,4(r11)
	ctx.current_instruction = 0x881C3B98;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,5(r10)
	ctx.current_instruction = 0x881C3BA8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r29
	ctx.r5.s64 = ctx.r29.s16;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x881c3bd4
	if (!ctx.cr6.gt) goto loc_881C3BD4;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & ctx.r28.u64;
loc_881C3BD4:
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// ble cr6,0x881c3be8
	if (!ctx.cr6.gt) goto loc_881C3BE8;
	// rlwinm r5,r31,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r31,r5,r28
	ctx.r31.u64 = ctx.r5.u64 & ctx.r28.u64;
loc_881C3BE8:
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// ble cr6,0x881c3bfc
	if (!ctx.cr6.gt) goto loc_881C3BFC;
	// rlwinm r5,r4,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r4,r5,r28
	ctx.r4.u64 = ctx.r5.u64 & ctx.r28.u64;
loc_881C3BFC:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x881c3c10
	if (!ctx.cr6.gt) goto loc_881C3C10;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ctx.r28.u64;
loc_881C3C10:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stb r8,2(r9)
	ctx.current_instruction = 0x881C3C1C;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r8.u8);
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// stb r5,3(r9)
	ctx.current_instruction = 0x881C3C24;
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r5.u8);
	// stb r4,4(r9)
	ctx.current_instruction = 0x881C3C28;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stb r3,5(r9)
	ctx.current_instruction = 0x881C3C30;
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r3.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x881c3ae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C3AE0;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C54F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C54F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C54F8) {
			switch (rex_dispatch_address) {
				case 0x881C5500:
				case 0x881C55C0:
				case 0x881C564C:
				case 0x881C566C:
				case 0x881C56C8:
				case 0x881C572C:
				case 0x881C57B0:
				case 0x881C583C:
				case 0x881C585C:
				case 0x881C58B8:
				case 0x881C5914:
				case 0x881C5940:
				case 0x881C59CC:
				case 0x881C5A14:
				case 0x881C5A40:
				case 0x881C5AD4:
				case 0x881C5B1C:
				case 0x881C5B98:
				case 0x881C5BE0:
				case 0x881C5C48:
				case 0x881C5C90:
				case 0x881C5CF4:
				case 0x881C5D3C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C54F8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C5500: goto loc_881C5500;
		case 0x881C55C0: goto loc_881C55C0;
		case 0x881C564C: goto loc_881C564C;
		case 0x881C566C: goto loc_881C566C;
		case 0x881C56C8: goto loc_881C56C8;
		case 0x881C572C: goto loc_881C572C;
		case 0x881C57B0: goto loc_881C57B0;
		case 0x881C583C: goto loc_881C583C;
		case 0x881C585C: goto loc_881C585C;
		case 0x881C58B8: goto loc_881C58B8;
		case 0x881C5914: goto loc_881C5914;
		case 0x881C5940: goto loc_881C5940;
		case 0x881C59CC: goto loc_881C59CC;
		case 0x881C5A14: goto loc_881C5A14;
		case 0x881C5A40: goto loc_881C5A40;
		case 0x881C5AD4: goto loc_881C5AD4;
		case 0x881C5B1C: goto loc_881C5B1C;
		case 0x881C5B98: goto loc_881C5B98;
		case 0x881C5BE0: goto loc_881C5BE0;
		case 0x881C5C48: goto loc_881C5C48;
		case 0x881C5C90: goto loc_881C5C90;
		case 0x881C5CF4: goto loc_881C5CF4;
		case 0x881C5D3C: goto loc_881C5D3C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x881C5500;
	__savegprlr_16(ctx, base);
loc_881C5500:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x881C5500;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.current_instruction = 0x881C5504;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r30,0(r4)
	ctx.current_instruction = 0x881C550C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r27,4(r4)
	ctx.current_instruction = 0x881C5514;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r25,28(r4)
	ctx.current_instruction = 0x881C551C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// lwz r24,32(r4)
	ctx.current_instruction = 0x881C5524;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x881C552C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r19,316(r3)
	ctx.current_instruction = 0x881C5534;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// lwz r18,320(r3)
	ctx.current_instruction = 0x881C553C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// beq cr6,0x881c5704
	if (ctx.cr6.eq) goto loc_881C5704;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c5558
	if (!ctx.cr6.eq) goto loc_881C5558;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	ctx.current_instruction = 0x881C5550;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881c5688
	goto loc_881C5688;
loc_881C5558:
	// lbz r4,8(r30)
	ctx.current_instruction = 0x881C5558;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881C555C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r30)
	ctx.current_instruction = 0x881C5564;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r28
	ctx.current_instruction = 0x881C5574;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881c5644
	if (ctx.cr6.lt) goto loc_881C5644;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C5584;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881C5594;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881C559C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881c563c
	if (!ctx.cr6.lt) goto loc_881C563C;
loc_881C55A4:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881C55A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881C55A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881c55d0
	if (ctx.cr6.lt) goto loc_881C55D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881C55C0;
	sub_88156440(ctx, base);
loc_881C55C0:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881c55a4
	if (ctx.cr6.eq) goto loc_881C55A4;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881c5684
	goto loc_881C5684;
loc_881C55D0:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881C55D0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881C55D8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881C55E0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881C55E4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881C55EC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881C55F0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C55F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881C55FC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881C5604;
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
	ctx.current_instruction = 0x881C5620;
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
	ctx.current_instruction = 0x881C5638;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881C563C:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881c5684
	goto loc_881C5684;
loc_881C5644:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881C564C;
	sub_88156500(ctx, base);
loc_881C564C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
loc_881C5654:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881C5654;
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
	ctx.lr = 0x881C566C;
	sub_88156500(ctx, base);
loc_881C566C:
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881C5674;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881c5654
	if (ctx.cr6.lt) goto loc_881C5654;
loc_881C5684:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_881C5688:
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x881c56a0
	if (!ctx.cr6.eq) goto loc_881C56A0;
loc_881C5694:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_881C56A0:
	// ld r10,0(r31)
	ctx.current_instruction = 0x881C56A0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x881C56A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	ctx.current_instruction = 0x881C56B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	ctx.current_instruction = 0x881C56B8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881c56c8
	if (!ctx.cr0.lt) goto loc_881C56C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C56C8;
	sub_88156678(ctx, base);
loc_881C56C8:
	// lbzx r11,r30,r25
	ctx.current_instruction = 0x881C56C8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// neg r9,r29
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r29.u64);
	// lbzx r27,r30,r24
	ctx.current_instruction = 0x881C56D0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// blt cr6,0x881c56e8
	if (ctx.cr6.lt) goto loc_881C56E8;
	// lwz r10,16(r26)
	ctx.current_instruction = 0x881C56E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// b 0x881c56ec
	goto loc_881C56EC;
loc_881C56E8:
	// lwz r10,12(r26)
	ctx.current_instruction = 0x881C56E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
loc_881C56EC:
	// lbzx r8,r10,r27
	ctx.current_instruction = 0x881C56EC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x881c5d40
	goto loc_881C5D40;
loc_881C5704:
	// ld r10,0(r31)
	ctx.current_instruction = 0x881C5704;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x881C5708;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	ctx.current_instruction = 0x881C5718;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	ctx.current_instruction = 0x881C571C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881c572c
	if (!ctx.cr0.lt) goto loc_881C572C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C572C;
	sub_88156678(ctx, base);
loc_881C572C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x881c58ec
	if (ctx.cr6.eq) goto loc_881C58EC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c5748
	if (!ctx.cr6.eq) goto loc_881C5748;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	ctx.current_instruction = 0x881C5740;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881c5878
	goto loc_881C5878;
loc_881C5748:
	// lbz r4,8(r30)
	ctx.current_instruction = 0x881C5748;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881C574C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r30)
	ctx.current_instruction = 0x881C5754;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r28
	ctx.current_instruction = 0x881C5764;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881c5834
	if (ctx.cr6.lt) goto loc_881C5834;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C5774;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// stw r8,8(r31)
	ctx.current_instruction = 0x881C5784;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// std r7,0(r31)
	ctx.current_instruction = 0x881C578C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// bge cr6,0x881c582c
	if (!ctx.cr6.lt) goto loc_881C582C;
loc_881C5794:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881C5794;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881C5798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881c57c0
	if (ctx.cr6.lt) goto loc_881C57C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881C57B0;
	sub_88156440(ctx, base);
loc_881C57B0:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881c5794
	if (ctx.cr6.eq) goto loc_881C5794;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881c5874
	goto loc_881C5874;
loc_881C57C0:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881C57C0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x881C57C8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881C57D0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881C57D4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881C57DC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881C57E0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C57E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881C57EC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881C57F4;
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
	ctx.current_instruction = 0x881C5810;
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
	ctx.current_instruction = 0x881C5828;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881C582C:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881c5874
	goto loc_881C5874;
loc_881C5834:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881C583C;
	sub_88156500(ctx, base);
loc_881C583C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
loc_881C5844:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881C5844;
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
	ctx.lr = 0x881C585C;
	sub_88156500(ctx, base);
loc_881C585C:
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881C5864;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881c5844
	if (ctx.cr6.lt) goto loc_881C5844;
loc_881C5874:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_881C5878:
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x881c5694
	if (ctx.cr6.eq) goto loc_881C5694;
	// ld r10,0(r31)
	ctx.current_instruction = 0x881C5884;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x881C5888;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lbzx r8,r30,r25
	ctx.current_instruction = 0x881C588C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// rldicr r7,r10,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r28,r30,r24
	ctx.current_instruction = 0x881C5898;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// extsb r29,r8
	ctx.r29.s64 = ctx.r8.s8;
	// std r7,0(r31)
	ctx.current_instruction = 0x881C58A0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// rldicl r27,r10,1,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r31)
	ctx.current_instruction = 0x881C58A8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881c58b8
	if (!ctx.cr0.lt) goto loc_881C58B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C58B8;
	sub_88156678(ctx, base);
loc_881C58B8:
	// lwz r10,1936(r22)
	ctx.current_instruction = 0x881C58B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 1936);
	// neg r9,r27
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r27.u64);
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x881c58d0
	if (ctx.cr6.lt) goto loc_881C58D0;
	// lwz r11,24(r26)
	ctx.current_instruction = 0x881C58C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// b 0x881c58d4
	goto loc_881C58D4;
loc_881C58D0:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x881C58D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
loc_881C58D4:
	// lbzx r11,r11,r29
	ctx.current_instruction = 0x881C58D4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// xor r11,r29,r9
	ctx.r11.u64 = ctx.r29.u64 ^ ctx.r9.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x881c5d40
	goto loc_881C5D40;
loc_881C58EC:
	// ld r10,0(r31)
	ctx.current_instruction = 0x881C58EC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x881C58F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	ctx.current_instruction = 0x881C5900;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	ctx.current_instruction = 0x881C5904;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881c5914
	if (!ctx.cr0.lt) goto loc_881C5914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5914;
	sub_88156678(ctx, base);
loc_881C5914:
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r30.u64;
	// lwz r9,15536(r22)
	ctx.current_instruction = 0x881C5918;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 15536);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// and r21,r8,r23
	ctx.r21.u64 = ctx.r8.u64 & ctx.r23.u64;
	// blt cr6,0x881c5be8
	if (ctx.cr6.lt) goto loc_881C5BE8;
	// lwz r11,1948(r22)
	ctx.current_instruction = 0x881C592C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 1948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c5948
	if (ctx.cr6.eq) goto loc_881C5948;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x881b8060
	ctx.lr = 0x881C5940;
	sub_881B8060(ctx, base);
loc_881C5940:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1948(r22)
	ctx.current_instruction = 0x881C5944;
	REX_STORE_U32(ctx.r22.u32 + 1948, ctx.r11.u32);
loc_881C5948:
	// lwz r29,84(r22)
	ctx.current_instruction = 0x881C5948;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r22.u32 + 84);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,1956(r22)
	ctx.current_instruction = 0x881C5950;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r22.u32 + 1956);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881C5958;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881c596c
	if (!ctx.cr6.gt) goto loc_881C596C;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x881c5a18
	goto loc_881C5A18;
loc_881C596C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c597c
	if (!ctx.cr6.eq) goto loc_881C597C;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x881c5a18
	goto loc_881C5A18;
loc_881C597C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c59dc
	if (!ctx.cr6.gt) goto loc_881C59DC;
loc_881C5984:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c59dc
	if (ctx.cr6.eq) goto loc_881C59DC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.current_instruction = 0x881C5990;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
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
	// stw r3,8(r29)
	ctx.current_instruction = 0x881C59B4;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r29)
	ctx.current_instruction = 0x881C59BC;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// bge 0x881c59cc
	if (!ctx.cr0.lt) goto loc_881C59CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881C59CC;
	sub_88156678(ctx, base);
loc_881C59CC:
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881C59CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c5984
	if (ctx.cr6.gt) goto loc_881C5984;
loc_881C59DC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r29)
	ctx.current_instruction = 0x881C59E0;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
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
	// stw r6,8(r29)
	ctx.current_instruction = 0x881C59F8;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r29)
	ctx.current_instruction = 0x881C5A04;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r4.u64);
	// bge 0x881c5a14
	if (!ctx.cr0.lt) goto loc_881C5A14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5A14;
	sub_88156678(ctx, base);
loc_881C5A14:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_881C5A18:
	// lwz r3,84(r22)
	ctx.current_instruction = 0x881C5A18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881C5A1C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881C5A20;
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
	ctx.current_instruction = 0x881C5A30;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881C5A34;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881c5a40
	if (!ctx.cr0.lt) goto loc_881C5A40;
	// bl 0x88156678
	ctx.lr = 0x881C5A40;
	sub_88156678(ctx, base);
loc_881C5A40:
	// lwz r29,84(r22)
	ctx.current_instruction = 0x881C5A40;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r22.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r30,1952(r22)
	ctx.current_instruction = 0x881C5A48;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r22.u32 + 1952);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881C5A50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881c5b28
	if (ctx.cr6.eq) goto loc_881C5B28;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x881c5a70
	if (!ctx.cr6.gt) goto loc_881C5A70;
	// li r11,0
	ctx.r11.s64 = 0;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x881c5d40
	goto loc_881C5D40;
loc_881C5A70:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c5a84
	if (!ctx.cr6.eq) goto loc_881C5A84;
	// li r11,0
	ctx.r11.s64 = 0;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x881c5d40
	goto loc_881C5D40;
loc_881C5A84:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c5ae4
	if (!ctx.cr6.gt) goto loc_881C5AE4;
loc_881C5A8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c5ae4
	if (ctx.cr6.eq) goto loc_881C5AE4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.current_instruction = 0x881C5A98;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
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
	// stw r3,8(r29)
	ctx.current_instruction = 0x881C5ABC;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r29)
	ctx.current_instruction = 0x881C5AC4;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// bge 0x881c5ad4
	if (!ctx.cr0.lt) goto loc_881C5AD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5AD4;
	sub_88156678(ctx, base);
loc_881C5AD4:
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881C5AD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c5a8c
	if (ctx.cr6.gt) goto loc_881C5A8C;
loc_881C5AE4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r29)
	ctx.current_instruction = 0x881C5AE8;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
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
	// stw r6,8(r29)
	ctx.current_instruction = 0x881C5B00;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r29)
	ctx.current_instruction = 0x881C5B0C;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r4.u64);
	// bge 0x881c5b1c
	if (!ctx.cr0.lt) goto loc_881C5B1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5B1C;
	sub_88156678(ctx, base);
loc_881C5B1C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// neg r10,r30
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r30.u64);
	// b 0x881c5d40
	goto loc_881C5D40;
loc_881C5B28:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x881c5b38
	if (!ctx.cr6.gt) goto loc_881C5B38;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x881c5d40
	goto loc_881C5D40;
loc_881C5B38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c5b48
	if (!ctx.cr6.eq) goto loc_881C5B48;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x881c5d40
	goto loc_881C5D40;
loc_881C5B48:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c5ba8
	if (!ctx.cr6.gt) goto loc_881C5BA8;
loc_881C5B50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c5ba8
	if (ctx.cr6.eq) goto loc_881C5BA8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.current_instruction = 0x881C5B5C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
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
	// stw r3,8(r29)
	ctx.current_instruction = 0x881C5B80;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r29)
	ctx.current_instruction = 0x881C5B88;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// bge 0x881c5b98
	if (!ctx.cr0.lt) goto loc_881C5B98;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5B98;
	sub_88156678(ctx, base);
loc_881C5B98:
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881C5B98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c5b50
	if (ctx.cr6.gt) goto loc_881C5B50;
loc_881C5BA8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r29)
	ctx.current_instruction = 0x881C5BAC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
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
	// stw r6,8(r29)
	ctx.current_instruction = 0x881C5BC4;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r29)
	ctx.current_instruction = 0x881C5BD0;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r4.u64);
	// bge 0x881c5be0
	if (!ctx.cr0.lt) goto loc_881C5BE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5BE0;
	sub_88156678(ctx, base);
loc_881C5BE0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x881c5d40
	goto loc_881C5D40;
loc_881C5BE8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C5BE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,6
	ctx.r30.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881c5c58
	if (!ctx.cr6.lt) goto loc_881C5C58;
loc_881C5C00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c5c58
	if (ctx.cr6.eq) goto loc_881C5C58;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C5C0C;
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
	ctx.current_instruction = 0x881C5C30;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C5C38;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c5c48
	if (!ctx.cr0.lt) goto loc_881C5C48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5C48;
	sub_88156678(ctx, base);
loc_881C5C48:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C5C48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c5c00
	if (ctx.cr6.gt) goto loc_881C5C00;
loc_881C5C58:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C5C5C;
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
	ctx.current_instruction = 0x881C5C74;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C5C80;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c5c90
	if (!ctx.cr0.lt) goto loc_881C5C90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5C90;
	sub_88156678(ctx, base);
loc_881C5C90:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C5C90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x881c5d04
	if (!ctx.cr6.lt) goto loc_881C5D04;
loc_881C5CAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c5d04
	if (ctx.cr6.eq) goto loc_881C5D04;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C5CB8;
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
	ctx.current_instruction = 0x881C5CDC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C5CE4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c5cf4
	if (!ctx.cr0.lt) goto loc_881C5CF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5CF4;
	sub_88156678(ctx, base);
loc_881C5CF4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C5CF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c5cac
	if (ctx.cr6.gt) goto loc_881C5CAC;
loc_881C5D04:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C5D08;
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
	ctx.current_instruction = 0x881C5D20;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C5D2C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c5d3c
	if (!ctx.cr0.lt) goto loc_881C5D3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C5D3C;
	sub_88156678(ctx, base);
loc_881C5D3C:
	// extsb r10,r30
	ctx.r10.s64 = ctx.r30.s8;
loc_881C5D40:
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881C5D40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c5694
	if (!ctx.cr6.eq) goto loc_881C5694;
	// lwz r11,0(r16)
	ctx.current_instruction = 0x881C5D4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,0(r16)
	ctx.current_instruction = 0x881C5D54;
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bge cr6,0x881c5694
	if (!ctx.cr6.lt) goto loc_881C5694;
	// lbzx r11,r11,r17
	ctx.current_instruction = 0x881C5D60;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x881c5d80
	if (ctx.cr6.lt) goto loc_881C5D80;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881c5d94
	if (!ctx.cr6.eq) goto loc_881C5D94;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_881C5D80:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r20
	ctx.current_instruction = 0x881C5D84;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r20.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sthx r8,r11,r20
	ctx.current_instruction = 0x881C5D8C;
	REX_STORE_U16(ctx.r11.u32 + ctx.r20.u32, ctx.r8.u16);
	// b 0x881c5dc4
	goto loc_881C5DC4;
loc_881C5D94:
	// lwz r9,1764(r22)
	ctx.current_instruction = 0x881C5D94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 1764);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881c5db4
	if (!ctx.cr6.gt) goto loc_881C5DB4;
	// mullw r10,r10,r19
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r19.s32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r18
	ctx.r7.u64 = ctx.r10.u64 + ctx.r18.u64;
	// stwx r7,r9,r8
	ctx.current_instruction = 0x881C5DAC;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x881c5dc4
	goto loc_881C5DC4;
loc_881C5DB4:
	// mullw r8,r10,r19
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r19.s32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r18,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r18.u64;
	// stwx r6,r9,r7
	ctx.current_instruction = 0x881C5DC0;
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
loc_881C5DC4:
	// lwz r11,0(r16)
	ctx.current_instruction = 0x881C5DC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r16)
	ctx.current_instruction = 0x881C5DD0;
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DFE90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DFE90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DFE90) {
			switch (rex_dispatch_address) {
				case 0x881DFE98:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DFE90;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DFE98: goto loc_881DFE98;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881DFE98;
	__savegprlr_14(ctx, base);
loc_881DFE98:
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// stw r6,44(r1)
	ctx.current_instruction = 0x881DFE9C;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// stw r7,52(r1)
	ctx.current_instruction = 0x881DFEA0;
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// addze r19,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r19.s64 = temp.s64;
	// stw r8,60(r1)
	ctx.current_instruction = 0x881DFEAC;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// addic. r23,r8,-31
	ctx.xer.ca = ctx.r8.u32 > 30;
	ctx.r23.s64 = ctx.r8.s64 + -31;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r23,-176(r1)
	ctx.current_instruction = 0x881DFEB4;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r23.u32);
	// ble 0x881e00a4
	if (!ctx.cr0.gt) goto loc_881E00A4;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r18,r7,-3
	ctx.r18.s64 = ctx.r7.s64 + -3;
	// li r22,0
	ctx.r22.s64 = 0;
	// add r20,r5,r11
	ctx.r20.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r21,r5,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
loc_881DFED0:
	// rlwinm r11,r24,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFC;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x881dffdc
	if (!ctx.cr6.gt) goto loc_881DFFDC;
	// addi r11,r19,-2
	ctx.r11.s64 = ctx.r19.s64 + -2;
	// add r25,r22,r4
	ctx.r25.u64 = ctx.r22.u64 + ctx.r4.u64;
	// rlwinm r23,r11,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_881DFEF0:
	// addi r27,r10,32
	ctx.r27.s64 = ctx.r10.s64 + 32;
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x881dffc8
	if (!ctx.cr6.lt) goto loc_881DFFC8;
	// rlwinm r9,r19,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r19,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r19,r9
	ctx.r9.u64 = ctx.r19.u64 + ctx.r9.u64;
	// rlwinm r26,r9,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_881DFF10:
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881DFF10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzux r9,r11,r5
	ctx.current_instruction = 0x881DFF14;
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// std r4,-168(r1)
	ctx.current_instruction = 0x881DFF1C;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r4.u64);
	// rlwinm r6,r9,0,16,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// or r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 | ctx.r7.u64;
	// lwzux r31,r11,r5
	ctx.current_instruction = 0x881DFF2C;
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r31.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwimi r17,r9,0,8,15
	ctx.r17.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF0000) | (ctx.r17.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwinm r6,r6,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r30,r31,0,24,7
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFF0000FF;
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// or r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 | ctx.r30.u64;
	// lwzux r30,r11,r5
	ctx.current_instruction = 0x881DFF44;
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r30.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r17,r17,24,16,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 24) & 0xFFFF;
	// mr r15,r31
	ctx.r15.u64 = ctx.r31.u64;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
	// rlwimi r16,r30,8,0,15
	ctx.r16.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000) | (ctx.r16.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r14,r6,24,8,31
	ctx.r14.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF) | (ctx.r14.u64 & 0xFFFFFFFFFF000000);
	// rlwinm r6,r30,8,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF000000;
	// stwux r14,r10,r26
	ctx.current_instruction = 0x881DFF60;
	ea = ctx.r10.u32 + ctx.r26.u32;
	REX_STORE_U32(ea, ctx.r14.u32);
	ctx.r10.u32 = ea;
	// rlwinm r16,r16,0,0,23
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFF00;
	// or r6,r17,r6
	ctx.r6.u64 = ctx.r17.u64 | ctx.r6.u64;
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r29.u64;
	// rlwinm r31,r31,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// subf r4,r29,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r29.u64;
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// rlwimi r15,r30,8,0,23
	ctx.r15.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r15.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r30,r9,0,16,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwimi r7,r16,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// or r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 | ctx.r31.u64;
	// subf r9,r29,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r29.u64;
	// rlwimi r14,r15,8,0,23
	ctx.r14.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r14.u64 & 0xFFFFFFFF000000FF);
	// stw r6,0(r10)
	ctx.current_instruction = 0x881DFF94;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// or r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 | ctx.r30.u64;
	// rlwimi r8,r14,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r4)
	ctx.current_instruction = 0x881DFFA4;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// ld r4,-168(r1)
	ctx.current_instruction = 0x881DFFA8;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r8,0(r9)
	ctx.current_instruction = 0x881DFFB0;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x881dff10
	if (ctx.cr6.lt) goto loc_881DFF10;
	// lwz r8,60(r1)
	ctx.current_instruction = 0x881DFFBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// lwz r7,52(r1)
	ctx.current_instruction = 0x881DFFC0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r6,44(r1)
	ctx.current_instruction = 0x881DFFC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
loc_881DFFC8:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 + ctx.r10.u64;
	// cmpw cr6,r28,r18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x881dfef0
	if (ctx.cr6.lt) goto loc_881DFEF0;
	// lwz r23,-176(r1)
	ctx.current_instruction = 0x881DFFD8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_881DFFDC:
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e0084
	if (!ctx.cr6.lt) goto loc_881E0084;
	// addi r25,r24,32
	ctx.r25.s64 = ctx.r24.s64 + 32;
	// mullw r26,r28,r6
	ctx.r26.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r6.s32);
loc_881DFFEC:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r25
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x881e0074
	if (!ctx.cr6.lt) goto loc_881E0074;
	// subf r10,r24,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r24.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r11,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r11.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r29,r11,r20
	ctx.r29.u64 = ctx.r20.u64 - ctx.r11.u64;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// add r10,r22,r28
	ctx.r10.u64 = ctx.r22.u64 + ctx.r28.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r31,r29,r4
	ctx.r31.u64 = ctx.r29.u64 + ctx.r4.u64;
loc_881E0030:
	// lbzux r27,r31,r11
	ctx.current_instruction = 0x881E0030;
	ea = ctx.r31.u32 + ctx.r11.u32;
	ctx.r27.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// add r17,r26,r30
	ctx.r17.u64 = ctx.r26.u64 + ctx.r30.u64;
	// lbzux r29,r9,r11
	ctx.current_instruction = 0x881E0038;
	ea = ctx.r9.u32 + ctx.r11.u32;
	ctx.r29.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lbzx r16,r10,r5
	ctx.current_instruction = 0x881E0040;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// srawi r17,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 2;
	// rlwimi r29,r27,8,16,23
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFF00) | (ctx.r29.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r15,0(r10)
	ctx.current_instruction = 0x881E004C;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addze r27,r17
	temp.s64 = ctx.r17.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r17.u32;
	ctx.r27.s64 = temp.s64;
	// rlwinm r29,r29,8,8,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFF00;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// or r29,r29,r16
	ctx.r29.u64 = ctx.r29.u64 | ctx.r16.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r15
	ctx.r29.u64 = ctx.r29.u64 | ctx.r15.u64;
	// stwx r29,r27,r3
	ctx.current_instruction = 0x881E006C;
	REX_STORE_U32(ctx.r27.u32 + ctx.r3.u32, ctx.r29.u32);
	// bdnz 0x881e0030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E0030;
loc_881E0074:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r26,r26,r6
	ctx.r26.u64 = ctx.r26.u64 + ctx.r6.u64;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881dffec
	if (ctx.cr6.lt) goto loc_881DFFEC;
loc_881E0084:
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r24,32
	ctx.r11.s64 = ctx.r24.s64 + 32;
	// add r22,r22,r10
	ctx.r22.u64 = ctx.r22.u64 + ctx.r10.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// add r21,r10,r21
	ctx.r21.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r20,r10,r20
	ctx.r20.u64 = ctx.r10.u64 + ctx.r20.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x881dfed0
	if (ctx.cr6.lt) goto loc_881DFED0;
loc_881E00A4:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881e00f4
	if (!ctx.cr6.gt) goto loc_881E00F4;
loc_881E00B0:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881e00e4
	if (!ctx.cr6.lt) goto loc_881E00E4;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// subf r9,r24,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r24.u64;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_881E00D4:
	// lbzux r9,r11,r5
	ctx.current_instruction = 0x881E00D4;
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbx r9,r3,r10
	ctx.current_instruction = 0x881E00D8;
	REX_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881e00d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E00D4;
loc_881E00E4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881e00b0
	if (ctx.cr6.lt) goto loc_881E00B0;
loc_881E00F4:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E4210) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E4210;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E4210) {
			switch (rex_dispatch_address) {
				case 0x881E4218:
				case 0x881E46D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E4210;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E4218: goto loc_881E4218;
		case 0x881E46D0: goto loc_881E46D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881E4218;
	__savegprlr_14(ctx, base);
loc_881E4218:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x881E4218;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r1)
	ctx.current_instruction = 0x881E421C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// stw r9,308(r1)
	ctx.current_instruction = 0x881E4224;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// rlwinm r9,r6,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// stw r6,284(r1)
	ctx.current_instruction = 0x881E4230;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// srawi r6,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
	// mullw r11,r6,r17
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r17.s32);
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// add r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881e4300
	if (!ctx.cr6.gt) goto loc_881E4300;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// rlwinm r3,r28,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_881E4298:
	// addi r28,r7,-1
	ctx.r28.s64 = ctx.r7.s64 + -1;
	// lvrx128 v63,r25,r7
	temp.u32 = ctx.r25.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r4,16
	ctx.r27.s64 = ctx.r4.s64 + 16;
	// vor128 v11,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lvrx128 v61,r31,r28
	temp.u32 = ctx.r31.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrghb v9,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v6,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v5,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v3,v6,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v5,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v11,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmrghb v1,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v31,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvlx v1,0,r4
	ctx.current_instruction = 0x881E42E8;
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvrx v1,r4,r31
	ctx.current_instruction = 0x881E42EC;
	ea = ctx.r4.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v1.u8[i]);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stvlx v31,0,r27
	ctx.current_instruction = 0x881E42F4;
	ea = ctx.r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// stvrx v31,r27,r31
	ctx.current_instruction = 0x881E42F8;
	ea = ctx.r27.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v31.u8[i]);
	// bdnz 0x881e4298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E4298;
loc_881E4300:
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x881e4350
	if (!ctx.cr6.lt) goto loc_881E4350;
	// subf r4,r11,r18
	ctx.r4.u64 = ctx.r18.u64 - ctx.r11.u64;
	// add r7,r26,r30
	ctx.r7.u64 = ctx.r26.u64 + ctx.r30.u64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// addi r27,r5,1
	ctx.r27.s64 = ctx.r5.s64 + 1;
	// rlwinm r4,r9,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_881E4328:
	// lbzx r9,r3,r30
	ctx.current_instruction = 0x881E4328;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzu r4,1(r7)
	ctx.current_instruction = 0x881E4330;
	ea = 1 + ctx.r7.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stbx r9,r11,r5
	ctx.current_instruction = 0x881E433C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// rlwinm r9,r4,31,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0xFF;
	// stbx r9,r27,r11
	ctx.current_instruction = 0x881E4344;
	REX_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x881e4328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E4328;
loc_881E4350:
	// lbzx r9,r3,r30
	ctx.current_instruction = 0x881E4350;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r4,324(r1)
	ctx.current_instruction = 0x881E4358;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// add r27,r30,r17
	ctx.r27.u64 = ctx.r30.u64 + ctx.r17.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// stbx r9,r11,r5
	ctx.current_instruction = 0x881E4364;
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// stb r9,1(r7)
	ctx.current_instruction = 0x881E4368;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r9.u8);
	// bge cr6,0x881e46c0
	if (!ctx.cr6.lt) goto loc_881E46C0;
	// subf r11,r4,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subfic r10,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r8.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,80(r1)
	ctx.current_instruction = 0x881E437C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_881E4388:
	// rlwinm r10,r18,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xFFFFFFE0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r19,1
	ctx.r19.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881e4554
	if (!ctx.cr6.gt) goto loc_881E4554;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// add r4,r29,r8
	ctx.r4.u64 = ctx.r29.u64 + ctx.r8.u64;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r27,1
	ctx.r5.s64 = ctx.r27.s64 + 1;
	// rlwinm r30,r11,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r6,16
	ctx.r10.s64 = ctx.r6.s64 + 16;
	// subf r28,r6,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r26,r6,r29
	ctx.r26.u64 = ctx.r29.u64 - ctx.r6.u64;
	// subf r25,r6,r4
	ctx.r25.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r24,r29,r15
	ctx.r24.u64 = ctx.r15.u64 - ctx.r29.u64;
	// subf r23,r29,r4
	ctx.r23.u64 = ctx.r4.u64 - ctx.r29.u64;
	// addi r19,r30,1
	ctx.r19.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
loc_881E43E4:
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lvlx128 v59,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r31,r5
	temp.u32 = ctx.r31.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r22,r24,r7
	ctx.r22.u64 = ctx.r24.u64 + ctx.r7.u64;
	// vor128 v11,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v57,r24,r7
	temp.u32 = ctx.r24.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r21,r28,r10
	ctx.r21.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lvlx128 v56,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r10,-16
	ctx.r3.s64 = ctx.r10.s64 + -16;
	// lvlx128 v55,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// lvrx128 v54,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrglb v9,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrghb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v53,r31,r22
	temp.u32 = ctx.r31.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r4,r26,r10
	ctx.r4.u64 = ctx.r26.u64 + ctx.r10.u64;
	// vor128 v10,v57,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v52,r20,r21
	temp.u32 = ctx.r20.u32 + ctx.r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v56,v52
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// add r22,r25,r10
	ctx.r22.u64 = ctx.r25.u64 + ctx.r10.u64;
	// vmrglb v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v3,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrghb v9,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v2,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v1,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v31,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v30,v3,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v2,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v28,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v27,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus v6,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v25,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v24,v26,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrghb v7,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vaddshs v23,v25,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmrglb v12,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrghb v22,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v21,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx v7,0,r3
	ctx.current_instruction = 0x881E4498;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vmrglb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvrx v7,r3,r31
	ctx.current_instruction = 0x881E44A0;
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v7.u8[i]);
	// add r3,r23,r7
	ctx.r3.u64 = ctx.r23.u64 + ctx.r7.u64;
	// stvlx v12,0,r10
	ctx.current_instruction = 0x881E44A8;
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// vor v7,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v21.u8));
	// stvrx v12,r10,r31
	ctx.current_instruction = 0x881E44B0;
	ea = ctx.r10.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// vor v12,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v22.u8));
	// vaddshs v31,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v3,v24,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v20,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v19,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v18,v27,v7
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v28,v12
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v16,v20,v7
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
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
	// vaddshs v7,v23,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v2,v11,v15
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v1,v10,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v30,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vpkshus128 v51,v12,v14
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v25,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsrah v29,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
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
	// vsrah v27,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v24,v30,v6
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v23,v8,v25
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// stvlx128 v51,r0,r7
	ctx.current_instruction = 0x881E4510;
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// vpkshus128 v50,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// stvrx128 v51,r7,r31
	ctx.current_instruction = 0x881E4518;
	ea = ctx.r7.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// vpkshus128 v49,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v22,v9,v24
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vsrah v21,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v50,r26,r10
	ctx.current_instruction = 0x881E452C;
	ea = ctx.r26.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvrx128 v50,r4,r31
	ctx.current_instruction = 0x881E4530;
	ea = ctx.r4.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
	// stvlx128 v49,r23,r7
	ctx.current_instruction = 0x881E4534;
	ea = ctx.r23.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// stvrx128 v49,r3,r31
	ctx.current_instruction = 0x881E453C;
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v49.u8[i]);
	// vpkshus128 v48,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// stvlx128 v48,r25,r10
	ctx.current_instruction = 0x881E4544;
	ea = ctx.r25.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvrx128 v48,r22,r31
	ctx.current_instruction = 0x881E454C;
	ea = ctx.r22.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// bdnz 0x881e43e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E43E4;
loc_881E4554:
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x881e4648
	if (!ctx.cr6.lt) goto loc_881E4648;
	// subf r7,r11,r18
	ctx.r7.u64 = ctx.r18.u64 - ctx.r11.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x881E4560;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r29,r8
	ctx.r10.u64 = ctx.r29.u64 + ctx.r8.u64;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// add r7,r19,r27
	ctx.r7.u64 = ctx.r19.u64 + ctx.r27.u64;
	// rlwinm r5,r3,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r22,r10,r4
	ctx.r22.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r21,r15,1
	ctx.r21.s64 = ctx.r15.s64 + 1;
	// addi r20,r6,1
	ctx.r20.s64 = ctx.r6.s64 + 1;
	// add r19,r22,r8
	ctx.r19.u64 = ctx.r22.u64 + ctx.r8.u64;
	// addi r28,r7,-1
	ctx.r28.s64 = ctx.r7.s64 + -1;
	// subf r18,r6,r15
	ctx.r18.u64 = ctx.r15.u64 - ctx.r6.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r17,r6,r29
	ctx.r17.u64 = ctx.r29.u64 - ctx.r6.u64;
	// subf r16,r6,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r6.u64;
loc_881E459C:
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbzx r14,r30,r27
	ctx.current_instruction = 0x881E45A0;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lbzu r10,1(r28)
	ctx.current_instruction = 0x881E45A4;
	ea = 1 + ctx.r28.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbzx r4,r21,r11
	ctx.current_instruction = 0x881E45AC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// rotlwi r24,r14,1
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r14.u32, 1);
	// add r10,r10,r14
	ctx.r10.u64 = ctx.r10.u64 + ctx.r14.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbzx r26,r7,r18
	ctx.current_instruction = 0x881E45BC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r18.u32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rotlwi r25,r4,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stbx r14,r11,r6
	ctx.current_instruction = 0x881E45C8;
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r14.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r26,r26,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// rlwinm r23,r10,1,15,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// stbx r10,r20,r11
	ctx.current_instruction = 0x881E45DC;
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r10.u8);
	// add r26,r4,r26
	ctx.r26.u64 = ctx.r4.u64 + ctx.r26.u64;
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// add r24,r14,r24
	ctx.r24.u64 = ctx.r14.u64 + ctx.r24.u64;
	// add r5,r10,r23
	ctx.r5.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r26,r26,r14
	ctx.r26.u64 = ctx.r26.u64 + ctx.r14.u64;
	// add r25,r25,r10
	ctx.r25.u64 = ctx.r25.u64 + ctx.r10.u64;
	// add r4,r24,r4
	ctx.r4.u64 = ctx.r24.u64 + ctx.r4.u64;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// srawi r26,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 2;
	// srawi r5,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r25.s32 >> 2;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stbx r26,r7,r17
	ctx.current_instruction = 0x881E4620;
	REX_STORE_U8(ctx.r7.u32 + ctx.r17.u32, ctx.r26.u8);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stbx r5,r22,r11
	ctx.current_instruction = 0x881E4628;
	REX_STORE_U8(ctx.r22.u32 + ctx.r11.u32, ctx.r5.u8);
	// stbx r3,r19,r11
	ctx.current_instruction = 0x881E462C;
	REX_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r3.u8);
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r10,r7,r16
	ctx.current_instruction = 0x881E4638;
	REX_STORE_U8(ctx.r7.u32 + ctx.r16.u32, ctx.r10.u8);
	// bdnz 0x881e459c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E459C;
	// lwz r17,308(r1)
	ctx.current_instruction = 0x881E4640;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r18,284(r1)
	ctx.current_instruction = 0x881E4644;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
loc_881E4648:
	// lbzx r7,r11,r15
	ctx.current_instruction = 0x881E4648;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r15.u32);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r26,r30,r27
	ctx.current_instruction = 0x881E4650;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rotlwi r3,r7,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r30,r26,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// add r28,r10,r3
	ctx.r28.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r3,r26,r30
	ctx.r3.u64 = ctx.r26.u64 + ctx.r30.u64;
	// stbx r26,r11,r6
	ctx.current_instruction = 0x881E466C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r26.u8);
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// srawi r7,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 2;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// add r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stbx r7,r11,r29
	ctx.current_instruction = 0x881E468C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u8);
	// stb r7,1(r5)
	ctx.current_instruction = 0x881E4690;
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r7.u8);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r3,r4,r8
	ctx.current_instruction = 0x881E46A0;
	REX_STORE_U8(ctx.r4.u32 + ctx.r8.u32, ctx.r3.u8);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r3,1(r10)
	ctx.current_instruction = 0x881E46AC;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r27,r27,r17
	ctx.r27.u64 = ctx.r27.u64 + ctx.r17.u64;
	// bne 0x881e4388
	if (!ctx.cr0.eq) goto loc_881E4388;
loc_881E46C0:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x881E46D0;
	sub_880547A0(ctx, base);
loc_881E46D0:
	// lbzx r10,r15,r18
	ctx.current_instruction = 0x881E46D0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r18.u32);
	// add r11,r29,r18
	ctx.r11.u64 = ctx.r29.u64 + ctx.r18.u64;
	// stbx r10,r29,r18
	ctx.current_instruction = 0x881E46D8;
	REX_STORE_U8(ctx.r29.u32 + ctx.r18.u32, ctx.r10.u8);
	// stb r10,1(r11)
	ctx.current_instruction = 0x881E46DC;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_82) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE04);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE04;
	ctx.current_instruction = 0x881EEE04;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_107) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEECC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEECC;
	ctx.current_instruction = 0x881EEECC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_122) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF44);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEF44;
	ctx.current_instruction = 0x881EEF44;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_65) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF014);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF014;
	ctx.current_instruction = 0x881EF014;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savefpr_16) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF258);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF258;
	ctx.current_instruction = 0x881EF258;
	// stfd f16,-128(r12)
	ctx.current_instruction = 0x881EF258;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	ctx.current_instruction = 0x881EF25C;
	REX_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	ctx.current_instruction = 0x881EF260;
	REX_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	ctx.current_instruction = 0x881EF264;
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

DEFINE_REX_FUNC(sub_881EF620) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EF620;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EF620) {
			switch (rex_dispatch_address) {
				case 0x881EF660:
				case 0x881EF678:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF620;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EF660: goto loc_881EF660;
		case 0x881EF678: goto loc_881EF678;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EF624;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EF628;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881EF62C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15456
	ctx.r11.s64 = ctx.r11.s64 + 15456;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881ef670
	if (ctx.cr6.lt) goto loc_881EF670;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x881ef670
	if (ctx.cr6.gt) goto loc_881EF670;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x88052218
	ctx.lr = 0x881EF660;
	sub_88052218(ctx, base);
loc_881EF660:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881EF660;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	ctx.current_instruction = 0x881EF668;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x881ef678
	goto loc_881EF678;
loc_881EF670:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x88243680
	ctx.lr = 0x881EF678;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_881EF678:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EF67C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EF684;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F0F60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0F60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0F60) {
			switch (rex_dispatch_address) {
				case 0x881F0F74:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0F60;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0F74: goto loc_881F0F74;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F0F64;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881F0F68;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88051f98
	ctx.lr = 0x881F0F74;
	sub_88051F98(ctx, base);
loc_881F0F74:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881F0F74;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F0F78;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1710) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F1710;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F1710) {
			switch (rex_dispatch_address) {
				case 0x881F1744:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1710;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F1744: goto loc_881F1744;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F1714;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881F1718;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881F171C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x881F1720;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881f1764
	if (ctx.cr0.eq) goto loc_881F1764;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f1764
	if (ctx.cr0.eq) goto loc_881F1764;
	// lwz r3,8(r3)
	ctx.current_instruction = 0x881F173C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x88052278
	ctx.lr = 0x881F1744;
	sub_88052278(ctx, base);
loc_881F1744:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	ctx.current_instruction = 0x881F1748;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	ctx.current_instruction = 0x881F174C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	ctx.current_instruction = 0x881F1750;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881F1754;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r11,12(r31)
	ctx.current_instruction = 0x881F1760;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_881F1764:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F1768;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881F1770;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881FB9D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881FB9D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881FB9D0) {
			switch (rex_dispatch_address) {
				case 0x881FB9D8:
				case 0x881FB9FC:
				case 0x881FBA14:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881FB9D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881FB9D8: goto loc_881FB9D8;
		case 0x881FB9FC: goto loc_881FB9FC;
		case 0x881FBA14: goto loc_881FBA14;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881FB9D8;
	__savegprlr_28(ctx, base);
loc_881FB9D8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881FB9D8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x881937b0
	ctx.lr = 0x881FB9FC;
	sub_881937B0(ctx, base);
loc_881FB9FC:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// bl 0x88193600
	ctx.lr = 0x881FBA14;
	sub_88193600(ctx, base);
loc_881FBA14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881FCBB0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881FCBB0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881FCBB0;
	ctx.current_instruction = 0x881FCBB0;
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

DEFINE_REX_FUNC(sub_8821EC08) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8821EC08);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821EC08;
	ctx.current_instruction = 0x8821EC08;
	PPCRegister temp{};
	uint32_t ea{};
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
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
	// vspltish v3,5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x5)));
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
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x8821ed30
	if (!ctx.cr6.eq) goto loc_8821ED30;
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
	// vperm128 v11,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vperm128 v31,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v11,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v12,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// ble cr6,0x8821ee64
	if (!ctx.cr6.gt) goto loc_8821EE64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
loc_8821EC98:
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
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// vslh v6,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lvx128 v57,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v5,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v29,v6,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// vperm128 v31,v56,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v6,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrghb v8,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v29,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vadduhm v28,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v27,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v12,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vadduhm v26,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v25,v13,v27
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vadduhm v24,v29,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v8,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsrah v23,v8,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvewx128 v55,r0,r10
	ctx.current_instruction = 0x8821ED18;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r10,r5
	ctx.current_instruction = 0x8821ED1C;
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x8821ec98
	if (ctx.cr6.lt) goto loc_8821EC98;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8821ED30:
	// lvx128 v51,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
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
	// lvx128 v52,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v53,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v50,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v54,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vperm128 v5,v49,v50,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v7,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v6,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v8,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v12,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v11,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// ble cr6,0x8821ee64
	if (!ctx.cr6.gt) goto loc_8821EE64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8821ED80:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v5,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v12,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v26,v11,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v46,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// vslh v31,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v48,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v24,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// vperm128 v5,v47,v48,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vslh v25,v11,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v6,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// vslh v22,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
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
	// vslh v19,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v6,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vadduhm v17,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v18,v30,v12
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vor v9,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmrghb v12,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmrglb v11,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vadduhm v16,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v15,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v31,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v29,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v30,v18,v16
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v5,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v17,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v14,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsubshs v25,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vsubshs v27,v13,v14
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v20,v26,v2
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v19,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v18,v22,v2
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v21,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vor128 v3,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vadduhm v31,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v5,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vsrah v16,v31,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v5,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v45,v17,v16
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// stvx128 v45,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x8821ed80
	if (ctx.cr6.lt) goto loc_8821ED80;
loc_8821EE64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88224C08) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88224C08;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88224C08) {
			switch (rex_dispatch_address) {
				case 0x88224C10:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88224C08;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88224C10: goto loc_88224C10;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88224C10;
	__savegprlr_26(ctx, base);
loc_88224C10:
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvlx128 v62,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lvlx128 v61,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r7,r3
	ctx.r31.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lvrx128 v60,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vor128 v12,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvrx128 v56,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lvrx128 v59,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vor128 v11,v62,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvrx128 v54,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r4,r3
	ctx.r31.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lvrx128 v53,r10,r30
	temp.u32 = ctx.r10.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r30,48
	ctx.r30.s64 = 48;
	// lvlx128 v58,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v57,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v52,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r28,64
	ctx.r28.s64 = 64;
	// lvrx128 v51,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r7,r9
	ctx.r31.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lvlx128 v55,r6,r3
	temp.u32 = ctx.r6.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddshs v24,v6,v13
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// lvlx128 v50,r4,r3
	temp.u32 = ctx.r4.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,32
	ctx.r11.s64 = 32;
	// lvx128 v1,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v10,v61,v56
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vor128 v9,v57,v54
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvx128 v28,r29,r30
	ea = (ctx.r29.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v8,v58,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// li r27,80
	ctx.r27.s64 = 80;
	// vor128 v7,v55,v52
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// li r26,96
	ctx.r26.s64 = 96;
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// add r30,r31,r3
	ctx.r30.u64 = ctx.r31.u64 + ctx.r3.u64;
	// vaddshs v23,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lvx128 v27,r29,r28
	ea = (ctx.r29.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v47,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// li r28,112
	ctx.r28.s64 = 112;
	// vmrghb v3,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v30,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// vmrghb v31,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v26,r29,r27
	ea = (ctx.r29.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v22,r29,r26
	ea = (ctx.r29.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v25,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v49,r31,r3
	temp.u32 = ctx.r31.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vpkshus128 v46,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// lvrx128 v48,r10,r30
	temp.u32 = ctx.r10.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vaddshs v21,v3,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvx128 v16,r29,r28
	ea = (ctx.r29.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v20,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// stvewx128 v47,r0,r3
	ctx.current_instruction = 0x88224D1C;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v19,v31,v27
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// stvewx128 v47,r0,r11
	ctx.current_instruction = 0x88224D24;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v18,v29,v26
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v17,v25,v22
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vpkshus128 v45,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vor128 v15,v49,v48
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vpkshus128 v44,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// stvewx128 v46,r3,r5
	ctx.current_instruction = 0x88224D3C;
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v43,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vpkshus128 v42,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// stvewx128 v46,r11,r5
	ctx.current_instruction = 0x88224D48;
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vmrghb v14,v0,v15
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v0,v14,v16
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvewx128 v45,r3,r8
	ctx.current_instruction = 0x88224D58;
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v45,r11,r8
	ctx.current_instruction = 0x88224D5C;
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r3,r7
	ctx.current_instruction = 0x88224D60;
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r11,r7
	ctx.current_instruction = 0x88224D64;
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvewx128 v43,r3,r9
	ctx.current_instruction = 0x88224D6C;
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r11,r9
	ctx.current_instruction = 0x88224D70;
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r3,r6
	ctx.current_instruction = 0x88224D74;
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r11,r6
	ctx.current_instruction = 0x88224D78;
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r3,r4
	ctx.current_instruction = 0x88224D7C;
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r11,r4
	ctx.current_instruction = 0x88224D80;
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r3,r31
	ctx.current_instruction = 0x88224D84;
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r31
	ctx.current_instruction = 0x88224D88;
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88228F58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88228F58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88228F58) {
			switch (rex_dispatch_address) {
				case 0x88228F60:
				case 0x88228FB4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88228F58;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88228F60: goto loc_88228F60;
		case 0x88228FB4: goto loc_88228FB4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88228F60;
	__savegprlr_27(ctx, base);
loc_88228F60:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x88228F60;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1152(r7)
	ctx.current_instruction = 0x88228F64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1152);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltish v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r31,1164(r7)
	ctx.current_instruction = 0x88228F78;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r28,260(r1)
	ctx.current_instruction = 0x88228F80;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,96(r1)
	ctx.current_instruction = 0x88228F88;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v12,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bl 0x882186f8
	ctx.lr = 0x88228FB4;
	sub_882186F8(ctx, base);
loc_88228FB4:
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v11,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x8)));
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// vspltish v10,-1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// and r9,r5,r27
	ctx.r9.u64 = ctx.r5.u64 & ctx.r27.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r4,r9,3
	ctx.r4.s64 = ctx.r9.s64 + 3;
	// vslh v2,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r6,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x882290b0
	if (!ctx.cr6.eq) goto loc_882290B0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x882291a8
	if (!ctx.cr6.gt) goto loc_882291A8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_88229014:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
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
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
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
	ctx.current_instruction = 0x8822908C;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ctx.current_instruction = 0x88229090;
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bdnz 0x88229014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88229014;
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_882290B0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x882291a8
	if (!ctx.cr6.gt) goto loc_882291A8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_882290C8:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
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
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
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
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bdnz 0x882290c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882290C8;
loc_882291A8:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

