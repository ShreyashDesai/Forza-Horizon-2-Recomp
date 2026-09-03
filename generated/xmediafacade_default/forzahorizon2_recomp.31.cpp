#include "forzahorizon2_funcs.31.h"

DEFINE_REX_FUNC(sub_880502E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880502E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880502E0;
	ctx.current_instruction = 0x880502E0;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,188(r11)
	ctx.current_instruction = 0x880502E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__restgprlr_22) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050880);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x88050880;
	ctx.current_instruction = 0x88050880;
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

DEFINE_REX_FUNC(sub_88051378) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88051378;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88051378) {
			switch (rex_dispatch_address) {
				case 0x88051380:
				case 0x880513A4:
				case 0x880513B0:
				case 0x880513C8:
				case 0x880513D4:
				case 0x880513FC:
				case 0x88051454:
				case 0x880514D8:
				case 0x880515A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88051378;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88051380: goto loc_88051380;
		case 0x880513A4: goto loc_880513A4;
		case 0x880513B0: goto loc_880513B0;
		case 0x880513C8: goto loc_880513C8;
		case 0x880513D4: goto loc_880513D4;
		case 0x880513FC: goto loc_880513FC;
		case 0x88051454: goto loc_88051454;
		case 0x880514D8: goto loc_880514D8;
		case 0x880515A8: goto loc_880515A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88051380;
	__savegprlr_25(ctx, base);
loc_88051380:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88051380;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880513bc
	if (!ctx.cr6.eq) goto loc_880513BC;
	// bl 0x880529c8
	ctx.lr = 0x880513A4;
	sub_880529C8(ctx, base);
loc_880513A4:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	ctx.current_instruction = 0x880513A8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x880513B0;
	sub_880523E8(ctx, base);
loc_880513B0:
	// li r3,22
	ctx.r3.s64 = 22;
loc_880513B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880513BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x880513dc
	if (!ctx.cr6.eq) goto loc_880513DC;
	// bl 0x880529c8
	ctx.lr = 0x880513C8;
	sub_880529C8(ctx, base);
loc_880513C8:
	// li r31,22
	ctx.r31.s64 = 22;
loc_880513CC:
	// stw r31,0(r3)
	ctx.current_instruction = 0x880513CC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x880523e8
	ctx.lr = 0x880513D4;
	sub_880523E8(ctx, base);
loc_880513D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x880513b4
	goto loc_880513B4;
loc_880513DC:
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r31.u64;
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// addme r11,r11
	temp.u8 = (ctx.r11.u32 + 0xFFFFFFFFu < ctx.r11.u32) | (ctx.r11.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88051404
	if (ctx.cr6.gt) goto loc_88051404;
	// bl 0x880529c8
	ctx.lr = 0x880513FC;
	sub_880529C8(ctx, base);
loc_880513FC:
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x880513cc
	goto loc_880513CC;
loc_88051404:
	// extsb. r28,r8
	ctx.r28.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x88051454
	if (ctx.cr0.eq) goto loc_88051454;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8805140C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ble cr6,0x88051454
	if (!ctx.cr6.gt) goto loc_88051454;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8805142C:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x8805142C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8805142c
	if (!ctx.cr6.eq) goto loc_8805142C;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x880527e0
	ctx.lr = 0x88051454;
	sub_880527E0(ctx, base);
loc_88051454:
	// lwz r10,0(r27)
	ctx.current_instruction = 0x88051454;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r26,45
	ctx.r26.s64 = 45;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// bne cr6,0x88051470
	if (!ctx.cr6.eq) goto loc_88051470;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stb r26,0(r30)
	ctx.current_instruction = 0x8805146C;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
loc_88051470:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x880514a0
	if (!ctx.cr6.gt) goto loc_880514A0;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x88051478;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lis r8,-30683
	ctx.r8.s64 = -2010841088;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r11)
	ctx.current_instruction = 0x88051484;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,1032(r8)
	ctx.current_instruction = 0x8805148C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 1032);
	// lwz r9,188(r9)
	ctx.current_instruction = 0x88051490;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 188);
	// lwz r9,0(r9)
	ctx.current_instruction = 0x88051494;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.current_instruction = 0x88051498;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r10)
	ctx.current_instruction = 0x8805149C;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_880514A0:
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x880514c0
	if (!ctx.cr6.eq) goto loc_880514C0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x880514c8
	goto loc_880514C8;
loc_880514C0:
	// subf r11,r31,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_880514C8:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1496
	ctx.r5.s64 = ctx.r11.s64 + 1496;
	// bl 0x880528a0
	ctx.lr = 0x880514D8;
	sub_880528A0(ctx, base);
loc_880514D8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x880515b0
	if (!ctx.cr0.eq) goto loc_880515B0;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x880514f4
	if (ctx.cr6.eq) goto loc_880514F4;
	// li r11,69
	ctx.r11.s64 = 69;
	// stb r11,0(r31)
	ctx.current_instruction = 0x880514F0;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_880514F4:
	// lwz r11,12(r27)
	ctx.current_instruction = 0x880514F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880514FC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x88051580
	if (ctx.cr6.eq) goto loc_88051580;
	// lwz r11,4(r27)
	ctx.current_instruction = 0x88051508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8805151c
	if (!ctx.cr0.lt) goto loc_8805151C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stb r26,0(r10)
	ctx.current_instruction = 0x88051518;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
loc_8805151C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// blt cr6,0x88051548
	if (ctx.cr6.lt) goto loc_88051548;
	// li r7,100
	ctx.r7.s64 = 100;
	// lbz r8,0(r10)
	ctx.current_instruction = 0x8805152C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// divw r7,r11,r7
	ctx.r7.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,100
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(100));
	// stb r9,0(r10)
	ctx.current_instruction = 0x88051540;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
loc_88051548:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x88051574
	if (ctx.cr6.lt) goto loc_88051574;
	// li r7,10
	ctx.r7.s64 = 10;
	// lbz r8,0(r10)
	ctx.current_instruction = 0x88051558;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// divw r7,r11,r7
	ctx.r7.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(10));
	// stb r9,0(r10)
	ctx.current_instruction = 0x8805156C;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
loc_88051574:
	// lbzu r9,1(r10)
	ctx.current_instruction = 0x88051574;
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r11,0(r10)
	ctx.current_instruction = 0x8805157C;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_88051580:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18336(r11)
	ctx.current_instruction = 0x88051584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18336);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880515a8
	if (ctx.cr0.eq) goto loc_880515A8;
	// lbz r11,0(r3)
	ctx.current_instruction = 0x88051590;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x880515a8
	if (!ctx.cr6.eq) goto loc_880515A8;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x880527e0
	ctx.lr = 0x880515A8;
	sub_880527E0(ctx, base);
loc_880515A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880513b4
	goto loc_880513B4;
loc_880515B0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880524c0
	ctx.lr = 0x880515C8;
	sub_880524C0(ctx, base);
}

DEFINE_REX_FUNC(sub_8805ADC8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805ADC8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805ADC8;
	ctx.current_instruction = 0x8805ADC8;
	// lwz r3,592(r3)
	ctx.current_instruction = 0x8805ADC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 592);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// b 0x8805ac00
	sub_8805AC00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805B0B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805B0B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805B0B8;
	ctx.current_instruction = 0x8805B0B8;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32817
	ctx.r4.u64 = ctx.r4.u64 | 32817;
	// b 0x88050340
	sub_88050340(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805B468) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805B468;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805B468) {
			switch (rex_dispatch_address) {
				case 0x8805B470:
				case 0x8805B4B0:
				case 0x8805B4C8:
				case 0x8805B4E4:
				case 0x8805B50C:
				case 0x8805B524:
				case 0x8805B530:
				case 0x8805B548:
				case 0x8805B558:
				case 0x8805B5BC:
				case 0x8805B5D4:
				case 0x8805B5E8:
				case 0x8805B5FC:
				case 0x8805B608:
				case 0x8805B62C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805B468;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805B470: goto loc_8805B470;
		case 0x8805B4B0: goto loc_8805B4B0;
		case 0x8805B4C8: goto loc_8805B4C8;
		case 0x8805B4E4: goto loc_8805B4E4;
		case 0x8805B50C: goto loc_8805B50C;
		case 0x8805B524: goto loc_8805B524;
		case 0x8805B530: goto loc_8805B530;
		case 0x8805B548: goto loc_8805B548;
		case 0x8805B558: goto loc_8805B558;
		case 0x8805B5BC: goto loc_8805B5BC;
		case 0x8805B5D4: goto loc_8805B5D4;
		case 0x8805B5E8: goto loc_8805B5E8;
		case 0x8805B5FC: goto loc_8805B5FC;
		case 0x8805B608: goto loc_8805B608;
		case 0x8805B62C: goto loc_8805B62C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8805B470;
	__savegprlr_27(ctx, base);
loc_8805B470:
	// stfd f31,-56(r1)
	ctx.current_instruction = 0x8805B470;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8805B474;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f31,6800(r11)
	ctx.current_instruction = 0x8805B48C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6800);
	ctx.f31.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8805b4b0
	if (ctx.cr6.eq) goto loc_8805B4B0;
	// lwz r3,56(r30)
	ctx.current_instruction = 0x8805B49C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B4A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.current_instruction = 0x8805B4A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B4B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B4B0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8805b4e4
	if (ctx.cr6.eq) goto loc_8805B4E4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805b4e4
	if (ctx.cr6.lt) goto loc_8805B4E4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88057968
	ctx.lr = 0x8805B4C8;
	sub_88057968(ctx, base);
loc_8805B4C8:
	// lwz r3,60(r30)
	ctx.current_instruction = 0x8805B4C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B4D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.current_instruction = 0x8805B4D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B4E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B4E4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8805b50c
	if (ctx.cr6.eq) goto loc_8805B50C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805b50c
	if (ctx.cr6.lt) goto loc_8805B50C;
	// lwz r3,64(r30)
	ctx.current_instruction = 0x8805B4F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B4FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.current_instruction = 0x8805B500;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B50C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B50C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8805b5bc
	if (ctx.cr6.eq) goto loc_8805B5BC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805b5bc
	if (ctx.cr6.lt) goto loc_8805B5BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88057ae0
	ctx.lr = 0x8805B524;
	sub_88057AE0(ctx, base);
loc_8805B524:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88057af0
	ctx.lr = 0x8805B530;
	sub_88057AF0(ctx, base);
loc_8805B530:
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bne cr6,0x8805b540
	if (!ctx.cr6.eq) goto loc_8805B540;
	// li r29,32
	ctx.r29.s64 = 32;
	// b 0x8805b54c
	goto loc_8805B54C;
loc_8805B540:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88057af0
	ctx.lr = 0x8805B548;
	sub_88057AF0(ctx, base);
loc_8805B548:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8805B54C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r31,r29,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x88057ae8
	ctx.lr = 0x8805B558;
	sub_88057AE8(ctx, base);
loc_8805B558:
	// mullw r9,r3,r31
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// std r8,80(r1)
	ctx.current_instruction = 0x8805B564;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8805B568;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mullw r7,r3,r29
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// fdivs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f31.f64));
	// fctidz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	ctx.current_instruction = 0x8805B590;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8805B594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// andc r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r10.u64;
	// mulli r10,r11,8000
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(8000));
	// divwu r9,r10,r7
	ctx.r9.u64 = uint32_t(ctx.r7.u32 ? ctx.r10.u32 / ctx.r7.u32 : 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// stw r9,332(r30)
	ctx.current_instruction = 0x8805B5B0;
	REX_STORE_U32(ctx.r30.u32 + 332, ctx.r9.u32);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x88067ca0
	ctx.lr = 0x8805B5BC;
	sub_88067CA0(ctx, base);
loc_8805B5BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8805b62c
	if (ctx.cr6.eq) goto loc_8805B62C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805b638
	if (ctx.cr6.lt) goto loc_8805B638;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88057ae0
	ctx.lr = 0x8805B5D4;
	sub_88057AE0(ctx, base);
loc_8805B5D4:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8805b644
	if (!ctx.cr6.eq) goto loc_8805B644;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88057ae8
	ctx.lr = 0x8805B5E8;
	sub_88057AE8(ctx, base);
loc_8805B5E8:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8805b644
	if (!ctx.cr6.eq) goto loc_8805B644;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88057ae0
	ctx.lr = 0x8805B5FC;
	sub_88057AE0(ctx, base);
loc_8805B5FC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88057ae8
	ctx.lr = 0x8805B608;
	sub_88057AE8(ctx, base);
loc_8805B608:
	// mullw r11,r31,r3
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// rlwinm r11,r11,31,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1FFFFFFF;
	// addi r3,r30,140
	ctx.r3.s64 = ctx.r30.s64 + 140;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x88067ca0
	ctx.lr = 0x8805B62C;
	sub_88067CA0(ctx, base);
loc_8805B62C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805b638
	if (ctx.cr6.lt) goto loc_8805B638;
	// stfs f31,336(r30)
	ctx.current_instruction = 0x8805B634;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r30.u32 + 336, temp.u32);
loc_8805B638:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.current_instruction = 0x8805B63C;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8805B644:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.current_instruction = 0x8805B650;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880620D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880620D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880620D8) {
			switch (rex_dispatch_address) {
				case 0x880620EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880620D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880620EC: goto loc_880620EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880620DC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880620E0;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x882436b0
	ctx.lr = 0x880620EC;
	__imp__RtlTryEnterCriticalSection(ctx, base);
loc_880620EC:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r7,r9,16389
	ctx.r7.u64 = ctx.r9.u64 | 16389;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88062104;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880625E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880625E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880625E8) {
			switch (rex_dispatch_address) {
				case 0x8806262C:
				case 0x8806263C:
				case 0x88062648:
				case 0x88062654:
				case 0x88062678:
				case 0x880626AC:
				case 0x880626C0:
				case 0x880626E0:
				case 0x88062710:
				case 0x88062724:
				case 0x88062754:
				case 0x88062778:
				case 0x8806279C:
				case 0x880627C4:
				case 0x880627D8:
				case 0x880627F8:
				case 0x8806281C:
				case 0x88062834:
				case 0x88062850:
				case 0x8806286C:
				case 0x88062888:
				case 0x880628A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880625E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806262C: goto loc_8806262C;
		case 0x8806263C: goto loc_8806263C;
		case 0x88062648: goto loc_88062648;
		case 0x88062654: goto loc_88062654;
		case 0x88062678: goto loc_88062678;
		case 0x880626AC: goto loc_880626AC;
		case 0x880626C0: goto loc_880626C0;
		case 0x880626E0: goto loc_880626E0;
		case 0x88062710: goto loc_88062710;
		case 0x88062724: goto loc_88062724;
		case 0x88062754: goto loc_88062754;
		case 0x88062778: goto loc_88062778;
		case 0x8806279C: goto loc_8806279C;
		case 0x880627C4: goto loc_880627C4;
		case 0x880627D8: goto loc_880627D8;
		case 0x880627F8: goto loc_880627F8;
		case 0x8806281C: goto loc_8806281C;
		case 0x88062834: goto loc_88062834;
		case 0x88062850: goto loc_88062850;
		case 0x8806286C: goto loc_8806286C;
		case 0x88062888: goto loc_88062888;
		case 0x880628A0: goto loc_880628A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880625EC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880625F0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880625F4;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,132(r1)
	ctx.current_instruction = 0x880625FC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88062604;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.current_instruction = 0x88062608;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88062640
	if (ctx.cr6.eq) goto loc_88062640;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88062618;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88062630
	if (ctx.cr6.eq) goto loc_88062630;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8806262C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806262C:
	// lwz r5,132(r1)
	ctx.current_instruction = 0x8806262C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_88062630:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r5)
	ctx.current_instruction = 0x88062634;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 608);
	// bl 0x880cb318
	ctx.lr = 0x8806263C;
	sub_880CB318(ctx, base);
loc_8806263C:
	// lwz r5,132(r1)
	ctx.current_instruction = 0x8806263C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_88062640:
	// lwz r3,572(r5)
	ctx.current_instruction = 0x88062640;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 572);
	// bl 0x880cb840
	ctx.lr = 0x88062648;
	sub_880CB840(ctx, base);
loc_88062648:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88062648;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,568(r11)
	ctx.current_instruction = 0x8806264C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 568);
	// bl 0x880cb840
	ctx.lr = 0x88062654;
	sub_880CB840(ctx, base);
loc_88062654:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88062654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88062660;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8806267c
	if (ctx.cr6.eq) goto loc_8806267C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x88062670;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880cb318
	ctx.lr = 0x88062678;
	sub_880CB318(ctx, base);
loc_88062678:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88062678;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_8806267C:
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8806267C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880626c4
	if (ctx.cr6.eq) goto loc_880626C4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r10)
	ctx.current_instruction = 0x8806268C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880626b0
	if (ctx.cr6.eq) goto loc_880626B0;
	// lwz r11,8(r11)
	ctx.current_instruction = 0x88062698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880626A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880626AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880626AC:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x880626AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_880626B0:
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x880626B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880cb318
	ctx.lr = 0x880626C0;
	sub_880CB318(ctx, base);
loc_880626C0:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x880626C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_880626C4:
	// lwz r10,576(r11)
	ctx.current_instruction = 0x880626C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 576);
	// addi r5,r11,576
	ctx.r5.s64 = ctx.r11.s64 + 576;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880626e4
	if (ctx.cr6.eq) goto loc_880626E4;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x880626D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880cb318
	ctx.lr = 0x880626E0;
	sub_880CB318(ctx, base);
loc_880626E0:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x880626E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_880626E4:
	// lwz r10,580(r11)
	ctx.current_instruction = 0x880626E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 580);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88062728
	if (ctx.cr6.eq) goto loc_88062728;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x880626F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88062714
	if (ctx.cr6.eq) goto loc_88062714;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x88062708;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880cb318
	ctx.lr = 0x88062710;
	sub_880CB318(ctx, base);
loc_88062710:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88062710;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_88062714:
	// addi r5,r11,580
	ctx.r5.s64 = ctx.r11.s64 + 580;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x88062718;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880cb318
	ctx.lr = 0x88062724;
	sub_880CB318(ctx, base);
loc_88062724:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88062724;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_88062728:
	// lwz r10,584(r11)
	ctx.current_instruction = 0x88062728;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880627dc
	if (ctx.cr6.eq) goto loc_880627DC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// lwz r10,16(r10)
	ctx.current_instruction = 0x8806273C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88062758
	if (ctx.cr6.eq) goto loc_88062758;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x8806274C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880cb318
	ctx.lr = 0x88062754;
	sub_880CB318(ctx, base);
loc_88062754:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88062754;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_88062758:
	// lwz r10,584(r11)
	ctx.current_instruction = 0x88062758;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// lwz r10,12(r10)
	ctx.current_instruction = 0x88062760;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8806277c
	if (ctx.cr6.eq) goto loc_8806277C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x88062770;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880cb318
	ctx.lr = 0x88062778;
	sub_880CB318(ctx, base);
loc_88062778:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88062778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_8806277C:
	// lwz r10,584(r11)
	ctx.current_instruction = 0x8806277C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.current_instruction = 0x88062784;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880627a0
	if (ctx.cr6.eq) goto loc_880627A0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x88062794;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880cb318
	ctx.lr = 0x8806279C;
	sub_880CB318(ctx, base);
loc_8806279C:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x8806279C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_880627A0:
	// lwz r10,584(r11)
	ctx.current_instruction = 0x880627A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 584);
	// lwz r10,4(r10)
	ctx.current_instruction = 0x880627A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,80(r1)
	ctx.current_instruction = 0x880627AC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x880627c8
	if (ctx.cr6.eq) goto loc_880627C8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x880627B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880cb318
	ctx.lr = 0x880627C4;
	sub_880CB318(ctx, base);
loc_880627C4:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x880627C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_880627C8:
	// addi r5,r11,584
	ctx.r5.s64 = ctx.r11.s64 + 584;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x880627CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880cb318
	ctx.lr = 0x880627D8;
	sub_880CB318(ctx, base);
loc_880627D8:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x880627D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_880627DC:
	// lwz r10,612(r11)
	ctx.current_instruction = 0x880627DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 612);
	// addi r5,r11,612
	ctx.r5.s64 = ctx.r11.s64 + 612;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88062800
	if (ctx.cr6.eq) goto loc_88062800;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x880627F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880cb318
	ctx.lr = 0x880627F8;
	sub_880CB318(ctx, base);
loc_880627F8:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x880627F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_88062800:
	// lwz r10,616(r11)
	ctx.current_instruction = 0x88062800;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88062820
	if (ctx.cr6.eq) goto loc_88062820;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x88062814;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880cb318
	ctx.lr = 0x8806281C;
	sub_880CB318(ctx, base);
loc_8806281C:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x8806281C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_88062820:
	// lwz r4,636(r11)
	ctx.current_instruction = 0x88062820;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 636);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8806283c
	if (ctx.cr6.eq) goto loc_8806283C;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x8806282C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880caeb0
	ctx.lr = 0x88062834;
	sub_880CAEB0(ctx, base);
loc_88062834:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88062834;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8806283C:
	// lwz r4,640(r11)
	ctx.current_instruction = 0x8806283C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 640);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88062858
	if (ctx.cr6.eq) goto loc_88062858;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x88062848;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880caeb0
	ctx.lr = 0x88062850;
	sub_880CAEB0(ctx, base);
loc_88062850:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88062850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_88062858:
	// lwz r4,644(r11)
	ctx.current_instruction = 0x88062858;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 644);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88062874
	if (ctx.cr6.eq) goto loc_88062874;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x88062864;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880caeb0
	ctx.lr = 0x8806286C;
	sub_880CAEB0(ctx, base);
loc_8806286C:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x8806286C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_88062874:
	// lwz r4,648(r11)
	ctx.current_instruction = 0x88062874;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 648);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88062890
	if (ctx.cr6.eq) goto loc_88062890;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x88062880;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// bl 0x880caeb0
	ctx.lr = 0x88062888;
	sub_880CAEB0(ctx, base);
loc_88062888:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88062888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_88062890:
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r3,608(r11)
	ctx.current_instruction = 0x88062894;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880cb318
	ctx.lr = 0x880628A0;
	sub_880CB318(ctx, base);
loc_880628A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880628A8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880628B0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806B788) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806B788;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806B788) {
			switch (rex_dispatch_address) {
				case 0x8806B790:
				case 0x8806B7AC:
				case 0x8806B7EC:
				case 0x8806B800:
				case 0x8806B828:
				case 0x8806B83C:
				case 0x8806B860:
				case 0x8806B888:
				case 0x8806B8B0:
				case 0x8806B8C4:
				case 0x8806B8CC:
				case 0x8806B8FC:
				case 0x8806B93C:
				case 0x8806B978:
				case 0x8806B99C:
				case 0x8806B9B0:
				case 0x8806B9B8:
				case 0x8806B9C8:
				case 0x8806B9DC:
				case 0x8806BA04:
				case 0x8806BA18:
				case 0x8806BA58:
				case 0x8806BA70:
				case 0x8806BA94:
				case 0x8806BAAC:
				case 0x8806BAE8:
				case 0x8806BB08:
				case 0x8806BB10:
				case 0x8806BB1C:
				case 0x8806BB34:
				case 0x8806BB3C:
				case 0x8806BB50:
				case 0x8806BB64:
				case 0x8806BB88:
				case 0x8806BBB8:
				case 0x8806BBE0:
				case 0x8806BBF4:
				case 0x8806BC10:
				case 0x8806BC24:
				case 0x8806BC3C:
				case 0x8806BC50:
				case 0x8806BC64:
				case 0x8806BC80:
				case 0x8806BC94:
				case 0x8806BCAC:
				case 0x8806BCC0:
				case 0x8806BCE0:
				case 0x8806BCF4:
				case 0x8806BD0C:
				case 0x8806BD20:
				case 0x8806BD4C:
				case 0x8806BD7C:
				case 0x8806BD90:
				case 0x8806BDA4:
				case 0x8806BDB8:
				case 0x8806BDD4:
				case 0x8806BDF4:
				case 0x8806BE0C:
				case 0x8806BE20:
				case 0x8806BE44:
				case 0x8806BE58:
				case 0x8806BE60:
				case 0x8806BE74:
				case 0x8806BE98:
				case 0x8806BEAC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806B788;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806B790: goto loc_8806B790;
		case 0x8806B7AC: goto loc_8806B7AC;
		case 0x8806B7EC: goto loc_8806B7EC;
		case 0x8806B800: goto loc_8806B800;
		case 0x8806B828: goto loc_8806B828;
		case 0x8806B83C: goto loc_8806B83C;
		case 0x8806B860: goto loc_8806B860;
		case 0x8806B888: goto loc_8806B888;
		case 0x8806B8B0: goto loc_8806B8B0;
		case 0x8806B8C4: goto loc_8806B8C4;
		case 0x8806B8CC: goto loc_8806B8CC;
		case 0x8806B8FC: goto loc_8806B8FC;
		case 0x8806B93C: goto loc_8806B93C;
		case 0x8806B978: goto loc_8806B978;
		case 0x8806B99C: goto loc_8806B99C;
		case 0x8806B9B0: goto loc_8806B9B0;
		case 0x8806B9B8: goto loc_8806B9B8;
		case 0x8806B9C8: goto loc_8806B9C8;
		case 0x8806B9DC: goto loc_8806B9DC;
		case 0x8806BA04: goto loc_8806BA04;
		case 0x8806BA18: goto loc_8806BA18;
		case 0x8806BA58: goto loc_8806BA58;
		case 0x8806BA70: goto loc_8806BA70;
		case 0x8806BA94: goto loc_8806BA94;
		case 0x8806BAAC: goto loc_8806BAAC;
		case 0x8806BAE8: goto loc_8806BAE8;
		case 0x8806BB08: goto loc_8806BB08;
		case 0x8806BB10: goto loc_8806BB10;
		case 0x8806BB1C: goto loc_8806BB1C;
		case 0x8806BB34: goto loc_8806BB34;
		case 0x8806BB3C: goto loc_8806BB3C;
		case 0x8806BB50: goto loc_8806BB50;
		case 0x8806BB64: goto loc_8806BB64;
		case 0x8806BB88: goto loc_8806BB88;
		case 0x8806BBB8: goto loc_8806BBB8;
		case 0x8806BBE0: goto loc_8806BBE0;
		case 0x8806BBF4: goto loc_8806BBF4;
		case 0x8806BC10: goto loc_8806BC10;
		case 0x8806BC24: goto loc_8806BC24;
		case 0x8806BC3C: goto loc_8806BC3C;
		case 0x8806BC50: goto loc_8806BC50;
		case 0x8806BC64: goto loc_8806BC64;
		case 0x8806BC80: goto loc_8806BC80;
		case 0x8806BC94: goto loc_8806BC94;
		case 0x8806BCAC: goto loc_8806BCAC;
		case 0x8806BCC0: goto loc_8806BCC0;
		case 0x8806BCE0: goto loc_8806BCE0;
		case 0x8806BCF4: goto loc_8806BCF4;
		case 0x8806BD0C: goto loc_8806BD0C;
		case 0x8806BD20: goto loc_8806BD20;
		case 0x8806BD4C: goto loc_8806BD4C;
		case 0x8806BD7C: goto loc_8806BD7C;
		case 0x8806BD90: goto loc_8806BD90;
		case 0x8806BDA4: goto loc_8806BDA4;
		case 0x8806BDB8: goto loc_8806BDB8;
		case 0x8806BDD4: goto loc_8806BDD4;
		case 0x8806BDF4: goto loc_8806BDF4;
		case 0x8806BE0C: goto loc_8806BE0C;
		case 0x8806BE20: goto loc_8806BE20;
		case 0x8806BE44: goto loc_8806BE44;
		case 0x8806BE58: goto loc_8806BE58;
		case 0x8806BE60: goto loc_8806BE60;
		case 0x8806BE74: goto loc_8806BE74;
		case 0x8806BE98: goto loc_8806BE98;
		case 0x8806BEAC: goto loc_8806BEAC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8806B790;
	__savegprlr_26(ctx, base);
loc_8806B790:
	// stfd f31,-64(r1)
	ctx.current_instruction = 0x8806B790;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8806B794;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,260(r11)
	ctx.current_instruction = 0x8806B7A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B7AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B7AC:
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8806be80
	if (!ctx.cr6.eq) goto loc_8806BE80;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r26,r10,10
	ctx.r26.u64 = ctx.r10.u64 | 10;
	// lfs f31,6732(r11)
	ctx.current_instruction = 0x8806B7C8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f31.f64 = double(temp.f32);
loc_8806B7CC:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x8806B7CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B7DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.current_instruction = 0x8806B7E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B7EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B7EC:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8806B7EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8806b808
	if (!ctx.cr6.eq) goto loc_8806B808;
	// lwz r3,272(r31)
	ctx.current_instruction = 0x8806B7F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x881ec5b8
	ctx.lr = 0x8806B800;
	sub_881EC5B8(ctx, base);
loc_8806B800:
	// stw r27,240(r31)
	ctx.current_instruction = 0x8806B800;
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r27.u32);
	// b 0x8806bdf8
	goto loc_8806BDF8;
loc_8806B808:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x8806B808;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B818;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.current_instruction = 0x8806B81C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B828:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B828;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806B82C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.current_instruction = 0x8806B830;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B83C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B83C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B83C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r7,-30713
	ctx.r7.s64 = -2012807168;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r7,-28040
	ctx.r5.s64 = ctx.r7.s64 + -28040;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8806B854;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B860:
	// lwz r5,52(r31)
	ctx.current_instruction = 0x8806B860;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8806b888
	if (ctx.cr6.eq) goto loc_8806B888;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B86C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r6,68(r31)
	ctx.current_instruction = 0x8806B874;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B878;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8806B87C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B888;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B888:
	// lwz r5,56(r31)
	ctx.current_instruction = 0x8806B888;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8806b8b0
	if (ctx.cr6.eq) goto loc_8806B8B0;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B894;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r6,72(r31)
	ctx.current_instruction = 0x8806B89C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B8A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8806B8A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B8B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B8B0:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B8B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B8B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8806B8B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B8C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B8C4:
	// lwz r3,48(r31)
	ctx.current_instruction = 0x8806B8C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x88050220
	ctx.lr = 0x8806B8CC;
	sub_88050220(ctx, base);
loc_8806B8CC:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x8806B8CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806b928
	if (ctx.cr6.eq) goto loc_8806B928;
	// lwz r11,248(r31)
	ctx.current_instruction = 0x8806B8D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// addi r30,r31,252
	ctx.r30.s64 = ctx.r31.s64 + 252;
	// lwz r10,252(r31)
	ctx.current_instruction = 0x8806B8E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8806b928
	if (!ctx.cr6.gt) goto loc_8806B928;
loc_8806B8EC:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x8806B8EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,76(r31)
	ctx.current_instruction = 0x8806B8F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8806B8FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B8FC:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r30
	ea = ctx.r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8806b8fc
	if (!ctx.cr0.eq) goto loc_8806B8FC;
	// lwz r8,248(r31)
	ctx.current_instruction = 0x8806B918;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x8806B91C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8806b8ec
	if (ctx.cr6.gt) goto loc_8806B8EC;
loc_8806B928:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806B928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,260(r11)
	ctx.current_instruction = 0x8806B930;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B93C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B93C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806b978
	if (ctx.cr6.eq) goto loc_8806B978;
	// rlwinm r11,r3,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8806bbf8
	if (!ctx.cr6.eq) goto loc_8806BBF8;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806b978
	if (ctx.cr6.eq) goto loc_8806B978;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806B960;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,268(r11)
	ctx.current_instruction = 0x8806B96C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B978;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B978:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8806b99c
	if (!ctx.cr6.eq) goto loc_8806B99C;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806B984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,268(r11)
	ctx.current_instruction = 0x8806B990;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B99C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B99C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B99C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B9A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8806B9A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B9B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B9B0:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x8806B9B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a18
	ctx.lr = 0x8806B9B8;
	sub_88067A18(ctx, base);
loc_8806B9B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806bbcc
	if (ctx.cr6.eq) goto loc_8806BBCC;
	// lwz r3,84(r1)
	ctx.current_instruction = 0x8806B9C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a30
	ctx.lr = 0x8806B9C8;
	sub_88067A30(ctx, base);
loc_8806B9C8:
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B9C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,88(r11)
	ctx.current_instruction = 0x8806B9D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B9DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B9DC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806bc6c
	if (ctx.cr6.eq) goto loc_8806BC6C;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8806B9E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lwz r9,56(r10)
	ctx.current_instruction = 0x8806B9F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8806BA04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BA04:
	// lwz r8,0(r30)
	ctx.current_instruction = 0x8806BA04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,80(r8)
	ctx.current_instruction = 0x8806BA0C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8806BA18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BA18:
	// ld r4,0(r3)
	ctx.current_instruction = 0x8806BA18;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r28,r31,248
	ctx.r28.s64 = ctx.r31.s64 + 248;
	// std r4,288(r31)
	ctx.current_instruction = 0x8806BA20;
	REX_STORE_U64(ctx.r31.u32 + 288, ctx.r4.u64);
loc_8806BA24:
	// mfmsr r5
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r5.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r6,0,r28
	ea = ctx.r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwcx. r6,0,r28
	ea = ctx.r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8806ba24
	if (!ctx.cr0.eq) goto loc_8806BA24;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BA40;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806BA48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.current_instruction = 0x8806BA4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BA58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BA58:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x8806BA58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.current_instruction = 0x8806BA64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806BA70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BA70:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x8806BA74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88050268
	ctx.lr = 0x8806BA94;
	sub_88050268(ctx, base);
loc_8806BA94:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BA94;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,0(r3)
	ctx.current_instruction = 0x8806BA9C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r7)
	ctx.current_instruction = 0x8806BAA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806BAAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BAAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8806bb68
	if (ctx.cr6.lt) goto loc_8806BB68;
	// addi r11,r31,252
	ctx.r11.s64 = ctx.r31.s64 + 252;
loc_8806BAB8:
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
	// bne 0x8806bab8
	if (!ctx.cr0.eq) goto loc_8806BAB8;
	// lwz r8,0(r31)
	ctx.current_instruction = 0x8806BAD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,248(r8)
	ctx.current_instruction = 0x8806BADC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 248);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8806BAE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BAE8:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8806bb14
	if (!ctx.cr6.eq) goto loc_8806BB14;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806BAF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.current_instruction = 0x8806BAFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BB08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BB08:
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x881ec8a8
	ctx.lr = 0x8806BB10;
	sub_881EC8A8(ctx, base);
loc_8806BB10:
	// b 0x8806bb34
	goto loc_8806BB34;
loc_8806BB14:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x8806BB14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067b18
	ctx.lr = 0x8806BB1C;
	sub_88067B18(ctx, base);
loc_8806BB1C:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806BB1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,288(r31)
	ctx.current_instruction = 0x8806BB24;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 288);
	// lwz r10,128(r11)
	ctx.current_instruction = 0x8806BB28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BB34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BB34:
	// lwz r3,48(r31)
	ctx.current_instruction = 0x8806BB34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x88050250
	ctx.lr = 0x8806BB3C;
	sub_88050250(ctx, base);
loc_8806BB3C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BB3C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806BB40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8806BB44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8806BB4C:
	// bctrl 
	ctx.lr = 0x8806BB50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BB50:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806BB50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8806BB58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BB64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BB64:
	// b 0x8806b8cc
	goto loc_8806B8CC;
loc_8806BB68:
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8806bb3c
	if (!ctx.cr6.eq) goto loc_8806BB3C;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806BB70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.current_instruction = 0x8806BB7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BB88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BB88:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r28
	ea = ctx.r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r28
	ea = ctx.r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8806bb88
	if (!ctx.cr0.eq) goto loc_8806BB88;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BBA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,0(r3)
	ctx.current_instruction = 0x8806BBA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.current_instruction = 0x8806BBAC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806BBB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BBB8:
	// lwz r5,0(r31)
	ctx.current_instruction = 0x8806BBB8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,176(r5)
	ctx.current_instruction = 0x8806BBC0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 176);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// b 0x8806bb4c
	goto loc_8806BB4C;
loc_8806BBCC:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BBCC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806BBD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8806BBD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BBE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BBE0:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x8806BBE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,176(r9)
	ctx.current_instruction = 0x8806BBE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 176);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806BBF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BBF4:
	// b 0x8806b8cc
	goto loc_8806B8CC;
loc_8806BBF8:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806BBF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,268(r11)
	ctx.current_instruction = 0x8806BC04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BC10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BC10:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BC10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806BC14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.current_instruction = 0x8806BC18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806BC24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BC24:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BC24;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r7,0(r3)
	ctx.current_instruction = 0x8806BC2C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.current_instruction = 0x8806BC30;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806BC3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BC3C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BC3C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r3)
	ctx.current_instruction = 0x8806BC40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.current_instruction = 0x8806BC44;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8806BC50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BC50:
	// lwz r3,240(r31)
	ctx.current_instruction = 0x8806BC50;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8806bcac
	if (ctx.cr6.eq) goto loc_8806BCAC;
	// lwz r3,272(r31)
	ctx.current_instruction = 0x8806BC5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x881ec5b8
	ctx.lr = 0x8806BC64;
	sub_881EC5B8(ctx, base);
loc_8806BC64:
	// stw r27,240(r31)
	ctx.current_instruction = 0x8806BC64;
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r27.u32);
	// b 0x8806bcac
	goto loc_8806BCAC;
loc_8806BC6C:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806BC6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8806BC74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BC80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BC80:
	// lwz r9,240(r31)
	ctx.current_instruction = 0x8806BC80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8806bc98
	if (ctx.cr6.eq) goto loc_8806BC98;
	// lwz r3,272(r31)
	ctx.current_instruction = 0x8806BC8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x881ec5b8
	ctx.lr = 0x8806BC94;
	sub_881EC5B8(ctx, base);
loc_8806BC94:
	// stw r27,240(r31)
	ctx.current_instruction = 0x8806BC94;
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r27.u32);
loc_8806BC98:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BC98;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806BC9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8806BCA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BCAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BCAC:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806BCAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,248(r11)
	ctx.current_instruction = 0x8806BCB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BCC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BCC0:
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8806bd20
	if (ctx.cr6.eq) goto loc_8806BD20;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806BCC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,268(r11)
	ctx.current_instruction = 0x8806BCD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BCE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BCE0:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BCE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806BCE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.current_instruction = 0x8806BCE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806BCF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BCF4:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BCF4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r7,0(r3)
	ctx.current_instruction = 0x8806BCFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.current_instruction = 0x8806BD00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806BD0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BD0C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BD0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r3)
	ctx.current_instruction = 0x8806BD10;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.current_instruction = 0x8806BD14;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8806BD20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BD20:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x8806BD20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806bd74
	if (ctx.cr6.eq) goto loc_8806BD74;
	// lwz r11,252(r31)
	ctx.current_instruction = 0x8806BD2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// addi r30,r31,252
	ctx.r30.s64 = ctx.r31.s64 + 252;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806bd74
	if (ctx.cr6.eq) goto loc_8806BD74;
loc_8806BD3C:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x8806BD3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,76(r31)
	ctx.current_instruction = 0x8806BD40;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8806BD4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BD4C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r30
	ea = ctx.r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8806bd4c
	if (!ctx.cr0.eq) goto loc_8806BD4C;
	// lwz r8,0(r30)
	ctx.current_instruction = 0x8806BD68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8806bd3c
	if (!ctx.cr6.eq) goto loc_8806BD3C;
loc_8806BD74:
	// lwz r3,48(r31)
	ctx.current_instruction = 0x8806BD74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x88050238
	ctx.lr = 0x8806BD7C;
	sub_88050238(ctx, base);
loc_8806BD7C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BD7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806BD80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8806BD84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BD90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BD90:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BD90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806BD94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,60(r9)
	ctx.current_instruction = 0x8806BD98;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806BDA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BDA4:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BDA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,0(r3)
	ctx.current_instruction = 0x8806BDA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.current_instruction = 0x8806BDAC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806BDB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BDB8:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806BDB8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806bdd8
	if (ctx.cr6.eq) goto loc_8806BDD8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806BDC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8806BDC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BDD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BDD4:
	// stw r27,80(r1)
	ctx.current_instruction = 0x8806BDD4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_8806BDD8:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x8806BDD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806bdf8
	if (ctx.cr6.eq) goto loc_8806BDF8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806BDE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8806BDE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BDF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BDF4:
	// stw r27,84(r1)
	ctx.current_instruction = 0x8806BDF4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
loc_8806BDF8:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806BDF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,184(r11)
	ctx.current_instruction = 0x8806BE00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BE0C:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x8806BE0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,260(r9)
	ctx.current_instruction = 0x8806BE14;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 260);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806BE20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BE20:
	// rlwinm r7,r3,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8806be80
	if (!ctx.cr6.eq) goto loc_8806BE80;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806BE2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,268(r11)
	ctx.current_instruction = 0x8806BE38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BE44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BE44:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x8806BE44;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,224(r9)
	ctx.current_instruction = 0x8806BE4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 224);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806BE58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BE58:
	// lwz r3,276(r31)
	ctx.current_instruction = 0x8806BE58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x881ec608
	ctx.lr = 0x8806BE60;
	sub_881EC608(ctx, base);
loc_8806BE60:
	// lwz r7,0(r31)
	ctx.current_instruction = 0x8806BE60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,260(r7)
	ctx.current_instruction = 0x8806BE68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 260);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806BE74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BE74:
	// rlwinm r5,r3,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8806b7cc
	if (ctx.cr6.eq) goto loc_8806B7CC;
loc_8806BE80:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806BE80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,268(r11)
	ctx.current_instruction = 0x8806BE8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BE98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BE98:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x8806BE98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,224(r9)
	ctx.current_instruction = 0x8806BEA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 224);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806BEAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BEAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.current_instruction = 0x8806BEB0;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88085820) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88085820);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88085820;
	ctx.current_instruction = 0x88085820;
	// srawi r11,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 31;
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// xor r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// xor r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88085878
	if (ctx.cr6.gt) goto loc_88085878;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88085878
	if (ctx.cr6.gt) goto loc_88085878;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,6848
	ctx.r7.s64 = ctx.r9.s64 + 6848;
	// lwzx r3,r5,r7
	ctx.current_instruction = 0x88085858;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r4,r8,r7
	ctx.current_instruction = 0x8808585C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.current_instruction = 0x88085868;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r11,r11,r6
	ctx.current_instruction = 0x8808586C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88085878:
	// lwz r11,20(r6)
	ctx.current_instruction = 0x88085878;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880892D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880892D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880892D0) {
			switch (rex_dispatch_address) {
				case 0x880892D8:
				case 0x880893B0:
				case 0x880893CC:
				case 0x8808945C:
				case 0x88089478:
				case 0x88089554:
				case 0x88089570:
				case 0x88089600:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880892D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880892D8: goto loc_880892D8;
		case 0x880893B0: goto loc_880893B0;
		case 0x880893CC: goto loc_880893CC;
		case 0x8808945C: goto loc_8808945C;
		case 0x88089478: goto loc_88089478;
		case 0x88089554: goto loc_88089554;
		case 0x88089570: goto loc_88089570;
		case 0x88089600: goto loc_88089600;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880892D8;
	__savegprlr_14(ctx, base);
loc_880892D8:
	// stwu r1,-336(r1)
	ctx.current_instruction = 0x880892D8;
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r14,548(r1)
	ctx.current_instruction = 0x880892DC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r24,492(r1)
	ctx.current_instruction = 0x880892E4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// lwz r28,484(r1)
	ctx.current_instruction = 0x880892EC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// lwz r26,468(r1)
	ctx.current_instruction = 0x880892F4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r25,428(r1)
	ctx.current_instruction = 0x880892FC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// stw r5,372(r1)
	ctx.current_instruction = 0x88089304;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// stw r10,412(r1)
	ctx.current_instruction = 0x8808930C;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r10.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r18,4
	ctx.r18.s64 = 4;
loc_88089320:
	// lwz r10,0(r27)
	ctx.current_instruction = 0x88089320;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.current_instruction = 0x88089324;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,2604(r31)
	ctx.current_instruction = 0x88089328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// add r30,r10,r23
	ctx.r30.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r29,r9,r22
	ctx.r29.u64 = ctx.r9.u64 + ctx.r22.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88089498
	if (!ctx.cr6.lt) goto loc_88089498;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88089498
	if (ctx.cr6.lt) goto loc_88089498;
	// lwz r11,2608(r31)
	ctx.current_instruction = 0x88089348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88089498
	if (!ctx.cr6.lt) goto loc_88089498;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88089498
	if (ctx.cr6.lt) goto loc_88089498;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88089360;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r10,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 2;
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// lwz r9,372(r1)
	ctx.current_instruction = 0x8808936C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88089378;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r29,30
	ctx.r8.u64 = ctx.r29.u32 & 0x3;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bne cr6,0x880893b4
	if (!ctx.cr6.eq) goto loc_880893B4;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88089398;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,84(r1)
	ctx.current_instruction = 0x880893A0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880893B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880893B0:
	// b 0x880893cc
	goto loc_880893CC;
loc_880893B4:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x880893B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r7,84(r1)
	ctx.current_instruction = 0x880893BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880893CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880893CC:
	// lwz r11,500(r1)
	ctx.current_instruction = 0x880893CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// addi r9,r1,420
	ctx.r9.s64 = ctx.r1.s64 + 420;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880893D4;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r7,r1,412
	ctx.r7.s64 = ctx.r1.s64 + 412;
	// lwz r10,476(r1)
	ctx.current_instruction = 0x880893DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// addi r17,r1,160
	ctx.r17.s64 = ctx.r1.s64 + 160;
	// lwz r8,460(r1)
	ctx.current_instruction = 0x880893E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// stw r9,164(r1)
	ctx.current_instruction = 0x880893EC;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r6,452(r1)
	ctx.current_instruction = 0x880893F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,164(r1)
	ctx.current_instruction = 0x880893FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,140(r1)
	ctx.current_instruction = 0x88089400;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r7,168(r1)
	ctx.current_instruction = 0x88089404;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// lwz r11,168(r1)
	ctx.current_instruction = 0x8808940C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,132(r1)
	ctx.current_instruction = 0x88089410;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,172(r1)
	ctx.current_instruction = 0x88089414;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r11,172(r1)
	ctx.current_instruction = 0x8808941C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r8,176(r1)
	ctx.current_instruction = 0x88089420;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stw r11,100(r1)
	ctx.current_instruction = 0x88089424;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,176(r1)
	ctx.current_instruction = 0x88089428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r6,180(r1)
	ctx.current_instruction = 0x8808942C;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x88089434;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.current_instruction = 0x88089438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,420(r1)
	ctx.current_instruction = 0x8808943C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,412(r1)
	ctx.current_instruction = 0x88089440;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// stw r14,156(r1)
	ctx.current_instruction = 0x88089444;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r14.u32);
	// stw r17,148(r1)
	ctx.current_instruction = 0x88089448;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808944C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r28,108(r1)
	ctx.current_instruction = 0x88089450;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88089454;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x88088f80
	ctx.lr = 0x8808945C;
	sub_88088F80(ctx, base);
loc_8808945C:
	// lwz r10,444(r1)
	ctx.current_instruction = 0x8808945C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r9,436(r1)
	ctx.current_instruction = 0x88089464;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r10,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r10.u64;
	// subf r4,r9,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r9.u64;
	// bl 0x88085820
	ctx.lr = 0x88089478;
	sub_88085820(ctx, base);
loc_88089478:
	// lwz r8,160(r1)
	ctx.current_instruction = 0x88089478;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r11,160(r1)
	ctx.current_instruction = 0x88089480;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x88089498
	if (!ctx.cr6.lt) goto loc_88089498;
	// lwz r21,0(r27)
	ctx.current_instruction = 0x8808948C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r20,4(r27)
	ctx.current_instruction = 0x88089494;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_88089498:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x88089320
	if (!ctx.cr0.eq) goto loc_88089320;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// add r22,r20,r22
	ctx.r22.u64 = ctx.r20.u64 + ctx.r22.u64;
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r27,r19,32
	ctx.r27.s64 = ctx.r19.s64 + 32;
	// li r17,4
	ctx.r17.s64 = 4;
	// addi r21,r11,6848
	ctx.r21.s64 = ctx.r11.s64 + 6848;
loc_880894C4:
	// lwz r9,0(r27)
	ctx.current_instruction = 0x880894C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.current_instruction = 0x880894C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,2604(r31)
	ctx.current_instruction = 0x880894CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// add r30,r9,r23
	ctx.r30.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r29,r10,r22
	ctx.r29.u64 = ctx.r10.u64 + ctx.r22.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88089688
	if (!ctx.cr6.lt) goto loc_88089688;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88089688
	if (ctx.cr6.lt) goto loc_88089688;
	// lwz r11,2608(r31)
	ctx.current_instruction = 0x880894EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88089688
	if (!ctx.cr6.lt) goto loc_88089688;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88089688
	if (ctx.cr6.lt) goto loc_88089688;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88089504;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// lwz r9,372(r1)
	ctx.current_instruction = 0x88089510;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808951C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// clrlwi r8,r29,30
	ctx.r8.u64 = ctx.r29.u32 & 0x3;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bne cr6,0x88089558
	if (!ctx.cr6.eq) goto loc_88089558;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808953C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,84(r1)
	ctx.current_instruction = 0x88089544;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089554:
	// b 0x88089570
	goto loc_88089570;
loc_88089558:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88089558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r7,84(r1)
	ctx.current_instruction = 0x88089560;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// clrlwi r7,r30,30
	ctx.r7.u64 = ctx.r30.u32 & 0x3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88089570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88089570:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r11,460(r1)
	ctx.current_instruction = 0x88089574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// addi r9,r1,420
	ctx.r9.s64 = ctx.r1.s64 + 420;
	// lwz r7,500(r1)
	ctx.current_instruction = 0x8808957C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r11,92(r1)
	ctx.current_instruction = 0x88089580;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,412
	ctx.r6.s64 = ctx.r1.s64 + 412;
	// stw r10,180(r1)
	ctx.current_instruction = 0x88089588;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r11,180(r1)
	ctx.current_instruction = 0x88089590;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r5,476(r1)
	ctx.current_instruction = 0x88089598;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,148(r1)
	ctx.current_instruction = 0x880895A0;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r9,176(r1)
	ctx.current_instruction = 0x880895A4;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lwz r11,176(r1)
	ctx.current_instruction = 0x880895A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r8,452(r1)
	ctx.current_instruction = 0x880895AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// stw r11,140(r1)
	ctx.current_instruction = 0x880895B0;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r6,172(r1)
	ctx.current_instruction = 0x880895B4;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,172(r1)
	ctx.current_instruction = 0x880895BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r7,168(r1)
	ctx.current_instruction = 0x880895C0;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// stw r11,132(r1)
	ctx.current_instruction = 0x880895C8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,168(r1)
	ctx.current_instruction = 0x880895CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r5,164(r1)
	ctx.current_instruction = 0x880895D0;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880895D8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.current_instruction = 0x880895DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r8,84(r1)
	ctx.current_instruction = 0x880895E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r24,116(r1)
	ctx.current_instruction = 0x880895E4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r28,108(r1)
	ctx.current_instruction = 0x880895E8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r11,100(r1)
	ctx.current_instruction = 0x880895EC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r9,420(r1)
	ctx.current_instruction = 0x880895F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,412(r1)
	ctx.current_instruction = 0x880895F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// stw r14,156(r1)
	ctx.current_instruction = 0x880895F8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r14.u32);
	// bl 0x88088f80
	ctx.lr = 0x88089600;
	sub_88088F80(ctx, base);
loc_88089600:
	// lwz r10,436(r1)
	ctx.current_instruction = 0x88089600;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r9,444(r1)
	ctx.current_instruction = 0x88089604;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// subf r8,r10,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r10.u64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// subf r7,r9,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r9.u64;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// subf r10,r5,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r5.u64;
	// bgt cr6,0x88089660
	if (ctx.cr6.gt) goto loc_88089660;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88089660
	if (ctx.cr6.gt) goto loc_88089660;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r21
	ctx.current_instruction = 0x88089640;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// lwzx r8,r10,r21
	ctx.current_instruction = 0x88089644;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r24
	ctx.current_instruction = 0x88089650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// lwzx r11,r6,r24
	ctx.current_instruction = 0x88089654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88089668
	goto loc_88089668;
loc_88089660:
	// lwz r11,20(r24)
	ctx.current_instruction = 0x88089660;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88089668:
	// lwz r10,160(r1)
	ctx.current_instruction = 0x88089668;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,160(r1)
	ctx.current_instruction = 0x88089670;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x88089688
	if (!ctx.cr6.lt) goto loc_88089688;
	// lwz r20,0(r27)
	ctx.current_instruction = 0x8808967C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r18,4(r27)
	ctx.current_instruction = 0x88089684;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_88089688:
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x880894c4
	if (!ctx.cr0.eq) goto loc_880894C4;
	// lwz r11,508(r1)
	ctx.current_instruction = 0x88089694;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// add r10,r20,r23
	ctx.r10.u64 = ctx.r20.u64 + ctx.r23.u64;
	// lwz r9,516(r1)
	ctx.current_instruction = 0x8808969C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// add r8,r18,r22
	ctx.r8.u64 = ctx.r18.u64 + ctx.r22.u64;
	// lwz r7,524(r1)
	ctx.current_instruction = 0x880896A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r6,412(r1)
	ctx.current_instruction = 0x880896A8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r5,532(r1)
	ctx.current_instruction = 0x880896AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r4,420(r1)
	ctx.current_instruction = 0x880896B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,540(r1)
	ctx.current_instruction = 0x880896B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// stw r10,0(r11)
	ctx.current_instruction = 0x880896B8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,0(r9)
	ctx.current_instruction = 0x880896BC;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,0(r7)
	ctx.current_instruction = 0x880896C0;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r4,0(r5)
	ctx.current_instruction = 0x880896C4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r25,0(r3)
	ctx.current_instruction = 0x880896C8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880AFE90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880AFE90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880AFE90) {
			switch (rex_dispatch_address) {
				case 0x880AFE98:
				case 0x880AFFC8:
				case 0x880B0058:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880AFE90;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880AFE98: goto loc_880AFE98;
		case 0x880AFFC8: goto loc_880AFFC8;
		case 0x880B0058: goto loc_880B0058;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880AFE98;
	__savegprlr_14(ctx, base);
loc_880AFE98:
	// stwu r1,-416(r1)
	ctx.current_instruction = 0x880AFE98;
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r11,500(r1)
	ctx.current_instruction = 0x880AFEA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// lwz r8,508(r1)
	ctx.current_instruction = 0x880AFEA8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r9,516(r1)
	ctx.current_instruction = 0x880AFEAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r22,676(r1)
	ctx.current_instruction = 0x880AFEB8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r21,644(r1)
	ctx.current_instruction = 0x880AFEC0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// lis r7,255
	ctx.r7.s64 = 16711680;
	// lwz r20,636(r1)
	ctx.current_instruction = 0x880AFEC8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r19,628(r1)
	ctx.current_instruction = 0x880AFED0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r18,620(r1)
	ctx.current_instruction = 0x880AFED8;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r17,612(r1)
	ctx.current_instruction = 0x880AFEE0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// ori r6,r7,65535
	ctx.r6.u64 = ctx.r7.u64 | 65535;
	// lwz r16,548(r1)
	ctx.current_instruction = 0x880AFEE8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r15,540(r1)
	ctx.current_instruction = 0x880AFEF0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// stw r11,224(r1)
	ctx.current_instruction = 0x880AFEFC;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,228(r1)
	ctx.current_instruction = 0x880AFF04;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r31,r10,5488
	ctx.r31.s64 = ctx.r10.s64 + 5488;
loc_880AFF10:
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880aff20
	if (!ctx.cr6.eq) goto loc_880AFF20;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x880b006c
	if (ctx.cr6.eq) goto loc_880B006C;
loc_880AFF20:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,588(r1)
	ctx.current_instruction = 0x880AFF24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// addi r6,r1,588
	ctx.r6.s64 = ctx.r1.s64 + 588;
	// stw r30,124(r1)
	ctx.current_instruction = 0x880AFF2C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r9,232(r1)
	ctx.current_instruction = 0x880AFF30;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// stw r6,212(r1)
	ctx.current_instruction = 0x880AFF38;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// addi r14,r31,-64
	ctx.r14.s64 = ctx.r31.s64 + -64;
	// stw r5,204(r1)
	ctx.current_instruction = 0x880AFF40;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r10,236(r1)
	ctx.current_instruction = 0x880AFF48;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r31,248(r1)
	ctx.current_instruction = 0x880AFF50;
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r31.u64);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r30,240(r1)
	ctx.current_instruction = 0x880AFF58;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r30,532(r1)
	ctx.current_instruction = 0x880AFF60;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r4,196(r1)
	ctx.current_instruction = 0x880AFF68;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r4.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r3,172(r1)
	ctx.current_instruction = 0x880AFF70;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,524(r1)
	ctx.current_instruction = 0x880AFF7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r22,220(r1)
	ctx.current_instruction = 0x880AFF84;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r22.u32);
	// stw r21,188(r1)
	ctx.current_instruction = 0x880AFF88;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// stw r20,180(r1)
	ctx.current_instruction = 0x880AFF8C;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r20.u32);
	// stw r19,156(r1)
	ctx.current_instruction = 0x880AFF90;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// stw r18,148(r1)
	ctx.current_instruction = 0x880AFF94;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// stw r17,140(r1)
	ctx.current_instruction = 0x880AFF98;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// stw r11,116(r1)
	ctx.current_instruction = 0x880AFF9C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r14,108(r1)
	ctx.current_instruction = 0x880AFFA0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// stw r16,100(r1)
	ctx.current_instruction = 0x880AFFA4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// stw r15,92(r1)
	ctx.current_instruction = 0x880AFFA8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// lwz r31,232(r1)
	ctx.current_instruction = 0x880AFFAC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// stw r30,84(r1)
	ctx.current_instruction = 0x880AFFB0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r31,164(r1)
	ctx.current_instruction = 0x880AFFB4;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// lwz r31,236(r1)
	ctx.current_instruction = 0x880AFFB8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r11,236(r1)
	ctx.current_instruction = 0x880AFFBC;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// stw r31,132(r1)
	ctx.current_instruction = 0x880AFFC0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// bl 0x880aec08
	ctx.lr = 0x880AFFC8;
	sub_880AEC08(ctx, base);
loc_880AFFC8:
	// addi r11,r1,588
	ctx.r11.s64 = ctx.r1.s64 + 588;
	// stw r30,84(r1)
	ctx.current_instruction = 0x880AFFCC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r8,r1,228
	ctx.r8.s64 = ctx.r1.s64 + 228;
	// stw r8,204(r1)
	ctx.current_instruction = 0x880AFFD4;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// stw r11,212(r1)
	ctx.current_instruction = 0x880AFFD8;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// ld r31,248(r1)
	ctx.current_instruction = 0x880AFFE0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,196(r1)
	ctx.current_instruction = 0x880AFFEC;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r6,172(r1)
	ctx.current_instruction = 0x880AFFF0;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r5,164(r1)
	ctx.current_instruction = 0x880AFFF8;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r10,524(r1)
	ctx.current_instruction = 0x880B0004;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r22,220(r1)
	ctx.current_instruction = 0x880B000C;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r22.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r21,188(r1)
	ctx.current_instruction = 0x880B0014;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r20,180(r1)
	ctx.current_instruction = 0x880B001C;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r20.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r19,156(r1)
	ctx.current_instruction = 0x880B0024;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// stw r18,148(r1)
	ctx.current_instruction = 0x880B0028;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// stw r17,140(r1)
	ctx.current_instruction = 0x880B002C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// stw r31,108(r1)
	ctx.current_instruction = 0x880B0030;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r16,100(r1)
	ctx.current_instruction = 0x880B0034;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// stw r15,92(r1)
	ctx.current_instruction = 0x880B0038;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// lwz r11,588(r1)
	ctx.current_instruction = 0x880B003C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r30,228(r1)
	ctx.current_instruction = 0x880B0040;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r14,224(r1)
	ctx.current_instruction = 0x880B0044;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stw r11,132(r1)
	ctx.current_instruction = 0x880B0048;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r30,124(r1)
	ctx.current_instruction = 0x880B004C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r14,116(r1)
	ctx.current_instruction = 0x880B0050;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// bl 0x880aec08
	ctx.lr = 0x880B0058;
	sub_880AEC08(ctx, base);
loc_880B0058:
	// lwz r11,224(r1)
	ctx.current_instruction = 0x880B0058;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r7,236(r1)
	ctx.current_instruction = 0x880B005C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r6,240(r1)
	ctx.current_instruction = 0x880B0060;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r30,228(r1)
	ctx.current_instruction = 0x880B0064;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// b 0x880aff10
	goto loc_880AFF10;
loc_880B006C:
	// lwz r10,652(r1)
	ctx.current_instruction = 0x880B006C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r9,660(r1)
	ctx.current_instruction = 0x880B0070;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r8,668(r1)
	ctx.current_instruction = 0x880B0074;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r7,588(r1)
	ctx.current_instruction = 0x880B0078;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// stw r11,0(r10)
	ctx.current_instruction = 0x880B007C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r30,0(r9)
	ctx.current_instruction = 0x880B0080;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r7,0(r8)
	ctx.current_instruction = 0x880B0084;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B4E40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880B4E40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880B4E40) {
			switch (rex_dispatch_address) {
				case 0x880B4E48:
				case 0x880B4F58:
				case 0x880B4FA8:
				case 0x880B4FF4:
				case 0x880B503C:
				case 0x880B5068:
				case 0x880B50A4:
				case 0x880B50E8:
				case 0x880B5158:
				case 0x880B519C:
				case 0x880B522C:
				case 0x880B5274:
				case 0x880B52D0:
				case 0x880B5314:
				case 0x880B535C:
				case 0x880B53A0:
				case 0x880B53CC:
				case 0x880B5408:
				case 0x880B544C:
				case 0x880B54B4:
				case 0x880B54F8:
				case 0x880B5570:
				case 0x880B55A4:
				case 0x880B55F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880B4E40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880B4E48: goto loc_880B4E48;
		case 0x880B4F58: goto loc_880B4F58;
		case 0x880B4FA8: goto loc_880B4FA8;
		case 0x880B4FF4: goto loc_880B4FF4;
		case 0x880B503C: goto loc_880B503C;
		case 0x880B5068: goto loc_880B5068;
		case 0x880B50A4: goto loc_880B50A4;
		case 0x880B50E8: goto loc_880B50E8;
		case 0x880B5158: goto loc_880B5158;
		case 0x880B519C: goto loc_880B519C;
		case 0x880B522C: goto loc_880B522C;
		case 0x880B5274: goto loc_880B5274;
		case 0x880B52D0: goto loc_880B52D0;
		case 0x880B5314: goto loc_880B5314;
		case 0x880B535C: goto loc_880B535C;
		case 0x880B53A0: goto loc_880B53A0;
		case 0x880B53CC: goto loc_880B53CC;
		case 0x880B5408: goto loc_880B5408;
		case 0x880B544C: goto loc_880B544C;
		case 0x880B54B4: goto loc_880B54B4;
		case 0x880B54F8: goto loc_880B54F8;
		case 0x880B5570: goto loc_880B5570;
		case 0x880B55A4: goto loc_880B55A4;
		case 0x880B55F8: goto loc_880B55F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880B4E48;
	__savegprlr_14(ctx, base);
loc_880B4E48:
	// stwu r1,-1232(r1)
	ctx.current_instruction = 0x880B4E48;
	ea = -1232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1412(r1)
	ctx.current_instruction = 0x880B4E50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1412);
	// addi r28,r1,356
	ctx.r28.s64 = ctx.r1.s64 + 356;
	// lwz r30,1404(r1)
	ctx.current_instruction = 0x880B4E58;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1404);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r27,1396(r1)
	ctx.current_instruction = 0x880B4E60;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1396);
	// stw r28,276(r1)
	ctx.current_instruction = 0x880B4E64;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// addi r28,r1,344
	ctx.r28.s64 = ctx.r1.s64 + 344;
	// stw r3,292(r1)
	ctx.current_instruction = 0x880B4E6C;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// stw r28,252(r1)
	ctx.current_instruction = 0x880B4E74;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r28.u32);
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// lwz r28,1356(r1)
	ctx.current_instruction = 0x880B4E7C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1356);
	// stw r11,244(r1)
	ctx.current_instruction = 0x880B4E80;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r3,268(r1)
	ctx.current_instruction = 0x880B4E84;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// lwz r3,1316(r1)
	ctx.current_instruction = 0x880B4E88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r11,1324(r1)
	ctx.current_instruction = 0x880B4E8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// stw r30,236(r1)
	ctx.current_instruction = 0x880B4E90;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r28,348(r1)
	ctx.current_instruction = 0x880B4E94;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r28.u32);
	// lwz r30,28116(r31)
	ctx.current_instruction = 0x880B4E98;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28116);
	// lwz r25,0(r3)
	ctx.current_instruction = 0x880B4E9C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r26,0(r11)
	ctx.current_instruction = 0x880B4EA0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r17,1388(r1)
	ctx.current_instruction = 0x880B4EA4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1388);
	// lwz r16,1380(r1)
	ctx.current_instruction = 0x880B4EA8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1380);
	// stw r29,284(r1)
	ctx.current_instruction = 0x880B4EAC;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// addi r29,r1,348
	ctx.r29.s64 = ctx.r1.s64 + 348;
	// stw r30,212(r1)
	ctx.current_instruction = 0x880B4EB4;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r29,260(r1)
	ctx.current_instruction = 0x880B4EB8;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r27,228(r1)
	ctx.current_instruction = 0x880B4EBC;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r17,220(r1)
	ctx.current_instruction = 0x880B4EC0;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r17.u32);
	// stw r26,204(r1)
	ctx.current_instruction = 0x880B4EC4;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// stw r25,196(r1)
	ctx.current_instruction = 0x880B4EC8;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// stw r16,188(r1)
	ctx.current_instruction = 0x880B4ECC;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r16.u32);
	// lwz r20,20(r11)
	ctx.current_instruction = 0x880B4ED0;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r19,16(r11)
	ctx.current_instruction = 0x880B4ED4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r18,12(r11)
	ctx.current_instruction = 0x880B4ED8;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r24,20(r3)
	ctx.current_instruction = 0x880B4EDC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r23,16(r3)
	ctx.current_instruction = 0x880B4EE0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r22,12(r3)
	ctx.current_instruction = 0x880B4EE4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r21,8(r3)
	ctx.current_instruction = 0x880B4EE8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.current_instruction = 0x880B4EF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,348(r1)
	ctx.current_instruction = 0x880B4EF4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r29,1348(r1)
	ctx.current_instruction = 0x880B4EF8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1348);
	// lwz r15,1372(r1)
	ctx.current_instruction = 0x880B4EFC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1372);
	// lwz r14,1364(r1)
	ctx.current_instruction = 0x880B4F00;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1364);
	// lwz r28,1340(r1)
	ctx.current_instruction = 0x880B4F04;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1340);
	// stw r4,1260(r1)
	ctx.current_instruction = 0x880B4F08;
	REX_STORE_U32(ctx.r1.u32 + 1260, ctx.r4.u32);
	// stw r5,1268(r1)
	ctx.current_instruction = 0x880B4F0C;
	REX_STORE_U32(ctx.r1.u32 + 1268, ctx.r5.u32);
	// stw r6,1276(r1)
	ctx.current_instruction = 0x880B4F10;
	REX_STORE_U32(ctx.r1.u32 + 1276, ctx.r6.u32);
	// stw r7,1284(r1)
	ctx.current_instruction = 0x880B4F14;
	REX_STORE_U32(ctx.r1.u32 + 1284, ctx.r7.u32);
	// stw r8,1292(r1)
	ctx.current_instruction = 0x880B4F18;
	REX_STORE_U32(ctx.r1.u32 + 1292, ctx.r8.u32);
	// stw r9,1300(r1)
	ctx.current_instruction = 0x880B4F1C;
	REX_STORE_U32(ctx.r1.u32 + 1300, ctx.r9.u32);
	// stw r15,180(r1)
	ctx.current_instruction = 0x880B4F20;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r15.u32);
	// stw r14,172(r1)
	ctx.current_instruction = 0x880B4F24;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r14.u32);
	// stw r30,164(r1)
	ctx.current_instruction = 0x880B4F28;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r20,156(r1)
	ctx.current_instruction = 0x880B4F2C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// stw r19,148(r1)
	ctx.current_instruction = 0x880B4F30;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r19.u32);
	// stw r18,140(r1)
	ctx.current_instruction = 0x880B4F34;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// stw r11,132(r1)
	ctx.current_instruction = 0x880B4F38;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r24,124(r1)
	ctx.current_instruction = 0x880B4F3C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r23,116(r1)
	ctx.current_instruction = 0x880B4F40;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r22,108(r1)
	ctx.current_instruction = 0x880B4F44;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r21,100(r1)
	ctx.current_instruction = 0x880B4F48;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r29,92(r1)
	ctx.current_instruction = 0x880B4F4C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r28,84(r1)
	ctx.current_instruction = 0x880B4F50;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x880a6ad0
	ctx.lr = 0x880B4F58;
	sub_880A6AD0(ctx, base);
loc_880B4F58:
	// lwz r10,28020(r31)
	ctx.current_instruction = 0x880B4F58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r17,352(r1)
	ctx.current_instruction = 0x880B4F60;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r16,356(r1)
	ctx.current_instruction = 0x880B4F64;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r15,348(r1)
	ctx.current_instruction = 0x880B4F68;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r14,344(r1)
	ctx.current_instruction = 0x880B4F6C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// beq cr6,0x880b5618
	if (ctx.cr6.eq) goto loc_880B5618;
	// lwz r11,28036(r31)
	ctx.current_instruction = 0x880B4F74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b5618
	if (!ctx.cr6.eq) goto loc_880B5618;
	// stw r14,332(r1)
	ctx.current_instruction = 0x880B4F80;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r14.u32);
	// addi r11,r1,431
	ctx.r11.s64 = ctx.r1.s64 + 431;
	// stw r15,324(r1)
	ctx.current_instruction = 0x880B4F88;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r15.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bl 0x8810aa38
	ctx.lr = 0x880B4FA8;
	sub_8810AA38(ctx, base);
loc_880B4FA8:
	// li r18,16
	ctx.r18.s64 = 16;
	// stw r18,84(r1)
	ctx.current_instruction = 0x880B4FAC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r8,324(r1)
	ctx.current_instruction = 0x880B4FB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,332(r1)
	ctx.current_instruction = 0x880B4FBC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r6,16
	ctx.r6.s64 = 16;
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// lwz r3,1284(r1)
	ctx.current_instruction = 0x880B4FC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1284);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B4FD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r27,1380(r31)
	ctx.current_instruction = 0x880B4FD4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r26,2488(r31)
	ctx.current_instruction = 0x880B4FD8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mullw r4,r4,r27
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x880B4FF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B4FF4:
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// lwz r26,1332(r1)
	ctx.current_instruction = 0x880B4FFC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1332);
	// addi r11,r1,328
	ctx.r11.s64 = ctx.r1.s64 + 328;
	// stw r10,92(r1)
	ctx.current_instruction = 0x880B5004;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x880B5008;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r4,1260(r1)
	ctx.current_instruction = 0x880B5014;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r29,116(r1)
	ctx.current_instruction = 0x880B501C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r28,108(r1)
	ctx.current_instruction = 0x880B5024;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B502C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B503C;
	sub_88085938(ctx, base);
loc_880B503C:
	// lwz r11,332(r1)
	ctx.current_instruction = 0x880B503C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,324(r1)
	ctx.current_instruction = 0x880B5040;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,360
	ctx.r7.s64 = ctx.r1.s64 + 360;
	// addi r6,r1,340
	ctx.r6.s64 = ctx.r1.s64 + 340;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stw r11,368(r1)
	ctx.current_instruction = 0x880B5054;
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stw r10,384(r1)
	ctx.current_instruction = 0x880B505C;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880B5068;
	sub_88095050(ctx, base);
loc_880B5068:
	// lwz r9,28100(r31)
	ctx.current_instruction = 0x880B5068;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r25,360(r1)
	ctx.current_instruction = 0x880B5074;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r24,340(r1)
	ctx.current_instruction = 0x880B5078;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// beq cr6,0x880b5118
	if (ctx.cr6.eq) goto loc_880B5118;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B5084;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r4,1292(r1)
	ctx.current_instruction = 0x880B508C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1292);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B50A4;
	sub_8810B7F8(ctx, base);
loc_880B50A4:
	// addi r7,r1,312
	ctx.r7.s64 = ctx.r1.s64 + 312;
	// addi r6,r1,308
	ctx.r6.s64 = ctx.r1.s64 + 308;
	// lwz r4,1268(r1)
	ctx.current_instruction = 0x880B50AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1268);
	// addi r11,r1,316
	ctx.r11.s64 = ctx.r1.s64 + 316;
	// stw r7,92(r1)
	ctx.current_instruction = 0x880B50B4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,84(r1)
	ctx.current_instruction = 0x880B50B8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,116(r1)
	ctx.current_instruction = 0x880B50C4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r28,108(r1)
	ctx.current_instruction = 0x880B50CC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B50D4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B50E8;
	sub_88085938(ctx, base);
loc_880B50E8:
	// lwz r11,308(r1)
	ctx.current_instruction = 0x880B50E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r3,304(r1)
	ctx.current_instruction = 0x880B50EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r5,320(r1)
	ctx.current_instruction = 0x880B50F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// add r21,r11,r3
	ctx.r21.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r4,328(r1)
	ctx.current_instruction = 0x880B50F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,312(r1)
	ctx.current_instruction = 0x880B50FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// add r20,r10,r5
	ctx.r20.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r20,320(r1)
	ctx.current_instruction = 0x880B5104;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r20.u32);
	// lwz r11,316(r1)
	ctx.current_instruction = 0x880B5108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// or r27,r11,r4
	ctx.r27.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r27,328(r1)
	ctx.current_instruction = 0x880B5110;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// b 0x880b5124
	goto loc_880B5124;
loc_880B5118:
	// lwz r27,328(r1)
	ctx.current_instruction = 0x880B5118;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r20,320(r1)
	ctx.current_instruction = 0x880B511C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r21,304(r1)
	ctx.current_instruction = 0x880B5120;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
loc_880B5124:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B5124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b51bc
	if (ctx.cr6.eq) goto loc_880B51BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B5138;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r4,1300(r1)
	ctx.current_instruction = 0x880B5140;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1300);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B5158;
	sub_8810B7F8(ctx, base);
loc_880B5158:
	// addi r7,r1,312
	ctx.r7.s64 = ctx.r1.s64 + 312;
	// addi r6,r1,308
	ctx.r6.s64 = ctx.r1.s64 + 308;
	// lwz r4,1276(r1)
	ctx.current_instruction = 0x880B5160;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1276);
	// addi r11,r1,316
	ctx.r11.s64 = ctx.r1.s64 + 316;
	// stw r7,92(r1)
	ctx.current_instruction = 0x880B5168;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,84(r1)
	ctx.current_instruction = 0x880B516C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,116(r1)
	ctx.current_instruction = 0x880B5178;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r28,108(r1)
	ctx.current_instruction = 0x880B5180;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B5188;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B519C;
	sub_88085938(ctx, base);
loc_880B519C:
	// lwz r10,312(r1)
	ctx.current_instruction = 0x880B519C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r5,316(r1)
	ctx.current_instruction = 0x880B51A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r11,308(r1)
	ctx.current_instruction = 0x880B51A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// add r20,r10,r20
	ctx.r20.u64 = ctx.r10.u64 + ctx.r20.u64;
	// or r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 | ctx.r27.u64;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r20,320(r1)
	ctx.current_instruction = 0x880B51B4;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r20.u32);
	// stw r27,328(r1)
	ctx.current_instruction = 0x880B51B8;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
loc_880B51BC:
	// lwz r11,1316(r1)
	ctx.current_instruction = 0x880B51BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// lwz r19,0(r11)
	ctx.current_instruction = 0x880B51C0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,12(r11)
	ctx.current_instruction = 0x880B51C4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r24,8(r11)
	ctx.current_instruction = 0x880B51C8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x880b5290
	if (ctx.cr6.eq) goto loc_880B5290;
	// lwz r9,2616(r31)
	ctx.current_instruction = 0x880B51D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r17,2608(r31)
	ctx.current_instruction = 0x880B51DC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r16,2604(r31)
	ctx.current_instruction = 0x880B51E4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r25,r17
	ctx.r10.u64 = ctx.r17.u64 - ctx.r25.u64;
	// lwz r8,2612(r31)
	ctx.current_instruction = 0x880B51F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// lwz r23,20(r11)
	ctx.current_instruction = 0x880B51F4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,304(r1)
	ctx.current_instruction = 0x880B51F8;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// subf r9,r24,r16
	ctx.r9.u64 = ctx.r16.u64 - ctx.r24.u64;
	// add r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 + ctx.r15.u64;
	// lwz r22,16(r11)
	ctx.current_instruction = 0x880B5204;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r9,r9,r14
	ctx.r9.u64 = ctx.r9.u64 + ctx.r14.u64;
	// lwz r11,304(r1)
	ctx.current_instruction = 0x880B520C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r8,336(r1)
	ctx.current_instruction = 0x880B5214;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r8.u32);
	// and r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stw r11,304(r1)
	ctx.current_instruction = 0x880B521C;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// subf r5,r17,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r17.u64;
	// subf r4,r16,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r16.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B522C;
	sub_88085E60(ctx, base);
loc_880B522C:
	// lwz r15,348(r1)
	ctx.current_instruction = 0x880B522C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// subf r11,r23,r17
	ctx.r11.u64 = ctx.r17.u64 - ctx.r23.u64;
	// lwz r9,304(r1)
	ctx.current_instruction = 0x880B5234;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r14,344(r1)
	ctx.current_instruction = 0x880B5238;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// subf r10,r22,r16
	ctx.r10.u64 = ctx.r16.u64 - ctx.r22.u64;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r10,r10,r14
	ctx.r10.u64 = ctx.r10.u64 + ctx.r14.u64;
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lwz r11,336(r1)
	ctx.current_instruction = 0x880B524C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r7,0
	ctx.r7.s64 = 0;
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// subf r5,r17,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r17.u64;
	// stw r11,336(r1)
	ctx.current_instruction = 0x880B5264;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// subf r4,r16,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B5274;
	sub_88085E60(ctx, base);
loc_880B5274:
	// lwz r17,336(r1)
	ctx.current_instruction = 0x880B5274;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r16,356(r1)
	ctx.current_instruction = 0x880B5278;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmpw cr6,r17,r3
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r3.s32, ctx.xer);
	// lwz r17,352(r1)
	ctx.current_instruction = 0x880B5280;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// blt cr6,0x880b5290
	if (ctx.cr6.lt) goto loc_880B5290;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_880B5290:
	// lwz r9,2608(r31)
	ctx.current_instruction = 0x880B5290;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,2604(r31)
	ctx.current_instruction = 0x880B5298;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// subf r11,r25,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r25.u64;
	// lwz r5,2616(r31)
	ctx.current_instruction = 0x880B52A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r10,r24,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r24.u64;
	// lwz r4,2612(r31)
	ctx.current_instruction = 0x880B52AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r11,r10,r14
	ctx.r11.u64 = ctx.r10.u64 + ctx.r14.u64;
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
	ctx.lr = 0x880B52D0;
	sub_88085E60(ctx, base);
loc_880B52D0:
	// add r11,r3,r21
	ctx.r11.u64 = ctx.r3.u64 + ctx.r21.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x880b52e0
	if (ctx.cr6.eq) goto loc_880B52E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880B52E0:
	// stw r16,332(r1)
	ctx.current_instruction = 0x880B52E0;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r16.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r17,324(r1)
	ctx.current_instruction = 0x880B52E8;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r17.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,108(r26)
	ctx.current_instruction = 0x880B52F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 108);
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,304(r1)
	ctx.current_instruction = 0x880B5308;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// bl 0x8810aa38
	ctx.lr = 0x880B5314;
	sub_8810AA38(ctx, base);
loc_880B5314:
	// stw r18,84(r1)
	ctx.current_instruction = 0x880B5314;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// lwz r8,324(r1)
	ctx.current_instruction = 0x880B5318;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,332(r1)
	ctx.current_instruction = 0x880B5320;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r6,16
	ctx.r6.s64 = 16;
	// srawi r3,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 2;
	// lwz r27,1284(r1)
	ctx.current_instruction = 0x880B532C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1284);
	// srawi r4,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B5334;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r25,1380(r31)
	ctx.current_instruction = 0x880B533C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r24,2488(r31)
	ctx.current_instruction = 0x880B5340;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mullw r11,r3,r25
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880B535C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B535C:
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// lwz r4,1260(r1)
	ctx.current_instruction = 0x880B5364;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// addi r11,r1,328
	ctx.r11.s64 = ctx.r1.s64 + 328;
	// stw r9,92(r1)
	ctx.current_instruction = 0x880B536C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B5370;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r29,116(r1)
	ctx.current_instruction = 0x880B537C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r28,108(r1)
	ctx.current_instruction = 0x880B5384;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B538C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B53A0;
	sub_88085938(ctx, base);
loc_880B53A0:
	// lwz r11,332(r1)
	ctx.current_instruction = 0x880B53A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,324(r1)
	ctx.current_instruction = 0x880B53A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,360
	ctx.r7.s64 = ctx.r1.s64 + 360;
	// addi r6,r1,340
	ctx.r6.s64 = ctx.r1.s64 + 340;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stw r11,368(r1)
	ctx.current_instruction = 0x880B53B8;
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stw r10,384(r1)
	ctx.current_instruction = 0x880B53C0;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880B53CC;
	sub_88095050(ctx, base);
loc_880B53CC:
	// lwz r9,28100(r31)
	ctx.current_instruction = 0x880B53CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r25,360(r1)
	ctx.current_instruction = 0x880B53D8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r23,340(r1)
	ctx.current_instruction = 0x880B53DC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// beq cr6,0x880b5474
	if (ctx.cr6.eq) goto loc_880B5474;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B53E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r4,1292(r1)
	ctx.current_instruction = 0x880B53F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1292);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B5408;
	sub_8810B7F8(ctx, base);
loc_880B5408:
	// stw r29,116(r1)
	ctx.current_instruction = 0x880B5408;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r28,108(r1)
	ctx.current_instruction = 0x880B540C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r7,r1,312
	ctx.r7.s64 = ctx.r1.s64 + 312;
	// addi r6,r1,308
	ctx.r6.s64 = ctx.r1.s64 + 308;
	// lwz r4,1268(r1)
	ctx.current_instruction = 0x880B5418;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1268);
	// addi r11,r1,316
	ctx.r11.s64 = ctx.r1.s64 + 316;
	// stw r7,92(r1)
	ctx.current_instruction = 0x880B5420;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,84(r1)
	ctx.current_instruction = 0x880B5424;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B5430;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B544C;
	sub_88085938(ctx, base);
loc_880B544C:
	// lwz r11,312(r1)
	ctx.current_instruction = 0x880B544C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,320(r1)
	ctx.current_instruction = 0x880B5450;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r10,308(r1)
	ctx.current_instruction = 0x880B5454;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// add r22,r11,r4
	ctx.r22.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r5,304(r1)
	ctx.current_instruction = 0x880B545C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r3,328(r1)
	ctx.current_instruction = 0x880B5460;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// add r24,r10,r5
	ctx.r24.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r11,316(r1)
	ctx.current_instruction = 0x880B5468;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// or r27,r11,r3
	ctx.r27.u64 = ctx.r11.u64 | ctx.r3.u64;
	// b 0x880b5480
	goto loc_880B5480;
loc_880B5474:
	// lwz r27,328(r1)
	ctx.current_instruction = 0x880B5474;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r22,320(r1)
	ctx.current_instruction = 0x880B5478;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r24,304(r1)
	ctx.current_instruction = 0x880B547C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
loc_880B5480:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B5480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b5510
	if (ctx.cr6.eq) goto loc_880B5510;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B5494;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r4,1300(r1)
	ctx.current_instruction = 0x880B549C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1300);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B54B4;
	sub_8810B7F8(ctx, base);
loc_880B54B4:
	// addi r9,r1,312
	ctx.r9.s64 = ctx.r1.s64 + 312;
	// stw r29,116(r1)
	ctx.current_instruction = 0x880B54B8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r8,r1,308
	ctx.r8.s64 = ctx.r1.s64 + 308;
	// stw r9,92(r1)
	ctx.current_instruction = 0x880B54C0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r1,316
	ctx.r11.s64 = ctx.r1.s64 + 316;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B54C8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r4,1276(r1)
	ctx.current_instruction = 0x880B54D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1276);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r28,108(r1)
	ctx.current_instruction = 0x880B54DC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B54E4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B54F8;
	sub_88085938(ctx, base);
loc_880B54F8:
	// lwz r10,308(r1)
	ctx.current_instruction = 0x880B54F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r11,312(r1)
	ctx.current_instruction = 0x880B54FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r7,316(r1)
	ctx.current_instruction = 0x880B5500;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// or r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 | ctx.r27.u64;
loc_880B5510:
	// lwz r11,1324(r1)
	ctx.current_instruction = 0x880B5510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// lwz r23,0(r11)
	ctx.current_instruction = 0x880B5514;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,12(r11)
	ctx.current_instruction = 0x880B5518;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,8(r11)
	ctx.current_instruction = 0x880B551C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x880b55b8
	if (ctx.cr6.eq) goto loc_880B55B8;
	// lwz r20,2608(r31)
	ctx.current_instruction = 0x880B5528;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r19,2604(r31)
	ctx.current_instruction = 0x880B5530;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// subf r9,r30,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r30.u64;
	// lwz r18,2616(r31)
	ctx.current_instruction = 0x880B553C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r10,r29,r19
	ctx.r10.u64 = ctx.r19.u64 - ctx.r29.u64;
	// lwz r14,2612(r31)
	ctx.current_instruction = 0x880B5544;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
	// lwz r28,20(r11)
	ctx.current_instruction = 0x880B554C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r8,r10,r16
	ctx.r8.u64 = ctx.r10.u64 + ctx.r16.u64;
	// lwz r25,16(r11)
	ctx.current_instruction = 0x880B5554;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// and r5,r9,r18
	ctx.r5.u64 = ctx.r9.u64 & ctx.r18.u64;
	// and r4,r8,r14
	ctx.r4.u64 = ctx.r8.u64 & ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r20,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r20.u64;
	// subf r4,r19,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r19.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B5570;
	sub_88085E60(ctx, base);
loc_880B5570:
	// subf r11,r25,r19
	ctx.r11.u64 = ctx.r19.u64 - ctx.r25.u64;
	// subf r10,r28,r20
	ctx.r10.u64 = ctx.r20.u64 - ctx.r28.u64;
	// add r9,r11,r16
	ctx.r9.u64 = ctx.r11.u64 + ctx.r16.u64;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// and r4,r9,r14
	ctx.r4.u64 = ctx.r9.u64 & ctx.r14.u64;
	// and r8,r10,r18
	ctx.r8.u64 = ctx.r10.u64 & ctx.r18.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// subf r5,r20,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r20.u64;
	// subf r4,r19,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B55A4;
	sub_88085E60(ctx, base);
loc_880B55A4:
	// lwz r14,344(r1)
	ctx.current_instruction = 0x880B55A4;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// cmpw cr6,r18,r3
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x880b55b8
	if (ctx.cr6.lt) goto loc_880B55B8;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_880B55B8:
	// lwz r9,2608(r31)
	ctx.current_instruction = 0x880B55B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,2604(r31)
	ctx.current_instruction = 0x880B55C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// subf r10,r30,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r30.u64;
	// lwz r5,2616(r31)
	ctx.current_instruction = 0x880B55CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r11,r29,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r29.u64;
	// lwz r4,2612(r31)
	ctx.current_instruction = 0x880B55D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r3,r10,r17
	ctx.r3.u64 = ctx.r10.u64 + ctx.r17.u64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
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
	ctx.lr = 0x880B55F8;
	sub_88085E60(ctx, base);
loc_880B55F8:
	// add r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 + ctx.r24.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x880b5608
	if (ctx.cr6.eq) goto loc_880B5608;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880B5608:
	// lwz r10,108(r26)
	ctx.current_instruction = 0x880B5608;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 108);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// b 0x880b5620
	goto loc_880B5620;
loc_880B5618:
	// lwz r11,336(r1)
	ctx.current_instruction = 0x880B5618;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r21,340(r1)
	ctx.current_instruction = 0x880B561C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_880B5620:
	// lwz r10,1420(r1)
	ctx.current_instruction = 0x880B5620;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// lwz r9,1428(r1)
	ctx.current_instruction = 0x880B5624;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1428);
	// lwz r8,1436(r1)
	ctx.current_instruction = 0x880B5628;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// lwz r7,1444(r1)
	ctx.current_instruction = 0x880B562C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// lwz r6,1452(r1)
	ctx.current_instruction = 0x880B5630;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1452);
	// lwz r5,1460(r1)
	ctx.current_instruction = 0x880B5634;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1460);
	// stw r14,0(r10)
	ctx.current_instruction = 0x880B5638;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r14.u32);
	// stw r15,0(r9)
	ctx.current_instruction = 0x880B563C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r15.u32);
	// stw r21,0(r8)
	ctx.current_instruction = 0x880B5640;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r21.u32);
	// stw r16,0(r7)
	ctx.current_instruction = 0x880B5644;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r16.u32);
	// stw r17,0(r6)
	ctx.current_instruction = 0x880B5648;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r17.u32);
	// stw r11,0(r5)
	ctx.current_instruction = 0x880B564C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C73F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C73F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C73F8) {
			switch (rex_dispatch_address) {
				case 0x880C7400:
				case 0x880C7438:
				case 0x880C74C4:
				case 0x880C74E4:
				case 0x880C7528:
				case 0x880C7584:
				case 0x880C7618:
				case 0x880C7638:
				case 0x880C7690:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C73F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C7400: goto loc_880C7400;
		case 0x880C7438: goto loc_880C7438;
		case 0x880C74C4: goto loc_880C74C4;
		case 0x880C74E4: goto loc_880C74E4;
		case 0x880C7528: goto loc_880C7528;
		case 0x880C7584: goto loc_880C7584;
		case 0x880C7618: goto loc_880C7618;
		case 0x880C7638: goto loc_880C7638;
		case 0x880C7690: goto loc_880C7690;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x880C7400;
	__savegprlr_21(ctx, base);
loc_880C7400:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x880C7400;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x880C7404;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,348(r3)
	ctx.current_instruction = 0x880C740C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r28,16(r10)
	ctx.current_instruction = 0x880C7420;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// lhz r27,14(r10)
	ctx.current_instruction = 0x880C7428;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c7440
	if (!ctx.cr6.eq) goto loc_880C7440;
	// bl 0x880c6200
	ctx.lr = 0x880C7438;
	sub_880C6200(ctx, base);
loc_880C7438:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_880C7440:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880c74ec
	if (!ctx.cr6.eq) goto loc_880C74EC;
	// lwz r8,352(r31)
	ctx.current_instruction = 0x880C7448;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x880c76a8
	if (ctx.cr6.eq) goto loc_880C76A8;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880C7454;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r11)
	ctx.current_instruction = 0x880C7458;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bgt cr6,0x880c7470
	if (ctx.cr6.gt) goto loc_880C7470;
	// neg r11,r9
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_880C7470:
	// lwz r6,4(r31)
	ctx.current_instruction = 0x880C7470;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r22,56(r31)
	ctx.current_instruction = 0x880C747C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r21,12(r31)
	ctx.current_instruction = 0x880C7480;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x880C748C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,44(r31)
	ctx.current_instruction = 0x880C7490;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,4(r6)
	ctx.current_instruction = 0x880C7494;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r6,40(r31)
	ctx.current_instruction = 0x880C7498;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r30,148(r1)
	ctx.current_instruction = 0x880C749C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r22,140(r1)
	ctx.current_instruction = 0x880C74A0;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// stw r27,132(r1)
	ctx.current_instruction = 0x880C74A4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r8,108(r1)
	ctx.current_instruction = 0x880C74A8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r28,124(r1)
	ctx.current_instruction = 0x880C74AC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r11,116(r1)
	ctx.current_instruction = 0x880C74B0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r30,100(r1)
	ctx.current_instruction = 0x880C74B4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,92(r1)
	ctx.current_instruction = 0x880C74B8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r21,84(r1)
	ctx.current_instruction = 0x880C74BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// bl 0x880c6588
	ctx.lr = 0x880C74C4;
	sub_880C6588(ctx, base);
loc_880C74C4:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r4,352(r31)
	ctx.current_instruction = 0x880C74C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c6200
	ctx.lr = 0x880C74E4;
	sub_880C6200(ctx, base);
loc_880C74E4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x880c7690
	goto loc_880C7690;
loc_880C74EC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880c7588
	if (!ctx.cr6.eq) goto loc_880C7588;
	// lwz r7,356(r31)
	ctx.current_instruction = 0x880C74F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x880c7510
	if (!ctx.cr6.eq) goto loc_880C7510;
loc_880C7500:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_880C7510:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c6200
	ctx.lr = 0x880C7528;
	sub_880C6200(ctx, base);
loc_880C7528:
	// lwz r7,36(r31)
	ctx.current_instruction = 0x880C7528;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,32(r31)
	ctx.current_instruction = 0x880C752C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880C7534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r24,28(r31)
	ctx.current_instruction = 0x880C753C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r23,24(r31)
	ctx.current_instruction = 0x880C7544;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,52(r31)
	ctx.current_instruction = 0x880C7550;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,48(r31)
	ctx.current_instruction = 0x880C7554;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,356(r31)
	ctx.current_instruction = 0x880C7558;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// stw r7,116(r1)
	ctx.current_instruction = 0x880C755C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,108(r1)
	ctx.current_instruction = 0x880C7560;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r11,148(r1)
	ctx.current_instruction = 0x880C7564;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r30,140(r1)
	ctx.current_instruction = 0x880C7568;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r27,132(r1)
	ctx.current_instruction = 0x880C756C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r28,124(r1)
	ctx.current_instruction = 0x880C7570;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r24,100(r1)
	ctx.current_instruction = 0x880C7574;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r23,92(r1)
	ctx.current_instruction = 0x880C7578;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r30,84(r1)
	ctx.current_instruction = 0x880C757C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x880c6588
	ctx.lr = 0x880C7584;
	sub_880C6588(ctx, base);
loc_880C7584:
	// b 0x880c7690
	goto loc_880C7690;
loc_880C7588:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880c76a8
	if (!ctx.cr6.eq) goto loc_880C76A8;
	// lwz r11,356(r31)
	ctx.current_instruction = 0x880C7590;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880c7500
	if (ctx.cr6.eq) goto loc_880C7500;
	// lwz r10,352(r31)
	ctx.current_instruction = 0x880C759C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880c7500
	if (ctx.cr6.eq) goto loc_880C7500;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880C75A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r11)
	ctx.current_instruction = 0x880C75AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bgt cr6,0x880c75c4
	if (ctx.cr6.gt) goto loc_880C75C4;
	// neg r11,r9
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_880C75C4:
	// lwz r8,4(r31)
	ctx.current_instruction = 0x880C75C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r6,12(r31)
	ctx.current_instruction = 0x880C75CC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r30,92(r1)
	ctx.current_instruction = 0x880C75D4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r30,100(r1)
	ctx.current_instruction = 0x880C75DC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,56(r31)
	ctx.current_instruction = 0x880C75E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,4(r8)
	ctx.current_instruction = 0x880C75E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,84(r1)
	ctx.current_instruction = 0x880C75EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x880C75F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,40(r31)
	ctx.current_instruction = 0x880C75F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r7,140(r1)
	ctx.current_instruction = 0x880C75F8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r8,108(r1)
	ctx.current_instruction = 0x880C75FC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lwz r7,44(r31)
	ctx.current_instruction = 0x880C7600;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r27,132(r1)
	ctx.current_instruction = 0x880C7604;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r11,116(r1)
	ctx.current_instruction = 0x880C7608;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r28,124(r1)
	ctx.current_instruction = 0x880C760C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r30,148(r1)
	ctx.current_instruction = 0x880C7610;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// bl 0x880c6588
	ctx.lr = 0x880C7618;
	sub_880C6588(ctx, base);
loc_880C7618:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r7,356(r31)
	ctx.current_instruction = 0x880C7620;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,352(r31)
	ctx.current_instruction = 0x880C7628;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c6200
	ctx.lr = 0x880C7638;
	sub_880C6200(ctx, base);
loc_880C7638:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r7,36(r31)
	ctx.current_instruction = 0x880C763C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r6,32(r31)
	ctx.current_instruction = 0x880C7644;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880C764C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,28(r31)
	ctx.current_instruction = 0x880C7654;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r25,24(r31)
	ctx.current_instruction = 0x880C7658;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,52(r31)
	ctx.current_instruction = 0x880C765C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,48(r31)
	ctx.current_instruction = 0x880C7660;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,356(r31)
	ctx.current_instruction = 0x880C7664;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// stw r7,116(r1)
	ctx.current_instruction = 0x880C7668;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,108(r1)
	ctx.current_instruction = 0x880C766C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r11,148(r1)
	ctx.current_instruction = 0x880C7670;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r30,140(r1)
	ctx.current_instruction = 0x880C7674;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r27,132(r1)
	ctx.current_instruction = 0x880C7678;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r28,124(r1)
	ctx.current_instruction = 0x880C767C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r24,100(r1)
	ctx.current_instruction = 0x880C7680;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r25,92(r1)
	ctx.current_instruction = 0x880C7684;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r30,84(r1)
	ctx.current_instruction = 0x880C7688;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x880c6588
	ctx.lr = 0x880C7690;
	sub_880C6588(ctx, base);
loc_880C7690:
	// lwz r11,0(r26)
	ctx.current_instruction = 0x880C7690;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880c7500
	if (ctx.cr6.eq) goto loc_880C7500;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_880C76A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB090) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CB090;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CB090) {
			switch (rex_dispatch_address) {
				case 0x880CB098:
				case 0x880CB0E4:
				case 0x880CB128:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CB090;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CB098: goto loc_880CB098;
		case 0x880CB0E4: goto loc_880CB0E4;
		case 0x880CB128: goto loc_880CB128;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880CB098;
	__savegprlr_24(ctx, base);
loc_880CB098:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880CB098;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r31,80(r1)
	ctx.current_instruction = 0x880CB0A4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r31,96(r1)
	ctx.current_instruction = 0x880CB0AC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r31,100(r1)
	ctx.current_instruction = 0x880CB0B4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x880caef8
	ctx.lr = 0x880CB0E4;
	sub_880CAEF8(ctx, base);
loc_880CB0E4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x880cb128
	if (ctx.cr6.eq) goto loc_880CB128;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,84(r1)
	ctx.current_instruction = 0x880CB0F0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r25,88(r1)
	ctx.current_instruction = 0x880CB0F4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CB0FC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	ctx.current_instruction = 0x880CB104;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	ctx.current_instruction = 0x880CB10C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880caef8
	ctx.lr = 0x880CB128;
	sub_880CAEF8(ctx, base);
loc_880CB128:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB6B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CB6B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CB6B0) {
			switch (rex_dispatch_address) {
				case 0x880CB6F0:
				case 0x880CB708:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CB6B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CB6F0: goto loc_880CB6F0;
		case 0x880CB708: goto loc_880CB708;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880CB6B4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880CB6B8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880CB6BC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880CB6C0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,520(r3)
	ctx.current_instruction = 0x880CB6C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cb6f0
	if (ctx.cr6.eq) goto loc_880CB6F0;
	// rlwinm r10,r4,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// lwz r6,524(r3)
	ctx.current_instruction = 0x880CB6DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r4,r10,r3
	ctx.current_instruction = 0x880CB6E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bctrl 
	ctx.lr = 0x880CB6F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CB6F0:
	// rlwinm r11,r30,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// lwz r3,508(r31)
	ctx.current_instruction = 0x880CB6F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,2
	ctx.r4.s64 = 2;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x880cb318
	ctx.lr = 0x880CB708;
	sub_880CB318(ctx, base);
loc_880CB708:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cb718
	if (ctx.cr6.lt) goto loc_880CB718;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	ctx.current_instruction = 0x880CB714;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_880CB718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880CB71C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880CB724;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880CB728;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CCAA8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CCAA8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CCAA8;
	ctx.current_instruction = 0x880CCAA8;
	// lwz r9,0(r6)
	ctx.current_instruction = 0x880CCAA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880ccae0
	if (!ctx.cr6.eq) goto loc_880CCAE0;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880ccad4
	if (ctx.cr6.eq) goto loc_880CCAD4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880CCAD4:
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880CCAD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880CCAD8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x880cc8a0
	sub_880CC8A0(ctx, base);
	return;
loc_880CCAE0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CD030) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CD030);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD030;
	ctx.current_instruction = 0x880CD030;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CD1F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CD1F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CD1F0) {
			switch (rex_dispatch_address) {
				case 0x880CD1F8:
				case 0x880CD214:
				case 0x880CD230:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD1F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CD1F8: goto loc_880CD1F8;
		case 0x880CD214: goto loc_880CD214;
		case 0x880CD230: goto loc_880CD230;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880CD1F8;
	__savegprlr_29(ctx, base);
loc_880CD1F8:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880CD1F8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	ctx.current_instruction = 0x880CD1FC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880cd168
	ctx.lr = 0x880CD214;
	sub_880CD168(ctx, base);
loc_880CD214:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880CD214;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cd238
	if (ctx.cr6.eq) goto loc_880CD238;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,64(r30)
	ctx.current_instruction = 0x880CD224;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x880cb318
	ctx.lr = 0x880CD230;
	sub_880CB318(ctx, base);
loc_880CD230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CD238:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CDE90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CDE90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CDE90) {
			switch (rex_dispatch_address) {
				case 0x880CDE98:
				case 0x880CDEE8:
				case 0x880CE18C:
				case 0x880CE624:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CDE90;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CDE98: goto loc_880CDE98;
		case 0x880CDEE8: goto loc_880CDEE8;
		case 0x880CE18C: goto loc_880CE18C;
		case 0x880CE624: goto loc_880CE624;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x880CDE98;
	__savegprlr_22(ctx, base);
loc_880CDE98:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x880CDE98;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,80(r1)
	ctx.current_instruction = 0x880CDEA8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bne cr6,0x880cdebc
	if (!ctx.cr6.eq) goto loc_880CDEBC;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_880CDEBC:
	// addi r25,r4,-24
	ctx.r25.s64 = ctx.r4.s64 + -24;
	// cmplwi cr6,r25,54
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 54, ctx.xer);
	// bge cr6,0x880cded4
	if (!ctx.cr6.lt) goto loc_880CDED4;
loc_880CDEC8:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_880CDED4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.current_instruction = 0x880CDED8;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,54
	ctx.r5.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CDEE8;
	sub_8805ADC8(ctx, base);
loc_880CDEE8:
	// cmplwi cr6,r3,54
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 54, ctx.xer);
	// bne cr6,0x880cdec8
	if (!ctx.cr6.eq) goto loc_880CDEC8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CDEF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,54
	ctx.r26.s64 = 54;
	// lbz r9,3(r11)
	ctx.current_instruction = 0x880CDEF8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,2(r11)
	ctx.current_instruction = 0x880CDEFC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CDF04;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880CDF08;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDF14;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r4,1(r11)
	ctx.current_instruction = 0x880CDF20;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r4,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880CDF30;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,112(r1)
	ctx.current_instruction = 0x880CDF3C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDF40;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CDF44;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,1(r11)
	ctx.current_instruction = 0x880CDF48;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbzu r4,2(r11)
	ctx.current_instruction = 0x880CDF50;
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDF58;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r5,1(r11)
	ctx.current_instruction = 0x880CDF5C;
	ea = 1 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDF60;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r30,1(r11)
	ctx.current_instruction = 0x880CDF64;
	ea = 1 + ctx.r11.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDF68;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r29,1(r11)
	ctx.current_instruction = 0x880CDF6C;
	ea = 1 + ctx.r11.u32;
	ctx.r29.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDF70;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r27,1(r11)
	ctx.current_instruction = 0x880CDF74;
	ea = 1 + ctx.r11.u32;
	ctx.r27.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDF78;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r24,1(r11)
	ctx.current_instruction = 0x880CDF7C;
	ea = 1 + ctx.r11.u32;
	ctx.r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDF80;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r23,1(r11)
	ctx.current_instruction = 0x880CDF84;
	ea = 1 + ctx.r11.u32;
	ctx.r23.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDF88;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r22,1(r11)
	ctx.current_instruction = 0x880CDF8C;
	ea = 1 + ctx.r11.u32;
	ctx.r22.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDF94;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r7,2(r11)
	ctx.current_instruction = 0x880CDF98;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CDF9C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CDFA0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,3(r11)
	ctx.current_instruction = 0x880CDFA4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stb r5,121(r1)
	ctx.current_instruction = 0x880CDFB0;
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r5.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,116(r1)
	ctx.current_instruction = 0x880CDFB8;
	REX_STORE_U16(ctx.r1.u32 + 116, ctx.r6.u16);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stb r4,120(r1)
	ctx.current_instruction = 0x880CDFC0;
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r4.u8);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDFC4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stb r30,122(r1)
	ctx.current_instruction = 0x880CDFCC;
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r30.u8);
	// stb r29,123(r1)
	ctx.current_instruction = 0x880CDFD0;
	REX_STORE_U8(ctx.r1.u32 + 123, ctx.r29.u8);
	// lbz r6,1(r11)
	ctx.current_instruction = 0x880CDFD4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880CDFDC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r3,118(r1)
	ctx.current_instruction = 0x880CDFE8;
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDFEC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rotlwi r8,r6,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r10,1(r11)
	ctx.current_instruction = 0x880CDFF4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CDFFC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzu r7,2(r11)
	ctx.current_instruction = 0x880CE004;
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r4,96(r1)
	ctx.current_instruction = 0x880CE008;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CE010;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lbzu r5,1(r11)
	ctx.current_instruction = 0x880CE018;
	ea = 1 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r24,125(r1)
	ctx.current_instruction = 0x880CE01C;
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r24.u8);
	// stb r27,124(r1)
	ctx.current_instruction = 0x880CE020;
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r27.u8);
	// stb r23,126(r1)
	ctx.current_instruction = 0x880CE024;
	REX_STORE_U8(ctx.r1.u32 + 126, ctx.r23.u8);
	// stb r22,127(r1)
	ctx.current_instruction = 0x880CE028;
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r22.u8);
	// stb r7,104(r1)
	ctx.current_instruction = 0x880CE02C;
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// sth r8,100(r1)
	ctx.current_instruction = 0x880CE030;
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CE034;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r10,14024
	ctx.r10.s64 = ctx.r10.s64 + 14024;
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x880CE03C;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CE044;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// sth r4,102(r1)
	ctx.current_instruction = 0x880CE04C;
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r4.u16);
	// lbzu r4,1(r11)
	ctx.current_instruction = 0x880CE050;
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CE054;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x880CE058;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CE05C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r29,1(r11)
	ctx.current_instruction = 0x880CE060;
	ea = 1 + ctx.r11.u32;
	ctx.r29.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CE064;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r27,1(r11)
	ctx.current_instruction = 0x880CE068;
	ea = 1 + ctx.r11.u32;
	ctx.r27.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CE06C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r24,1(r11)
	ctx.current_instruction = 0x880CE070;
	ea = 1 + ctx.r11.u32;
	ctx.r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CE078;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r7,1(r11)
	ctx.current_instruction = 0x880CE07C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,106(r1)
	ctx.current_instruction = 0x880CE080;
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x880CE084;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,105(r1)
	ctx.current_instruction = 0x880CE088;
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r5.u8);
	// lbz r6,2(r11)
	ctx.current_instruction = 0x880CE08C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.current_instruction = 0x880CE090;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CE098;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r9,108(r1)
	ctx.current_instruction = 0x880CE09C;
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// rotlwi r9,r5,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// stb r4,107(r1)
	ctx.current_instruction = 0x880CE0A4;
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r4.u8);
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r9,3(r11)
	ctx.current_instruction = 0x880CE0AC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r5,r9,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x880CE0B8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbz r6,1(r11)
	ctx.current_instruction = 0x880CE0C0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880CE0C8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r29,109(r1)
	ctx.current_instruction = 0x880CE0D0;
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r29.u8);
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stb r27,110(r1)
	ctx.current_instruction = 0x880CE0D8;
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r27.u8);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CE0DC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r24,111(r1)
	ctx.current_instruction = 0x880CE0E8;
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r24.u8);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880CE0EC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x880CE0F0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r4,80(r1)
	ctx.current_instruction = 0x880CE0F8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r11,r7
	ctx.r27.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
loc_880CE114:
	// lbz r11,0(r10)
	ctx.current_instruction = 0x880CE114;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r3)
	ctx.current_instruction = 0x880CE118;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// subf. r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x880ce134
	if (!ctx.cr0.eq) goto loc_880CE134;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880ce114
	if (!ctx.cr6.eq) goto loc_880CE114;
loc_880CE134:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ce6f4
	if (!ctx.cr6.eq) goto loc_880CE6F4;
	// lhz r11,238(r31)
	ctx.current_instruction = 0x880CE13C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 238);
	// lhz r10,236(r31)
	ctx.current_instruction = 0x880CE140;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 236);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r7,238(r31)
	ctx.current_instruction = 0x880CE14C;
	REX_STORE_U16(ctx.r31.u32 + 238, ctx.r7.u16);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880ce6f4
	if (!ctx.cr6.eq) goto loc_880CE6F4;
	// clrlwi r11,r9,25
	ctx.r11.u64 = ctx.r9.u32 & 0x7F;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// sth r11,228(r31)
	ctx.current_instruction = 0x880CE160;
	REX_STORE_U16(ctx.r31.u32 + 228, ctx.r11.u16);
	// beq cr6,0x880ce45c
	if (ctx.cr6.eq) goto loc_880CE45C;
	// addi r11,r29,54
	ctx.r11.s64 = ctx.r29.s64 + 54;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x880cdec8
	if (ctx.cr6.gt) goto loc_880CDEC8;
	// ld r11,0(r31)
	ctx.current_instruction = 0x880CE174;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,54
	ctx.r4.s64 = ctx.r11.s64 + 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CE18C;
	sub_8805ADC8(ctx, base);
loc_880CE18C:
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x880cdec8
	if (!ctx.cr6.eq) goto loc_880CDEC8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CE194;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r3,54
	ctx.r26.s64 = ctx.r3.s64 + 54;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x880CE19C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CE1A0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r9,r10,-352
	ctx.r9.s64 = ctx.r10.s64 + -352;
	// sth r10,62(r31)
	ctx.current_instruction = 0x880CE1B4;
	REX_STORE_U16(ctx.r31.u32 + 62, ctx.r10.u16);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x880ce5b8
	if (ctx.cr6.gt) goto loc_880CE5B8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880ce4c0
	if (ctx.cr6.eq) goto loc_880CE4C0;
	// bdz 0x880ce33c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_880CE33C;
	// bdz 0x880ce1d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_880CE1D4;
loc_880CE1D4:
	// cmplwi cr6,r29,36
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 36, ctx.xer);
	// blt cr6,0x880ce5b8
	if (ctx.cr6.lt) goto loc_880CE5B8;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r6,-2
	ctx.r6.s64 = -2;
	// sth r10,60(r31)
	ctx.current_instruction = 0x880CE1E4;
	REX_STORE_U16(ctx.r31.u32 + 60, ctx.r10.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r9,6(r11)
	ctx.current_instruction = 0x880CE1EC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// li r4,16
	ctx.r4.s64 = 16;
	// lbz r8,5(r11)
	ctx.current_instruction = 0x880CE1F4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// li r3,128
	ctx.r3.s64 = 128;
	// lbz r10,7(r11)
	ctx.current_instruction = 0x880CE1FC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,4(r11)
	ctx.current_instruction = 0x880CE208;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// li r30,170
	ctx.r30.s64 = 170;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,64(r31)
	ctx.current_instruction = 0x880CE220;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lbz r7,10(r11)
	ctx.current_instruction = 0x880CE224;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r8,9(r11)
	ctx.current_instruction = 0x880CE228;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r9,8(r11)
	ctx.current_instruction = 0x880CE22C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r10,11(r11)
	ctx.current_instruction = 0x880CE230;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,68(r31)
	ctx.current_instruction = 0x880CE24C;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// lbz r8,13(r11)
	ctx.current_instruction = 0x880CE250;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r9,12(r11)
	ctx.current_instruction = 0x880CE254;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r10,72(r31)
	ctx.current_instruction = 0x880CE264;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lbz r9,2(r11)
	ctx.current_instruction = 0x880CE268;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.current_instruction = 0x880CE26C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r6,88(r31)
	ctx.current_instruction = 0x880CE278;
	REX_STORE_U16(ctx.r31.u32 + 88, ctx.r6.u16);
	// sth r7,76(r31)
	ctx.current_instruction = 0x880CE27C;
	REX_STORE_U16(ctx.r31.u32 + 76, ctx.r7.u16);
	// lbz r10,15(r11)
	ctx.current_instruction = 0x880CE280;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,14(r11)
	ctx.current_instruction = 0x880CE288;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// sth r10,92(r31)
	ctx.current_instruction = 0x880CE298;
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r10.u16);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r10,r6,3,16,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFF8;
	// sth r10,90(r31)
	ctx.current_instruction = 0x880CE2A8;
	REX_STORE_U16(ctx.r31.u32 + 90, ctx.r10.u16);
	// lbz r7,22(r11)
	ctx.current_instruction = 0x880CE2AC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r8,23(r11)
	ctx.current_instruction = 0x880CE2B0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r8,21(r11)
	ctx.current_instruction = 0x880CE2BC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r9,20(r11)
	ctx.current_instruction = 0x880CE2C0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// li r6,155
	ctx.r6.s64 = 155;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,96(r31)
	ctx.current_instruction = 0x880CE2D8;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lbz r9,32(r11)
	ctx.current_instruction = 0x880CE2DC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r8,33(r11)
	ctx.current_instruction = 0x880CE2E0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r7,84(r31)
	ctx.current_instruction = 0x880CE2EC;
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r7.u16);
	// li r7,56
	ctx.r7.s64 = 56;
	// lbz r10,35(r11)
	ctx.current_instruction = 0x880CE2F4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 35);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,34(r11)
	ctx.current_instruction = 0x880CE2FC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 34);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,100(r31)
	ctx.current_instruction = 0x880CE304;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// sth r28,104(r31)
	ctx.current_instruction = 0x880CE308;
	REX_STORE_U16(ctx.r31.u32 + 104, ctx.r28.u16);
	// sth r9,86(r31)
	ctx.current_instruction = 0x880CE30C;
	REX_STORE_U16(ctx.r31.u32 + 86, ctx.r9.u16);
	// sth r4,106(r31)
	ctx.current_instruction = 0x880CE310;
	REX_STORE_U16(ctx.r31.u32 + 106, ctx.r4.u16);
	// stb r3,108(r31)
	ctx.current_instruction = 0x880CE314;
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r3.u8);
	// stb r28,109(r31)
	ctx.current_instruction = 0x880CE318;
	REX_STORE_U8(ctx.r31.u32 + 109, ctx.r28.u8);
	// stb r28,110(r31)
	ctx.current_instruction = 0x880CE31C;
	REX_STORE_U8(ctx.r31.u32 + 110, ctx.r28.u8);
	// li r5,113
	ctx.r5.s64 = 113;
	// stb r30,111(r31)
	ctx.current_instruction = 0x880CE324;
	REX_STORE_U8(ctx.r31.u32 + 111, ctx.r30.u8);
	// stb r28,112(r31)
	ctx.current_instruction = 0x880CE328;
	REX_STORE_U8(ctx.r31.u32 + 112, ctx.r28.u8);
	// stb r7,113(r31)
	ctx.current_instruction = 0x880CE32C;
	REX_STORE_U8(ctx.r31.u32 + 113, ctx.r7.u8);
	// stb r6,114(r31)
	ctx.current_instruction = 0x880CE330;
	REX_STORE_U8(ctx.r31.u32 + 114, ctx.r6.u8);
	// stb r5,115(r31)
	ctx.current_instruction = 0x880CE334;
	REX_STORE_U8(ctx.r31.u32 + 115, ctx.r5.u8);
	// b 0x880ce45c
	goto loc_880CE45C;
loc_880CE33C:
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 28, ctx.xer);
	// blt cr6,0x880ce5b8
	if (ctx.cr6.lt) goto loc_880CE5B8;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r10,60(r31)
	ctx.current_instruction = 0x880CE34C;
	REX_STORE_U16(ctx.r31.u32 + 60, ctx.r10.u16);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x880CE350;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,6(r11)
	ctx.current_instruction = 0x880CE354;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,7(r11)
	ctx.current_instruction = 0x880CE358;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,4(r11)
	ctx.current_instruction = 0x880CE35C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,64(r31)
	ctx.current_instruction = 0x880CE378;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lbz r8,9(r11)
	ctx.current_instruction = 0x880CE37C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r9,8(r11)
	ctx.current_instruction = 0x880CE380;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,10(r11)
	ctx.current_instruction = 0x880CE384;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r5,11(r11)
	ctx.current_instruction = 0x880CE388;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,68(r31)
	ctx.current_instruction = 0x880CE3A4;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lbz r9,12(r11)
	ctx.current_instruction = 0x880CE3A8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r8,13(r11)
	ctx.current_instruction = 0x880CE3AC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r5,72(r31)
	ctx.current_instruction = 0x880CE3BC;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// lbz r9,2(r11)
	ctx.current_instruction = 0x880CE3C0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,3(r11)
	ctx.current_instruction = 0x880CE3C4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r6,88(r31)
	ctx.current_instruction = 0x880CE3D0;
	REX_STORE_U16(ctx.r31.u32 + 88, ctx.r6.u16);
	// sth r3,76(r31)
	ctx.current_instruction = 0x880CE3D4;
	REX_STORE_U16(ctx.r31.u32 + 76, ctx.r3.u16);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lbz r8,14(r11)
	ctx.current_instruction = 0x880CE3DC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lbz r9,15(r11)
	ctx.current_instruction = 0x880CE3E4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r7,90(r31)
	ctx.current_instruction = 0x880CE3F4;
	REX_STORE_U16(ctx.r31.u32 + 90, ctx.r7.u16);
	// sth r7,92(r31)
	ctx.current_instruction = 0x880CE3F8;
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r7.u16);
	// sth r7,116(r31)
	ctx.current_instruction = 0x880CE3FC;
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r7.u16);
	// lbz r8,20(r11)
	ctx.current_instruction = 0x880CE400;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r7,19(r11)
	ctx.current_instruction = 0x880CE404;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r6,21(r11)
	ctx.current_instruction = 0x880CE408;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r8,18(r11)
	ctx.current_instruction = 0x880CE414;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r3,80(r31)
	ctx.current_instruction = 0x880CE428;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lbz r9,23(r11)
	ctx.current_instruction = 0x880CE42C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r11,22(r11)
	ctx.current_instruction = 0x880CE434;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r8,84(r31)
	ctx.current_instruction = 0x880CE43C;
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r8.u16);
	// beq cr6,0x880ce4b8
	if (ctx.cr6.eq) goto loc_880CE4B8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x880ce4b0
	if (ctx.cr6.eq) goto loc_880CE4B0;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x880ce5b8
	if (!ctx.cr6.eq) goto loc_880CE5B8;
	// li r11,63
	ctx.r11.s64 = 63;
loc_880CE458:
	// stw r11,96(r31)
	ctx.current_instruction = 0x880CE458;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_880CE45C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x880ce6f4
	if (ctx.cr6.eq) goto loc_880CE6F4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,14008
	ctx.r29.s64 = ctx.r11.s64 + 14008;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
loc_880CE478:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CE478;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880CE47C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880ce498
	if (!ctx.cr0.eq) goto loc_880CE498;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880ce478
	if (!ctx.cr6.eq) goto loc_880CE478;
loc_880CE498:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r11,13992
	ctx.r28.s64 = ctx.r11.s64 + 13992;
	// bne cr6,0x880ce5c4
	if (!ctx.cr6.eq) goto loc_880CE5C4;
	// li r30,9
	ctx.r30.s64 = 9;
	// b 0x880ce5fc
	goto loc_880CE5FC;
loc_880CE4B0:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x880ce458
	goto loc_880CE458;
loc_880CE4B8:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x880ce458
	goto loc_880CE458;
loc_880CE4C0:
	// cmplwi cr6,r29,22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 22, ctx.xer);
	// blt cr6,0x880ce5b8
	if (ctx.cr6.lt) goto loc_880CE5B8;
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r6,60(r31)
	ctx.current_instruction = 0x880CE4CC;
	REX_STORE_U16(ctx.r31.u32 + 60, ctx.r6.u16);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x880CE4D0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r10,7(r11)
	ctx.current_instruction = 0x880CE4D4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,6(r11)
	ctx.current_instruction = 0x880CE4DC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,4(r11)
	ctx.current_instruction = 0x880CE4E0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,64(r31)
	ctx.current_instruction = 0x880CE4F8;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lbz r7,10(r11)
	ctx.current_instruction = 0x880CE4FC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r9,8(r11)
	ctx.current_instruction = 0x880CE500;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r3,11(r11)
	ctx.current_instruction = 0x880CE504;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r8,9(r11)
	ctx.current_instruction = 0x880CE510;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,68(r31)
	ctx.current_instruction = 0x880CE524;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// lbz r9,12(r11)
	ctx.current_instruction = 0x880CE528;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r5,13(r11)
	ctx.current_instruction = 0x880CE52C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,72(r31)
	ctx.current_instruction = 0x880CE53C;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lbz r9,2(r11)
	ctx.current_instruction = 0x880CE540;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,3(r11)
	ctx.current_instruction = 0x880CE544;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r9,76(r31)
	ctx.current_instruction = 0x880CE550;
	REX_STORE_U16(ctx.r31.u32 + 76, ctx.r9.u16);
	// lbz r7,21(r11)
	ctx.current_instruction = 0x880CE554;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r8,20(r11)
	ctx.current_instruction = 0x880CE55C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r5,84(r31)
	ctx.current_instruction = 0x880CE564;
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r5.u16);
	// lbz r3,19(r11)
	ctx.current_instruction = 0x880CE568;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// rotlwi r9,r3,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lhz r10,76(r31)
	ctx.current_instruction = 0x880CE570;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lbz r8,18(r11)
	ctx.current_instruction = 0x880CE574;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r6,88(r31)
	ctx.current_instruction = 0x880CE580;
	REX_STORE_U16(ctx.r31.u32 + 88, ctx.r6.u16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r8,80(r31)
	ctx.current_instruction = 0x880CE588;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// lbz r7,15(r11)
	ctx.current_instruction = 0x880CE58C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r9,14(r11)
	ctx.current_instruction = 0x880CE590;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// rotlwi r11,r7,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r5,90(r31)
	ctx.current_instruction = 0x880CE5A0;
	REX_STORE_U16(ctx.r31.u32 + 90, ctx.r5.u16);
	// sth r5,92(r31)
	ctx.current_instruction = 0x880CE5A4;
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r5.u16);
	// sth r5,116(r31)
	ctx.current_instruction = 0x880CE5A8;
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r5.u16);
	// beq cr6,0x880ce4b8
	if (ctx.cr6.eq) goto loc_880CE4B8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x880ce4b0
	if (ctx.cr6.eq) goto loc_880CE4B0;
loc_880CE5B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_880CE5C4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
loc_880CE5D0:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CE5D0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880CE5D4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880ce5f0
	if (!ctx.cr0.eq) goto loc_880CE5F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880ce5d0
	if (!ctx.cr6.eq) goto loc_880CE5D0;
loc_880CE5F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880ce5b8
	if (!ctx.cr6.eq) goto loc_880CE5B8;
	// li r30,8
	ctx.r30.s64 = 8;
loc_880CE5FC:
	// add r11,r26,r30
	ctx.r11.u64 = ctx.r26.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x880cdec8
	if (ctx.cr6.gt) goto loc_880CDEC8;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880CE608;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CE624;
	sub_8805ADC8(ctx, base);
loc_880CE624:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x880cdec8
	if (!ctx.cr6.eq) goto loc_880CDEC8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
loc_880CE638:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CE638;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880CE63C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880ce658
	if (!ctx.cr0.eq) goto loc_880CE658;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880ce638
	if (!ctx.cr6.eq) goto loc_880CE638;
loc_880CE658:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880ce690
	if (!ctx.cr6.eq) goto loc_880CE690;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CE660;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x880CE664;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r8,r10,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,24(r31)
	ctx.current_instruction = 0x880CE674;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// lbz r5,24(r31)
	ctx.current_instruction = 0x880CE67C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 24);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r4,24(r31)
	ctx.current_instruction = 0x880CE688;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// b 0x880ce6f4
	goto loc_880CE6F4;
loc_880CE690:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
loc_880CE69C:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CE69C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880CE6A0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880ce6bc
	if (!ctx.cr0.eq) goto loc_880CE6BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880ce69c
	if (!ctx.cr6.eq) goto loc_880CE69C;
loc_880CE6BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880ce5b8
	if (!ctx.cr6.eq) goto loc_880CE5B8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CE6C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,2(r11)
	ctx.current_instruction = 0x880CE6C8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880CE6CC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,0(r11)
	ctx.current_instruction = 0x880CE6D4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r4,24(r31)
	ctx.current_instruction = 0x880CE6E4;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// lbz r3,0(r11)
	ctx.current_instruction = 0x880CE6E8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x880ce5b8
	if (ctx.cr6.gt) goto loc_880CE5B8;
loc_880CE6F4:
	// ld r10,0(r31)
	ctx.current_instruction = 0x880CE6F4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r31)
	ctx.current_instruction = 0x880CE704;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E2C80) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E2C80);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E2C80;
	ctx.current_instruction = 0x880E2C80;
	// lwz r10,2152(r3)
	ctx.current_instruction = 0x880E2C80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2152);
	// lwz r11,676(r3)
	ctx.current_instruction = 0x880E2C84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x880e2c98
	if (ctx.cr6.eq) goto loc_880E2C98;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880e2cd4
	goto loc_880E2CD4;
loc_880E2C98:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bgt cr6,0x880e2cd0
	if (ctx.cr6.gt) goto loc_880E2CD0;
	// lwz r10,8024(r3)
	ctx.current_instruction = 0x880E2CA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8024);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880e2cd0
	if (!ctx.cr6.eq) goto loc_880E2CD0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x880e2cbc
	if (!ctx.cr6.gt) goto loc_880E2CBC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x880e2cd4
	goto loc_880E2CD4;
loc_880E2CBC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880e2ce0
	if (!ctx.cr6.gt) goto loc_880E2CE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,676(r3)
	ctx.current_instruction = 0x880E2CC8;
	REX_STORE_U32(ctx.r3.u32 + 676, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E2CD0:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_880E2CD4:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x880e2ce0
	if (!ctx.cr6.gt) goto loc_880E2CE0;
	// li r11,31
	ctx.r11.s64 = 31;
loc_880E2CE0:
	// stw r11,676(r3)
	ctx.current_instruction = 0x880E2CE0;
	REX_STORE_U32(ctx.r3.u32 + 676, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E2CE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E2CE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E2CE8) {
			switch (rex_dispatch_address) {
				case 0x880E2D70:
				case 0x880E2D84:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E2CE8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E2D70: goto loc_880E2D70;
		case 0x880E2D84: goto loc_880E2D84;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880E2CEC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880E2CF0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880E2CF4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880E2CF8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,736(r3)
	ctx.current_instruction = 0x880E2CFC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// beq cr6,0x880e30b0
	if (ctx.cr6.eq) goto loc_880E30B0;
	// lwz r30,676(r3)
	ctx.current_instruction = 0x880E2D08;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// lfd f13,688(r3)
	ctx.current_instruction = 0x880E2D0C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 688);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,1424(r3)
	ctx.current_instruction = 0x880E2D14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1424);
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// stfd f13,8040(r3)
	ctx.current_instruction = 0x880E2D1C;
	REX_STORE_U64(ctx.r3.u32 + 8040, ctx.f13.u64);
	// std r9,80(r1)
	ctx.current_instruction = 0x880E2D20;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x880E2D24;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// stw r30,8028(r3)
	ctx.current_instruction = 0x880E2D2C;
	REX_STORE_U32(ctx.r3.u32 + 8028, ctx.r30.u32);
	// fsub f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfd f2,8624(r11)
	ctx.current_instruction = 0x880E2D34;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// stw r10,8032(r3)
	ctx.current_instruction = 0x880E2D38;
	REX_STORE_U32(ctx.r3.u32 + 8032, ctx.r10.u32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f2
	ctx.cr6.compare(ctx.f10.f64, ctx.f2.f64);
	// ble cr6,0x880e2d4c
	if (!ctx.cr6.gt) goto loc_880E2D4C;
	// stfd f0,688(r3)
	ctx.current_instruction = 0x880E2D48;
	REX_STORE_U64(ctx.r3.u32 + 688, ctx.f0.u64);
loc_880E2D4C:
	// lwz r11,8016(r3)
	ctx.current_instruction = 0x880E2D4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8016);
	// lfd f3,688(r3)
	ctx.current_instruction = 0x880E2D50;
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = REX_LOAD_U64(ctx.r3.u32 + 688);
	// lwz r4,8000(r3)
	ctx.current_instruction = 0x880E2D54;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8000);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lwz r31,7952(r3)
	ctx.current_instruction = 0x880E2D5C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 7952);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// subf r6,r11,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r5,r11,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r11.u64;
	// bl 0x880e2b38
	ctx.lr = 0x880E2D70;
	sub_880E2B38(ctx, base);
loc_880E2D70:
	// fmr f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f1.f64;
	// lwz r6,7884(r3)
	ctx.current_instruction = 0x880E2D74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 7884);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lwz r5,7944(r3)
	ctx.current_instruction = 0x880E2D7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 7944);
	// bl 0x880e2a88
	ctx.lr = 0x880E2D84;
	sub_880E2A88(ctx, base);
loc_880E2D84:
	// fadd f0,f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64 + ctx.f1.f64;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,12296(r10)
	ctx.current_instruction = 0x880E2D8C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12296);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x880e2da8
	if (ctx.cr6.gt) goto loc_880E2DA8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12536(r11)
	ctx.current_instruction = 0x880E2D9C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12536);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x880e2dac
	if (!ctx.cr6.lt) goto loc_880E2DAC;
loc_880E2DA8:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_880E2DAC:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// fadd f12,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f3.f64 + ctx.f0.f64;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// stfd f12,688(r3)
	ctx.current_instruction = 0x880E2DB8;
	REX_STORE_U64(ctx.r3.u32 + 688, ctx.f12.u64);
	// std r11,80(r1)
	ctx.current_instruction = 0x880E2DBC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E2DC0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	ctx.current_instruction = 0x880E2DC4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880E2DC8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f11,12088(r9)
	ctx.current_instruction = 0x880E2DD8;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// fadd f8,f12,f11
	ctx.f8.f64 = ctx.f12.f64 + ctx.f11.f64;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lfd f13,12344(r8)
	ctx.current_instruction = 0x880E2DEC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 12344);
	// fdiv f7,f10,f9
	ctx.f7.f64 = ctx.f10.f64 / ctx.f9.f64;
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,80(r1)
	ctx.current_instruction = 0x880E2DF8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x880E2DFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fsub f0,f2,f7
	ctx.f0.f64 = ctx.f2.f64 - ctx.f7.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x880e2f18
	if (!ctx.cr6.lt) goto loc_880E2F18;
	// lwz r10,8024(r3)
	ctx.current_instruction = 0x880E2E0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8024);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880e2f18
	if (!ctx.cr6.eq) goto loc_880E2F18;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,12144(r10)
	ctx.current_instruction = 0x880E2E1C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12144);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e2e30
	if (ctx.cr6.lt) goto loc_880E2E30;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x880e2f1c
	goto loc_880E2F1C;
loc_880E2E30:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,14776(r10)
	ctx.current_instruction = 0x880E2E34;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 14776);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e2e48
	if (ctx.cr6.lt) goto loc_880E2E48;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x880e2f1c
	goto loc_880E2F1C;
loc_880E2E48:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,14768(r10)
	ctx.current_instruction = 0x880E2E4C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 14768);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e2e60
	if (ctx.cr6.lt) goto loc_880E2E60;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x880e2f1c
	goto loc_880E2F1C;
loc_880E2E60:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,9656(r10)
	ctx.current_instruction = 0x880E2E64;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 9656);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e2e78
	if (ctx.cr6.lt) goto loc_880E2E78;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x880e2f1c
	goto loc_880E2F1C;
loc_880E2E78:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,12552(r10)
	ctx.current_instruction = 0x880E2E7C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12552);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e2e90
	if (ctx.cr6.lt) goto loc_880E2E90;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x880e2f1c
	goto loc_880E2F1C;
loc_880E2E90:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,12416(r10)
	ctx.current_instruction = 0x880E2E94;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12416);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e2ea8
	if (ctx.cr6.lt) goto loc_880E2EA8;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x880e2f1c
	goto loc_880E2F1C;
loc_880E2EA8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x880e2eb8
	if (ctx.cr6.lt) goto loc_880E2EB8;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x880e2f1c
	goto loc_880E2F1C;
loc_880E2EB8:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,14760(r10)
	ctx.current_instruction = 0x880E2EBC;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 14760);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e2ed0
	if (ctx.cr6.lt) goto loc_880E2ED0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x880e2f1c
	goto loc_880E2F1C;
loc_880E2ED0:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,14752(r10)
	ctx.current_instruction = 0x880E2ED4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 14752);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e2ee8
	if (ctx.cr6.lt) goto loc_880E2EE8;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x880e2f1c
	goto loc_880E2F1C;
loc_880E2EE8:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,14696(r10)
	ctx.current_instruction = 0x880E2EEC;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 14696);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e2f00
	if (ctx.cr6.lt) goto loc_880E2F00;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x880e2f1c
	goto loc_880E2F1C;
loc_880E2F00:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f13,12248(r10)
	ctx.current_instruction = 0x880E2F04;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12248);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e2f1c
	if (ctx.cr6.lt) goto loc_880E2F1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x880e2f1c
	goto loc_880E2F1C;
loc_880E2F18:
	// li r11,12
	ctx.r11.s64 = 12;
loc_880E2F1C:
	// lwz r10,16(r3)
	ctx.current_instruction = 0x880E2F1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880e2f44
	if (ctx.cr6.eq) goto loc_880E2F44;
	// mulli r10,r10,13
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(13));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// addi r9,r11,-13
	ctx.r9.s64 = ctx.r11.s64 + -13;
	// addi r6,r10,-2336
	ctx.r6.s64 = ctx.r10.s64 + -2336;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r6
	ctx.current_instruction = 0x880E2F40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
loc_880E2F44:
	// lwz r10,7912(r3)
	ctx.current_instruction = 0x880E2F44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7912);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x880e2f58
	if (!ctx.cr6.gt) goto loc_880E2F58;
	// li r11,30
	ctx.r11.s64 = 30;
loc_880E2F58:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r11,7908(r3)
	ctx.current_instruction = 0x880E2F5C;
	REX_STORE_U32(ctx.r3.u32 + 7908, ctx.r11.u32);
	// lfd f13,14744(r10)
	ctx.current_instruction = 0x880E2F60;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 14744);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x880e2f78
	if (ctx.cr6.lt) goto loc_880E2F78;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880e2f78
	if (!ctx.cr6.gt) goto loc_880E2F78;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_880E2F78:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// blt cr6,0x880e2f88
	if (ctx.cr6.lt) goto loc_880E2F88;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_880E2F88:
	// lwz r9,7932(r3)
	ctx.current_instruction = 0x880E2F88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7932);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880e2f9c
	if (!ctx.cr6.gt) goto loc_880E2F9C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x880e2fa8
	goto loc_880E2FA8;
loc_880E2F9C:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880e2fa8
	if (!ctx.cr6.lt) goto loc_880E2FA8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_880E2FA8:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x880e302c
	if (ctx.cr6.gt) goto loc_880E302C;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880e302c
	if (ctx.cr6.eq) goto loc_880E302C;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x880E2FBC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880E2FC0;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f10,f12,f13
	ctx.f10.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// bge cr6,0x880e302c
	if (!ctx.cr6.lt) goto loc_880E302C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,12528(r11)
	ctx.current_instruction = 0x880E2FDC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12528);
	// fadd f13,f12,f0
	ctx.f13.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,80(r1)
	ctx.current_instruction = 0x880E2FE8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880E2FEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880e3028
	if (!ctx.cr6.gt) goto loc_880E3028;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x880E2FFC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880E3000;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fadd f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fsub f8,f12,f9
	ctx.f8.f64 = ctx.f12.f64 - ctx.f9.f64;
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x880e302c
	if (!ctx.cr6.lt) goto loc_880E302C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1424(r3)
	ctx.current_instruction = 0x880E3020;
	REX_STORE_U32(ctx.r3.u32 + 1424, ctx.r10.u32);
	// b 0x880e3030
	goto loc_880E3030;
loc_880E3028:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880E302C:
	// stw r7,1424(r3)
	ctx.current_instruction = 0x880E302C;
	REX_STORE_U32(ctx.r3.u32 + 1424, ctx.r7.u32);
loc_880E3030:
	// lwz r10,8024(r3)
	ctx.current_instruction = 0x880E3030;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8024);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880e305c
	if (ctx.cr6.eq) goto loc_880E305C;
	// lwz r10,7904(r3)
	ctx.current_instruction = 0x880E303C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
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
	// bgt cr6,0x880e305c
	if (ctx.cr6.gt) goto loc_880E305C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880E305C:
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880e3070
	if (ctx.cr6.lt) goto loc_880E3070;
	// stw r10,676(r3)
	ctx.current_instruction = 0x880E3068;
	REX_STORE_U32(ctx.r3.u32 + 676, ctx.r10.u32);
	// b 0x880e3088
	goto loc_880E3088;
loc_880E3070:
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880e3084
	if (ctx.cr6.gt) goto loc_880E3084;
	// stw r10,676(r3)
	ctx.current_instruction = 0x880E307C;
	REX_STORE_U32(ctx.r3.u32 + 676, ctx.r10.u32);
	// b 0x880e3088
	goto loc_880E3088;
loc_880E3084:
	// stw r11,676(r3)
	ctx.current_instruction = 0x880E3084;
	REX_STORE_U32(ctx.r3.u32 + 676, ctx.r11.u32);
loc_880E3088:
	// lfd f0,8040(r3)
	ctx.current_instruction = 0x880E3088;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 8040);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x880e30a8
	if (!ctx.cr6.lt) goto loc_880E30A8;
	// lwz r11,8028(r3)
	ctx.current_instruction = 0x880E3094;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8028);
	// stfd f0,688(r3)
	ctx.current_instruction = 0x880E3098;
	REX_STORE_U64(ctx.r3.u32 + 688, ctx.f0.u64);
	// lwz r10,8032(r3)
	ctx.current_instruction = 0x880E309C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8032);
	// stw r11,676(r3)
	ctx.current_instruction = 0x880E30A0;
	REX_STORE_U32(ctx.r3.u32 + 676, ctx.r11.u32);
	// stw r10,1424(r3)
	ctx.current_instruction = 0x880E30A4;
	REX_STORE_U32(ctx.r3.u32 + 1424, ctx.r10.u32);
loc_880E30A8:
	// lwz r11,676(r3)
	ctx.current_instruction = 0x880E30A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// stw r11,672(r3)
	ctx.current_instruction = 0x880E30AC;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
loc_880E30B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880E30B4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880E30BC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880E30C0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880EC730) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880EC730;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880EC730) {
			switch (rex_dispatch_address) {
				case 0x880EC738:
				case 0x880EC794:
				case 0x880EC82C:
				case 0x880EC878:
				case 0x880EC910:
				case 0x880EC940:
				case 0x880EC9DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EC730;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880EC738: goto loc_880EC738;
		case 0x880EC794: goto loc_880EC794;
		case 0x880EC82C: goto loc_880EC82C;
		case 0x880EC878: goto loc_880EC878;
		case 0x880EC910: goto loc_880EC910;
		case 0x880EC940: goto loc_880EC940;
		case 0x880EC9DC: goto loc_880EC9DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x880EC738;
	__savegprlr_23(ctx, base);
loc_880EC738:
	// stwu r1,-416(r1)
	ctx.current_instruction = 0x880EC738;
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// addi r24,r4,4
	ctx.r24.s64 = ctx.r4.s64 + 4;
	// addi r31,r6,128
	ctx.r31.s64 = ctx.r6.s64 + 128;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
loc_880EC760:
	// lhz r11,0(r30)
	ctx.current_instruction = 0x880EC760;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// sth r25,2(r26)
	ctx.current_instruction = 0x880EC764;
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r25.u16);
	// sth r11,0(r26)
	ctx.current_instruction = 0x880EC768;
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// lwz r10,0(r24)
	ctx.current_instruction = 0x880EC76C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne cr6,0x880ec82c
	if (!ctx.cr6.eq) goto loc_880EC82C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880ec688
	ctx.lr = 0x880EC794;
	sub_880EC688(ctx, base);
loc_880EC794:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_880EC7A4:
	// lwzx r11,r11,r3
	ctx.current_instruction = 0x880EC7A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r31
	ctx.current_instruction = 0x880EC7AC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880ec7c8
	if (!ctx.cr6.eq) goto loc_880EC7C8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// b 0x880ec7f8
	goto loc_880EC7F8;
loc_880EC7C8:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r9,r5,r8
	ctx.current_instruction = 0x880EC7E8;
	REX_STORE_U16(ctx.r5.u32 + ctx.r8.u32, ctx.r9.u16);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sthx r10,r4,r6
	ctx.current_instruction = 0x880EC7F0;
	REX_STORE_U16(ctx.r4.u32 + ctx.r6.u32, ctx.r10.u16);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_880EC7F8:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x880ec7a4
	if (ctx.cr6.lt) goto loc_880EC7A4;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// sth r8,0(r23)
	ctx.current_instruction = 0x880EC814;
	REX_STORE_U16(ctx.r23.u32 + 0, ctx.r8.u16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x880547a0
	ctx.lr = 0x880EC82C;
	sub_880547A0(ctx, base);
loc_880EC82C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r26,r26,256
	ctx.r26.s64 = ctx.r26.s64 + 256;
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// ble cr6,0x880ec760
	if (!ctx.cr6.gt) goto loc_880EC760;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x880EC848;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// sth r25,2(r26)
	ctx.current_instruction = 0x880EC84C;
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r25.u16);
	// sth r11,0(r26)
	ctx.current_instruction = 0x880EC850;
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// lwz r10,0(r24)
	ctx.current_instruction = 0x880EC854;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880ec910
	if (!ctx.cr6.eq) goto loc_880EC910;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880ec688
	ctx.lr = 0x880EC878;
	sub_880EC688(ctx, base);
loc_880EC878:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_880EC888:
	// lwzx r11,r11,r3
	ctx.current_instruction = 0x880EC888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r31
	ctx.current_instruction = 0x880EC890;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880ec8ac
	if (!ctx.cr6.eq) goto loc_880EC8AC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// b 0x880ec8dc
	goto loc_880EC8DC;
loc_880EC8AC:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r9,r5,r8
	ctx.current_instruction = 0x880EC8CC;
	REX_STORE_U16(ctx.r5.u32 + ctx.r8.u32, ctx.r9.u16);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sthx r10,r4,r6
	ctx.current_instruction = 0x880EC8D4;
	REX_STORE_U16(ctx.r4.u32 + ctx.r6.u32, ctx.r10.u16);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_880EC8DC:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x880ec888
	if (ctx.cr6.lt) goto loc_880EC888;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// sth r8,0(r23)
	ctx.current_instruction = 0x880EC8F8;
	REX_STORE_U16(ctx.r23.u32 + 0, ctx.r8.u16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x880547a0
	ctx.lr = 0x880EC910;
	sub_880547A0(ctx, base);
loc_880EC910:
	// lhzu r11,16(r30)
	ctx.current_instruction = 0x880EC910;
	ea = 16 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// addi r6,r31,256
	ctx.r6.s64 = ctx.r31.s64 + 256;
	// sthu r11,256(r26)
	ctx.current_instruction = 0x880EC918;
	ea = 256 + ctx.r26.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r26.u32 = ea;
	// sth r25,2(r26)
	ctx.current_instruction = 0x880EC91C;
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r25.u16);
	// lwz r10,4(r24)
	ctx.current_instruction = 0x880EC920;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880ec9dc
	if (!ctx.cr6.eq) goto loc_880EC9DC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880ec688
	ctx.lr = 0x880EC940;
	sub_880EC688(ctx, base);
loc_880EC940:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_880EC950:
	// lwzx r11,r11,r3
	ctx.current_instruction = 0x880EC950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r6
	ctx.current_instruction = 0x880EC958;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880ec974
	if (!ctx.cr6.eq) goto loc_880EC974;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// b 0x880ec9a8
	goto loc_880EC9A8;
loc_880EC974:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r4,r8
	ctx.current_instruction = 0x880EC994;
	REX_STORE_U16(ctx.r4.u32 + ctx.r8.u32, ctx.r9.u16);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// sthx r10,r31,r5
	ctx.current_instruction = 0x880EC9A0;
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u16);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_880EC9A8:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x880ec950
	if (ctx.cr6.lt) goto loc_880EC950;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// sth r8,2(r23)
	ctx.current_instruction = 0x880EC9C4;
	REX_STORE_U16(ctx.r23.u32 + 2, ctx.r8.u16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x880547a0
	ctx.lr = 0x880EC9DC;
	sub_880547A0(ctx, base);
loc_880EC9DC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F3340) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F3340;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F3340) {
			switch (rex_dispatch_address) {
				case 0x880F3348:
				case 0x880F34D4:
				case 0x880F3520:
				case 0x880F3614:
				case 0x880F36D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F3340;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F3348: goto loc_880F3348;
		case 0x880F34D4: goto loc_880F34D4;
		case 0x880F3520: goto loc_880F3520;
		case 0x880F3614: goto loc_880F3614;
		case 0x880F36D0: goto loc_880F36D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880F3348;
	__savegprlr_14(ctx, base);
loc_880F3348:
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x880F3348;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2272(r3)
	ctx.current_instruction = 0x880F334C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880F335C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// beq cr6,0x880f35bc
	if (ctx.cr6.eq) goto loc_880F35BC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r28,264(r4)
	ctx.current_instruction = 0x880F3368;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 264);
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r10,268(r4)
	ctx.current_instruction = 0x880F3370;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 268);
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r6,r8,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stw r7,116(r1)
	ctx.current_instruction = 0x880F3380;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,112(r1)
	ctx.current_instruction = 0x880F3384;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x880f3394
	if (!ctx.cr6.lt) goto loc_880F3394;
	// addi r27,r28,1
	ctx.r27.s64 = ctx.r28.s64 + 1;
loc_880F3394:
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x880f33c0
	if (!ctx.cr6.lt) goto loc_880F33C0;
	// lwz r9,2264(r31)
	ctx.current_instruction = 0x880F339C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_880F33A4:
	// lwzx r8,r11,r9
	ctx.current_instruction = 0x880F33A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880f33c0
	if (!ctx.cr6.eq) goto loc_880F33C0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x880f33a4
	if (ctx.cr6.lt) goto loc_880F33A4;
loc_880F33C0:
	// lwz r8,1380(r31)
	ctx.current_instruction = 0x880F33C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// subf. r30,r28,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r11,1384(r31)
	ctx.current_instruction = 0x880F33C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r7,28132(r31)
	ctx.current_instruction = 0x880F33CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// mullw r3,r8,r28
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// lwz r6,19092(r31)
	ctx.current_instruction = 0x880F33D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// lwz r5,19096(r31)
	ctx.current_instruction = 0x880F33DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r4,19100(r31)
	ctx.current_instruction = 0x880F33E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// lwz r26,208(r29)
	ctx.current_instruction = 0x880F33E4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r29.u32 + 208);
	// lwz r25,216(r29)
	ctx.current_instruction = 0x880F33E8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r29.u32 + 216);
	// lwz r24,224(r29)
	ctx.current_instruction = 0x880F33EC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// lwz r23,212(r29)
	ctx.current_instruction = 0x880F33F0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r29.u32 + 212);
	// lwz r22,220(r29)
	ctx.current_instruction = 0x880F33F4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r29.u32 + 220);
	// lwz r21,228(r29)
	ctx.current_instruction = 0x880F33F8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r29.u32 + 228);
	// srawi r20,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 1;
	// mullw r19,r11,r28
	ctx.r19.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r7,r20,r7
	ctx.r7.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r19,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r18,r10,r6
	ctx.r18.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r17,r5,r11
	ctx.r17.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r16,r4,r11
	ctx.r16.u64 = ctx.r4.u64 + ctx.r11.u64;
	// beq 0x880f36d0
	if (ctx.cr0.eq) goto loc_880F36D0;
	// li r14,0
	ctx.r14.s64 = 0;
loc_880F3434:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x880f345c
	if (ctx.cr6.eq) goto loc_880F345C;
	// lwz r11,2264(r31)
	ctx.current_instruction = 0x880F343C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x880F3444;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880f345c
	if (!ctx.cr6.eq) goto loc_880F345C;
	// mr r15,r14
	ctx.r15.u64 = ctx.r14.u64;
	// mr r19,r14
	ctx.r19.u64 = ctx.r14.u64;
	// b 0x880f3468
	goto loc_880F3468;
loc_880F345C:
	// lwz r11,1384(r31)
	ctx.current_instruction = 0x880F345C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// rlwinm r15,r8,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r19,r11,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_880F3468:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x880f3488
	if (ctx.cr6.eq) goto loc_880F3488;
	// lwz r11,2264(r31)
	ctx.current_instruction = 0x880F3470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x880F3478;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880f348c
	if (ctx.cr6.eq) goto loc_880F348C;
loc_880F3488:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880F348C:
	// stw r11,100(r1)
	ctx.current_instruction = 0x880F348C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stw r30,92(r1)
	ctx.current_instruction = 0x880F3494;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880F349C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r20,2164(r31)
	ctx.current_instruction = 0x880F34A4;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 2164);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mullw r11,r28,r11
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// stw r14,84(r1)
	ctx.current_instruction = 0x880F34B0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x88106f08
	ctx.lr = 0x880F34D4;
	sub_88106F08(ctx, base);
loc_880F34D4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x880f34f4
	if (ctx.cr6.eq) goto loc_880F34F4;
	// lwz r11,2264(r31)
	ctx.current_instruction = 0x880F34DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x880F34E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880f34f8
	if (ctx.cr6.eq) goto loc_880F34F8;
loc_880F34F4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880F34F8:
	// rlwinm r7,r30,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r6,r16,r19
	ctx.r6.u64 = ctx.r16.u64 + ctx.r19.u64;
	// add r5,r17,r19
	ctx.r5.u64 = ctx.r17.u64 + ctx.r19.u64;
	// add r4,r18,r15
	ctx.r4.u64 = ctx.r18.u64 + ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88108728
	ctx.lr = 0x880F3520;
	sub_88108728(ctx, base);
loc_880F3520:
	// lwz r10,1384(r31)
	ctx.current_instruction = 0x880F3520;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r8,1380(r31)
	ctx.current_instruction = 0x880F3524;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mullw r7,r10,r30
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lwz r5,112(r1)
	ctx.current_instruction = 0x880F3530;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x880F3534;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,268(r29)
	ctx.current_instruction = 0x880F3538;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 268);
	// mullw r3,r8,r30
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r30,r5
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r30,r4
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r4.s32);
	// rlwinm r7,r3,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r9,r26
	ctx.r26.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r18,r7,r18
	ctx.r18.u64 = ctx.r7.u64 + ctx.r18.u64;
	// add r17,r10,r17
	ctx.r17.u64 = ctx.r10.u64 + ctx.r17.u64;
	// add r16,r10,r16
	ctx.r16.u64 = ctx.r10.u64 + ctx.r16.u64;
	// cmplw cr6,r27,r6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x880f35ac
	if (!ctx.cr6.lt) goto loc_880F35AC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x880f35ac
	if (!ctx.cr6.lt) goto loc_880F35AC;
	// lwz r10,2264(r31)
	ctx.current_instruction = 0x880F3588;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_880F3590:
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x880F3590;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880f35ac
	if (!ctx.cr6.eq) goto loc_880F35AC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r27,r6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x880f3590
	if (ctx.cr6.lt) goto loc_880F3590;
loc_880F35AC:
	// subf. r30,r28,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x880f3434
	if (!ctx.cr0.eq) goto loc_880F3434;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880F35BC:
	// lwz r30,264(r29)
	ctx.current_instruction = 0x880F35BC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 264);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,4(r29)
	ctx.current_instruction = 0x880F35C4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r27,268(r29)
	ctx.current_instruction = 0x880F35CC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r29.u32 + 268);
	// lwz r10,2164(r31)
	ctx.current_instruction = 0x880F35D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2164);
	// lwz r9,228(r29)
	ctx.current_instruction = 0x880F35D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 228);
	// stw r30,84(r1)
	ctx.current_instruction = 0x880F35D8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r8,220(r29)
	ctx.current_instruction = 0x880F35DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 220);
	// lwz r7,212(r29)
	ctx.current_instruction = 0x880F35E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 212);
	// lwz r6,224(r29)
	ctx.current_instruction = 0x880F35E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// lwz r5,216(r29)
	ctx.current_instruction = 0x880F35E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 216);
	// lwz r4,208(r29)
	ctx.current_instruction = 0x880F35EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 208);
	// stw r27,92(r1)
	ctx.current_instruction = 0x880F35F0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r28,r28
	ctx.r28.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r30,r28,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,100(r1)
	ctx.current_instruction = 0x880F3608;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x88106f08
	ctx.lr = 0x880F3614;
	sub_88106F08(ctx, base);
loc_880F3614:
	// lwz r10,4(r29)
	ctx.current_instruction = 0x880F3614;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,1384(r31)
	ctx.current_instruction = 0x880F3618;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,19100(r31)
	ctx.current_instruction = 0x880F3620;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r5,19096(r31)
	ctx.current_instruction = 0x880F3628;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r9,216(r29)
	ctx.current_instruction = 0x880F362C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 216);
	// lwz r8,208(r29)
	ctx.current_instruction = 0x880F3630;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 208);
	// bne cr6,0x880f3674
	if (!ctx.cr6.eq) goto loc_880F3674;
	// lwz r4,28132(r31)
	ctx.current_instruction = 0x880F3638;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r30,1380(r31)
	ctx.current_instruction = 0x880F3640;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r27,268(r29)
	ctx.current_instruction = 0x880F364C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r29.u32 + 268);
	// lwz r10,224(r29)
	ctx.current_instruction = 0x880F3650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// srawi r28,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mullw r4,r28,r4
	ctx.r4.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// rlwinm r30,r30,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r27,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x880f36bc
	goto loc_880F36BC;
loc_880F3674:
	// lwz r28,264(r29)
	ctx.current_instruction = 0x880F3674;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 264);
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// lwz r10,1380(r31)
	ctx.current_instruction = 0x880F367C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r11,1384(r31)
	ctx.current_instruction = 0x880F3680;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r30,28132(r31)
	ctx.current_instruction = 0x880F3684;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// mullw r27,r28,r10
	ctx.r27.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// lwz r26,268(r29)
	ctx.current_instruction = 0x880F3690;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r29.u32 + 268);
	// lwz r10,224(r29)
	ctx.current_instruction = 0x880F3694;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// mullw r29,r28,r11
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r4,r30
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// rlwinm r4,r27,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r7,r28,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_880F36BC:
	// lwz r31,19092(r31)
	ctx.current_instruction = 0x880F36BC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// bl 0x88108728
	ctx.lr = 0x880F36D0;
	sub_88108728(ctx, base);
loc_880F36D0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FBC40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FBC40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FBC40) {
			switch (rex_dispatch_address) {
				case 0x880FBC48:
				case 0x880FBC54:
				case 0x880FBC74:
				case 0x880FBC8C:
				case 0x880FBC9C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FBC40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FBC48: goto loc_880FBC48;
		case 0x880FBC54: goto loc_880FBC54;
		case 0x880FBC74: goto loc_880FBC74;
		case 0x880FBC8C: goto loc_880FBC8C;
		case 0x880FBC9C: goto loc_880FBC9C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880FBC48;
	__savegprlr_29(ctx, base);
loc_880FBC48:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880FBC48;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88061460
	ctx.lr = 0x880FBC54;
	sub_88061460(ctx, base);
loc_880FBC54:
	// lwz r3,0(r31)
	ctx.current_instruction = 0x880FBC54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fbc78
	if (ctx.cr6.eq) goto loc_880FBC78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x880FBC74;
	sub_88050358(ctx, base);
loc_880FBC74:
	// stw r29,0(r31)
	ctx.current_instruction = 0x880FBC74;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_880FBC78:
	// lwz r3,4(r31)
	ctx.current_instruction = 0x880FBC78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fbc90
	if (ctx.cr6.eq) goto loc_880FBC90;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x880FBC8C;
	sub_88050358(ctx, base);
loc_880FBC8C:
	// stw r29,4(r31)
	ctx.current_instruction = 0x880FBC8C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_880FBC90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x880FBC9C;
	sub_88050358(ctx, base);
loc_880FBC9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FED60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FED60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FED60) {
			switch (rex_dispatch_address) {
				case 0x880FED68:
				case 0x880FEE40:
				case 0x880FEE80:
				case 0x880FEEA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FED60;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FED68: goto loc_880FED68;
		case 0x880FEE40: goto loc_880FEE40;
		case 0x880FEE80: goto loc_880FEE80;
		case 0x880FEEA0: goto loc_880FEEA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880FED68;
	__savegprlr_24(ctx, base);
loc_880FED68:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x880FED68;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r7)
	ctx.current_instruction = 0x880FED6C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lfs f0,48(r9)
	ctx.current_instruction = 0x880FED74;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// std r7,144(r1)
	ctx.current_instruction = 0x880FED84;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f13,144(r1)
	ctx.current_instruction = 0x880FED88;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// fmul f10,f0,f13
	ctx.f10.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f12,19224(r10)
	ctx.current_instruction = 0x880FED98;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 19224);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f11,1488(r8)
	ctx.current_instruction = 0x880FEDA0;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 1488);
	// fmul f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 * ctx.f13.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfd f0,12088(r11)
	ctx.current_instruction = 0x880FEDB8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12088);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// fmul f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x880fede0
	if (!ctx.cr6.gt) goto loc_880FEDE0;
	// fmadd f12,f13,f12,f0
	ctx.f12.f64 = std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,144(r1)
	ctx.current_instruction = 0x880FEDD4;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f11.u64);
	// lwz r11,148(r1)
	ctx.current_instruction = 0x880FEDD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x880fedf0
	goto loc_880FEDF0;
loc_880FEDE0:
	// fmsub f12,f13,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,144(r1)
	ctx.current_instruction = 0x880FEDE8;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f11.u64);
	// lwz r11,148(r1)
	ctx.current_instruction = 0x880FEDEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_880FEDF0:
	// sth r11,0(r24)
	ctx.current_instruction = 0x880FEDF0;
	REX_STORE_U16(ctx.r24.u32 + 0, ctx.r11.u16);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r4,31532(r31)
	ctx.current_instruction = 0x880FEDF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 31532);
	// rlwinm r10,r4,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE;
	// stw r27,132(r1)
	ctx.current_instruction = 0x880FEE00;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r27,128(r1)
	ctx.current_instruction = 0x880FEE08;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// beq cr6,0x880fee80
	if (ctx.cr6.eq) goto loc_880FEE80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x880fee80
	if (ctx.cr6.lt) goto loc_880FEE80;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bgt cr6,0x880fee80
	if (ctx.cr6.gt) goto loc_880FEE80;
	// stw r27,144(r1)
	ctx.current_instruction = 0x880FEE20;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stw r27,136(r1)
	ctx.current_instruction = 0x880FEE28;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ecb80
	ctx.lr = 0x880FEE40;
	sub_880ECB80(ctx, base);
loc_880FEE40:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,31532(r31)
	ctx.current_instruction = 0x880FEE48;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 31532);
	// stw r5,84(r1)
	ctx.current_instruction = 0x880FEE4C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,116(r1)
	ctx.current_instruction = 0x880FEE58;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r27,108(r1)
	ctx.current_instruction = 0x880FEE60;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// std r27,96(r1)
	ctx.current_instruction = 0x880FEE68;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// std r27,88(r1)
	ctx.current_instruction = 0x880FEE70;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ecc18
	ctx.lr = 0x880FEE80;
	sub_880ECC18(ctx, base);
loc_880FEE80:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r9,128(r1)
	ctx.current_instruction = 0x880FEE84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,64
	ctx.r6.s64 = 64;
	// lwz r8,132(r1)
	ctx.current_instruction = 0x880FEE8C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880feb98
	ctx.lr = 0x880FEEA0;
	sub_880FEB98(ctx, base);
loc_880FEEA0:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FEEA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x880feee0
	if (ctx.cr6.lt) goto loc_880FEEE0;
	// bne cr6,0x880feecc
	if (!ctx.cr6.eq) goto loc_880FEECC;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// lwz r7,2316(r31)
	ctx.current_instruction = 0x880FEEBC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2316);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x880fef04
	goto loc_880FEF04;
loc_880FEECC:
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// lwz r7,2320(r31)
	ctx.current_instruction = 0x880FEED0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2320);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x880fef04
	goto loc_880FEF04;
loc_880FEEE0:
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// lwz r7,2312(r31)
	ctx.current_instruction = 0x880FEEE4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2312);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_880FEF04:
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
loc_880FEF14:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// lhzx r7,r8,r24
	ctx.current_instruction = 0x880FEF28;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r24.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// sthx r7,r8,r9
	ctx.current_instruction = 0x880FEF34;
	REX_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u16);
	// lhzx r5,r10,r24
	ctx.current_instruction = 0x880FEF38;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r5,r4,r9
	ctx.current_instruction = 0x880FEF40;
	REX_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r5.u16);
	// blt cr6,0x880fef14
	if (ctx.cr6.lt) goto loc_880FEF14;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88104550) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88104550;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88104550) {
			switch (rex_dispatch_address) {
				case 0x88104558:
				case 0x8810481C:
				case 0x88104890:
				case 0x881048DC:
				case 0x881048F0:
				case 0x88104900:
				case 0x88104948:
				case 0x88104950:
				case 0x88104980:
				case 0x881049BC:
				case 0x881049E0:
				case 0x88104A08:
				case 0x88104A2C:
				case 0x88104A74:
				case 0x88104A7C:
				case 0x88104AAC:
				case 0x88104ABC:
				case 0x88104AE4:
				case 0x88104B08:
				case 0x88104B50:
				case 0x88104B58:
				case 0x88104B8C:
				case 0x88104BD0:
				case 0x88104BD8:
				case 0x88104C08:
				case 0x88104C34:
				case 0x88104C70:
				case 0x88104C80:
				case 0x88104CA4:
				case 0x88104CC8:
				case 0x88104CEC:
				case 0x88104D18:
				case 0x88104D3C:
				case 0x88104D60:
				case 0x88104D8C:
				case 0x88104DC4:
				case 0x88104DF4:
				case 0x88104E24:
				case 0x88104E7C:
				case 0x88104E98:
				case 0x88104EC4:
				case 0x88104EE8:
				case 0x88104F14:
				case 0x88104F34:
				case 0x88104F58:
				case 0x88104F7C:
				case 0x88104F90:
				case 0x88105054:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88104550;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88104558: goto loc_88104558;
		case 0x8810481C: goto loc_8810481C;
		case 0x88104890: goto loc_88104890;
		case 0x881048DC: goto loc_881048DC;
		case 0x881048F0: goto loc_881048F0;
		case 0x88104900: goto loc_88104900;
		case 0x88104948: goto loc_88104948;
		case 0x88104950: goto loc_88104950;
		case 0x88104980: goto loc_88104980;
		case 0x881049BC: goto loc_881049BC;
		case 0x881049E0: goto loc_881049E0;
		case 0x88104A08: goto loc_88104A08;
		case 0x88104A2C: goto loc_88104A2C;
		case 0x88104A74: goto loc_88104A74;
		case 0x88104A7C: goto loc_88104A7C;
		case 0x88104AAC: goto loc_88104AAC;
		case 0x88104ABC: goto loc_88104ABC;
		case 0x88104AE4: goto loc_88104AE4;
		case 0x88104B08: goto loc_88104B08;
		case 0x88104B50: goto loc_88104B50;
		case 0x88104B58: goto loc_88104B58;
		case 0x88104B8C: goto loc_88104B8C;
		case 0x88104BD0: goto loc_88104BD0;
		case 0x88104BD8: goto loc_88104BD8;
		case 0x88104C08: goto loc_88104C08;
		case 0x88104C34: goto loc_88104C34;
		case 0x88104C70: goto loc_88104C70;
		case 0x88104C80: goto loc_88104C80;
		case 0x88104CA4: goto loc_88104CA4;
		case 0x88104CC8: goto loc_88104CC8;
		case 0x88104CEC: goto loc_88104CEC;
		case 0x88104D18: goto loc_88104D18;
		case 0x88104D3C: goto loc_88104D3C;
		case 0x88104D60: goto loc_88104D60;
		case 0x88104D8C: goto loc_88104D8C;
		case 0x88104DC4: goto loc_88104DC4;
		case 0x88104DF4: goto loc_88104DF4;
		case 0x88104E24: goto loc_88104E24;
		case 0x88104E7C: goto loc_88104E7C;
		case 0x88104E98: goto loc_88104E98;
		case 0x88104EC4: goto loc_88104EC4;
		case 0x88104EE8: goto loc_88104EE8;
		case 0x88104F14: goto loc_88104F14;
		case 0x88104F34: goto loc_88104F34;
		case 0x88104F58: goto loc_88104F58;
		case 0x88104F7C: goto loc_88104F7C;
		case 0x88104F90: goto loc_88104F90;
		case 0x88105054: goto loc_88105054;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88104558;
	__savegprlr_14(ctx, base);
loc_88104558:
	// stwu r1,-960(r1)
	ctx.current_instruction = 0x88104558;
	ea = -960 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,1284(r1)
	ctx.current_instruction = 0x8810455C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1284);
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r10,1036(r1)
	ctx.current_instruction = 0x88104564;
	REX_STORE_U32(ctx.r1.u32 + 1036, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1276(r1)
	ctx.current_instruction = 0x8810456C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1276);
	// lwz r8,1100(r1)
	ctx.current_instruction = 0x88104570;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1100);
	// stw r4,988(r1)
	ctx.current_instruction = 0x88104574;
	REX_STORE_U32(ctx.r1.u32 + 988, ctx.r4.u32);
	// stw r18,0(r9)
	ctx.current_instruction = 0x88104578;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r18.u32);
	// mulli r11,r8,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(276));
	// stw r5,996(r1)
	ctx.current_instruction = 0x88104580;
	REX_STORE_U32(ctx.r1.u32 + 996, ctx.r5.u32);
	// stw r18,0(r10)
	ctx.current_instruction = 0x88104584;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r18.u32);
	// lwz r10,7764(r3)
	ctx.current_instruction = 0x88104588;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// lwz r7,2204(r3)
	ctx.current_instruction = 0x8810458C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2204);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x881045a4
	if (!ctx.cr6.eq) goto loc_881045A4;
	// stw r18,216(r1)
	ctx.current_instruction = 0x8810459C;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r18.u32);
	// b 0x881045ac
	goto loc_881045AC;
loc_881045A4:
	// lwz r11,2308(r31)
	ctx.current_instruction = 0x881045A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// stw r11,216(r1)
	ctx.current_instruction = 0x881045A8;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_881045AC:
	// lwz r11,2132(r31)
	ctx.current_instruction = 0x881045AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2132);
	// lwz r10,2128(r31)
	ctx.current_instruction = 0x881045B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2128);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881045d0
	if (ctx.cr6.eq) goto loc_881045D0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x881045d8
	goto loc_881045D8;
loc_881045D0:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
loc_881045D8:
	// stw r11,2140(r31)
	ctx.current_instruction = 0x881045D8;
	REX_STORE_U32(ctx.r31.u32 + 2140, ctx.r11.u32);
	// lwz r11,30228(r31)
	ctx.current_instruction = 0x881045DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30228);
	// stw r10,2144(r31)
	ctx.current_instruction = 0x881045E0;
	REX_STORE_U32(ctx.r31.u32 + 2144, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88104680
	if (ctx.cr6.eq) goto loc_88104680;
	// lwz r11,1576(r31)
	ctx.current_instruction = 0x881045EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88104604
	if (ctx.cr6.eq) goto loc_88104604;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f12,23416(r11)
	ctx.current_instruction = 0x881045FC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23416);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8810460c
	goto loc_8810460C;
loc_88104604:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f12,6708(r11)
	ctx.current_instruction = 0x88104608;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f12.f64 = double(temp.f32);
loc_8810460C:
	// lwz r11,1420(r31)
	ctx.current_instruction = 0x8810460C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1420);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,1416(r31)
	ctx.current_instruction = 0x88104614;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// subfic r7,r11,135
	ctx.xer.ca = ctx.r11.u32 <= 135;
	ctx.r7.u64 = static_cast<uint64_t>(135) - ctx.r11.u64;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// std r3,256(r1)
	ctx.current_instruction = 0x88104628;
	REX_STORE_U64(ctx.r1.u32 + 256, ctx.r3.u64);
	// lfd f9,256(r1)
	ctx.current_instruction = 0x8810462C;
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// std r9,240(r1)
	ctx.current_instruction = 0x88104630;
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lfd f11,240(r1)
	ctx.current_instruction = 0x8810463C;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// fsqrt f7,f8
	ctx.f7.f64 = sqrt(ctx.f8.f64);
	// lfd f0,23408(r10)
	ctx.current_instruction = 0x88104644;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 23408);
	// std r7,240(r1)
	ctx.current_instruction = 0x88104648;
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r7.u64);
	// lfd f13,12088(r8)
	ctx.current_instruction = 0x8810464C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// li r3,6884
	ctx.r3.s64 = 6884;
	// lfd f10,240(r1)
	ctx.current_instruction = 0x88104654;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// fmul f4,f7,f6
	ctx.f4.f64 = ctx.f7.f64 * ctx.f6.f64;
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmul f2,f4,f12
	ctx.f2.f64 = ctx.f4.f64 * ctx.f12.f64;
	// fmul f1,f2,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f0.f64;
	// fdiv f0,f1,f3
	ctx.f0.f64 = ctx.f1.f64 / ctx.f3.f64;
	// fadd f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r31,r3
	ctx.current_instruction = 0x8810467C;
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.f12.u32);
loc_88104680:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88104680;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r6,232(r1)
	ctx.current_instruction = 0x88104688;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// mullw r9,r4,r11
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// stw r9,248(r1)
	ctx.current_instruction = 0x88104694;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// bge cr6,0x8810515c
	if (!ctx.cr6.lt) goto loc_8810515C;
	// lwz r15,1140(r1)
	ctx.current_instruction = 0x8810469C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1140);
	// lwz r20,1124(r1)
	ctx.current_instruction = 0x881046A0;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1124);
	// lwz r17,1052(r1)
	ctx.current_instruction = 0x881046A4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1052);
	// lwz r16,1044(r1)
	ctx.current_instruction = 0x881046A8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1044);
	// lwz r7,1076(r1)
	ctx.current_instruction = 0x881046AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1076);
	// lwz r8,1068(r1)
	ctx.current_instruction = 0x881046B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
loc_881046B4:
	// subf r11,r28,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x881046B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// stw r8,220(r1)
	ctx.current_instruction = 0x881046BC;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,256(r1)
	ctx.current_instruction = 0x881046D4;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// ble cr6,0x88105124
	if (!ctx.cr6.gt) goto loc_88105124;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// rlwinm r19,r9,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,264(r1)
	ctx.current_instruction = 0x881046EC;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// stw r8,252(r1)
	ctx.current_instruction = 0x881046F0;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
loc_881046F4:
	// lwz r10,724(r31)
	ctx.current_instruction = 0x881046F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// srawi r7,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r21.s32 >> 1;
	// lwz r11,796(r31)
	ctx.current_instruction = 0x881046FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88104704;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// std r20,240(r1)
	ctx.current_instruction = 0x8810470C;
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r20.u64);
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// lwz r10,1380(r31)
	ctx.current_instruction = 0x88104714;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// subf r6,r28,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r28.u64;
	// lwz r9,1384(r31)
	ctx.current_instruction = 0x8810471C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r4,232(r1)
	ctx.current_instruction = 0x88104720;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// cntlzw r25,r6
	ctx.r25.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// stw r18,92(r1)
	ctx.current_instruction = 0x8810472C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// lwz r27,7804(r31)
	ctx.current_instruction = 0x88104730;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 7804);
	// stw r10,208(r1)
	ctx.current_instruction = 0x88104734;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r11,252(r1)
	ctx.current_instruction = 0x8810473C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stw r9,224(r1)
	ctx.current_instruction = 0x88104740;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// lwz r9,6852(r31)
	ctx.current_instruction = 0x88104744;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6852);
	// lwz r3,20(r31)
	ctx.current_instruction = 0x88104748;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,6848(r31)
	ctx.current_instruction = 0x8810474C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 6848);
	// lwz r6,6844(r31)
	ctx.current_instruction = 0x88104750;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 6844);
	// lwz r14,1036(r1)
	ctx.current_instruction = 0x88104754;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1036);
	// lwz r22,24(r31)
	ctx.current_instruction = 0x88104758;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r23,28(r31)
	ctx.current_instruction = 0x8810475C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r25,r25,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 27) & 0x1;
	// lwz r24,7808(r31)
	ctx.current_instruction = 0x88104764;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 7808);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r25,212(r1)
	ctx.current_instruction = 0x8810476C;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// lwz r20,212(r1)
	ctx.current_instruction = 0x88104770;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,212(r1)
	ctx.current_instruction = 0x88104774;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// mullw r4,r8,r28
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// lwz r8,208(r1)
	ctx.current_instruction = 0x88104780;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stw r10,208(r1)
	ctx.current_instruction = 0x88104784;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r20,84(r1)
	ctx.current_instruction = 0x88104788;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// lwz r20,212(r1)
	ctx.current_instruction = 0x8810478C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r25,7812(r31)
	ctx.current_instruction = 0x88104790;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 7812);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwz r8,224(r1)
	ctx.current_instruction = 0x88104798;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// mullw r8,r20,r8
	ctx.r8.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r8.s32);
	// stw r4,224(r1)
	ctx.current_instruction = 0x881047A4;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r4.u32);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// subf r27,r30,r26
	ctx.r27.u64 = ctx.r26.u64 - ctx.r30.u64;
	// lwz r26,224(r1)
	ctx.current_instruction = 0x881047B4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r26,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r26,208(r1)
	ctx.current_instruction = 0x881047C0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// cntlzw r27,r27
	ctx.r27.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r7,r26,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r10,r21
	ctx.r26.u64 = ctx.r10.u64 + ctx.r21.u64;
	// stw r27,224(r1)
	ctx.current_instruction = 0x881047D0;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r10,224(r1)
	ctx.current_instruction = 0x881047D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r27,r4,r3
	ctx.r27.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// add r22,r22,r11
	ctx.r22.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r23,r23,r11
	ctx.r23.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r24,r24,r11
	ctx.r24.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r25,r25,r11
	ctx.r25.u64 = ctx.r25.u64 + ctx.r11.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x8810481C;
	sub_880C3EC8(ctx, base);
loc_8810481C:
	// li r11,6
	ctx.r11.s64 = 6;
	// ld r20,240(r1)
	ctx.current_instruction = 0x88104820;
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// addi r10,r29,152
	ctx.r10.s64 = ctx.r29.s64 + 152;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88104830:
	// stwu r9,4(r10)
	ctx.current_instruction = 0x88104830;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88104830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88104830;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r29,176
	ctx.r11.s64 = ctx.r29.s64 + 176;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88104848:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x88104848;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88104848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88104848;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r29,200
	ctx.r11.s64 = ctx.r29.s64 + 200;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88104860:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x88104860;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88104860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88104860;
	// lwz r11,7200(r31)
	ctx.current_instruction = 0x88104868;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88104890
	if (ctx.cr6.eq) goto loc_88104890;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x88104890
	if (!ctx.cr6.eq) goto loc_88104890;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x88104890;
	sub_880EB138(ctx, base);
loc_88104890:
	// lwz r11,92(r29)
	ctx.current_instruction = 0x88104890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x88104e28
	if (ctx.cr6.gt) goto loc_88104E28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88104b0c
	if (ctx.cr6.eq) goto loc_88104B0C;
	// bdz 0x88104b0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88104B0C;
	// bdz 0x88104a30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88104A30;
	// bdz 0x88104904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88104904;
	// lwz r10,1276(r1)
	ctx.current_instruction = 0x881048BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1276);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,0(r10)
	ctx.current_instruction = 0x881048CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	ctx.current_instruction = 0x881048D4;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x88052d90
	ctx.lr = 0x881048DC;
	sub_88052D90(ctx, base);
loc_881048DC:
	// lwz r14,1132(r1)
	ctx.current_instruction = 0x881048DC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1132);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x88052d90
	ctx.lr = 0x881048F0;
	sub_88052D90(ctx, base);
loc_881048F0:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x88052d90
	ctx.lr = 0x88104900;
	sub_88052D90(ctx, base);
loc_88104900:
	// b 0x88104e2c
	goto loc_88104E2C;
loc_88104904:
	// lwz r11,2456(r31)
	ctx.current_instruction = 0x88104904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// lwz r10,2460(r31)
	ctx.current_instruction = 0x8810490C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r31)
	ctx.current_instruction = 0x88104914;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// lhzx r8,r11,r19
	ctx.current_instruction = 0x8810491C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,196(r1)
	ctx.current_instruction = 0x88104924;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lhzx r6,r10,r19
	ctx.current_instruction = 0x8810492C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r19.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,192(r1)
	ctx.current_instruction = 0x88104934;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bne cr6,0x8810494c
	if (!ctx.cr6.eq) goto loc_8810494C;
	// bl 0x8810aa38
	ctx.lr = 0x88104948;
	sub_8810AA38(ctx, base);
loc_88104948:
	// b 0x88104950
	goto loc_88104950;
loc_8810494C:
	// bl 0x8810a970
	ctx.lr = 0x88104950;
	sub_8810A970(ctx, base);
loc_88104950:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x88104950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r10,216(r1)
	ctx.current_instruction = 0x8810495C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r9,192(r1)
	ctx.current_instruction = 0x88104964;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x8810496C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,196(r1)
	ctx.current_instruction = 0x88104974;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88104978;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8810c568
	ctx.lr = 0x88104980;
	sub_8810C568(ctx, base);
loc_88104980:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88104980;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881049ac
	if (ctx.cr6.eq) goto loc_881049AC;
	// lwz r11,2456(r31)
	ctx.current_instruction = 0x8810498C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// lwz r10,2460(r31)
	ctx.current_instruction = 0x88104990;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// lhzx r9,r11,r19
	ctx.current_instruction = 0x88104994;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r8,196(r1)
	ctx.current_instruction = 0x8810499C;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// lhzx r7,r10,r19
	ctx.current_instruction = 0x881049A0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r19.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r6,192(r1)
	ctx.current_instruction = 0x881049A8;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
loc_881049AC:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b758
	ctx.lr = 0x881049BC;
	sub_8810B758(ctx, base);
loc_881049BC:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881049BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881049e0
	if (ctx.cr6.eq) goto loc_881049E0;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,196
	ctx.r6.s64 = ctx.r1.s64 + 196;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b598
	ctx.lr = 0x881049E0;
	sub_8810B598(ctx, base);
loc_881049E0:
	// lwz r14,1132(r1)
	ctx.current_instruction = 0x881049E0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1132);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x881049EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r9,192(r1)
	ctx.current_instruction = 0x881049F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r8,196(r1)
	ctx.current_instruction = 0x881049FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88104A08;
	sub_8810B7F8(ctx, base);
loc_88104A08:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,192(r1)
	ctx.current_instruction = 0x88104A10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88104A18;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r8,196(r1)
	ctx.current_instruction = 0x88104A20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88104A2C;
	sub_8810B7F8(ctx, base);
loc_88104A2C:
	// b 0x88104e2c
	goto loc_88104E2C;
loc_88104A30:
	// lwz r11,2464(r31)
	ctx.current_instruction = 0x88104A30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// lwz r10,2468(r31)
	ctx.current_instruction = 0x88104A38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r31)
	ctx.current_instruction = 0x88104A40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// lhzx r8,r11,r19
	ctx.current_instruction = 0x88104A48;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,204(r1)
	ctx.current_instruction = 0x88104A50;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lhzx r6,r10,r19
	ctx.current_instruction = 0x88104A58;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r19.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,200(r1)
	ctx.current_instruction = 0x88104A60;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r5.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// bne cr6,0x88104a78
	if (!ctx.cr6.eq) goto loc_88104A78;
	// bl 0x8810aa38
	ctx.lr = 0x88104A74;
	sub_8810AA38(ctx, base);
loc_88104A74:
	// b 0x88104a7c
	goto loc_88104A7C;
loc_88104A78:
	// bl 0x8810a970
	ctx.lr = 0x88104A7C;
	sub_8810A970(ctx, base);
loc_88104A7C:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x88104A7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r10,216(r1)
	ctx.current_instruction = 0x88104A88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// lwz r9,200(r1)
	ctx.current_instruction = 0x88104A90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x88104A98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88104AA0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r8,204(r1)
	ctx.current_instruction = 0x88104AA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x8810c568
	ctx.lr = 0x88104AAC;
	sub_8810C568(ctx, base);
loc_88104AAC:
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b758
	ctx.lr = 0x88104ABC;
	sub_8810B758(ctx, base);
loc_88104ABC:
	// lwz r14,1132(r1)
	ctx.current_instruction = 0x88104ABC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1132);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,200(r1)
	ctx.current_instruction = 0x88104AC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88104ACC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r8,204(r1)
	ctx.current_instruction = 0x88104AD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88104AE4;
	sub_8810B7F8(ctx, base);
loc_88104AE4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,200(r1)
	ctx.current_instruction = 0x88104AEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88104AF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r8,204(r1)
	ctx.current_instruction = 0x88104AFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88104B08;
	sub_8810B7F8(ctx, base);
loc_88104B08:
	// b 0x88104e2c
	goto loc_88104E2C;
loc_88104B0C:
	// lwz r11,2456(r31)
	ctx.current_instruction = 0x88104B0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// lwz r10,2460(r31)
	ctx.current_instruction = 0x88104B14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r31)
	ctx.current_instruction = 0x88104B1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// lhzx r8,r11,r19
	ctx.current_instruction = 0x88104B24;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,196(r1)
	ctx.current_instruction = 0x88104B2C;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lhzx r6,r10,r19
	ctx.current_instruction = 0x88104B34;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r19.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r5,192(r1)
	ctx.current_instruction = 0x88104B40;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bne cr6,0x88104b54
	if (!ctx.cr6.eq) goto loc_88104B54;
	// bl 0x8810aa38
	ctx.lr = 0x88104B50;
	sub_8810AA38(ctx, base);
loc_88104B50:
	// b 0x88104b58
	goto loc_88104B58;
loc_88104B54:
	// bl 0x8810a970
	ctx.lr = 0x88104B58;
	sub_8810A970(ctx, base);
loc_88104B58:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x88104B58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r14,216(r1)
	ctx.current_instruction = 0x88104B60;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x88104B6C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// lwz r9,192(r1)
	ctx.current_instruction = 0x88104B74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,196(r1)
	ctx.current_instruction = 0x88104B7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88104B84;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8810c568
	ctx.lr = 0x88104B8C;
	sub_8810C568(ctx, base);
loc_88104B8C:
	// lwz r10,2464(r31)
	ctx.current_instruction = 0x88104B8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// lwz r9,2468(r31)
	ctx.current_instruction = 0x88104B90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r31)
	ctx.current_instruction = 0x88104B98;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// lhzx r7,r10,r19
	ctx.current_instruction = 0x88104BA0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r19.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r6,204(r1)
	ctx.current_instruction = 0x88104BAC;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhzx r5,r9,r19
	ctx.current_instruction = 0x88104BB4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r19.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// stw r4,200(r1)
	ctx.current_instruction = 0x88104BBC;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// bne cr6,0x88104bd4
	if (!ctx.cr6.eq) goto loc_88104BD4;
	// bl 0x8810aa38
	ctx.lr = 0x88104BD0;
	sub_8810AA38(ctx, base);
loc_88104BD0:
	// b 0x88104bd8
	goto loc_88104BD8;
loc_88104BD4:
	// bl 0x8810a970
	ctx.lr = 0x88104BD8;
	sub_8810A970(ctx, base);
loc_88104BD8:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x88104BD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r9,200(r1)
	ctx.current_instruction = 0x88104BE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x88104BEC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r8,204(r1)
	ctx.current_instruction = 0x88104BF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stw r4,84(r1)
	ctx.current_instruction = 0x88104BF8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810c568
	ctx.lr = 0x88104C08;
	sub_8810C568(ctx, base);
loc_88104C08:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x88104C08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,544
	ctx.r7.s64 = ctx.r1.s64 + 544;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bctrl 
	ctx.lr = 0x88104C34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104C34:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88104C34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88104c60
	if (ctx.cr6.eq) goto loc_88104C60;
	// lwz r11,2456(r31)
	ctx.current_instruction = 0x88104C40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// lwz r10,2460(r31)
	ctx.current_instruction = 0x88104C44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// lhzx r9,r11,r19
	ctx.current_instruction = 0x88104C48;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r19.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r8,196(r1)
	ctx.current_instruction = 0x88104C50;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// lhzx r7,r10,r19
	ctx.current_instruction = 0x88104C54;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r19.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r6,192(r1)
	ctx.current_instruction = 0x88104C5C;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
loc_88104C60:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b758
	ctx.lr = 0x88104C70;
	sub_8810B758(ctx, base);
loc_88104C70:
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b758
	ctx.lr = 0x88104C80;
	sub_8810B758(ctx, base);
loc_88104C80:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88104C80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88104ca4
	if (ctx.cr6.eq) goto loc_88104CA4;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,196
	ctx.r6.s64 = ctx.r1.s64 + 196;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b598
	ctx.lr = 0x88104CA4;
	sub_8810B598(ctx, base);
loc_88104CA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88104CA8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,192(r1)
	ctx.current_instruction = 0x88104CB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r8,196(r1)
	ctx.current_instruction = 0x88104CB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88104CC8;
	sub_8810B7F8(ctx, base);
loc_88104CC8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,200(r1)
	ctx.current_instruction = 0x88104CD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88104CD8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r8,204(r1)
	ctx.current_instruction = 0x88104CE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88104CEC;
	sub_8810B7F8(ctx, base);
loc_88104CEC:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x88104CEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bctrl 
	ctx.lr = 0x88104D18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104D18:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88104D20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// lwz r9,192(r1)
	ctx.current_instruction = 0x88104D28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r8,196(r1)
	ctx.current_instruction = 0x88104D30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88104D3C;
	sub_8810B7F8(ctx, base);
loc_88104D3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,200(r1)
	ctx.current_instruction = 0x88104D44;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88104D4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r8,204(r1)
	ctx.current_instruction = 0x88104D54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x88104D60;
	sub_8810B7F8(ctx, base);
loc_88104D60:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x88104D60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bctrl 
	ctx.lr = 0x88104D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104D8C:
	// lwz r11,8204(r31)
	ctx.current_instruction = 0x88104D8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8204);
	// lwz r14,1132(r1)
	ctx.current_instruction = 0x88104D90;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1132);
	// li r27,8
	ctx.r27.s64 = 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,84(r1)
	ctx.current_instruction = 0x88104DA0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	ctx.lr = 0x88104DC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104DC4:
	// lwz r11,8204(r31)
	ctx.current_instruction = 0x88104DC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8204);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,84(r1)
	ctx.current_instruction = 0x88104DCC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88104DF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104DF4:
	// lwz r11,8204(r31)
	ctx.current_instruction = 0x88104DF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8204);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88104E04;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	ctx.lr = 0x88104E24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104E24:
	// b 0x88104e2c
	goto loc_88104E2C;
loc_88104E28:
	// lwz r14,1132(r1)
	ctx.current_instruction = 0x88104E28;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1132);
loc_88104E2C:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x88104E2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// lwz r24,1164(r1)
	ctx.current_instruction = 0x88104E34;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1164);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// lwz r22,1156(r1)
	ctx.current_instruction = 0x88104E40;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1156);
	// stw r24,92(r1)
	ctx.current_instruction = 0x88104E44;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// stw r10,0(r29)
	ctx.current_instruction = 0x88104E4C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// stw r22,84(r1)
	ctx.current_instruction = 0x88104E54;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r25,1148(r1)
	ctx.current_instruction = 0x88104E5C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r18,84(r29)
	ctx.current_instruction = 0x88104E64;
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r18.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r11,8112(r31)
	ctx.current_instruction = 0x88104E6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8112);
	// lwz r4,1036(r1)
	ctx.current_instruction = 0x88104E70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88104E7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104E7C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4dd8
	ctx.lr = 0x88104E98;
	sub_880E4DD8(ctx, base);
loc_88104E98:
	// lwz r10,1060(r1)
	ctx.current_instruction = 0x88104E98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// lwz r9,8196(r31)
	ctx.current_instruction = 0x88104E9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8196);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x88104EA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// add r27,r11,r21
	ctx.r27.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88104EC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104EC4:
	// lwz r8,8196(r31)
	ctx.current_instruction = 0x88104EC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8196);
	// addi r26,r20,8
	ctx.r26.s64 = ctx.r20.s64 + 8;
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x88104ECC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88104EE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104EE8:
	// lwz r11,19088(r31)
	ctx.current_instruction = 0x88104EE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19088);
	// addi r26,r26,120
	ctx.r26.s64 = ctx.r26.s64 + 120;
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x88104EF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// add r27,r27,r11
	ctx.r27.u64 = ctx.r27.u64 + ctx.r11.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,8196(r31)
	ctx.current_instruction = 0x88104F08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88104F14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104F14:
	// lwz r10,8196(r31)
	ctx.current_instruction = 0x88104F14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8196);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r26,8
	ctx.r5.s64 = ctx.r26.s64 + 8;
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x88104F20;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88104F34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104F34:
	// lwz r9,8196(r31)
	ctx.current_instruction = 0x88104F34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8196);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r14,220(r1)
	ctx.current_instruction = 0x88104F3C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x88104F48;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88104F58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104F58:
	// lwz r8,264(r1)
	ctx.current_instruction = 0x88104F58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x88104F60;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// add r4,r8,r14
	ctx.r4.u64 = ctx.r8.u64 + ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8196(r31)
	ctx.current_instruction = 0x88104F70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88104F7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88104F7C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb9e0
	ctx.lr = 0x88104F90;
	sub_880EB9E0(ctx, base);
loc_88104F90:
	// lwz r7,1244(r1)
	ctx.current_instruction = 0x88104F90;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r3,1236(r1)
	ctx.current_instruction = 0x88104F94;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r26,1228(r1)
	ctx.current_instruction = 0x88104F9C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1228);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r25,1220(r1)
	ctx.current_instruction = 0x88104FA4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1220);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,1252(r1)
	ctx.current_instruction = 0x88104FAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1252);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r7,224(r1)
	ctx.current_instruction = 0x88104FB4;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r3,208(r1)
	ctx.current_instruction = 0x88104FBC;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r26,212(r1)
	ctx.current_instruction = 0x88104FC4;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,220(r1)
	ctx.current_instruction = 0x88104FCC;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r25.u32);
	// lwz r22,1212(r1)
	ctx.current_instruction = 0x88104FD0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1212);
	// stw r11,164(r1)
	ctx.current_instruction = 0x88104FD4;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r23,1268(r1)
	ctx.current_instruction = 0x88104FD8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1268);
	// lwz r27,1180(r1)
	ctx.current_instruction = 0x88104FDC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// std r30,272(r1)
	ctx.current_instruction = 0x88104FE0;
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.r30.u64);
	// stw r22,240(r1)
	ctx.current_instruction = 0x88104FE4;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r22.u32);
	// lwz r24,1260(r1)
	ctx.current_instruction = 0x88104FE8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// stw r23,180(r1)
	ctx.current_instruction = 0x88104FEC;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r27,92(r1)
	ctx.current_instruction = 0x88104FF0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lwz r22,1204(r1)
	ctx.current_instruction = 0x88104FF4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1204);
	// lwz r25,1196(r1)
	ctx.current_instruction = 0x88104FF8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1196);
	// lwz r26,1188(r1)
	ctx.current_instruction = 0x88104FFC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1188);
	// lwz r30,1116(r1)
	ctx.current_instruction = 0x88105000;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1116);
	// lwz r7,256(r1)
	ctx.current_instruction = 0x88105004;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// stw r24,172(r1)
	ctx.current_instruction = 0x88105008;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// stw r22,116(r1)
	ctx.current_instruction = 0x8810500C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// lwz r11,224(r1)
	ctx.current_instruction = 0x88105010;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// std r28,224(r1)
	ctx.current_instruction = 0x88105014;
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r28.u64);
	// lwz r28,208(r1)
	ctx.current_instruction = 0x88105018;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stw r25,108(r1)
	ctx.current_instruction = 0x8810501C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r26,100(r1)
	ctx.current_instruction = 0x88105020;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r11,156(r1)
	ctx.current_instruction = 0x88105024;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lwz r11,2484(r31)
	ctx.current_instruction = 0x88105028;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2484);
	// stw r28,148(r1)
	ctx.current_instruction = 0x8810502C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// lwz r28,212(r1)
	ctx.current_instruction = 0x88105030;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r30,84(r1)
	ctx.current_instruction = 0x88105034;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,188(r1)
	ctx.current_instruction = 0x88105038;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r28,140(r1)
	ctx.current_instruction = 0x8810503C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// lwz r28,220(r1)
	ctx.current_instruction = 0x88105040;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r28,132(r1)
	ctx.current_instruction = 0x88105044;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// lwz r28,240(r1)
	ctx.current_instruction = 0x88105048;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// stw r28,124(r1)
	ctx.current_instruction = 0x8810504C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// bl 0x88103740
	ctx.lr = 0x88105054;
	sub_88103740(ctx, base);
loc_88105054:
	// lwz r10,248(r1)
	ctx.current_instruction = 0x88105054;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// addi r8,r27,1536
	ctx.r8.s64 = ctx.r27.s64 + 1536;
	// lwz r6,1608(r31)
	ctx.current_instruction = 0x8810505C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// addi r7,r26,12
	ctx.r7.s64 = ctx.r26.s64 + 12;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// ld r30,272(r1)
	ctx.current_instruction = 0x88105068;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// addi r5,r24,1536
	ctx.r5.s64 = ctx.r24.s64 + 1536;
	// ld r28,224(r1)
	ctx.current_instruction = 0x88105070;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// addi r4,r23,48
	ctx.r4.s64 = ctx.r23.s64 + 48;
	// stw r8,1180(r1)
	ctx.current_instruction = 0x88105078;
	REX_STORE_U32(ctx.r1.u32 + 1180, ctx.r8.u32);
	// stw r9,248(r1)
	ctx.current_instruction = 0x8810507C;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// addi r29,r29,276
	ctx.r29.s64 = ctx.r29.s64 + 276;
	// stw r7,1188(r1)
	ctx.current_instruction = 0x88105084;
	REX_STORE_U32(ctx.r1.u32 + 1188, ctx.r7.u32);
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// stw r5,1260(r1)
	ctx.current_instruction = 0x8810508C;
	REX_STORE_U32(ctx.r1.u32 + 1260, ctx.r5.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r4,1268(r1)
	ctx.current_instruction = 0x88105094;
	REX_STORE_U32(ctx.r1.u32 + 1268, ctx.r4.u32);
	// beq cr6,0x881050f4
	if (ctx.cr6.eq) goto loc_881050F4;
	// lwz r8,1220(r1)
	ctx.current_instruction = 0x8810509C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1220);
	// addi r10,r25,768
	ctx.r10.s64 = ctx.r25.s64 + 768;
	// lwz r11,1212(r1)
	ctx.current_instruction = 0x881050A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1212);
	// addi r7,r22,12
	ctx.r7.s64 = ctx.r22.s64 + 12;
	// lwz r6,1228(r1)
	ctx.current_instruction = 0x881050AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1228);
	// addi r3,r8,12
	ctx.r3.s64 = ctx.r8.s64 + 12;
	// addi r5,r11,768
	ctx.r5.s64 = ctx.r11.s64 + 768;
	// lwz r4,1236(r1)
	ctx.current_instruction = 0x881050B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// addi r8,r6,768
	ctx.r8.s64 = ctx.r6.s64 + 768;
	// lwz r11,1244(r1)
	ctx.current_instruction = 0x881050C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r6,1252(r1)
	ctx.current_instruction = 0x881050C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1252);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// stw r10,1196(r1)
	ctx.current_instruction = 0x881050CC;
	REX_STORE_U32(ctx.r1.u32 + 1196, ctx.r10.u32);
	// addi r11,r11,768
	ctx.r11.s64 = ctx.r11.s64 + 768;
	// addi r10,r6,12
	ctx.r10.s64 = ctx.r6.s64 + 12;
	// stw r7,1204(r1)
	ctx.current_instruction = 0x881050D8;
	REX_STORE_U32(ctx.r1.u32 + 1204, ctx.r7.u32);
	// stw r5,1212(r1)
	ctx.current_instruction = 0x881050DC;
	REX_STORE_U32(ctx.r1.u32 + 1212, ctx.r5.u32);
	// stw r3,1220(r1)
	ctx.current_instruction = 0x881050E0;
	REX_STORE_U32(ctx.r1.u32 + 1220, ctx.r3.u32);
	// stw r8,1228(r1)
	ctx.current_instruction = 0x881050E4;
	REX_STORE_U32(ctx.r1.u32 + 1228, ctx.r8.u32);
	// stw r4,1236(r1)
	ctx.current_instruction = 0x881050E8;
	REX_STORE_U32(ctx.r1.u32 + 1236, ctx.r4.u32);
	// stw r11,1244(r1)
	ctx.current_instruction = 0x881050EC;
	REX_STORE_U32(ctx.r1.u32 + 1244, ctx.r11.u32);
	// stw r10,1252(r1)
	ctx.current_instruction = 0x881050F0;
	REX_STORE_U32(ctx.r1.u32 + 1252, ctx.r10.u32);
loc_881050F4:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x881050F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r14,8
	ctx.r10.s64 = ctx.r14.s64 + 8;
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// stw r10,220(r1)
	ctx.current_instruction = 0x88105104;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x881046f4
	if (ctx.cr6.lt) goto loc_881046F4;
	// lwz r6,232(r1)
	ctx.current_instruction = 0x88105110;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,988(r1)
	ctx.current_instruction = 0x88105114;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 988);
	// lwz r5,996(r1)
	ctx.current_instruction = 0x88105118;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 996);
	// lwz r8,1068(r1)
	ctx.current_instruction = 0x8810511C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r7,1076(r1)
	ctx.current_instruction = 0x88105120;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1076);
loc_88105124:
	// lwz r11,1408(r31)
	ctx.current_instruction = 0x88105124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1408);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r3,1060(r1)
	ctx.current_instruction = 0x8810512C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// lwz r10,1404(r31)
	ctx.current_instruction = 0x88105134;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1404);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r6,232(r1)
	ctx.current_instruction = 0x88105140;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,1068(r1)
	ctx.current_instruction = 0x88105148;
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r8.u32);
	// stw r7,1076(r1)
	ctx.current_instruction = 0x8810514C;
	REX_STORE_U32(ctx.r1.u32 + 1076, ctx.r7.u32);
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// stw r11,1060(r1)
	ctx.current_instruction = 0x88105154;
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r11.u32);
	// blt cr6,0x881046b4
	if (ctx.cr6.lt) goto loc_881046B4;
loc_8810515C:
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88122288) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88122288;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88122288) {
			switch (rex_dispatch_address) {
				case 0x88122290:
				case 0x881222F8:
				case 0x88122324:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88122288;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88122290: goto loc_88122290;
		case 0x881222F8: goto loc_881222F8;
		case 0x88122324: goto loc_88122324;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88122290;
	__savegprlr_29(ctx, base);
loc_88122290:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88122290;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x88122294;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,80(r1)
	ctx.current_instruction = 0x8812229C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x881222A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881222bc
	if (!ctx.cr6.eq) goto loc_881222BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881222BC:
	// stw r11,80(r1)
	ctx.current_instruction = 0x881222BC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.current_instruction = 0x881222C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88122314
	if (ctx.cr6.eq) goto loc_88122314;
loc_881222CC:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881222CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r10,36(r11)
	ctx.current_instruction = 0x881222D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r30)
	ctx.current_instruction = 0x881222DC;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r29,40(r10)
	ctx.current_instruction = 0x881222E0;
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r29.u32);
	// lwz r3,72(r31)
	ctx.current_instruction = 0x881222E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881222E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,12(r31)
	ctx.current_instruction = 0x881222F0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x880cb318
	ctx.lr = 0x881222F8;
	sub_880CB318(ctx, base);
loc_881222F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88122340
	if (ctx.cr6.lt) goto loc_88122340;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88122300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88122304;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.current_instruction = 0x88122308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881222cc
	if (!ctx.cr6.eq) goto loc_881222CC;
loc_88122314:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,72(r31)
	ctx.current_instruction = 0x88122318;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x880cb318
	ctx.lr = 0x88122324;
	sub_880CB318(ctx, base);
loc_88122324:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88122340
	if (ctx.cr6.lt) goto loc_88122340;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8812232C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,0(r30)
	ctx.current_instruction = 0x88122330;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,8(r31)
	ctx.current_instruction = 0x88122338;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,12(r31)
	ctx.current_instruction = 0x8812233C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_88122340:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88122DC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88122DC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88122DC8) {
			switch (rex_dispatch_address) {
				case 0x88122DD0:
				case 0x88122E6C:
				case 0x88122EB4:
				case 0x88122EEC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88122DC8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88122DD0: goto loc_88122DD0;
		case 0x88122E6C: goto loc_88122E6C;
		case 0x88122EB4: goto loc_88122EB4;
		case 0x88122EEC: goto loc_88122EEC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88122DD0;
	__savegprlr_25(ctx, base);
loc_88122DD0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88122DD0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,44(r3)
	ctx.current_instruction = 0x88122DD4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	ctx.current_instruction = 0x88122DE0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// ld r11,64(r26)
	ctx.current_instruction = 0x88122DF0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r26.u32 + 64);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// ble cr6,0x88122e0c
	if (!ctx.cr6.gt) goto loc_88122E0C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88122E0C:
	// lwz r9,16(r26)
	ctx.current_instruction = 0x88122E0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,8(r9)
	ctx.current_instruction = 0x88122E18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88122e30
	if (ctx.cr6.eq) goto loc_88122E30;
	// lwz r10,0(r9)
	ctx.current_instruction = 0x88122E24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.current_instruction = 0x88122E28;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.current_instruction = 0x88122E2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_88122E30:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x88122e58
	if (!ctx.cr6.lt) goto loc_88122E58;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,212
	ctx.r3.u64 = ctx.r3.u64 | 212;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88122E58:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r26)
	ctx.current_instruction = 0x88122E5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 72);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x880cb2c0
	ctx.lr = 0x88122E6C;
	sub_880CB2C0(ctx, base);
loc_88122E6C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88122ed0
	if (ctx.cr6.lt) goto loc_88122ED0;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122E78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r29,0(r11)
	ctx.current_instruction = 0x88122E80;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	ctx.current_instruction = 0x88122E84;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122E88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r30,0(r11)
	ctx.current_instruction = 0x88122E8C;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88122E90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,24(r10)
	ctx.current_instruction = 0x88122E94;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r28.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122E98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,24(r11)
	ctx.current_instruction = 0x88122E9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,28(r11)
	ctx.current_instruction = 0x88122EA0;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122EA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,32(r11)
	ctx.current_instruction = 0x88122EA8;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x88122EAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x881238b8
	ctx.lr = 0x88122EB4;
	sub_881238B8(ctx, base);
loc_88122EB4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88122ed0
	if (ctx.cr6.lt) goto loc_88122ED0;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122EC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r25)
	ctx.current_instruction = 0x88122EC4;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88122ED0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122ED0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88122eec
	if (ctx.cr6.eq) goto loc_88122EEC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r26)
	ctx.current_instruction = 0x88122EE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x880cb318
	ctx.lr = 0x88122EEC;
	sub_880CB318(ctx, base);
loc_88122EEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88124DE0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88124DE0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88124DE0;
	ctx.current_instruction = 0x88124DE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// stw r11,0(r5)
	ctx.current_instruction = 0x88124DE8;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	ctx.current_instruction = 0x88124DEC;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// lwz r10,32(r4)
	ctx.current_instruction = 0x88124DF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r10,44(r4)
	ctx.current_instruction = 0x88124E00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// stw r10,0(r5)
	ctx.current_instruction = 0x88124E04;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r4)
	ctx.current_instruction = 0x88124E08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// stw r9,0(r6)
	ctx.current_instruction = 0x88124E0C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r11,32(r4)
	ctx.current_instruction = 0x88124E10;
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88125668) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88125668;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88125668) {
			switch (rex_dispatch_address) {
				case 0x88125688:
				case 0x88125698:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125668;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125688: goto loc_88125688;
		case 0x88125698: goto loc_88125698;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8812566C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88125670;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88125674;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88125678;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x8812567C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x88124f50
	ctx.lr = 0x88125688;
	sub_88124F50(ctx, base);
loc_88125688:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881256d4
	if (ctx.cr6.lt) goto loc_881256D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88125218
	ctx.lr = 0x88125698;
	sub_88125218(ctx, base);
loc_88125698:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881256d4
	if (ctx.cr6.lt) goto loc_881256D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,56(r31)
	ctx.current_instruction = 0x881256A8;
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// stw r10,0(r31)
	ctx.current_instruction = 0x881256AC;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,64(r31)
	ctx.current_instruction = 0x881256B0;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// std r11,32(r31)
	ctx.current_instruction = 0x881256B4;
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// std r11,40(r31)
	ctx.current_instruction = 0x881256B8;
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// stw r11,68(r31)
	ctx.current_instruction = 0x881256BC;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// std r11,72(r31)
	ctx.current_instruction = 0x881256C0;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// stw r11,120(r31)
	ctx.current_instruction = 0x881256C4;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,20(r31)
	ctx.current_instruction = 0x881256C8;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	ctx.current_instruction = 0x881256CC;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	ctx.current_instruction = 0x881256D0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_881256D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881256D8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881256E0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881256E4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881276D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881276D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881276D8;
	ctx.current_instruction = 0x881276D8;
	PPCRegister temp{};
	// lwz r11,444(r3)
	ctx.current_instruction = 0x881276D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812775c
	if (ctx.cr6.eq) goto loc_8812775C;
	// lwz r11,456(r3)
	ctx.current_instruction = 0x881276E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lhz r10,118(r4)
	ctx.current_instruction = 0x881276E8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lhz r8,122(r4)
	ctx.current_instruction = 0x881276F0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 122);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lhz r6,124(r4)
	ctx.current_instruction = 0x881276F8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + 124);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r11,126(r4)
	ctx.current_instruction = 0x88127700;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 126);
	// sraw r10,r7,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r10.s64 = ctx.r7.s32 >> temp.u32;
	// sth r10,120(r4)
	ctx.current_instruction = 0x88127708;
	REX_STORE_U16(ctx.r4.u32 + 120, ctx.r10.u16);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lwz r8,456(r3)
	ctx.current_instruction = 0x88127710;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// sraw r7,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r7.s64 = ctx.r5.s32 >> temp.u32;
	// stw r7,140(r4)
	ctx.current_instruction = 0x8812771C;
	REX_STORE_U32(ctx.r4.u32 + 140, ctx.r7.u32);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lwz r5,456(r3)
	ctx.current_instruction = 0x88127724;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// sraw r10,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// sth r10,122(r4)
	ctx.current_instruction = 0x88127734;
	REX_STORE_U16(ctx.r4.u32 + 122, ctx.r10.u16);
	// lwz r9,456(r3)
	ctx.current_instruction = 0x88127738;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// sraw r5,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r5.s64 = ctx.r8.s32 >> temp.u32;
	// sth r5,124(r4)
	ctx.current_instruction = 0x88127744;
	REX_STORE_U16(ctx.r4.u32 + 124, ctx.r5.u16);
	// lwz r3,456(r3)
	ctx.current_instruction = 0x88127748;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sraw r10,r6,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// sth r10,126(r4)
	ctx.current_instruction = 0x88127754;
	REX_STORE_U16(ctx.r4.u32 + 126, ctx.r10.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8812775C:
	// lwz r11,448(r3)
	ctx.current_instruction = 0x8812775C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,118(r4)
	ctx.current_instruction = 0x88127764;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// beq cr6,0x881277d4
	if (ctx.cr6.eq) goto loc_881277D4;
	// lwz r10,456(r3)
	ctx.current_instruction = 0x8812776C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lhz r8,122(r4)
	ctx.current_instruction = 0x88127774;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 122);
	// slw r6,r9,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// sth r6,120(r4)
	ctx.current_instruction = 0x8812777C;
	REX_STORE_U16(ctx.r4.u32 + 120, ctx.r6.u16);
	// lhz r7,124(r4)
	ctx.current_instruction = 0x88127780;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 124);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lhz r5,126(r4)
	ctx.current_instruction = 0x88127788;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 126);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lwz r7,456(r3)
	ctx.current_instruction = 0x88127794;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// slw r6,r9,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// stw r6,140(r4)
	ctx.current_instruction = 0x8812779C;
	REX_STORE_U32(ctx.r4.u32 + 140, ctx.r6.u32);
	// lwz r11,456(r3)
	ctx.current_instruction = 0x881277A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// slw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// sth r7,122(r4)
	ctx.current_instruction = 0x881277AC;
	REX_STORE_U16(ctx.r4.u32 + 122, ctx.r7.u16);
	// lwz r11,456(r3)
	ctx.current_instruction = 0x881277B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// slw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// sth r9,124(r4)
	ctx.current_instruction = 0x881277BC;
	REX_STORE_U16(ctx.r4.u32 + 124, ctx.r9.u16);
	// lwz r7,456(r3)
	ctx.current_instruction = 0x881277C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// slw r5,r5,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// sth r5,126(r4)
	ctx.current_instruction = 0x881277CC;
	REX_STORE_U16(ctx.r4.u32 + 126, ctx.r5.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881277D4:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sth r11,120(r4)
	ctx.current_instruction = 0x881277D8;
	REX_STORE_U16(ctx.r4.u32 + 120, ctx.r11.u16);
	// stw r10,140(r4)
	ctx.current_instruction = 0x881277DC;
	REX_STORE_U32(ctx.r4.u32 + 140, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812B5D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812B5D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812B5D0) {
			switch (rex_dispatch_address) {
				case 0x8812B5D8:
				case 0x8812B9D8:
				case 0x8812B9E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812B5D0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812B5D8: goto loc_8812B5D8;
		case 0x8812B9D8: goto loc_8812B9D8;
		case 0x8812B9E8: goto loc_8812B9E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8812B5D8;
	__savegprlr_14(ctx, base);
loc_8812B5D8:
	// stwu r1,-336(r1)
	ctx.current_instruction = 0x8812B5D8;
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r26,0(r4)
	ctx.current_instruction = 0x8812B5E0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r24,48(r4)
	ctx.current_instruction = 0x8812B5E4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r25,40(r4)
	ctx.current_instruction = 0x8812B5EC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r29,36(r4)
	ctx.current_instruction = 0x8812B5F0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r30,4(r4)
	ctx.current_instruction = 0x8812B5F4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,132(r1)
	ctx.current_instruction = 0x8812B5F8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// lwz r4,32(r4)
	ctx.current_instruction = 0x8812B5FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r27,24(r28)
	ctx.current_instruction = 0x8812B600;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r10,20(r28)
	ctx.current_instruction = 0x8812B604;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// lhz r9,30(r28)
	ctx.current_instruction = 0x8812B608;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 30);
	// lwz r11,8(r28)
	ctx.current_instruction = 0x8812B60C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r26,148(r1)
	ctx.current_instruction = 0x8812B610;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r24,136(r1)
	ctx.current_instruction = 0x8812B614;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// stw r25,140(r1)
	ctx.current_instruction = 0x8812B618;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r29,144(r1)
	ctx.current_instruction = 0x8812B61C;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r30,128(r1)
	ctx.current_instruction = 0x8812B620;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r4,88(r1)
	ctx.current_instruction = 0x8812B624;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r27,152(r1)
	ctx.current_instruction = 0x8812B628;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r10,160(r1)
	ctx.current_instruction = 0x8812B62C;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// sth r9,80(r1)
	ctx.current_instruction = 0x8812B630;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// ble cr6,0x8812ba98
	if (!ctx.cr6.gt) goto loc_8812BA98;
	// rlwinm r21,r11,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,112(r1)
	ctx.current_instruction = 0x8812B63C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r23,r5,-4
	ctx.r23.s64 = ctx.r5.s64 + -4;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r21,108(r1)
	ctx.current_instruction = 0x8812B648;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// stw r23,372(r1)
	ctx.current_instruction = 0x8812B64C;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r23.u32);
loc_8812B650:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,156(r1)
	ctx.current_instruction = 0x8812B654;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r7,96(r1)
	ctx.current_instruction = 0x8812B664;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,92(r1)
	ctx.current_instruction = 0x8812B66C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r10,104(r1)
	ctx.current_instruction = 0x8812B674;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r9,100(r1)
	ctx.current_instruction = 0x8812B67C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x8812b860
	if (ctx.cr6.lt) goto loc_8812B860;
loc_8812B688:
	// lhz r9,14(r11)
	ctx.current_instruction = 0x8812B688;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r7,28(r10)
	ctx.current_instruction = 0x8812B68C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r8,12(r11)
	ctx.current_instruction = 0x8812B694;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lwz r5,24(r10)
	ctx.current_instruction = 0x8812B698;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lhz r3,30(r11)
	ctx.current_instruction = 0x8812B6A0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// lwz r7,60(r10)
	ctx.current_instruction = 0x8812B6A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// stw r9,84(r1)
	ctx.current_instruction = 0x8812B6A8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r6,56(r10)
	ctx.current_instruction = 0x8812B6AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r31,20(r10)
	ctx.current_instruction = 0x8812B6B0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r28,52(r10)
	ctx.current_instruction = 0x8812B6B4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r27,16(r10)
	ctx.current_instruction = 0x8812B6B8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r25,12(r10)
	ctx.current_instruction = 0x8812B6BC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r24,8(r10)
	ctx.current_instruction = 0x8812B6C0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r23,40(r10)
	ctx.current_instruction = 0x8812B6C4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lhz r8,28(r11)
	ctx.current_instruction = 0x8812B6CC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lwz r22,4(r10)
	ctx.current_instruction = 0x8812B6D4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r4,48(r10)
	ctx.current_instruction = 0x8812B6DC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r21,36(r10)
	ctx.current_instruction = 0x8812B6E0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// stw r5,116(r1)
	ctx.current_instruction = 0x8812B6E4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// lwz r5,44(r10)
	ctx.current_instruction = 0x8812B6E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r20,0(r10)
	ctx.current_instruction = 0x8812B6EC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r19,32(r10)
	ctx.current_instruction = 0x8812B6F0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lhz r9,10(r11)
	ctx.current_instruction = 0x8812B6F4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r30,26(r11)
	ctx.current_instruction = 0x8812B6F8;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 26);
	// lhz r29,8(r11)
	ctx.current_instruction = 0x8812B6FC;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r26,24(r11)
	ctx.current_instruction = 0x8812B700;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8812B708;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lhz r7,0(r11)
	ctx.current_instruction = 0x8812B710;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r18,6(r11)
	ctx.current_instruction = 0x8812B714;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// stw r3,120(r1)
	ctx.current_instruction = 0x8812B718;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lhz r17,22(r11)
	ctx.current_instruction = 0x8812B71C;
	ctx.r17.u64 = REX_LOAD_U16(ctx.r11.u32 + 22);
	// lhz r3,4(r11)
	ctx.current_instruction = 0x8812B720;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// sth r7,84(r1)
	ctx.current_instruction = 0x8812B724;
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// lhz r16,20(r11)
	ctx.current_instruction = 0x8812B728;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lhz r15,2(r11)
	ctx.current_instruction = 0x8812B72C;
	ctx.r15.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r14,18(r11)
	ctx.current_instruction = 0x8812B730;
	ctx.r14.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// std r11,168(r1)
	ctx.current_instruction = 0x8812B734;
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lhz r11,16(r11)
	ctx.current_instruction = 0x8812B73C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// lwz r6,116(r1)
	ctx.current_instruction = 0x8812B740;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r8,124(r1)
	ctx.current_instruction = 0x8812B744;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// mullw r7,r9,r31
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// lwz r30,120(r1)
	ctx.current_instruction = 0x8812B754;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r31,124(r1)
	ctx.current_instruction = 0x8812B75C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r7,r6,r27
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// extsh r6,r26
	ctx.r6.s64 = ctx.r26.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r4
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// extsh r31,r18
	ctx.r31.s64 = ctx.r18.s16;
	// extsh r4,r17
	ctx.r4.s64 = ctx.r17.s16;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r7,r31,r25
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r25.s32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r6,r16
	ctx.r6.s64 = ctx.r16.s16;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r7,r3,r24
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r24.s32);
	// lhz r3,84(r1)
	ctx.current_instruction = 0x8812B7A8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r23
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r23.s32);
	// extsh r5,r15
	ctx.r5.s64 = ctx.r15.s16;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// extsh r4,r14
	ctx.r4.s64 = ctx.r14.s16;
	// mullw r7,r5,r22
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r22.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mullw r8,r4,r21
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r21.s32);
	// lwz r4,96(r1)
	ctx.current_instruction = 0x8812B7D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,92(r1)
	ctx.current_instruction = 0x8812B7D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,100(r1)
	ctx.current_instruction = 0x8812B7D8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,104(r1)
	ctx.current_instruction = 0x8812B7DC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,128(r1)
	ctx.current_instruction = 0x8812B7E0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// ld r11,168(r1)
	ctx.current_instruction = 0x8812B7E8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r7,r6,r20
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r20.s32);
	// mullw r8,r5,r19
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r19.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// stw r6,92(r1)
	ctx.current_instruction = 0x8812B810;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r10,r29,64
	ctx.r10.s64 = ctx.r29.s64 + 64;
	// stw r7,96(r1)
	ctx.current_instruction = 0x8812B818;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// stw r9,100(r1)
	ctx.current_instruction = 0x8812B820;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r10,104(r1)
	ctx.current_instruction = 0x8812B828;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8812b688
	if (ctx.cr6.lt) goto loc_8812B688;
	// lwz r23,372(r1)
	ctx.current_instruction = 0x8812B834;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r28,132(r1)
	ctx.current_instruction = 0x8812B838;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r24,136(r1)
	ctx.current_instruction = 0x8812B83C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r25,140(r1)
	ctx.current_instruction = 0x8812B840;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r29,144(r1)
	ctx.current_instruction = 0x8812B844;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r26,148(r1)
	ctx.current_instruction = 0x8812B848;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,88(r1)
	ctx.current_instruction = 0x8812B84C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,152(r1)
	ctx.current_instruction = 0x8812B850;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,156(r1)
	ctx.current_instruction = 0x8812B854;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r21,108(r1)
	ctx.current_instruction = 0x8812B858;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r22,112(r1)
	ctx.current_instruction = 0x8812B85C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8812B860:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8812b91c
	if (!ctx.cr6.lt) goto loc_8812B91C;
	// lhz r9,14(r11)
	ctx.current_instruction = 0x8812B868;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r8,12(r11)
	ctx.current_instruction = 0x8812B86C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r9,28(r10)
	ctx.current_instruction = 0x8812B874;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lhz r5,10(r11)
	ctx.current_instruction = 0x8812B878;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lhz r3,8(r11)
	ctx.current_instruction = 0x8812B884;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r19,6(r11)
	ctx.current_instruction = 0x8812B888;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r18,4(r11)
	ctx.current_instruction = 0x8812B88C;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r17,2(r11)
	ctx.current_instruction = 0x8812B890;
	ctx.r17.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r16,0(r11)
	ctx.current_instruction = 0x8812B894;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x8812B898;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r21,4(r10)
	ctx.current_instruction = 0x8812B89C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,24(r10)
	ctx.current_instruction = 0x8812B8A0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r20,20(r10)
	ctx.current_instruction = 0x8812B8A4;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r15,16(r10)
	ctx.current_instruction = 0x8812B8A8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,156(r1)
	ctx.current_instruction = 0x8812B8AC;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// stw r21,124(r1)
	ctx.current_instruction = 0x8812B8B4;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// lwz r14,12(r10)
	ctx.current_instruction = 0x8812B8B8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,0(r10)
	ctx.current_instruction = 0x8812B8BC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r21,108(r1)
	ctx.current_instruction = 0x8812B8C0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r10,r5,r20
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r20.s32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// lwz r3,156(r1)
	ctx.current_instruction = 0x8812B8D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r9,r15
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r15.s32);
	// extsh r8,r19
	ctx.r8.s64 = ctx.r19.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r8,r14
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r14.s32);
	// extsh r5,r18
	ctx.r5.s64 = ctx.r18.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r5,r3
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// lwz r5,124(r1)
	ctx.current_instruction = 0x8812B8F8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// extsh r9,r17
	ctx.r9.s64 = ctx.r17.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// extsh r3,r16
	ctx.r3.s64 = ctx.r16.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r3,r31
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_8812B91C:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r7,160(r1)
	ctx.current_instruction = 0x8812B920;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r11,4(r23)
	ctx.current_instruction = 0x8812B930;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// sraw r10,r6,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8812b980
	if (!ctx.cr6.gt) goto loc_8812B980;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8812b9bc
	if (!ctx.cr6.gt) goto loc_8812B9BC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// subf r8,r24,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r24.u64;
loc_8812B958:
	// lhzx r10,r8,r11
	ctx.current_instruction = 0x8812B958;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// lhz r9,0(r11)
	ctx.current_instruction = 0x8812B95C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,0(r11)
	ctx.current_instruction = 0x8812B970;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8812b958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8812B958;
	// b 0x8812b9bc
	goto loc_8812B9BC;
loc_8812B980:
	// bge cr6,0x8812b9bc
	if (!ctx.cr6.lt) goto loc_8812B9BC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8812b9bc
	if (!ctx.cr6.gt) goto loc_8812B9BC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// subf r10,r24,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r24.u64;
loc_8812B998:
	// lhzx r9,r11,r10
	ctx.current_instruction = 0x8812B998;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x8812B99C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sth r3,0(r11)
	ctx.current_instruction = 0x8812B9B0;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8812b998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8812B998;
loc_8812B9BC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8812b9f0
	if (!ctx.cr6.eq) goto loc_8812B9F0;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x8812B9D8;
	sub_880547A0(ctx, base);
loc_8812B9D8:
	// rlwinm r5,r26,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r3,r5,r25
	ctx.r3.u64 = ctx.r5.u64 + ctx.r25.u64;
	// bl 0x880547a0
	ctx.lr = 0x8812B9E8;
	sub_880547A0(ctx, base);
loc_8812B9E8:
	// addi r4,r26,-1
	ctx.r4.s64 = ctx.r26.s64 + -1;
	// b 0x8812b9f4
	goto loc_8812B9F4;
loc_8812B9F0:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_8812B9F4:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,88(r1)
	ctx.current_instruction = 0x8812B9F8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stwx r31,r10,r29
	ctx.current_instruction = 0x8812BA08;
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r31.u32);
	// ble cr6,0x8812ba30
	if (!ctx.cr6.gt) goto loc_8812BA30;
	// lhz r8,80(r1)
	ctx.current_instruction = 0x8812BA10;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lis r7,127
	ctx.r7.s64 = 8323072;
	// ori r9,r7,65535
	ctx.r9.u64 = ctx.r7.u64 | 65535;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// sth r8,0(r11)
	ctx.current_instruction = 0x8812BA20;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// ble cr6,0x8812ba60
	if (!ctx.cr6.gt) goto loc_8812BA60;
	// stwx r9,r10,r29
	ctx.current_instruction = 0x8812BA28;
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// b 0x8812ba60
	goto loc_8812BA60;
loc_8812BA30:
	// bge cr6,0x8812ba58
	if (!ctx.cr6.lt) goto loc_8812BA58;
	// lhz r8,80(r1)
	ctx.current_instruction = 0x8812BA34;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// sth r6,0(r11)
	ctx.current_instruction = 0x8812BA48;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// bge cr6,0x8812ba60
	if (!ctx.cr6.lt) goto loc_8812BA60;
	// stwx r9,r10,r29
	ctx.current_instruction = 0x8812BA50;
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// b 0x8812ba60
	goto loc_8812BA60;
loc_8812BA58:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	ctx.current_instruction = 0x8812BA5C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_8812BA60:
	// lhzx r9,r21,r11
	ctx.current_instruction = 0x8812BA60;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r11.u32);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// sthx r7,r21,r11
	ctx.current_instruction = 0x8812BA70;
	REX_STORE_U16(ctx.r21.u32 + ctx.r11.u32, ctx.r7.u16);
	// lhzx r6,r10,r11
	ctx.current_instruction = 0x8812BA74;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// sthx r3,r10,r11
	ctx.current_instruction = 0x8812BA84;
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u16);
	// stwu r31,4(r23)
	ctx.current_instruction = 0x8812BA88;
	ea = 4 + ctx.r23.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r23.u32 = ea;
	// stw r22,112(r1)
	ctx.current_instruction = 0x8812BA8C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// stw r23,372(r1)
	ctx.current_instruction = 0x8812BA90;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r23.u32);
	// bne 0x8812b650
	if (!ctx.cr0.eq) goto loc_8812B650;
loc_8812BA98:
	// stw r4,32(r28)
	ctx.current_instruction = 0x8812BA98;
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r4.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813C958) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813C958;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813C958) {
			switch (rex_dispatch_address) {
				case 0x8813C960:
				case 0x8813CA8C:
				case 0x8813CAB8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813C958;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813C960: goto loc_8813C960;
		case 0x8813CA8C: goto loc_8813CA8C;
		case 0x8813CAB8: goto loc_8813CAB8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8813C960;
	__savegprlr_29(ctx, base);
loc_8813C960:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8813C960;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r4,8(r3)
	ctx.current_instruction = 0x8813C968;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// slw r10,r30,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r4.u8 & 0x3F));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,32(r3)
	ctx.current_instruction = 0x8813C978;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,12(r3)
	ctx.current_instruction = 0x8813C980;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x8813c9a0
	if (!ctx.cr6.lt) goto loc_8813C9A0;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// li r10,77
	ctx.r10.s64 = 77;
	// addi r11,r11,6408
	ctx.r11.s64 = ctx.r11.s64 + 6408;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// b 0x8813ca58
	goto loc_8813CA58;
loc_8813C9A0:
	// bne cr6,0x8813c9b4
	if (!ctx.cr6.eq) goto loc_8813C9B4;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r11,6408
	ctx.r9.s64 = ctx.r11.s64 + 6408;
	// b 0x8813ca58
	goto loc_8813CA58;
loc_8813C9B4:
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x8813ca04
	if (!ctx.cr6.eq) goto loc_8813CA04;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r9,-30680
	ctx.r9.s64 = -2010644480;
	// addi r10,r11,6408
	ctx.r10.s64 = ctx.r11.s64 + 6408;
	// addi r11,r9,7488
	ctx.r11.s64 = ctx.r9.s64 + 7488;
	// addi r8,r10,136
	ctx.r8.s64 = ctx.r10.s64 + 136;
	// addi r7,r11,-152
	ctx.r7.s64 = ctx.r11.s64 + -152;
	// li r6,73
	ctx.r6.s64 = 73;
	// stw r8,4(r31)
	ctx.current_instruction = 0x8813C9D8;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r10,r11,-152
	ctx.r10.s64 = ctx.r11.s64 + -152;
	// stw r7,24(r31)
	ctx.current_instruction = 0x8813C9E0;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,0(r31)
	ctx.current_instruction = 0x8813C9E4;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lbz r5,-152(r11)
	ctx.current_instruction = 0x8813C9E8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -152);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// slw r3,r30,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r5.u8 & 0x3F));
	// stw r5,20(r31)
	ctx.current_instruction = 0x8813C9F4;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r4,24(r31)
	ctx.current_instruction = 0x8813C9F8;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r3,16(r31)
	ctx.current_instruction = 0x8813C9FC;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x8813ca60
	goto loc_8813CA60;
loc_8813CA04:
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x8813ca48
	if (!ctx.cr6.eq) goto loc_8813CA48;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// addi r11,r10,7488
	ctx.r11.s64 = ctx.r10.s64 + 7488;
	// addi r8,r9,6408
	ctx.r8.s64 = ctx.r9.s64 + 6408;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,24(r31)
	ctx.current_instruction = 0x8813CA20;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r8,4(r31)
	ctx.current_instruction = 0x8813CA24;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	ctx.current_instruction = 0x8813CA2C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lbz r5,7488(r10)
	ctx.current_instruction = 0x8813CA30;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7488);
	// slw r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r5.u8 & 0x3F));
	// stw r6,24(r31)
	ctx.current_instruction = 0x8813CA38;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stw r5,20(r31)
	ctx.current_instruction = 0x8813CA3C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r4,16(r31)
	ctx.current_instruction = 0x8813CA40;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// b 0x8813ca60
	goto loc_8813CA60;
loc_8813CA48:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// li r10,34
	ctx.r10.s64 = 34;
	// addi r11,r11,6408
	ctx.r11.s64 = ctx.r11.s64 + 6408;
	// addi r9,r11,96
	ctx.r9.s64 = ctx.r11.s64 + 96;
loc_8813CA58:
	// stw r10,0(r31)
	ctx.current_instruction = 0x8813CA58;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	ctx.current_instruction = 0x8813CA5C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8813CA60:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8813CA60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8813ca80
	if (!ctx.cr6.gt) goto loc_8813CA80;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8813CA80:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050340
	ctx.lr = 0x8813CA8C;
	sub_88050340(ctx, base);
loc_8813CA8C:
	// stw r3,32(r31)
	ctx.current_instruction = 0x8813CA8C;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8813caa8
	if (!ctx.cr6.eq) goto loc_8813CAA8;
	// stw r30,0(r29)
	ctx.current_instruction = 0x8813CA98;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8813CAA8:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8813CAA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x88052d90
	ctx.lr = 0x8813CAB8;
	sub_88052D90(ctx, base);
loc_8813CAB8:
	// lwz r8,0(r31)
	ctx.current_instruction = 0x8813CAB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,32(r31)
	ctx.current_instruction = 0x8813CABC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,28(r31)
	ctx.current_instruction = 0x8813CAD0;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// ble cr6,0x8813cb08
	if (!ctx.cr6.gt) goto loc_8813CB08;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8813CADC:
	// lwz r9,4(r31)
	ctx.current_instruction = 0x8813CADC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,28(r31)
	ctx.current_instruction = 0x8813CAE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lbzx r7,r9,r11
	ctx.current_instruction = 0x8813CAE4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r30,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// stwx r6,r8,r10
	ctx.current_instruction = 0x8813CAF4;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r5,0(r31)
	ctx.current_instruction = 0x8813CAFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8813cadc
	if (ctx.cr6.lt) goto loc_8813CADC;
loc_8813CB08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88140300) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88140300;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88140300) {
			switch (rex_dispatch_address) {
				case 0x88140308:
				case 0x88140338:
				case 0x8814036C:
				case 0x88140384:
				case 0x881403A8:
				case 0x881403BC:
				case 0x881403DC:
				case 0x881403F0:
				case 0x88140410:
				case 0x88140424:
				case 0x88140444:
				case 0x88140458:
				case 0x88140478:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88140300;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88140308: goto loc_88140308;
		case 0x88140338: goto loc_88140338;
		case 0x8814036C: goto loc_8814036C;
		case 0x88140384: goto loc_88140384;
		case 0x881403A8: goto loc_881403A8;
		case 0x881403BC: goto loc_881403BC;
		case 0x881403DC: goto loc_881403DC;
		case 0x881403F0: goto loc_881403F0;
		case 0x88140410: goto loc_88140410;
		case 0x88140424: goto loc_88140424;
		case 0x88140444: goto loc_88140444;
		case 0x88140458: goto loc_88140458;
		case 0x88140478: goto loc_88140478;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88140308;
	__savegprlr_28(ctx, base);
loc_88140308:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88140308;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r4)
	ctx.current_instruction = 0x88140314;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x8814031C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// li r4,64
	ctx.r4.s64 = 64;
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x88125e80
	ctx.lr = 0x88140338;
	sub_88125E80(ctx, base);
loc_88140338:
	// stw r3,28(r29)
	ctx.current_instruction = 0x88140338;
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88140354
	if (!ctx.cr6.eq) goto loc_88140354;
loc_88140344:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88140354:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88140354;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x8814036C;
	sub_88052D90(ctx, base);
loc_8814036C:
	// lhz r8,34(r31)
	ctx.current_instruction = 0x8814036C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r7,r8,r8
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88125e80
	ctx.lr = 0x88140384;
	sub_88125E80(ctx, base);
loc_88140384:
	// stw r3,32(r29)
	ctx.current_instruction = 0x88140384;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88140344
	if (ctx.cr6.eq) goto loc_88140344;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88140390;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x881403A8;
	sub_88052D90(ctx, base);
loc_881403A8:
	// lhz r8,34(r31)
	ctx.current_instruction = 0x881403A8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r7,r8,r8
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88125e80
	ctx.lr = 0x881403BC;
	sub_88125E80(ctx, base);
loc_881403BC:
	// stw r3,36(r29)
	ctx.current_instruction = 0x881403BC;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88140344
	if (ctx.cr6.eq) goto loc_88140344;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x881403C8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x881403DC;
	sub_88052D90(ctx, base);
loc_881403DC:
	// lhz r9,34(r31)
	ctx.current_instruction = 0x881403DC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88125e80
	ctx.lr = 0x881403F0;
	sub_88125E80(ctx, base);
loc_881403F0:
	// stw r3,40(r29)
	ctx.current_instruction = 0x881403F0;
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88140344
	if (ctx.cr6.eq) goto loc_88140344;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x881403FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x88052d90
	ctx.lr = 0x88140410;
	sub_88052D90(ctx, base);
loc_88140410:
	// lhz r9,34(r31)
	ctx.current_instruction = 0x88140410;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x88125e80
	ctx.lr = 0x88140424;
	sub_88125E80(ctx, base);
loc_88140424:
	// stw r3,24(r29)
	ctx.current_instruction = 0x88140424;
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88140344
	if (ctx.cr6.eq) goto loc_88140344;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88140430;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x88052d90
	ctx.lr = 0x88140444;
	sub_88052D90(ctx, base);
loc_88140444:
	// lhz r9,34(r31)
	ctx.current_instruction = 0x88140444;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e80
	ctx.lr = 0x88140458;
	sub_88125E80(ctx, base);
loc_88140458:
	// stw r3,44(r29)
	ctx.current_instruction = 0x88140458;
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88140344
	if (ctx.cr6.eq) goto loc_88140344;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88140464;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88140478;
	sub_88052D90(ctx, base);
loc_88140478:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88143A30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88143A30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88143A30) {
			switch (rex_dispatch_address) {
				case 0x88143A38:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88143A30;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x88143A38: goto loc_88143A38;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88143A38;
	__savegprlr_29(ctx, base);
loc_88143A38:
	// lwz r3,0(r4)
	ctx.current_instruction = 0x88143A38;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r30,0(r6)
	ctx.current_instruction = 0x88143A3C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r7)
	ctx.current_instruction = 0x88143A40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// lwz r8,0(r8)
	ctx.current_instruction = 0x88143A48;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// bge cr6,0x88143acc
	if (!ctx.cr6.lt) goto loc_88143ACC;
	// subf r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lis r31,-8
	ctx.r31.s64 = -524288;
	// ori r5,r11,65535
	ctx.r5.u64 = ctx.r11.u64 | 65535;
loc_88143A78:
	// lwz r11,0(r8)
	ctx.current_instruction = 0x88143A78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88143a8c
	if (!ctx.cr6.lt) goto loc_88143A8C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x88143a98
	goto loc_88143A98;
loc_88143A8C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x88143a98
	if (!ctx.cr6.gt) goto loc_88143A98;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_88143A98:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r11,-48(r1)
	ctx.current_instruction = 0x88143AA0;
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// lbz r29,-46(r1)
	ctx.current_instruction = 0x88143AA4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r1.u32 + -46);
	// lhz r11,-48(r1)
	ctx.current_instruction = 0x88143AA8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -48);
	// sth r11,0(r10)
	ctx.current_instruction = 0x88143AAC;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r29,2(r10)
	ctx.current_instruction = 0x88143AB0;
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r29.u8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x88143AB8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,0(r30)
	ctx.current_instruction = 0x88143AC4;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// bdnz 0x88143a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88143A78;
loc_88143ACC:
	// stw r3,0(r4)
	ctx.current_instruction = 0x88143ACC;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// stw r30,0(r6)
	ctx.current_instruction = 0x88143AD0;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// stw r10,0(r7)
	ctx.current_instruction = 0x88143AD4;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88145008) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88145008;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88145008) {
			switch (rex_dispatch_address) {
				case 0x88145010:
				case 0x881451C8:
				case 0x881451F4:
				case 0x88145224:
				case 0x88145254:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88145008;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88145010: goto loc_88145010;
		case 0x881451C8: goto loc_881451C8;
		case 0x881451F4: goto loc_881451F4;
		case 0x88145224: goto loc_88145224;
		case 0x88145254: goto loc_88145254;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88145010;
	__savegprlr_19(ctx, base);
loc_88145010:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x88145010;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r10,8(r4)
	ctx.current_instruction = 0x88145018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r6,12(r4)
	ctx.current_instruction = 0x88145020;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r31,4(r4)
	ctx.current_instruction = 0x88145028;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r30,16(r4)
	ctx.current_instruction = 0x88145030;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lwz r29,20(r4)
	ctx.current_instruction = 0x88145038;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// mulld r11,r5,r10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r10.u64);
	// mulld r28,r9,r6
	ctx.r28.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r6.u64);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// mulld r10,r10,r9
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r9.u64);
	// mulld r9,r5,r6
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r6.u64);
	// sradi r27,r11,30
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r11.s64 >> 30;
	// mulld r5,r8,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r7.u64);
	// sradi r6,r28,30
	ctx.xer.ca = (ctx.r28.s64 < 0) & ((ctx.r28.u64 & 0x3FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r28.s64 >> 30;
	// sradi r28,r10,30
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r10.s64 >> 30;
	// mulld r11,r7,r7
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r7.u64);
	// sradi r26,r9,30
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x3FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r9.s64 >> 30;
	// sradi r10,r5,30
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0x3FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s64 >> 30;
	// sradi r9,r11,30
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s64 >> 30;
	// lis r5,16383
	ctx.r5.s64 = 1073676288;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r9,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r9.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.current_instruction = 0x88145098;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// mulld r25,r3,r5
	ctx.r25.s64 = static_cast<int64_t>(ctx.r3.u64 * ctx.r5.u64);
	// mulld r24,r31,r9
	ctx.r24.s64 = static_cast<int64_t>(ctx.r31.u64 * ctx.r9.u64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mulld r5,r31,r5
	ctx.r5.s64 = static_cast<int64_t>(ctx.r31.u64 * ctx.r5.u64);
	// mulld r3,r3,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * ctx.r9.u64);
	// sradi r31,r25,30
	ctx.xer.ca = (ctx.r25.s64 < 0) & ((ctx.r25.u64 & 0x3FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r25.s64 >> 30;
	// mulld r9,r11,r8
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r8.u64);
	// sradi r25,r24,30
	ctx.xer.ca = (ctx.r24.s64 < 0) & ((ctx.r24.u64 & 0x3FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r24.s64 >> 30;
	// mulld r24,r10,r7
	ctx.r24.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r7.u64);
	// sradi r5,r5,30
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0x3FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s64 >> 30;
	// mulld r11,r11,r7
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r7.u64);
	// sradi r3,r3,30
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s64 >> 30;
	// sradi r9,r9,30
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s64 >> 30;
	// mulld r8,r10,r8
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r8.u64);
	// sradi r7,r24,30
	ctx.xer.ca = (ctx.r24.s64 < 0) & ((ctx.r24.u64 & 0x3FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r24.s64 >> 30;
	// sradi r24,r11,30
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r11.s64 >> 30;
	// sradi r8,r8,30
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0x3FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s64 >> 30;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// extsw r7,r24
	ctx.r7.s64 = ctx.r24.s32;
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// extsw r8,r27
	ctx.r8.s64 = ctx.r27.s32;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsw r20,r30
	ctx.r20.s64 = ctx.r30.s32;
	// extsw r27,r7
	ctx.r27.s64 = ctx.r7.s32;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// mulld r30,r20,r27
	ctx.r30.s64 = static_cast<int64_t>(ctx.r20.u64 * ctx.r27.u64);
	// extsw r6,r31
	ctx.r6.s64 = ctx.r31.s32;
	// extsw r28,r28
	ctx.r28.s64 = ctx.r28.s32;
	// extsw r26,r26
	ctx.r26.s64 = ctx.r26.s32;
	// extsw r7,r25
	ctx.r7.s64 = ctx.r25.s32;
	// sradi r19,r30,30
	ctx.xer.ca = (ctx.r30.s64 < 0) & ((ctx.r30.u64 & 0x3FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r30.s64 >> 30;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r24,r26,r28
	ctx.r24.u64 = ctx.r28.u64 - ctx.r26.u64;
	// add r30,r6,r7
	ctx.r30.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r11,28(r4)
	ctx.current_instruction = 0x8814515C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// lwz r10,24(r4)
	ctx.current_instruction = 0x88145164;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// subf r25,r5,r3
	ctx.r25.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mulld r7,r9,r8
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r8.u64);
	// mulld r6,r9,r27
	ctx.r6.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r27.u64);
	// mulld r5,r20,r8
	ctx.r5.s64 = static_cast<int64_t>(ctx.r20.u64 * ctx.r8.u64);
	// sradi r4,r7,30
	ctx.xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0x3FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s64 >> 30;
	// sradi r3,r6,30
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s64 >> 30;
	// sradi r9,r5,30
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s64 >> 30;
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// extsw r8,r19
	ctx.r8.s64 = ctx.r19.s32;
	// subf r26,r11,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r27,r7,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r7.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// bl 0x88144f00
	ctx.lr = 0x881451C8;
	sub_88144F00(ctx, base);
loc_881451C8:
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r26,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r26.u64;
	// subf r7,r27,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r27.u64;
	// subf r11,r29,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r29.u64;
	// subf r10,r30,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r30.u64;
	// stwx r3,r9,r21
	ctx.current_instruction = 0x881451DC;
	REX_STORE_U32(ctx.r9.u32 + ctx.r21.u32, ctx.r3.u32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + ctx.r24.u64;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// bl 0x88144f00
	ctx.lr = 0x881451F4;
	sub_88144F00(ctx, base);
loc_881451F4:
	// subf r4,r23,r22
	ctx.r4.u64 = ctx.r22.u64 - ctx.r23.u64;
	// subf r11,r29,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r29.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r30,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r30.u64;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// subf r10,r24,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r24.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r3,r9,r21
	ctx.current_instruction = 0x88145210;
	REX_STORE_U32(ctx.r9.u32 + ctx.r21.u32, ctx.r3.u32);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + ctx.r27.u64;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// bl 0x88144f00
	ctx.lr = 0x88145224;
	sub_88144F00(ctx, base);
loc_88145224:
	// add r5,r23,r22
	ctx.r5.u64 = ctx.r23.u64 + ctx.r22.u64;
	// subf r4,r29,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r29.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r26,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r26.u64;
	// subf r11,r31,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r31.u64;
	// subf r10,r25,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r25.u64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stwx r3,r9,r21
	ctx.current_instruction = 0x88145240;
	REX_STORE_U32(ctx.r9.u32 + ctx.r21.u32, ctx.r3.u32);
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + ctx.r24.u64;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// bl 0x88144f00
	ctx.lr = 0x88145254;
	sub_88144F00(ctx, base);
loc_88145254:
	// rlwinm r5,r22,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r23,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r23.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r21
	ctx.current_instruction = 0x88145260;
	REX_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A458) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814A458;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814A458) {
			switch (rex_dispatch_address) {
				case 0x8814A460:
				case 0x8814A494:
				case 0x8814A4B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A458;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814A460: goto loc_8814A460;
		case 0x8814A494: goto loc_8814A494;
		case 0x8814A4B0: goto loc_8814A4B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814A460;
	__savegprlr_28(ctx, base);
loc_8814A460:
	// stwu r1,-1152(r1)
	ctx.current_instruction = 0x8814A460;
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
	// li r9,3
	ctx.r9.s64 = 3;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x88149ae8
	ctx.lr = 0x8814A494;
	sub_88149AE8(ctx, base);
loc_8814A494:
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
	// bl 0x88149e68
	ctx.lr = 0x8814A4B0;
	sub_88149E68(ctx, base);
loc_8814A4B0:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814B130) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814B130;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814B130) {
			switch (rex_dispatch_address) {
				case 0x8814B138:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814B130;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814B138: goto loc_8814B138;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x8814B138;
	__savegprlr_18(ctx, base);
loc_8814B138:
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r9,r1,-256
	ctx.r9.s64 = ctx.r1.s64 + -256;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// sth r11,-242(r1)
	ctx.current_instruction = 0x8814B148;
	REX_STORE_U16(ctx.r1.u32 + -242, ctx.r11.u16);
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// li r11,1
	ctx.r11.s64 = 1;
	// vspltish v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x2)));
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// lvsl v6,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// slw r10,r11,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r11,25792(r8)
	ctx.current_instruction = 0x8814B164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 25792);
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// vsplth v11,v11,7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0x100))));
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x8814b38c
	if (!ctx.cr6.eq) goto loc_8814B38C;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r29,r8,r4
	ctx.r29.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v59,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r7,r5
	ctx.r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lvx128 v55,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v63,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v60,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v57,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v62,v55,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v56,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v52,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v56,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v54,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v50,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v60,v52,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v2,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v29,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v54,v50,v2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v51,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v3,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v49,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v1,v10,v1,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v48,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v53,v51,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v2,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v2,v48,v49,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// add r9,r31,r6
	ctx.r9.u64 = ctx.r31.u64 + ctx.r6.u64;
	// vperm v23,v8,v30,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v1,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vmrglb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vmrglb v27,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vmrglb v26,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vmrglb v25,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v18,v8,v23
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrghb v0,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v24,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v22,v6,v29,v7
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v10,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v21,v5,v28,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v20,v9,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v19,v4,v27,v7
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v17,v3,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v16,v6,v22
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vperm v15,v0,v25,v7
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v14,v5,v21
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v9,v9,v20
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vslh v8,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v7,v4,v19
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v6,v24,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v4,v3,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vslh v5,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v3,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v2,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v0,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v31,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v30,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v29,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v28,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v27,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v26,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v47,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v25,v2,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v24,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v23,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v22,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v46,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsrah v21,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v20,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v19,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v45,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v18,v24,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v47,r0,r5
	ctx.current_instruction = 0x8814B328;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v17,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v44,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsrah v16,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v47,r5,r11
	ctx.current_instruction = 0x8814B338;
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v43,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// stvewx128 v46,r0,r7
	ctx.current_instruction = 0x8814B340;
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v15,v18,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v46,r7,r11
	ctx.current_instruction = 0x8814B348;
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v42,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// stvewx128 v45,r0,r8
	ctx.current_instruction = 0x8814B350;
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvewx128 v45,r8,r11
	ctx.current_instruction = 0x8814B358;
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r0,r4
	ctx.current_instruction = 0x8814B35C;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// stvewx128 v44,r4,r11
	ctx.current_instruction = 0x8814B364;
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r0,r31
	ctx.current_instruction = 0x8814B368;
	ea = (ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r31,r11
	ctx.current_instruction = 0x8814B36C;
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r9
	ctx.current_instruction = 0x8814B370;
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r9,r11
	ctx.current_instruction = 0x8814B374;
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r10
	ctx.current_instruction = 0x8814B378;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r10,r11
	ctx.current_instruction = 0x8814B37C;
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r0,r6
	ctx.current_instruction = 0x8814B380;
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r6,r11
	ctx.current_instruction = 0x8814B384;
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8814B38C:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r25,r4,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r4,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r6,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r6,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r6,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8814B3A8:
	// add r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r8,16(r3)
	ctx.current_instruction = 0x8814B3AC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// add r11,r25,r3
	ctx.r11.u64 = ctx.r25.u64 + ctx.r3.u64;
	// lvx128 v39,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r24,r3
	ctx.r10.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lvx128 v38,r25,r3
	ea = (ctx.r25.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r24,r3
	ea = (ctx.r24.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lbz r30,16(r7)
	ctx.current_instruction = 0x8814B3CC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 16);
	// addi r29,r7,16
	ctx.r29.s64 = ctx.r7.s64 + 16;
	// sth r8,-256(r1)
	ctx.current_instruction = 0x8814B3D4;
	REX_STORE_U16(ctx.r1.u32 + -256, ctx.r8.u16);
	// addi r28,r10,16
	ctx.r28.s64 = ctx.r10.s64 + 16;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v36,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v35,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v34,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r30,-192(r1)
	ctx.current_instruction = 0x8814B3F4;
	REX_STORE_U16(ctx.r1.u32 + -192, ctx.r30.u16);
	// lvx128 v33,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// lvx128 v63,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r8,16
	ctx.r29.s64 = ctx.r8.s64 + 16;
	// lvx128 v61,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r7,16
	ctx.r28.s64 = ctx.r7.s64 + 16;
	// lbz r9,16(r9)
	ctx.current_instruction = 0x8814B420;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 16);
	// lvx128 v60,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v39,v34,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r3,16(r11)
	ctx.current_instruction = 0x8814B430;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// lvx128 v58,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-256
	ctx.r11.s64 = ctx.r1.s64 + -256;
	// lvx128 v57,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r26,16(r10)
	ctx.current_instruction = 0x8814B440;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// lvx128 v56,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r31,16(r31)
	ctx.current_instruction = 0x8814B448;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + 16);
	// lbz r8,16(r8)
	ctx.current_instruction = 0x8814B44C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 16);
	// addi r28,r1,-192
	ctx.r28.s64 = ctx.r1.s64 + -192;
	// lbz r29,16(r7)
	ctx.current_instruction = 0x8814B454;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r7.u32 + 16);
	// vperm128 v31,v36,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v30,v37,v32,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r30,r22,r5
	ctx.r30.u64 = ctx.r22.u64 + ctx.r5.u64;
	// vperm128 v29,v63,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r18,r1,-208
	ctx.r18.s64 = ctx.r1.s64 + -208;
	// vperm128 v28,v38,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r10,r30,r6
	ctx.r10.u64 = ctx.r30.u64 + ctx.r6.u64;
	// vperm128 v27,v35,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r27,r1,-160
	ctx.r27.s64 = ctx.r1.s64 + -160;
	// vperm128 v26,v62,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r20,r1,-240
	ctx.r20.s64 = ctx.r1.s64 + -240;
	// vperm128 v25,v61,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r19,r1,-224
	ctx.r19.s64 = ctx.r1.s64 + -224;
	// vmrglb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v24,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// sth r9,-208(r1)
	ctx.current_instruction = 0x8814B498;
	REX_STORE_U16(ctx.r1.u32 + -208, ctx.r9.u16);
	// vmrglb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v8,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r11,r23,r5
	ctx.r11.u64 = ctx.r23.u64 + ctx.r5.u64;
	// vmrglb v5,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// sth r26,-160(r1)
	ctx.current_instruction = 0x8814B4B0;
	REX_STORE_U16(ctx.r1.u32 + -160, ctx.r26.u16);
	// vmrglb v4,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// sth r31,-240(r1)
	ctx.current_instruction = 0x8814B4B8;
	REX_STORE_U16(ctx.r1.u32 + -240, ctx.r31.u16);
	// vmrglb v3,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// sth r3,-224(r1)
	ctx.current_instruction = 0x8814B4C0;
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r3.u16);
	// sth r8,-176(r1)
	ctx.current_instruction = 0x8814B4C4;
	REX_STORE_U16(ctx.r1.u32 + -176, ctx.r8.u16);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// sth r29,-144(r1)
	ctx.current_instruction = 0x8814B4CC;
	REX_STORE_U16(ctx.r1.u32 + -144, ctx.r29.u16);
	// vmrglb v2,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm v22,v24,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v53,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v23,v10,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v51,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v21,v9,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v52,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v20,v31,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v50,r0,r18
	ea = (ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v24,v22
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vperm128 v18,v8,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v19,v10,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vperm128 v14,v4,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v15,v9,v21
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vperm128 v16,v5,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v10,v31,v20
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vperm v31,v29,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v9,v30,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v22,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v23,v28,v4,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v24,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v17,v27,v3,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v15,v8,v18
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vperm128 v20,v3,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v19,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// vaddshs v8,v4,v14
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// vaddshs v10,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vmrghb v26,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v4,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vmrghb v25,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v5,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// vaddshs v31,v28,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// lvx128 v49,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v24,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v48,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vperm128 v28,v2,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v24,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vperm128 v23,v1,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v22,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v21,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v15,v3,v20
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vslh v14,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v9,v27,v17
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vslh v10,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v8,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v3,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v31,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v29,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v47,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v24,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v22,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v46,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v21,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
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
	// vaddshs v30,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v27,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v19,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v47,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v18,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v46,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v16,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v15,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v45,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsrah v9,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v17,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v16,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v44,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v4,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vpkshus128 v43,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vperm v3,v26,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v2,v1,v23
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vperm v1,v25,v1,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v31,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v42,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v45,r23,r5
	ea = (ctx.r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v44,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r21,r5
	ctx.r5.u64 = ctx.r21.u64 + ctx.r5.u64;
	// vaddshs v30,v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvx128 v43,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v28,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v27,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v42,r30,r6
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v23,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v22,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v21,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v20,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v41,v19,v23
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vpkshus128 v40,v18,v20
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// stvx128 v41,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x8814b3a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8814B3A8;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881769B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881769B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881769B0) {
			switch (rex_dispatch_address) {
				case 0x881769B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881769B0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881769B8: goto loc_881769B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881769B8;
	__savegprlr_27(ctx, base);
loc_881769B8:
	// srawi. r10,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r27,r11,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r11.u64;
	// ble 0x88176aa4
	if (!ctx.cr0.gt) goto loc_88176AA4;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r8,r5,32
	ctx.r8.s64 = ctx.r5.s64 + 32;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_881769E0:
	// addi r7,r9,-16
	ctx.r7.s64 = ctx.r9.s64 + -16;
	// lvrx128 v63,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r10,-16
	ctx.r6.s64 = ctx.r10.s64 + -16;
	// lvlx128 v62,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r28,r3
	temp.u32 = ctx.r28.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r9,16
	ctx.r31.s64 = ctx.r9.s64 + 16;
	// lvlx128 v60,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// vor128 v0,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v59,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v57,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r29,r8,-16
	ctx.r29.s64 = ctx.r8.s64 + -16;
	// lvlx128 v56,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v58,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvrx128 v55,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvrx128 v53,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vaddubs v10,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v52,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v59,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvlx128 v50,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddubs v7,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// lvrx128 v49,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// stvlx v10,0,r5
	ctx.current_instruction = 0x88176A64;
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// vaddubs v4,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// stvrx v10,r5,r11
	ctx.current_instruction = 0x88176A6C;
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// stvlx v7,0,r29
	ctx.current_instruction = 0x88176A70;
	ea = ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvrx v7,r29,r11
	ctx.current_instruction = 0x88176A78;
	ea = ctx.r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v7.u8[i]);
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// vaddubs v3,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stvlx v4,0,r8
	ctx.current_instruction = 0x88176A88;
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// stvrx v4,r8,r11
	ctx.current_instruction = 0x88176A90;
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v4.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvlx v3,0,r7
	ctx.current_instruction = 0x88176A98;
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvrx v3,r7,r11
	ctx.current_instruction = 0x88176A9C;
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v3.u8[i]);
	// bdnz 0x881769e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881769E0;
loc_88176AA4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x88176ae0
	if (!ctx.cr6.gt) goto loc_88176AE0;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// subf r8,r4,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_88176AB8:
	// lbzx r10,r9,r4
	ctx.current_instruction = 0x88176AB8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbz r11,0(r4)
	ctx.current_instruction = 0x88176ABC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x88176ad0
	if (!ctx.cr6.gt) goto loc_88176AD0;
	// li r11,255
	ctx.r11.s64 = 255;
loc_88176AD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r8,r4
	ctx.current_instruction = 0x88176AD4;
	REX_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x88176ab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176AB8;
loc_88176AE0:
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817A3A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8817A3A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817A3A0;
	ctx.current_instruction = 0x8817A3A0;
	PPCRegister temp{};
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x8817A3A4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8817a6c8
	if (!ctx.cr6.gt) goto loc_8817A6C8;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8817a6c8
	if (!ctx.cr6.gt) goto loc_8817A6C8;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8817A3B8;
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
	ctx.current_instruction = 0x8817A3CC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.current_instruction = 0x8817A3D0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f0,12088(r10)
	ctx.current_instruction = 0x8817A3D4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// fadd f11,f1,f0
	ctx.f11.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfs f13,6728(r9)
	ctx.current_instruction = 0x8817A3DC;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f13,7000(r7)
	ctx.current_instruction = 0x8817A3E4;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 7000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-16(r1)
	ctx.current_instruction = 0x8817A3F0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r6,-12(r1)
	ctx.current_instruction = 0x8817A3F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-16(r1)
	ctx.current_instruction = 0x8817A3FC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f7,-16(r1)
	ctx.current_instruction = 0x8817A400;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// fsubs f13,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// fsubs f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fadds f10,f3,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8817a430
	if (!ctx.cr6.gt) goto loc_8817A430;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8817A430:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	ctx.current_instruction = 0x8817A438;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r5,-12(r1)
	ctx.current_instruction = 0x8817A43C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f12,6708(r10)
	ctx.current_instruction = 0x8817A448;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6708);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x8817a4a8
	if (ctx.cr6.lt) goto loc_8817A4A8;
	// fadds f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f9,f13,f0
	ctx.f9.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	ctx.current_instruction = 0x8817A464;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r9,-12(r1)
	ctx.current_instruction = 0x8817A468;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A46C:
	// lwz r7,20(r3)
	ctx.current_instruction = 0x8817A46C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	ctx.current_instruction = 0x8817A47C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x8817A480;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r9,4(r4)
	ctx.current_instruction = 0x8817A488;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r7,20(r3)
	ctx.current_instruction = 0x8817A490;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	ctx.current_instruction = 0x8817A498;
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r4,20(r3)
	ctx.current_instruction = 0x8817A49C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r4
	ctx.current_instruction = 0x8817A4A0;
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// blt cr6,0x8817a46c
	if (ctx.cr6.lt) goto loc_8817A46C;
loc_8817A4A8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817a4e4
	if (!ctx.cr6.lt) goto loc_8817A4E4;
	// fadds f13,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f9,f13,f0
	ctx.f9.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	ctx.current_instruction = 0x8817A4CC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r9,-12(r1)
	ctx.current_instruction = 0x8817A4D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A4D4:
	// lwz r8,20(r3)
	ctx.current_instruction = 0x8817A4D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	ctx.current_instruction = 0x8817A4D8;
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817a4d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817A4D4;
loc_8817A4E4:
	// lwz r10,4(r3)
	ctx.current_instruction = 0x8817A4E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	ctx.current_instruction = 0x8817A4EC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x8817A4F0;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x8817a508
	if (ctx.cr6.gt) goto loc_8817A508;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_8817A508:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	ctx.current_instruction = 0x8817A50C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r5,-12(r1)
	ctx.current_instruction = 0x8817A510;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817a5b4
	if (!ctx.cr6.lt) goto loc_8817A5B4;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8817a57c
	if (ctx.cr6.lt) goto loc_8817A57C;
	// fadd f13,f10,f0
	ctx.f13.f64 = ctx.f10.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-16(r1)
	ctx.current_instruction = 0x8817A538;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.current_instruction = 0x8817A53C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A540:
	// lwz r7,20(r3)
	ctx.current_instruction = 0x8817A540;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	ctx.current_instruction = 0x8817A550;
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x8817A554;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r4)
	ctx.current_instruction = 0x8817A560;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.current_instruction = 0x8817A564;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	ctx.current_instruction = 0x8817A56C;
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r4,20(r3)
	ctx.current_instruction = 0x8817A570;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r4
	ctx.current_instruction = 0x8817A574;
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// blt cr6,0x8817a540
	if (ctx.cr6.lt) goto loc_8817A540;
loc_8817A57C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8817a5b4
	if (!ctx.cr6.lt) goto loc_8817A5B4;
	// fadd f13,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-16(r1)
	ctx.current_instruction = 0x8817A59C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.current_instruction = 0x8817A5A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A5A4:
	// lwz r8,20(r3)
	ctx.current_instruction = 0x8817A5A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	ctx.current_instruction = 0x8817A5A8;
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8817a5a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817A5A4;
loc_8817A5B4:
	// lwz r10,4(r3)
	ctx.current_instruction = 0x8817A5B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8817a5f4
	if (!ctx.cr6.lt) goto loc_8817A5F4;
	// fadds f13,f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	ctx.current_instruction = 0x8817A5D0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r8,-12(r1)
	ctx.current_instruction = 0x8817A5D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A5D8:
	// lwz r10,20(r3)
	ctx.current_instruction = 0x8817A5D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r9,r10
	ctx.current_instruction = 0x8817A5E0;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x8817A5E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8817a5d8
	if (ctx.cr6.lt) goto loc_8817A5D8;
loc_8817A5F4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a630
	if (!ctx.cr6.gt) goto loc_8817A630;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	ctx.current_instruction = 0x8817A60C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r8,-12(r1)
	ctx.current_instruction = 0x8817A610;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A614:
	// lwz r10,24(r3)
	ctx.current_instruction = 0x8817A614;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r11,r10
	ctx.current_instruction = 0x8817A61C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x8817A624;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8817a614
	if (ctx.cr6.lt) goto loc_8817A614;
loc_8817A630:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8817a758
	if (!ctx.cr6.gt) goto loc_8817A758;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,12180(r10)
	ctx.current_instruction = 0x8817A644;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12180);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
loc_8817A64C:
	// lwz r10,20(r3)
	ctx.current_instruction = 0x8817A64C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,28(r3)
	ctx.current_instruction = 0x8817A654;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r11,r10
	ctx.current_instruction = 0x8817A658;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	ctx.current_instruction = 0x8817A660;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.current_instruction = 0x8817A664;
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
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
	ctx.current_instruction = 0x8817A67C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.f7.u32);
	// lwz r5,24(r3)
	ctx.current_instruction = 0x8817A680;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,32(r3)
	ctx.current_instruction = 0x8817A684;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwzx r10,r11,r5
	ctx.current_instruction = 0x8817A688;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-8(r1)
	ctx.current_instruction = 0x8817A690;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f6,-8(r1)
	ctx.current_instruction = 0x8817A694;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
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
	ctx.current_instruction = 0x8817A6AC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.current_instruction = 0x8817A6B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8817a64c
	if (ctx.cr6.lt) goto loc_8817A64C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8817A6C8:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8817A6C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8817a758
	if (!ctx.cr6.gt) goto loc_8817A758;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,6708(r9)
	ctx.current_instruction = 0x8817A6E4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfd f0,12088(r8)
	ctx.current_instruction = 0x8817A6EC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadd f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fadd f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f7,f10
	ctx.f7.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,-8(r1)
	ctx.current_instruction = 0x8817A704;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f7.u64);
	// lwz r9,-4(r1)
	ctx.current_instruction = 0x8817A708;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-8(r1)
	ctx.current_instruction = 0x8817A710;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-16(r1)
	ctx.current_instruction = 0x8817A718;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r7,-4(r1)
	ctx.current_instruction = 0x8817A71C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// lwz r8,-12(r1)
	ctx.current_instruction = 0x8817A720;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
loc_8817A724:
	// lwz r6,20(r3)
	ctx.current_instruction = 0x8817A724;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r11,r6
	ctx.current_instruction = 0x8817A72C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.current_instruction = 0x8817A730;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r11,r5
	ctx.current_instruction = 0x8817A734;
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.current_instruction = 0x8817A738;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r8,r11,r4
	ctx.current_instruction = 0x8817A73C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r6,32(r3)
	ctx.current_instruction = 0x8817A740;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r11,r6
	ctx.current_instruction = 0x8817A744;
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.current_instruction = 0x8817A74C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8817a724
	if (ctx.cr6.lt) goto loc_8817A724;
loc_8817A758:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88183190) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88183190;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88183190) {
			switch (rex_dispatch_address) {
				case 0x88183198:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88183190;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88183198: goto loc_88183198;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88183198;
	__savegprlr_19(ctx, base);
loc_88183198:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881831B4:
	// lwz r7,4(r10)
	ctx.current_instruction = 0x881831B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,12(r10)
	ctx.current_instruction = 0x881831B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,8(r10)
	ctx.current_instruction = 0x881831BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzu r9,16(r10)
	ctx.current_instruction = 0x881831C0;
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r30,r6,r7
	ctx.r30.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mulli r4,r3,1892
	ctx.r4.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1892));
	// mulli r5,r9,784
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(784));
	// subf r6,r6,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r6.u64;
	// mulli r3,r3,784
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(784));
	// mulli r29,r9,1892
	ctx.r29.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1892));
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mulli r7,r30,1448
	ctx.r7.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1448));
	// subf r5,r29,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r29.u64;
	// mulli r6,r6,1448
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1448));
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r5,r4,64
	ctx.r5.s64 = ctx.r4.s64 + 64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r3,r6,64
	ctx.r3.s64 = ctx.r6.s64 + 64;
	// srawi r7,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 7;
	// addi r6,r9,64
	ctx.r6.s64 = ctx.r9.s64 + 64;
	// srawi r5,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 7;
	// stw r7,0(r11)
	ctx.current_instruction = 0x88183214;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// srawi r4,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 7;
	// srawi r3,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 7;
	// stw r5,4(r11)
	ctx.current_instruction = 0x88183220;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,8(r11)
	ctx.current_instruction = 0x88183224;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r3,12(r11)
	ctx.current_instruction = 0x88183228;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x881831b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881831B4;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r28,r11,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r27,r11,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r26,r11,r5
	ctx.r26.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r25,r11,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r24,r11,r8
	ctx.r24.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_88183274:
	// lwz r8,0(r11)
	ctx.current_instruction = 0x88183274;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r7,r24,r11
	ctx.current_instruction = 0x88183278;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// mulli r4,r8,2276
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(2276));
	// lwzx r6,r26,r11
	ctx.current_instruction = 0x88183280;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwzx r5,r27,r11
	ctx.current_instruction = 0x88183284;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwzx r29,r28,r11
	ctx.current_instruction = 0x88183288;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwzx r30,r25,r11
	ctx.current_instruction = 0x8818328C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwzx r23,r10,r11
	ctx.current_instruction = 0x88183290;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r22,r9,r11
	ctx.current_instruction = 0x88183294;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r8,r8,565
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r31,r7,3406
	ctx.r31.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r3,2408
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(2408));
	// subf r3,r31,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r31.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// mulli r7,r6,799
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(799));
	// mulli r6,r5,4017
	ctx.r6.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(4017));
	// add r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r21,r6,r8
	ctx.r21.u64 = ctx.r8.u64 - ctx.r6.u64;
	// srawi r7,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 3;
	// srawi r6,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 3;
	// mulli r8,r31,1108
	ctx.r8.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(1108));
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// srawi r4,r21,3
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r21.s32 >> 3;
	// addi r21,r23,32
	ctx.r21.s64 = ctx.r23.s64 + 32;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r30,r30,3784
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(3784));
	// subf r3,r4,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r31,r5,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r5.u64;
	// mulli r23,r29,1568
	ctx.r23.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1568));
	// subf r20,r30,r8
	ctx.r20.u64 = ctx.r8.u64 - ctx.r30.u64;
	// add r23,r23,r8
	ctx.r23.u64 = ctx.r23.u64 + ctx.r8.u64;
	// add r19,r3,r31
	ctx.r19.u64 = ctx.r3.u64 + ctx.r31.u64;
	// rlwinm r29,r22,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r30,r21,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFFFF00;
	// subf r21,r3,r31
	ctx.r21.u64 = ctx.r31.u64 - ctx.r3.u64;
	// srawi r3,r20,3
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r20.s32 >> 3;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// srawi r31,r23,3
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r23.s32 >> 3;
	// mulli r22,r19,181
	ctx.r22.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(181));
	// mulli r23,r21,181
	ctx.r23.s64 = static_cast<int64_t>(ctx.r21.u64 * static_cast<uint64_t>(181));
	// subf r30,r29,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r29.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r29,r22,128
	ctx.r29.s64 = ctx.r22.s64 + 128;
	// subf r31,r31,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r31.u64;
	// addi r23,r23,128
	ctx.r23.s64 = ctx.r23.s64 + 128;
	// add r8,r3,r30
	ctx.r8.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// srawi r4,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r29.s32 >> 8;
	// subf r30,r3,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r3.u64;
	// srawi r3,r23,8
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r23.s32 >> 8;
	// add r29,r7,r5
	ctx.r29.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r23,r8,r4
	ctx.r23.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r22,r30,r3
	ctx.r22.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r21,r31,r6
	ctx.r21.u64 = ctx.r31.u64 + ctx.r6.u64;
	// srawi r29,r29,14
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 14;
	// srawi r23,r23,14
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3FFF) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 14;
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// stwx r29,r10,r11
	ctx.current_instruction = 0x88183370;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// subf r3,r3,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r3.u64;
	// stw r23,0(r11)
	ctx.current_instruction = 0x88183378;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// srawi r31,r22,14
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3FFF) != 0);
	ctx.r31.s64 = ctx.r22.s32 >> 14;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// srawi r30,r21,14
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3FFF) != 0);
	ctx.r30.s64 = ctx.r21.s32 >> 14;
	// stwx r31,r28,r11
	ctx.current_instruction = 0x88183388;
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r31.u32);
	// srawi r6,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 14;
	// srawi r4,r3,14
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 14;
	// stwx r30,r27,r11
	ctx.current_instruction = 0x88183394;
	REX_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r30.u32);
	// srawi r3,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 14;
	// stwx r6,r9,r11
	ctx.current_instruction = 0x8818339C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// subf r8,r7,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stwx r4,r26,r11
	ctx.current_instruction = 0x881833A4;
	REX_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r4.u32);
	// stwx r3,r25,r11
	ctx.current_instruction = 0x881833A8;
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r3.u32);
	// srawi r7,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 14;
	// stwx r7,r24,r11
	ctx.current_instruction = 0x881833B0;
	REX_STORE_U32(ctx.r24.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88183274
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88183274;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88187C18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88187C18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88187C18) {
			switch (rex_dispatch_address) {
				case 0x88187C20:
				case 0x88187E48:
				case 0x88187EF0:
				case 0x88187F14:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88187C18;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88187C20: goto loc_88187C20;
		case 0x88187E48: goto loc_88187E48;
		case 0x88187EF0: goto loc_88187EF0;
		case 0x88187F14: goto loc_88187F14;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88187C20;
	__savegprlr_29(ctx, base);
loc_88187C20:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x88187C20;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88187f34
	if (ctx.cr6.eq) goto loc_88187F34;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88187f34
	if (ctx.cr6.eq) goto loc_88187F34;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88187f34
	if (ctx.cr6.eq) goto loc_88187F34;
	// lwz r11,296(r3)
	ctx.current_instruction = 0x88187C48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88187c64
	if (ctx.cr6.eq) goto loc_88187C64;
	// lwz r11,32(r3)
	ctx.current_instruction = 0x88187C54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// b 0x88187c68
	goto loc_88187C68;
loc_88187C64:
	// lwz r10,32(r3)
	ctx.current_instruction = 0x88187C64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
loc_88187C68:
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88187C68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// ori r30,r7,22857
	ctx.r30.u64 = ctx.r7.u64 | 22857;
	// lwz r7,16(r11)
	ctx.current_instruction = 0x88187C74;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88187d14
	if (ctx.cr6.eq) goto loc_88187D14;
	// lis r30,12338
	ctx.r30.s64 = 808583168;
	// ori r30,r30,13385
	ctx.r30.u64 = ctx.r30.u64 | 13385;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88187d14
	if (ctx.cr6.eq) goto loc_88187D14;
	// lis r30,12593
	ctx.r30.s64 = 825294848;
	// ori r30,r30,13392
	ctx.r30.u64 = ctx.r30.u64 | 13392;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88187d14
	if (ctx.cr6.eq) goto loc_88187D14;
	// lis r30,12849
	ctx.r30.s64 = 842072064;
	// ori r30,r30,22105
	ctx.r30.u64 = ctx.r30.u64 | 22105;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88187d14
	if (ctx.cr6.eq) goto loc_88187D14;
	// lhz r7,14(r11)
	ctx.current_instruction = 0x88187CB0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r30,4(r11)
	ctx.current_instruction = 0x88187CB4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,8(r11)
	ctx.current_instruction = 0x88187CB8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r7,r30
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r7,r11,r29
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r4)
	ctx.current_instruction = 0x88187CDC;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r7,0(r3)
	ctx.current_instruction = 0x88187CE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r3)
	ctx.current_instruction = 0x88187CE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lhz r7,14(r7)
	ctx.current_instruction = 0x88187CE8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r9)
	ctx.current_instruction = 0x88187D0C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x88187d50
	goto loc_88187D50;
loc_88187D14:
	// lwz r7,8(r11)
	ctx.current_instruction = 0x88187D14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88187D18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,0(r4)
	ctx.current_instruction = 0x88187D30;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r11,28(r3)
	ctx.current_instruction = 0x88187D34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,0(r9)
	ctx.current_instruction = 0x88187D4C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
loc_88187D50:
	// lwz r11,0(r9)
	ctx.current_instruction = 0x88187D50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88187f28
	if (ctx.cr6.lt) goto loc_88187F28;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x88187D5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88187f28
	if (ctx.cr6.lt) goto loc_88187F28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88187f34
	if (ctx.cr6.eq) goto loc_88187F34;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88187f34
	if (ctx.cr6.eq) goto loc_88187F34;
	// lwz r11,292(r3)
	ctx.current_instruction = 0x88187D78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88187efc
	if (ctx.cr6.eq) goto loc_88187EFC;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88187D84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// lis r9,12850
	ctx.r9.s64 = 842137600;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// ori r9,r9,13392
	ctx.r9.u64 = ctx.r9.u64 | 13392;
	// lwz r8,16(r11)
	ctx.current_instruction = 0x88187D98;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f4,1488(r4)
	ctx.current_instruction = 0x88187D9C;
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r4.u32 + 1488);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88187e54
	if (!ctx.cr6.eq) goto loc_88187E54;
	// lwz r8,8(r11)
	ctx.current_instruction = 0x88187DAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.current_instruction = 0x88187DB0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,28(r3)
	ctx.current_instruction = 0x88187DB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// extsw r30,r8
	ctx.r30.s64 = ctx.r8.s32;
	// std r7,112(r1)
	ctx.current_instruction = 0x88187DBC;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// extsw r29,r5
	ctx.r29.s64 = ctx.r5.s32;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r30,120(r1)
	ctx.current_instruction = 0x88187DC8;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r30.u64);
	// std r29,128(r1)
	ctx.current_instruction = 0x88187DCC;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// std r7,136(r1)
	ctx.current_instruction = 0x88187DD4;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// stw r9,108(r1)
	ctx.current_instruction = 0x88187DD8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r5,r8
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lfd f0,112(r1)
	ctx.current_instruction = 0x88187DE4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f13,120(r1)
	ctx.current_instruction = 0x88187DE8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f11,128(r1)
	ctx.current_instruction = 0x88187DF0;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f9,136(r1)
	ctx.current_instruction = 0x88187DFC;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r9,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// fdiv f3,f10,f12
	ctx.f3.f64 = ctx.f10.f64 / ctx.f12.f64;
	// add r6,r5,r31
	ctx.r6.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fdiv f1,f8,f7
	ctx.f1.f64 = ctx.f8.f64 / ctx.f7.f64;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// bl 0x881d5f58
	ctx.lr = 0x88187E48;
	sub_881D5F58(ctx, base);
loc_88187E48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88187E54:
	// lwz r5,8(r11)
	ctx.current_instruction = 0x88187E54;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,28(r3)
	ctx.current_instruction = 0x88187E58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88187E60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r29,r5
	ctx.r29.s64 = ctx.r5.s32;
	// std r7,136(r1)
	ctx.current_instruction = 0x88187E68;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// extsw r30,r9
	ctx.r30.s64 = ctx.r9.s32;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r29,120(r1)
	ctx.current_instruction = 0x88187E74;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r29.u64);
	// std r30,128(r1)
	ctx.current_instruction = 0x88187E78;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// std r7,112(r1)
	ctx.current_instruction = 0x88187E80;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// stw r8,108(r1)
	ctx.current_instruction = 0x88187E84;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lfd f0,136(r1)
	ctx.current_instruction = 0x88187E90;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f11,120(r1)
	ctx.current_instruction = 0x88187E94;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f13,128(r1)
	ctx.current_instruction = 0x88187E9C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfd f9,112(r1)
	ctx.current_instruction = 0x88187EA8;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r9,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// fdiv f3,f8,f12
	ctx.f3.f64 = ctx.f8.f64 / ctx.f12.f64;
	// add r6,r5,r31
	ctx.r6.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fdiv f1,f7,f10
	ctx.f1.f64 = ctx.f7.f64 / ctx.f10.f64;
	// bl 0x881d5f58
	ctx.lr = 0x88187EF0;
	sub_881D5F58(ctx, base);
loc_88187EF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88187EFC:
	// lwz r7,28(r3)
	ctx.current_instruction = 0x88187EFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r4,0(r3)
	ctx.current_instruction = 0x88187F04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x881d1700
	ctx.lr = 0x88187F14;
	sub_881D1700(ctx, base);
loc_88187F14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88187f34
	if (ctx.cr6.eq) goto loc_88187F34;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88187F28:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	ctx.current_instruction = 0x88187F2C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r9)
	ctx.current_instruction = 0x88187F30;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_88187F34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881937B0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881937B0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881937B0;
	ctx.current_instruction = 0x881937B0;
	uint32_t ea{};
	// vspltish v15,15
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_set1_epi16(short(0xF)));
	// addi r9,r3,128
	ctx.r9.s64 = ctx.r3.s64 + 128;
	// li r0,0
	ctx.r0.s64 = 0;
	// add r12,r6,r6
	ctx.r12.u64 = ctx.r6.u64 + ctx.r6.u64;
	// addi r10,r3,256
	ctx.r10.s64 = ctx.r3.s64 + 256;
	// vslb v8,v15,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// add r8,r12,r12
	ctx.r8.u64 = ctx.r12.u64 + ctx.r12.u64;
	// addi r11,r3,384
	ctx.r11.s64 = ctx.r3.s64 + 384;
	// lvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r12,r8
	ctx.r6.u64 = ctx.r12.u64 + ctx.r8.u64;
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v15,r9,r12
	ea = (ctx.r9.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v20,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v14,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v21,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v15,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v5,v21,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v16,r10,r12
	ea = (ctx.r10.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v11,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v22,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v16,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v23,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v17,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v24,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v20,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v25,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v6,v24,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v7,v25,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v12,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v5,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v13,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v4,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v26,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r7,r7
	ctx.r8.u64 = ctx.r7.u64 + ctx.r7.u64;
	// vpkshus v21,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v6,v26,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v7,v27,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v10,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v22,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvx v12,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v23,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx v20,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r12,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r12.u32 | (ctx.r12.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx v21,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v23,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r12,r8
	ctx.r6.u64 = ctx.r12.u64 + ctx.r8.u64;
	// lvx128 v10,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v12,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v13,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r12,r6
	ctx.r8.u64 = ctx.r12.u64 + ctx.r6.u64;
	// lvx128 v14,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v17,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r12,r8
	ctx.r6.u64 = ctx.r12.u64 + ctx.r8.u64;
	// lvx128 v20,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v14,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v15,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// vaddshs v1,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// vaddshs v5,v21,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v11,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v4,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v2,v16,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v3,v17,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v12,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v6,v24,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v10,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v25,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v20,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v5,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v13,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v4,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v21,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v6,v26,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v7,v27,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v12,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vpkshus v22,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx v11,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v23,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvx v20,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v21,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v23,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8819C3D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8819C3D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8819C3D8;
	ctx.current_instruction = 0x8819C3D8;
	uint32_t ea{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x8819C3D8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x8819C3DC;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8819c430
	if (ctx.cr6.eq) goto loc_8819C430;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8819c430
	if (ctx.cr6.eq) goto loc_8819C430;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8819c430
	if (ctx.cr6.eq) goto loc_8819C430;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x8819c430
	if (ctx.cr6.eq) goto loc_8819C430;
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8819C414:
	// lhzx r10,r9,r11
	ctx.current_instruction = 0x8819C414;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sth r10,0(r11)
	ctx.current_instruction = 0x8819C418;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8819c414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819C414;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8819C424;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8819C428;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8819C430:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lbz r5,-20(r7)
	ctx.current_instruction = 0x8819C434;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// lwz r4,6608(r3)
	ctx.current_instruction = 0x8819C438;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6608);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r10,r11,26488
	ctx.r10.s64 = ctx.r11.s64 + 26488;
	// lbz r11,4(r7)
	ctx.current_instruction = 0x8819C444;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rotlwi r30,r5,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lhz r3,0(r9)
	ctx.current_instruction = 0x8819C44C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// rotlwi r31,r11,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r31,16(r11)
	ctx.current_instruction = 0x8819C474;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lwz r30,16(r5)
	ctx.current_instruction = 0x8819C47C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// subf r5,r6,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r6.u64;
	// rlwinm r30,r30,2,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lwzx r3,r30,r10
	ctx.current_instruction = 0x8819C48C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mullw r3,r3,r31
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 18;
	// sth r4,0(r6)
	ctx.current_instruction = 0x8819C4A0;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r4.u16);
loc_8819C4A4:
	// lbz r4,4(r7)
	ctx.current_instruction = 0x8819C4A4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lhz r3,2(r9)
	ctx.current_instruction = 0x8819C4A8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// lbz r31,-20(r7)
	ctx.current_instruction = 0x8819C4B0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lwzx r4,r4,r10
	ctx.current_instruction = 0x8819C4B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// mullw r4,r4,r31
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// mullw r3,r4,r3
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// sth r3,-2(r11)
	ctx.current_instruction = 0x8819C4CC;
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r3.u16);
	// lhzx r3,r11,r5
	ctx.current_instruction = 0x8819C4D0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// lbz r4,-20(r7)
	ctx.current_instruction = 0x8819C4D4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// lbz r31,4(r7)
	ctx.current_instruction = 0x8819C4D8;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rlwinm r31,r31,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lwzx r31,r31,r10
	ctx.current_instruction = 0x8819C4E4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 18;
	// sth r4,0(r11)
	ctx.current_instruction = 0x8819C4F8;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// lhz r4,6(r9)
	ctx.current_instruction = 0x8819C4FC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// lbz r3,-20(r7)
	ctx.current_instruction = 0x8819C500;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// lbz r31,4(r7)
	ctx.current_instruction = 0x8819C504;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rlwinm r31,r31,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// lwzx r31,r31,r10
	ctx.current_instruction = 0x8819C50C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// sth r3,2(r11)
	ctx.current_instruction = 0x8819C524;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lhz r3,8(r9)
	ctx.current_instruction = 0x8819C528;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// lbz r4,-20(r7)
	ctx.current_instruction = 0x8819C52C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// lbz r31,4(r7)
	ctx.current_instruction = 0x8819C530;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rlwinm r31,r31,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// lwzx r31,r31,r10
	ctx.current_instruction = 0x8819C538;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mullw r4,r31,r4
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r4,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 18;
	// sth r4,4(r11)
	ctx.current_instruction = 0x8819C550;
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r4.u16);
	// lbz r3,-20(r7)
	ctx.current_instruction = 0x8819C554;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + -20);
	// lhzu r4,10(r9)
	ctx.current_instruction = 0x8819C558;
	ea = 10 + ctx.r9.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// lbz r31,4(r7)
	ctx.current_instruction = 0x8819C55C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rlwinm r31,r31,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// lwzx r31,r31,r10
	ctx.current_instruction = 0x8819C564;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// sth r4,6(r11)
	ctx.current_instruction = 0x8819C580;
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// bdnz 0x8819c4a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819C4A4;
	// lhz r11,0(r6)
	ctx.current_instruction = 0x8819C58C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// sth r11,16(r6)
	ctx.current_instruction = 0x8819C590;
	REX_STORE_U16(ctx.r6.u32 + 16, ctx.r11.u16);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8819C594;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8819C598;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881A53B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A53B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A53B8) {
			switch (rex_dispatch_address) {
				case 0x881A53C0:
				case 0x881A542C:
				case 0x881A5494:
				case 0x881A54A4:
				case 0x881A54DC:
				case 0x881A54F4:
				case 0x881A5528:
				case 0x881A5538:
				case 0x881A5548:
				case 0x881A5558:
				case 0x881A5568:
				case 0x881A5578:
				case 0x881A5584:
				case 0x881A5594:
				case 0x881A55B8:
				case 0x881A55C4:
				case 0x881A55D0:
				case 0x881A55E0:
				case 0x881A55EC:
				case 0x881A5620:
				case 0x881A5654:
				case 0x881A5664:
				case 0x881A5678:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A53B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881A53C0: goto loc_881A53C0;
		case 0x881A542C: goto loc_881A542C;
		case 0x881A5494: goto loc_881A5494;
		case 0x881A54A4: goto loc_881A54A4;
		case 0x881A54DC: goto loc_881A54DC;
		case 0x881A54F4: goto loc_881A54F4;
		case 0x881A5528: goto loc_881A5528;
		case 0x881A5538: goto loc_881A5538;
		case 0x881A5548: goto loc_881A5548;
		case 0x881A5558: goto loc_881A5558;
		case 0x881A5568: goto loc_881A5568;
		case 0x881A5578: goto loc_881A5578;
		case 0x881A5584: goto loc_881A5584;
		case 0x881A5594: goto loc_881A5594;
		case 0x881A55B8: goto loc_881A55B8;
		case 0x881A55C4: goto loc_881A55C4;
		case 0x881A55D0: goto loc_881A55D0;
		case 0x881A55E0: goto loc_881A55E0;
		case 0x881A55EC: goto loc_881A55EC;
		case 0x881A5620: goto loc_881A5620;
		case 0x881A5654: goto loc_881A5654;
		case 0x881A5664: goto loc_881A5664;
		case 0x881A5678: goto loc_881A5678;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881A53C0;
	__savegprlr_14(ctx, base);
loc_881A53C0:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x881A53C0;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,128(r3)
	ctx.current_instruction = 0x881A53C4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,228(r3)
	ctx.current_instruction = 0x881A53CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r10,132(r3)
	ctx.current_instruction = 0x881A53D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// rlwinm r9,r23,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r24,112(r3)
	ctx.current_instruction = 0x881A53DC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// srawi r21,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 1;
	// addi r20,r10,-1
	ctx.r20.s64 = ctx.r10.s64 + -1;
	// lwz r31,204(r3)
	ctx.current_instruction = 0x881A53E8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r30,208(r3)
	ctx.current_instruction = 0x881A53EC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r5,248(r3)
	ctx.current_instruction = 0x881A53F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r29,r4,3
	ctx.r29.s64 = ctx.r4.s64 + 3;
	// stw r23,332(r1)
	ctx.current_instruction = 0x881A5400;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r23.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,88(r1)
	ctx.current_instruction = 0x881A5408;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// stw r20,348(r1)
	ctx.current_instruction = 0x881A540C;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r20.u32);
	// stw r24,92(r1)
	ctx.current_instruction = 0x881A5410;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// ble 0x881a5438
	if (!ctx.cr0.gt) goto loc_881A5438;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_881A541C:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881a5238
	ctx.lr = 0x881A542C;
	sub_881A5238(ctx, base);
loc_881A542C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x881a541c
	if (!ctx.cr0.eq) goto loc_881A541C;
loc_881A5438:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// subfic r15,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r15.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881a560c
	if (!ctx.cr6.gt) goto loc_881A560C;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r24,r26
	ctx.r11.u64 = ctx.r24.u64 + ctx.r26.u64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// subf r9,r26,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r26.u64;
	// stw r10,80(r1)
	ctx.current_instruction = 0x881A5460;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// add r16,r24,r25
	ctx.r16.u64 = ctx.r24.u64 + ctx.r25.u64;
	// addi r19,r11,4
	ctx.r19.s64 = ctx.r11.s64 + 4;
	// stw r9,84(r1)
	ctx.current_instruction = 0x881A546C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_881A5470:
	// add r29,r17,r21
	ctx.r29.u64 = ctx.r17.u64 + ctx.r21.u64;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881A5474;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r11,r17
	ctx.r28.u64 = ctx.r11.u64 + ctx.r17.u64;
	// li r22,8
	ctx.r22.s64 = 8;
	// li r25,-4
	ctx.r25.s64 = -4;
	// bl 0x881a50b8
	ctx.lr = 0x881A5494;
	sub_881A50B8(ctx, base);
loc_881A5494:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// bl 0x881a50b8
	ctx.lr = 0x881A54A4;
	sub_881A50B8(ctx, base);
loc_881A54A4:
	// addi r26,r28,4
	ctx.r26.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x881a54b8
	if (!ctx.cr6.eq) goto loc_881A54B8;
	// li r25,-8
	ctx.r25.s64 = -8;
	// b 0x881a54c8
	goto loc_881A54C8;
loc_881A54B8:
	// addi r11,r20,-1
	ctx.r11.s64 = ctx.r20.s64 + -1;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x881a54cc
	if (!ctx.cr6.eq) goto loc_881A54CC;
	// li r25,-4
	ctx.r25.s64 = -4;
loc_881A54C8:
	// li r22,12
	ctx.r22.s64 = 12;
loc_881A54CC:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r19,-4
	ctx.r3.s64 = ctx.r19.s64 + -4;
	// bl 0x881a50b8
	ctx.lr = 0x881A54DC;
	sub_881A50B8(ctx, base);
loc_881A54DC:
	// mullw r11,r25,r30
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r30.s32);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
	// bl 0x881a50b8
	ctx.lr = 0x881A54F4;
	sub_881A50B8(ctx, base);
loc_881A54F4:
	// lwz r11,332(r1)
	ctx.current_instruction = 0x881A54F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x881A54F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// add r28,r19,r10
	ctx.r28.u64 = ctx.r19.u64 + ctx.r10.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881a55a8
	if (!ctx.cr6.gt) goto loc_881A55A8;
loc_881A550C:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r24,r27,r15
	ctx.r24.u64 = ctx.r27.u64 + ctx.r15.u64;
	// add r21,r23,r29
	ctx.r21.u64 = ctx.r23.u64 + ctx.r29.u64;
	// add r20,r28,r23
	ctx.r20.u64 = ctx.r28.u64 + ctx.r23.u64;
	// bl 0x881a50b8
	ctx.lr = 0x881A5528;
	sub_881A50B8(ctx, base);
loc_881A5528:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// bl 0x881a50b8
	ctx.lr = 0x881A5538;
	sub_881A50B8(ctx, base);
loc_881A5538:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bl 0x881a5238
	ctx.lr = 0x881A5548;
	sub_881A5238(ctx, base);
loc_881A5548:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881a50b8
	ctx.lr = 0x881A5558;
	sub_881A50B8(ctx, base);
loc_881A5558:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bl 0x881a50b8
	ctx.lr = 0x881A5568;
	sub_881A50B8(ctx, base);
loc_881A5568:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bl 0x881a5238
	ctx.lr = 0x881A5578;
	sub_881A5238(ctx, base);
loc_881A5578:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x881a5238
	ctx.lr = 0x881A5584;
	sub_881A5238(ctx, base);
loc_881A5584:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r24,8
	ctx.r3.s64 = ctx.r24.s64 + 8;
	// bl 0x881a5238
	ctx.lr = 0x881A5594;
	sub_881A5238(ctx, base);
loc_881A5594:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x881a550c
	if (!ctx.cr0.eq) goto loc_881A550C;
	// lwz r20,348(r1)
	ctx.current_instruction = 0x881A559C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r21,88(r1)
	ctx.current_instruction = 0x881A55A0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r24,92(r1)
	ctx.current_instruction = 0x881A55A4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_881A55A8:
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881a50b8
	ctx.lr = 0x881A55B8;
	sub_881A50B8(ctx, base);
loc_881A55B8:
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881a50b8
	ctx.lr = 0x881A55C4;
	sub_881A50B8(ctx, base);
loc_881A55C4:
	// li r6,16
	ctx.r6.s64 = 16;
	// add r3,r27,r15
	ctx.r3.u64 = ctx.r27.u64 + ctx.r15.u64;
	// bl 0x881a5238
	ctx.lr = 0x881A55D0;
	sub_881A5238(ctx, base);
loc_881A55D0:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881a50b8
	ctx.lr = 0x881A55E0;
	sub_881A50B8(ctx, base);
loc_881A55E0:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881a50b8
	ctx.lr = 0x881A55EC;
	sub_881A50B8(ctx, base);
loc_881A55EC:
	// lwz r11,100(r14)
	ctx.current_instruction = 0x881A55EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 100);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// add r19,r19,r24
	ctx.r19.u64 = ctx.r19.u64 + ctx.r24.u64;
	// add r16,r16,r24
	ctx.r16.u64 = ctx.r16.u64 + ctx.r24.u64;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// add r17,r17,r11
	ctx.r17.u64 = ctx.r17.u64 + ctx.r11.u64;
	// blt cr6,0x881a5470
	if (ctx.cr6.lt) goto loc_881A5470;
	// lwz r23,332(r1)
	ctx.current_instruction = 0x881A5608;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
loc_881A560C:
	// add r30,r17,r21
	ctx.r30.u64 = ctx.r17.u64 + ctx.r21.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881a50b8
	ctx.lr = 0x881A5620;
	sub_881A50B8(ctx, base);
loc_881A5620:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x881a5684
	if (!ctx.cr6.gt) goto loc_881A5684;
	// addi r27,r23,-1
	ctx.r27.s64 = ctx.r23.s64 + -1;
loc_881A5634:
	// add r28,r30,r15
	ctx.r28.u64 = ctx.r30.u64 + ctx.r15.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x881a5648
	if (!ctx.cr6.eq) goto loc_881A5648;
	// li r6,12
	ctx.r6.s64 = 12;
loc_881A5648:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881a50b8
	ctx.lr = 0x881A5654;
	sub_881A50B8(ctx, base);
loc_881A5654:
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bl 0x881a5238
	ctx.lr = 0x881A5664;
	sub_881A5238(ctx, base);
loc_881A5664:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x881a5678
	if (!ctx.cr6.lt) goto loc_881A5678;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x881a5238
	ctx.lr = 0x881A5678;
	sub_881A5238(ctx, base);
loc_881A5678:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x881a5634
	if (ctx.cr6.lt) goto loc_881A5634;
loc_881A5684:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A9E68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A9E68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A9E68) {
			switch (rex_dispatch_address) {
				case 0x881A9E70:
				case 0x881A9EE4:
				case 0x881A9EFC:
				case 0x881A9F78:
				case 0x881A9F90:
				case 0x881AA00C:
				case 0x881AA024:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A9E68;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881A9E70: goto loc_881A9E70;
		case 0x881A9EE4: goto loc_881A9EE4;
		case 0x881A9EFC: goto loc_881A9EFC;
		case 0x881A9F78: goto loc_881A9F78;
		case 0x881A9F90: goto loc_881A9F90;
		case 0x881AA00C: goto loc_881AA00C;
		case 0x881AA024: goto loc_881AA024;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x881A9E70;
	__savegprlr_20(ctx, base);
loc_881A9E70:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x881A9E70;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881a9f24
	if (!ctx.cr6.gt) goto loc_881A9F24;
	// lwz r11,180(r3)
	ctx.current_instruction = 0x881A9E9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// addi r27,r8,-1
	ctx.r27.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_881A9EAC:
	// lwz r10,204(r31)
	ctx.current_instruction = 0x881A9EAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r25
	ctx.r30.u64 = ctx.r10.u64 + ctx.r25.u64;
	// ble cr6,0x881a9f18
	if (!ctx.cr6.gt) goto loc_881A9F18;
loc_881A9EC8:
	// lbzu r28,1(r27)
	ctx.current_instruction = 0x881A9EC8;
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,248(r31)
	ctx.current_instruction = 0x881A9ED4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r6,204(r31)
	ctx.current_instruction = 0x881A9EDC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x881a5f40
	ctx.lr = 0x881A9EE4;
	sub_881A5F40(ctx, base);
loc_881A9EE4:
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r7,248(r31)
	ctx.current_instruction = 0x881A9EEC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,204(r31)
	ctx.current_instruction = 0x881A9EF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x881a5f40
	ctx.lr = 0x881A9EFC;
	sub_881A5F40(ctx, base);
loc_881A9EFC:
	// lwz r11,180(r31)
	ctx.current_instruction = 0x881A9EFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881a9ec8
	if (ctx.cr6.lt) goto loc_881A9EC8;
loc_881A9F18:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x881a9eac
	if (ctx.cr6.lt) goto loc_881A9EAC;
loc_881A9F24:
	// srawi. r25,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r24.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// ble 0x881a9fb8
	if (!ctx.cr0.gt) goto loc_881A9FB8;
	// lwz r11,192(r31)
	ctx.current_instruction = 0x881A9F30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// addi r27,r23,-1
	ctx.r27.s64 = ctx.r23.s64 + -1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_881A9F40:
	// lwz r10,208(r31)
	ctx.current_instruction = 0x881A9F40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r22
	ctx.r30.u64 = ctx.r10.u64 + ctx.r22.u64;
	// ble cr6,0x881a9fac
	if (!ctx.cr6.gt) goto loc_881A9FAC;
loc_881A9F5C:
	// lbzu r28,1(r27)
	ctx.current_instruction = 0x881A9F5C;
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,248(r31)
	ctx.current_instruction = 0x881A9F68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881A9F70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x881a5f40
	ctx.lr = 0x881A9F78;
	sub_881A5F40(ctx, base);
loc_881A9F78:
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r7,248(r31)
	ctx.current_instruction = 0x881A9F80;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881A9F88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x881a5f40
	ctx.lr = 0x881A9F90;
	sub_881A5F40(ctx, base);
loc_881A9F90:
	// lwz r11,192(r31)
	ctx.current_instruction = 0x881A9F90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881a9f5c
	if (ctx.cr6.lt) goto loc_881A9F5C;
loc_881A9FAC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x881a9f40
	if (ctx.cr6.lt) goto loc_881A9F40;
loc_881A9FB8:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881aa04c
	if (!ctx.cr6.gt) goto loc_881AA04C;
	// lwz r11,192(r31)
	ctx.current_instruction = 0x881A9FC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// addi r27,r21,-1
	ctx.r27.s64 = ctx.r21.s64 + -1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_881A9FD4:
	// lwz r10,208(r31)
	ctx.current_instruction = 0x881A9FD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r20
	ctx.r30.u64 = ctx.r10.u64 + ctx.r20.u64;
	// ble cr6,0x881aa040
	if (!ctx.cr6.gt) goto loc_881AA040;
loc_881A9FF0:
	// lbzu r28,1(r27)
	ctx.current_instruction = 0x881A9FF0;
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,248(r31)
	ctx.current_instruction = 0x881A9FFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881AA004;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x881a5f40
	ctx.lr = 0x881AA00C;
	sub_881A5F40(ctx, base);
loc_881AA00C:
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r7,248(r31)
	ctx.current_instruction = 0x881AA014;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881AA01C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x881a5f40
	ctx.lr = 0x881AA024;
	sub_881A5F40(ctx, base);
loc_881AA024:
	// lwz r11,192(r31)
	ctx.current_instruction = 0x881AA024;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881a9ff0
	if (ctx.cr6.lt) goto loc_881A9FF0;
loc_881AA040:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x881a9fd4
	if (ctx.cr6.lt) goto loc_881A9FD4;
loc_881AA04C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ACE30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ACE30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ACE30) {
			switch (rex_dispatch_address) {
				case 0x881ACE38:
				case 0x881ACE5C:
				case 0x881ACE74:
				case 0x881ACE98:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ACE30;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ACE38: goto loc_881ACE38;
		case 0x881ACE5C: goto loc_881ACE5C;
		case 0x881ACE74: goto loc_881ACE74;
		case 0x881ACE98: goto loc_881ACE98;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881ACE38;
	__savegprlr_27(ctx, base);
loc_881ACE38:
	// stwu r1,-640(r1)
	ctx.current_instruction = 0x881ACE38;
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.current_instruction = 0x881ACE3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r27,r10,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881ace64
	if (ctx.cr6.eq) goto loc_881ACE64;
	// lwz r10,15684(r3)
	ctx.current_instruction = 0x881ACE54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15684);
	// bl 0x881abe40
	ctx.lr = 0x881ACE5C;
	sub_881ABE40(ctx, base);
loc_881ACE5C:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881ACE64:
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881abe40
	ctx.lr = 0x881ACE74;
	sub_881ABE40(ctx, base);
loc_881ACE74:
	// lwz r30,724(r1)
	ctx.current_instruction = 0x881ACE74;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881aceac
	if (!ctx.cr6.gt) goto loc_881ACEAC;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_881ACE88:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x881ACE98;
	sub_880547A0(ctx, base);
loc_881ACE98:
	// lwz r11,15684(r31)
	ctx.current_instruction = 0x881ACE98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne 0x881ace88
	if (!ctx.cr0.eq) goto loc_881ACE88;
loc_881ACEAC:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AD418) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881AD418;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881AD418) {
			switch (rex_dispatch_address) {
				case 0x881AD420:
				case 0x881AD47C:
				case 0x881AD570:
				case 0x881AD5FC:
				case 0x881AD61C:
				case 0x881AD6B8:
				case 0x881AD744:
				case 0x881AD764:
				case 0x881AD800:
				case 0x881AD850:
				case 0x881AD894:
				case 0x881AD8D8:
				case 0x881AD91C:
				case 0x881AD9C4:
				case 0x881AD9F8:
				case 0x881ADAB4:
				case 0x881ADAF4:
				case 0x881ADB3C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AD418;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881AD420: goto loc_881AD420;
		case 0x881AD47C: goto loc_881AD47C;
		case 0x881AD570: goto loc_881AD570;
		case 0x881AD5FC: goto loc_881AD5FC;
		case 0x881AD61C: goto loc_881AD61C;
		case 0x881AD6B8: goto loc_881AD6B8;
		case 0x881AD744: goto loc_881AD744;
		case 0x881AD764: goto loc_881AD764;
		case 0x881AD800: goto loc_881AD800;
		case 0x881AD850: goto loc_881AD850;
		case 0x881AD894: goto loc_881AD894;
		case 0x881AD8D8: goto loc_881AD8D8;
		case 0x881AD91C: goto loc_881AD91C;
		case 0x881AD9C4: goto loc_881AD9C4;
		case 0x881AD9F8: goto loc_881AD9F8;
		case 0x881ADAB4: goto loc_881ADAB4;
		case 0x881ADAF4: goto loc_881ADAF4;
		case 0x881ADB3C: goto loc_881ADB3C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881AD420;
	__savegprlr_26(ctx, base);
loc_881AD420:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881AD420;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.current_instruction = 0x881AD424;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r4)
	ctx.current_instruction = 0x881AD438;
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// lwz r8,452(r3)
	ctx.current_instruction = 0x881AD43C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 452);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881ad4d0
	if (ctx.cr6.eq) goto loc_881AD4D0;
	// lwz r11,436(r3)
	ctx.current_instruction = 0x881AD448;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881ad498
	if (!ctx.cr6.eq) goto loc_881AD498;
	// lwz r3,84(r3)
	ctx.current_instruction = 0x881AD454;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881AD458;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881AD45C;
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
	ctx.current_instruction = 0x881AD46C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881AD470;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad47c
	if (!ctx.cr0.lt) goto loc_881AD47C;
	// bl 0x88156678
	ctx.lr = 0x881AD47C;
	sub_88156678(ctx, base);
loc_881AD47C:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881AD47C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r11,r31,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r27)
	ctx.current_instruction = 0x881AD484;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,84(r26)
	ctx.current_instruction = 0x881AD488;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r9,20(r10)
	ctx.current_instruction = 0x881AD48C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881adb70
	if (!ctx.cr6.eq) goto loc_881ADB70;
loc_881AD498:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881AD498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881ad4dc
	if (ctx.cr6.eq) goto loc_881AD4DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,14(r27)
	ctx.current_instruction = 0x881AD4B0;
	REX_STORE_U16(ctx.r27.u32 + 14, ctx.r11.u16);
	// sth r11,16(r27)
	ctx.current_instruction = 0x881AD4B4;
	REX_STORE_U16(ctx.r27.u32 + 16, ctx.r11.u16);
	// sth r11,18(r27)
	ctx.current_instruction = 0x881AD4B8;
	REX_STORE_U16(ctx.r27.u32 + 18, ctx.r11.u16);
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881AD4BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,0(r27)
	ctx.current_instruction = 0x881AD4C4;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881AD4D0:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881AD4D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r27)
	ctx.current_instruction = 0x881AD4D8;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_881AD4DC:
	// lwz r11,444(r26)
	ctx.current_instruction = 0x881AD4DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 444);
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881AD4E0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881ad638
	if (ctx.cr6.eq) goto loc_881AD638;
	// lwz r11,2144(r26)
	ctx.current_instruction = 0x881AD4EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 2144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ad508
	if (!ctx.cr6.eq) goto loc_881AD508;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r31)
	ctx.current_instruction = 0x881AD500;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD508:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881AD508;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x881AD50C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881AD514;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881AD524;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881ad5f4
	if (ctx.cr6.lt) goto loc_881AD5F4;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881AD534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881AD544;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881AD54C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881ad5ec
	if (!ctx.cr6.lt) goto loc_881AD5EC;
loc_881AD554:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881AD554;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881AD558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881ad580
	if (ctx.cr6.lt) goto loc_881AD580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881AD570;
	sub_88156440(ctx, base);
loc_881AD570:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881ad554
	if (ctx.cr6.eq) goto loc_881AD554;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD580:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881AD580;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881AD588;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881AD590;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881AD594;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881AD59C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881AD5A0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AD5A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881AD5AC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881AD5B4;
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
	ctx.current_instruction = 0x881AD5D0;
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
	ctx.current_instruction = 0x881AD5E8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881AD5EC:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD5F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881AD5FC;
	sub_88156500(ctx, base);
loc_881AD5FC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
loc_881AD604:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881AD604;
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
	ctx.lr = 0x881AD61C;
	sub_88156500(ctx, base);
loc_881AD61C:
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881AD624;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881ad604
	if (ctx.cr6.lt) goto loc_881AD604;
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD638:
	// addic. r11,r26,2132
	ctx.xer.ca = ctx.r26.u32 > 4294965163;
	ctx.r11.s64 = ctx.r26.s64 + 2132;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881ad650
	if (!ctx.cr0.eq) goto loc_881AD650;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r31)
	ctx.current_instruction = 0x881AD648;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD650:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881AD650;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x881AD654;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881AD65C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881AD66C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881ad73c
	if (ctx.cr6.lt) goto loc_881AD73C;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881AD67C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881AD68C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881AD694;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881ad734
	if (!ctx.cr6.lt) goto loc_881AD734;
loc_881AD69C:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881AD69C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881AD6A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881ad6c8
	if (ctx.cr6.lt) goto loc_881AD6C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881AD6B8;
	sub_88156440(ctx, base);
loc_881AD6B8:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881ad69c
	if (ctx.cr6.eq) goto loc_881AD69C;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD6C8:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881AD6C8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x881AD6D0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x881AD6D8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x881AD6DC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x881AD6E4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881AD6E8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AD6F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881AD6F4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AD6FC;
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
	ctx.current_instruction = 0x881AD718;
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
	ctx.current_instruction = 0x881AD730;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_881AD734:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881ad77c
	goto loc_881AD77C;
loc_881AD73C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881AD744;
	sub_88156500(ctx, base);
loc_881AD744:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
loc_881AD74C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881AD74C;
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
	ctx.lr = 0x881AD764;
	sub_88156500(ctx, base);
loc_881AD764:
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881AD76C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881ad74c
	if (ctx.cr6.lt) goto loc_881AD74C;
loc_881AD77C:
	// lwz r11,84(r26)
	ctx.current_instruction = 0x881AD77C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881AD780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881adb70
	if (!ctx.cr6.eq) goto loc_881ADB70;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881adb70
	if (ctx.cr6.lt) goto loc_881ADB70;
	// cmpwi cr6,r29,127
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 127, ctx.xer);
	// bgt cr6,0x881adb70
	if (ctx.cr6.gt) goto loc_881ADB70;
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881AD7A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// beq cr6,0x881ad820
	if (ctx.cr6.eq) goto loc_881AD820;
	// xori r29,r29,64
	ctx.r29.u64 = ctx.r29.u64 ^ 64;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r11,0(r27)
	ctx.current_instruction = 0x881AD7BC;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwimi r11,r9,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,0(r27)
	ctx.current_instruction = 0x881AD7C8;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r8,328(r26)
	ctx.current_instruction = 0x881AD7CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 328);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881ad814
	if (ctx.cr6.eq) goto loc_881AD814;
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881AD7D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881AD7DC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881AD7E0;
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
	ctx.current_instruction = 0x881AD7F0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881AD7F4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad800
	if (!ctx.cr0.lt) goto loc_881AD800;
	// bl 0x88156678
	ctx.lr = 0x881AD800;
	sub_88156678(ctx, base);
loc_881AD800:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881AD800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// rlwimi r11,r10,18,12,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r11,0(r27)
	ctx.current_instruction = 0x881AD80C;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x881ad97c
	goto loc_881AD97C;
loc_881AD814:
	// rlwimi r11,r28,19,12,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 19) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r11,0(r27)
	ctx.current_instruction = 0x881AD818;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x881ad97c
	goto loc_881AD97C;
loc_881AD820:
	// rlwinm r10,r11,0,15,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r10,0(r27)
	ctx.current_instruction = 0x881AD824;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881AD828;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r8,8(r3)
	ctx.current_instruction = 0x881AD82C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r9,0(r3)
	ctx.current_instruction = 0x881AD830;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r7,r9,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r31,r9,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// std r7,0(r3)
	ctx.current_instruction = 0x881AD83C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881AD844;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad850
	if (!ctx.cr0.lt) goto loc_881AD850;
	// bl 0x88156678
	ctx.lr = 0x881AD850;
	sub_88156678(ctx, base);
loc_881AD850:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881AD850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r27)
	ctx.current_instruction = 0x881AD85C;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r9,404(r26)
	ctx.current_instruction = 0x881AD860;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 404);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881ad96c
	if (ctx.cr6.eq) goto loc_881AD96C;
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881AD86C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881AD870;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881AD874;
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
	ctx.current_instruction = 0x881AD884;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881AD888;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad894
	if (!ctx.cr0.lt) goto loc_881AD894;
	// bl 0x88156678
	ctx.lr = 0x881AD894;
	sub_88156678(ctx, base);
loc_881AD894:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x881ad8b0
	if (!ctx.cr6.eq) goto loc_881AD8B0;
	// lbz r11,20(r27)
	ctx.current_instruction = 0x881AD89C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 20);
	// li r12,221
	ctx.r12.s64 = 221;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stb r10,20(r27)
	ctx.current_instruction = 0x881AD8A8;
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r10.u8);
	// b 0x881ad948
	goto loc_881AD948;
loc_881AD8B0:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881AD8B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881AD8B4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881AD8B8;
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
	ctx.current_instruction = 0x881AD8C8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881AD8CC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad8d8
	if (!ctx.cr0.lt) goto loc_881AD8D8;
	// bl 0x88156678
	ctx.lr = 0x881AD8D8;
	sub_88156678(ctx, base);
loc_881AD8D8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x881ad8f4
	if (!ctx.cr6.eq) goto loc_881AD8F4;
	// lbz r11,20(r27)
	ctx.current_instruction = 0x881AD8E0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 20);
	// li r12,221
	ctx.r12.s64 = 221;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// b 0x881ad944
	goto loc_881AD944;
loc_881AD8F4:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881AD8F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881AD8F8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881AD8FC;
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
	ctx.current_instruction = 0x881AD90C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881AD910;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad91c
	if (!ctx.cr0.lt) goto loc_881AD91C;
	// bl 0x88156678
	ctx.lr = 0x881AD91C;
	sub_88156678(ctx, base);
loc_881AD91C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x881ad934
	if (ctx.cr6.eq) goto loc_881AD934;
	// lbz r11,20(r27)
	ctx.current_instruction = 0x881AD924;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 20);
	// ori r10,r11,34
	ctx.r10.u64 = ctx.r11.u64 | 34;
	// stb r10,20(r27)
	ctx.current_instruction = 0x881AD92C;
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r10.u8);
	// b 0x881ad948
	goto loc_881AD948;
loc_881AD934:
	// lbz r11,20(r27)
	ctx.current_instruction = 0x881AD934;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 20);
	// li r12,221
	ctx.r12.s64 = 221;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
loc_881AD944:
	// stb r9,20(r27)
	ctx.current_instruction = 0x881AD944;
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r9.u8);
loc_881AD948:
	// lbz r11,20(r27)
	ctx.current_instruction = 0x881AD948;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 20);
	// li r12,179
	ctx.r12.s64 = 179;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// rlwinm r8,r9,1,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x40;
	// stb r9,20(r27)
	ctx.current_instruction = 0x881AD95C;
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r9.u8);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stb r6,20(r27)
	ctx.current_instruction = 0x881AD968;
	REX_STORE_U8(ctx.r27.u32 + 20, ctx.r6.u8);
loc_881AD96C:
	// lwz r11,84(r26)
	ctx.current_instruction = 0x881AD96C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881AD970;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881adb70
	if (!ctx.cr6.eq) goto loc_881ADB70;
loc_881AD97C:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881AD97C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,0,10,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r10,0(r27)
	ctx.current_instruction = 0x881AD984;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r9,396(r26)
	ctx.current_instruction = 0x881AD988;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 396);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881ada08
	if (ctx.cr6.eq) goto loc_881ADA08;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881ada08
	if (ctx.cr6.eq) goto loc_881ADA08;
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881AD99C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881AD9A0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881AD9A4;
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
	ctx.current_instruction = 0x881AD9B4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881AD9B8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad9c4
	if (!ctx.cr0.lt) goto loc_881AD9C4;
	// bl 0x88156678
	ctx.lr = 0x881AD9C4;
	sub_88156678(ctx, base);
loc_881AD9C4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881ad9fc
	if (ctx.cr6.eq) goto loc_881AD9FC;
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881AD9D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881AD9D4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881AD9D8;
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
	ctx.current_instruction = 0x881AD9E8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881AD9EC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ad9f8
	if (!ctx.cr0.lt) goto loc_881AD9F8;
	// bl 0x88156678
	ctx.lr = 0x881AD9F8;
	sub_88156678(ctx, base);
loc_881AD9F8:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_881AD9FC:
	// lwz r10,0(r27)
	ctx.current_instruction = 0x881AD9FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r27)
	ctx.current_instruction = 0x881ADA04;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_881ADA08:
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r10,14(r27)
	ctx.current_instruction = 0x881ADA18;
	REX_STORE_U8(ctx.r27.u32 + 14, ctx.r10.u8);
	// stb r9,15(r27)
	ctx.current_instruction = 0x881ADA1C;
	REX_STORE_U8(ctx.r27.u32 + 15, ctx.r9.u8);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r8,16(r27)
	ctx.current_instruction = 0x881ADA28;
	REX_STORE_U8(ctx.r27.u32 + 16, ctx.r8.u8);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r7,17(r27)
	ctx.current_instruction = 0x881ADA34;
	REX_STORE_U8(ctx.r27.u32 + 17, ctx.r7.u8);
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// stb r5,18(r27)
	ctx.current_instruction = 0x881ADA44;
	REX_STORE_U8(ctx.r27.u32 + 18, ctx.r5.u8);
	// stb r4,19(r27)
	ctx.current_instruction = 0x881ADA48;
	REX_STORE_U8(ctx.r27.u32 + 19, ctx.r4.u8);
	// lwz r3,440(r26)
	ctx.current_instruction = 0x881ADA4C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 440);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881adb64
	if (ctx.cr6.eq) goto loc_881ADB64;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881ADA58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,0(r27)
	ctx.current_instruction = 0x881ADA60;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,332(r26)
	ctx.current_instruction = 0x881ADA64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881adb64
	if (ctx.cr6.eq) goto loc_881ADB64;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881adb64
	if (!ctx.cr6.eq) goto loc_881ADB64;
	// rlwinm r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881adb64
	if (!ctx.cr6.eq) goto loc_881ADB64;
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881ADA8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881ADA90;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881ADA94;
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
	ctx.current_instruction = 0x881ADAA4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881ADAA8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881adab4
	if (!ctx.cr0.lt) goto loc_881ADAB4;
	// bl 0x88156678
	ctx.lr = 0x881ADAB4;
	sub_88156678(ctx, base);
loc_881ADAB4:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881ADAB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r11,r31,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// stw r11,0(r27)
	ctx.current_instruction = 0x881ADAC0;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881adb64
	if (!ctx.cr6.eq) goto loc_881ADB64;
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881ADACC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881ADAD0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881ADAD4;
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
	ctx.current_instruction = 0x881ADAE4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881ADAE8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881adaf4
	if (!ctx.cr0.lt) goto loc_881ADAF4;
	// bl 0x88156678
	ctx.lr = 0x881ADAF4;
	sub_88156678(ctx, base);
loc_881ADAF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881adb14
	if (!ctx.cr6.eq) goto loc_881ADB14;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881ADAFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,8,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// stw r10,0(r27)
	ctx.current_instruction = 0x881ADB08;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881ADB14:
	// lwz r3,84(r26)
	ctx.current_instruction = 0x881ADB14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881ADB18;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881ADB1C;
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
	ctx.current_instruction = 0x881ADB2C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881ADB30;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881adb3c
	if (!ctx.cr0.lt) goto loc_881ADB3C;
	// bl 0x88156678
	ctx.lr = 0x881ADB3C;
	sub_88156678(ctx, base);
loc_881ADB3C:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x881ADB3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881adb5c
	if (!ctx.cr6.eq) goto loc_881ADB5C;
	// rlwimi r11,r28,24,5,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	ctx.current_instruction = 0x881ADB50;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881ADB5C:
	// rlwimi r11,r28,25,5,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r11,0(r27)
	ctx.current_instruction = 0x881ADB60;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_881ADB64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881ADB70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C4298) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C4298;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C4298) {
			switch (rex_dispatch_address) {
				case 0x881C42A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C4298;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x881C42A0: goto loc_881C42A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881C42A0;
	__savegprlr_26(ctx, base);
loc_881C42A0:
	// lwz r11,136(r3)
	ctx.current_instruction = 0x881C42A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r6,140(r3)
	ctx.current_instruction = 0x881C42A8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r31,14840(r3)
	ctx.current_instruction = 0x881C42B0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 14840);
	// lwz r30,3428(r3)
	ctx.current_instruction = 0x881C42B4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3428);
	// rlwinm r6,r6,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
	// lwz r29,84(r1)
	ctx.current_instruction = 0x881C42C0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r31,r30
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// lwz r28,92(r1)
	ctx.current_instruction = 0x881C42C8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r26,r6,-4
	ctx.r26.s64 = ctx.r6.s64 + -4;
	// addi r6,r11,-256
	ctx.r6.s64 = ctx.r11.s64 + -256;
	// mullw r30,r11,r4
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r31,r11,r5
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r6,r4
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// beq cr6,0x881c4320
	if (ctx.cr6.eq) goto loc_881C4320;
	// addi r30,r30,255
	ctx.r30.s64 = ctx.r30.s64 + 255;
	// addi r5,r4,255
	ctx.r5.s64 = ctx.r4.s64 + 255;
	// addi r6,r31,255
	ctx.r6.s64 = ctx.r31.s64 + 255;
	// srawi r4,r30,9
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1FF) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 9;
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
	ctx.current_instruction = 0x881C430C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x881c4344
	goto loc_881C4344;
loc_881C4320:
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
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
	ctx.current_instruction = 0x881C4338;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r4,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 8;
loc_881C4344:
	// stw r6,0(r10)
	ctx.current_instruction = 0x881C4344;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,0(r29)
	ctx.current_instruction = 0x881C4348;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// stw r4,0(r28)
	ctx.current_instruction = 0x881C434C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// lwz r11,20680(r3)
	ctx.current_instruction = 0x881C4350;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c4408
	if (!ctx.cr6.eq) goto loc_881C4408;
	// lwz r6,0(r9)
	ctx.current_instruction = 0x881C435C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r5,r8,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r7,0(r10)
	ctx.current_instruction = 0x881C4368;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// cmpwi cr6,r8,-60
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -60, ctx.xer);
	// bge cr6,0x881c4384
	if (!ctx.cr6.lt) goto loc_881C4384;
	// subfic r8,r11,-60
	ctx.xer.ca = ctx.r11.u32 <= 4294967236;
	ctx.r8.u64 = static_cast<uint64_t>(-60) - ctx.r11.u64;
	// b 0x881c4390
	goto loc_881C4390;
loc_881C4384:
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x881c4394
	if (!ctx.cr6.gt) goto loc_881C4394;
	// subf r8,r11,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r11.u64;
loc_881C4390:
	// stw r8,0(r9)
	ctx.current_instruction = 0x881C4390;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_881C4394:
	// cmpwi cr6,r7,-60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -60, ctx.xer);
	// bge cr6,0x881c43a4
	if (!ctx.cr6.lt) goto loc_881C43A4;
	// subfic r9,r5,-60
	ctx.xer.ca = ctx.r5.u32 <= 4294967236;
	ctx.r9.u64 = static_cast<uint64_t>(-60) - ctx.r5.u64;
	// b 0x881c43b0
	goto loc_881C43B0;
loc_881C43A4:
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x881c43b4
	if (!ctx.cr6.gt) goto loc_881C43B4;
	// subf r9,r5,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r5.u64;
loc_881C43B0:
	// stw r9,0(r10)
	ctx.current_instruction = 0x881C43B0;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_881C43B4:
	// lwz r10,0(r29)
	ctx.current_instruction = 0x881C43B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r28)
	ctx.current_instruction = 0x881C43B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmpwi cr6,r10,-60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -60, ctx.xer);
	// bge cr6,0x881c43d4
	if (!ctx.cr6.lt) goto loc_881C43D4;
	// subfic r11,r11,-60
	ctx.xer.ca = ctx.r11.u32 <= 4294967236;
	ctx.r11.u64 = static_cast<uint64_t>(-60) - ctx.r11.u64;
	// b 0x881c43e0
	goto loc_881C43E0;
loc_881C43D4:
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x881c43e4
	if (!ctx.cr6.gt) goto loc_881C43E4;
	// subf r11,r11,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r11.u64;
loc_881C43E0:
	// stw r11,0(r29)
	ctx.current_instruction = 0x881C43E0;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_881C43E4:
	// cmpwi cr6,r9,-60
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -60, ctx.xer);
	// bge cr6,0x881c43f8
	if (!ctx.cr6.lt) goto loc_881C43F8;
	// subfic r11,r5,-60
	ctx.xer.ca = ctx.r5.u32 <= 4294967236;
	ctx.r11.u64 = static_cast<uint64_t>(-60) - ctx.r5.u64;
	// stw r11,0(r28)
	ctx.current_instruction = 0x881C43F0;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881C43F8:
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x881c4408
	if (!ctx.cr6.gt) goto loc_881C4408;
	// subf r11,r5,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r5.u64;
	// stw r11,0(r28)
	ctx.current_instruction = 0x881C4404;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_881C4408:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CA308) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881CA308);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CA308;
	ctx.current_instruction = 0x881CA308;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mullw. r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blelr 
	if (!ctx.cr0.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_881CA31C:
	// lbzx r8,r9,r11
	ctx.current_instruction = 0x881CA31C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// stb r8,0(r11)
	ctx.current_instruction = 0x881CA328;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blt cr6,0x881ca31c
	if (ctx.cr6.lt) goto loc_881CA31C;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881CB468) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CB468;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CB468) {
			switch (rex_dispatch_address) {
				case 0x881CB470:
				case 0x881CB478:
				case 0x881CB564:
				case 0x881CB590:
				case 0x881CB600:
				case 0x881CB614:
				case 0x881CB654:
				case 0x881CB668:
				case 0x881CB70C:
				case 0x881CB7B0:
				case 0x881CB844:
				case 0x881CB890:
				case 0x881CB910:
				case 0x881CB9B4:
				case 0x881CBA60:
				case 0x881CBAA8:
				case 0x881CBACC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CB468;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881CB470: goto loc_881CB470;
		case 0x881CB478: goto loc_881CB478;
		case 0x881CB564: goto loc_881CB564;
		case 0x881CB590: goto loc_881CB590;
		case 0x881CB600: goto loc_881CB600;
		case 0x881CB614: goto loc_881CB614;
		case 0x881CB654: goto loc_881CB654;
		case 0x881CB668: goto loc_881CB668;
		case 0x881CB70C: goto loc_881CB70C;
		case 0x881CB7B0: goto loc_881CB7B0;
		case 0x881CB844: goto loc_881CB844;
		case 0x881CB890: goto loc_881CB890;
		case 0x881CB910: goto loc_881CB910;
		case 0x881CB9B4: goto loc_881CB9B4;
		case 0x881CBA60: goto loc_881CBA60;
		case 0x881CBAA8: goto loc_881CBAA8;
		case 0x881CBACC: goto loc_881CBACC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881CB470;
	__savegprlr_14(ctx, base);
loc_881CB470:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef27c
	ctx.lr = 0x881CB478;
	__savefpr_25(ctx, base);
loc_881CB478:
	// stwu r1,-368(r1)
	ctx.current_instruction = 0x881CB478;
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,476(r1)
	ctx.current_instruction = 0x881CB47C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// stw r9,436(r1)
	ctx.current_instruction = 0x881CB484;
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r9,484(r1)
	ctx.current_instruction = 0x881CB48C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// stw r5,404(r1)
	ctx.current_instruction = 0x881CB494;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r6,128(r1)
	ctx.current_instruction = 0x881CB4A0;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.current_instruction = 0x881CB4A4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// stw r10,444(r1)
	ctx.current_instruction = 0x881CB4A8;
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// std r5,128(r1)
	ctx.current_instruction = 0x881CB4AC;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f13,128(r1)
	ctx.current_instruction = 0x881CB4B0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lis r10,-30717
	ctx.r10.s64 = -2013069312;
	// fcfid f31,f0
	ctx.f31.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f29,-26256(r10)
	ctx.current_instruction = 0x881CB4C0;
	ctx.f29.u64 = REX_LOAD_U64(ctx.r10.u32 + -26256);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r4,396(r1)
	ctx.current_instruction = 0x881CB4C8;
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// lwz r24,452(r1)
	ctx.current_instruction = 0x881CB4D0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lis r7,-30717
	ctx.r7.s64 = -2013069312;
	// stw r8,428(r1)
	ctx.current_instruction = 0x881CB4D8;
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// srawi r22,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r21.s32 >> 1;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfd f0,-26248(r7)
	ctx.current_instruction = 0x881CB4EC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -26248);
	// stw r11,112(r1)
	ctx.current_instruction = 0x881CB4F0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfd f13,12296(r3)
	ctx.current_instruction = 0x881CB4F4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 12296);
	// fmul f11,f31,f0
	ctx.f11.f64 = ctx.f31.f64 * ctx.f0.f64;
	// fmul f28,f12,f29
	ctx.f28.f64 = ctx.f12.f64 * ctx.f29.f64;
	// fmul f10,f28,f13
	ctx.f10.f64 = ctx.f28.f64 * ctx.f13.f64;
	// fsub f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 - ctx.f11.f64;
	// fadd f8,f10,f11
	ctx.f8.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fctiwz f7,f9
	ctx.f7.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,120(r1)
	ctx.current_instruction = 0x881CB510;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f7.u64);
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,128(r1)
	ctx.current_instruction = 0x881CB518;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f6.u64);
	// lwz r11,124(r1)
	ctx.current_instruction = 0x881CB51C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,132(r1)
	ctx.current_instruction = 0x881CB520;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// ble cr6,0x881cb5a8
	if (!ctx.cr6.gt) goto loc_881CB5A8;
	// subf r29,r10,r21
	ctx.r29.u64 = ctx.r21.u64 - ctx.r10.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// subf r26,r24,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r24.u64;
	// subf r27,r24,r21
	ctx.r27.u64 = ctx.r21.u64 - ctx.r24.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_881CB540:
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r21.s32, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// blt cr6,0x881cb550
	if (ctx.cr6.lt) goto loc_881CB550;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_881CB550:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x881cb564
	if (!ctx.cr6.gt) goto loc_881CB564;
	// add r4,r31,r26
	ctx.r4.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CB564;
	sub_880547A0(ctx, base);
loc_881CB564:
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// blt cr6,0x881cb574
	if (ctx.cr6.lt) goto loc_881CB574;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_881CB574:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x881cb590
	if (!ctx.cr6.gt) goto loc_881CB590;
	// subf r11,r5,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r5.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CB590;
	sub_880547A0(ctx, base);
loc_881CB590:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// add r31,r31,r21
	ctx.r31.u64 = ctx.r31.u64 + ctx.r21.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x881cb540
	if (!ctx.cr0.eq) goto loc_881CB540;
	// lwz r4,396(r1)
	ctx.current_instruction = 0x881CB5A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
loc_881CB5A8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881cb67c
	if (!ctx.cr6.gt) goto loc_881CB67C;
	// lwz r28,132(r1)
	ctx.current_instruction = 0x881CB5B4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,124(r1)
	ctx.current_instruction = 0x881CB5B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// subf r27,r28,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r28.u64;
loc_881CB5C0:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x881cb5d8
	if (ctx.cr6.lt) goto loc_881CB5D8;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_881CB5D8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881cb614
	if (!ctx.cr6.gt) goto loc_881CB614;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r10,436(r1)
	ctx.current_instruction = 0x881CB5E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r9,460(r1)
	ctx.current_instruction = 0x881CB5E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r31,r11,r22
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CB600;
	sub_880547A0(ctx, base);
loc_881CB600:
	// lwz r8,468(r1)
	ctx.current_instruction = 0x881CB600;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r23
	ctx.r4.u64 = ctx.r31.u64 + ctx.r23.u64;
	// add r3,r31,r8
	ctx.r3.u64 = ctx.r31.u64 + ctx.r8.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CB614;
	sub_880547A0(ctx, base);
loc_881CB614:
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x881cb628
	if (ctx.cr6.lt) goto loc_881CB628;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_881CB628:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881cb668
	if (!ctx.cr6.gt) goto loc_881CB668;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r10,460(r1)
	ctx.current_instruction = 0x881CB634;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r8,r9,r22
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r22.s32);
	// subf r31,r30,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r30.u64;
	// add r4,r31,r15
	ctx.r4.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CB654;
	sub_880547A0(ctx, base);
loc_881CB654:
	// lwz r7,468(r1)
	ctx.current_instruction = 0x881CB654;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r17
	ctx.r4.u64 = ctx.r31.u64 + ctx.r17.u64;
	// add r3,r31,r7
	ctx.r3.u64 = ctx.r31.u64 + ctx.r7.u64;
	// bl 0x880547a0
	ctx.lr = 0x881CB668;
	sub_880547A0(ctx, base);
loc_881CB668:
	// lwz r11,396(r1)
	ctx.current_instruction = 0x881CB668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881cb5c0
	if (ctx.cr6.lt) goto loc_881CB5C0;
loc_881CB67C:
	// lwz r11,124(r1)
	ctx.current_instruction = 0x881CB67C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,428(r1)
	ctx.current_instruction = 0x881CB684;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r14,r21,-1
	ctx.r14.s64 = ctx.r21.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r16,r25,r9
	ctx.r16.u64 = ctx.r9.u64 - ctx.r25.u64;
	// addc r6,r7,r8
	ctx.xer.ca = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r9,-30717
	ctx.r9.s64 = -2013069312;
	// and r30,r4,r11
	ctx.r30.u64 = ctx.r4.u64 & ctx.r11.u64;
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// lfd f27,12088(r10)
	ctx.current_instruction = 0x881CB6B4;
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// addi r18,r22,-1
	ctx.r18.s64 = ctx.r22.s64 + -1;
	// subf r19,r25,r24
	ctx.r19.u64 = ctx.r24.u64 - ctx.r25.u64;
	// lfd f26,-26240(r9)
	ctx.current_instruction = 0x881CB6C0;
	ctx.f26.u64 = REX_LOAD_U64(ctx.r9.u32 + -26240);
	// subfic r20,r25,1
	ctx.xer.ca = ctx.r25.u32 <= 1;
	ctx.r20.u64 = static_cast<uint64_t>(1) - ctx.r25.u64;
	// lfd f25,-26264(r11)
	ctx.current_instruction = 0x881CB6C8;
	ctx.f25.u64 = REX_LOAD_U64(ctx.r11.u32 + -26264);
loc_881CB6CC:
	// lwz r10,132(r1)
	ctx.current_instruction = 0x881CB6CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x881cb6e0
	if (ctx.cr6.lt) goto loc_881CB6E0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_881CB6E0:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881cb8a0
	if (!ctx.cr6.lt) goto loc_881CB8A0;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,136(r1)
	ctx.current_instruction = 0x881CB6EC;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.current_instruction = 0x881CB6F0;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f28
	ctx.f12.f64 = ctx.f13.f64 - ctx.f28.f64;
	// fsub f11,f12,f28
	ctx.f11.f64 = ctx.f12.f64 - ctx.f28.f64;
	// fmul f30,f11,f26
	ctx.f30.f64 = ctx.f11.f64 * ctx.f26.f64;
	// fdiv f1,f30,f31
	ctx.f1.f64 = ctx.f30.f64 / ctx.f31.f64;
	// bl 0x881f0340
	ctx.lr = 0x881CB70C;
	sub_881F0340(ctx, base);
loc_881CB70C:
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f25.f64 - ctx.f1.f64;
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// fmsub f9,f1,f31,f30
	ctx.f9.f64 = std::fma(ctx.f1.f64, ctx.f31.f64, -ctx.f30.f64);
	// add r6,r30,r25
	ctx.r6.u64 = ctx.r30.u64 + ctx.r25.u64;
	// lwz r7,396(r1)
	ctx.current_instruction = 0x881CB71C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// add r10,r6,r20
	ctx.r10.u64 = ctx.r6.u64 + ctx.r20.u64;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// fmsub f8,f10,f31,f30
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f31.f64, -ctx.f30.f64);
	// fmadd f7,f9,f29,f27
	ctx.f7.f64 = std::fma(ctx.f9.f64, ctx.f29.f64, ctx.f27.f64);
	// fmadd f6,f8,f29,f27
	ctx.f6.f64 = std::fma(ctx.f8.f64, ctx.f29.f64, ctx.f27.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,144(r1)
	ctx.current_instruction = 0x881CB738;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f5.u64);
	// lwz r9,148(r1)
	ctx.current_instruction = 0x881CB73C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// neg r29,r9
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,144(r1)
	ctx.current_instruction = 0x881CB748;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f4.u64);
	// lwz r8,148(r1)
	ctx.current_instruction = 0x881CB74C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// neg r28,r8
	ctx.r28.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mullw r8,r11,r28
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r5,r9,r25
	ctx.r5.u64 = ctx.r9.u64 + ctx.r25.u64;
	// blt cr6,0x881cb774
	if (ctx.cr6.lt) goto loc_881CB774;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_881CB774:
	// stw r10,108(r1)
	ctx.current_instruction = 0x881CB774;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// neg r3,r28
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r28.u64);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,84(r1)
	ctx.current_instruction = 0x881CB790;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r3,92(r1)
	ctx.current_instruction = 0x881CB794;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// add r7,r6,r16
	ctx.r7.u64 = ctx.r6.u64 + ctx.r16.u64;
	// neg r10,r29
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r29.u64);
	// stw r9,100(r1)
	ctx.current_instruction = 0x881CB7A0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// add r3,r6,r19
	ctx.r3.u64 = ctx.r6.u64 + ctx.r19.u64;
	// bl 0x881ca338
	ctx.lr = 0x881CB7B0;
	sub_881CA338(ctx, base);
loc_881CB7B0:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881cb898
	if (!ctx.cr6.eq) goto loc_881CB898;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// lwz r7,460(r1)
	ctx.current_instruction = 0x881CB7C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r26,436(r1)
	ctx.current_instruction = 0x881CB7C8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r28,r8,r31
	ctx.r28.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwz r8,112(r1)
	ctx.current_instruction = 0x881CB7E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r27,r9,r31
	ctx.r27.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// add r3,r31,r7
	ctx.r3.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r4,r28,r15
	ctx.r4.u64 = ctx.r28.u64 + ctx.r15.u64;
	// add r5,r27,r15
	ctx.r5.u64 = ctx.r27.u64 + ctx.r15.u64;
	// add r6,r31,r15
	ctx.r6.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r7,r31,r26
	ctx.r7.u64 = ctx.r31.u64 + ctx.r26.u64;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881cb80c
	if (!ctx.cr6.lt) goto loc_881CB80C;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_881CB80C:
	// stw r8,108(r1)
	ctx.current_instruction = 0x881CB80C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r24,r8,1
	ctx.r24.s64 = ctx.r8.s64 + 1;
	// addi r26,r9,1
	ctx.r26.s64 = ctx.r9.s64 + 1;
	// stw r24,100(r1)
	ctx.current_instruction = 0x881CB824;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// neg r25,r11
	ctx.r25.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r26,84(r1)
	ctx.current_instruction = 0x881CB82C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// neg r23,r10
	ctx.r23.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// stw r23,92(r1)
	ctx.current_instruction = 0x881CB83C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// bl 0x881ca338
	ctx.lr = 0x881CB844;
	sub_881CA338(ctx, base);
loc_881CB844:
	// lwz r10,468(r1)
	ctx.current_instruction = 0x881CB844;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r9,444(r1)
	ctx.current_instruction = 0x881CB848;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r28,r17
	ctx.r4.u64 = ctx.r28.u64 + ctx.r17.u64;
	// lwz r11,112(r1)
	ctx.current_instruction = 0x881CB850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r5,r27,r17
	ctx.r5.u64 = ctx.r27.u64 + ctx.r17.u64;
	// add r6,r31,r17
	ctx.r6.u64 = ctx.r31.u64 + ctx.r17.u64;
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881cb870
	if (ctx.cr6.lt) goto loc_881CB870;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_881CB870:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x881CB874;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// stw r29,108(r1)
	ctx.current_instruction = 0x881CB87C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r24,100(r1)
	ctx.current_instruction = 0x881CB880;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// stw r23,92(r1)
	ctx.current_instruction = 0x881CB888;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// bl 0x881ca338
	ctx.lr = 0x881CB890;
	sub_881CA338(ctx, base);
loc_881CB890:
	// lwz r24,452(r1)
	ctx.current_instruction = 0x881CB890;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r25,404(r1)
	ctx.current_instruction = 0x881CB894;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_881CB898:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x881cb6cc
	goto loc_881CB6CC;
loc_881CB8A0:
	// lwz r11,124(r1)
	ctx.current_instruction = 0x881CB8A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// subf r11,r21,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r21.u64;
	// addi r23,r11,2
	ctx.r23.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bge cr6,0x881cb8b8
	if (!ctx.cr6.lt) goto loc_881CB8B8;
	// li r23,1
	ctx.r23.s64 = 1;
loc_881CB8B8:
	// lwz r9,396(r1)
	ctx.current_instruction = 0x881CB8B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r11,r21,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r21.u64;
	// mullw r19,r23,r21
	ctx.r19.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r21.s32);
	// addi r16,r11,2
	ctx.r16.s64 = ctx.r11.s64 + 2;
	// subf r20,r23,r9
	ctx.r20.u64 = ctx.r9.u64 - ctx.r23.u64;
loc_881CB8CC:
	// lwz r11,396(r1)
	ctx.current_instruction = 0x881CB8CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x881cb8dc
	if (ctx.cr6.lt) goto loc_881CB8DC;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_881CB8DC:
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881cbac0
	if (!ctx.cr6.lt) goto loc_881CBAC0;
	// add r11,r14,r23
	ctx.r11.u64 = ctx.r14.u64 + ctx.r23.u64;
	// add r31,r19,r14
	ctx.r31.u64 = ctx.r19.u64 + ctx.r14.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,144(r1)
	ctx.current_instruction = 0x881CB8F0;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.current_instruction = 0x881CB8F4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f28
	ctx.f12.f64 = ctx.f13.f64 - ctx.f28.f64;
	// fsub f11,f12,f28
	ctx.f11.f64 = ctx.f12.f64 - ctx.f28.f64;
	// fmul f30,f11,f26
	ctx.f30.f64 = ctx.f11.f64 * ctx.f26.f64;
	// fdiv f1,f30,f31
	ctx.f1.f64 = ctx.f30.f64 / ctx.f31.f64;
	// bl 0x881f0340
	ctx.lr = 0x881CB910;
	sub_881F0340(ctx, base);
loc_881CB910:
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f25.f64 - ctx.f1.f64;
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// fmsub f9,f1,f31,f30
	ctx.f9.f64 = std::fma(ctx.f1.f64, ctx.f31.f64, -ctx.f30.f64);
	// lwz r9,428(r1)
	ctx.current_instruction = 0x881CB91C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// add r3,r31,r24
	ctx.r3.u64 = ctx.r31.u64 + ctx.r24.u64;
	// add r6,r31,r25
	ctx.r6.u64 = ctx.r31.u64 + ctx.r25.u64;
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// fmsub f8,f10,f31,f30
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f31.f64, -ctx.f30.f64);
	// fmadd f7,f9,f29,f27
	ctx.f7.f64 = std::fma(ctx.f9.f64, ctx.f29.f64, ctx.f27.f64);
	// fmadd f6,f8,f29,f27
	ctx.f6.f64 = std::fma(ctx.f8.f64, ctx.f29.f64, ctx.f27.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,136(r1)
	ctx.current_instruction = 0x881CB940;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f5.u64);
	// lwz r8,140(r1)
	ctx.current_instruction = 0x881CB944;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// neg r29,r8
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	ctx.current_instruction = 0x881CB950;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r5,132(r1)
	ctx.current_instruction = 0x881CB954;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// neg r30,r5
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x881cb980
	if (ctx.cr6.lt) goto loc_881CB980;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_881CB980:
	// add r10,r30,r23
	ctx.r10.u64 = ctx.r30.u64 + ctx.r23.u64;
	// stw r11,108(r1)
	ctx.current_instruction = 0x881CB984;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// add r31,r30,r21
	ctx.r31.u64 = ctx.r30.u64 + ctx.r21.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r31,100(r1)
	ctx.current_instruction = 0x881CB994;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// add r9,r29,r23
	ctx.r9.u64 = ctx.r29.u64 + ctx.r23.u64;
	// stw r8,92(r1)
	ctx.current_instruction = 0x881CB99C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// add r11,r29,r21
	ctx.r11.u64 = ctx.r29.u64 + ctx.r21.u64;
	// neg r10,r9
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x881CB9AC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x881ca338
	ctx.lr = 0x881CB9B4;
	sub_881CA338(ctx, base);
loc_881CB9B4:
	// clrlwi r10,r23,31
	ctx.r10.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881cbab0
	if (ctx.cr6.eq) goto loc_881CBAB0;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// lwz r4,112(r1)
	ctx.current_instruction = 0x881CB9C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r10,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 1;
	// lwz r3,460(r1)
	ctx.current_instruction = 0x881CB9CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// srawi r9,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 1;
	// lwz r27,436(r1)
	ctx.current_instruction = 0x881CB9D4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r7,r21,-2
	ctx.r7.s64 = ctx.r21.s64 + -2;
	// addi r8,r22,1
	ctx.r8.s64 = ctx.r22.s64 + 1;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// mullw r6,r11,r22
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r31,r6,r5
	ctx.r31.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r29,r7,r31
	ctx.r29.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r28,r8,r31
	ctx.r28.u64 = ctx.r8.u64 + ctx.r31.u64;
	// subf r30,r11,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r4,r29,r15
	ctx.r4.u64 = ctx.r29.u64 + ctx.r15.u64;
	// add r5,r28,r15
	ctx.r5.u64 = ctx.r28.u64 + ctx.r15.u64;
	// add r6,r31,r15
	ctx.r6.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r7,r31,r27
	ctx.r7.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmpw cr6,r22,r30
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r30.s32, ctx.xer);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// blt cr6,0x881cba28
	if (ctx.cr6.lt) goto loc_881CBA28;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_881CBA28:
	// stw r8,108(r1)
	ctx.current_instruction = 0x881CBA28;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r27,r10,r22
	ctx.r27.u64 = ctx.r10.u64 + ctx.r22.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// neg r26,r8
	ctx.r26.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stw r27,84(r1)
	ctx.current_instruction = 0x881CBA3C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,92(r1)
	ctx.current_instruction = 0x881CBA44;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// add r25,r9,r22
	ctx.r25.u64 = ctx.r9.u64 + ctx.r22.u64;
	// neg r24,r10
	ctx.r24.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// stw r25,100(r1)
	ctx.current_instruction = 0x881CBA54;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bl 0x881ca338
	ctx.lr = 0x881CBA60;
	sub_881CA338(ctx, base);
loc_881CBA60:
	// lwz r7,468(r1)
	ctx.current_instruction = 0x881CBA60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r11,444(r1)
	ctx.current_instruction = 0x881CBA64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r29,r17
	ctx.r4.u64 = ctx.r29.u64 + ctx.r17.u64;
	// add r3,r31,r7
	ctx.r3.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r5,r28,r17
	ctx.r5.u64 = ctx.r28.u64 + ctx.r17.u64;
	// add r6,r31,r17
	ctx.r6.u64 = ctx.r31.u64 + ctx.r17.u64;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpw cr6,r22,r30
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x881cba88
	if (!ctx.cr6.lt) goto loc_881CBA88;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_881CBA88:
	// stw r26,92(r1)
	ctx.current_instruction = 0x881CBA88;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r25,100(r1)
	ctx.current_instruction = 0x881CBA90;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// stw r27,84(r1)
	ctx.current_instruction = 0x881CBA98;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// stw r30,108(r1)
	ctx.current_instruction = 0x881CBAA0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// bl 0x881ca338
	ctx.lr = 0x881CBAA8;
	sub_881CA338(ctx, base);
loc_881CBAA8:
	// lwz r24,452(r1)
	ctx.current_instruction = 0x881CBAA8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r25,404(r1)
	ctx.current_instruction = 0x881CBAAC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_881CBAB0:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r19,r19,r21
	ctx.r19.u64 = ctx.r19.u64 + ctx.r21.u64;
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
	// b 0x881cb8cc
	goto loc_881CB8CC;
loc_881CBAC0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2c8
	ctx.lr = 0x881CBACC;
	__restfpr_25(ctx, base);
loc_881CBACC:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DD5F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DD5F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DD5F8) {
			switch (rex_dispatch_address) {
				case 0x881DD600:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DD5F8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DD600: goto loc_881DD600;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x881DD600;
	__savegprlr_20(ctx, base);
loc_881DD600:
	// lwz r11,14588(r9)
	ctx.current_instruction = 0x881DD600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// subf. r28,r7,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r10,14604(r9)
	ctx.current_instruction = 0x881DD60C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14604);
	// mullw r8,r11,r7
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r7,14608(r9)
	ctx.current_instruction = 0x881DD614;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14608);
	// lwz r29,14492(r9)
	ctx.current_instruction = 0x881DD618;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r31,14500(r9)
	ctx.current_instruction = 0x881DD61C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// srawi r27,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 2;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addze r7,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r27,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 1;
	// mullw r30,r29,r30
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// addze r29,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r29.s64 = temp.s64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addze r31,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r31.s64 = temp.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r21,r30,r3
	ctx.r21.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r22,r11,r5
	ctx.r22.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r20,r11,r6
	ctx.r20.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// ble 0x881dd6bc
	if (!ctx.cr0.gt) goto loc_881DD6BC;
	// lwz r7,14524(r9)
	ctx.current_instruction = 0x881DD66C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_881DD674:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881dd6a8
	if (!ctx.cr6.gt) goto loc_881DD6A8;
	// addi r10,r6,-2
	ctx.r10.s64 = ctx.r6.s64 + -2;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
loc_881DD688:
	// lbz r7,1(r11)
	ctx.current_instruction = 0x881DD688;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r7,2(r10)
	ctx.current_instruction = 0x881DD690;
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lbzu r7,2(r11)
	ctx.current_instruction = 0x881DD694;
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,4(r10)
	ctx.current_instruction = 0x881DD698;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lwz r7,14524(r9)
	ctx.current_instruction = 0x881DD69C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881dd688
	if (ctx.cr6.lt) goto loc_881DD688;
loc_881DD6A8:
	// lwz r11,14492(r9)
	ctx.current_instruction = 0x881DD6A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r10,14588(r9)
	ctx.current_instruction = 0x881DD6AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bdnz 0x881dd674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DD674;
loc_881DD6BC:
	// lwz r7,14496(r9)
	ctx.current_instruction = 0x881DD6BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r10,14588(r9)
	ctx.current_instruction = 0x881DD6C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// li r24,2
	ctx.r24.s64 = 2;
	// addze r23,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r23.s64 = temp.s64;
	// add r8,r7,r21
	ctx.r8.u64 = ctx.r7.u64 + ctx.r21.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// add r26,r10,r22
	ctx.r26.u64 = ctx.r10.u64 + ctx.r22.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// add r25,r10,r20
	ctx.r25.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// ble cr6,0x881dd800
	if (!ctx.cr6.gt) goto loc_881DD800;
	// addi r10,r23,-3
	ctx.r10.s64 = ctx.r23.s64 + -3;
	// lwz r6,14524(r9)
	ctx.current_instruction = 0x881DD6F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r24,r7,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881DD70C:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881dd7dc
	if (!ctx.cr6.gt) goto loc_881DD7DC;
	// addi r3,r8,-3
	ctx.r3.s64 = ctx.r8.s64 + -3;
	// subf r28,r27,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r27.u64;
	// addi r10,r27,3
	ctx.r10.s64 = ctx.r27.s64 + 3;
	// subf r31,r11,r26
	ctx.r31.u64 = ctx.r26.u64 - ctx.r11.u64;
	// subf r8,r11,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r11.u64;
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
loc_881DD730:
	// lbzx r6,r11,r31
	ctx.current_instruction = 0x881DD730;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r5,0(r11)
	ctx.current_instruction = 0x881DD738;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r30,r6,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r29,r5,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r6,r5,r29
	ctx.r6.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stbu r5,4(r3)
	ctx.current_instruction = 0x881DD758;
	ea = 4 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r3.u32 = ea;
	// lbz r6,0(r11)
	ctx.current_instruction = 0x881DD75C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r5,r11,r31
	ctx.current_instruction = 0x881DD760;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rotlwi r30,r5,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// subf r5,r5,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r5.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stb r5,-2(r10)
	ctx.current_instruction = 0x881DD778;
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r5.u8);
	// lbzx r5,r11,r8
	ctx.current_instruction = 0x881DD77C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r6,r11,r7
	ctx.current_instruction = 0x881DD780;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r30,r6,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rotlwi r29,r5,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r6,r5,r29
	ctx.r6.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// stbx r6,r28,r10
	ctx.current_instruction = 0x881DD7A0;
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r6.u8);
	// lbzx r5,r11,r7
	ctx.current_instruction = 0x881DD7A4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r6,r11,r8
	ctx.current_instruction = 0x881DD7A8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rotlwi r30,r6,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,0(r10)
	ctx.current_instruction = 0x881DD7C8;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,14524(r9)
	ctx.current_instruction = 0x881DD7D0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881dd730
	if (ctx.cr6.lt) goto loc_881DD730;
loc_881DD7DC:
	// lwz r7,14496(r9)
	ctx.current_instruction = 0x881DD7DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r10,14588(r9)
	ctx.current_instruction = 0x881DD7E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r8,r7,r27
	ctx.r8.u64 = ctx.r7.u64 + ctx.r27.u64;
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bdnz 0x881dd70c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DD70C;
loc_881DD800:
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x881dd83c
	if (!ctx.cr6.eq) goto loc_881DD83C;
	// lwz r7,14524(r9)
	ctx.current_instruction = 0x881DD808;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881dd83c
	if (!ctx.cr6.gt) goto loc_881DD83C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_881DD81C:
	// lbzx r7,r10,r11
	ctx.current_instruction = 0x881DD81C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r7,2(r8)
	ctx.current_instruction = 0x881DD820;
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r7.u8);
	// lbzx r6,r10,r5
	ctx.current_instruction = 0x881DD824;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r6,4(r8)
	ctx.current_instruction = 0x881DD82C;
	ea = 4 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r8.u32 = ea;
	// lwz r4,14524(r9)
	ctx.current_instruction = 0x881DD830;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x881dd81c
	if (ctx.cr6.lt) goto loc_881DD81C;
loc_881DD83C:
	// lwz r10,14588(r9)
	ctx.current_instruction = 0x881DD83C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// li r24,3
	ctx.r24.s64 = 3;
	// lwz r11,14492(r9)
	ctx.current_instruction = 0x881DD844;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r6,14496(r9)
	ctx.current_instruction = 0x881DD850;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r8,r22
	ctx.r11.u64 = ctx.r8.u64 + ctx.r22.u64;
	// add r7,r8,r20
	ctx.r7.u64 = ctx.r8.u64 + ctx.r20.u64;
	// add r8,r5,r21
	ctx.r8.u64 = ctx.r5.u64 + ctx.r21.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r25,r10,r7
	ctx.r25.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r27,r6,r8
	ctx.r27.u64 = ctx.r6.u64 + ctx.r8.u64;
	// ble cr6,0x881dd988
	if (!ctx.cr6.gt) goto loc_881DD988;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// lwz r6,14524(r9)
	ctx.current_instruction = 0x881DD880;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r5,3
	ctx.r24.s64 = ctx.r5.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881DD898:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881dd964
	if (!ctx.cr6.gt) goto loc_881DD964;
	// addi r3,r8,-3
	ctx.r3.s64 = ctx.r8.s64 + -3;
	// subf r28,r27,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r27.u64;
	// addi r10,r27,3
	ctx.r10.s64 = ctx.r27.s64 + 3;
	// subf r31,r11,r26
	ctx.r31.u64 = ctx.r26.u64 - ctx.r11.u64;
	// subf r8,r11,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r11.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_881DD8BC:
	// lbz r6,0(r11)
	ctx.current_instruction = 0x881DD8BC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbzx r5,r11,r31
	ctx.current_instruction = 0x881DD8C4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rotlwi r30,r6,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// stbu r6,4(r3)
	ctx.current_instruction = 0x881DD8DC;
	ea = 4 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// lbz r5,0(r11)
	ctx.current_instruction = 0x881DD8E0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r6,r11,r31
	ctx.current_instruction = 0x881DD8E4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rotlwi r30,r6,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rotlwi r29,r5,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stb r5,-2(r10)
	ctx.current_instruction = 0x881DD904;
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r5.u8);
	// lbzx r5,r11,r8
	ctx.current_instruction = 0x881DD908;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r6,r11,r7
	ctx.current_instruction = 0x881DD90C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r30,r6,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// srawi r6,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 3;
	// stbx r6,r10,r28
	ctx.current_instruction = 0x881DD924;
	REX_STORE_U8(ctx.r10.u32 + ctx.r28.u32, ctx.r6.u8);
	// lbzx r6,r11,r8
	ctx.current_instruction = 0x881DD928;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbzx r6,r11,r7
	ctx.current_instruction = 0x881DD934;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rotlwi r30,r6,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stb r5,0(r10)
	ctx.current_instruction = 0x881DD950;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,14524(r9)
	ctx.current_instruction = 0x881DD958;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881dd8bc
	if (ctx.cr6.lt) goto loc_881DD8BC;
loc_881DD964:
	// lwz r5,14496(r9)
	ctx.current_instruction = 0x881DD964;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r10,14588(r9)
	ctx.current_instruction = 0x881DD96C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// add r8,r5,r27
	ctx.r8.u64 = ctx.r5.u64 + ctx.r27.u64;
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r5,r8
	ctx.r27.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bdnz 0x881dd898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DD898;
loc_881DD988:
	// lwz r6,14524(r9)
	ctx.current_instruction = 0x881DD988;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881dd9e8
	if (!ctx.cr6.gt) goto loc_881DD9E8;
	// addi r10,r8,3
	ctx.r10.s64 = ctx.r8.s64 + 3;
	// subf r4,r8,r27
	ctx.r4.u64 = ctx.r27.u64 - ctx.r8.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
loc_881DD9A4:
	// lbz r8,0(r11)
	ctx.current_instruction = 0x881DD9A4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// stb r8,-2(r10)
	ctx.current_instruction = 0x881DD9AC;
	REX_STORE_U8(ctx.r10.u32 + -2, ctx.r8.u8);
	// lbzx r6,r11,r7
	ctx.current_instruction = 0x881DD9B0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stb r6,0(r10)
	ctx.current_instruction = 0x881DD9B4;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// bne cr6,0x881dd9d0
	if (!ctx.cr6.eq) goto loc_881DD9D0;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stb r6,-2(r8)
	ctx.current_instruction = 0x881DD9C4;
	REX_STORE_U8(ctx.r8.u32 + -2, ctx.r6.u8);
	// lbz r3,0(r10)
	ctx.current_instruction = 0x881DD9C8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r3,r4,r10
	ctx.current_instruction = 0x881DD9CC;
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r3.u8);
loc_881DD9D0:
	// lwz r6,14524(r9)
	ctx.current_instruction = 0x881DD9D0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881dd9a4
	if (ctx.cr6.lt) goto loc_881DD9A4;
loc_881DD9E8:
	// lwz r8,14588(r9)
	ctx.current_instruction = 0x881DD9E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,14492(r9)
	ctx.current_instruction = 0x881DD9F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// add r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 + ctx.r21.u64;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r10,r22
	ctx.r6.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r5,r10,r20
	ctx.r5.u64 = ctx.r10.u64 + ctx.r20.u64;
	// ble cr6,0x881dda5c
	if (!ctx.cr6.gt) goto loc_881DDA5C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r21,-1
	ctx.r10.s64 = ctx.r21.s64 + -1;
	// subf r3,r22,r20
	ctx.r3.u64 = ctx.r20.u64 - ctx.r22.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_881DDA28:
	// lbz r4,0(r11)
	ctx.current_instruction = 0x881DDA28;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r4,2(r10)
	ctx.current_instruction = 0x881DDA30;
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// lbzx r4,r3,r11
	ctx.current_instruction = 0x881DDA34;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r4,4(r10)
	ctx.current_instruction = 0x881DDA3C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r10.u32 = ea;
	// lbzu r4,1(r6)
	ctx.current_instruction = 0x881DDA40;
	ea = 1 + ctx.r6.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// stb r4,2(r8)
	ctx.current_instruction = 0x881DDA44;
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// lbzu r4,1(r5)
	ctx.current_instruction = 0x881DDA48;
	ea = 1 + ctx.r5.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stbu r4,4(r8)
	ctx.current_instruction = 0x881DDA4C;
	ea = 4 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r8.u32 = ea;
	// lwz r4,14524(r9)
	ctx.current_instruction = 0x881DDA50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x881dda28
	if (ctx.cr6.lt) goto loc_881DDA28;
loc_881DDA5C:
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E7A90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E7A90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E7A90) {
			switch (rex_dispatch_address) {
				case 0x881E7A98:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E7A90;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E7A98: goto loc_881E7A98;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881E7A98;
	__savegprlr_22(ctx, base);
loc_881E7A98:
	// stwu r1,-1024(r1)
	ctx.current_instruction = 0x881E7A98;
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisb v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_set1_epi8(char(0xFF)));
	// clrlwi r26,r8,30
	ctx.r26.u64 = ctx.r8.u32 & 0x3;
	// vspltisb v10,15
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_set1_epi8(char(0xF)));
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// vspltish v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// vspltish v7,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x3)));
	// vslb v9,v8,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// vspltish v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x2)));
	// vslb v29,v10,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v10,5
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x5)));
	// vor v30,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vavgsh v28,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vspltish v8,6
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x6)));
	// vsubuhm v27,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// bne cr6,0x881e8000
	if (!ctx.cr6.eq) goto loc_881E8000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881e7b38
	if (!ctx.cr6.eq) goto loc_881E7B38;
	// lwz r10,1116(r1)
	ctx.current_instruction = 0x881E7AEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881e8d70
	if (!ctx.cr6.gt) goto loc_881E8D70;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
loc_881E7B08:
	// lvrx128 v63,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lvlx128 v62,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stvlx128 v61,r6,r10
	ctx.current_instruction = 0x881E7B20;
	ea = ctx.r6.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stvrx128 v61,r6,r8
	ctx.current_instruction = 0x881E7B28;
	ea = ctx.r6.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// bdnz 0x881e7b08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7B08;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881E7B38:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x881e7e54
	if (ctx.cr6.eq) goto loc_881E7E54;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x881e7cfc
	if (ctx.cr6.eq) goto loc_881E7CFC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x881e8d70
	if (!ctx.cr6.eq) goto loc_881E8D70;
	// lwz r11,1108(r1)
	ctx.current_instruction = 0x881E7B50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881e7b68
	if (ctx.cr6.eq) goto loc_881E7B68;
	// vspltish v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// b 0x881e7b70
	goto loc_881E7B70;
loc_881E7B68:
	// vspltish v9,-5
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v1,v9,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
loc_881E7B70:
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r8,1116(r1)
	ctx.current_instruction = 0x881E7B74;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1116);
	// li r11,16
	ctx.r11.s64 = 16;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,16
	ctx.r3.s64 = ctx.r1.s64 + 16;
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// lvrx128 v59,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r30,r1,32
	ctx.r30.s64 = ctx.r1.s64 + 32;
	// vor128 v9,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v58,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v57,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// addi r28,r1,48
	ctx.r28.s64 = ctx.r1.s64 + 48;
	// vmrghb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// vmrglb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v9,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v56,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v9,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// stvx128 v7,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v5,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v4,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x881e8d70
	if (!ctx.cr6.gt) goto loc_881E8D70;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
loc_881E7C08:
	// addi r3,r1,48
	ctx.r3.s64 = ctx.r1.s64 + 48;
	// lvrx128 v54,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lvlx128 v53,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,32
	ctx.r31.s64 = ctx.r1.s64 + 32;
	// vor128 v6,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// addi r30,r1,336
	ctx.r30.s64 = ctx.r1.s64 + 336;
	// addi r29,r1,16
	ctx.r29.s64 = ctx.r1.s64 + 16;
	// lvx128 v7,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,64
	ctx.r3.s64 = ctx.r1.s64 + 64;
	// lvx128 v9,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lvx128 v5,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v7,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v4,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v7
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v3,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v2,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v27,v3
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v19,v29,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// stvx128 v7,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v17,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// stvx128 v6,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vadduhm v18,v28,v1
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vslh v16,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v14,v22,v1
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v9,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v4,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v6,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v5,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v2,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v31,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v29,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubuhm v27,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsubuhm v26,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
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
	// vpkshus128 v52,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// stvlx128 v52,r0,r6
	ctx.current_instruction = 0x881E7CE4;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvrx128 v52,r6,r11
	ctx.current_instruction = 0x881E7CE8;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x881e7c08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7C08;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881E7CFC:
	// lwz r11,1108(r1)
	ctx.current_instruction = 0x881E7CFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1108);
	// vspltish v8,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881e7d10
	if (!ctx.cr6.eq) goto loc_881E7D10;
	// vspltish v8,7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x7)));
loc_881E7D10:
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r8,1116(r1)
	ctx.current_instruction = 0x881E7D14;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1116);
	// li r11,16
	ctx.r11.s64 = 16;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,16
	ctx.r3.s64 = ctx.r1.s64 + 16;
	// lvlx128 v51,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// lvrx128 v50,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r30,r1,32
	ctx.r30.s64 = ctx.r1.s64 + 32;
	// vor128 v12,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v48,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// addi r28,r1,48
	ctx.r28.s64 = ctx.r1.s64 + 48;
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// vmrglb v10,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvlx128 v46,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v9,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// stvx128 v11,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v9,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v7,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x881e8d70
	if (!ctx.cr6.gt) goto loc_881E8D70;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
loc_881E7DA8:
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// lvrx128 v45,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v44,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,48
	ctx.r3.s64 = ctx.r1.s64 + 48;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vor128 v12,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// addi r31,r1,32
	ctx.r31.s64 = ctx.r1.s64 + 32;
	// addi r30,r1,16
	ctx.r30.s64 = ctx.r1.s64 + 16;
	// addi r29,r1,320
	ctx.r29.s64 = ctx.r1.s64 + 320;
	// lvx128 v10,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v9,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,64
	ctx.r3.s64 = ctx.r1.s64 + 64;
	// lvx128 v6,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v10,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v9,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v5,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v3,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v2,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vslh v1,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v11,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v9,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v12,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v29,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vsubuhm v28,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v27,v1,v10
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v26,v31,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v25,v27,v29
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v24,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsrah v23,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v43,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// stvlx128 v43,r0,r6
	ctx.current_instruction = 0x881E7E3C;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvrx128 v43,r6,r11
	ctx.current_instruction = 0x881E7E40;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v43.u8[i]);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x881e7da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7DA8;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881E7E54:
	// lwz r11,1108(r1)
	ctx.current_instruction = 0x881E7E54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881e7e6c
	if (ctx.cr6.eq) goto loc_881E7E6C;
	// vspltish v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v2,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// b 0x881e7e74
	goto loc_881E7E74;
loc_881E7E6C:
	// vspltish v9,-5
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v2,v9,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
loc_881E7E74:
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r8,1116(r1)
	ctx.current_instruction = 0x881E7E78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1116);
	// li r11,16
	ctx.r11.s64 = 16;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,16
	ctx.r3.s64 = ctx.r1.s64 + 16;
	// lvlx128 v42,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// lvrx128 v41,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r30,r1,32
	ctx.r30.s64 = ctx.r1.s64 + 32;
	// vor128 v9,v42,v41
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// lvrx128 v40,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v39,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// addi r28,r1,48
	ctx.r28.s64 = ctx.r1.s64 + 48;
	// vmrghb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// vmrglb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v9,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// lvrx128 v38,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvlx128 v37,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v9,v37,v38
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// stvx128 v7,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v5,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v4,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x881e8d70
	if (!ctx.cr6.gt) goto loc_881E8D70;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
loc_881E7F0C:
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lvrx128 v36,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,32
	ctx.r3.s64 = ctx.r1.s64 + 32;
	// lvlx128 v35,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,48
	ctx.r31.s64 = ctx.r1.s64 + 48;
	// vor128 v5,v35,v36
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// addi r30,r1,352
	ctx.r30.s64 = ctx.r1.s64 + 352;
	// addi r29,r1,16
	ctx.r29.s64 = ctx.r1.s64 + 16;
	// lvx128 v9,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lvx128 v7,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v4,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v1,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// addi r3,r1,64
	ctx.r3.s64 = ctx.r1.s64 + 64;
	// vadduhm v27,v31,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvx128 v28,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v7,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v26,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vslh v24,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v6,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v5,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v18,v29,v27
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vadduhm v20,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v19,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v16,v24,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v15,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v9,v21,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v7,v28,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v3,v26,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v5,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v4,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v1,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v31,v9,v14
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vslh v30,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v28,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubuhm v26,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsubuhm v25,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsrah v24,v26,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v25,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v34,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvlx128 v34,r0,r6
	ctx.current_instruction = 0x881E7FE8;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvrx128 v34,r6,r11
	ctx.current_instruction = 0x881E7FEC;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v34.u8[i]);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x881e7f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7F0C;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881E8000:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881e8344
	if (!ctx.cr6.eq) goto loc_881E8344;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x881e821c
	if (ctx.cr6.eq) goto loc_881E821C;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x881e8148
	if (ctx.cr6.eq) goto loc_881E8148;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x881e8d70
	if (!ctx.cr6.eq) goto loc_881E8D70;
	// lwz r11,1108(r1)
	ctx.current_instruction = 0x881E8020;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881e8038
	if (ctx.cr6.eq) goto loc_881E8038;
	// vspltish v9,-5
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v1,v9,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// b 0x881e8040
	goto loc_881E8040;
loc_881E8038:
	// vspltish v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
loc_881E8040:
	// lwz r8,1116(r1)
	ctx.current_instruction = 0x881E8040;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1116);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881e8d70
	if (!ctx.cr6.gt) goto loc_881E8D70;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_881E8060:
	// lvrx128 v33,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvrx128 v63,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrghb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi128 v7,v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v6,v9,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 15));
	// vsldoi128 v5,v9,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 13));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v31,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v7,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v24,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v22,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v27,v3
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v18,v24,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v16,v28,v25
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vslh v19,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v26,v1
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v9,v21,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v7,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v6,v4,v31
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v5,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v4,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v3,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v2,v9,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vslh v31,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v29,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubuhm v27,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsubuhm v26,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
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
	// vpkshus128 v60,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// stvlx128 v60,r0,r6
	ctx.current_instruction = 0x881E8130;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r6,r11
	ctx.current_instruction = 0x881E8134;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x881e8060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E8060;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881E8148:
	// lwz r11,1108(r1)
	ctx.current_instruction = 0x881E8148;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1108);
	// vspltish v9,7
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x7)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881e815c
	if (!ctx.cr6.eq) goto loc_881E815C;
	// vspltish v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x8)));
loc_881E815C:
	// lwz r8,1116(r1)
	ctx.current_instruction = 0x881E815C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1116);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881e8d70
	if (!ctx.cr6.gt) goto loc_881E8D70;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_881E817C:
	// lvrx128 v59,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v58,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvrx128 v57,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvlx128 v56,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vor128 v55,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vmrghb v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi128 v11,v12,v55,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 15));
	// vsldoi128 v10,v12,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 14));
	// vsldoi128 v12,v12,v55,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 13));
	// vmrghb v6,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v12,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v11,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v10,v8,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v8,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vslh v7,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v5,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v4,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v3,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v2,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v1,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v31,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v29,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v54,v29,v28
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// stvlx128 v54,r0,r6
	ctx.current_instruction = 0x881E8204;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvrx128 v54,r6,r11
	ctx.current_instruction = 0x881E8208;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x881e817c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E817C;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881E821C:
	// lwz r11,1108(r1)
	ctx.current_instruction = 0x881E821C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881e8234
	if (ctx.cr6.eq) goto loc_881E8234;
	// vspltish v9,-5
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v2,v9,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// b 0x881e823c
	goto loc_881E823C;
loc_881E8234:
	// vspltish v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v2,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
loc_881E823C:
	// lwz r8,1116(r1)
	ctx.current_instruction = 0x881E823C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1116);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881e8d70
	if (!ctx.cr6.gt) goto loc_881E8D70;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_881E825C:
	// lvrx128 v53,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvrx128 v51,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v50,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vor128 v49,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vmrghb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi128 v7,v9,v49,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 15));
	// vsldoi128 v6,v9,v49,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 14));
	// vsldoi128 v5,v9,v49,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 13));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v3,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v7,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v24,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v22,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v28,v25
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v20,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v19,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v24,v3
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vslh v17,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v26,v2
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v14,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v9,v21,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v6,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v7,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v5,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v4,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v3,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v1,v9,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vslh v31,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v29,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubuhm v27,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsubuhm v26,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
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
	// vpkshus128 v48,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// stvlx128 v48,r0,r6
	ctx.current_instruction = 0x881E832C;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r6,r11
	ctx.current_instruction = 0x881E8330;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x881e825c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E825C;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881E8344:
	// lwz r25,1108(r1)
	ctx.current_instruction = 0x881E8344;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1108);
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x881e8398
	if (ctx.cr6.eq) goto loc_881E8398;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881e837c
	if (ctx.cr6.eq) goto loc_881E837C;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881e8374
	if (ctx.cr6.eq) goto loc_881E8374;
	// vspltish v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x8)));
	// vadduhm v9,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// b 0x881e83d0
	goto loc_881E83D0;
loc_881E8374:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881e8390
	if (!ctx.cr6.eq) goto loc_881E8390;
loc_881E837C:
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881e8390
	if (!ctx.cr6.eq) goto loc_881E8390;
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// b 0x881e83d0
	goto loc_881E83D0;
loc_881E8390:
	// vor v9,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// b 0x881e83d0
	goto loc_881E83D0;
loc_881E8398:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881e83bc
	if (ctx.cr6.eq) goto loc_881E83BC;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881e83b4
	if (ctx.cr6.eq) goto loc_881E83B4;
	// vspltish v9,15
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xF)));
	// b 0x881e83d0
	goto loc_881E83D0;
loc_881E83B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881e83cc
	if (!ctx.cr6.eq) goto loc_881E83CC;
loc_881E83BC:
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// vspltish v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x0)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881e83d0
	if (ctx.cr6.eq) goto loc_881E83D0;
loc_881E83CC:
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
loc_881E83D0:
	// lwz r27,1116(r1)
	ctx.current_instruction = 0x881E83D0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1116);
	// li r11,16
	ctx.r11.s64 = 16;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x881e8844
	if (ctx.cr6.eq) goto loc_881E8844;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x881e8650
	if (ctx.cr6.eq) goto loc_881E8650;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x881e8aa0
	if (!ctx.cr6.eq) goto loc_881E8AA0;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r3,r1,16
	ctx.r3.s64 = ctx.r1.s64 + 16;
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r30,r1,640
	ctx.r30.s64 = ctx.r1.s64 + 640;
	// lvlx128 v46,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvrx128 v45,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// vor128 v6,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// addi r29,r1,32
	ctx.r29.s64 = ctx.r1.s64 + 32;
	// addi r28,r1,48
	ctx.r28.s64 = ctx.r1.s64 + 48;
	// lvrx128 v43,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v42,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvrx128 v41,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrglb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v40,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// vor128 v8,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v2,v40,v41
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// addi r24,r1,352
	ctx.r24.s64 = ctx.r1.s64 + 352;
	// lvrx128 v39,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r23,r1,656
	ctx.r23.s64 = ctx.r1.s64 + 656;
	// lvlx128 v38,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lvrx128 v37,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v36,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v31,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vmrghb v26,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v25,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// stvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v4,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stvx128 v3,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v24,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v23,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v1,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v22,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v31,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x881e8aa0
	if (!ctx.cr6.gt) goto loc_881E8AA0;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r1,368
	ctx.r29.s64 = ctx.r1.s64 + 368;
loc_881E84DC:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lvlx128 v35,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v34,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r1,656
	ctx.r31.s64 = ctx.r1.s64 + 656;
	// vor128 v5,v35,v34
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// addi r30,r1,336
	ctx.r30.s64 = ctx.r1.s64 + 336;
	// addi r28,r1,640
	ctx.r28.s64 = ctx.r1.s64 + 640;
	// lvrx128 v33,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r4,r1,64
	ctx.r4.s64 = ctx.r1.s64 + 64;
	// lvlx128 v32,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v8,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lvx128 v6,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r31,r1,624
	ctx.r31.s64 = ctx.r1.s64 + 624;
	// vslh v31,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v4,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lvx128 v3,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v1,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// addi r28,r1,32
	ctx.r28.s64 = ctx.r1.s64 + 32;
	// vslh v26,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r30,r1,16
	ctx.r30.s64 = ctx.r1.s64 + 16;
	// vslh v24,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v2,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v5,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// lvx128 v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v31,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// lvx128 v31,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r24,r1,48
	ctx.r24.s64 = ctx.r1.s64 + 48;
	// vslh v23,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// vslh v21,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// lvx128 v6,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v17,v26,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// addi r28,r1,672
	ctx.r28.s64 = ctx.r1.s64 + 672;
	// vadduhm v26,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// lvx128 v8,r10,r24
	ea = (ctx.r10.u32 + ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v15,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vadduhm v14,v19,v31
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vadduhm v25,v20,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v2,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v5,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v4,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v24,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v21,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v23,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v22,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v20,v3,v14
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v19,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// lvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vslh v15,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v5,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v3,v16,v18
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v2,v4,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubuhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v31,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v26,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v25,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v24,v1,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v23,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v25,v31
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// stvx128 v24,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v20,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v19,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vslh v18,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v16,v18,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v15,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v14,v15,v21
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vsubuhm v8,v14,v22
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vsrah v6,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v6,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x881e84dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E84DC;
	// b 0x881e8aa0
	goto loc_881E8AA0;
loc_881E8650:
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r3,r1,16
	ctx.r3.s64 = ctx.r1.s64 + 16;
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// lvrx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r30,r1,640
	ctx.r30.s64 = ctx.r1.s64 + 640;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvrx128 v61,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// vor128 v7,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r29,r1,32
	ctx.r29.s64 = ctx.r1.s64 + 32;
	// addi r28,r1,48
	ctx.r28.s64 = ctx.r1.s64 + 48;
	// lvrx128 v59,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v58,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvrx128 v57,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrglb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// vor128 v8,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vmrghb v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v3,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// addi r24,r1,352
	ctx.r24.s64 = ctx.r1.s64 + 352;
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r23,r1,656
	ctx.r23.s64 = ctx.r1.s64 + 656;
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lvrx128 v53,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v2,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v52,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmrghb v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v26,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// stvx128 v6,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stvx128 v4,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v25,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v24,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v2,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v23,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v1,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x881e8aa0
	if (!ctx.cr6.gt) goto loc_881E8AA0;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r28,r1,368
	ctx.r28.s64 = ctx.r1.s64 + 368;
loc_881E873C:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lvlx128 v51,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r29,r1,656
	ctx.r29.s64 = ctx.r1.s64 + 656;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vor128 v7,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvrx128 v49,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r24,r1,640
	ctx.r24.s64 = ctx.r1.s64 + 640;
	// lvlx128 v48,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r23,r1,48
	ctx.r23.s64 = ctx.r1.s64 + 48;
	// addi r22,r1,32
	ctx.r22.s64 = ctx.r1.s64 + 32;
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// addi r31,r1,320
	ctx.r31.s64 = ctx.r1.s64 + 320;
	// vmrghb v3,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r30,r1,624
	ctx.r30.s64 = ctx.r1.s64 + 624;
	// lvx128 v2,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lvx128 v31,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r29,r1,16
	ctx.r29.s64 = ctx.r1.s64 + 16;
	// lvx128 v26,r10,r24
	ea = (ctx.r10.u32 + ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r10,r23
	ea = (ctx.r10.u32 + ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v24,r10,r22
	ea = (ctx.r10.u32 + ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v2,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v6,v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v5,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// addi r4,r1,64
	ctx.r4.s64 = ctx.r1.s64 + 64;
	// vor v18,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v23,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v21,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,672
	ctx.r24.s64 = ctx.r1.s64 + 672;
	// vslh v17,v4,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v7,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v20,v23,v7
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// vadduhm v19,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vslh v16,v6,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v3,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v15,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v8,r10,r24
	ea = (ctx.r10.u32 + ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v14,v21,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vadduhm v7,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vsubuhm v8,v9,v20
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubuhm v4,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v3,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v2,v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsubuhm v1,v9,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v31,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v26,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v25,v2,v1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsrah v24,v31,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v26,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v25,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v24,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x881e873c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E873C;
	// b 0x881e8aa0
	goto loc_881E8AA0;
loc_881E8844:
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r3,r1,16
	ctx.r3.s64 = ctx.r1.s64 + 16;
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r30,r1,640
	ctx.r30.s64 = ctx.r1.s64 + 640;
	// lvlx128 v46,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvrx128 v45,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// vor128 v6,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// addi r29,r1,32
	ctx.r29.s64 = ctx.r1.s64 + 32;
	// addi r28,r1,48
	ctx.r28.s64 = ctx.r1.s64 + 48;
	// lvrx128 v43,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v42,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvrx128 v41,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrglb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v40,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// vor128 v8,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v2,v40,v41
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// addi r24,r1,352
	ctx.r24.s64 = ctx.r1.s64 + 352;
	// lvrx128 v39,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r23,r1,656
	ctx.r23.s64 = ctx.r1.s64 + 656;
	// lvlx128 v38,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lvrx128 v37,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v36,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v31,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vmrghb v26,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v25,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// stvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v4,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stvx128 v3,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v24,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v23,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v1,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v22,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v31,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x881e8aa0
	if (!ctx.cr6.gt) goto loc_881E8AA0;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r1,368
	ctx.r29.s64 = ctx.r1.s64 + 368;
loc_881E8930:
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lvlx128 v35,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v34,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// vor128 v5,v35,v34
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// lvrx128 v33,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,352
	ctx.r31.s64 = ctx.r1.s64 + 352;
	// addi r30,r1,656
	ctx.r30.s64 = ctx.r1.s64 + 656;
	// vor128 v4,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// lvx128 v8,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,64
	ctx.r4.s64 = ctx.r1.s64 + 64;
	// lvx128 v6,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v26,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v3,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v24,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v31,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// addi r31,r1,624
	ctx.r31.s64 = ctx.r1.s64 + 624;
	// vslh v23,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v26,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vslh v20,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r28,r1,48
	ctx.r28.s64 = ctx.r1.s64 + 48;
	// vslh v19,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// vslh v17,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r30,r1,16
	ctx.r30.s64 = ctx.r1.s64 + 16;
	// vadduhm v14,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// addi r24,r1,32
	ctx.r24.s64 = ctx.r1.s64 + 32;
	// vslh v15,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v18,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v1,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v6,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v24,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// lvx128 v16,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v3,v19,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// addi r28,r1,672
	ctx.r28.s64 = ctx.r1.s64 + 672;
	// vadduhm v31,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// vadduhm v23,v20,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v5,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v8,r10,r24
	ea = (ctx.r10.u32 + ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v18,v5
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vadduhm v20,v1,v14
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// stvx128 v4,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v16,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// lvx128 v25,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v15,v3
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vadduhm v18,v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v16,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// lvx128 v5,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v14,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v3,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v2,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v1,v25,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsubuhm v31,v4,v14
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v26,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v25,v2,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v24,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v23,v31,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v22,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v20,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// stvx128 v23,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v18,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vslh v17,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v15,v17,v9
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v14,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v8,v14,v20
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubuhm v6,v8,v21
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vsrah v5,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v5,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x881e8930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E8930;
loc_881E8AA0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// vor v7,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v27.u8));
	// bne cr6,0x881e8ab0
	if (!ctx.cr6.eq) goto loc_881E8AB0;
	// vor v7,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
loc_881E8AB0:
	// vspltish v6,7
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x7)));
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x881e8c74
	if (ctx.cr6.eq) goto loc_881E8C74;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x881e8bd8
	if (ctx.cr6.eq) goto loc_881E8BD8;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bne cr6,0x881e8d70
	if (!ctx.cr6.eq) goto loc_881E8D70;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881e8d70
	if (!ctx.cr6.gt) goto loc_881E8D70;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// addi r8,r1,624
	ctx.r8.s64 = ctx.r1.s64 + 624;
	// addi r5,r1,16
	ctx.r5.s64 = ctx.r1.s64 + 16;
loc_881E8AE8:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v31,v0,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v63,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v30,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsldoi v8,v9,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vsldoi128 v5,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi v4,v9,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi v2,v9,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vsrah v8,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsldoi128 v3,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsrah v9,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsldoi128 v1,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsrah v0,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor v4,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsrah v5,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v28,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
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
	// vslh v25,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v28,v8
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v24,v27,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v3,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// vslh v22,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v18,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v16,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v9,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v25,v24
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v17,v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v2,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v14,v23,v7
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v8,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v1,v19,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v5,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v31,v3,v18
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v28,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v27,v4,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v26,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v25,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vslh v24,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vslh v22,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsubuhm v20,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsubuhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vsrah v18,v20,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v19,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshss v16,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v16.s8, simde_mm_packs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vaddubm v15,v16,v29
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// stvlx v15,0,r6
	ctx.current_instruction = 0x881E8BC0;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// stvrx v15,r6,r11
	ctx.current_instruction = 0x881E8BC4;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v15.u8[i]);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x881e8ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E8AE8;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881E8BD8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881e8d70
	if (!ctx.cr6.gt) goto loc_881E8D70;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// addi r8,r1,624
	ctx.r8.s64 = ctx.r1.s64 + 624;
	// addi r5,r1,16
	ctx.r5.s64 = ctx.r1.s64 + 16;
loc_881E8BF4:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vsldoi v11,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi v12,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi128 v10,v0,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vsldoi128 v9,v0,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vsldoi128 v8,v0,v62,6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 10));
	// vadduhm v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vsldoi v5,v13,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v11,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v3,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v2,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v31,v7,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsubuhm v28,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v27,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v25,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v24,v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsrah v23,v25,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v24,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshss v21,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v21.s8, simde_mm_packs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddubm v20,v21,v29
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// stvlx v20,0,r6
	ctx.current_instruction = 0x881E8C5C;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvrx v20,r6,r11
	ctx.current_instruction = 0x881E8C60;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v20.u8[i]);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x881e8bf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E8BF4;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881E8C74:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881e8d70
	if (!ctx.cr6.gt) goto loc_881E8D70;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// addi r8,r1,624
	ctx.r8.s64 = ctx.r1.s64 + 624;
	// addi r5,r1,16
	ctx.r5.s64 = ctx.r1.s64 + 16;
loc_881E8C90:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v2,v0,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v61,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsldoi v31,v9,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vsldoi128 v30,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi v28,v9,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vsldoi v27,v9,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsrah v8,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsldoi128 v26,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsrah v9,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsldoi128 v25,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vsrah v4,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v0,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v17,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v16,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v3,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v22,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v14,v22,v3
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v28,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v5,v19,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v31,v18,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vslh v30,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v15,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v25,v9,v14
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v24,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v26,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v23,v1,v4
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v21,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vslh v20,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vslh v18,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vsubuhm v16,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsubuhm v15,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v14,v16,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v0,v15,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshss v9,v0,v14
	simde_mm_store_si128((simde__m128i*)ctx.v9.s8, simde_mm_packs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddubm v8,v9,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// stvlx v8,0,r6
	ctx.current_instruction = 0x881E8D60;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r6,r11
	ctx.current_instruction = 0x881E8D64;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x881e8c90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E8C90;
loc_881E8D70:
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

