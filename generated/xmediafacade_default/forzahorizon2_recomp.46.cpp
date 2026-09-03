#include "forzahorizon2_funcs.46.h"

DEFINE_REX_FUNC(sub_880503E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880503E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880503E8) {
			switch (rex_dispatch_address) {
				case 0x880503F0:
				case 0x88050440:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880503E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880503F0: goto loc_880503F0;
		case 0x88050440: goto loc_88050440;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880503F0;
	__savegprlr_24(ctx, base);
loc_880503F0:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x880503F0;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r1)
	ctx.current_instruction = 0x880503F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r31,364(r1)
	ctx.current_instruction = 0x880503F8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r30,356(r1)
	ctx.current_instruction = 0x880503FC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r29,348(r1)
	ctx.current_instruction = 0x88050400;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lbz r28,343(r1)
	ctx.current_instruction = 0x88050404;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r1.u32 + 343);
	// lwz r27,332(r1)
	ctx.current_instruction = 0x88050408;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lbz r26,327(r1)
	ctx.current_instruction = 0x8805040C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 327);
	// lbz r25,319(r1)
	ctx.current_instruction = 0x88050410;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 319);
	// ld r24,304(r1)
	ctx.current_instruction = 0x88050414;
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
	// stw r11,148(r1)
	ctx.current_instruction = 0x88050418;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r31,140(r1)
	ctx.current_instruction = 0x8805041C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r30,132(r1)
	ctx.current_instruction = 0x88050420;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r29,124(r1)
	ctx.current_instruction = 0x88050424;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stb r28,119(r1)
	ctx.current_instruction = 0x88050428;
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r28.u8);
	// stw r27,108(r1)
	ctx.current_instruction = 0x8805042C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stb r26,103(r1)
	ctx.current_instruction = 0x88050430;
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r26.u8);
	// stb r25,95(r1)
	ctx.current_instruction = 0x88050434;
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r25.u8);
	// std r24,80(r1)
	ctx.current_instruction = 0x88050438;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// bl 0x88056a60
	ctx.lr = 0x88050440;
	sub_88056A60(ctx, base);
loc_88050440:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880523C8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880523C8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880523C8;
	ctx.current_instruction = 0x880523C8;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// stw r3,18324(r11)
	ctx.current_instruction = 0x880523CC;
	REX_STORE_U32(ctx.r11.u32 + 18324, ctx.r3.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88052658) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88052658);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052658;
	ctx.current_instruction = 0x88052658;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,816
	ctx.r11.s64 = ctx.r11.s64 + 816;
	// lwz r11,200(r11)
	ctx.current_instruction = 0x88052664;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.current_instruction = 0x88052668;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88053008) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88053008;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88053008) {
			switch (rex_dispatch_address) {
				case 0x88053010:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88053008;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88053010: goto loc_88053010;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88053010;
	__savegprlr_19(ctx, base);
loc_88053010:
	// lhz r9,0(r3)
	ctx.current_instruction = 0x88053010;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// lhz r8,10(r3)
	ctx.current_instruction = 0x88053018;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.current_instruction = 0x88053024;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r6,6(r3)
	ctx.current_instruction = 0x88053028;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 6);
	// addi r20,r10,2036
	ctx.r20.s64 = ctx.r10.s64 + 2036;
	// addi r30,r11,-16383
	ctx.r30.s64 = ctx.r11.s64 + -16383;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	ctx.current_instruction = 0x8805303C;
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r30,-16383
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -16383, ctx.xer);
	// lwz r21,12(r20)
	ctx.current_instruction = 0x88053044;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r20.u32 + 12);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	ctx.current_instruction = 0x8805304C;
	REX_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,-144(r1)
	ctx.current_instruction = 0x88053054;
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// bne cr6,0x88053098
	if (!ctx.cr6.eq) goto loc_88053098;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88053060:
	// lwz r9,0(r10)
	ctx.current_instruction = 0x88053060;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88053080
	if (!ctx.cr6.eq) goto loc_88053080;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x88053060
	if (ctx.cr6.lt) goto loc_88053060;
	// b 0x880536cc
	goto loc_880536CC;
loc_88053080:
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	ctx.current_instruction = 0x88053088;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	ctx.current_instruction = 0x8805308C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	ctx.current_instruction = 0x88053090;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x880536d0
	goto loc_880536D0;
loc_88053098:
	// lwz r25,8(r20)
	ctx.current_instruction = 0x88053098;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.current_instruction = 0x880530A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,-152
	ctx.r28.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	ctx.r26.s64 = ctx.r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.current_instruction = 0x880530AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.current_instruction = 0x880530B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// li r22,-1
	ctx.r22.s64 = -1;
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// stw r9,0(r8)
	ctx.current_instruction = 0x880530C4;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	ctx.current_instruction = 0x880530C8;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// stw r10,8(r8)
	ctx.current_instruction = 0x880530D4;
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r27,r28
	ctx.current_instruction = 0x880530EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r29.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880531e4
	if (ctx.cr0.eq) goto loc_880531E4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.current_instruction = 0x8805310C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88053150
	if (!ctx.cr0.eq) goto loc_88053150;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x880531e4
	if (!ctx.cr6.lt) goto loc_880531E4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_88053130:
	// lwz r9,0(r10)
	ctx.current_instruction = 0x88053130;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88053150
	if (!ctx.cr6.eq) goto loc_88053150;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x88053130
	if (ctx.cr6.lt) goto loc_88053130;
	// b 0x880531e4
	goto loc_880531E4;
loc_88053150:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.current_instruction = 0x88053174;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88053194
	if (ctx.cr6.lt) goto loc_88053194;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x88053198
	if (!ctx.cr6.lt) goto loc_88053198;
loc_88053194:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_88053198:
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r7,r8
	ctx.current_instruction = 0x8805319C;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x880531e4
	if (ctx.cr0.lt) goto loc_880531E4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_880531B0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880531e4
	if (ctx.cr6.eq) goto loc_880531E4;
	// lwz r9,-4(r10)
	ctx.current_instruction = 0x880531B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880531d4
	if (ctx.cr6.lt) goto loc_880531D4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x880531d8
	if (!ctx.cr6.lt) goto loc_880531D8;
loc_880531D4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_880531D8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ctx.current_instruction = 0x880531DC;
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x880531b0
	if (!ctx.cr0.lt) goto loc_880531B0;
loc_880531E4:
	// lwzx r10,r27,r28
	ctx.current_instruction = 0x880531E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r27,r28
	ctx.current_instruction = 0x880531F8;
	REX_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r10.u32);
	// bge cr6,0x8805322c
	if (!ctx.cr6.lt) goto loc_8805322C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805322c
	if (ctx.cr6.eq) goto loc_8805322C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88053224:
	// stwu r9,4(r10)
	ctx.current_instruction = 0x88053224;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88053224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053224;
loc_8805322C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x88053238
	if (ctx.cr6.eq) goto loc_88053238;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_88053238:
	// lwz r11,4(r20)
	ctx.current_instruction = 0x88053238;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r25.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88053264
	if (!ctx.cr6.lt) goto loc_88053264;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	ctx.current_instruction = 0x88053254;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	ctx.current_instruction = 0x88053258;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	ctx.current_instruction = 0x8805325C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x880536d0
	goto loc_880536D0;
loc_88053264:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x8805354c
	if (ctx.cr6.gt) goto loc_8805354C;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
	// addi r9,r1,-136
	ctx.r9.s64 = ctx.r1.s64 + -136;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// lwz r7,0(r9)
	ctx.current_instruction = 0x8805328C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r31,4(r9)
	ctx.current_instruction = 0x88053298;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	ctx.current_instruction = 0x8805329C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r7,0(r6)
	ctx.current_instruction = 0x880532AC;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r31,4(r6)
	ctx.current_instruction = 0x880532B0;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r30,8(r6)
	ctx.current_instruction = 0x880532BC;
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_880532CC:
	// lwz r9,4(r10)
	ctx.current_instruction = 0x880532CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	ctx.current_instruction = 0x880532D4;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x880532E0;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.current_instruction = 0x880532E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r9,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x880532cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880532CC;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8805330C:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88053320
	if (ctx.cr6.lt) goto loc_88053320;
	// lwz r10,0(r8)
	ctx.current_instruction = 0x88053314;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	ctx.current_instruction = 0x88053318;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x88053324
	goto loc_88053324;
loc_88053320:
	// stw r23,0(r11)
	ctx.current_instruction = 0x88053320;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_88053324:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x8805330c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8805330C;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r29,r1,-152
	ctx.r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r28,r29
	ctx.current_instruction = 0x88053358;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// subfic r30,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r30.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88053454
	if (ctx.cr0.eq) goto loc_88053454;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.current_instruction = 0x88053378;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x880533bc
	if (!ctx.cr0.eq) goto loc_880533BC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x88053454
	if (!ctx.cr6.lt) goto loc_88053454;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8805339C:
	// lwz r9,0(r10)
	ctx.current_instruction = 0x8805339C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880533bc
	if (!ctx.cr6.eq) goto loc_880533BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8805339c
	if (ctx.cr6.lt) goto loc_8805339C;
	// b 0x88053454
	goto loc_88053454;
loc_880533BC:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.current_instruction = 0x880533E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88053400
	if (ctx.cr6.lt) goto loc_88053400;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x88053404
	if (!ctx.cr6.lt) goto loc_88053404;
loc_88053400:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_88053404:
	// stwx r10,r7,r8
	ctx.current_instruction = 0x88053404;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x88053454
	if (ctx.cr0.lt) goto loc_88053454;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_88053420:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88053454
	if (ctx.cr6.eq) goto loc_88053454;
	// lwz r9,-4(r10)
	ctx.current_instruction = 0x88053428;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88053444
	if (ctx.cr6.lt) goto loc_88053444;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x88053448
	if (!ctx.cr6.lt) goto loc_88053448;
loc_88053444:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_88053448:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ctx.current_instruction = 0x8805344C;
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x88053420
	if (!ctx.cr0.lt) goto loc_88053420;
loc_88053454:
	// lwzx r10,r28,r29
	ctx.current_instruction = 0x88053454;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r28,r29
	ctx.current_instruction = 0x88053468;
	REX_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// bge cr6,0x8805349c
	if (!ctx.cr6.lt) goto loc_8805349C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805349c
	if (ctx.cr6.eq) goto loc_8805349C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88053494:
	// stwu r9,4(r10)
	ctx.current_instruction = 0x88053494;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88053494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053494;
loc_8805349C:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_880534D8:
	// lwz r5,4(r10)
	ctx.current_instruction = 0x880534D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r3,-160(r1)
	ctx.current_instruction = 0x880534E0;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ctx.current_instruction = 0x880534EC;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.current_instruction = 0x880534F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x880534d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880534D8;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88053518:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8805352c
	if (ctx.cr6.lt) goto loc_8805352C;
	// lwz r10,0(r8)
	ctx.current_instruction = 0x88053520;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	ctx.current_instruction = 0x88053524;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x88053530
	goto loc_88053530;
loc_8805352C:
	// stw r23,0(r11)
	ctx.current_instruction = 0x8805352C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_88053530:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x88053518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053518;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x880536d0
	goto loc_880536D0;
loc_8805354C:
	// lwz r5,0(r20)
	ctx.current_instruction = 0x8805354C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8805361c
	if (ctx.cr6.lt) goto loc_8805361C;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// stw r23,0(r11)
	ctx.current_instruction = 0x8805356C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	ctx.current_instruction = 0x88053570;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r23,8(r11)
	ctx.current_instruction = 0x88053578;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,-152(r1)
	ctx.current_instruction = 0x88053590;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// oris r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 2147483648;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// stw r31,-152(r1)
	ctx.current_instruction = 0x880535A4;
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
loc_880535A8:
	// lwz r31,4(r10)
	ctx.current_instruction = 0x880535A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r30,r31,r9
	ctx.r30.u64 = ctx.r31.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	ctx.current_instruction = 0x880535B0;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// srw r31,r31,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ctx.current_instruction = 0x880535BC;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.current_instruction = 0x880535C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x880535a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880535A8;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880535E8:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880535fc
	if (ctx.cr6.lt) goto loc_880535FC;
	// lwz r10,0(r8)
	ctx.current_instruction = 0x880535F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	ctx.current_instruction = 0x880535F4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x88053600
	goto loc_88053600;
loc_880535FC:
	// stw r23,0(r11)
	ctx.current_instruction = 0x880535FC;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_88053600:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x880535e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880535E8;
	// lwz r11,20(r20)
	ctx.current_instruction = 0x88053610;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x880536d0
	goto loc_880536D0;
loc_8805361C:
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lwz r7,-152(r1)
	ctx.current_instruction = 0x88053620;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,20(r20)
	ctx.current_instruction = 0x88053628;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,-152(r1)
	ctx.current_instruction = 0x8805363C;
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r11,r11,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r11.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_88053664:
	// lwz r8,4(r10)
	ctx.current_instruction = 0x88053664;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	ctx.current_instruction = 0x8805366C;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x88053678;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.current_instruction = 0x8805367C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x88053664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053664;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880536A4:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x880536b8
	if (ctx.cr6.lt) goto loc_880536B8;
	// lwz r10,0(r8)
	ctx.current_instruction = 0x880536AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	ctx.current_instruction = 0x880536B0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x880536bc
	goto loc_880536BC;
loc_880536B8:
	// stw r23,0(r11)
	ctx.current_instruction = 0x880536B8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_880536BC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x880536a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880536A4;
loc_880536CC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_880536D0:
	// subfic r10,r21,31
	ctx.xer.ca = ctx.r21.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r21.u64;
	// lwz r11,16(r20)
	ctx.current_instruction = 0x880536D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 16);
	// subfic r9,r19,0
	ctx.xer.ca = ctx.r19.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r19.u64;
	// lwz r8,-152(r1)
	ctx.current_instruction = 0x880536DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x8805370c
	if (!ctx.cr6.eq) goto loc_8805370C;
	// lwz r11,-148(r1)
	ctx.current_instruction = 0x88053700;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	ctx.current_instruction = 0x88053704;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x88053714
	goto loc_88053714;
loc_8805370C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x88053718
	if (!ctx.cr6.eq) goto loc_88053718;
loc_88053714:
	// stw r10,0(r4)
	ctx.current_instruction = 0x88053714;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_88053718:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880693A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880693A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880693A0;
	ctx.current_instruction = 0x880693A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x882436c0
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069418) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88069418);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069418;
	ctx.current_instruction = 0x88069418;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x882436c0
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069488) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88069488);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069488;
	ctx.current_instruction = 0x88069488;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x882436d0
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069508) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88069508);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069508;
	ctx.current_instruction = 0x88069508;
	// lwz r3,228(r3)
	ctx.current_instruction = 0x88069508;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806B210) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806B210;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806B210) {
			switch (rex_dispatch_address) {
				case 0x8806B218:
				case 0x8806B230:
				case 0x8806B268:
				case 0x8806B294:
				case 0x8806B2A8:
				case 0x8806B2CC:
				case 0x8806B2E0:
				case 0x8806B2F4:
				case 0x8806B328:
				case 0x8806B348:
				case 0x8806B35C:
				case 0x8806B374:
				case 0x8806B388:
				case 0x8806B3A0:
				case 0x8806B3CC:
				case 0x8806B3E0:
				case 0x8806B3E8:
				case 0x8806B3F8:
				case 0x8806B40C:
				case 0x8806B434:
				case 0x8806B46C:
				case 0x8806B484:
				case 0x8806B49C:
				case 0x8806B4AC:
				case 0x8806B4C0:
				case 0x8806B4F4:
				case 0x8806B524:
				case 0x8806B54C:
				case 0x8806B574:
				case 0x8806B588:
				case 0x8806B5A0:
				case 0x8806B5C8:
				case 0x8806B5DC:
				case 0x8806B5F0:
				case 0x8806B610:
				case 0x8806B624:
				case 0x8806B63C:
				case 0x8806B650:
				case 0x8806B664:
				case 0x8806B678:
				case 0x8806B68C:
				case 0x8806B6A8:
				case 0x8806B6C8:
				case 0x8806B6E0:
				case 0x8806B6F4:
				case 0x8806B718:
				case 0x8806B72C:
				case 0x8806B734:
				case 0x8806B748:
				case 0x8806B76C:
				case 0x8806B780:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806B210;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806B218: goto loc_8806B218;
		case 0x8806B230: goto loc_8806B230;
		case 0x8806B268: goto loc_8806B268;
		case 0x8806B294: goto loc_8806B294;
		case 0x8806B2A8: goto loc_8806B2A8;
		case 0x8806B2CC: goto loc_8806B2CC;
		case 0x8806B2E0: goto loc_8806B2E0;
		case 0x8806B2F4: goto loc_8806B2F4;
		case 0x8806B328: goto loc_8806B328;
		case 0x8806B348: goto loc_8806B348;
		case 0x8806B35C: goto loc_8806B35C;
		case 0x8806B374: goto loc_8806B374;
		case 0x8806B388: goto loc_8806B388;
		case 0x8806B3A0: goto loc_8806B3A0;
		case 0x8806B3CC: goto loc_8806B3CC;
		case 0x8806B3E0: goto loc_8806B3E0;
		case 0x8806B3E8: goto loc_8806B3E8;
		case 0x8806B3F8: goto loc_8806B3F8;
		case 0x8806B40C: goto loc_8806B40C;
		case 0x8806B434: goto loc_8806B434;
		case 0x8806B46C: goto loc_8806B46C;
		case 0x8806B484: goto loc_8806B484;
		case 0x8806B49C: goto loc_8806B49C;
		case 0x8806B4AC: goto loc_8806B4AC;
		case 0x8806B4C0: goto loc_8806B4C0;
		case 0x8806B4F4: goto loc_8806B4F4;
		case 0x8806B524: goto loc_8806B524;
		case 0x8806B54C: goto loc_8806B54C;
		case 0x8806B574: goto loc_8806B574;
		case 0x8806B588: goto loc_8806B588;
		case 0x8806B5A0: goto loc_8806B5A0;
		case 0x8806B5C8: goto loc_8806B5C8;
		case 0x8806B5DC: goto loc_8806B5DC;
		case 0x8806B5F0: goto loc_8806B5F0;
		case 0x8806B610: goto loc_8806B610;
		case 0x8806B624: goto loc_8806B624;
		case 0x8806B63C: goto loc_8806B63C;
		case 0x8806B650: goto loc_8806B650;
		case 0x8806B664: goto loc_8806B664;
		case 0x8806B678: goto loc_8806B678;
		case 0x8806B68C: goto loc_8806B68C;
		case 0x8806B6A8: goto loc_8806B6A8;
		case 0x8806B6C8: goto loc_8806B6C8;
		case 0x8806B6E0: goto loc_8806B6E0;
		case 0x8806B6F4: goto loc_8806B6F4;
		case 0x8806B718: goto loc_8806B718;
		case 0x8806B72C: goto loc_8806B72C;
		case 0x8806B734: goto loc_8806B734;
		case 0x8806B748: goto loc_8806B748;
		case 0x8806B76C: goto loc_8806B76C;
		case 0x8806B780: goto loc_8806B780;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8806B218;
	__savegprlr_26(ctx, base);
loc_8806B218:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8806B218;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B21C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,256(r11)
	ctx.current_instruction = 0x8806B224;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B230:
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8806b754
	if (!ctx.cr6.eq) goto loc_8806B754;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r27,r11,10
	ctx.r27.u64 = ctx.r11.u64 | 10;
loc_8806B248:
	// lwz r3,44(r30)
	ctx.current_instruction = 0x8806B248;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.current_instruction = 0x8806B25C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B268;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B268:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8806B268;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8806b6cc
	if (ctx.cr6.eq) goto loc_8806B6CC;
	// lwz r3,44(r30)
	ctx.current_instruction = 0x8806B274;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B284;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.current_instruction = 0x8806B288;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B294:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B294;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806B298;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.current_instruction = 0x8806B29C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B2A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B2A8:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B2A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r7,-30713
	ctx.r7.s64 = -2012807168;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r7,-28056
	ctx.r5.s64 = ctx.r7.s64 + -28056;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B2BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8806B2C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B2CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B2CC:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B2CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806B2D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.current_instruction = 0x8806B2D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
loc_8806B2D8:
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8806B2DC:
	// bctrl 
	ctx.lr = 0x8806B2E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B2E0:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B2E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,256(r11)
	ctx.current_instruction = 0x8806B2E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B2F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B2F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806b3b4
	if (ctx.cr6.eq) goto loc_8806B3B4;
	// rlwinm r11,r3,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8806b55c
	if (!ctx.cr6.eq) goto loc_8806B55C;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806b3b4
	if (ctx.cr6.eq) goto loc_8806B3B4;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,244(r11)
	ctx.current_instruction = 0x8806B31C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B328:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8806b3a0
	if (ctx.cr6.eq) goto loc_8806B3A0;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B330;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.current_instruction = 0x8806B33C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B348:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B348;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806B34C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.current_instruction = 0x8806B350;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B35C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B35C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B35C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r7,0(r3)
	ctx.current_instruction = 0x8806B364;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.current_instruction = 0x8806B368;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B374:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B374;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r3)
	ctx.current_instruction = 0x8806B378;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.current_instruction = 0x8806B37C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8806B388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B388:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B388;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.current_instruction = 0x8806B394;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B3A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B3A0:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B3A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,172(r11)
	ctx.current_instruction = 0x8806B3A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8806b2dc
	goto loc_8806B2DC;
loc_8806B3B4:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B3B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.current_instruction = 0x8806B3C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B3CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B3CC:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B3CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806B3D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.current_instruction = 0x8806B3D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B3E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B3E0:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x8806B3E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a18
	ctx.lr = 0x8806B3E8;
	sub_88067A18(ctx, base);
loc_8806B3E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806b538
	if (ctx.cr6.eq) goto loc_8806B538;
	// lwz r3,84(r1)
	ctx.current_instruction = 0x8806B3F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a30
	ctx.lr = 0x8806B3F8;
	sub_88067A30(ctx, base);
loc_8806B3F8:
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B3F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,88(r11)
	ctx.current_instruction = 0x8806B400;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B40C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B40C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806b5b4
	if (ctx.cr6.eq) goto loc_8806B5B4;
	// lwz r10,0(r31)
	ctx.current_instruction = 0x8806B418;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lwz r9,56(r10)
	ctx.current_instruction = 0x8806B428;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8806B434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B434:
	// addi r28,r30,244
	ctx.r28.s64 = ctx.r30.s64 + 244;
loc_8806B438:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r28
	ea = ctx.r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r28
	ea = ctx.r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8806b438
	if (!ctx.cr0.eq) goto loc_8806B438;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B454;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,0(r3)
	ctx.current_instruction = 0x8806B45C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,56(r6)
	ctx.current_instruction = 0x8806B460;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 56);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8806B46C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B46C:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806B46C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.current_instruction = 0x8806B478;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B484:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B484;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806B48C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.current_instruction = 0x8806B490;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B49C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B49C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8806b4d4
	if (ctx.cr6.lt) goto loc_8806B4D4;
	// lwz r3,84(r1)
	ctx.current_instruction = 0x8806B4A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067b18
	ctx.lr = 0x8806B4AC;
	sub_88067B18(ctx, base);
loc_8806B4AC:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B4AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B4B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8806B4B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8806B4BC:
	// bctrl 
	ctx.lr = 0x8806B4C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B4C0:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806B4C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8806B4C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8806b2dc
	goto loc_8806B2DC;
loc_8806B4D4:
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8806b4ac
	if (!ctx.cr6.eq) goto loc_8806B4AC;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806B4DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.current_instruction = 0x8806B4E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B4F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B4F4:
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
	// bne 0x8806b4f4
	if (!ctx.cr0.eq) goto loc_8806B4F4;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B510;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,0(r3)
	ctx.current_instruction = 0x8806B514;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.current_instruction = 0x8806B518;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B524:
	// lwz r5,0(r30)
	ctx.current_instruction = 0x8806B524;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,172(r5)
	ctx.current_instruction = 0x8806B52C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 172);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// b 0x8806b4bc
	goto loc_8806B4BC;
loc_8806B538:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B538;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B53C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8806B540;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B54C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B54C:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x8806B54C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,172(r9)
	ctx.current_instruction = 0x8806B554;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 172);
	// b 0x8806b2d8
	goto loc_8806B2D8;
loc_8806B55C:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B55C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.current_instruction = 0x8806B568;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B574:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B574;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806B578;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.current_instruction = 0x8806B57C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B588:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B588;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r7,0(r3)
	ctx.current_instruction = 0x8806B590;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.current_instruction = 0x8806B594;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B5A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B5A0:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B5A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r3)
	ctx.current_instruction = 0x8806B5A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.current_instruction = 0x8806B5A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// b 0x8806b5d8
	goto loc_8806B5D8;
loc_8806B5B4:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806B5B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8806B5BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B5C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B5C8:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B5C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806B5CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.current_instruction = 0x8806B5D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8806B5D8:
	// bctrl 
	ctx.lr = 0x8806B5DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B5DC:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B5DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,244(r11)
	ctx.current_instruction = 0x8806B5E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B5F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B5F0:
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8806b650
	if (ctx.cr6.eq) goto loc_8806B650;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B5F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.current_instruction = 0x8806B604;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B610:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B610;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806B614;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.current_instruction = 0x8806B618;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B624:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B624;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r7,0(r3)
	ctx.current_instruction = 0x8806B62C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,84(r7)
	ctx.current_instruction = 0x8806B630;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B63C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B63C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B63C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r3)
	ctx.current_instruction = 0x8806B640;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.current_instruction = 0x8806B644;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8806B650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B650:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B650;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8806B658;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B664:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B664;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806B668;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,60(r9)
	ctx.current_instruction = 0x8806B66C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B678:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B678;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,0(r3)
	ctx.current_instruction = 0x8806B67C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.current_instruction = 0x8806B680;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B68C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B68C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8806B68C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806b6ac
	if (ctx.cr6.eq) goto loc_8806B6AC;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8806B69C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B6A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B6A8:
	// stw r26,80(r1)
	ctx.current_instruction = 0x8806B6A8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
loc_8806B6AC:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x8806B6AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806b6cc
	if (ctx.cr6.eq) goto loc_8806B6CC;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8806B6B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8806B6BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B6C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B6C8:
	// stw r26,84(r1)
	ctx.current_instruction = 0x8806B6C8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
loc_8806B6CC:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B6CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,180(r11)
	ctx.current_instruction = 0x8806B6D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B6E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B6E0:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x8806B6E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,256(r9)
	ctx.current_instruction = 0x8806B6E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 256);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B6F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B6F4:
	// rlwinm r7,r3,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8806b754
	if (!ctx.cr6.eq) goto loc_8806B754;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B700;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.current_instruction = 0x8806B70C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B718:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x8806B718;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,220(r9)
	ctx.current_instruction = 0x8806B720;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 220);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B72C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B72C:
	// lwz r3,272(r30)
	ctx.current_instruction = 0x8806B72C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x881ec608
	ctx.lr = 0x8806B734;
	sub_881EC608(ctx, base);
loc_8806B734:
	// lwz r7,0(r30)
	ctx.current_instruction = 0x8806B734;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,256(r7)
	ctx.current_instruction = 0x8806B73C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 256);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8806B748;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B748:
	// rlwinm r5,r3,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8806b248
	if (ctx.cr6.eq) goto loc_8806B248;
loc_8806B754:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8806B754;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,264(r11)
	ctx.current_instruction = 0x8806B760;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806B76C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B76C:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x8806B76C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,220(r9)
	ctx.current_instruction = 0x8806B774;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 220);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8806B780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806B780:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807EE20) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807EE20;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807EE20) {
			switch (rex_dispatch_address) {
				case 0x8807EE60:
				case 0x8807EE94:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807EE20;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807EE60: goto loc_8807EE60;
		case 0x8807EE94: goto loc_8807EE94;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8807EE24;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8807EE28;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.current_instruction = 0x8807EE2C;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8807EE30;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,80(r1)
	ctx.current_instruction = 0x8807EE3C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8807EE40;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	ctx.current_instruction = 0x8807EE44;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x8807EE48;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f1,f12,f11
	ctx.f1.f64 = ctx.f12.f64 / ctx.f11.f64;
	// bl 0x881ef2e8
	ctx.lr = 0x8807EE60;
	sub_881EF2E8(ctx, base);
loc_8807EE60:
	// lwz r9,30668(r31)
	ctx.current_instruction = 0x8807EE60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30668);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r8,30680(r31)
	ctx.current_instruction = 0x8807EE68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 30680);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r7,80(r1)
	ctx.current_instruction = 0x8807EE74;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.current_instruction = 0x8807EE78;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	ctx.current_instruction = 0x8807EE7C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.current_instruction = 0x8807EE80;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fdiv f1,f8,f7
	ctx.f1.f64 = ctx.f8.f64 / ctx.f7.f64;
	// bl 0x881ef2e8
	ctx.lr = 0x8807EE94;
	sub_881EF2E8(ctx, base);
loc_8807EE94:
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 / ctx.f1.f64;
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lfd f13,12248(r5)
	ctx.current_instruction = 0x8807EE9C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r5.u32 + 12248);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8807eecc
	if (!ctx.cr6.gt) goto loc_8807EECC;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12096(r11)
	ctx.current_instruction = 0x8807EEAC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12096);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8807eecc
	if (!ctx.cr6.lt) goto loc_8807EECC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfd f0,30688(r31)
	ctx.current_instruction = 0x8807EEBC;
	REX_STORE_U64(ctx.r31.u32 + 30688, ctx.f0.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,30704(r31)
	ctx.current_instruction = 0x8807EEC4;
	REX_STORE_U32(ctx.r31.u32 + 30704, ctx.r11.u32);
	// stw r10,30632(r31)
	ctx.current_instruction = 0x8807EEC8;
	REX_STORE_U32(ctx.r31.u32 + 30632, ctx.r10.u32);
loc_8807EECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8807EED0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.current_instruction = 0x8807EED8;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8807EEDC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88083540) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88083540;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88083540) {
			switch (rex_dispatch_address) {
				case 0x88083548:
				case 0x88083584:
				case 0x880837BC:
				case 0x880837D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88083540;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88083548: goto loc_88083548;
		case 0x88083584: goto loc_88083584;
		case 0x880837BC: goto loc_880837BC;
		case 0x880837D0: goto loc_880837D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88083548;
	__savegprlr_26(ctx, base);
loc_88083548:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88083548;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// stw r4,796(r3)
	ctx.current_instruction = 0x88083550;
	REX_STORE_U32(ctx.r3.u32 + 796, ctx.r4.u32);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// stw r5,800(r3)
	ctx.current_instruction = 0x88083558;
	REX_STORE_U32(ctx.r3.u32 + 800, ctx.r5.u32);
	// rlwinm r10,r11,1,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10;
	// rlwinm r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// stw r8,804(r3)
	ctx.current_instruction = 0x88083568;
	REX_STORE_U32(ctx.r3.u32 + 804, ctx.r8.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// xori r6,r7,24
	ctx.r6.u64 = ctx.r7.u64 ^ 24;
	// srawi r11,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
	// stw r11,7996(r3)
	ctx.current_instruction = 0x8808357C;
	REX_STORE_U32(ctx.r3.u32 + 7996, ctx.r11.u32);
	// bl 0x88080098
	ctx.lr = 0x88083584;
	sub_88080098(ctx, base);
loc_88083584:
	// lwz r10,724(r31)
	ctx.current_instruction = 0x88083584;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ble cr6,0x88083630
	if (!ctx.cr6.gt) goto loc_88083630;
loc_8808359C:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x8808359C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x88083620
	if (!ctx.cr6.gt) goto loc_88083620;
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mulli r10,r9,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(276));
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_880835B8:
	// lwz r8,724(r31)
	ctx.current_instruction = 0x880835B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// cntlzw r4,r11
	ctx.r4.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x880835C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// lwz r8,7764(r31)
	ctx.current_instruction = 0x880835CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r3,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x2;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// or r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r7,120(r8)
	ctx.current_instruction = 0x88083610;
	REX_STORE_U32(ctx.r8.u32 + 120, ctx.r7.u32);
	// lwz r4,720(r31)
	ctx.current_instruction = 0x88083614;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x880835b8
	if (ctx.cr6.lt) goto loc_880835B8;
loc_88083620:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88083620;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8808359c
	if (ctx.cr6.lt) goto loc_8808359C;
loc_88083630:
	// lwz r11,6864(r31)
	ctx.current_instruction = 0x88083630;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880836f0
	if (ctx.cr6.eq) goto loc_880836F0;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8808363C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880836f0
	if (!ctx.cr6.gt) goto loc_880836F0;
loc_88083650:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88083650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x880836e0
	if (!ctx.cr6.gt) goto loc_880836E0;
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mulli r10,r9,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(276));
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8808366C:
	// lwz r8,724(r31)
	ctx.current_instruction = 0x8808366C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// cntlzw r4,r11
	ctx.r4.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x88083674;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// lwz r8,7788(r31)
	ctx.current_instruction = 0x88083680;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7788);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r3,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x2;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// or r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r7,120(r8)
	ctx.current_instruction = 0x880836C0;
	REX_STORE_U32(ctx.r8.u32 + 120, ctx.r7.u32);
	// lwz r8,7792(r31)
	ctx.current_instruction = 0x880836C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7792);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r7,120(r4)
	ctx.current_instruction = 0x880836CC;
	REX_STORE_U32(ctx.r4.u32 + 120, ctx.r7.u32);
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// lwz r3,720(r31)
	ctx.current_instruction = 0x880836D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8808366c
	if (ctx.cr6.lt) goto loc_8808366C;
loc_880836E0:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880836E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88083650
	if (ctx.cr6.lt) goto loc_88083650;
loc_880836F0:
	// lwz r11,2336(r31)
	ctx.current_instruction = 0x880836F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88083764
	if (ctx.cr6.eq) goto loc_88083764;
	// lwz r11,796(r31)
	ctx.current_instruction = 0x880836FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88083714
	if (!ctx.cr6.eq) goto loc_88083714;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x8808370C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// b 0x8808372c
	goto loc_8808372C;
loc_88083714:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88083718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// bge cr6,0x88083728
	if (!ctx.cr6.lt) goto loc_88083728;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x8808372c
	goto loc_8808372C;
loc_88083728:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8808372C:
	// stw r11,7072(r31)
	ctx.current_instruction = 0x8808372C;
	REX_STORE_U32(ctx.r31.u32 + 7072, ctx.r11.u32);
	// lwz r11,800(r31)
	ctx.current_instruction = 0x88083730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88083748
	if (!ctx.cr6.eq) goto loc_88083748;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88083740;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// b 0x88083760
	goto loc_88083760;
loc_88083748:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8808374C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// bge cr6,0x8808375c
	if (!ctx.cr6.lt) goto loc_8808375C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x88083760
	goto loc_88083760;
loc_8808375C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88083760:
	// stw r11,7076(r31)
	ctx.current_instruction = 0x88083760;
	REX_STORE_U32(ctx.r31.u32 + 7076, ctx.r11.u32);
loc_88083764:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88083764;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x88083778
	if (ctx.cr6.gt) goto loc_88083778;
	// li r11,1
	ctx.r11.s64 = 1;
loc_88083778:
	// stw r11,7204(r31)
	ctx.current_instruction = 0x88083778;
	REX_STORE_U32(ctx.r31.u32 + 7204, ctx.r11.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,1360(r31)
	ctx.current_instruction = 0x88083780;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,2268(r31)
	ctx.current_instruction = 0x8808378C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2268);
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// stw r8,2264(r31)
	ctx.current_instruction = 0x880837A0;
	REX_STORE_U32(ctx.r31.u32 + 2264, ctx.r8.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// stw r5,28152(r31)
	ctx.current_instruction = 0x880837AC;
	REX_STORE_U32(ctx.r31.u32 + 28152, ctx.r5.u32);
	// stw r4,2292(r31)
	ctx.current_instruction = 0x880837B0;
	REX_STORE_U32(ctx.r31.u32 + 2292, ctx.r4.u32);
	// stw r11,19452(r31)
	ctx.current_instruction = 0x880837B4;
	REX_STORE_U32(ctx.r31.u32 + 19452, ctx.r11.u32);
	// bl 0x8807fb50
	ctx.lr = 0x880837BC;
	sub_8807FB50(ctx, base);
loc_880837BC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880837dc
	if (ctx.cr6.eq) goto loc_880837DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88071e98
	ctx.lr = 0x880837D0;
	sub_88071E98(ctx, base);
loc_880837D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880837DC:
	// lwz r11,2940(r31)
	ctx.current_instruction = 0x880837DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2940);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,3112(r31)
	ctx.current_instruction = 0x880837E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3112);
	// lwz r9,3116(r31)
	ctx.current_instruction = 0x880837E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// lwz r8,3908(r31)
	ctx.current_instruction = 0x880837EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3908);
	// lwz r7,4080(r31)
	ctx.current_instruction = 0x880837F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4080);
	// lwz r6,4084(r31)
	ctx.current_instruction = 0x880837F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4084);
	// lwz r5,4876(r31)
	ctx.current_instruction = 0x880837F8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4876);
	// lwz r4,5048(r31)
	ctx.current_instruction = 0x880837FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 5048);
	// lwz r30,5052(r31)
	ctx.current_instruction = 0x88083800;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 5052);
	// lwz r28,5844(r31)
	ctx.current_instruction = 0x88083804;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 5844);
	// lwz r27,6016(r31)
	ctx.current_instruction = 0x88083808;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 6016);
	// lwz r26,6020(r31)
	ctx.current_instruction = 0x8808380C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 6020);
	// stw r11,2924(r31)
	ctx.current_instruction = 0x88083810;
	REX_STORE_U32(ctx.r31.u32 + 2924, ctx.r11.u32);
	// stw r29,2928(r31)
	ctx.current_instruction = 0x88083814;
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r29.u32);
	// stw r10,2932(r31)
	ctx.current_instruction = 0x88083818;
	REX_STORE_U32(ctx.r31.u32 + 2932, ctx.r10.u32);
	// stw r9,2936(r31)
	ctx.current_instruction = 0x8808381C;
	REX_STORE_U32(ctx.r31.u32 + 2936, ctx.r9.u32);
	// stw r8,3892(r31)
	ctx.current_instruction = 0x88083820;
	REX_STORE_U32(ctx.r31.u32 + 3892, ctx.r8.u32);
	// stw r29,3896(r31)
	ctx.current_instruction = 0x88083824;
	REX_STORE_U32(ctx.r31.u32 + 3896, ctx.r29.u32);
	// stw r7,3900(r31)
	ctx.current_instruction = 0x88083828;
	REX_STORE_U32(ctx.r31.u32 + 3900, ctx.r7.u32);
	// stw r6,3904(r31)
	ctx.current_instruction = 0x8808382C;
	REX_STORE_U32(ctx.r31.u32 + 3904, ctx.r6.u32);
	// stw r5,4860(r31)
	ctx.current_instruction = 0x88083830;
	REX_STORE_U32(ctx.r31.u32 + 4860, ctx.r5.u32);
	// stw r29,4864(r31)
	ctx.current_instruction = 0x88083834;
	REX_STORE_U32(ctx.r31.u32 + 4864, ctx.r29.u32);
	// stw r4,4868(r31)
	ctx.current_instruction = 0x88083838;
	REX_STORE_U32(ctx.r31.u32 + 4868, ctx.r4.u32);
	// stw r30,4872(r31)
	ctx.current_instruction = 0x8808383C;
	REX_STORE_U32(ctx.r31.u32 + 4872, ctx.r30.u32);
	// stw r28,5828(r31)
	ctx.current_instruction = 0x88083840;
	REX_STORE_U32(ctx.r31.u32 + 5828, ctx.r28.u32);
	// stw r29,5832(r31)
	ctx.current_instruction = 0x88083844;
	REX_STORE_U32(ctx.r31.u32 + 5832, ctx.r29.u32);
	// stw r27,5836(r31)
	ctx.current_instruction = 0x88083848;
	REX_STORE_U32(ctx.r31.u32 + 5836, ctx.r27.u32);
	// stw r26,5840(r31)
	ctx.current_instruction = 0x8808384C;
	REX_STORE_U32(ctx.r31.u32 + 5840, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88095548) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88095548;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88095548) {
			switch (rex_dispatch_address) {
				case 0x88095550:
				case 0x880955E0:
				case 0x8809593C:
				case 0x88095B04:
				case 0x88095CC8:
				case 0x88095CFC:
				case 0x88095D50:
				case 0x88095DD8:
				case 0x88095DF8:
				case 0x88095F80:
				case 0x88096000:
				case 0x88096088:
				case 0x880960C8:
				case 0x880960E0:
				case 0x88096108:
				case 0x88096120:
				case 0x88096164:
				case 0x88096180:
				case 0x880961B4:
				case 0x880961CC:
				case 0x88096290:
				case 0x8809631C:
				case 0x880963B0:
				case 0x88096404:
				case 0x8809641C:
				case 0x88096444:
				case 0x8809645C:
				case 0x8809649C:
				case 0x880964B4:
				case 0x880964E4:
				case 0x880964FC:
				case 0x88096568:
				case 0x88096580:
				case 0x880965A4:
				case 0x880965BC:
				case 0x880965E4:
				case 0x880965FC:
				case 0x8809665C:
				case 0x88096678:
				case 0x880966A8:
				case 0x880966C0:
				case 0x880966F0:
				case 0x88096708:
				case 0x8809678C:
				case 0x880967E0:
				case 0x880967F8:
				case 0x880968AC:
				case 0x8809695C:
				case 0x880969AC:
				case 0x880969C4:
				case 0x88096B14:
				case 0x88096B64:
				case 0x88096B7C:
				case 0x88096C08:
				case 0x88096C24:
				case 0x88096CCC:
				case 0x88096D9C:
				case 0x88096DB8:
				case 0x88096F38:
				case 0x88096F54:
				case 0x88096F6C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88095548;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88095550: goto loc_88095550;
		case 0x880955E0: goto loc_880955E0;
		case 0x8809593C: goto loc_8809593C;
		case 0x88095B04: goto loc_88095B04;
		case 0x88095CC8: goto loc_88095CC8;
		case 0x88095CFC: goto loc_88095CFC;
		case 0x88095D50: goto loc_88095D50;
		case 0x88095DD8: goto loc_88095DD8;
		case 0x88095DF8: goto loc_88095DF8;
		case 0x88095F80: goto loc_88095F80;
		case 0x88096000: goto loc_88096000;
		case 0x88096088: goto loc_88096088;
		case 0x880960C8: goto loc_880960C8;
		case 0x880960E0: goto loc_880960E0;
		case 0x88096108: goto loc_88096108;
		case 0x88096120: goto loc_88096120;
		case 0x88096164: goto loc_88096164;
		case 0x88096180: goto loc_88096180;
		case 0x880961B4: goto loc_880961B4;
		case 0x880961CC: goto loc_880961CC;
		case 0x88096290: goto loc_88096290;
		case 0x8809631C: goto loc_8809631C;
		case 0x880963B0: goto loc_880963B0;
		case 0x88096404: goto loc_88096404;
		case 0x8809641C: goto loc_8809641C;
		case 0x88096444: goto loc_88096444;
		case 0x8809645C: goto loc_8809645C;
		case 0x8809649C: goto loc_8809649C;
		case 0x880964B4: goto loc_880964B4;
		case 0x880964E4: goto loc_880964E4;
		case 0x880964FC: goto loc_880964FC;
		case 0x88096568: goto loc_88096568;
		case 0x88096580: goto loc_88096580;
		case 0x880965A4: goto loc_880965A4;
		case 0x880965BC: goto loc_880965BC;
		case 0x880965E4: goto loc_880965E4;
		case 0x880965FC: goto loc_880965FC;
		case 0x8809665C: goto loc_8809665C;
		case 0x88096678: goto loc_88096678;
		case 0x880966A8: goto loc_880966A8;
		case 0x880966C0: goto loc_880966C0;
		case 0x880966F0: goto loc_880966F0;
		case 0x88096708: goto loc_88096708;
		case 0x8809678C: goto loc_8809678C;
		case 0x880967E0: goto loc_880967E0;
		case 0x880967F8: goto loc_880967F8;
		case 0x880968AC: goto loc_880968AC;
		case 0x8809695C: goto loc_8809695C;
		case 0x880969AC: goto loc_880969AC;
		case 0x880969C4: goto loc_880969C4;
		case 0x88096B14: goto loc_88096B14;
		case 0x88096B64: goto loc_88096B64;
		case 0x88096B7C: goto loc_88096B7C;
		case 0x88096C08: goto loc_88096C08;
		case 0x88096C24: goto loc_88096C24;
		case 0x88096CCC: goto loc_88096CCC;
		case 0x88096D9C: goto loc_88096D9C;
		case 0x88096DB8: goto loc_88096DB8;
		case 0x88096F38: goto loc_88096F38;
		case 0x88096F54: goto loc_88096F54;
		case 0x88096F6C: goto loc_88096F6C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88095550;
	__savegprlr_14(ctx, base);
loc_88095550:
	// stwu r1,-1392(r1)
	ctx.current_instruction = 0x88095550;
	ea = -1392 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,724(r3)
	ctx.current_instruction = 0x88095554;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// stw r10,1468(r1)
	ctx.current_instruction = 0x8809555C;
	REX_STORE_U32(ctx.r1.u32 + 1468, ctx.r10.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// stw r5,1428(r1)
	ctx.current_instruction = 0x88095568;
	REX_STORE_U32(ctx.r1.u32 + 1428, ctx.r5.u32);
	// stw r9,1460(r1)
	ctx.current_instruction = 0x8809556C;
	REX_STORE_U32(ctx.r1.u32 + 1460, ctx.r9.u32);
	// lwz r11,28088(r3)
	ctx.current_instruction = 0x88095570;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28088);
	// stw r4,1420(r1)
	ctx.current_instruction = 0x88095574;
	REX_STORE_U32(ctx.r1.u32 + 1420, ctx.r4.u32);
	// stw r7,1444(r1)
	ctx.current_instruction = 0x88095578;
	REX_STORE_U32(ctx.r1.u32 + 1444, ctx.r7.u32);
	// stw r8,1452(r1)
	ctx.current_instruction = 0x8809557C;
	REX_STORE_U32(ctx.r1.u32 + 1452, ctx.r8.u32);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// lwz r9,7764(r3)
	ctx.current_instruction = 0x88095588;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// addi r6,r1,975
	ctx.r6.s64 = ctx.r1.s64 + 975;
	// mulli r10,r5,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(276));
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r3,r6,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,280(r1)
	ctx.current_instruction = 0x880955A4;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,292(r1)
	ctx.current_instruction = 0x880955AC;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// beq cr6,0x880955bc
	if (ctx.cr6.eq) goto loc_880955BC;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880955d0
	goto loc_880955D0;
loc_880955BC:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lwz r5,1564(r1)
	ctx.current_instruction = 0x880955C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880955d0
	if (!ctx.cr6.eq) goto loc_880955D0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880955D0:
	// lwz r30,1556(r1)
	ctx.current_instruction = 0x880955D0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880e2660
	ctx.lr = 0x880955E0;
	sub_880E2660(ctx, base);
loc_880955E0:
	// srawi r11,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 2;
	// lwz r9,8(r30)
	ctx.current_instruction = 0x880955E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lwz r8,12(r30)
	ctx.current_instruction = 0x880955F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,1524(r1)
	ctx.current_instruction = 0x880955F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// lwz r29,1484(r1)
	ctx.current_instruction = 0x880955FC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1484);
	// srawi r11,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r16.s32 >> 2;
	// lwz r28,1476(r1)
	ctx.current_instruction = 0x88095604;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1476);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r3,256(r1)
	ctx.current_instruction = 0x8809560C;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// stw r9,284(r1)
	ctx.current_instruction = 0x88095614;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// stw r8,248(r1)
	ctx.current_instruction = 0x88095618;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// lwz r5,1540(r1)
	ctx.current_instruction = 0x88095620;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// beq cr6,0x8809569c
	if (ctx.cr6.eq) goto loc_8809569C;
	// srawi r11,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// ble cr6,0x88095674
	if (!ctx.cr6.gt) goto loc_88095674;
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
loc_8809564C:
	// lwz r4,-128(r11)
	ctx.current_instruction = 0x8809564C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -128);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x88095664
	if (!ctx.cr6.eq) goto loc_88095664;
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88095658;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x88095674
	if (ctx.cr6.eq) goto loc_88095674;
loc_88095664:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8809564c
	if (ctx.cr6.lt) goto loc_8809564C;
loc_88095674:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8809569c
	if (!ctx.cr6.eq) goto loc_8809569C;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,1540(r1)
	ctx.current_instruction = 0x88095690;
	REX_STORE_U32(ctx.r1.u32 + 1540, ctx.r5.u32);
	// stwx r9,r4,r31
	ctx.current_instruction = 0x88095694;
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r8,r3,r31
	ctx.current_instruction = 0x88095698;
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r8.u32);
loc_8809569C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880956d4
	if (!ctx.cr6.gt) goto loc_880956D4;
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
loc_880956AC:
	// lwz r9,-128(r10)
	ctx.current_instruction = 0x880956AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -128);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880956c4
	if (!ctx.cr6.eq) goto loc_880956C4;
	// lwz r9,0(r10)
	ctx.current_instruction = 0x880956B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880956d4
	if (ctx.cr6.eq) goto loc_880956D4;
loc_880956C4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880956ac
	if (ctx.cr6.lt) goto loc_880956AC;
loc_880956D4:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x880956fc
	if (!ctx.cr6.eq) goto loc_880956FC;
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
	// stw r5,1540(r1)
	ctx.current_instruction = 0x880956F0;
	REX_STORE_U32(ctx.r1.u32 + 1540, ctx.r5.u32);
	// stwx r7,r8,r31
	ctx.current_instruction = 0x880956F4;
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r6,r4,r31
	ctx.current_instruction = 0x880956F8;
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r6.u32);
loc_880956FC:
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r21,1548(r1)
	ctx.current_instruction = 0x88095700;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,768
	ctx.r8.s64 = ctx.r1.s64 + 768;
	// stw r23,228(r1)
	ctx.current_instruction = 0x88095714;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// addi r7,r1,560
	ctx.r7.s64 = ctx.r1.s64 + 560;
	// stw r9,216(r1)
	ctx.current_instruction = 0x8809571C;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,276(r1)
	ctx.current_instruction = 0x88095724;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// addi r14,r11,6848
	ctx.r14.s64 = ctx.r11.s64 + 6848;
	// stw r7,212(r1)
	ctx.current_instruction = 0x8809572C;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stw r6,272(r1)
	ctx.current_instruction = 0x88095734;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r6.u32);
	// stw r14,264(r1)
	ctx.current_instruction = 0x88095738;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r14.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x88095c54
	if (!ctx.cr6.gt) goto loc_88095C54;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// lwz r19,300(r1)
	ctx.current_instruction = 0x88095748;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r16,300(r1)
	ctx.current_instruction = 0x8809574C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stw r11,268(r1)
	ctx.current_instruction = 0x88095750;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
loc_88095754:
	// lwz r5,268(r1)
	ctx.current_instruction = 0x88095754;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,1380(r18)
	ctx.current_instruction = 0x8809575C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// lwz r15,1532(r1)
	ctx.current_instruction = 0x88095760;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// lwz r6,272(r1)
	ctx.current_instruction = 0x88095764;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r28,1428(r1)
	ctx.current_instruction = 0x88095768;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1428);
	// neg r7,r15
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r15.u64);
	// lwz r9,128(r5)
	ctx.current_instruction = 0x88095770;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// lwz r8,0(r5)
	ctx.current_instruction = 0x88095778;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,208(r1)
	ctx.current_instruction = 0x88095784;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r31,296(r1)
	ctx.current_instruction = 0x88095794;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r4,304(r1)
	ctx.current_instruction = 0x88095798;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r4.u32);
	// stw r7,224(r1)
	ctx.current_instruction = 0x8809579C;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// stw r15,220(r1)
	ctx.current_instruction = 0x880957A0;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r15.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// add r17,r11,r28
	ctx.r17.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// ble cr6,0x8809584c
	if (!ctx.cr6.gt) goto loc_8809584C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8809584c
	if (ctx.cr6.eq) goto loc_8809584C;
	// addi r7,r5,-4
	ctx.r7.s64 = ctx.r5.s64 + -4;
loc_880957C4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88095840
	if (ctx.cr6.eq) goto loc_88095840;
	// lwz r11,0(r7)
	ctx.current_instruction = 0x880957CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88095804
	if (!ctx.cr6.eq) goto loc_88095804;
	// lwz r11,128(r7)
	ctx.current_instruction = 0x880957D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 128);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880957f0
	if (!ctx.cr6.eq) goto loc_880957F0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_880957F0:
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x88095838
	if (!ctx.cr6.eq) goto loc_88095838;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// b 0x88095834
	goto loc_88095834;
loc_88095804:
	// lwz r6,128(r7)
	ctx.current_instruction = 0x88095804;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 128);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88095838
	if (!ctx.cr6.eq) goto loc_88095838;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x88095824
	if (!ctx.cr6.eq) goto loc_88095824;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_88095824:
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x88095838
	if (!ctx.cr6.eq) goto loc_88095838;
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
loc_88095834:
	// li r10,0
	ctx.r10.s64 = 0;
loc_88095838:
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bdnz 0x880957c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880957C4;
loc_88095840:
	// stw r29,224(r1)
	ctx.current_instruction = 0x88095840;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stw r30,220(r1)
	ctx.current_instruction = 0x88095844;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// stw r3,208(r1)
	ctx.current_instruction = 0x88095848;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
loc_8809584C:
	// lwz r11,1492(r1)
	ctx.current_instruction = 0x8809584C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88095864
	if (!ctx.cr6.lt) goto loc_88095864;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// stw r11,208(r1)
	ctx.current_instruction = 0x88095860;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_88095864:
	// lwz r11,1500(r1)
	ctx.current_instruction = 0x88095864;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// add r10,r15,r4
	ctx.r10.u64 = ctx.r15.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88095878
	if (!ctx.cr6.gt) goto loc_88095878;
	// subf r15,r4,r11
	ctx.r15.u64 = ctx.r11.u64 - ctx.r4.u64;
loc_88095878:
	// lwz r11,1508(r1)
	ctx.current_instruction = 0x88095878;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88095890
	if (!ctx.cr6.lt) goto loc_88095890;
	// subf r29,r31,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r31.u64;
	// stw r29,224(r1)
	ctx.current_instruction = 0x8809588C;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
loc_88095890:
	// lwz r11,1516(r1)
	ctx.current_instruction = 0x88095890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880958a8
	if (!ctx.cr6.gt) goto loc_880958A8;
	// subf r30,r31,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r31.u64;
	// stw r30,220(r1)
	ctx.current_instruction = 0x880958A4;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
loc_880958A8:
	// lwz r11,1524(r1)
	ctx.current_instruction = 0x880958A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88095a80
	if (ctx.cr6.eq) goto loc_88095A80;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x88095ba8
	if (ctx.cr6.gt) goto loc_88095BA8;
	// lwz r11,224(r1)
	ctx.current_instruction = 0x880958BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,296(r1)
	ctx.current_instruction = 0x880958C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r9,1484(r1)
	ctx.current_instruction = 0x880958C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1484);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r22,r9,r27
	ctx.r22.u64 = ctx.r27.u64 - ctx.r9.u64;
loc_880958D8:
	// lwz r31,208(r1)
	ctx.current_instruction = 0x880958D8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// bgt cr6,0x88095a60
	if (ctx.cr6.gt) goto loc_88095A60;
	// lwz r8,304(r1)
	ctx.current_instruction = 0x880958E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// srawi r9,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r22.s32 >> 31;
	// lwz r11,1476(r1)
	ctx.current_instruction = 0x880958F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1476);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,1460(r1)
	ctx.current_instruction = 0x880958FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1460);
	// xor r7,r22,r9
	ctx.r7.u64 = ctx.r22.u64 ^ ctx.r9.u64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r9,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r28,r5,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r30,r11,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_88095914:
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88095914;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// lwz r10,284(r1)
	ctx.current_instruction = 0x8809591C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// lwz r3,1420(r1)
	ctx.current_instruction = 0x88095928;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x8809593C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809593C:
	// lwz r9,1468(r1)
	ctx.current_instruction = 0x8809593C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// add r8,r28,r30
	ctx.r8.u64 = ctx.r28.u64 + ctx.r30.u64;
	// subf r7,r9,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r9.u64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// xor r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88095998
	if (ctx.cr6.gt) goto loc_88095998;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x88095998
	if (ctx.cr6.gt) goto loc_88095998;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r14
	ctx.current_instruction = 0x88095978;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// lwzx r8,r10,r14
	ctx.current_instruction = 0x8809597C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r21
	ctx.current_instruction = 0x88095988;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r21.u32);
	// lwzx r10,r6,r21
	ctx.current_instruction = 0x8809598C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880959a0
	goto loc_880959A0;
loc_88095998:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x88095998;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880959A0:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x880959c4
	if (!ctx.cr6.lt) goto loc_880959C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r20,r23,1
	ctx.r20.s64 = ctx.r23.s64 + 1;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,288(r1)
	ctx.current_instruction = 0x880959B8;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_880959C4:
	// srawi r10,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 31;
	// lwz r8,216(r1)
	ctx.current_instruction = 0x880959C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// add r7,r24,r26
	ctx.r7.u64 = ctx.r24.u64 + ctx.r26.u64;
	// xor r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// stwx r11,r9,r8
	ctx.current_instruction = 0x880959E0;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// bgt cr6,0x88095a18
	if (ctx.cr6.gt) goto loc_88095A18;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x88095a18
	if (ctx.cr6.gt) goto loc_88095A18;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r14
	ctx.current_instruction = 0x880959F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// lwzx r7,r10,r14
	ctx.current_instruction = 0x880959FC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r21
	ctx.current_instruction = 0x88095A08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r10,r5,r21
	ctx.current_instruction = 0x88095A0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88095a20
	goto loc_88095A20;
loc_88095A18:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x88095A18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88095A20:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x88095a44
	if (!ctx.cr6.lt) goto loc_88095A44;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r20,r23,1
	ctx.r20.s64 = ctx.r23.s64 + 1;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,288(r1)
	ctx.current_instruction = 0x88095A38;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_88095A44:
	// lwz r10,276(r1)
	ctx.current_instruction = 0x88095A44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// stwx r11,r9,r10
	ctx.current_instruction = 0x88095A58;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// ble cr6,0x88095914
	if (!ctx.cr6.gt) goto loc_88095914;
loc_88095A60:
	// lwz r11,220(r1)
	ctx.current_instruction = 0x88095A60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r24,r24,7
	ctx.r24.s64 = ctx.r24.s64 + 7;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880958d8
	if (!ctx.cr6.gt) goto loc_880958D8;
	// b 0x88095ba8
	goto loc_88095BA8;
loc_88095A80:
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x88095ba8
	if (ctx.cr6.gt) goto loc_88095BA8;
	// lwz r11,224(r1)
	ctx.current_instruction = 0x88095A88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,296(r1)
	ctx.current_instruction = 0x88095A90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r9,1468(r1)
	ctx.current_instruction = 0x88095A94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r22,1420(r1)
	ctx.current_instruction = 0x88095A9C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// lwz r24,284(r1)
	ctx.current_instruction = 0x88095AA0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r9,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r9.u64;
loc_88095AAC:
	// lwz r31,208(r1)
	ctx.current_instruction = 0x88095AAC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// bgt cr6,0x88095b90
	if (ctx.cr6.gt) goto loc_88095B90;
	// lwz r9,304(r1)
	ctx.current_instruction = 0x88095ABC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// srawi r10,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 31;
	// lwz r8,1460(r1)
	ctx.current_instruction = 0x88095AC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1460);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// xor r7,r25,r10
	ctx.r7.u64 = ctx.r25.u64 ^ ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r10,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r30,r8,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r8.u64;
loc_88095AE0:
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88095AE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x88095B04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88095B04:
	// srawi r11,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 31;
	// xor r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88095b48
	if (ctx.cr6.gt) goto loc_88095B48;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x88095b48
	if (ctx.cr6.gt) goto loc_88095B48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r14
	ctx.current_instruction = 0x88095B28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// lwzx r8,r10,r14
	ctx.current_instruction = 0x88095B2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r21
	ctx.current_instruction = 0x88095B38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r21.u32);
	// lwzx r10,r6,r21
	ctx.current_instruction = 0x88095B3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88095b50
	goto loc_88095B50;
loc_88095B48:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x88095B48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88095B50:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x88095b6c
	if (!ctx.cr6.lt) goto loc_88095B6C;
	// addi r20,r23,1
	ctx.r20.s64 = ctx.r23.s64 + 1;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_88095B6C:
	// add r10,r26,r28
	ctx.r10.u64 = ctx.r26.u64 + ctx.r28.u64;
	// lwz r9,216(r1)
	ctx.current_instruction = 0x88095B70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// stwx r11,r8,r9
	ctx.current_instruction = 0x88095B88;
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// ble cr6,0x88095ae0
	if (!ctx.cr6.gt) goto loc_88095AE0;
loc_88095B90:
	// lwz r11,220(r1)
	ctx.current_instruction = 0x88095B90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r26,r26,7
	ctx.r26.s64 = ctx.r26.s64 + 7;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88095aac
	if (!ctx.cr6.gt) goto loc_88095AAC;
loc_88095BA8:
	// lwz r11,228(r1)
	ctx.current_instruction = 0x88095BA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88095c20
	if (!ctx.cr6.lt) goto loc_88095C20;
	// lwz r10,296(r1)
	ctx.current_instruction = 0x88095BB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r11,304(r1)
	ctx.current_instruction = 0x88095BB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r9,208(r1)
	ctx.current_instruction = 0x88095BBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r8,224(r1)
	ctx.current_instruction = 0x88095BC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r7,220(r1)
	ctx.current_instruction = 0x88095BC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r6,1524(r1)
	ctx.current_instruction = 0x88095BC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// stw r10,260(r1)
	ctx.current_instruction = 0x88095BCC;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// lwz r10,212(r1)
	ctx.current_instruction = 0x88095BD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r23,228(r1)
	ctx.current_instruction = 0x88095BD8;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// stw r11,240(r1)
	ctx.current_instruction = 0x88095BDC;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stw r19,252(r1)
	ctx.current_instruction = 0x88095BE0;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r19.u32);
	// stw r16,244(r1)
	ctx.current_instruction = 0x88095BE4;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r16.u32);
	// stw r9,312(r1)
	ctx.current_instruction = 0x88095BE8;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// stw r8,316(r1)
	ctx.current_instruction = 0x88095BEC;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// stw r15,300(r1)
	ctx.current_instruction = 0x88095BF0;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r15.u32);
	// stw r7,308(r1)
	ctx.current_instruction = 0x88095BF4;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// beq cr6,0x88095c14
	if (ctx.cr6.eq) goto loc_88095C14;
	// lwz r11,288(r1)
	ctx.current_instruction = 0x88095BFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88095c14
	if (ctx.cr6.eq) goto loc_88095C14;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x88095C08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// stw r10,276(r1)
	ctx.current_instruction = 0x88095C0C;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// b 0x88095c1c
	goto loc_88095C1C;
loc_88095C14:
	// lwz r11,216(r1)
	ctx.current_instruction = 0x88095C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// stw r10,216(r1)
	ctx.current_instruction = 0x88095C18;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
loc_88095C1C:
	// stw r11,212(r1)
	ctx.current_instruction = 0x88095C1C;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
loc_88095C20:
	// lwz r11,272(r1)
	ctx.current_instruction = 0x88095C20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,268(r1)
	ctx.current_instruction = 0x88095C24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r9,1540(r1)
	ctx.current_instruction = 0x88095C28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r11,272(r1)
	ctx.current_instruction = 0x88095C34;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r8,268(r1)
	ctx.current_instruction = 0x88095C3C;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// blt cr6,0x88095754
	if (ctx.cr6.lt) goto loc_88095754;
	// lwz r16,1468(r1)
	ctx.current_instruction = 0x88095C44;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// lwz r19,1460(r1)
	ctx.current_instruction = 0x88095C48;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1460);
	// lwz r29,1484(r1)
	ctx.current_instruction = 0x88095C4C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1484);
	// lwz r28,1476(r1)
	ctx.current_instruction = 0x88095C50;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1476);
loc_88095C54:
	// lwz r11,240(r1)
	ctx.current_instruction = 0x88095C54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r10,252(r1)
	ctx.current_instruction = 0x88095C58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,244(r1)
	ctx.current_instruction = 0x88095C5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,260(r1)
	ctx.current_instruction = 0x88095C60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,1524(r1)
	ctx.current_instruction = 0x88095C68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r15,r30,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r14,r31,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88095d18
	if (ctx.cr6.eq) goto loc_88095D18;
	// lwz r9,2608(r18)
	ctx.current_instruction = 0x88095C80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,2604(r18)
	ctx.current_instruction = 0x88095C88;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r18.u32 + 2604);
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r11,r16,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r16.u64;
	// lwz r27,2616(r18)
	ctx.current_instruction = 0x88095C94;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r18.u32 + 2616);
	// subf r10,r19,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r19.u64;
	// lwz r26,2612(r18)
	ctx.current_instruction = 0x88095C9C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r18.u32 + 2612);
	// add r5,r11,r14
	ctx.r5.u64 = ctx.r11.u64 + ctx.r14.u64;
	// add r4,r10,r15
	ctx.r4.u64 = ctx.r10.u64 + ctx.r15.u64;
	// and r3,r5,r27
	ctx.r3.u64 = ctx.r5.u64 & ctx.r27.u64;
	// and r11,r4,r26
	ctx.r11.u64 = ctx.r4.u64 & ctx.r26.u64;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x88085e60
	ctx.lr = 0x88095CC8;
	sub_88085E60(ctx, base);
loc_88095CC8:
	// subf r11,r29,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r29.u64;
	// subf r10,r28,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r28.u64;
	// add r9,r11,r14
	ctx.r9.u64 = ctx.r11.u64 + ctx.r14.u64;
	// add r8,r10,r15
	ctx.r8.u64 = ctx.r10.u64 + ctx.r15.u64;
	// and r5,r9,r27
	ctx.r5.u64 = ctx.r9.u64 & ctx.r27.u64;
	// and r4,r8,r26
	ctx.r4.u64 = ctx.r8.u64 & ctx.r26.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r5,r25,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r25.u64;
	// subf r4,r24,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085e60
	ctx.lr = 0x88095CFC;
	sub_88085E60(ctx, base);
loc_88095CFC:
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x88095d0c
	if (!ctx.cr6.lt) goto loc_88095D0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x88095d18
	goto loc_88095D18;
loc_88095D0C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_88095D18:
	// lwz r11,28088(r18)
	ctx.current_instruction = 0x88095D18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 28088);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88095d30
	if (ctx.cr6.eq) goto loc_88095D30;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x88095d44
	goto loc_88095D44;
loc_88095D30:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwz r5,1564(r1)
	ctx.current_instruction = 0x88095D34;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88095d44
	if (!ctx.cr6.eq) goto loc_88095D44;
	// li r5,0
	ctx.r5.s64 = 0;
loc_88095D44:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,1556(r1)
	ctx.current_instruction = 0x88095D48;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// bl 0x880e2660
	ctx.lr = 0x88095D50;
	sub_880E2660(ctx, base);
loc_88095D50:
	// lwz r11,256(r1)
	ctx.current_instruction = 0x88095D50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// stw r10,256(r1)
	ctx.current_instruction = 0x88095D5C;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// lwz r10,228(r1)
	ctx.current_instruction = 0x88095D60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88095e44
	if (!ctx.cr6.eq) goto loc_88095E44;
	// clrlwi r7,r19,30
	ctx.r7.u64 = ctx.r19.u32 & 0x3;
	// stw r7,232(r1)
	ctx.current_instruction = 0x88095D74;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// clrlwi r8,r16,30
	ctx.r8.u64 = ctx.r16.u32 & 0x3;
	// stw r8,236(r1)
	ctx.current_instruction = 0x88095D7C;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// srawi r6,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r19.s32 >> 2;
	// lwz r4,1380(r18)
	ctx.current_instruction = 0x88095D84;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// srawi r11,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r16.s32 >> 2;
	// lwz r10,2488(r18)
	ctx.current_instruction = 0x88095D8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 2488);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r31,280(r1)
	ctx.current_instruction = 0x88095D94;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r11,260(r1)
	ctx.current_instruction = 0x88095D98;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lwz r3,1428(r1)
	ctx.current_instruction = 0x88095DA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1428);
	// stw r9,84(r1)
	ctx.current_instruction = 0x88095DA4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r6,240(r1)
	ctx.current_instruction = 0x88095DA8;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,1560(r18)
	ctx.current_instruction = 0x88095DB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 1560);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,244(r1)
	ctx.current_instruction = 0x88095DC4;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r30,252(r1)
	ctx.current_instruction = 0x88095DCC;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x88095DD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88095DD8:
	// lwz r11,248(r1)
	ctx.current_instruction = 0x88095DD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r3,1420(r1)
	ctx.current_instruction = 0x88095DE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88095DF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88095DF8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,158
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 158, ctx.xer);
	// bgt cr6,0x88095e34
	if (ctx.cr6.gt) goto loc_88095E34;
	// lwz r11,264(r1)
	ctx.current_instruction = 0x88095E04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x88095E10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x88095E14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r21
	ctx.current_instruction = 0x88095E20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r11,r5,r21
	ctx.current_instruction = 0x88095E24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x88096f98
	goto loc_88096F98;
loc_88095E34:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x88095E34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x88096f98
	goto loc_88096F98;
loc_88095E44:
	// lwz r11,1508(r1)
	ctx.current_instruction = 0x88095E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// lwz r10,1516(r1)
	ctx.current_instruction = 0x88095E48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
	// subf r9,r31,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r31.u64;
	// lwz r8,1492(r1)
	ctx.current_instruction = 0x88095E50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// subf r4,r31,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r31.u64;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88095E58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// addic r3,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// lwz r29,1500(r1)
	ctx.current_instruction = 0x88095E60;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// subf r28,r30,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r30.u64;
	// lwz r7,252(r1)
	ctx.current_instruction = 0x88095E68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// subfe r10,r3,r9
	temp.u8 = (~ctx.r3.u32 + ctx.r9.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,316(r1)
	ctx.current_instruction = 0x88095E70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addic r8,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// lwz r3,244(r1)
	ctx.current_instruction = 0x88095E78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mullw r11,r31,r6
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// lwz r31,240(r1)
	ctx.current_instruction = 0x88095E80;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r27,308(r1)
	ctx.current_instruction = 0x88095E84;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r5,312(r1)
	ctx.current_instruction = 0x88095E88;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r26,300(r1)
	ctx.current_instruction = 0x88095E8C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r24,1428(r1)
	ctx.current_instruction = 0x88095E90;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1428);
	// stw r10,276(r1)
	ctx.current_instruction = 0x88095E94;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// subfe r8,r8,r4
	temp.u8 = (~ctx.r8.u32 + ctx.r4.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r4.s64 = ctx.r28.s64 + -1;
	// subf r30,r30,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r30.u64;
	// stw r8,284(r1)
	ctx.current_instruction = 0x88095EA4;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r8.u32);
	// subfe r23,r4,r28
	temp.u8 = (~ctx.r4.u32 + ctx.r28.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r23.u64 = ~ctx.r4.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addic r4,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// stw r23,272(r1)
	ctx.current_instruction = 0x88095EB4;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r23.u32);
	// subf r25,r9,r3
	ctx.r25.u64 = ctx.r3.u64 - ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r9,r9,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r9.u64;
	// subfe r3,r4,r30
	temp.u8 = (~ctx.r4.u32 + ctx.r30.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r17,r5,r26
	ctx.r17.u64 = ctx.r26.u64 - ctx.r5.u64;
	// stw r9,288(r1)
	ctx.current_instruction = 0x88095ECC;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// subf r20,r5,r7
	ctx.r20.u64 = ctx.r7.u64 - ctx.r5.u64;
	// stw r3,224(r1)
	ctx.current_instruction = 0x88095ED4;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880961e0
	if (!ctx.cr6.eq) goto loc_880961E0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880961e0
	if (ctx.cr6.eq) goto loc_880961E0;
	// subf r30,r19,r15
	ctx.r30.u64 = ctx.r15.u64 - ctx.r19.u64;
	// subf r28,r16,r14
	ctx.r28.u64 = ctx.r14.u64 - ctx.r16.u64;
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
	// bgt cr6,0x88095f5c
	if (ctx.cr6.gt) goto loc_88095F5C;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x88095f5c
	if (ctx.cr6.gt) goto loc_88095F5C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,264(r1)
	ctx.current_instruction = 0x88095F34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x88095F3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x88095F40;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r21
	ctx.current_instruction = 0x88095F4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r10,r4,r21
	ctx.current_instruction = 0x88095F50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88095f64
	goto loc_88095F64;
loc_88095F5C:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x88095F5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88095F64:
	// lwz r22,248(r1)
	ctx.current_instruction = 0x88095F64;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,1420(r1)
	ctx.current_instruction = 0x88095F70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x88095F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88095F80:
	// srawi r11,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 31;
	// lwz r10,212(r1)
	ctx.current_instruction = 0x88095F84;
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
	ctx.current_instruction = 0x88095FA0;
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// bgt cr6,0x88095fdc
	if (ctx.cr6.gt) goto loc_88095FDC;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x88095fdc
	if (ctx.cr6.gt) goto loc_88095FDC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,264(r1)
	ctx.current_instruction = 0x88095FB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x88095FBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x88095FC0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r21
	ctx.current_instruction = 0x88095FCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r10,r5,r21
	ctx.current_instruction = 0x88095FD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88095fe4
	goto loc_88095FE4;
loc_88095FDC:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x88095FDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88095FE4:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88095FE8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// lwz r3,1420(r1)
	ctx.current_instruction = 0x88095FF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x88096000;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096000:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r20,-7
	ctx.r11.s64 = ctx.r20.s64 + -7;
	// lwz r10,212(r1)
	ctx.current_instruction = 0x88096008;
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
	ctx.current_instruction = 0x88096020;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88096060
	if (ctx.cr6.gt) goto loc_88096060;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x88096060
	if (ctx.cr6.gt) goto loc_88096060;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,264(r1)
	ctx.current_instruction = 0x88096038;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x88096040;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x88096044;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r21
	ctx.current_instruction = 0x88096050;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r10,r5,r21
	ctx.current_instruction = 0x88096054;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88096068
	goto loc_88096068;
loc_88096060:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x88096060;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88096068:
	// lwz r27,1420(r1)
	ctx.current_instruction = 0x88096068;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r26,2
	ctx.r5.s64 = ctx.r26.s64 + 2;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88096074;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x88096088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096088:
	// addi r11,r20,-6
	ctx.r11.s64 = ctx.r20.s64 + -6;
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r29,212(r1)
	ctx.current_instruction = 0x88096090;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stwx r10,r9,r29
	ctx.current_instruction = 0x8809609C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u32);
	// bne cr6,0x8809612c
	if (!ctx.cr6.eq) goto loc_8809612C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8809612c
	if (ctx.cr6.eq) goto loc_8809612C;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x880960B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880960C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880960C8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x880960E0;
	sub_88085820(ctx, base);
loc_880960E0:
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x880960E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,-4(r29)
	ctx.current_instruction = 0x880960EC;
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x88096108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096108:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x88096120;
	sub_88085820(ctx, base);
loc_88096120:
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r10,24(r29)
	ctx.current_instruction = 0x88096124;
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// b 0x88096718
	goto loc_88096718;
loc_8809612C:
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x88096718
	if (!ctx.cr6.eq) goto loc_88096718;
	// lwz r11,224(r1)
	ctx.current_instruction = 0x88096134;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88096718
	if (ctx.cr6.eq) goto loc_88096718;
	// lwz r29,248(r1)
	ctx.current_instruction = 0x88096140;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r26,1420(r1)
	ctx.current_instruction = 0x88096148;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88096154;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88096164;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096164:
	// lwz r27,1548(r1)
	ctx.current_instruction = 0x88096164;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x88096180;
	sub_88085820(ctx, base);
loc_88096180:
	// addi r11,r17,1
	ctx.r11.s64 = ctx.r17.s64 + 1;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// lwz r29,212(r1)
	ctx.current_instruction = 0x88096188;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88096190;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// add r9,r24,r3
	ctx.r9.u64 = ctx.r24.u64 + ctx.r3.u64;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r29
	ctx.current_instruction = 0x880961A4;
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x880961B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880961B4:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x880961CC;
	sub_88085820(ctx, base);
loc_880961CC:
	// addi r8,r17,8
	ctx.r8.s64 = ctx.r17.s64 + 8;
	// add r7,r26,r3
	ctx.r7.u64 = ctx.r26.u64 + ctx.r3.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r29
	ctx.current_instruction = 0x880961D8;
	REX_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r7.u32);
	// b 0x88096718
	goto loc_88096718;
loc_880961E0:
	// cmpw cr6,r25,r9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88096510
	if (!ctx.cr6.eq) goto loc_88096510;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88096510
	if (ctx.cr6.eq) goto loc_88096510;
	// subf r30,r19,r15
	ctx.r30.u64 = ctx.r15.u64 - ctx.r19.u64;
	// subf r26,r16,r14
	ctx.r26.u64 = ctx.r14.u64 - ctx.r16.u64;
	// addi r22,r30,-4
	ctx.r22.s64 = ctx.r30.s64 + -4;
	// addi r9,r26,4
	ctx.r9.s64 = ctx.r26.s64 + 4;
	// srawi r8,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r22.s32 >> 31;
	// add r11,r20,r6
	ctx.r11.u64 = ctx.r20.u64 + ctx.r6.u64;
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
	// bgt cr6,0x88096260
	if (ctx.cr6.gt) goto loc_88096260;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x88096260
	if (ctx.cr6.gt) goto loc_88096260;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,264(r1)
	ctx.current_instruction = 0x88096238;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x88096240;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x88096244;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r21
	ctx.current_instruction = 0x88096250;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// lwzx r11,r4,r21
	ctx.current_instruction = 0x88096254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r21.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88096268
	goto loc_88096268;
loc_88096260:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x88096260;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88096268:
	// lwz r11,248(r1)
	ctx.current_instruction = 0x88096268;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r3,1420(r1)
	ctx.current_instruction = 0x88096274;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// subf r21,r25,r10
	ctx.r21.u64 = ctx.r10.u64 - ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r28,r21,r20
	ctx.r28.u64 = ctx.r21.u64 + ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88096290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096290:
	// srawi r9,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 31;
	// addi r8,r28,6
	ctx.r8.s64 = ctx.r28.s64 + 6;
	// lwz r7,212(r1)
	ctx.current_instruction = 0x88096298;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
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
	ctx.current_instruction = 0x880962B0;
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u32);
	// bgt cr6,0x880962f0
	if (ctx.cr6.gt) goto loc_880962F0;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x880962f0
	if (ctx.cr6.gt) goto loc_880962F0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,264(r1)
	ctx.current_instruction = 0x880962C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// rlwinm r8,r23,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1548(r1)
	ctx.current_instruction = 0x880962CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x880962D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x880962D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.current_instruction = 0x880962E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r10,r5,r10
	ctx.current_instruction = 0x880962E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880962fc
	goto loc_880962FC;
loc_880962F0:
	// lwz r11,1548(r1)
	ctx.current_instruction = 0x880962F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x880962F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_880962FC:
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880962FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r24,1
	ctx.r5.s64 = ctx.r24.s64 + 1;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88096308;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1420(r1)
	ctx.current_instruction = 0x88096310;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809631C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809631C:
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// lwz r10,212(r1)
	ctx.current_instruction = 0x88096320;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r9,r28,7
	ctx.r9.s64 = ctx.r28.s64 + 7;
	// srawi r8,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 31;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r6,r29,r8
	ctx.r6.u64 = ctx.r29.u64 ^ ctx.r8.u64;
	// add r5,r3,r27
	ctx.r5.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// stwx r5,r7,r10
	ctx.current_instruction = 0x8809633C;
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r5.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88096380
	if (ctx.cr6.gt) goto loc_88096380;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x88096380
	if (ctx.cr6.gt) goto loc_88096380;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,264(r1)
	ctx.current_instruction = 0x88096354;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r23,1548(r1)
	ctx.current_instruction = 0x8809635C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x88096360;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x88096364;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r23
	ctx.current_instruction = 0x88096370;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// lwzx r11,r5,r23
	ctx.current_instruction = 0x88096374;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809638c
	goto loc_8809638C;
loc_88096380:
	// lwz r23,1548(r1)
	ctx.current_instruction = 0x88096380;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lwz r11,20(r23)
	ctx.current_instruction = 0x88096384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809638C:
	// lwz r27,248(r1)
	ctx.current_instruction = 0x8809638C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// addi r5,r24,2
	ctx.r5.s64 = ctx.r24.s64 + 2;
	// lwz r24,1420(r1)
	ctx.current_instruction = 0x88096394;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x880963A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880963B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880963B0:
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// lwz r28,212(r1)
	ctx.current_instruction = 0x880963B4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stwx r10,r9,r28
	ctx.current_instruction = 0x880963C4;
	REX_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r10.u32);
	// bne cr6,0x88096468
	if (!ctx.cr6.eq) goto loc_88096468;
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880963CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88096468
	if (ctx.cr6.eq) goto loc_88096468;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x880963DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r25.u64;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x88096404;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096404:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x8809641C;
	sub_88085820(ctx, base);
loc_8809641C:
	// add r9,r29,r3
	ctx.r9.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88096420;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,-4(r30)
	ctx.current_instruction = 0x88096428;
	REX_STORE_U32(ctx.r30.u32 + -4, ctx.r9.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// subf r11,r6,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r6.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x88096444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096444:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r26,-4
	ctx.r5.s64 = ctx.r26.s64 + -4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x8809645C;
	sub_88085820(ctx, base);
loc_8809645C:
	// add r8,r29,r3
	ctx.r8.u64 = ctx.r29.u64 + ctx.r3.u64;
	// stw r8,-32(r30)
	ctx.current_instruction = 0x88096460;
	REX_STORE_U32(ctx.r30.u32 + -32, ctx.r8.u32);
	// b 0x88096718
	goto loc_88096718;
loc_88096468:
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x88096718
	if (!ctx.cr6.eq) goto loc_88096718;
	// lwz r11,224(r1)
	ctx.current_instruction = 0x88096470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88096718
	if (ctx.cr6.eq) goto loc_88096718;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88096480;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r30,r21,r17
	ctx.r30.u64 = ctx.r21.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x8809649C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809649C:
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x880964B4;
	sub_88085820(ctx, base);
loc_880964B4:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// add r10,r22,r3
	ctx.r10.u64 = ctx.r22.u64 + ctx.r3.u64;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x880964BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// subf r11,r6,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r6.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// stwx r10,r9,r28
	ctx.current_instruction = 0x880964D8;
	REX_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880964E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880964E4:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r26,-4
	ctx.r5.s64 = ctx.r26.s64 + -4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x880964FC;
	sub_88085820(ctx, base);
loc_880964FC:
	// addi r8,r30,-6
	ctx.r8.s64 = ctx.r30.s64 + -6;
	// add r7,r27,r3
	ctx.r7.u64 = ctx.r27.u64 + ctx.r3.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r28
	ctx.current_instruction = 0x88096508;
	REX_STORE_U32(ctx.r6.u32 + ctx.r28.u32, ctx.r7.u32);
	// b 0x88096718
	goto loc_88096718;
loc_88096510:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x88096608
	if (!ctx.cr6.eq) goto loc_88096608;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88096608
	if (ctx.cr6.eq) goto loc_88096608;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88096524;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// lwz r27,248(r1)
	ctx.current_instruction = 0x88096528;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// subf r10,r19,r15
	ctx.r10.u64 = ctx.r15.u64 - ctx.r19.u64;
	// subf r8,r25,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r25.u64;
	// lwz r26,1420(r1)
	ctx.current_instruction = 0x88096534;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// subf r9,r6,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r29,212(r1)
	ctx.current_instruction = 0x8809653C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// subf r28,r16,r14
	ctx.r28.u64 = ctx.r14.u64 - ctx.r16.u64;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88096568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096568:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r28,-4
	ctx.r5.s64 = ctx.r28.s64 + -4;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x88096580;
	sub_88085820(ctx, base);
loc_88096580:
	// add r7,r24,r3
	ctx.r7.u64 = ctx.r24.u64 + ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88096588;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// stw r7,-32(r29)
	ctx.current_instruction = 0x8809658C;
	REX_STORE_U32(ctx.r29.u32 + -32, ctx.r7.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bctrl 
	ctx.lr = 0x880965A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880965A4:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x880965BC;
	sub_88085820(ctx, base);
loc_880965BC:
	// add r5,r24,r3
	ctx.r5.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x880965C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r5,-4(r29)
	ctx.current_instruction = 0x880965C8;
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r5.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x880965E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880965E4:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x880965FC;
	sub_88085820(ctx, base);
loc_880965FC:
	// add r4,r27,r3
	ctx.r4.u64 = ctx.r27.u64 + ctx.r3.u64;
	// stw r4,24(r29)
	ctx.current_instruction = 0x88096600;
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r4.u32);
	// b 0x88096718
	goto loc_88096718;
loc_88096608:
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x88096718
	if (!ctx.cr6.eq) goto loc_88096718;
	// lwz r11,224(r1)
	ctx.current_instruction = 0x88096610;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88096718
	if (ctx.cr6.eq) goto loc_88096718;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x8809661C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r27,248(r1)
	ctx.current_instruction = 0x88096624;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// subf r10,r19,r15
	ctx.r10.u64 = ctx.r15.u64 - ctx.r19.u64;
	// lwz r23,1420(r1)
	ctx.current_instruction = 0x8809662C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// subf r9,r6,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r6.u64;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// subf r28,r16,r14
	ctx.r28.u64 = ctx.r14.u64 - ctx.r16.u64;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// add r29,r11,r17
	ctx.r29.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x8809665C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809665C:
	// lwz r24,1548(r1)
	ctx.current_instruction = 0x8809665C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r28,-4
	ctx.r5.s64 = ctx.r28.s64 + -4;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x88096678;
	sub_88085820(ctx, base);
loc_88096678:
	// addi r10,r29,-6
	ctx.r10.s64 = ctx.r29.s64 + -6;
	// lwz r26,212(r1)
	ctx.current_instruction = 0x8809667C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r9,r22,r3
	ctx.r9.u64 = ctx.r22.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88096688;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// stwx r9,r8,r26
	ctx.current_instruction = 0x880966A0;
	REX_STORE_U32(ctx.r8.u32 + ctx.r26.u32, ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x880966A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880966A8:
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x880966C0;
	sub_88085820(ctx, base);
loc_880966C0:
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// add r4,r22,r3
	ctx.r4.u64 = ctx.r22.u64 + ctx.r3.u64;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x880966C8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stwx r4,r3,r26
	ctx.current_instruction = 0x880966E0;
	REX_STORE_U32(ctx.r3.u32 + ctx.r26.u32, ctx.r4.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x880966F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880966F0:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x88096708;
	sub_88085820(ctx, base);
loc_88096708:
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// add r10,r27,r3
	ctx.r10.u64 = ctx.r27.u64 + ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r26
	ctx.current_instruction = 0x88096714;
	REX_STORE_U32(ctx.r9.u32 + ctx.r26.u32, ctx.r10.u32);
loc_88096718:
	// lwz r9,2604(r18)
	ctx.current_instruction = 0x88096718;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 2604);
	// lwz r8,2608(r18)
	ctx.current_instruction = 0x8809671C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r18.u32 + 2608);
	// subf r10,r19,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r19.u64;
	// lwz r7,2612(r18)
	ctx.current_instruction = 0x88096724;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r18.u32 + 2612);
	// subf r11,r16,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r16.u64;
	// lwz r6,2616(r18)
	ctx.current_instruction = 0x8809672C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 2616);
	// add r5,r10,r15
	ctx.r5.u64 = ctx.r10.u64 + ctx.r15.u64;
	// lwz r4,28036(r18)
	ctx.current_instruction = 0x88096734;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 28036);
	// add r3,r11,r14
	ctx.r3.u64 = ctx.r11.u64 + ctx.r14.u64;
	// and r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 & ctx.r7.u64;
	// and r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 & ctx.r6.u64;
	// subf r30,r9,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r29,r8,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88096bc8
	if (ctx.cr6.eq) goto loc_88096BC8;
	// lwz r11,2496(r18)
	ctx.current_instruction = 0x88096754;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 2496);
	// li r26,16
	ctx.r26.s64 = 16;
	// lwz r27,280(r1)
	ctx.current_instruction = 0x8809675C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// lwz r4,1380(r18)
	ctx.current_instruction = 0x88096768;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,1560(r18)
	ctx.current_instruction = 0x88096770;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 1560);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x88096778;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8809678C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809678C:
	// lwz r22,1452(r1)
	ctx.current_instruction = 0x8809678C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1452);
	// lwz r23,1444(r1)
	ctx.current_instruction = 0x88096790;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// addi r6,r1,220
	ctx.r6.s64 = ctx.r1.s64 + 220;
	// lwz r28,292(r1)
	ctx.current_instruction = 0x8809679C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r24,1420(r1)
	ctx.current_instruction = 0x880967A4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// stw r9,100(r1)
	ctx.current_instruction = 0x880967A8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r6,92(r1)
	ctx.current_instruction = 0x880967B0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r5,84(r1)
	ctx.current_instruction = 0x880967B8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r22,116(r1)
	ctx.current_instruction = 0x880967C4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r23,108(r1)
	ctx.current_instruction = 0x880967CC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085938
	ctx.lr = 0x880967E0;
	sub_88085938(ctx, base);
loc_880967E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,216(r1)
	ctx.current_instruction = 0x880967E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085e60
	ctx.lr = 0x880967F8;
	sub_88085E60(ctx, base);
loc_880967F8:
	// lwz r4,208(r1)
	ctx.current_instruction = 0x880967F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,1524(r1)
	ctx.current_instruction = 0x880967FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r11,208(r1)
	ctx.current_instruction = 0x88096804;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88096818
	if (ctx.cr6.eq) goto loc_88096818;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,208(r1)
	ctx.current_instruction = 0x88096814;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_88096818:
	// addi r8,r1,268
	ctx.r8.s64 = ctx.r1.s64 + 268;
	// lwz r5,212(r1)
	ctx.current_instruction = 0x8809681C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r5,100(r1)
	ctx.current_instruction = 0x88096820;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r8,196(r1)
	ctx.current_instruction = 0x88096828;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// addi r21,r17,1
	ctx.r21.s64 = ctx.r17.s64 + 1;
	// lwz r8,224(r1)
	ctx.current_instruction = 0x88096830;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r17,r1,236
	ctx.r17.s64 = ctx.r1.s64 + 236;
	// lwz r31,272(r1)
	ctx.current_instruction = 0x88096838;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r9,288(r1)
	ctx.current_instruction = 0x88096840;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r10,172(r1)
	ctx.current_instruction = 0x88096848;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,108(r28)
	ctx.current_instruction = 0x88096850;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 108);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r8,92(r1)
	ctx.current_instruction = 0x88096858;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r31,84(r1)
	ctx.current_instruction = 0x8809685C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r9,220(r1)
	ctx.current_instruction = 0x88096864;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r22,156(r1)
	ctx.current_instruction = 0x88096868;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// stw r3,124(r1)
	ctx.current_instruction = 0x8809686C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lwz r10,284(r1)
	ctx.current_instruction = 0x88096870;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r28,164(r1)
	ctx.current_instruction = 0x88096874;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r27,108(r1)
	ctx.current_instruction = 0x88096878;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r30,132(r1)
	ctx.current_instruction = 0x8809687C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r21,116(r1)
	ctx.current_instruction = 0x88096880;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r17,188(r1)
	ctx.current_instruction = 0x88096884;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r17.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,276(r1)
	ctx.current_instruction = 0x8809688C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r22,r1,232
	ctx.r22.s64 = ctx.r1.s64 + 232;
	// stw r23,148(r1)
	ctx.current_instruction = 0x88096894;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r29,140(r1)
	ctx.current_instruction = 0x8809689C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r22,180(r1)
	ctx.current_instruction = 0x880968A0;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r8,268(r1)
	ctx.current_instruction = 0x880968A4;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// bl 0x8808f1d0
	ctx.lr = 0x880968AC;
	sub_8808F1D0(ctx, base);
loc_880968AC:
	// lwz r7,232(r1)
	ctx.current_instruction = 0x880968AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r6,r15,r7
	ctx.r6.u64 = ctx.r15.u64 + ctx.r7.u64;
	// cmpw cr6,r6,r19
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880968cc
	if (!ctx.cr6.eq) goto loc_880968CC;
	// lwz r11,236(r1)
	ctx.current_instruction = 0x880968BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r10,r14,r11
	ctx.r10.u64 = ctx.r14.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x88096a24
	if (ctx.cr6.eq) goto loc_88096A24;
loc_880968CC:
	// srawi r28,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r19.s32 >> 2;
	// lwz r10,1492(r1)
	ctx.current_instruction = 0x880968D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// srawi r27,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r16.s32 >> 2;
	// clrlwi r31,r19,30
	ctx.r31.u64 = ctx.r19.u32 & 0x3;
	// clrlwi r30,r16,30
	ctx.r30.u64 = ctx.r16.u32 & 0x3;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880968fc
	if (ctx.cr6.lt) goto loc_880968FC;
	// lwz r10,1500(r1)
	ctx.current_instruction = 0x880968F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88096900
	if (!ctx.cr6.gt) goto loc_88096900;
loc_880968FC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_88096900:
	// lwz r10,1508(r1)
	ctx.current_instruction = 0x88096900;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88096918
	if (ctx.cr6.lt) goto loc_88096918;
	// lwz r10,1516(r1)
	ctx.current_instruction = 0x8809690C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8809691c
	if (!ctx.cr6.gt) goto loc_8809691C;
loc_88096918:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8809691C:
	// lwz r4,1380(r18)
	ctx.current_instruction = 0x8809691C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,2488(r18)
	ctx.current_instruction = 0x88096924;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 2488);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r29,280(r1)
	ctx.current_instruction = 0x88096930;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r3,1428(r1)
	ctx.current_instruction = 0x88096934;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1428);
	// lwz r10,1560(r18)
	ctx.current_instruction = 0x88096938;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 1560);
	// stw r26,84(r1)
	ctx.current_instruction = 0x8809693C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x8809695C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809695C:
	// lwz r11,1444(r1)
	ctx.current_instruction = 0x8809695C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// lwz r10,1452(r1)
	ctx.current_instruction = 0x88096964;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1452);
	// addi r8,r1,220
	ctx.r8.s64 = ctx.r1.s64 + 220;
	// stw r10,116(r1)
	ctx.current_instruction = 0x8809696C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// stw r9,100(r1)
	ctx.current_instruction = 0x88096974;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	ctx.current_instruction = 0x88096978;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r7,84(r1)
	ctx.current_instruction = 0x88096980;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,108(r1)
	ctx.current_instruction = 0x88096988;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r25,292(r1)
	ctx.current_instruction = 0x88096990;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,1420(r1)
	ctx.current_instruction = 0x8809699C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085938
	ctx.lr = 0x880969AC;
	sub_88085938(ctx, base);
loc_880969AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,216(r1)
	ctx.current_instruction = 0x880969B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085e60
	ctx.lr = 0x880969C4;
	sub_88085E60(ctx, base);
loc_880969C4:
	// lwz r6,208(r1)
	ctx.current_instruction = 0x880969C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r5,1524(r1)
	ctx.current_instruction = 0x880969C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,208(r1)
	ctx.current_instruction = 0x880969D4;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// beq cr6,0x880969e4
	if (ctx.cr6.eq) goto loc_880969E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,208(r1)
	ctx.current_instruction = 0x880969E0;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_880969E4:
	// lwz r9,108(r25)
	ctx.current_instruction = 0x880969E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r10,220(r1)
	ctx.current_instruction = 0x880969E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r29,268(r1)
	ctx.current_instruction = 0x880969F0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x88096a28
	if (!ctx.cr6.lt) goto loc_88096A28;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r31,232(r1)
	ctx.current_instruction = 0x88096A04;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,236(r1)
	ctx.current_instruction = 0x88096A0C;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r28,240(r1)
	ctx.current_instruction = 0x88096A10;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r28.u32);
	// stw r27,260(r1)
	ctx.current_instruction = 0x88096A14;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r11,244(r1)
	ctx.current_instruction = 0x88096A18;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r11,252(r1)
	ctx.current_instruction = 0x88096A1C;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// b 0x88096a28
	goto loc_88096A28;
loc_88096A24:
	// lwz r29,268(r1)
	ctx.current_instruction = 0x88096A24;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
loc_88096A28:
	// lwz r11,1524(r1)
	ctx.current_instruction = 0x88096A28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88096bc0
	if (ctx.cr6.eq) goto loc_88096BC0;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x88096A34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r10,240(r1)
	ctx.current_instruction = 0x88096A38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r9,232(r1)
	ctx.current_instruction = 0x88096A3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,1476(r1)
	ctx.current_instruction = 0x88096A44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1476);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x88096a7c
	if (!ctx.cr6.eq) goto loc_88096A7C;
	// lwz r11,244(r1)
	ctx.current_instruction = 0x88096A58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r10,260(r1)
	ctx.current_instruction = 0x88096A5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r9,236(r1)
	ctx.current_instruction = 0x88096A60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,1484(r1)
	ctx.current_instruction = 0x88096A68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1484);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x88096bc0
	if (ctx.cr6.eq) goto loc_88096BC0;
loc_88096A7C:
	// lwz r10,1476(r1)
	ctx.current_instruction = 0x88096A7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1476);
	// lwz r11,1484(r1)
	ctx.current_instruction = 0x88096A80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1484);
	// srawi r28,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 2;
	// clrlwi r31,r10,30
	ctx.r31.u64 = ctx.r10.u32 & 0x3;
	// lwz r10,1492(r1)
	ctx.current_instruction = 0x88096A8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	// clrlwi r30,r11,30
	ctx.r30.u64 = ctx.r11.u32 & 0x3;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88096ab4
	if (ctx.cr6.lt) goto loc_88096AB4;
	// lwz r10,1500(r1)
	ctx.current_instruction = 0x88096AA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88096ab8
	if (!ctx.cr6.gt) goto loc_88096AB8;
loc_88096AB4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_88096AB8:
	// lwz r10,1508(r1)
	ctx.current_instruction = 0x88096AB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88096ad0
	if (ctx.cr6.lt) goto loc_88096AD0;
	// lwz r10,1516(r1)
	ctx.current_instruction = 0x88096AC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88096ad4
	if (!ctx.cr6.gt) goto loc_88096AD4;
loc_88096AD0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88096AD4:
	// lwz r4,1380(r18)
	ctx.current_instruction = 0x88096AD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,2488(r18)
	ctx.current_instruction = 0x88096ADC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 2488);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// stw r26,84(r1)
	ctx.current_instruction = 0x88096AE8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lwz r26,280(r1)
	ctx.current_instruction = 0x88096AEC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r3,1428(r1)
	ctx.current_instruction = 0x88096AF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1428);
	// lwz r10,1560(r18)
	ctx.current_instruction = 0x88096AF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 1560);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x88096B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096B14:
	// lwz r11,1452(r1)
	ctx.current_instruction = 0x88096B14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1452);
	// lwz r8,1444(r1)
	ctx.current_instruction = 0x88096B18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// addi r6,r1,220
	ctx.r6.s64 = ctx.r1.s64 + 220;
	// lwz r25,292(r1)
	ctx.current_instruction = 0x88096B24;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stw r7,100(r1)
	ctx.current_instruction = 0x88096B28;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stw r6,92(r1)
	ctx.current_instruction = 0x88096B30;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r8,108(r1)
	ctx.current_instruction = 0x88096B38;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,116(r1)
	ctx.current_instruction = 0x88096B40;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r5,84(r1)
	ctx.current_instruction = 0x88096B48;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,1420(r1)
	ctx.current_instruction = 0x88096B54;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085938
	ctx.lr = 0x88096B64;
	sub_88085938(ctx, base);
loc_88096B64:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,216(r1)
	ctx.current_instruction = 0x88096B6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085e60
	ctx.lr = 0x88096B7C;
	sub_88085E60(ctx, base);
loc_88096B7C:
	// lwz r4,208(r1)
	ctx.current_instruction = 0x88096B7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lwz r3,108(r25)
	ctx.current_instruction = 0x88096B84;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r10,220(r1)
	ctx.current_instruction = 0x88096B88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x88096bc0
	if (!ctx.cr6.lt) goto loc_88096BC0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r31,232(r1)
	ctx.current_instruction = 0x88096BA4;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,236(r1)
	ctx.current_instruction = 0x88096BAC;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r28,240(r1)
	ctx.current_instruction = 0x88096BB0;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r28.u32);
	// stw r27,260(r1)
	ctx.current_instruction = 0x88096BB4;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r11,244(r1)
	ctx.current_instruction = 0x88096BB8;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r11,252(r1)
	ctx.current_instruction = 0x88096BBC;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
loc_88096BC0:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x88096f98
	goto loc_88096F98;
loc_88096BC8:
	// lwz r11,256(r1)
	ctx.current_instruction = 0x88096BC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r24,1420(r1)
	ctx.current_instruction = 0x88096BCC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88096c30
	if (ctx.cr6.eq) goto loc_88096C30;
	// lwz r11,1524(r1)
	ctx.current_instruction = 0x88096BD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88096c30
	if (!ctx.cr6.eq) goto loc_88096C30;
	// lwz r11,1556(r1)
	ctx.current_instruction = 0x88096BE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,1380(r18)
	ctx.current_instruction = 0x88096BF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r21,12(r11)
	ctx.current_instruction = 0x88096BFC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x88096C08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096C08:
	// lwz r22,1548(r1)
	ctx.current_instruction = 0x88096C08;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x88096C24;
	sub_88085820(ctx, base);
loc_88096C24:
	// add r11,r28,r3
	ctx.r11.u64 = ctx.r28.u64 + ctx.r3.u64;
	// stw r11,228(r1)
	ctx.current_instruction = 0x88096C28;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// b 0x88096c38
	goto loc_88096C38;
loc_88096C30:
	// lwz r21,248(r1)
	ctx.current_instruction = 0x88096C30;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r22,1548(r1)
	ctx.current_instruction = 0x88096C34;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
loc_88096C38:
	// lwz r5,1556(r1)
	ctx.current_instruction = 0x88096C38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// lwz r11,292(r1)
	ctx.current_instruction = 0x88096C40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r8,r1,228
	ctx.r8.s64 = ctx.r1.s64 + 228;
	// lwz r9,288(r1)
	ctx.current_instruction = 0x88096C48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// lwz r28,212(r1)
	ctx.current_instruction = 0x88096C50;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r26,r17,1
	ctx.r26.s64 = ctx.r17.s64 + 1;
	// lwz r27,280(r1)
	ctx.current_instruction = 0x88096C58;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r5,156(r1)
	ctx.current_instruction = 0x88096C60;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,188(r1)
	ctx.current_instruction = 0x88096C68;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r11,224(r1)
	ctx.current_instruction = 0x88096C70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r31,272(r1)
	ctx.current_instruction = 0x88096C78;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r8,180(r1)
	ctx.current_instruction = 0x88096C80;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stw r10,164(r1)
	ctx.current_instruction = 0x88096C84;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,124(r1)
	ctx.current_instruction = 0x88096C88;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r3,172(r1)
	ctx.current_instruction = 0x88096C8C;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r28,100(r1)
	ctx.current_instruction = 0x88096C94;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r22,148(r1)
	ctx.current_instruction = 0x88096C98;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r29,140(r1)
	ctx.current_instruction = 0x88096C9C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r26,116(r1)
	ctx.current_instruction = 0x88096CA0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r30,132(r1)
	ctx.current_instruction = 0x88096CA4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r27,108(r1)
	ctx.current_instruction = 0x88096CA8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x88096CAC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	ctx.current_instruction = 0x88096CB0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r8,28456(r18)
	ctx.current_instruction = 0x88096CB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r18.u32 + 28456);
	// lwz r10,284(r1)
	ctx.current_instruction = 0x88096CB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r9,276(r1)
	ctx.current_instruction = 0x88096CBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r8,228(r1)
	ctx.current_instruction = 0x88096CC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// bctrl 
	ctx.lr = 0x88096CCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096CCC:
	// clrlwi r31,r19,30
	ctx.r31.u64 = ctx.r19.u32 & 0x3;
	// li r26,16
	ctx.r26.s64 = 16;
	// clrlwi r30,r16,30
	ctx.r30.u64 = ctx.r16.u32 & 0x3;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x88096ce8
	if (!ctx.cr6.eq) goto loc_88096CE8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x88096e30
	if (ctx.cr6.eq) goto loc_88096E30;
loc_88096CE8:
	// lwz r11,232(r1)
	ctx.current_instruction = 0x88096CE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r10,r15,r11
	ctx.r10.u64 = ctx.r15.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x88096d08
	if (!ctx.cr6.eq) goto loc_88096D08;
	// lwz r11,236(r1)
	ctx.current_instruction = 0x88096CF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r10,r14,r11
	ctx.r10.u64 = ctx.r14.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x88096e30
	if (ctx.cr6.eq) goto loc_88096E30;
loc_88096D08:
	// srawi r29,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r19.s32 >> 2;
	// lwz r25,1492(r1)
	ctx.current_instruction = 0x88096D0C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// srawi r28,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r16.s32 >> 2;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x88096d2c
	if (!ctx.cr6.lt) goto loc_88096D2C;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// b 0x88096d3c
	goto loc_88096D3C;
loc_88096D2C:
	// lwz r10,1500(r1)
	ctx.current_instruction = 0x88096D2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88096d3c
	if (!ctx.cr6.gt) goto loc_88096D3C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_88096D3C:
	// lwz r23,1508(r1)
	ctx.current_instruction = 0x88096D3C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x88096d50
	if (!ctx.cr6.lt) goto loc_88096D50;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x88096d60
	goto loc_88096D60;
loc_88096D50:
	// lwz r10,1516(r1)
	ctx.current_instruction = 0x88096D50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88096d60
	if (!ctx.cr6.gt) goto loc_88096D60;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88096D60:
	// lwz r4,1380(r18)
	ctx.current_instruction = 0x88096D60;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,2488(r18)
	ctx.current_instruction = 0x88096D68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 2488);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r3,1428(r1)
	ctx.current_instruction = 0x88096D74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1428);
	// lwz r10,1560(r18)
	ctx.current_instruction = 0x88096D78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 1560);
	// stw r26,84(r1)
	ctx.current_instruction = 0x88096D7C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x88096D9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096D9C:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x88096DB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096DB8:
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmpwi cr6,r20,158
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 158, ctx.xer);
	// bgt cr6,0x88096df4
	if (ctx.cr6.gt) goto loc_88096DF4;
	// lwz r11,264(r1)
	ctx.current_instruction = 0x88096DC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x88096DD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x88096DD8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r22
	ctx.current_instruction = 0x88096DE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// lwzx r10,r5,r22
	ctx.current_instruction = 0x88096DE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r22.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88096dfc
	goto loc_88096DFC;
loc_88096DF4:
	// lwz r11,20(r22)
	ctx.current_instruction = 0x88096DF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88096DFC:
	// lwz r10,228(r1)
	ctx.current_instruction = 0x88096DFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88096e40
	if (!ctx.cr6.lt) goto loc_88096E40;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r31,232(r1)
	ctx.current_instruction = 0x88096E10;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stw r30,236(r1)
	ctx.current_instruction = 0x88096E14;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r11,228(r1)
	ctx.current_instruction = 0x88096E18;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r29,240(r1)
	ctx.current_instruction = 0x88096E1C;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r28,260(r1)
	ctx.current_instruction = 0x88096E20;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r20,244(r1)
	ctx.current_instruction = 0x88096E24;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r20.u32);
	// stw r20,252(r1)
	ctx.current_instruction = 0x88096E28;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r20.u32);
	// b 0x88096e40
	goto loc_88096E40;
loc_88096E30:
	// lwz r25,1492(r1)
	ctx.current_instruction = 0x88096E30;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r23,1508(r1)
	ctx.current_instruction = 0x88096E38;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// lwz r10,228(r1)
	ctx.current_instruction = 0x88096E3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
loc_88096E40:
	// lwz r11,1524(r1)
	ctx.current_instruction = 0x88096E40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88096f98
	if (ctx.cr6.eq) goto loc_88096F98;
	// lwz r8,1476(r1)
	ctx.current_instruction = 0x88096E4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1476);
	// lwz r9,1484(r1)
	ctx.current_instruction = 0x88096E50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1484);
	// clrlwi r29,r8,30
	ctx.r29.u64 = ctx.r8.u32 & 0x3;
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x88096e6c
	if (!ctx.cr6.eq) goto loc_88096E6C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x88096f98
	if (ctx.cr6.eq) goto loc_88096F98;
loc_88096E6C:
	// lwz r11,252(r1)
	ctx.current_instruction = 0x88096E6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r7,240(r1)
	ctx.current_instruction = 0x88096E70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r6,232(r1)
	ctx.current_instruction = 0x88096E74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88096eac
	if (!ctx.cr6.eq) goto loc_88096EAC;
	// lwz r11,244(r1)
	ctx.current_instruction = 0x88096E8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,260(r1)
	ctx.current_instruction = 0x88096E90;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r6,236(r1)
	ctx.current_instruction = 0x88096E94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x88096f98
	if (ctx.cr6.eq) goto loc_88096F98;
loc_88096EAC:
	// srawi r31,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 2;
	// srawi r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x88096ecc
	if (!ctx.cr6.lt) goto loc_88096ECC;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// b 0x88096edc
	goto loc_88096EDC;
loc_88096ECC:
	// lwz r10,1500(r1)
	ctx.current_instruction = 0x88096ECC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88096edc
	if (!ctx.cr6.gt) goto loc_88096EDC;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_88096EDC:
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x88096eec
	if (!ctx.cr6.lt) goto loc_88096EEC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x88096efc
	goto loc_88096EFC;
loc_88096EEC:
	// lwz r10,1516(r1)
	ctx.current_instruction = 0x88096EEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88096efc
	if (!ctx.cr6.gt) goto loc_88096EFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88096EFC:
	// stw r26,84(r1)
	ctx.current_instruction = 0x88096EFC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,1380(r18)
	ctx.current_instruction = 0x88096F04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 1380);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,2488(r18)
	ctx.current_instruction = 0x88096F0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 2488);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r3,1428(r1)
	ctx.current_instruction = 0x88096F18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1428);
	// lwz r10,1560(r18)
	ctx.current_instruction = 0x88096F1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 1560);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bctrl 
	ctx.lr = 0x88096F38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096F38:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x88096F54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88096F54:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x88085820
	ctx.lr = 0x88096F6C;
	sub_88085820(ctx, base);
loc_88096F6C:
	// lwz r10,228(r1)
	ctx.current_instruction = 0x88096F6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88096f98
	if (!ctx.cr6.lt) goto loc_88096F98;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,232(r1)
	ctx.current_instruction = 0x88096F80;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r29.u32);
	// stw r28,236(r1)
	ctx.current_instruction = 0x88096F84;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r31,240(r1)
	ctx.current_instruction = 0x88096F88;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r30,260(r1)
	ctx.current_instruction = 0x88096F8C;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r20,244(r1)
	ctx.current_instruction = 0x88096F90;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r20.u32);
	// stw r20,252(r1)
	ctx.current_instruction = 0x88096F94;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r20.u32);
loc_88096F98:
	// lwz r11,252(r1)
	ctx.current_instruction = 0x88096F98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,240(r1)
	ctx.current_instruction = 0x88096F9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r8,244(r1)
	ctx.current_instruction = 0x88096FA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,260(r1)
	ctx.current_instruction = 0x88096FA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,232(r1)
	ctx.current_instruction = 0x88096FAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r5,1572(r1)
	ctx.current_instruction = 0x88096FB4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,1580(r1)
	ctx.current_instruction = 0x88096FBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// lwz r7,236(r1)
	ctx.current_instruction = 0x88096FC0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1588(r1)
	ctx.current_instruction = 0x88096FC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// add r4,r9,r3
	ctx.r4.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r4,0(r5)
	ctx.current_instruction = 0x88096FD4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r3,0(r8)
	ctx.current_instruction = 0x88096FD8;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// stw r10,0(r6)
	ctx.current_instruction = 0x88096FDC;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E2660) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E2660);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E2660;
	ctx.current_instruction = 0x880E2660;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880e269c
	if (ctx.cr6.eq) goto loc_880E269C;
	// lwz r10,7116(r11)
	ctx.current_instruction = 0x880E2670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 7116);
	// stw r10,0(r4)
	ctx.current_instruction = 0x880E2674;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,7120(r11)
	ctx.current_instruction = 0x880E2678;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 7120);
	// stw r9,4(r4)
	ctx.current_instruction = 0x880E267C;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,7128(r11)
	ctx.current_instruction = 0x880E2680;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 7128);
	// stw r8,8(r4)
	ctx.current_instruction = 0x880E2684;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,7124(r11)
	ctx.current_instruction = 0x880E2688;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 7124);
	// stw r7,16(r4)
	ctx.current_instruction = 0x880E268C;
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r6,7132(r11)
	ctx.current_instruction = 0x880E2690;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 7132);
	// stw r6,12(r4)
	ctx.current_instruction = 0x880E2694;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E269C:
	// lwz r10,7092(r11)
	ctx.current_instruction = 0x880E269C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 7092);
	// stw r10,0(r4)
	ctx.current_instruction = 0x880E26A0;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,7096(r11)
	ctx.current_instruction = 0x880E26A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 7096);
	// stw r9,4(r4)
	ctx.current_instruction = 0x880E26A8;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,7112(r11)
	ctx.current_instruction = 0x880E26AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 7112);
	// stw r8,8(r4)
	ctx.current_instruction = 0x880E26B0;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,7104(r11)
	ctx.current_instruction = 0x880E26B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 7104);
	// stw r7,16(r4)
	ctx.current_instruction = 0x880E26B8;
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r6,21144(r11)
	ctx.current_instruction = 0x880E26BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 21144);
	// stw r6,12(r4)
	ctx.current_instruction = 0x880E26C0;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E2A88) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E2A88);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E2A88;
	ctx.current_instruction = 0x880E2A88;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// subf. r11,r5,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880e2ae4
	if (!ctx.cr0.lt) goto loc_880E2AE4;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	ctx.current_instruction = 0x880E2A9C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x880E2AA0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	ctx.current_instruction = 0x880E2AA4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.current_instruction = 0x880E2AA8;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lfd f13,8624(r8)
	ctx.current_instruction = 0x880E2ABC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 8624);
	// lfd f12,12248(r7)
	ctx.current_instruction = 0x880E2AC0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 12248);
	// fdiv f9,f11,f10
	ctx.f9.f64 = ctx.f11.f64 / ctx.f10.f64;
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmul f7,f8,f1
	ctx.f7.f64 = ctx.f8.f64 * ctx.f1.f64;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// fmul f1,f7,f12
	ctx.f1.f64 = ctx.f7.f64 * ctx.f12.f64;
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// fadd f1,f1,f13
	ctx.f1.f64 = ctx.f1.f64 + ctx.f13.f64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E2AE4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// std r11,-16(r1)
	ctx.current_instruction = 0x880E2AEC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x880E2AF8;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	ctx.current_instruction = 0x880E2AFC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f13,14712(r9)
	ctx.current_instruction = 0x880E2B04;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 14712);
	// fmul f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f12,-16(r1)
	ctx.current_instruction = 0x880E2B0C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f12,14704(r8)
	ctx.current_instruction = 0x880E2B14;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 14704);
	// fdiv f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fmul f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f1,f8,f12
	ctx.f1.f64 = ctx.f8.f64 * ctx.f12.f64;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E3978) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E3978);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E3978;
	ctx.current_instruction = 0x880E3978;
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.current_instruction = 0x880E3978;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880e39c4
	if (!ctx.cr6.eq) goto loc_880E39C4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880e39c4
	if (ctx.cr6.eq) goto loc_880E39C4;
	// lwz r11,2824(r3)
	ctx.current_instruction = 0x880E3994;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e39c4
	if (!ctx.cr6.eq) goto loc_880E39C4;
	// lwz r11,2192(r3)
	ctx.current_instruction = 0x880E39A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2192);
	// lwz r8,2196(r3)
	ctx.current_instruction = 0x880E39A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 2196);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// subfc r6,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r4,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 & ctx.r9.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E39C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E48D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E48D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E48D8;
	ctx.current_instruction = 0x880E48D8;
	// lwz r9,7776(r3)
	ctx.current_instruction = 0x880E48D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7776);
	// lwz r11,1396(r3)
	ctx.current_instruction = 0x880E48DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1396);
	// lwz r10,1624(r3)
	ctx.current_instruction = 0x880E48E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r8,64(r9)
	ctx.current_instruction = 0x880E48E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// stw r8,7804(r3)
	ctx.current_instruction = 0x880E48EC;
	REX_STORE_U32(ctx.r3.u32 + 7804, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,88(r9)
	ctx.current_instruction = 0x880E48F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,7808(r3)
	ctx.current_instruction = 0x880E48FC;
	REX_STORE_U32(ctx.r3.u32 + 7808, ctx.r7.u32);
	// lwz r6,112(r9)
	ctx.current_instruction = 0x880E4900;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// stw r6,7812(r3)
	ctx.current_instruction = 0x880E4904;
	REX_STORE_U32(ctx.r3.u32 + 7812, ctx.r6.u32);
	// stw r11,7816(r3)
	ctx.current_instruction = 0x880E4908;
	REX_STORE_U32(ctx.r3.u32 + 7816, ctx.r11.u32);
	// blt cr6,0x880e493c
	if (ctx.cr6.lt) goto loc_880E493C;
	// lwz r9,4420(r3)
	ctx.current_instruction = 0x880E4910;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4420);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4412(r3)
	ctx.current_instruction = 0x880E491C;
	REX_STORE_U32(ctx.r3.u32 + 4412, ctx.r10.u32);
	// blt cr6,0x880e493c
	if (ctx.cr6.lt) goto loc_880E493C;
	// lwz r9,5388(r3)
	ctx.current_instruction = 0x880E4924;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5388);
	// lwz r10,6356(r3)
	ctx.current_instruction = 0x880E4928;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6356);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,5380(r3)
	ctx.current_instruction = 0x880E4934;
	REX_STORE_U32(ctx.r3.u32 + 5380, ctx.r9.u32);
	// stw r7,6348(r3)
	ctx.current_instruction = 0x880E4938;
	REX_STORE_U32(ctx.r3.u32 + 6348, ctx.r7.u32);
loc_880E493C:
	// lwz r11,7808(r3)
	ctx.current_instruction = 0x880E493C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7808);
	// lwz r10,7812(r3)
	ctx.current_instruction = 0x880E4940;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7812);
	// stw r8,20184(r3)
	ctx.current_instruction = 0x880E4944;
	REX_STORE_U32(ctx.r3.u32 + 20184, ctx.r8.u32);
	// stw r11,20188(r3)
	ctx.current_instruction = 0x880E4948;
	REX_STORE_U32(ctx.r3.u32 + 20188, ctx.r11.u32);
	// stw r10,20192(r3)
	ctx.current_instruction = 0x880E494C;
	REX_STORE_U32(ctx.r3.u32 + 20192, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E6460) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E6460;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E6460) {
			switch (rex_dispatch_address) {
				case 0x880E6468:
				case 0x880E64F0:
				case 0x880E651C:
				case 0x880E6540:
				case 0x880E6560:
				case 0x880E659C:
				case 0x880E6658:
				case 0x880E6694:
				case 0x880E66B0:
				case 0x880E66D0:
				case 0x880E66E8:
				case 0x880E6700:
				case 0x880E6738:
				case 0x880E6750:
				case 0x880E678C:
				case 0x880E67A0:
				case 0x880E67B8:
				case 0x880E67CC:
				case 0x880E67F8:
				case 0x880E6810:
				case 0x880E682C:
				case 0x880E6838:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E6460;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E6468: goto loc_880E6468;
		case 0x880E64F0: goto loc_880E64F0;
		case 0x880E651C: goto loc_880E651C;
		case 0x880E6540: goto loc_880E6540;
		case 0x880E6560: goto loc_880E6560;
		case 0x880E659C: goto loc_880E659C;
		case 0x880E6658: goto loc_880E6658;
		case 0x880E6694: goto loc_880E6694;
		case 0x880E66B0: goto loc_880E66B0;
		case 0x880E66D0: goto loc_880E66D0;
		case 0x880E66E8: goto loc_880E66E8;
		case 0x880E6700: goto loc_880E6700;
		case 0x880E6738: goto loc_880E6738;
		case 0x880E6750: goto loc_880E6750;
		case 0x880E678C: goto loc_880E678C;
		case 0x880E67A0: goto loc_880E67A0;
		case 0x880E67B8: goto loc_880E67B8;
		case 0x880E67CC: goto loc_880E67CC;
		case 0x880E67F8: goto loc_880E67F8;
		case 0x880E6810: goto loc_880E6810;
		case 0x880E682C: goto loc_880E682C;
		case 0x880E6838: goto loc_880E6838;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880E6468;
	__savegprlr_20(ctx, base);
loc_880E6468:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x880E6468;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,18412(r11)
	ctx.current_instruction = 0x880E6480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18412);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e6838
	if (!ctx.cr6.eq) goto loc_880E6838;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18416(r11)
	ctx.current_instruction = 0x880E6498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e6838
	if (!ctx.cr6.eq) goto loc_880E6838;
	// lwz r11,796(r3)
	ctx.current_instruction = 0x880E64A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// srawi r27,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 1;
	// srawi r21,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r8.s32 >> 1;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x880e64c4
	if (ctx.cr6.lt) goto loc_880E64C4;
	// lwz r11,800(r3)
	ctx.current_instruction = 0x880E64B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x880e64d0
	if (!ctx.cr6.lt) goto loc_880E64D0;
loc_880E64C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21156(r31)
	ctx.current_instruction = 0x880E64C8;
	REX_STORE_U32(ctx.r31.u32 + 21156, ctx.r11.u32);
	// stw r11,21160(r31)
	ctx.current_instruction = 0x880E64CC;
	REX_STORE_U32(ctx.r31.u32 + 21160, ctx.r11.u32);
loc_880E64D0:
	// lwz r11,21156(r31)
	ctx.current_instruction = 0x880E64D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e64f8
	if (!ctx.cr6.eq) goto loc_880E64F8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e5a70
	ctx.lr = 0x880E64F0;
	sub_880E5A70(ctx, base);
loc_880E64F0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880E64F8:
	// lwz r11,21160(r31)
	ctx.current_instruction = 0x880E64F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e6660
	if (ctx.cr6.eq) goto loc_880E6660;
	// lwz r11,28492(r31)
	ctx.current_instruction = 0x880E6504;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e6838
	if (!ctx.cr6.eq) goto loc_880E6838;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x880E651C;
	sub_880F40C0(ctx, base);
loc_880E651C:
	// ld r11,736(r31)
	ctx.current_instruction = 0x880E651C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x880e6540
	if (!ctx.cr6.gt) goto loc_880E6540;
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880E6528;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880E6530;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x880e4e78
	ctx.lr = 0x880E6540;
	sub_880E4E78(ctx, base);
loc_880E6540:
	// lwz r11,804(r31)
	ctx.current_instruction = 0x880E6540;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,21164(r31)
	ctx.current_instruction = 0x880E6548;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21164);
	// addi r29,r31,21164
	ctx.r29.s64 = ctx.r31.s64 + 21164;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// bl 0x880547a0
	ctx.lr = 0x880E6560;
	sub_880547A0(ctx, base);
loc_880E6560:
	// ld r10,736(r31)
	ctx.current_instruction = 0x880E6560;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r10,5
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 5, ctx.xer);
	// blt cr6,0x880e659c
	if (ctx.cr6.lt) goto loc_880E659C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r21,100(r1)
	ctx.current_instruction = 0x880E6570;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r9,r31,21204
	ctx.r9.s64 = ctx.r31.s64 + 21204;
	// stw r27,92(r1)
	ctx.current_instruction = 0x880E6578;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r8,r31,21184
	ctx.r8.s64 = ctx.r31.s64 + 21184;
	// stw r24,84(r1)
	ctx.current_instruction = 0x880E6580;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4f48
	ctx.lr = 0x880E659C;
	sub_880E4F48(ctx, base);
loc_880E659C:
	// lwz r10,21176(r31)
	ctx.current_instruction = 0x880E659C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21176);
	// lwz r9,21196(r31)
	ctx.current_instruction = 0x880E65A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21196);
	// lwz r8,21216(r31)
	ctx.current_instruction = 0x880E65A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21216);
	// lwz r7,21172(r31)
	ctx.current_instruction = 0x880E65A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21172);
	// lwz r6,21192(r31)
	ctx.current_instruction = 0x880E65AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21192);
	// lwz r5,21212(r31)
	ctx.current_instruction = 0x880E65B0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 21212);
	// lwz r4,21168(r31)
	ctx.current_instruction = 0x880E65B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21168);
	// lwz r3,21188(r31)
	ctx.current_instruction = 0x880E65B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21188);
	// lwz r30,21208(r31)
	ctx.current_instruction = 0x880E65BC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 21208);
	// lwz r28,0(r29)
	ctx.current_instruction = 0x880E65C0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r27,21184(r31)
	ctx.current_instruction = 0x880E65C4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 21184);
	// lwz r26,21204(r31)
	ctx.current_instruction = 0x880E65C8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 21204);
	// lwz r11,21180(r31)
	ctx.current_instruction = 0x880E65CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21180);
	// stw r10,21180(r31)
	ctx.current_instruction = 0x880E65D0;
	REX_STORE_U32(ctx.r31.u32 + 21180, ctx.r10.u32);
	// stw r8,21220(r31)
	ctx.current_instruction = 0x880E65D4;
	REX_STORE_U32(ctx.r31.u32 + 21220, ctx.r8.u32);
	// stw r5,21216(r31)
	ctx.current_instruction = 0x880E65D8;
	REX_STORE_U32(ctx.r31.u32 + 21216, ctx.r5.u32);
	// stw r9,21200(r31)
	ctx.current_instruction = 0x880E65DC;
	REX_STORE_U32(ctx.r31.u32 + 21200, ctx.r9.u32);
	// stw r7,21176(r31)
	ctx.current_instruction = 0x880E65E0;
	REX_STORE_U32(ctx.r31.u32 + 21176, ctx.r7.u32);
	// stw r6,21196(r31)
	ctx.current_instruction = 0x880E65E4;
	REX_STORE_U32(ctx.r31.u32 + 21196, ctx.r6.u32);
	// stw r4,21172(r31)
	ctx.current_instruction = 0x880E65E8;
	REX_STORE_U32(ctx.r31.u32 + 21172, ctx.r4.u32);
	// stw r3,21192(r31)
	ctx.current_instruction = 0x880E65EC;
	REX_STORE_U32(ctx.r31.u32 + 21192, ctx.r3.u32);
	// stw r30,21212(r31)
	ctx.current_instruction = 0x880E65F0;
	REX_STORE_U32(ctx.r31.u32 + 21212, ctx.r30.u32);
	// stw r28,21168(r31)
	ctx.current_instruction = 0x880E65F4;
	REX_STORE_U32(ctx.r31.u32 + 21168, ctx.r28.u32);
	// stw r27,21188(r31)
	ctx.current_instruction = 0x880E65F8;
	REX_STORE_U32(ctx.r31.u32 + 21188, ctx.r27.u32);
	// stw r26,21208(r31)
	ctx.current_instruction = 0x880E65FC;
	REX_STORE_U32(ctx.r31.u32 + 21208, ctx.r26.u32);
	// lwz r10,804(r31)
	ctx.current_instruction = 0x880E6600;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// stw r11,0(r29)
	ctx.current_instruction = 0x880E6604;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// stw r11,21184(r31)
	ctx.current_instruction = 0x880E6610;
	REX_STORE_U32(ctx.r31.u32 + 21184, ctx.r11.u32);
	// lwz r9,21240(r31)
	ctx.current_instruction = 0x880E6614;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21240);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,21204(r31)
	ctx.current_instruction = 0x880E661C;
	REX_STORE_U32(ctx.r31.u32 + 21204, ctx.r8.u32);
	// lwz r7,21228(r31)
	ctx.current_instruction = 0x880E6620;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21228);
	// lwz r6,21224(r31)
	ctx.current_instruction = 0x880E6624;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21224);
	// lwz r5,21232(r31)
	ctx.current_instruction = 0x880E6628;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 21232);
	// lwz r4,21236(r31)
	ctx.current_instruction = 0x880E662C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21236);
	// stw r5,21236(r31)
	ctx.current_instruction = 0x880E6630;
	REX_STORE_U32(ctx.r31.u32 + 21236, ctx.r5.u32);
	// stw r4,21240(r31)
	ctx.current_instruction = 0x880E6634;
	REX_STORE_U32(ctx.r31.u32 + 21240, ctx.r4.u32);
	// stw r7,21232(r31)
	ctx.current_instruction = 0x880E6638;
	REX_STORE_U32(ctx.r31.u32 + 21232, ctx.r7.u32);
	// stw r6,21228(r31)
	ctx.current_instruction = 0x880E663C;
	REX_STORE_U32(ctx.r31.u32 + 21228, ctx.r6.u32);
	// lwz r4,6800(r31)
	ctx.current_instruction = 0x880E6640;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 6800);
	// lwz r3,21256(r31)
	ctx.current_instruction = 0x880E6644;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21256);
	// stw r9,21224(r31)
	ctx.current_instruction = 0x880E6648;
	REX_STORE_U32(ctx.r31.u32 + 21224, ctx.r9.u32);
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880E664C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x880547a0
	ctx.lr = 0x880E6658;
	sub_880547A0(ctx, base);
loc_880E6658:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880E6660:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880e66b8
	if (!ctx.cr6.eq) goto loc_880E66B8;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880E6668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x880e669c
	if (ctx.cr6.eq) goto loc_880E669C;
	// lwz r11,8104(r31)
	ctx.current_instruction = 0x880E6674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880e669c
	if (!ctx.cr6.gt) goto loc_880E669C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e5d90
	ctx.lr = 0x880E6694;
	sub_880E5D90(ctx, base);
loc_880E6694:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880E669C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e61c8
	ctx.lr = 0x880E66B0;
	sub_880E61C8(ctx, base);
loc_880E66B0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880E66B8:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// mullw r29,r21,r30
	ctx.r29.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r30.s32);
	// ori r20,r11,32768
	ctx.r20.u64 = ctx.r11.u64 | 32768;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x88050340
	ctx.lr = 0x880E66D0;
	sub_88050340(ctx, base);
loc_880E66D0:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880e6838
	if (ctx.cr6.eq) goto loc_880E6838;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88050340
	ctx.lr = 0x880E66E8;
	sub_88050340(ctx, base);
loc_880E66E8:
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880e6708
	if (!ctx.cr6.eq) goto loc_880E6708;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x88050358
	ctx.lr = 0x880E6700;
	sub_88050358(ctx, base);
loc_880E6700:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880E6708:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x880e6760
	if (!ctx.cr6.gt) goto loc_880E6760;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_880E6728:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E6738;
	sub_880547A0(ctx, base);
loc_880E6738:
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E6750;
	sub_880547A0(ctx, base);
loc_880E6750:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r27,r27,r30
	ctx.r27.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// bne 0x880e6728
	if (!ctx.cr0.eq) goto loc_880E6728;
loc_880E6760:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880E6760;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x880e67a4
	if (ctx.cr6.eq) goto loc_880E67A4;
	// lwz r11,8104(r31)
	ctx.current_instruction = 0x880E676C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880e67a4
	if (!ctx.cr6.gt) goto loc_880E67A4;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e5d90
	ctx.lr = 0x880E678C;
	sub_880E5D90(ctx, base);
loc_880E678C:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e5d90
	ctx.lr = 0x880E67A0;
	sub_880E5D90(ctx, base);
loc_880E67A0:
	// b 0x880e67cc
	goto loc_880E67CC;
loc_880E67A4:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e61c8
	ctx.lr = 0x880E67B8;
	sub_880E61C8(ctx, base);
loc_880E67B8:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e61c8
	ctx.lr = 0x880E67CC;
	sub_880E61C8(ctx, base);
loc_880E67CC:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x880e6820
	if (!ctx.cr6.gt) goto loc_880E6820;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_880E67E8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E67F8;
	sub_880547A0(ctx, base);
loc_880E67F8:
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E6810;
	sub_880547A0(ctx, base);
loc_880E6810:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bne 0x880e67e8
	if (!ctx.cr0.eq) goto loc_880E67E8;
loc_880E6820:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88050358
	ctx.lr = 0x880E682C;
	sub_88050358(ctx, base);
loc_880E682C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x88050358
	ctx.lr = 0x880E6838;
	sub_88050358(ctx, base);
loc_880E6838:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F1DF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F1DF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F1DF0) {
			switch (rex_dispatch_address) {
				case 0x880F1DF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F1DF0;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880F1DF8: goto loc_880F1DF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880F1DF8;
	__savegprlr_19(ctx, base);
loc_880F1DF8:
	// lwz r30,0(r5)
	ctx.current_instruction = 0x880F1DF8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r31,720(r3)
	ctx.current_instruction = 0x880F1E00;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,0(r4)
	ctx.current_instruction = 0x880F1E08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mullw r11,r31,r30
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// stw r22,-160(r1)
	ctx.current_instruction = 0x880F1E14;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r22.u32);
	// stw r22,-176(r1)
	ctx.current_instruction = 0x880F1E18;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r22.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r31,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// rlwinm r21,r30,5,0,26
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r20,r10,5,0,26
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r19,r31,-4
	ctx.r19.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x880f2190
	if (!ctx.cr6.eq) goto loc_880F2190;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f1e6c
	if (ctx.cr6.eq) goto loc_880F1E6C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,1
	ctx.r29.s64 = 1;
	// add r31,r9,r6
	ctx.r31.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lhz r31,-2(r31)
	ctx.current_instruction = 0x880F1E58;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + -2);
	// lhz r9,-2(r9)
	ctx.current_instruction = 0x880F1E5C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r23,r9
	ctx.r23.s64 = ctx.r9.s16;
	// b 0x880f1ea4
	goto loc_880F1EA4;
loc_880F1E6C:
	// lwz r9,720(r3)
	ctx.current_instruction = 0x880F1E6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x880f1e9c
	if (!ctx.cr6.eq) goto loc_880F1E9C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r6
	ctx.current_instruction = 0x880F1E88;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r8,r11,r7
	ctx.current_instruction = 0x880F1E8C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// b 0x880f2160
	goto loc_880F2160;
loc_880F1E9C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_880F1EA4:
	// addi r9,r31,-16384
	ctx.r9.s64 = ctx.r31.s64 + -16384;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r25,r9,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x880f1ec0
	if (ctx.cr6.eq) goto loc_880F1EC0;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_880F1EC0:
	// lwz r9,720(r3)
	ctx.current_instruction = 0x880F1EC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r26,r9,r6
	ctx.current_instruction = 0x880F1ED0;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// lhzx r24,r9,r7
	ctx.current_instruction = 0x880F1ED4;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// addi r26,r9,-16384
	ctx.r26.s64 = ctx.r9.s64 + -16384;
	// cntlzw r26,r26
	ctx.r26.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r26,r26,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880f1efc
	if (ctx.cr6.eq) goto loc_880F1EFC;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_880F1EFC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880f1f64
	if (ctx.cr6.eq) goto loc_880F1F64;
	// lwz r8,720(r3)
	ctx.current_instruction = 0x880F1F04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// lwz r10,720(r3)
	ctx.current_instruction = 0x880F1F14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// beq cr6,0x880f1f40
	if (ctx.cr6.eq) goto loc_880F1F40;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r10,r7
	ctx.current_instruction = 0x880F1F2C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// lhzx r8,r10,r6
	ctx.current_instruction = 0x880F1F30;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// b 0x880f1ff0
	goto loc_880F1FF0;
loc_880F1F40:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r10,r7
	ctx.current_instruction = 0x880F1F50;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// lhzx r8,r10,r6
	ctx.current_instruction = 0x880F1F54;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// b 0x880f1ff0
	goto loc_880F1FF0;
loc_880F1F64:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f1fc8
	if (ctx.cr6.eq) goto loc_880F1FC8;
	// xor r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880f1f94
	if (ctx.cr6.eq) goto loc_880F1F94;
	// lwz r8,720(r3)
	ctx.current_instruction = 0x880F1F7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// blt cr6,0x880f1f98
	if (ctx.cr6.lt) goto loc_880F1F98;
loc_880F1F94:
	// li r10,1
	ctx.r10.s64 = 1;
loc_880F1F98:
	// lwz r8,720(r3)
	ctx.current_instruction = 0x880F1F98;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r10,r7
	ctx.current_instruction = 0x880F1FB4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// lhzx r8,r10,r6
	ctx.current_instruction = 0x880F1FB8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// b 0x880f1ff0
	goto loc_880F1FF0;
loc_880F1FC8:
	// lwz r10,720(r3)
	ctx.current_instruction = 0x880F1FC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r7,2(r10)
	ctx.current_instruction = 0x880F1FE0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r6,2(r8)
	ctx.current_instruction = 0x880F1FE4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
loc_880F1FF0:
	// addi r8,r10,-16384
	ctx.r8.s64 = ctx.r10.s64 + -16384;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880f200c
	if (ctx.cr6.eq) goto loc_880F200C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_880F200C:
	// addic. r7,r29,2
	ctx.xer.ca = ctx.r29.u32 > 4294967293;
	ctx.r7.s64 = ctx.r29.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x880f2168
	if (ctx.cr0.eq) goto loc_880F2168;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x880f204c
	if (ctx.cr6.eq) goto loc_880F204C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880f204c
	if (!ctx.cr6.eq) goto loc_880F204C;
	// rlwinm r7,r23,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880f2040
	if (ctx.cr6.eq) goto loc_880F2040;
	// stw r31,-144(r1)
	ctx.current_instruction = 0x880F2030;
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r31.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r23,-128(r1)
	ctx.current_instruction = 0x880F2038;
	REX_STORE_U32(ctx.r1.u32 + -128, ctx.r23.u32);
	// b 0x880f204c
	goto loc_880F204C;
loc_880F2040:
	// stw r31,-176(r1)
	ctx.current_instruction = 0x880F2040;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r31.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r23,-160(r1)
	ctx.current_instruction = 0x880F2048;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r23.u32);
loc_880F204C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x880f208c
	if (!ctx.cr6.eq) goto loc_880F208C;
	// rlwinm r7,r24,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880f2074
	if (ctx.cr6.eq) goto loc_880F2074;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// addi r30,r1,-128
	ctx.r30.s64 = ctx.r1.s64 + -128;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x880f2084
	goto loc_880F2084;
loc_880F2074:
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,-176
	ctx.r6.s64 = ctx.r1.s64 + -176;
	// addi r30,r1,-160
	ctx.r30.s64 = ctx.r1.s64 + -160;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_880F2084:
	// stwx r24,r7,r30
	ctx.current_instruction = 0x880F2084;
	REX_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r24.u32);
	// stwx r9,r7,r6
	ctx.current_instruction = 0x880F2088;
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r9.u32);
loc_880F208C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880f20cc
	if (!ctx.cr6.eq) goto loc_880F20CC;
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880f20b4
	if (ctx.cr6.eq) goto loc_880F20B4;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x880f20c4
	goto loc_880F20C4;
loc_880F20B4:
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_880F20C4:
	// stwx r11,r8,r6
	ctx.current_instruction = 0x880F20C4;
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r10,r8,r7
	ctx.current_instruction = 0x880F20C8;
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
loc_880F20CC:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x880f2100
	if (ctx.cr6.eq) goto loc_880F2100;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x880f2100
	if (ctx.cr6.eq) goto loc_880F2100;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x880f20f0
	if (!ctx.cr6.gt) goto loc_880F20F0;
loc_880F20E4:
	// lwz r9,-176(r1)
	ctx.current_instruction = 0x880F20E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r11,-160(r1)
	ctx.current_instruction = 0x880F20E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// b 0x880f2160
	goto loc_880F2160;
loc_880F20F0:
	// bge cr6,0x880f20e4
	if (!ctx.cr6.lt) goto loc_880F20E4;
	// lwz r9,-144(r1)
	ctx.current_instruction = 0x880F20F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// lwz r11,-128(r1)
	ctx.current_instruction = 0x880F20F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// b 0x880f2160
	goto loc_880F2160;
loc_880F2100:
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880f2120
	if (!ctx.cr6.gt) goto loc_880F2120;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880f213c
	if (ctx.cr6.gt) goto loc_880F213C;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880f2138
	if (ctx.cr6.gt) goto loc_880F2138;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// b 0x880f213c
	goto loc_880F213C;
loc_880F2120:
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880f2130
	if (!ctx.cr6.gt) goto loc_880F2130;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// b 0x880f213c
	goto loc_880F213C;
loc_880F2130:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880f213c
	if (!ctx.cr6.gt) goto loc_880F213C;
loc_880F2138:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_880F213C:
	// cmpw cr6,r23,r24
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x880f2178
	if (!ctx.cr6.gt) goto loc_880F2178;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f2154
	if (!ctx.cr6.gt) goto loc_880F2154;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x880f2160
	goto loc_880F2160;
loc_880F2154:
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880f2160
	if (ctx.cr6.gt) goto loc_880F2160;
loc_880F215C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_880F2160:
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x880f21c0
	if (!ctx.cr6.eq) goto loc_880F21C0;
loc_880F2168:
	// stw r22,0(r4)
	ctx.current_instruction = 0x880F2168;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r22.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r22,0(r5)
	ctx.current_instruction = 0x880F2170;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r22.u32);
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880F2178:
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880f215c
	if (ctx.cr6.gt) goto loc_880F215C;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880f2160
	if (ctx.cr6.gt) goto loc_880F2160;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x880f2160
	goto loc_880F2160;
loc_880F2190:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f21b8
	if (ctx.cr6.eq) goto loc_880F21B8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r8,-2(r10)
	ctx.current_instruction = 0x880F21A4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r7,-2(r9)
	ctx.current_instruction = 0x880F21A8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// b 0x880f2160
	goto loc_880F2160;
loc_880F21B8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_880F21C0:
	// lwz r10,28132(r3)
	ctx.current_instruction = 0x880F21C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// bne cr6,0x880f21ec
	if (!ctx.cr6.eq) goto loc_880F21EC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,724(r3)
	ctx.current_instruction = 0x880F21D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// bne cr6,0x880f2208
	if (!ctx.cr6.eq) goto loc_880F2208;
	// li r7,-120
	ctx.r7.s64 = -120;
	// addi r6,r10,-8
	ctx.r6.s64 = ctx.r10.s64 + -8;
	// b 0x880f2210
	goto loc_880F2210;
loc_880F21EC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,724(r3)
	ctx.current_instruction = 0x880F21F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// beq cr6,0x880f2208
	if (ctx.cr6.eq) goto loc_880F2208;
	// li r7,-120
	ctx.r7.s64 = -120;
	// addi r6,r10,-8
	ctx.r6.s64 = ctx.r10.s64 + -8;
	// b 0x880f2210
	goto loc_880F2210;
loc_880F2208:
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// li r7,-116
	ctx.r7.s64 = -116;
loc_880F2210:
	// add r10,r9,r20
	ctx.r10.u64 = ctx.r9.u64 + ctx.r20.u64;
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmpwi cr6,r10,-60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -60, ctx.xer);
	// bge cr6,0x880f222c
	if (!ctx.cr6.lt) goto loc_880F222C;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r10,-60
	ctx.r9.s64 = ctx.r10.s64 + -60;
	// b 0x880f223c
	goto loc_880F223C;
loc_880F222C:
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x880f223c
	if (!ctx.cr6.gt) goto loc_880F223C;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r9,r10,r19
	ctx.r9.u64 = ctx.r10.u64 + ctx.r19.u64;
loc_880F223C:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880f225c
	if (!ctx.cr6.lt) goto loc_880F225C;
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r9,0(r4)
	ctx.current_instruction = 0x880F2248;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	ctx.current_instruction = 0x880F2254;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880F225C:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x880f226c
	if (!ctx.cr6.gt) goto loc_880F226C;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_880F226C:
	// stw r9,0(r4)
	ctx.current_instruction = 0x880F226C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	ctx.current_instruction = 0x880F2274;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F9A30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F9A30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F9A30) {
			switch (rex_dispatch_address) {
				case 0x880F9A38:
				case 0x880F9A70:
				case 0x880F9AA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F9A30;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F9A38: goto loc_880F9A38;
		case 0x880F9A70: goto loc_880F9A70;
		case 0x880F9AA0: goto loc_880F9AA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880F9A38;
	__savegprlr_28(ctx, base);
loc_880F9A38:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880F9A38;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x880F9A3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880f9ab8
	if (ctx.cr6.lt) goto loc_880F9AB8;
	// lwz r3,84(r3)
	ctx.current_instruction = 0x880F9A54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f9a74
	if (ctx.cr6.eq) goto loc_880F9A74;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880F9A70;
	sub_88050358(ctx, base);
loc_880F9A70:
	// stw r30,84(r31)
	ctx.current_instruction = 0x880F9A70;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_880F9A74:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r29,4(r31)
	ctx.current_instruction = 0x880F9A78;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,88(r31)
	ctx.current_instruction = 0x880F9A7C;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x880f9a94
	if (!ctx.cr6.gt) goto loc_880F9A94;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_880F9A94:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050340
	ctx.lr = 0x880F9AA0;
	sub_88050340(ctx, base);
loc_880F9AA0:
	// stw r3,84(r31)
	ctx.current_instruction = 0x880F9AA0;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,88(r31)
	ctx.current_instruction = 0x880F9AA8;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// bne cr6,0x880f9ab8
	if (!ctx.cr6.eq) goto loc_880F9AB8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	ctx.current_instruction = 0x880F9AB4;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_880F9AB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FAAF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FAAF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FAAF0) {
			switch (rex_dispatch_address) {
				case 0x880FAAF8:
				case 0x880FAB4C:
				case 0x880FAB74:
				case 0x880FABB8:
				case 0x880FABE4:
				case 0x880FAC44:
				case 0x880FAC60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FAAF0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FAAF8: goto loc_880FAAF8;
		case 0x880FAB4C: goto loc_880FAB4C;
		case 0x880FAB74: goto loc_880FAB74;
		case 0x880FABB8: goto loc_880FABB8;
		case 0x880FABE4: goto loc_880FABE4;
		case 0x880FAC44: goto loc_880FAC44;
		case 0x880FAC60: goto loc_880FAC60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880FAAF8;
	__savegprlr_27(ctx, base);
loc_880FAAF8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880FAAF8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.current_instruction = 0x880FAAFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.current_instruction = 0x880FAB04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,12(r4)
	ctx.current_instruction = 0x880FAB10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,16(r4)
	ctx.current_instruction = 0x880FAB14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r10,20(r4)
	ctx.current_instruction = 0x880FAB1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,24(r4)
	ctx.current_instruction = 0x880FAB20;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,7868(r3)
	ctx.current_instruction = 0x880FAB28;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bl 0x880f5e20
	ctx.lr = 0x880FAB4C;
	sub_880F5E20(ctx, base);
loc_880FAB4C:
	// xor r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 ^ ctx.r29.u64;
	// lis r9,-30680
	ctx.r9.s64 = -2010644480;
	// lis r8,-30680
	ctx.r8.s64 = -2010644480;
	// addi r28,r9,2656
	ctx.r28.s64 = ctx.r9.s64 + 2656;
	// addi r7,r8,2400
	ctx.r7.s64 = ctx.r8.s64 + 2400;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbzx r5,r29,r28
	ctx.current_instruction = 0x880FAB68;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// lwzx r4,r6,r7
	ctx.current_instruction = 0x880FAB6C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FAB74;
	sub_880E6960(ctx, base);
loc_880FAB74:
	// lwz r5,28568(r31)
	ctx.current_instruction = 0x880FAB74;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880fab90
	if (ctx.cr6.eq) goto loc_880FAB90;
	// lbzx r10,r29,r28
	ctx.current_instruction = 0x880FAB80;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// lwz r11,28604(r31)
	ctx.current_instruction = 0x880FAB84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28604);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,28604(r31)
	ctx.current_instruction = 0x880FAB8C;
	REX_STORE_U32(ctx.r31.u32 + 28604, ctx.r11.u32);
loc_880FAB90:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880FAB90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880faba8
	if (!ctx.cr6.eq) goto loc_880FABA8;
	// lwz r11,28408(r31)
	ctx.current_instruction = 0x880FAB9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fabb8
	if (!ctx.cr6.eq) goto loc_880FABB8;
loc_880FABA8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r30)
	ctx.current_instruction = 0x880FABAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FABB8;
	sub_880E6960(ctx, base);
loc_880FABB8:
	// lwz r11,2340(r31)
	ctx.current_instruction = 0x880FABB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880fabe4
	if (ctx.cr6.eq) goto loc_880FABE4;
	// lwz r11,28420(r31)
	ctx.current_instruction = 0x880FABC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fabe4
	if (!ctx.cr6.eq) goto loc_880FABE4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,124(r30)
	ctx.current_instruction = 0x880FABD8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FABDC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FABE4;
	sub_880E6960(ctx, base);
loc_880FABE4:
	// lwz r11,2572(r31)
	ctx.current_instruction = 0x880FABE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fac60
	if (ctx.cr6.eq) goto loc_880FAC60;
	// lwz r11,2428(r31)
	ctx.current_instruction = 0x880FABF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fac60
	if (ctx.cr6.eq) goto loc_880FAC60;
	// lwz r11,2436(r31)
	ctx.current_instruction = 0x880FABFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// lwz r9,96(r30)
	ctx.current_instruction = 0x880FAC00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fac60
	if (!ctx.cr6.eq) goto loc_880FAC60;
	// lbz r11,2432(r31)
	ctx.current_instruction = 0x880FAC0C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2432);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880fac4c
	if (!ctx.cr6.eq) goto loc_880FAC4C;
	// lwz r10,1416(r31)
	ctx.current_instruction = 0x880FAC18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,1424(r31)
	ctx.current_instruction = 0x880FAC20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FAC28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x880e6960
	ctx.lr = 0x880FAC44;
	sub_880E6960(ctx, base);
loc_880FAC44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880FAC4C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fa1f8
	ctx.lr = 0x880FAC60;
	sub_880FA1F8(ctx, base);
loc_880FAC60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88100D48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88100D48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88100D48) {
			switch (rex_dispatch_address) {
				case 0x88100D50:
				case 0x88100DE0:
				case 0x88100E2C:
				case 0x88100E58:
				case 0x88100E88:
				case 0x88100EE8:
				case 0x88100F14:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88100D48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88100D50: goto loc_88100D50;
		case 0x88100DE0: goto loc_88100DE0;
		case 0x88100E2C: goto loc_88100E2C;
		case 0x88100E58: goto loc_88100E58;
		case 0x88100E88: goto loc_88100E88;
		case 0x88100EE8: goto loc_88100EE8;
		case 0x88100F14: goto loc_88100F14;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x88100D50;
	__savegprlr_18(ctx, base);
loc_88100D50:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x88100D50;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r5)
	ctx.current_instruction = 0x88100D54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// lwz r10,27940(r3)
	ctx.current_instruction = 0x88100D60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 27940);
	// lwz r9,2572(r3)
	ctx.current_instruction = 0x88100D64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2572);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88100d94
	if (!ctx.cr6.eq) goto loc_88100D94;
	// lwz r11,300(r1)
	ctx.current_instruction = 0x88100D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r27,r11,128
	ctx.r27.s64 = ctx.r11.s64 + 128;
	// b 0x88100d98
	goto loc_88100D98;
loc_88100D94:
	// lwz r27,300(r1)
	ctx.current_instruction = 0x88100D94;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_88100D98:
	// lwz r23,308(r1)
	ctx.current_instruction = 0x88100D98;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r22,292(r1)
	ctx.current_instruction = 0x88100DA0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r26,r21,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
loc_88100DA8:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x88100DA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// rlwinm r30,r28,0,30,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// rlwinm r10,r28,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x2;
	// lwz r9,28552(r31)
	ctx.current_instruction = 0x88100DB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28552);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r8,28556(r31)
	ctx.current_instruction = 0x88100DBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28556);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r29,r28,31
	ctx.r29.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// beq cr6,0x88100de0
	if (ctx.cr6.eq) goto loc_88100DE0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88100ce0
	ctx.lr = 0x88100DE0;
	sub_88100CE0(ctx, base);
loc_88100DE0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r10,r31,2376
	ctx.r10.s64 = ctx.r31.s64 + 2376;
	// bne cr6,0x88100df0
	if (!ctx.cr6.eq) goto loc_88100DF0;
	// addi r10,r31,2348
	ctx.r10.s64 = ctx.r31.s64 + 2348;
loc_88100DF0:
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,720(r31)
	ctx.current_instruction = 0x88100DF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// add r6,r26,r29
	ctx.r6.u64 = ctx.r26.u64 + ctx.r29.u64;
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x88100DFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// rlwinm r3,r7,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,84(r1)
	ctx.current_instruction = 0x88100E08;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwzx r10,r8,r10
	ctx.current_instruction = 0x88100E10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881008c8
	ctx.lr = 0x88100E2C;
	sub_881008C8(ctx, base);
loc_88100E2C:
	// lwz r11,28552(r31)
	ctx.current_instruction = 0x88100E2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88100e58
	if (ctx.cr6.eq) goto loc_88100E58;
	// lwz r11,28556(r31)
	ctx.current_instruction = 0x88100E38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88100e58
	if (ctx.cr6.eq) goto loc_88100E58;
	// lwz r11,2572(r31)
	ctx.current_instruction = 0x88100E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88100e58
	if (!ctx.cr6.eq) goto loc_88100E58;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88100ce0
	ctx.lr = 0x88100E58;
	sub_88100CE0(ctx, base);
loc_88100E58:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,256
	ctx.r27.s64 = ctx.r27.s64 + 256;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x88100da8
	if (ctx.cr6.lt) goto loc_88100DA8;
	// li r30,4
	ctx.r30.s64 = 4;
	// rlwinm r29,r21,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
loc_88100E70:
	// lwz r11,28552(r31)
	ctx.current_instruction = 0x88100E70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28552);
	// lwz r10,28556(r31)
	ctx.current_instruction = 0x88100E74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28556);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88100e88
	if (ctx.cr6.eq) goto loc_88100E88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88100ce0
	ctx.lr = 0x88100E88;
	sub_88100CE0(ctx, base);
loc_88100E88:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x88100ea4
	if (ctx.cr6.eq) goto loc_88100EA4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// addi r11,r31,2392
	ctx.r11.s64 = ctx.r31.s64 + 2392;
	// beq cr6,0x88100eb4
	if (ctx.cr6.eq) goto loc_88100EB4;
	// addi r11,r31,2404
	ctx.r11.s64 = ctx.r31.s64 + 2404;
	// b 0x88100eb4
	goto loc_88100EB4;
loc_88100EA4:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// addi r11,r31,2360
	ctx.r11.s64 = ctx.r31.s64 + 2360;
	// beq cr6,0x88100eb4
	if (ctx.cr6.eq) goto loc_88100EB4;
	// addi r11,r31,2368
	ctx.r11.s64 = ctx.r31.s64 + 2368;
loc_88100EB4:
	// lwz r8,720(r31)
	ctx.current_instruction = 0x88100EB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x88100EBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88100EC8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r7,84(r1)
	ctx.current_instruction = 0x88100ED0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881008c8
	ctx.lr = 0x88100EE8;
	sub_881008C8(ctx, base);
loc_88100EE8:
	// lwz r6,28552(r31)
	ctx.current_instruction = 0x88100EE8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28552);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88100f14
	if (ctx.cr6.eq) goto loc_88100F14;
	// lwz r11,28556(r31)
	ctx.current_instruction = 0x88100EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88100f14
	if (ctx.cr6.eq) goto loc_88100F14;
	// lwz r11,2572(r31)
	ctx.current_instruction = 0x88100F00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88100f14
	if (!ctx.cr6.eq) goto loc_88100F14;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88100ce0
	ctx.lr = 0x88100F14;
	sub_88100CE0(ctx, base);
loc_88100F14:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// addi r27,r27,256
	ctx.r27.s64 = ctx.r27.s64 + 256;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x88100e70
	if (ctx.cr6.lt) goto loc_88100E70;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881084E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881084E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881084E8) {
			switch (rex_dispatch_address) {
				case 0x88108594:
				case 0x8810859C:
				case 0x881085BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881084E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88108594: goto loc_88108594;
		case 0x8810859C: goto loc_8810859C;
		case 0x881085BC: goto loc_881085BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881084EC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881084F0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881084F4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1584(r3)
	ctx.current_instruction = 0x881084F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810851c
	if (ctx.cr6.eq) goto loc_8810851C;
	// lwz r11,2800(r3)
	ctx.current_instruction = 0x88108508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881085bc
	if (ctx.cr6.eq) goto loc_881085BC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x881085bc
	if (ctx.cr6.eq) goto loc_881085BC;
loc_8810851C:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8810851C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881085b0
	if (ctx.cr6.eq) goto loc_881085B0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x881085b0
	if (ctx.cr6.eq) goto loc_881085B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8810858c
	if (!ctx.cr6.eq) goto loc_8810858C;
	// lwz r10,728(r31)
	ctx.current_instruction = 0x88108538;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,7764(r31)
	ctx.current_instruction = 0x88108540;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8810858c
	if (!ctx.cr6.gt) goto loc_8810858C;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
loc_88108554:
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88108560:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88108560;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88108570
	if (!ctx.cr6.gt) goto loc_88108570;
	// stw r7,0(r11)
	ctx.current_instruction = 0x8810856C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_88108570:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88108560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88108560;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88108578;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,276
	ctx.r9.s64 = ctx.r9.s64 + 276;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88108554
	if (ctx.cr6.lt) goto loc_88108554;
loc_8810858C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88108250
	ctx.lr = 0x88108594;
	sub_88108250(ctx, base);
loc_88108594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88108488
	ctx.lr = 0x8810859C;
	sub_88108488(ctx, base);
loc_8810859C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881085A0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881085A8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881085B0:
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x881085BC;
	sub_880F40C0(ctx, base);
loc_881085BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881085C0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881085C8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88109840) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88109840;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88109840) {
			switch (rex_dispatch_address) {
				case 0x88109848:
				case 0x88109D1C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88109840;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88109848: goto loc_88109848;
		case 0x88109D1C: goto loc_88109D1C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88109848;
	__savegprlr_26(ctx, base);
loc_88109848:
	// stwu r1,-656(r1)
	ctx.current_instruction = 0x88109848;
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,2
	ctx.r27.s64 = ctx.r3.s64 + 2;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r28,14
	ctx.r28.s64 = 14;
loc_8810985C:
	// li r11,14
	ctx.r11.s64 = 14;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88109864:
	// lhz r11,0(r9)
	ctx.current_instruction = 0x88109864;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r7,30(r9)
	ctx.current_instruction = 0x88109868;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 30);
	// lhz r6,34(r9)
	ctx.current_instruction = 0x8810986C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 34);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhz r8,32(r9)
	ctx.current_instruction = 0x88109874;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// lhz r31,62(r9)
	ctx.current_instruction = 0x8810987C;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r9.u32 + 62);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lhz r5,64(r9)
	ctx.current_instruction = 0x88109884;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 64);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r7,-2(r9)
	ctx.current_instruction = 0x8810988C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r30,r31
	ctx.r30.s64 = ctx.r31.s16;
	// lhz r6,2(r9)
	ctx.current_instruction = 0x88109894;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r26,66(r9)
	ctx.current_instruction = 0x8810989C;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r9.u32 + 66);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r31,r26
	ctx.r31.s64 = ctx.r26.s16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881098c0
	if (!ctx.cr6.gt) goto loc_881098C0;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
loc_881098C0:
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x881098d4
	if (!ctx.cr6.gt) goto loc_881098D4;
	// xor r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// xor r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// xor r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r8.u64;
loc_881098D4:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881098e8
	if (!ctx.cr6.gt) goto loc_881098E8;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
loc_881098E8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x881098fc
	if (!ctx.cr6.gt) goto loc_881098FC;
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// xor r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
loc_881098FC:
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x88109910
	if (!ctx.cr6.gt) goto loc_88109910;
	// xor r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// xor r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r5.u64;
loc_88109910:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x88109924
	if (!ctx.cr6.gt) goto loc_88109924;
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// xor r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
loc_88109924:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109930
	if (!ctx.cr6.gt) goto loc_88109930;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88109930:
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8810993c
	if (!ctx.cr6.gt) goto loc_8810993C;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_8810993C:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109950
	if (!ctx.cr6.gt) goto loc_88109950;
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 ^ ctx.r10.u64;
loc_88109950:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x88109964
	if (!ctx.cr6.gt) goto loc_88109964;
	// xor r10,r30,r6
	ctx.r10.u64 = ctx.r30.u64 ^ ctx.r6.u64;
	// xor r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// xor r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r10.u64;
loc_88109964:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x88109978
	if (!ctx.cr6.gt) goto loc_88109978;
	// xor r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 ^ ctx.r30.u64;
	// xor r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r10.u64;
	// xor r30,r31,r10
	ctx.r30.u64 = ctx.r31.u64 ^ ctx.r10.u64;
loc_88109978:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8810998c
	if (!ctx.cr6.gt) goto loc_8810998C;
	// xor r10,r30,r6
	ctx.r10.u64 = ctx.r30.u64 ^ ctx.r6.u64;
	// xor r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// xor r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r10.u64;
loc_8810998C:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x88109998
	if (!ctx.cr6.gt) goto loc_88109998;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_88109998:
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x881099a4
	if (!ctx.cr6.gt) goto loc_881099A4;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_881099A4:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881099b8
	if (!ctx.cr6.gt) goto loc_881099B8;
	// xor r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
loc_881099B8:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x881099cc
	if (!ctx.cr6.gt) goto loc_881099CC;
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// xor r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
loc_881099CC:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881099e0
	if (!ctx.cr6.gt) goto loc_881099E0;
	// xor r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
loc_881099E0:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x881099ec
	if (!ctx.cr6.gt) goto loc_881099EC;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_881099EC:
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x881099f8
	if (!ctx.cr6.gt) goto loc_881099F8;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_881099F8:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x88109a0c
	if (!ctx.cr6.gt) goto loc_88109A0C;
	// xor r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// xor r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// xor r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r11.u64;
loc_88109A0C:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x88109a18
	if (!ctx.cr6.gt) goto loc_88109A18;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_88109A18:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x88109a24
	if (!ctx.cr6.gt) goto loc_88109A24;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_88109A24:
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// sthu r11,2(r29)
	ctx.current_instruction = 0x88109A2C;
	ea = 2 + ctx.r29.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r29.u32 = ea;
	// bdnz 0x88109864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88109864;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8810985c
	if (!ctx.cr0.eq) goto loc_8810985C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r3,30
	ctx.r30.s64 = ctx.r3.s64 + 30;
	// li r5,2
	ctx.r5.s64 = 2;
loc_88109A54:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r6,r11,-32
	ctx.r6.s64 = ctx.r11.s64 + -32;
	// addi r7,r10,64
	ctx.r7.s64 = ctx.r10.s64 + 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88109A64:
	// lhz r11,-32(r7)
	ctx.current_instruction = 0x88109A64;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + -32);
	// lhz r9,-64(r7)
	ctx.current_instruction = 0x88109A68;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + -64);
	// lhz r4,0(r7)
	ctx.current_instruction = 0x88109A6C;
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
	// ble cr6,0x88109a94
	if (!ctx.cr6.gt) goto loc_88109A94;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
loc_88109A94:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88109aa0
	if (!ctx.cr6.gt) goto loc_88109AA0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_88109AA0:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109aac
	if (!ctx.cr6.gt) goto loc_88109AAC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_88109AAC:
	// lhz r8,32(r7)
	ctx.current_instruction = 0x88109AAC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// sth r4,32(r6)
	ctx.current_instruction = 0x88109AB8;
	REX_STORE_U16(ctx.r6.u32 + 32, ctx.r4.u16);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88109ad4
	if (!ctx.cr6.gt) goto loc_88109AD4;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_88109AD4:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88109ae0
	if (!ctx.cr6.gt) goto loc_88109AE0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_88109AE0:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109aec
	if (!ctx.cr6.gt) goto loc_88109AEC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88109AEC:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// sthu r11,64(r6)
	ctx.current_instruction = 0x88109AF4;
	ea = 64 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x88109a64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88109A64;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r1,142
	ctx.r11.s64 = ctx.r1.s64 + 142;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bne 0x88109a54
	if (!ctx.cr0.eq) goto loc_88109A54;
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r31,r3,482
	ctx.r31.s64 = ctx.r3.s64 + 482;
	// li r4,2
	ctx.r4.s64 = 2;
loc_88109B1C:
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
loc_88109B34:
	// lhz r11,-2(r10)
	ctx.current_instruction = 0x88109B34;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r8,-4(r10)
	ctx.current_instruction = 0x88109B38;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r7,0(r10)
	ctx.current_instruction = 0x88109B3C;
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
	// ble cr6,0x88109b64
	if (!ctx.cr6.gt) goto loc_88109B64;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r11.u64;
loc_88109B64:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88109b70
	if (!ctx.cr6.gt) goto loc_88109B70;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_88109B70:
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109b7c
	if (!ctx.cr6.gt) goto loc_88109B7C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_88109B7C:
	// lhz r7,2(r10)
	ctx.current_instruction = 0x88109B7C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// sthx r29,r6,r10
	ctx.current_instruction = 0x88109B88;
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r29.u16);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88109ba4
	if (!ctx.cr6.gt) goto loc_88109BA4;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
loc_88109BA4:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x88109bb0
	if (!ctx.cr6.gt) goto loc_88109BB0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_88109BB0:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109bbc
	if (!ctx.cr6.gt) goto loc_88109BBC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_88109BBC:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sthu r11,4(r5)
	ctx.current_instruction = 0x88109BC4;
	ea = 4 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r5.u32 = ea;
	// bdnz 0x88109b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88109B34;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r1,562
	ctx.r11.s64 = ctx.r1.s64 + 562;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bne 0x88109b1c
	if (!ctx.cr0.eq) goto loc_88109B1C;
	// lhz r11,0(r27)
	ctx.current_instruction = 0x88109BDC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r10,0(r3)
	ctx.current_instruction = 0x88109BE0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r9,32(r3)
	ctx.current_instruction = 0x88109BE4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109c08
	if (!ctx.cr6.gt) goto loc_88109C08;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_88109C08:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88109c14
	if (!ctx.cr6.gt) goto loc_88109C14;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_88109C14:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109c20
	if (!ctx.cr6.gt) goto loc_88109C20;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88109C20:
	// lhz r10,28(r3)
	ctx.current_instruction = 0x88109C20;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 28);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lhz r8,0(r30)
	ctx.current_instruction = 0x88109C28;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r7,62(r3)
	ctx.current_instruction = 0x88109C30;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 62);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// sth r9,80(r1)
	ctx.current_instruction = 0x88109C38;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109c54
	if (!ctx.cr6.gt) goto loc_88109C54;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_88109C54:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88109c60
	if (!ctx.cr6.gt) goto loc_88109C60;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_88109C60:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109c6c
	if (!ctx.cr6.gt) goto loc_88109C6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88109C6C:
	// lhz r10,448(r3)
	ctx.current_instruction = 0x88109C6C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 448);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lhz r8,480(r3)
	ctx.current_instruction = 0x88109C74;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 480);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r7,0(r31)
	ctx.current_instruction = 0x88109C7C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// sth r9,110(r1)
	ctx.current_instruction = 0x88109C84;
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109ca0
	if (!ctx.cr6.gt) goto loc_88109CA0;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_88109CA0:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88109cac
	if (!ctx.cr6.gt) goto loc_88109CAC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_88109CAC:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109cb8
	if (!ctx.cr6.gt) goto loc_88109CB8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88109CB8:
	// lhz r10,508(r3)
	ctx.current_instruction = 0x88109CB8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 508);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lhz r8,510(r3)
	ctx.current_instruction = 0x88109CC0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 510);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r7,478(r3)
	ctx.current_instruction = 0x88109CC8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 478);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// sth r9,560(r1)
	ctx.current_instruction = 0x88109CD0;
	REX_STORE_U16(ctx.r1.u32 + 560, ctx.r9.u16);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109cec
	if (!ctx.cr6.gt) goto loc_88109CEC;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
loc_88109CEC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88109cf8
	if (!ctx.cr6.gt) goto loc_88109CF8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_88109CF8:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88109d04
	if (!ctx.cr6.gt) goto loc_88109D04;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88109D04:
	// sth r11,590(r1)
	ctx.current_instruction = 0x88109D04;
	REX_STORE_U16(ctx.r1.u32 + 590, ctx.r11.u16);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,-19972(r10)
	ctx.current_instruction = 0x88109D10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -19972);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88109D1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88109D1C:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88111580) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88111580);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88111580;
	ctx.current_instruction = 0x88111580;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8811158c
	if (!ctx.cr6.lt) goto loc_8811158C;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_8811158C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x88111598
	if (!ctx.cr6.lt) goto loc_88111598;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_88111598:
	// stw r4,88(r3)
	ctx.current_instruction = 0x88111598;
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// stw r5,92(r3)
	ctx.current_instruction = 0x8811159C;
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// stw r6,96(r3)
	ctx.current_instruction = 0x881115A0;
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// stw r7,100(r3)
	ctx.current_instruction = 0x881115A4;
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88111BF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88111BF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88111BF0) {
			switch (rex_dispatch_address) {
				case 0x88111BF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88111BF0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88111BF8: goto loc_88111BF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88111BF8;
	__savegprlr_27(ctx, base);
loc_88111BF8:
	// lwz r10,116(r3)
	ctx.current_instruction = 0x88111BF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x88111BFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88111e20
	if (ctx.cr6.eq) goto loc_88111E20;
	// lwz r9,100(r3)
	ctx.current_instruction = 0x88111C08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88111e20
	if (ctx.cr6.eq) goto loc_88111E20;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x88111C14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88111e20
	if (ctx.cr6.eq) goto loc_88111E20;
	// lwz r10,96(r3)
	ctx.current_instruction = 0x88111C20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88111e20
	if (ctx.cr6.eq) goto loc_88111E20;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// mullw r31,r27,r8
	ctx.r31.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// divw r29,r31,r11
	ctx.r29.u64 = uint32_t((ctx.r11.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r31.s32 / ctx.r11.s32 : 0);
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r28,r7,r8
	ctx.r28.u64 = uint32_t((ctx.r8.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r7.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x88111c80
	if (!ctx.cr6.gt) goto loc_88111C80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_88111C80:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88111e20
	if (!ctx.cr6.gt) goto loc_88111E20;
	// lwz r11,104(r3)
	ctx.current_instruction = 0x88111C88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88111ca4
	if (ctx.cr6.eq) goto loc_88111CA4;
	// addi r11,r28,-256
	ctx.r11.s64 = ctx.r28.s64 + -256;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// b 0x88111ca8
	goto loc_88111CA8;
loc_88111CA4:
	// li r8,0
	ctx.r8.s64 = 0;
loc_88111CA8:
	// mullw r11,r28,r4
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// lwz r9,124(r3)
	ctx.current_instruction = 0x88111CAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// add. r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bge 0x88111d24
	if (!ctx.cr0.lt) goto loc_88111D24;
	// subf r8,r31,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r31.u64;
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r6,r8,r28
	ctx.r6.u64 = uint32_t((ctx.r28.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r8.s32 / ctx.r28.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 + ctx.r4.u64;
	// andc r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x88111d18
	if (!ctx.cr6.lt) goto loc_88111D18;
	// subf r4,r4,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r4.u64;
loc_88111CEC:
	// lwz r11,132(r3)
	ctx.current_instruction = 0x88111CEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88111d10
	if (!ctx.cr6.gt) goto loc_88111D10;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88111D00:
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x88111D00;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r8,0(r9)
	ctx.current_instruction = 0x88111D04;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x88111d00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111D00;
loc_88111D10:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x88111cec
	if (!ctx.cr0.eq) goto loc_88111CEC;
loc_88111D18:
	// mullw r11,r6,r28
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_88111D24:
	// cmpw cr6,r4,r29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x88111d8c
	if (!ctx.cr6.lt) goto loc_88111D8C;
	// subf r30,r4,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r4.u64;
loc_88111D30:
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// lwz r7,132(r3)
	ctx.current_instruction = 0x88111D34;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r4,r8,256
	ctx.xer.ca = ctx.r8.u32 <= 256;
	ctx.r4.u64 = static_cast<uint64_t>(256) - ctx.r8.u64;
	// srawi r11,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 8;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// ble cr6,0x88111d80
	if (!ctx.cr6.gt) goto loc_88111D80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88111D54:
	// lbzx r7,r11,r10
	ctx.current_instruction = 0x88111D54;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r6,0(r11)
	ctx.current_instruction = 0x88111D58;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// stb r7,0(r9)
	ctx.current_instruction = 0x88111D74;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x88111d54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111D54;
loc_88111D80:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bne 0x88111d30
	if (!ctx.cr0.eq) goto loc_88111D30;
loc_88111D8C:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x88111e20
	if (!ctx.cr6.lt) goto loc_88111E20;
	// subf r4,r29,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r29.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_88111D9C:
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// lwz r6,132(r3)
	ctx.current_instruction = 0x88111DA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// subfic r5,r8,256
	ctx.xer.ca = ctx.r8.u32 <= 256;
	ctx.r5.u64 = static_cast<uint64_t>(256) - ctx.r8.u64;
	// srawi r7,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 8;
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r7,r27
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x88111df8
	if (!ctx.cr6.lt) goto loc_88111DF8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88111e14
	if (!ctx.cr6.gt) goto loc_88111E14;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88111DC8:
	// lbzx r7,r11,r10
	ctx.current_instruction = 0x88111DC8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r6,0(r11)
	ctx.current_instruction = 0x88111DCC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r6,r5
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// stb r7,1(r9)
	ctx.current_instruction = 0x88111DE8;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x88111dc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111DC8;
	// b 0x88111e14
	goto loc_88111E14;
loc_88111DF8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88111e14
	if (!ctx.cr6.gt) goto loc_88111E14;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88111E08:
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x88111E08;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,1(r9)
	ctx.current_instruction = 0x88111E0C;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x88111e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111E08;
loc_88111E14:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bne 0x88111d9c
	if (!ctx.cr0.eq) goto loc_88111D9C;
loc_88111E20:
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811A0F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811A0F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811A0F0) {
			switch (rex_dispatch_address) {
				case 0x8811A0F8:
				case 0x8811A134:
				case 0x8811A188:
				case 0x8811A1D8:
				case 0x8811A214:
				case 0x8811A248:
				case 0x8811A264:
				case 0x8811A28C:
				case 0x8811A2D8:
				case 0x8811A328:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811A0F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811A0F8: goto loc_8811A0F8;
		case 0x8811A134: goto loc_8811A134;
		case 0x8811A188: goto loc_8811A188;
		case 0x8811A1D8: goto loc_8811A1D8;
		case 0x8811A214: goto loc_8811A214;
		case 0x8811A248: goto loc_8811A248;
		case 0x8811A264: goto loc_8811A264;
		case 0x8811A28C: goto loc_8811A28C;
		case 0x8811A2D8: goto loc_8811A2D8;
		case 0x8811A328: goto loc_8811A328;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8811A0F8;
	__savegprlr_24(ctx, base);
loc_8811A0F8:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8811A0F8;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,28(r3)
	ctx.current_instruction = 0x8811A100;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r26,r4,-24
	ctx.r26.s64 = ctx.r4.s64 + -24;
	// stw r29,92(r1)
	ctx.current_instruction = 0x8811A108;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	ctx.current_instruction = 0x8811A110;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,88(r1)
	ctx.current_instruction = 0x8811A118;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8811A11C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8811A124;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r29,84(r1)
	ctx.current_instruction = 0x8811A12C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bctrl 
	ctx.lr = 0x8811A134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811A134:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811a328
	if (ctx.cr6.lt) goto loc_8811A328;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8811A140;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r10,62(r11)
	ctx.current_instruction = 0x8811A144;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8811a168
	if (!ctx.cr6.gt) goto loc_8811A168;
loc_8811A154:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8811A168:
	// lwz r10,120(r11)
	ctx.current_instruction = 0x8811A168;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r6,r11,120
	ctx.r6.s64 = ctx.r11.s64 + 120;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8811a1ac
	if (!ctx.cr6.eq) goto loc_8811A1AC;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,224(r30)
	ctx.current_instruction = 0x8811A17C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811A188;
	sub_880CB2C0(ctx, base);
loc_8811A188:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811a328
	if (ctx.cr6.lt) goto loc_8811A328;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8811A194;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,120(r11)
	ctx.current_instruction = 0x8811A198;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r29,0(r10)
	ctx.current_instruction = 0x8811A19C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r29,4(r10)
	ctx.current_instruction = 0x8811A1A0;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r29,8(r10)
	ctx.current_instruction = 0x8811A1A4;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stw r29,12(r10)
	ctx.current_instruction = 0x8811A1A8;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
loc_8811A1AC:
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8811A1AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,120(r11)
	ctx.current_instruction = 0x8811A1B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8811A1B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8811a154
	if (!ctx.cr6.eq) goto loc_8811A154;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,224(r30)
	ctx.current_instruction = 0x8811A1C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811A1D8;
	sub_880CB2C0(ctx, base);
loc_8811A1D8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811a328
	if (ctx.cr6.lt) goto loc_8811A328;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8811A1E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// stw r29,0(r11)
	ctx.current_instruction = 0x8811A1EC;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	ctx.current_instruction = 0x8811A1F0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r25,0(r28)
	ctx.current_instruction = 0x8811A1F4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// blt cr6,0x8811a2fc
	if (ctx.cr6.lt) goto loc_8811A2FC;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88119390
	ctx.lr = 0x8811A214;
	sub_88119390(ctx, base);
loc_8811A214:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811a304
	if (ctx.cr6.lt) goto loc_8811A304;
	// lwz r29,84(r1)
	ctx.current_instruction = 0x8811A220;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,4
	ctx.r9.s64 = 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8811a29c
	if (ctx.cr6.eq) goto loc_8811A29C;
	// addi r28,r25,4
	ctx.r28.s64 = ctx.r25.s64 + 4;
	// lwz r3,224(r30)
	ctx.current_instruction = 0x8811A234;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811A248;
	sub_880CB2C0(ctx, base);
loc_8811A248:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811a304
	if (ctx.cr6.lt) goto loc_8811A304;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r28)
	ctx.current_instruction = 0x8811A258;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8811A264;
	sub_88052D90(ctx, base);
loc_8811A264:
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8811a2fc
	if (ctx.cr6.gt) goto loc_8811A2FC;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r28)
	ctx.current_instruction = 0x8811A274;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811A28C;
	sub_881198A8(ctx, base);
loc_8811A28C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811a304
	if (ctx.cr6.lt) goto loc_8811A304;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_8811A29C:
	// stw r29,0(r25)
	ctx.current_instruction = 0x8811A29C;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8811A2A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r10,62(r11)
	ctx.current_instruction = 0x8811A2A4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,62(r11)
	ctx.current_instruction = 0x8811A2AC;
	REX_STORE_U16(ctx.r11.u32 + 62, ctx.r8.u16);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8811A2B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r5,r6,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r6.u64;
	// subf. r29,r9,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8811a328
	if (ctx.cr0.eq) goto loc_8811A328;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8811A2C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811A2CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811A2D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811A2D8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811a304
	if (ctx.cr6.lt) goto loc_8811A304;
	// ld r11,8(r30)
	ctx.current_instruction = 0x8811A2E4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 8);
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r30)
	ctx.current_instruction = 0x8811A2F0;
	REX_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8811A2FC:
	// lis r31,-32688
	ctx.r31.s64 = -2142240768;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
loc_8811A304:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8811a328
	if (ctx.cr6.eq) goto loc_8811A328;
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811A30C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// addi r5,r25,4
	ctx.r5.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811a328
	if (ctx.cr6.eq) goto loc_8811A328;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r30)
	ctx.current_instruction = 0x8811A320;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x8811A328;
	sub_880CB318(ctx, base);
loc_8811A328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811F348) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811F348;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811F348) {
			switch (rex_dispatch_address) {
				case 0x8811F398:
				case 0x8811F3B8:
				case 0x8811F3D8:
				case 0x8811F3F8:
				case 0x8811F418:
				case 0x8811F438:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811F348;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811F398: goto loc_8811F398;
		case 0x8811F3B8: goto loc_8811F3B8;
		case 0x8811F3D8: goto loc_8811F3D8;
		case 0x8811F3F8: goto loc_8811F3F8;
		case 0x8811F418: goto loc_8811F418;
		case 0x8811F438: goto loc_8811F438;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8811F34C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8811F350;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8811F354;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8811F358;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,28(r3)
	ctx.current_instruction = 0x8811F35C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x8811F368;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r11,88(r1)
	ctx.current_instruction = 0x8811F370;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r11,96(r1)
	ctx.current_instruction = 0x8811F378;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.current_instruction = 0x8811F37C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,80(r1)
	ctx.current_instruction = 0x8811F380;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r11,81(r1)
	ctx.current_instruction = 0x8811F384;
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stw r10,84(r1)
	ctx.current_instruction = 0x8811F388;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.current_instruction = 0x8811F38C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8811F398;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811F398:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f4a8
	if (ctx.cr6.lt) goto loc_8811F4A8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811F3B8;
	sub_881196F8(ctx, base);
loc_8811F3B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f4a8
	if (ctx.cr6.lt) goto loc_8811F4A8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88119528
	ctx.lr = 0x8811F3D8;
	sub_88119528(ctx, base);
loc_8811F3D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f4a8
	if (ctx.cr6.lt) goto loc_8811F4A8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88119390
	ctx.lr = 0x8811F3F8;
	sub_88119390(ctx, base);
loc_8811F3F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f4a8
	if (ctx.cr6.lt) goto loc_8811F4A8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88119100
	ctx.lr = 0x8811F418;
	sub_88119100(ctx, base);
loc_8811F418:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f4a8
	if (ctx.cr6.lt) goto loc_8811F4A8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88119100
	ctx.lr = 0x8811F438;
	sub_88119100(ctx, base);
loc_8811F438:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f4a8
	if (ctx.cr6.lt) goto loc_8811F4A8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,13928
	ctx.r11.s64 = ctx.r11.s64 + 13928;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8811F450:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x8811F450;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x8811F454;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8811f470
	if (!ctx.cr0.eq) goto loc_8811F470;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8811f450
	if (!ctx.cr6.eq) goto loc_8811F450;
loc_8811F470:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8811f490
	if (!ctx.cr6.eq) goto loc_8811F490;
	// lbz r10,80(r1)
	ctx.current_instruction = 0x8811F478;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8811f490
	if (!ctx.cr6.eq) goto loc_8811F490;
	// lbz r10,81(r1)
	ctx.current_instruction = 0x8811F484;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8811f49c
	if (ctx.cr6.eq) goto loc_8811F49C;
loc_8811F490:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// b 0x8811f4a8
	goto loc_8811F4A8;
loc_8811F49C:
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8811F49C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// ld r10,104(r1)
	ctx.current_instruction = 0x8811F4A0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stw r10,4(r11)
	ctx.current_instruction = 0x8811F4A4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8811F4A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8811F4AC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8811F4B4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8811F4B8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881229D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881229D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881229D8;
	ctx.current_instruction = 0x881229D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	ctx.current_instruction = 0x881229DC;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	ctx.current_instruction = 0x881229E0;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.current_instruction = 0x881229E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,148(r11)
	ctx.current_instruction = 0x881229E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88122a3c
	if (ctx.cr6.eq) goto loc_88122A3C;
loc_881229F4:
	// lwz r10,0(r9)
	ctx.current_instruction = 0x881229F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.current_instruction = 0x881229F8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x88122a1c
	if (ctx.cr6.gt) goto loc_88122A1C;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x88122A04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x88122a30
	if (ctx.cr6.lt) goto loc_88122A30;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x88122a3c
	if (ctx.cr6.lt) goto loc_88122A3C;
loc_88122A1C:
	// lwz r9,8(r9)
	ctx.current_instruction = 0x88122A1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881229f4
	if (!ctx.cr6.eq) goto loc_881229F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88122A30:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	ctx.current_instruction = 0x88122A34;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	ctx.current_instruction = 0x88122A38;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_88122A3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88123418) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88123418;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88123418) {
			switch (rex_dispatch_address) {
				case 0x8812345C:
				case 0x88123470:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88123418;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812345C: goto loc_8812345C;
		case 0x88123470: goto loc_88123470;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8812341C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88123420;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88123424;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88123428;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.current_instruction = 0x8812342C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r4,32(r11)
	ctx.current_instruction = 0x88123438;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// ld r10,40(r11)
	ctx.current_instruction = 0x8812343C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x88123464
	if (ctx.cr6.eq) goto loc_88123464;
	// lwz r11,76(r11)
	ctx.current_instruction = 0x88123448;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88123450;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8812345C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8812345C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88123470
	if (ctx.cr6.lt) goto loc_88123470;
loc_88123464:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88123358
	ctx.lr = 0x88123470;
	sub_88123358(ctx, base);
loc_88123470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88123474;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8812347C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88123480;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881241A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881241A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881241A0;
	ctx.current_instruction = 0x881241A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	ctx.current_instruction = 0x881241A4;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	ctx.current_instruction = 0x881241A8;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,44(r3)
	ctx.current_instruction = 0x881241AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,20(r10)
	ctx.current_instruction = 0x881241B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88124218
	if (ctx.cr6.eq) goto loc_88124218;
	// lwz r8,16(r10)
	ctx.current_instruction = 0x881241BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x88124218
	if (ctx.cr6.eq) goto loc_88124218;
loc_881241C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88124218
	if (ctx.cr6.eq) goto loc_88124218;
	// lwz r9,0(r11)
	ctx.current_instruction = 0x881241D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r9)
	ctx.current_instruction = 0x881241D4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x88124218
	if (ctx.cr6.lt) goto loc_88124218;
	// lwz r9,4(r9)
	ctx.current_instruction = 0x881241E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r4,r9
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x8812420c
	if (ctx.cr6.lt) goto loc_8812420C;
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x88124218
	if (ctx.cr6.gt) goto loc_88124218;
	// lwz r11,12(r11)
	ctx.current_instruction = 0x881241F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x881241c8
	if (!ctx.cr6.eq) goto loc_881241C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8812420C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r6)
	ctx.current_instruction = 0x88124210;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	ctx.current_instruction = 0x88124214;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_88124218:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88125030) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88125030);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125030;
	ctx.current_instruction = 0x88125030;
	// lwz r9,44(r3)
	ctx.current_instruction = 0x88125030;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x88125038;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,4(r4)
	ctx.current_instruction = 0x8812503C;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r8,8(r4)
	ctx.current_instruction = 0x88125040;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r10,16(r9)
	ctx.current_instruction = 0x88125044;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// ld r7,8(r11)
	ctx.current_instruction = 0x88125048;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8812504C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8812507c
	if (!ctx.cr6.eq) goto loc_8812507C;
	// stw r4,4(r10)
	ctx.current_instruction = 0x88125058;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r4)
	ctx.current_instruction = 0x88125060;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x88125064;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,20(r9)
	ctx.current_instruction = 0x88125068;
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r9)
	ctx.current_instruction = 0x8812506C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	ctx.current_instruction = 0x88125074;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8812507C:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8812507C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r6,8(r10)
	ctx.current_instruction = 0x88125080;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x881250c8
	if (!ctx.cr6.lt) goto loc_881250C8;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8812508C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881250a8
	if (!ctx.cr6.eq) goto loc_881250A8;
	// stw r11,8(r4)
	ctx.current_instruction = 0x88125098;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r8,4(r4)
	ctx.current_instruction = 0x8812509C;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r4,4(r11)
	ctx.current_instruction = 0x881250A0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r4,20(r9)
	ctx.current_instruction = 0x881250A4;
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
loc_881250A8:
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881250A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8812507c
	if (!ctx.cr6.eq) goto loc_8812507C;
	// lwz r11,24(r9)
	ctx.current_instruction = 0x881250B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	ctx.current_instruction = 0x881250C0;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881250C8:
	// stw r11,4(r4)
	ctx.current_instruction = 0x881250C8;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x881250CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r4)
	ctx.current_instruction = 0x881250D0;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x881250D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881250e4
	if (ctx.cr6.eq) goto loc_881250E4;
	// stw r4,4(r10)
	ctx.current_instruction = 0x881250E0;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_881250E4:
	// stw r4,8(r11)
	ctx.current_instruction = 0x881250E4;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,24(r9)
	ctx.current_instruction = 0x881250EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	ctx.current_instruction = 0x881250F4;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881277E8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881277E8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881277E8;
	ctx.current_instruction = 0x881277E8;
	PPCRegister temp{};
	// lwz r11,444(r3)
	ctx.current_instruction = 0x881277E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812782c
	if (ctx.cr6.eq) goto loc_8812782C;
	// lwz r9,456(r3)
	ctx.current_instruction = 0x881277F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwz r8,252(r3)
	ctx.current_instruction = 0x881277FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r7,256(r3)
	ctx.current_instruction = 0x88127800;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// sraw r6,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// lwz r10,268(r3)
	ctx.current_instruction = 0x88127808;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// sraw r5,r7,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stw r6,464(r3)
	ctx.current_instruction = 0x88127810;
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r6.u32);
	// stw r5,468(r3)
	ctx.current_instruction = 0x88127814;
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r5.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88127824
	if (!ctx.cr6.lt) goto loc_88127824;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88127824:
	// stw r11,472(r3)
	ctx.current_instruction = 0x88127824;
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8812782C:
	// lwz r11,448(r3)
	ctx.current_instruction = 0x8812782C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88127860
	if (ctx.cr6.eq) goto loc_88127860;
	// lwz r11,456(r3)
	ctx.current_instruction = 0x88127838;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,252(r3)
	ctx.current_instruction = 0x8812783C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r9,256(r3)
	ctx.current_instruction = 0x88127840;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r8,268(r3)
	ctx.current_instruction = 0x88127844;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,464(r3)
	ctx.current_instruction = 0x88127850;
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r7.u32);
	// stw r6,468(r3)
	ctx.current_instruction = 0x88127854;
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r6.u32);
	// stw r8,472(r3)
	ctx.current_instruction = 0x88127858;
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88127860:
	// lwz r11,252(r3)
	ctx.current_instruction = 0x88127860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r10,256(r3)
	ctx.current_instruction = 0x88127864;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,268(r3)
	ctx.current_instruction = 0x88127868;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// stw r11,464(r3)
	ctx.current_instruction = 0x8812786C;
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// stw r10,468(r3)
	ctx.current_instruction = 0x88127870;
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r10.u32);
	// stw r9,472(r3)
	ctx.current_instruction = 0x88127874;
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812A200) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812A200;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812A200) {
			switch (rex_dispatch_address) {
				case 0x8812A208:
				case 0x8812A258:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812A200;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812A208: goto loc_8812A208;
		case 0x8812A258: goto loc_8812A258;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8812A208;
	__savegprlr_24(ctx, base);
loc_8812A208:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8812A208;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.current_instruction = 0x8812A20C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812a378
	if (ctx.cr6.eq) goto loc_8812A378;
	// lwz r10,244(r3)
	ctx.current_instruction = 0x8812A21C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8812a278
	if (!ctx.cr6.gt) goto loc_8812A278;
loc_8812A22C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8812a26c
	if (!ctx.cr6.gt) goto loc_8812A26C;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8812A240:
	// lwz r11,348(r31)
	ctx.current_instruction = 0x8812A240;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r10,r28,r11
	ctx.current_instruction = 0x8812A24C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwzx r3,r10,r30
	ctx.current_instruction = 0x8812A250;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x88052d90
	ctx.lr = 0x8812A258;
	sub_88052D90(ctx, base);
loc_8812A258:
	// lwz r10,244(r31)
	ctx.current_instruction = 0x8812A258;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812a240
	if (ctx.cr6.lt) goto loc_8812A240;
loc_8812A26C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812a22c
	if (ctx.cr6.lt) goto loc_8812A22C;
loc_8812A278:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8812a378
	if (!ctx.cr6.gt) goto loc_8812A378;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8812A290:
	// lwz r9,340(r31)
	ctx.current_instruction = 0x8812A290;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,344(r31)
	ctx.current_instruction = 0x8812A298;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwzx r8,r9,r29
	ctx.current_instruction = 0x8812A2A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8812a364
	if (!ctx.cr6.gt) goto loc_8812A364;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// slw r27,r3,r25
	ctx.r27.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r25.u8 & 0x3F));
loc_8812A2B4:
	// lwz r8,0(r28)
	ctx.current_instruction = 0x8812A2B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r28)
	ctx.current_instruction = 0x8812A2BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// ble cr6,0x8812a34c
	if (!ctx.cr6.gt) goto loc_8812A34C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8812A2E4:
	// lwz r10,344(r31)
	ctx.current_instruction = 0x8812A2E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// slw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rotlw r7,r3,r11
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, ctx.r11.u8 & 0x1F);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r24,0(r9)
	ctx.current_instruction = 0x8812A2FC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mullw r8,r8,r24
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r24.s32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8812a320
	if (!ctx.cr6.lt) goto loc_8812A320;
loc_8812A30C:
	// lwzu r8,4(r9)
	ctx.current_instruction = 0x8812A30C;
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8812a30c
	if (ctx.cr6.lt) goto loc_8812A30C;
loc_8812A320:
	// lwz r9,348(r31)
	ctx.current_instruction = 0x8812A320;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r6,116
	ctx.r6.s64 = ctx.r6.s64 + 116;
	// lwzx r7,r29,r9
	ctx.current_instruction = 0x8812A330;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwzx r10,r7,r4
	ctx.current_instruction = 0x8812A334;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stbx r8,r10,r30
	ctx.current_instruction = 0x8812A33C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u8);
	// lwz r10,244(r31)
	ctx.current_instruction = 0x8812A340;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812a2e4
	if (ctx.cr6.lt) goto loc_8812A2E4;
loc_8812A34C:
	// lwz r11,340(r31)
	ctx.current_instruction = 0x8812A34C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwzx r9,r11,r29
	ctx.current_instruction = 0x8812A358;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8812a2b4
	if (ctx.cr6.lt) goto loc_8812A2B4;
loc_8812A364:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,116
	ctx.r26.s64 = ctx.r26.s64 + 116;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812a290
	if (ctx.cr6.lt) goto loc_8812A290;
loc_8812A378:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812F2F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812F2F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812F2F0) {
			switch (rex_dispatch_address) {
				case 0x8812F2F8:
				case 0x8812F4B8:
				case 0x8812F548:
				case 0x8812F710:
				case 0x8812F724:
				case 0x8812F798:
				case 0x8812F7A8:
				case 0x8812F7BC:
				case 0x8812F7F4:
				case 0x8812F814:
				case 0x8812F844:
				case 0x8812F878:
				case 0x8812F894:
				case 0x8812F8E4:
				case 0x8812F95C:
				case 0x8812F998:
				case 0x8812FA14:
				case 0x8812FA40:
				case 0x8812FA8C:
				case 0x8812FABC:
				case 0x8812FB20:
				case 0x8812FB68:
				case 0x8812FB94:
				case 0x8812FBC0:
				case 0x8812FBE8:
				case 0x8812FC14:
				case 0x8812FC60:
				case 0x8812FC80:
				case 0x8812FD04:
				case 0x8812FD58:
				case 0x8812FD9C:
				case 0x8812FDE0:
				case 0x8812FE38:
				case 0x8812FE94:
				case 0x8812FEF0:
				case 0x8812FF70:
				case 0x8812FFE0:
				case 0x88130050:
				case 0x8813010C:
				case 0x88130170:
				case 0x8813020C:
				case 0x881302BC:
				case 0x881302E4:
				case 0x8813031C:
				case 0x88130358:
				case 0x88130380:
				case 0x881303D8:
				case 0x8813040C:
				case 0x881304C4:
				case 0x8813051C:
				case 0x88130524:
				case 0x8813053C:
				case 0x88130584:
				case 0x881305BC:
				case 0x881305F0:
				case 0x88130620:
				case 0x88130660:
				case 0x88130790:
				case 0x88130844:
				case 0x88130890:
				case 0x881308DC:
				case 0x88130904:
				case 0x88130958:
				case 0x88130970:
				case 0x88130AE4:
				case 0x88130B04:
				case 0x88130BE4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812F2F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812F2F8: goto loc_8812F2F8;
		case 0x8812F4B8: goto loc_8812F4B8;
		case 0x8812F548: goto loc_8812F548;
		case 0x8812F710: goto loc_8812F710;
		case 0x8812F724: goto loc_8812F724;
		case 0x8812F798: goto loc_8812F798;
		case 0x8812F7A8: goto loc_8812F7A8;
		case 0x8812F7BC: goto loc_8812F7BC;
		case 0x8812F7F4: goto loc_8812F7F4;
		case 0x8812F814: goto loc_8812F814;
		case 0x8812F844: goto loc_8812F844;
		case 0x8812F878: goto loc_8812F878;
		case 0x8812F894: goto loc_8812F894;
		case 0x8812F8E4: goto loc_8812F8E4;
		case 0x8812F95C: goto loc_8812F95C;
		case 0x8812F998: goto loc_8812F998;
		case 0x8812FA14: goto loc_8812FA14;
		case 0x8812FA40: goto loc_8812FA40;
		case 0x8812FA8C: goto loc_8812FA8C;
		case 0x8812FABC: goto loc_8812FABC;
		case 0x8812FB20: goto loc_8812FB20;
		case 0x8812FB68: goto loc_8812FB68;
		case 0x8812FB94: goto loc_8812FB94;
		case 0x8812FBC0: goto loc_8812FBC0;
		case 0x8812FBE8: goto loc_8812FBE8;
		case 0x8812FC14: goto loc_8812FC14;
		case 0x8812FC60: goto loc_8812FC60;
		case 0x8812FC80: goto loc_8812FC80;
		case 0x8812FD04: goto loc_8812FD04;
		case 0x8812FD58: goto loc_8812FD58;
		case 0x8812FD9C: goto loc_8812FD9C;
		case 0x8812FDE0: goto loc_8812FDE0;
		case 0x8812FE38: goto loc_8812FE38;
		case 0x8812FE94: goto loc_8812FE94;
		case 0x8812FEF0: goto loc_8812FEF0;
		case 0x8812FF70: goto loc_8812FF70;
		case 0x8812FFE0: goto loc_8812FFE0;
		case 0x88130050: goto loc_88130050;
		case 0x8813010C: goto loc_8813010C;
		case 0x88130170: goto loc_88130170;
		case 0x8813020C: goto loc_8813020C;
		case 0x881302BC: goto loc_881302BC;
		case 0x881302E4: goto loc_881302E4;
		case 0x8813031C: goto loc_8813031C;
		case 0x88130358: goto loc_88130358;
		case 0x88130380: goto loc_88130380;
		case 0x881303D8: goto loc_881303D8;
		case 0x8813040C: goto loc_8813040C;
		case 0x881304C4: goto loc_881304C4;
		case 0x8813051C: goto loc_8813051C;
		case 0x88130524: goto loc_88130524;
		case 0x8813053C: goto loc_8813053C;
		case 0x88130584: goto loc_88130584;
		case 0x881305BC: goto loc_881305BC;
		case 0x881305F0: goto loc_881305F0;
		case 0x88130620: goto loc_88130620;
		case 0x88130660: goto loc_88130660;
		case 0x88130790: goto loc_88130790;
		case 0x88130844: goto loc_88130844;
		case 0x88130890: goto loc_88130890;
		case 0x881308DC: goto loc_881308DC;
		case 0x88130904: goto loc_88130904;
		case 0x88130958: goto loc_88130958;
		case 0x88130970: goto loc_88130970;
		case 0x88130AE4: goto loc_88130AE4;
		case 0x88130B04: goto loc_88130B04;
		case 0x88130BE4: goto loc_88130BE4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8812F2F8;
	__savegprlr_14(ctx, base);
loc_8812F2F8:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x8812F2F8;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x8812F2FC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,40(r3)
	ctx.current_instruction = 0x8812F304;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lwz r20,256(r31)
	ctx.current_instruction = 0x8812F318;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// beq cr6,0x88130c0c
	if (ctx.cr6.eq) goto loc_88130C0C;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r19,r11,7880
	ctx.r19.s64 = ctx.r11.s64 + 7880;
	// li r14,8
	ctx.r14.s64 = 8;
	// addi r18,r10,32712
	ctx.r18.s64 = ctx.r10.s64 + 32712;
	// ori r15,r9,65535
	ctx.r15.u64 = ctx.r9.u64 | 65535;
	// li r17,36
	ctx.r17.s64 = 36;
	// li r21,45
	ctx.r21.s64 = 45;
	// li r16,2
	ctx.r16.s64 = 2;
loc_8812F34C:
	// lwz r11,40(r26)
	ctx.current_instruction = 0x8812F34C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 40);
	// li r29,12
	ctx.r29.s64 = 12;
	// li r28,14
	ctx.r28.s64 = 14;
	// li r27,4
	ctx.r27.s64 = 4;
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bgt cr6,0x88130b0c
	if (ctx.cr6.gt) goto loc_88130B0C;
	// lis r12,-30701
	ctx.r12.s64 = -2012020736;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3204
	ctx.r12.s64 = ctx.r12.s64 + -3204;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x8812F370;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8812F450;
	case 1:
		goto loc_88130B0C;
	case 2:
		goto loc_88130B0C;
	case 3:
		goto loc_8812FF24;
	case 4:
		goto loc_88130508;
	case 5:
		goto loc_881305B4;
	case 6:
		goto loc_881305DC;
	case 7:
		goto loc_881305DC;
	case 8:
		goto loc_88130600;
	case 9:
		goto loc_881307D0;
	case 10:
		goto loc_88130B0C;
	case 11:
		goto loc_8812F7E4;
	case 12:
		goto loc_8812F92C;
	case 13:
		goto loc_8812F8B4;
	case 14:
		goto loc_8812F988;
	case 15:
		goto loc_8812FA0C;
	case 16:
		goto loc_88130B0C;
	case 17:
		goto loc_88130B0C;
	case 18:
		goto loc_8812FCB8;
	case 19:
		goto loc_8812FF94;
	case 20:
		goto loc_88130B0C;
	case 21:
		goto loc_88130B0C;
	case 22:
		goto loc_88130B0C;
	case 23:
		goto loc_88130B0C;
	case 24:
		goto loc_88130B0C;
	case 25:
		goto loc_88130B0C;
	case 26:
		goto loc_88130B0C;
	case 27:
		goto loc_88130B0C;
	case 28:
		goto loc_88130B0C;
	case 29:
		goto loc_88130004;
	case 30:
		goto loc_881303EC;
	case 31:
		goto loc_88130434;
	case 32:
		goto loc_8812FA28;
	case 33:
		goto loc_8813007C;
	case 34:
		goto loc_88130B0C;
	case 35:
		goto loc_88130B0C;
	case 36:
		goto loc_8812FBD8;
	case 37:
		goto loc_8812FD74;
	case 38:
		goto loc_8812FD3C;
	case 39:
		goto loc_8812FBB0;
	case 40:
		goto loc_8812FB10;
	case 41:
		goto loc_8812FB58;
	case 42:
		goto loc_8812FB84;
	case 43:
		goto loc_88130B0C;
	case 44:
		goto loc_8812FE10;
	case 45:
		goto loc_8812FEC8;
	case 46:
		goto loc_8812FE6C;
	case 47:
		goto loc_88130B0C;
	case 48:
		goto loc_8812FC04;
	case 49:
		goto loc_88130B0C;
	case 50:
		goto loc_88130B0C;
	case 51:
		goto loc_88130B0C;
	case 52:
		goto loc_881302A8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8812F450:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x8812F450;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8812f558
	if (ctx.cr6.gt) goto loc_8812F558;
	// lwz r11,216(r31)
	ctx.current_instruction = 0x8812F45C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812f4fc
	if (ctx.cr6.eq) goto loc_8812F4FC;
	// lwz r10,228(r31)
	ctx.current_instruction = 0x8812F468;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8812f48c
	if (!ctx.cr6.gt) goto loc_8812F48C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8812F47C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8812f47c
	if (ctx.cr6.gt) goto loc_8812F47C;
loc_8812F48C:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8812f4a8
	if (!ctx.cr6.gt) goto loc_8812F4A8;
loc_8812F498:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8812f498
	if (ctx.cr6.gt) goto loc_8812F498;
loc_8812F4A8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812F4B8;
	sub_8812C528(ctx, base);
loc_8812F4B8:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x8812F4C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8812F4C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,236(r31)
	ctx.current_instruction = 0x8812F4D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// slw r7,r23,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// divw r20,r11,r7
	ctx.r20.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// andc r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r20,r8
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r8.s32, ctx.xer);
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt cr6,0x88130b24
	if (ctx.cr6.lt) goto loc_88130B24;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88130b24
	if (ctx.cr6.gt) goto loc_88130B24;
loc_8812F4FC:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x8812F4FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,580(r31)
	ctx.current_instruction = 0x8812F508;
	REX_STORE_U16(ctx.r31.u32 + 580, ctx.r11.u16);
	// beq cr6,0x8812f53c
	if (ctx.cr6.eq) goto loc_8812F53C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8812F518:
	// lwz r8,584(r31)
	ctx.current_instruction = 0x8812F518;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sthx r10,r9,r8
	ctx.current_instruction = 0x8812F520;
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u16);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lhz r6,34(r31)
	ctx.current_instruction = 0x8812F528;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8812f518
	if (ctx.cr6.lt) goto loc_8812F518;
loc_8812F53C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880d4ca8
	ctx.lr = 0x8812F548;
	sub_880D4CA8(ctx, base);
loc_8812F548:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// b 0x8812f708
	goto loc_8812F708;
loc_8812F558:
	// lwz r10,256(r31)
	ctx.current_instruction = 0x8812F558;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lhz r5,34(r31)
	ctx.current_instruction = 0x8812F55C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lwz r3,320(r31)
	ctx.current_instruction = 0x8812F564;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mullw r7,r5,r10
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8812f5d4
	if (!ctx.cr6.gt) goto loc_8812F5D4;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r11,r3,424
	ctx.r11.s64 = ctx.r3.s64 + 424;
loc_8812F588:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8812F588;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
	// lwz r9,12(r10)
	ctx.current_instruction = 0x8812F590;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r9,0(r9)
	ctx.current_instruction = 0x8812F594;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8812f5bc
	if (!ctx.cr6.gt) goto loc_8812F5BC;
	// lhz r30,-310(r11)
	ctx.current_instruction = 0x8812F5A4;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -310);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r10,8(r10)
	ctx.current_instruction = 0x8812F5AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r9,r10
	ctx.current_instruction = 0x8812F5B8;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
loc_8812F5BC:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8812f588
	if (ctx.cr6.lt) goto loc_8812F588;
loc_8812F5D4:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// sth r24,580(r31)
	ctx.current_instruction = 0x8812F5D8;
	REX_STORE_U16(ctx.r31.u32 + 580, ctx.r24.u16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8812f6d8
	if (!ctx.cr6.gt) goto loc_8812F6D8;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r11,r3,114
	ctx.r11.s64 = ctx.r3.s64 + 114;
loc_8812F5F0:
	// lwz r10,310(r11)
	ctx.current_instruction = 0x8812F5F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 310);
	// lwz r9,12(r10)
	ctx.current_instruction = 0x8812F5F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.current_instruction = 0x8812F5F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r4,0(r9)
	ctx.current_instruction = 0x8812F5FC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8812f6bc
	if (!ctx.cr6.eq) goto loc_8812F6BC;
	// lhz r4,0(r11)
	ctx.current_instruction = 0x8812F610;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r3,r30
	ctx.r3.s64 = ctx.r30.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r4,r10
	ctx.current_instruction = 0x8812F620;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8812f6bc
	if (!ctx.cr6.eq) goto loc_8812F6BC;
	// lhz r4,580(r31)
	ctx.current_instruction = 0x8812F630;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// lwz r3,584(r31)
	ctx.current_instruction = 0x8812F634;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r4,r3
	ctx.current_instruction = 0x8812F640;
	REX_STORE_U16(ctx.r4.u32 + ctx.r3.u32, ctx.r8.u16);
	// lhz r8,580(r31)
	ctx.current_instruction = 0x8812F644;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r8,580(r31)
	ctx.current_instruction = 0x8812F64C;
	REX_STORE_U16(ctx.r31.u32 + 580, ctx.r8.u16);
	// lhz r3,0(r11)
	ctx.current_instruction = 0x8812F650;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r4,r10
	ctx.current_instruction = 0x8812F660;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// sth r3,12(r11)
	ctx.current_instruction = 0x8812F664;
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r3.u16);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x8812F668;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r3,r10
	ctx.current_instruction = 0x8812F674;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// sth r8,10(r11)
	ctx.current_instruction = 0x8812F678;
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r8.u16);
	// lhz r4,0(r11)
	ctx.current_instruction = 0x8812F67C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhz r4,-2(r8)
	ctx.current_instruction = 0x8812F68C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// sth r4,8(r11)
	ctx.current_instruction = 0x8812F690;
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r4.u16);
	// lhz r3,0(r9)
	ctx.current_instruction = 0x8812F694;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x8812F698;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lhzx r3,r4,r10
	ctx.current_instruction = 0x8812F6A8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// sth r10,0(r9)
	ctx.current_instruction = 0x8812F6B4;
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_8812F6BC:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// lhz r9,34(r31)
	ctx.current_instruction = 0x8812F6C0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8812f5f0
	if (ctx.cr6.lt) goto loc_8812F5F0;
loc_8812F6D8:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x8812F6D8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// lhz r10,34(r31)
	ctx.current_instruction = 0x8812F6DC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88130c04
	if (ctx.cr6.gt) goto loc_88130C04;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88130c04
	if (!ctx.cr6.gt) goto loc_88130C04;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x88130c04
	if (ctx.cr6.lt) goto loc_88130C04;
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,216(r26)
	ctx.current_instruction = 0x8812F704;
	REX_STORE_U32(ctx.r26.u32 + 216, ctx.r10.u32);
loc_8812F708:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88127880
	ctx.lr = 0x8812F710;
	sub_88127880(ctx, base);
loc_8812F710:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d6010
	ctx.lr = 0x8812F724;
	sub_880D6010(ctx, base);
loc_8812F724:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x8812F730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8812f744
	if (ctx.cr6.gt) goto loc_8812F744;
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x88130b08
	goto loc_88130B08;
loc_8812F744:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x8812F744;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8812f7dc
	if (!ctx.cr6.gt) goto loc_8812F7DC;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8812F75C:
	// lwz r9,584(r31)
	ctx.current_instruction = 0x8812F75C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.current_instruction = 0x8812F760;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r8,r11,r9
	ctx.current_instruction = 0x8812F764;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r11,r7,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r6,114(r30)
	ctx.current_instruction = 0x8812F774;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 114);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8812f7ac
	if (!ctx.cr6.eq) goto loc_8812F7AC;
	// li r5,112
	ctx.r5.s64 = 112;
	// lwz r3,4(r30)
	ctx.current_instruction = 0x8812F784;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,444(r30)
	ctx.current_instruction = 0x8812F78C;
	REX_STORE_U32(ctx.r30.u32 + 444, ctx.r24.u32);
	// stw r23,436(r30)
	ctx.current_instruction = 0x8812F790;
	REX_STORE_U32(ctx.r30.u32 + 436, ctx.r23.u32);
	// bl 0x88052d90
	ctx.lr = 0x8812F798;
	sub_88052D90(ctx, base);
loc_8812F798:
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r30)
	ctx.current_instruction = 0x8812F7A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x88052d90
	ctx.lr = 0x8812F7A8;
	sub_88052D90(ctx, base);
loc_8812F7A8:
	// stw r24,64(r30)
	ctx.current_instruction = 0x8812F7A8;
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r24.u32);
loc_8812F7AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881363c0
	ctx.lr = 0x8812F7BC;
	sub_881363C0(ctx, base);
loc_8812F7BC:
	// lhz r9,580(r31)
	ctx.current_instruction = 0x8812F7BC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8812f75c
	if (ctx.cr6.lt) goto loc_8812F75C;
loc_8812F7DC:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x88130b08
	goto loc_88130B08;
loc_8812F7E4:
	// addi r30,r26,224
	ctx.r30.s64 = ctx.r26.s64 + 224;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88139190
	ctx.lr = 0x8812F7F4;
	sub_88139190(ctx, base);
loc_8812F7F4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// stw r24,60(r26)
	ctx.current_instruction = 0x8812F800;
	REX_STORE_U32(ctx.r26.u32 + 60, ctx.r24.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812F814;
	sub_8812C528(ctx, base);
loc_8812F814:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812F820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8812f834
	if (!ctx.cr6.eq) goto loc_8812F834;
	// stw r28,40(r26)
	ctx.current_instruction = 0x8812F82C;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r28.u32);
	// b 0x88130b0c
	goto loc_88130B0C;
loc_8812F834:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812F844;
	sub_8812C528(ctx, base);
loc_8812F844:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812F850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812f868
	if (ctx.cr6.eq) goto loc_8812F868;
	// stw r11,60(r26)
	ctx.current_instruction = 0x8812F85C;
	REX_STORE_U32(ctx.r26.u32 + 60, ctx.r11.u32);
	// stw r29,40(r26)
	ctx.current_instruction = 0x8812F860;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r29.u32);
	// b 0x88130b0c
	goto loc_88130B0C;
loc_8812F868:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812F878;
	sub_8812C528(ctx, base);
loc_8812F878:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x8812F888;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812F894;
	sub_8812C528(ctx, base);
loc_8812F894:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812F8A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,40(r26)
	ctx.current_instruction = 0x8812F8A4;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,60(r26)
	ctx.current_instruction = 0x8812F8AC;
	REX_STORE_U32(ctx.r26.u32 + 60, ctx.r10.u32);
	// b 0x88130b0c
	goto loc_88130B0C;
loc_8812F8B4:
	// lwz r11,60(r26)
	ctx.current_instruction = 0x8812F8B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8812f924
	if (!ctx.cr6.gt) goto loc_8812F924;
	// addi r29,r26,224
	ctx.r29.s64 = ctx.r26.s64 + 224;
loc_8812F8C4:
	// lwz r30,60(r26)
	ctx.current_instruction = 0x8812F8C4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// ble cr6,0x8812f8d4
	if (!ctx.cr6.gt) goto loc_8812F8D4;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
loc_8812F8D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812F8E4;
	sub_8812C528(ctx, base);
loc_8812F8E4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bge cr6,0x8812f90c
	if (!ctx.cr6.lt) goto loc_8812F90C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812F8F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r10,r30,8
	ctx.xer.ca = ctx.r30.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r30.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// stw r8,80(r1)
	ctx.current_instruction = 0x8812F908;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_8812F90C:
	// lwz r11,60(r26)
	ctx.current_instruction = 0x8812F90C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r30.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,60(r26)
	ctx.current_instruction = 0x8812F918;
	REX_STORE_U32(ctx.r26.u32 + 60, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8812f8c4
	if (ctx.cr6.gt) goto loc_8812F8C4;
loc_8812F924:
	// stw r28,40(r26)
	ctx.current_instruction = 0x8812F924;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r28.u32);
	// b 0x88130b0c
	goto loc_88130B0C;
loc_8812F92C:
	// lwz r11,60(r26)
	ctx.current_instruction = 0x8812F92C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8812f980
	if (!ctx.cr6.gt) goto loc_8812F980;
	// addi r29,r26,224
	ctx.r29.s64 = ctx.r26.s64 + 224;
loc_8812F93C:
	// lwz r30,60(r26)
	ctx.current_instruction = 0x8812F93C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 24, ctx.xer);
	// ble cr6,0x8812f94c
	if (!ctx.cr6.gt) goto loc_8812F94C;
	// li r30,24
	ctx.r30.s64 = 24;
loc_8812F94C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812F95C;
	sub_8812C528(ctx, base);
loc_8812F95C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,60(r26)
	ctx.current_instruction = 0x8812F968;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r30.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,60(r26)
	ctx.current_instruction = 0x8812F974;
	REX_STORE_U32(ctx.r26.u32 + 60, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8812f93c
	if (ctx.cr6.gt) goto loc_8812F93C;
loc_8812F980:
	// stw r28,40(r26)
	ctx.current_instruction = 0x8812F980;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r28.u32);
	// b 0x88130b0c
	goto loc_88130B0C;
loc_8812F988:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812F998;
	sub_8812C528(ctx, base);
loc_8812F998:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812F9A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,580(r31)
	ctx.current_instruction = 0x8812F9A8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// stw r24,140(r31)
	ctx.current_instruction = 0x8812F9AC;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r24.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r11,132(r31)
	ctx.current_instruction = 0x8812F9B4;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812f9e0
	if (!ctx.cr6.gt) goto loc_8812F9E0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_8812F9CC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812f9cc
	if (ctx.cr6.lt) goto loc_8812F9CC;
loc_8812F9E0:
	// lwz r11,132(r31)
	ctx.current_instruction = 0x8812F9E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812fa00
	if (!ctx.cr6.eq) goto loc_8812FA00;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r24,88(r26)
	ctx.current_instruction = 0x8812F9F0;
	REX_STORE_U32(ctx.r26.u32 + 88, ctx.r24.u32);
	// stw r11,40(r26)
	ctx.current_instruction = 0x8812F9F4;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
	// stw r23,192(r31)
	ctx.current_instruction = 0x8812F9F8;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r23.u32);
	// b 0x88130b0c
	goto loc_88130B0C;
loc_8812FA00:
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r23,192(r31)
	ctx.current_instruction = 0x8812FA04;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r23.u32);
	// b 0x88130b08
	goto loc_88130B08;
loc_8812FA0C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881376d8
	ctx.lr = 0x8812FA14;
	sub_881376D8(ctx, base);
loc_8812FA14:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,40(r26)
	ctx.current_instruction = 0x8812FA24;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_8812FA28:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x8812FA28;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r28,r26,224
	ctx.r28.s64 = ctx.r26.s64 + 224;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x88139190
	ctx.lr = 0x8812FA40;
	sub_88139190(ctx, base);
loc_8812FA40:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lhz r11,580(r31)
	ctx.current_instruction = 0x8812FA4C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8812fae8
	if (!ctx.cr6.gt) goto loc_8812FAE8;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8812FA64:
	// lwz r9,584(r31)
	ctx.current_instruction = 0x8812FA64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,320(r31)
	ctx.current_instruction = 0x8812FA6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r8,r10,r9
	ctx.current_instruction = 0x8812FA78;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812FA8C;
	sub_8812C528(ctx, base);
loc_8812FA8C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FA98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r30)
	ctx.current_instruction = 0x8812FAA4;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8812FAA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 & ctx.r27.u64;
	// bl 0x880d7798
	ctx.lr = 0x8812FABC;
	sub_880D7798(ctx, base);
loc_8812FABC:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lhz r10,580(r31)
	ctx.current_instruction = 0x8812FAC8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8812fa64
	if (ctx.cr6.lt) goto loc_8812FA64;
loc_8812FAE8:
	// lhz r11,110(r31)
	ctx.current_instruction = 0x8812FAE8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mulli r10,r11,90
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(90));
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,296(r31)
	ctx.current_instruction = 0x8812FAFC;
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r8.u32);
	// stw r15,136(r26)
	ctx.current_instruction = 0x8812FB00;
	REX_STORE_U32(ctx.r26.u32 + 136, ctx.r15.u32);
	// bne cr6,0x88130b34
	if (!ctx.cr6.eq) goto loc_88130B34;
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x88130b08
	goto loc_88130B08;
loc_8812FB10:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FB20;
	sub_8812C528(ctx, base);
loc_8812FB20:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FB2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,140(r31)
	ctx.current_instruction = 0x8812FB30;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8812FB34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8812fb50
	if (!ctx.cr6.eq) goto loc_8812FB50;
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r11,40(r26)
	ctx.current_instruction = 0x8812FB44;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
	// stw r23,124(r31)
	ctx.current_instruction = 0x8812FB48;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r23.u32);
	// b 0x88130b0c
	goto loc_88130B0C;
loc_8812FB50:
	// stw r17,40(r26)
	ctx.current_instruction = 0x8812FB50;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r17.u32);
	// b 0x88130b0c
	goto loc_88130B0C;
loc_8812FB58:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FB68;
	sub_8812C528(ctx, base);
loc_8812FB68:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FB74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r11,148(r31)
	ctx.current_instruction = 0x8812FB7C;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r10,40(r26)
	ctx.current_instruction = 0x8812FB80;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r10.u32);
loc_8812FB84:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FB94;
	sub_8812C528(ctx, base);
loc_8812FB94:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FBA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r11,156(r31)
	ctx.current_instruction = 0x8812FBA8;
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r10,40(r26)
	ctx.current_instruction = 0x8812FBAC;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r10.u32);
loc_8812FBB0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FBC0;
	sub_8812C528(ctx, base);
loc_8812FBC0:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FBCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,192(r31)
	ctx.current_instruction = 0x8812FBD0;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r17,40(r26)
	ctx.current_instruction = 0x8812FBD4;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r17.u32);
loc_8812FBD8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FBE8;
	sub_8812C528(ctx, base);
loc_8812FBE8:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FBF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r11,204(r31)
	ctx.current_instruction = 0x8812FBFC;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r10,40(r26)
	ctx.current_instruction = 0x8812FC00;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r10.u32);
loc_8812FC04:
	// addi r28,r26,224
	ctx.r28.s64 = ctx.r26.s64 + 224;
	// lhz r4,34(r31)
	ctx.current_instruction = 0x8812FC08;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88139190
	ctx.lr = 0x8812FC14;
	sub_88139190(ctx, base);
loc_8812FC14:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lhz r11,580(r31)
	ctx.current_instruction = 0x8812FC20;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8812fcac
	if (!ctx.cr6.gt) goto loc_8812FCAC;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8812FC38:
	// lwz r9,584(r31)
	ctx.current_instruction = 0x8812FC38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,320(r31)
	ctx.current_instruction = 0x8812FC40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r8,r10,r9
	ctx.current_instruction = 0x8812FC4C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812FC60;
	sub_8812C528(ctx, base);
loc_8812FC60:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FC6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r30)
	ctx.current_instruction = 0x8812FC78;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// bl 0x880d7798
	ctx.lr = 0x8812FC80;
	sub_880D7798(ctx, base);
loc_8812FC80:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lhz r10,580(r31)
	ctx.current_instruction = 0x8812FC8C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8812fc38
	if (ctx.cr6.lt) goto loc_8812FC38;
loc_8812FCAC:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r24,40(r31)
	ctx.current_instruction = 0x8812FCB0;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// stw r11,40(r26)
	ctx.current_instruction = 0x8812FCB4;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_8812FCB8:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8812FCB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fd34
	if (!ctx.cr6.eq) goto loc_8812FD34;
	// lwz r11,192(r31)
	ctx.current_instruction = 0x8812FCC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fd34
	if (!ctx.cr6.eq) goto loc_8812FD34;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8812FCD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8812fd34
	if (ctx.cr6.eq) goto loc_8812FD34;
	// lwz r11,148(r31)
	ctx.current_instruction = 0x8812FCDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8812fd34
	if (ctx.cr6.eq) goto loc_8812FD34;
	// lwz r11,156(r31)
	ctx.current_instruction = 0x8812FCE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8812fd34
	if (ctx.cr6.eq) goto loc_8812FD34;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FD04;
	sub_8812C528(ctx, base);
loc_8812FD04:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FD10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x88130c04
	if (ctx.cr6.eq) goto loc_88130C04;
	// lhz r10,580(r31)
	ctx.current_instruction = 0x8812FD1C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// lhz r9,34(r31)
	ctx.current_instruction = 0x8812FD20;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r11,188(r31)
	ctx.current_instruction = 0x8812FD28;
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x88130c04
	if (!ctx.cr6.eq) goto loc_88130C04;
loc_8812FD34:
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,40(r26)
	ctx.current_instruction = 0x8812FD38;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_8812FD3C:
	// lwz r11,120(r31)
	ctx.current_instruction = 0x8812FD3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fd6c
	if (!ctx.cr6.eq) goto loc_8812FD6C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FD58;
	sub_8812C528(ctx, base);
loc_8812FD58:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FD64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,164(r31)
	ctx.current_instruction = 0x8812FD68;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_8812FD6C:
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,40(r26)
	ctx.current_instruction = 0x8812FD70;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_8812FD74:
	// lwz r11,120(r31)
	ctx.current_instruction = 0x8812FD74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fdb8
	if (!ctx.cr6.eq) goto loc_8812FDB8;
	// lwz r11,164(r31)
	ctx.current_instruction = 0x8812FD80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fe08
	if (!ctx.cr6.eq) goto loc_8812FE08;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FD9C;
	sub_8812C528(ctx, base);
loc_8812FD9C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FDA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,168(r31)
	ctx.current_instruction = 0x8812FDB0;
	REX_STORE_U16(ctx.r31.u32 + 168, ctx.r10.u16);
	// b 0x8812fe08
	goto loc_8812FE08;
loc_8812FDB8:
	// lwz r11,192(r31)
	ctx.current_instruction = 0x8812FDB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fe08
	if (!ctx.cr6.eq) goto loc_8812FE08;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8812FDC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8812fe08
	if (ctx.cr6.eq) goto loc_8812FE08;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FDE0;
	sub_8812C528(ctx, base);
loc_8812FDE0:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FDEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x88130c04
	if (!ctx.cr6.lt) goto loc_88130C04;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88130c04
	if (ctx.cr6.lt) goto loc_88130C04;
	// stw r11,632(r31)
	ctx.current_instruction = 0x8812FE04;
	REX_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
loc_8812FE08:
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,40(r26)
	ctx.current_instruction = 0x8812FE0C;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_8812FE10:
	// lwz r11,120(r31)
	ctx.current_instruction = 0x8812FE10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fe64
	if (!ctx.cr6.eq) goto loc_8812FE64;
	// lwz r11,164(r31)
	ctx.current_instruction = 0x8812FE1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fe64
	if (!ctx.cr6.eq) goto loc_8812FE64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FE38;
	sub_8812C528(ctx, base);
loc_8812FE38:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FE44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x88130c04
	if (ctx.cr6.gt) goto loc_88130C04;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x88130c04
	if (ctx.cr6.lt) goto loc_88130C04;
	// sth r11,170(r31)
	ctx.current_instruction = 0x8812FE60;
	REX_STORE_U16(ctx.r31.u32 + 170, ctx.r11.u16);
loc_8812FE64:
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,40(r26)
	ctx.current_instruction = 0x8812FE68;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_8812FE6C:
	// lwz r11,120(r31)
	ctx.current_instruction = 0x8812FE6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fec4
	if (!ctx.cr6.eq) goto loc_8812FEC4;
	// lwz r11,164(r31)
	ctx.current_instruction = 0x8812FE78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fec4
	if (!ctx.cr6.eq) goto loc_8812FEC4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FE94;
	sub_8812C528(ctx, base);
loc_8812FE94:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8812FEA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x88130c04
	if (ctx.cr6.lt) goto loc_88130C04;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x88130c04
	if (ctx.cr6.gt) goto loc_88130C04;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// sth r11,172(r31)
	ctx.current_instruction = 0x8812FEC0;
	REX_STORE_U16(ctx.r31.u32 + 172, ctx.r11.u16);
loc_8812FEC4:
	// stw r21,40(r26)
	ctx.current_instruction = 0x8812FEC4;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r21.u32);
loc_8812FEC8:
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8812FEC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8812ff08
	if (ctx.cr6.eq) goto loc_8812FF08;
	// lwz r11,192(r31)
	ctx.current_instruction = 0x8812FED4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812ff08
	if (!ctx.cr6.eq) goto loc_8812FF08;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FEF0;
	sub_8812C528(ctx, base);
loc_8812FEF0:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FEFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,174(r31)
	ctx.current_instruction = 0x8812FF04;
	REX_STORE_U16(ctx.r31.u32 + 174, ctx.r10.u16);
loc_8812FF08:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8812FF08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812ff1c
	if (!ctx.cr6.eq) goto loc_8812FF1C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x88130b08
	goto loc_88130B08;
loc_8812FF1C:
	// stw r14,40(r26)
	ctx.current_instruction = 0x8812FF1C;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r14.u32);
	// b 0x88130b0c
	goto loc_88130B0C;
loc_8812FF24:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8812FF24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812ff8c
	if (!ctx.cr6.eq) goto loc_8812FF8C;
	// lwz r11,192(r31)
	ctx.current_instruction = 0x8812FF30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812ff8c
	if (!ctx.cr6.eq) goto loc_8812FF8C;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8812FF3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8812ff8c
	if (ctx.cr6.eq) goto loc_8812FF8C;
	// lwz r11,148(r31)
	ctx.current_instruction = 0x8812FF48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8812ff8c
	if (ctx.cr6.eq) goto loc_8812FF8C;
	// lwz r11,156(r31)
	ctx.current_instruction = 0x8812FF54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8812ff8c
	if (ctx.cr6.eq) goto loc_8812FF8C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FF70;
	sub_8812C528(ctx, base);
loc_8812FF70:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FF7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x88130c04
	if (ctx.cr6.eq) goto loc_88130C04;
	// stw r11,184(r31)
	ctx.current_instruction = 0x8812FF88;
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_8812FF8C:
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,40(r26)
	ctx.current_instruction = 0x8812FF90;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_8812FF94:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8812FF94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fffc
	if (!ctx.cr6.eq) goto loc_8812FFFC;
	// lwz r11,192(r31)
	ctx.current_instruction = 0x8812FFA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812fffc
	if (!ctx.cr6.eq) goto loc_8812FFFC;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8812FFAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8812fffc
	if (ctx.cr6.eq) goto loc_8812FFFC;
	// lwz r11,148(r31)
	ctx.current_instruction = 0x8812FFB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8812fffc
	if (ctx.cr6.eq) goto loc_8812FFFC;
	// lwz r11,156(r31)
	ctx.current_instruction = 0x8812FFC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8812fffc
	if (ctx.cr6.eq) goto loc_8812FFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8812FFE0;
	sub_8812C528(ctx, base);
loc_8812FFE0:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812FFEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x88130c04
	if (ctx.cr6.eq) goto loc_88130C04;
	// stw r11,656(r31)
	ctx.current_instruction = 0x8812FFF8;
	REX_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
loc_8812FFFC:
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,40(r26)
	ctx.current_instruction = 0x88130000;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_88130004:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x88130004;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813006c
	if (!ctx.cr6.eq) goto loc_8813006C;
	// lwz r11,192(r31)
	ctx.current_instruction = 0x88130010;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813006c
	if (!ctx.cr6.eq) goto loc_8813006C;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8813001C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8813006c
	if (ctx.cr6.eq) goto loc_8813006C;
	// lwz r11,148(r31)
	ctx.current_instruction = 0x88130028;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8813006c
	if (ctx.cr6.eq) goto loc_8813006C;
	// lwz r11,156(r31)
	ctx.current_instruction = 0x88130034;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8813006c
	if (ctx.cr6.eq) goto loc_8813006C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88130050;
	sub_8812C528(ctx, base);
loc_88130050:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813005C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x88130c04
	if (ctx.cr6.eq) goto loc_88130C04;
	// stw r11,716(r31)
	ctx.current_instruction = 0x88130068;
	REX_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
loc_8813006C:
	// li r11,33
	ctx.r11.s64 = 33;
	// sth r24,150(r26)
	ctx.current_instruction = 0x88130070;
	REX_STORE_U16(ctx.r26.u32 + 150, ctx.r24.u16);
	// stw r24,44(r26)
	ctx.current_instruction = 0x88130074;
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r24.u32);
	// stw r11,40(r26)
	ctx.current_instruction = 0x88130078;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_8813007C:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8813007C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88130b04
	if (!ctx.cr6.eq) goto loc_88130B04;
	// lwz r11,192(r31)
	ctx.current_instruction = 0x88130088;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88130b04
	if (!ctx.cr6.eq) goto loc_88130B04;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88130094;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88130b04
	if (ctx.cr6.eq) goto loc_88130B04;
	// lwz r11,148(r31)
	ctx.current_instruction = 0x881300A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88130b04
	if (ctx.cr6.eq) goto loc_88130B04;
	// lwz r11,156(r31)
	ctx.current_instruction = 0x881300AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88130b04
	if (ctx.cr6.eq) goto loc_88130B04;
	// lhz r11,150(r26)
	ctx.current_instruction = 0x881300B8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 150);
	// lhz r10,34(r31)
	ctx.current_instruction = 0x881300BC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881302a0
	if (!ctx.cr6.lt) goto loc_881302A0;
loc_881300CC:
	// lhz r11,150(r26)
	ctx.current_instruction = 0x881300CC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 150);
	// lwz r10,320(r31)
	ctx.current_instruction = 0x881300D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,44(r26)
	ctx.current_instruction = 0x881300D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 44);
	// mulli r9,r9,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881300fc
	if (ctx.cr6.lt) goto loc_881300FC;
	// beq cr6,0x88130144
	if (ctx.cr6.eq) goto loc_88130144;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x881301e0
	if (ctx.cr6.lt) goto loc_881301E0;
	// b 0x88130278
	goto loc_88130278;
loc_881300FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8813010C;
	sub_8812C528(ctx, base);
loc_8813010C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88130118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x88130c04
	if (ctx.cr6.gt) goto loc_88130C04;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x88130c04
	if (ctx.cr6.lt) goto loc_88130C04;
	// sth r11,182(r30)
	ctx.current_instruction = 0x88130138;
	REX_STORE_U16(ctx.r30.u32 + 182, ctx.r11.u16);
	// sth r24,184(r30)
	ctx.current_instruction = 0x8813013C;
	REX_STORE_U16(ctx.r30.u32 + 184, ctx.r24.u16);
	// stw r23,44(r26)
	ctx.current_instruction = 0x88130140;
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r23.u32);
loc_88130144:
	// lhz r11,184(r30)
	ctx.current_instruction = 0x88130144;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 184);
	// lhz r10,182(r30)
	ctx.current_instruction = 0x88130148;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x881301d8
	if (!ctx.cr6.lt) goto loc_881301D8;
	// addi r29,r26,224
	ctx.r29.s64 = ctx.r26.s64 + 224;
loc_88130160:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x88130170;
	sub_8812C528(ctx, base);
loc_88130170:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813017C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x88130c04
	if (ctx.cr6.gt) goto loc_88130C04;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x88130c04
	if (ctx.cr6.lt) goto loc_88130C04;
	// lhz r10,184(r30)
	ctx.current_instruction = 0x88130198;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 184);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,200(r8)
	ctx.current_instruction = 0x881301A8;
	REX_STORE_U32(ctx.r8.u32 + 200, ctx.r11.u32);
	// lhz r7,184(r30)
	ctx.current_instruction = 0x881301AC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + 184);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,184(r30)
	ctx.current_instruction = 0x881301C0;
	REX_STORE_U16(ctx.r30.u32 + 184, ctx.r5.u16);
	// lhz r3,182(r30)
	ctx.current_instruction = 0x881301C4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r30.u32 + 182);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88130160
	if (ctx.cr6.lt) goto loc_88130160;
loc_881301D8:
	// sth r24,184(r30)
	ctx.current_instruction = 0x881301D8;
	REX_STORE_U16(ctx.r30.u32 + 184, ctx.r24.u16);
	// stw r16,44(r26)
	ctx.current_instruction = 0x881301DC;
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r16.u32);
loc_881301E0:
	// lhz r11,184(r30)
	ctx.current_instruction = 0x881301E0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 184);
	// lhz r10,182(r30)
	ctx.current_instruction = 0x881301E4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88130270
	if (!ctx.cr6.lt) goto loc_88130270;
	// addi r29,r26,224
	ctx.r29.s64 = ctx.r26.s64 + 224;
loc_881301FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x8813020C;
	sub_8812C528(ctx, base);
loc_8813020C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88130218;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x88130c04
	if (ctx.cr6.gt) goto loc_88130C04;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88130c04
	if (ctx.cr6.lt) goto loc_88130C04;
	// lhz r11,184(r30)
	ctx.current_instruction = 0x88130230;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 184);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r11,r9,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,220(r8)
	ctx.current_instruction = 0x88130240;
	REX_STORE_U32(ctx.r8.u32 + 220, ctx.r10.u32);
	// lhz r7,184(r30)
	ctx.current_instruction = 0x88130244;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + 184);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,184(r30)
	ctx.current_instruction = 0x88130254;
	REX_STORE_U16(ctx.r30.u32 + 184, ctx.r5.u16);
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lhz r4,182(r30)
	ctx.current_instruction = 0x88130260;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 182);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881301fc
	if (ctx.cr6.lt) goto loc_881301FC;
loc_88130270:
	// sth r24,184(r30)
	ctx.current_instruction = 0x88130270;
	REX_STORE_U16(ctx.r30.u32 + 184, ctx.r24.u16);
	// stw r24,44(r26)
	ctx.current_instruction = 0x88130274;
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r24.u32);
loc_88130278:
	// lhz r11,150(r26)
	ctx.current_instruction = 0x88130278;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,150(r26)
	ctx.current_instruction = 0x88130288;
	REX_STORE_U16(ctx.r26.u32 + 150, ctx.r9.u16);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r7,34(r31)
	ctx.current_instruction = 0x88130294;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881300cc
	if (ctx.cr6.lt) goto loc_881300CC;
loc_881302A0:
	// stw r23,20(r26)
	ctx.current_instruction = 0x881302A0;
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r23.u32);
	// b 0x88130b04
	goto loc_88130B04;
loc_881302A8:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x881302A8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// addi r30,r26,224
	ctx.r30.s64 = ctx.r26.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x88139190
	ctx.lr = 0x881302BC;
	sub_88139190(ctx, base);
loc_881302BC:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x881302C8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x88130318
	if (!ctx.cr6.eq) goto loc_88130318;
	// bl 0x8812c528
	ctx.lr = 0x881302E4;
	sub_8812C528(ctx, base);
loc_881302E4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881302F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,320(r31)
	ctx.current_instruction = 0x881302F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,40(r10)
	ctx.current_instruction = 0x881302F8;
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r9,320(r31)
	ctx.current_instruction = 0x881302FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r8,40(r9)
	ctx.current_instruction = 0x88130300;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// stw r24,68(r9)
	ctx.current_instruction = 0x88130304;
	REX_STORE_U32(ctx.r9.u32 + 68, ctx.r24.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r24,284(r31)
	ctx.current_instruction = 0x8813030C;
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r24.u32);
	// rlwinm r30,r7,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x881303d8
	goto loc_881303D8;
loc_88130318:
	// bl 0x8812c528
	ctx.lr = 0x8813031C;
	sub_8812C528(ctx, base);
loc_8813031C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88130328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,320(r31)
	ctx.current_instruction = 0x88130330;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,68(r10)
	ctx.current_instruction = 0x8813033C;
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88130340;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,320(r31)
	ctx.current_instruction = 0x88130344;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// stw r9,1844(r8)
	ctx.current_instruction = 0x88130348;
	REX_STORE_U32(ctx.r8.u32 + 1844, ctx.r9.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x8813034C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,284(r31)
	ctx.current_instruction = 0x88130350;
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r7.u32);
	// bl 0x8812c528
	ctx.lr = 0x88130358;
	sub_8812C528(ctx, base);
loc_88130358:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,320(r31)
	ctx.current_instruction = 0x88130364;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8813036C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,40(r11)
	ctx.current_instruction = 0x88130378;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// bl 0x8812c528
	ctx.lr = 0x88130380;
	sub_8812C528(ctx, base);
loc_88130380:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,320(r31)
	ctx.current_instruction = 0x8813038C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88130390;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,1816(r11)
	ctx.current_instruction = 0x88130394;
	REX_STORE_U32(ctx.r11.u32 + 1816, ctx.r10.u32);
	// lwz r11,320(r31)
	ctx.current_instruction = 0x88130398;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r8,40(r11)
	ctx.current_instruction = 0x8813039C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r7,1816(r11)
	ctx.current_instruction = 0x881303A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1816);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r9,68(r11)
	ctx.current_instruction = 0x881303AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// and r30,r4,r3
	ctx.r30.u64 = ctx.r4.u64 & ctx.r3.u64;
	// addi r4,r11,1776
	ctx.r4.s64 = ctx.r11.s64 + 1776;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// beq cr6,0x881303d4
	if (ctx.cr6.eq) goto loc_881303D4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_881303D4:
	// bl 0x881363c0
	ctx.lr = 0x881303D8;
	sub_881363C0(ctx, base);
loc_881303D8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r23,296(r31)
	ctx.current_instruction = 0x881303DC;
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r23.u32);
	// bne cr6,0x88130b44
	if (!ctx.cr6.eq) goto loc_88130B44;
	// stw r27,40(r26)
	ctx.current_instruction = 0x881303E4;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r27.u32);
	// b 0x88130b0c
	goto loc_88130B0C;
loc_881303EC:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x881303EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// stw r24,592(r31)
	ctx.current_instruction = 0x881303F0;
	REX_STORE_U32(ctx.r31.u32 + 592, ctx.r24.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x88130428
	if (ctx.cr6.lt) goto loc_88130428;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x8813040C;
	sub_8812C528(ctx, base);
loc_8813040C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88130418;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88130428
	if (ctx.cr6.eq) goto loc_88130428;
	// stw r23,592(r31)
	ctx.current_instruction = 0x88130424;
	REX_STORE_U32(ctx.r31.u32 + 592, ctx.r23.u32);
loc_88130428:
	// li r11,31
	ctx.r11.s64 = 31;
	// sth r24,150(r26)
	ctx.current_instruction = 0x8813042C;
	REX_STORE_U16(ctx.r26.u32 + 150, ctx.r24.u16);
	// stw r11,40(r26)
	ctx.current_instruction = 0x88130430;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_88130434:
	// lwz r11,592(r31)
	ctx.current_instruction = 0x88130434;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 592);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88130504
	if (!ctx.cr6.eq) goto loc_88130504;
	// lhz r11,150(r26)
	ctx.current_instruction = 0x88130440;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 150);
	// lhz r10,580(r31)
	ctx.current_instruction = 0x88130444;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88130504
	if (!ctx.cr6.lt) goto loc_88130504;
	// addi r29,r26,224
	ctx.r29.s64 = ctx.r26.s64 + 224;
loc_8813045C:
	// lhz r10,150(r26)
	ctx.current_instruction = 0x8813045C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 150);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwz r9,584(r31)
	ctx.current_instruction = 0x88130464;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r10,320(r31)
	ctx.current_instruction = 0x8813046C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.current_instruction = 0x88130474;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r9,r5,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,36(r30)
	ctx.current_instruction = 0x88130484;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// srawi r3,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x881304b4
	if (!ctx.cr6.gt) goto loc_881304B4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_881304A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x881304a4
	if (ctx.cr6.gt) goto loc_881304A4;
loc_881304B4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c528
	ctx.lr = 0x881304C4;
	sub_8812C528(ctx, base);
loc_881304C4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881304D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,484(r30)
	ctx.current_instruction = 0x881304D4;
	REX_STORE_U32(ctx.r30.u32 + 484, ctx.r11.u32);
	// lhz r10,150(r26)
	ctx.current_instruction = 0x881304D8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 150);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,150(r26)
	ctx.current_instruction = 0x881304E8;
	REX_STORE_U16(ctx.r26.u32 + 150, ctx.r8.u16);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// lhz r6,580(r31)
	ctx.current_instruction = 0x881304F4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8813045c
	if (ctx.cr6.lt) goto loc_8813045C;
loc_88130504:
	// stw r27,40(r26)
	ctx.current_instruction = 0x88130504;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r27.u32);
loc_88130508:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x88130508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x88130520
	if (ctx.cr6.gt) goto loc_88130520;
	// bl 0x881361f0
	ctx.lr = 0x8813051C;
	sub_881361F0(ctx, base);
loc_8813051C:
	// b 0x88130524
	goto loc_88130524;
loc_88130520:
	// bl 0x88137fc0
	ctx.lr = 0x88130524;
	sub_88137FC0(ctx, base);
loc_88130524:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,296(r31)
	ctx.current_instruction = 0x88130534;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x8812db50
	ctx.lr = 0x8813053C;
	sub_8812DB50(ctx, base);
loc_8813053C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,150(r26)
	ctx.current_instruction = 0x88130540;
	REX_STORE_U16(ctx.r26.u32 + 150, ctx.r11.u16);
	// lhz r10,580(r31)
	ctx.current_instruction = 0x88130544;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881305a8
	if (!ctx.cr6.gt) goto loc_881305A8;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8813055C:
	// lwz r9,584(r31)
	ctx.current_instruction = 0x8813055C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,320(r31)
	ctx.current_instruction = 0x88130564;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r8,r11,r9
	ctx.current_instruction = 0x8813056C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r11,r7,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r24,180(r29)
	ctx.current_instruction = 0x8813057C;
	REX_STORE_U8(ctx.r29.u32 + 180, ctx.r24.u8);
	// bl 0x88129938
	ctx.lr = 0x88130584;
	sub_88129938(ctx, base);
loc_88130584:
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// stfs f1,196(r29)
	ctx.current_instruction = 0x88130588;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r29.u32 + 196, temp.u32);
	// lhz r5,580(r31)
	ctx.current_instruction = 0x8813058C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8813055c
	if (ctx.cr6.lt) goto loc_8813055C;
loc_881305A8:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r24,132(r26)
	ctx.current_instruction = 0x881305AC;
	REX_STORE_U32(ctx.r26.u32 + 132, ctx.r24.u32);
	// stw r11,40(r26)
	ctx.current_instruction = 0x881305B0;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_881305B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881374f8
	ctx.lr = 0x881305BC;
	sub_881374F8(ctx, base);
loc_881305BC:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,400(r31)
	ctx.current_instruction = 0x881305C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 400);
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r11,152(r26)
	ctx.current_instruction = 0x881305D0;
	REX_STORE_U16(ctx.r26.u32 + 152, ctx.r11.u16);
	// sth r24,150(r26)
	ctx.current_instruction = 0x881305D4;
	REX_STORE_U16(ctx.r26.u32 + 150, ctx.r24.u16);
	// stw r10,40(r26)
	ctx.current_instruction = 0x881305D8;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r10.u32);
loc_881305DC:
	// lwz r11,40(r31)
	ctx.current_instruction = 0x881305DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881305fc
	if (!ctx.cr6.eq) goto loc_881305FC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88136708
	ctx.lr = 0x881305F0;
	sub_88136708(ctx, base);
loc_881305F0:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
loc_881305FC:
	// stw r14,40(r26)
	ctx.current_instruction = 0x881305FC;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r14.u32);
loc_88130600:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x88130600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8813068c
	if (ctx.cr6.gt) goto loc_8813068C;
	// addi r30,r26,224
	ctx.r30.s64 = ctx.r26.s64 + 224;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// bl 0x88139190
	ctx.lr = 0x88130620;
	sub_88139190(ctx, base);
loc_88130620:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,216(r31)
	ctx.current_instruction = 0x8813062C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813068c
	if (ctx.cr6.eq) goto loc_8813068C;
	// lwz r11,320(r31)
	ctx.current_instruction = 0x88130638;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,424(r11)
	ctx.current_instruction = 0x8813063C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r9,0(r10)
	ctx.current_instruction = 0x88130640;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x8813068c
	if (!ctx.cr6.gt) goto loc_8813068C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c528
	ctx.lr = 0x88130660;
	sub_8812C528(ctx, base);
loc_88130660:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r10,320(r31)
	ctx.current_instruction = 0x8813066C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88130670;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lhz r9,114(r10)
	ctx.current_instruction = 0x88130678;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 114);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8813068c
	if (!ctx.cr6.eq) goto loc_8813068C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88130c04
	if (!ctx.cr6.eq) goto loc_88130C04;
loc_8813068C:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x8813068C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881307c0
	if (!ctx.cr6.gt) goto loc_881307C0;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// clrlwi r27,r22,24
	ctx.r27.u64 = ctx.r22.u32 & 0xFF;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_881306A8:
	// lwz r9,584(r31)
	ctx.current_instruction = 0x881306A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r8,320(r31)
	ctx.current_instruction = 0x881306AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,8(r26)
	ctx.current_instruction = 0x881306B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r7,460(r31)
	ctx.current_instruction = 0x881306B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// lhzx r6,r11,r9
	ctx.current_instruction = 0x881306B8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r9,r5,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x881306f0
	if (ctx.cr6.eq) goto loc_881306F0;
	// lwz r11,456(r31)
	ctx.current_instruction = 0x881306D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// lhz r10,118(r30)
	ctx.current_instruction = 0x881306DC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// sraw r9,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x8813070c
	goto loc_8813070C;
loc_881306F0:
	// lwz r11,448(r31)
	ctx.current_instruction = 0x881306F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,118(r30)
	ctx.current_instruction = 0x881306F8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// beq cr6,0x8813070c
	if (ctx.cr6.eq) goto loc_8813070C;
	// lwz r10,456(r31)
	ctx.current_instruction = 0x88130704;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
loc_8813070C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88130724
	if (ctx.cr6.eq) goto loc_88130724;
	// lwz r11,36(r30)
	ctx.current_instruction = 0x88130714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,456(r31)
	ctx.current_instruction = 0x88130718;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// sraw r10,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x88130744
	goto loc_88130744;
loc_88130724:
	// lwz r11,448(r31)
	ctx.current_instruction = 0x88130724;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,36(r30)
	ctx.current_instruction = 0x8813072C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// beq cr6,0x88130740
	if (ctx.cr6.eq) goto loc_88130740;
	// lwz r10,456(r31)
	ctx.current_instruction = 0x88130734;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x88130744
	goto loc_88130744;
loc_88130740:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_88130744:
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r9,56(r30)
	ctx.current_instruction = 0x88130748;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,0(r30)
	ctx.current_instruction = 0x88130754;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r9,460(r31)
	ctx.current_instruction = 0x88130758;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88130770
	if (ctx.cr6.eq) goto loc_88130770;
	// lwz r10,456(r31)
	ctx.current_instruction = 0x88130764;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// sraw r11,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x88130784
	goto loc_88130784;
loc_88130770:
	// lwz r10,448(r31)
	ctx.current_instruction = 0x88130770;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88130784
	if (ctx.cr6.eq) goto loc_88130784;
	// lwz r10,456(r31)
	ctx.current_instruction = 0x8813077C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_88130784:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88130790;
	sub_88052D90(ctx, base);
loc_88130790:
	// stw r24,4(r28)
	ctx.current_instruction = 0x88130790;
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r24.u32);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,424(r30)
	ctx.current_instruction = 0x881307A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 424);
	// lwz r8,16(r9)
	ctx.current_instruction = 0x881307A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stb r27,0(r8)
	ctx.current_instruction = 0x881307AC;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r27.u8);
	// lhz r7,580(r31)
	ctx.current_instruction = 0x881307B0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881306a8
	if (ctx.cr6.lt) goto loc_881306A8;
loc_881307C0:
	// li r11,9
	ctx.r11.s64 = 9;
	// sth r24,150(r26)
	ctx.current_instruction = 0x881307C4;
	REX_STORE_U16(ctx.r26.u32 + 150, ctx.r24.u16);
	// sth r24,152(r26)
	ctx.current_instruction = 0x881307C8;
	REX_STORE_U16(ctx.r26.u32 + 152, ctx.r24.u16);
	// stw r11,40(r26)
	ctx.current_instruction = 0x881307CC;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_881307D0:
	// lwz r11,280(r31)
	ctx.current_instruction = 0x881307D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88130adc
	if (!ctx.cr6.eq) goto loc_88130ADC;
	// lhz r11,150(r26)
	ctx.current_instruction = 0x881307DC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 150);
	// lhz r10,580(r31)
	ctx.current_instruction = 0x881307E0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88130b04
	if (!ctx.cr6.lt) goto loc_88130B04;
loc_881307F4:
	// lhz r11,150(r26)
	ctx.current_instruction = 0x881307F4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 150);
	// lwz r9,584(r31)
	ctx.current_instruction = 0x881307F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r31)
	ctx.current_instruction = 0x88130800;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r7,60(r31)
	ctx.current_instruction = 0x88130804;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// lhzx r5,r6,r9
	ctx.current_instruction = 0x88130810;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r11,r4,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x88130848
	if (!ctx.cr6.gt) goto loc_88130848;
	// lwz r10,8(r26)
	ctx.current_instruction = 0x88130824;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88130830;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88130848
	if (!ctx.cr6.eq) goto loc_88130848;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88137e60
	ctx.lr = 0x88130844;
	sub_88137E60(ctx, base);
loc_88130844:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_88130848:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,424(r27)
	ctx.current_instruction = 0x88130850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 424);
	// lwz r10,40(r27)
	ctx.current_instruction = 0x88130854;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,16(r11)
	ctx.current_instruction = 0x8813085C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r22,0(r9)
	ctx.current_instruction = 0x88130860;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// bne cr6,0x88130898
	if (!ctx.cr6.eq) goto loc_88130898;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x88130868;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x88130898
	if (ctx.cr6.gt) goto loc_88130898;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x88130a84
	if (!ctx.cr6.eq) goto loc_88130A84;
	// lwz r11,304(r31)
	ctx.current_instruction = 0x8813087C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r27)
	ctx.current_instruction = 0x88130884;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88130890;
	sub_88052D90(ctx, base);
loc_88130890:
	// stw r24,64(r27)
	ctx.current_instruction = 0x88130890;
	REX_STORE_U32(ctx.r27.u32 + 64, ctx.r24.u32);
	// b 0x88130a84
	goto loc_88130A84;
loc_88130898:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x88130898;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// lwz r30,4(r27)
	ctx.current_instruction = 0x881308A0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x881308b0
	if (!ctx.cr6.gt) goto loc_881308B0;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_881308B0:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x88130a34
	if (!ctx.cr6.eq) goto loc_88130A34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x881308ec
	if (!ctx.cr6.gt) goto loc_881308EC;
	// lwz r10,444(r27)
	ctx.current_instruction = 0x881308C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 444);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x881308ec
	if (!ctx.cr6.eq) goto loc_881308EC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,304(r31)
	ctx.current_instruction = 0x881308D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881385a8
	ctx.lr = 0x881308DC;
	sub_881385A8(ctx, base);
loc_881308DC:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// b 0x88130a0c
	goto loc_88130A0C;
loc_881308EC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88130928
	if (!ctx.cr6.eq) goto loc_88130928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// bl 0x8812c528
	ctx.lr = 0x88130904;
	sub_8812C528(ctx, base);
loc_88130904:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88130910;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// stw r10,0(r30)
	ctx.current_instruction = 0x88130918;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lhz r11,152(r26)
	ctx.current_instruction = 0x8813091C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 152);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,152(r26)
	ctx.current_instruction = 0x88130924;
	REX_STORE_U16(ctx.r26.u32 + 152, ctx.r8.u16);
loc_88130928:
	// lhz r11,152(r26)
	ctx.current_instruction = 0x88130928;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 152);
	// lwz r10,304(r31)
	ctx.current_instruction = 0x8813092C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88130a0c
	if (!ctx.cr6.lt) goto loc_88130A0C;
	// addi r29,r26,224
	ctx.r29.s64 = ctx.r26.s64 + 224;
loc_88130940:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88139a00
	ctx.lr = 0x88130958;
	sub_88139A00(ctx, base);
loc_88130958:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x88130968;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8812c818
	ctx.lr = 0x88130970;
	sub_8812C818(ctx, base);
loc_88130970:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8813097C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,60(r31)
	ctx.current_instruction = 0x88130980;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r11,-60
	ctx.r9.s64 = ctx.r11.s64 + -60;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r9,84(r1)
	ctx.current_instruction = 0x8813098C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ble cr6,0x881309b4
	if (!ctx.cr6.gt) goto loc_881309B4;
	// lhz r11,152(r26)
	ctx.current_instruction = 0x88130994;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 152);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881309b4
	if (!ctx.cr6.eq) goto loc_881309B4;
	// lwz r11,436(r27)
	ctx.current_instruction = 0x881309A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 436);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r11,r21,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r21.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r21.s32 / ctx.r11.s32 : 0);
	// b 0x881309d8
	goto loc_881309D8;
loc_881309B4:
	// lhz r11,152(r26)
	ctx.current_instruction = 0x881309B4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 152);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881309cc
	if (!ctx.cr6.eq) goto loc_881309CC;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// b 0x881309d8
	goto loc_881309D8;
loc_881309CC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-4(r11)
	ctx.current_instruction = 0x881309D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_881309D8:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r9,r10,r30
	ctx.current_instruction = 0x881309E0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// lhz r8,152(r26)
	ctx.current_instruction = 0x881309E4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r26.u32 + 152);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,152(r26)
	ctx.current_instruction = 0x881309F4;
	REX_STORE_U16(ctx.r26.u32 + 152, ctx.r6.u16);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// lwz r5,304(r31)
	ctx.current_instruction = 0x88130A00;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88130940
	if (ctx.cr6.lt) goto loc_88130940;
loc_88130A0C:
	// lhz r11,114(r27)
	ctx.current_instruction = 0x88130A0C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 114);
	// lwz r10,424(r27)
	ctx.current_instruction = 0x88130A10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 424);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,8(r10)
	ctx.current_instruction = 0x88130A1C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhzx r6,r8,r7
	ctx.current_instruction = 0x88130A20;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,224(r31)
	ctx.current_instruction = 0x88130A28;
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r5.u32);
	// sth r24,152(r26)
	ctx.current_instruction = 0x88130A2C;
	REX_STORE_U16(ctx.r26.u32 + 152, ctx.r24.u16);
	// b 0x88130a3c
	goto loc_88130A3C;
loc_88130A34:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88130a84
	if (ctx.cr6.eq) goto loc_88130A84;
loc_88130A3C:
	// lwz r11,304(r31)
	ctx.current_instruction = 0x88130A3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88130A40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x88130a7c
	if (!ctx.cr6.gt) goto loc_88130A7C;
	// lwz r8,304(r31)
	ctx.current_instruction = 0x88130A4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_88130A58:
	// lwzx r10,r10,r30
	ctx.current_instruction = 0x88130A58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x88130a68
	if (!ctx.cr6.gt) goto loc_88130A68;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_88130A68:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x88130a58
	if (ctx.cr6.lt) goto loc_88130A58;
loc_88130A7C:
	// stw r9,64(r27)
	ctx.current_instruction = 0x88130A7C;
	REX_STORE_U32(ctx.r27.u32 + 64, ctx.r9.u32);
	// stw r23,444(r27)
	ctx.current_instruction = 0x88130A80;
	REX_STORE_U32(ctx.r27.u32 + 444, ctx.r23.u32);
loc_88130A84:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x88130A84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x88130aac
	if (!ctx.cr6.gt) goto loc_88130AAC;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x88130aac
	if (!ctx.cr6.eq) goto loc_88130AAC;
	// lhz r11,118(r27)
	ctx.current_instruction = 0x88130A98;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 118);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,428(r27)
	ctx.current_instruction = 0x88130AA0;
	REX_STORE_U32(ctx.r27.u32 + 428, ctx.r10.u32);
	// lwz r9,304(r31)
	ctx.current_instruction = 0x88130AA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// stw r9,432(r27)
	ctx.current_instruction = 0x88130AA8;
	REX_STORE_U32(ctx.r27.u32 + 432, ctx.r9.u32);
loc_88130AAC:
	// lhz r11,150(r26)
	ctx.current_instruction = 0x88130AAC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,150(r26)
	ctx.current_instruction = 0x88130ABC;
	REX_STORE_U16(ctx.r26.u32 + 150, ctx.r9.u16);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r7,580(r31)
	ctx.current_instruction = 0x88130AC8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x881307f4
	if (ctx.cr6.lt) goto loc_881307F4;
	// b 0x88130b04
	goto loc_88130B04;
loc_88130ADC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88136528
	ctx.lr = 0x88130AE4;
	sub_88136528(ctx, base);
loc_88130AE4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
	// lwz r11,40(r31)
	ctx.current_instruction = 0x88130AF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88130b04
	if (!ctx.cr6.eq) goto loc_88130B04;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88136aa0
	ctx.lr = 0x88130B04;
	sub_88136AA0(ctx, base);
loc_88130B04:
	// li r11,10
	ctx.r11.s64 = 10;
loc_88130B08:
	// stw r11,40(r26)
	ctx.current_instruction = 0x88130B08;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_88130B0C:
	// lwz r11,40(r26)
	ctx.current_instruction = 0x88130B0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 40);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8812f34c
	if (!ctx.cr6.eq) goto loc_8812F34C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88130B24:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88130B34:
	// lwz r11,280(r31)
	ctx.current_instruction = 0x88130B34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88130be8
	if (!ctx.cr6.eq) goto loc_88130BE8;
	// b 0x88130bdc
	goto loc_88130BDC;
loc_88130B44:
	// lwz r11,280(r31)
	ctx.current_instruction = 0x88130B44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88130bf0
	if (!ctx.cr6.eq) goto loc_88130BF0;
	// sth r24,150(r26)
	ctx.current_instruction = 0x88130B50;
	REX_STORE_U16(ctx.r26.u32 + 150, ctx.r24.u16);
	// lhz r11,580(r31)
	ctx.current_instruction = 0x88130B54;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88130bd8
	if (!ctx.cr6.gt) goto loc_88130BD8;
loc_88130B64:
	// lhz r11,150(r26)
	ctx.current_instruction = 0x88130B64;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 150);
	// lwz r9,584(r31)
	ctx.current_instruction = 0x88130B68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r31)
	ctx.current_instruction = 0x88130B70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.current_instruction = 0x88130B78;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r4,114(r11)
	ctx.current_instruction = 0x88130B88;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// lwz r11,424(r11)
	ctx.current_instruction = 0x88130B8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88130B98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ble cr6,0x88130ba8
	if (!ctx.cr6.gt) goto loc_88130BA8;
	// stb r24,0(r10)
	ctx.current_instruction = 0x88130BA0;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r24.u8);
	// b 0x88130bac
	goto loc_88130BAC;
loc_88130BA8:
	// stb r23,0(r10)
	ctx.current_instruction = 0x88130BA8;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r23.u8);
loc_88130BAC:
	// lhz r11,150(r26)
	ctx.current_instruction = 0x88130BAC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,150(r26)
	ctx.current_instruction = 0x88130BBC;
	REX_STORE_U16(ctx.r26.u32 + 150, ctx.r9.u16);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r7,580(r31)
	ctx.current_instruction = 0x88130BC8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88130b64
	if (ctx.cr6.lt) goto loc_88130B64;
loc_88130BD8:
	// sth r24,150(r26)
	ctx.current_instruction = 0x88130BD8;
	REX_STORE_U16(ctx.r26.u32 + 150, ctx.r24.u16);
loc_88130BDC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88136528
	ctx.lr = 0x88130BE4;
	sub_88136528(ctx, base);
loc_88130BE4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_88130BE8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x88130c0c
	if (ctx.cr6.lt) goto loc_88130C0C;
loc_88130BF0:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,40(r26)
	ctx.current_instruction = 0x88130BF8;
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88130C04:
	// lis r25,-32764
	ctx.r25.s64 = -2147221504;
	// ori r25,r25,2
	ctx.r25.u64 = ctx.r25.u64 | 2;
loc_88130C0C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88173520) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88173520);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88173520;
	ctx.current_instruction = 0x88173520;
	uint32_t ea{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x88173520;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x88173524;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r7,224
	ctx.r7.s64 = 224;
	// li r8,176
	ctx.r8.s64 = 176;
	// li r9,160
	ctx.r9.s64 = 160;
	// li r4,208
	ctx.r4.s64 = 208;
	// lvx128 v63,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r6
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v61,v63,11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v60,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v59,v62,11
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v55,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v60,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v54,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v55,11
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v54,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v56,v58,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r10,144
	ctx.r10.s64 = 144;
	// lvx128 v52,r30,r5
	ea = (ctx.r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,128
	ctx.r11.s64 = 128;
	// lvx128 v50,r30,r6
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v52,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// lvx128 v48,r30,r7
	ea = (ctx.r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v47,v50,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// lvx128 v43,r30,r8
	ea = (ctx.r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v45,v48,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// lvx128 v42,r30,r9
	ea = (ctx.r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v41,v43,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// lvx128 v37,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v32,v42,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// lvx128 v46,r30,r4
	ea = (ctx.r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v40,v61,v2
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v39,v59,v2
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v35,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v44,v46,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// lvx128 v33,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v38,v57,v2
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v2.f32)));
	// li r5,80
	ctx.r5.s64 = 80;
	// vmulfp128 v34,v53,v2
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v2.f32)));
	// li r6,64
	ctx.r6.s64 = 64;
	// vmulfp128 v36,v56,v2
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v2.f32)));
	// li r7,112
	ctx.r7.s64 = 112;
	// vmulfp128 v63,v51,v2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v62,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v61,v37,11
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r8,96
	ctx.r8.s64 = 96;
	// vcsxwfp128 v59,v35,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// lvx128 v60,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v33,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r31,r6
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v62,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// li r9,48
	ctx.r9.s64 = 48;
	// vcsxwfp128 v54,v60,11
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v53,v40,v49
	simde_mm_store_ps(ctx.v53.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v49.f32)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vmsum4fp128 v52,v39,v47
	simde_mm_store_ps(ctx.v52.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v47.f32)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vmsum4fp128 v51,v38,v45
	simde_mm_store_ps(ctx.v51.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vmsum4fp128 v49,v34,v41
	simde_mm_store_ps(ctx.v49.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v41.f32)));
	// vmsum4fp128 v50,v36,v44
	simde_mm_store_ps(ctx.v50.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vmsum4fp128 v48,v63,v32
	simde_mm_store_ps(ctx.v48.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v32.f32)));
	// vmulfp128 v47,v61,v2
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v46,v57,v2
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v45,v53,v1
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v44,v52,v1
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmsum4fp128 v41,v47,v59
	simde_mm_store_ps(ctx.v41.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vmulfp128 v43,v51,v1
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v40,v49,v1
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v42,v50,v1
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v39,v48,v1
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcfpuxws128 v38,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v45.f32)));
	// vcfpuxws128 v37,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v44.f32)));
	// vcfpuxws128 v36,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v43.f32)));
	// vcfpuxws128 v34,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v40.f32)));
	// vcfpuxws128 v35,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v42.f32)));
	// vcfpuxws128 v33,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v39.f32)));
	// vmulfp128 v32,v41,v1
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v63,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v62,v58,11
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v60,v63,11
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v61,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v58,11
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v57,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v56,v56,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v53,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v57,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v49,v53,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v50,r30,r5
	ea = (ctx.r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v59,v61,11
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v48,r30,r6
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v38,v35,4,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 228), 4));
	// lvx128 v47,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v42,v54,v2
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v41,r30,r7
	ea = (ctx.r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v36,v37,1,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 228), 1));
	// lvx128 v39,r30,r8
	ea = (ctx.r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v45,v50,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// lvx128 v35,r30,r9
	ea = (ctx.r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v43,v48,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vmulfp128 v63,v62,v2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v62,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v60,v2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmsum4fp128 v60,v46,v55
	simde_mm_store_ps(ctx.v60.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vmulfp128 v55,v52,v2
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vrlimi128 v33,v34,1,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 1));
	// vmulfp128 v57,v56,v2
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vrlimi128 v38,v36,3,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 228), 3));
	// vcsxwfp128 v54,v35,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vmulfp128 v53,v51,v2
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vcsxwfp128 v37,v44,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vcsxwfp128 v58,v41,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vcsxwfp128 v56,v39,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vcsxwfp128 v52,v62,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vcsxwfp128 v40,v47,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v51,v42,v45
	simde_mm_store_ps(ctx.v51.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vmulfp128 v59,v59,v2
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v50,v49,v2
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmsum4fp128 v48,v63,v43
	simde_mm_store_ps(ctx.v48.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vcfpuxws128 v49,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v32.f32)));
	// vmsum4fp128 v42,v53,v54
	simde_mm_store_ps(ctx.v42.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v44,v60,v1
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmsum4fp128 v45,v57,v58
	simde_mm_store_ps(ctx.v45.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vmsum4fp128 v43,v55,v56
	simde_mm_store_ps(ctx.v43.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vmsum4fp128 v47,v61,v40
	simde_mm_store_ps(ctx.v47.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vmsum4fp128 v46,v59,v37
	simde_mm_store_ps(ctx.v46.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v37.f32)));
	// vmsum4fp128 v41,v50,v52
	simde_mm_store_ps(ctx.v41.f32, rex::ppc::simde_mm_vmsum4fp128(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmulfp128 v40,v51,v1
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v39,v48,v1
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcfpuxws128 v35,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v63,v42,v1
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v34,v45,v1
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v32,v43,v1
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v37,v47,v1
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v36,v46,v1
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v61,v41,v1
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcfpuxws128 v62,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v40.f32)));
	// vrlimi128 v35,v49,4,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 228), 4));
	// vcfpuxws128 v60,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v39.f32)));
	// vcfpuxws128 v55,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v63.f32)));
	// vrlimi128 v35,v33,3,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 228), 3));
	// vcfpuxws128 v57,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v34.f32)));
	// vcfpuxws128 v56,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v32.f32)));
	// vpkswus128 v53,v35,v38
	simde_mm_store_si128((simde__m128i*)ctx.v53.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v35.s32)));
	// vcfpuxws128 v59,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v37.f32)));
	// vcfpuxws128 v58,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v36.f32)));
	// vcfpuxws128 v54,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v61.f32)));
	// vrlimi128 v60,v62,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// vrlimi128 v56,v57,1,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 1));
	// vrlimi128 v58,v59,4,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 4));
	// vrlimi128 v54,v55,1,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 228), 1));
	// vrlimi128 v60,v56,3,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 3));
	// vrlimi128 v58,v54,3,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 228), 3));
	// vpkswus128 v52,v58,v60
	simde_mm_store_si128((simde__m128i*)ctx.v52.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v58.s32)));
	// vpkuhus128 v51,v52,v53
	ctx.v51.u8[15] = ctx.v52.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[7];
	ctx.v51.u8[7] = ctx.v53.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[7];
	ctx.v51.u8[14] = ctx.v52.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[6];
	ctx.v51.u8[6] = ctx.v53.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[6];
	ctx.v51.u8[13] = ctx.v52.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[5];
	ctx.v51.u8[5] = ctx.v53.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[5];
	ctx.v51.u8[12] = ctx.v52.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[4];
	ctx.v51.u8[4] = ctx.v53.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[4];
	ctx.v51.u8[11] = ctx.v52.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[3];
	ctx.v51.u8[3] = ctx.v53.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[3];
	ctx.v51.u8[10] = ctx.v52.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[2];
	ctx.v51.u8[2] = ctx.v53.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[2];
	ctx.v51.u8[9] = ctx.v52.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[1];
	ctx.v51.u8[1] = ctx.v53.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[1];
	ctx.v51.u8[8] = ctx.v52.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[0];
	ctx.v51.u8[0] = ctx.v53.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[0];
	// stvlx128 v51,r0,r3
	ctx.current_instruction = 0x881737A8;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvrx128 v51,r3,r11
	ctx.current_instruction = 0x881737AC;
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881737B0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881737B4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8817D628) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8817D628);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817D628;
	ctx.current_instruction = 0x8817D628;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8817D7B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8817D7B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817D7B8;
	ctx.current_instruction = 0x8817D7B8;
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8817D7C8:
	// stw r10,4(r11)
	ctx.current_instruction = 0x8817D7C8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	ctx.current_instruction = 0x8817D7CC;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	ctx.current_instruction = 0x8817D7D0;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ctx.current_instruction = 0x8817D7D4;
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8817d7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817D7C8;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8817D7E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8817D7E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817D7E0;
	ctx.current_instruction = 0x8817D7E0;
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8817D7F0:
	// stw r10,12(r11)
	ctx.current_instruction = 0x8817D7F0;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ctx.current_instruction = 0x8817D7F4;
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8817d7f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817D7F0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8817D850) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817D850;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817D850) {
			switch (rex_dispatch_address) {
				case 0x8817D858:
				case 0x8817D8D0:
				case 0x8817D960:
				case 0x8817D9A8:
				case 0x8817DA28:
				case 0x8817DA70:
				case 0x8817DAA0:
				case 0x8817DB0C:
				case 0x8817DB54:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817D850;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8817D858: goto loc_8817D858;
		case 0x8817D8D0: goto loc_8817D8D0;
		case 0x8817D960: goto loc_8817D960;
		case 0x8817D9A8: goto loc_8817D9A8;
		case 0x8817DA28: goto loc_8817DA28;
		case 0x8817DA70: goto loc_8817DA70;
		case 0x8817DAA0: goto loc_8817DAA0;
		case 0x8817DB0C: goto loc_8817DB0C;
		case 0x8817DB54: goto loc_8817DB54;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8817D858;
	__savegprlr_28(ctx, base);
loc_8817D858:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8817D858;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1244(r3)
	ctx.current_instruction = 0x8817D85C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1244);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8817d8fc
	if (ctx.cr6.lt) goto loc_8817D8FC;
	// lwz r11,1308(r3)
	ctx.current_instruction = 0x8817D86C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8817d880
	if (ctx.cr6.eq) goto loc_8817D880;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8817d88c
	if (!ctx.cr6.eq) goto loc_8817D88C;
loc_8817D880:
	// lwz r11,1168(r28)
	ctx.current_instruction = 0x8817D880;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8817d898
	if (!ctx.cr6.eq) goto loc_8817D898;
loc_8817D88C:
	// lbz r11,27(r28)
	ctx.current_instruction = 0x8817D88C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 27);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8817d8fc
	if (!ctx.cr6.eq) goto loc_8817D8FC;
loc_8817D898:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8817D8A0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817d8e8
	if (!ctx.cr6.eq) goto loc_8817D8E8;
	// lwz r3,0(r28)
	ctx.current_instruction = 0x8817D8A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// ld r10,0(r3)
	ctx.current_instruction = 0x8817D8AC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8817D8B0;
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
	ctx.current_instruction = 0x8817D8C0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8817D8C4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8817d8d0
	if (!ctx.cr0.lt) goto loc_8817D8D0;
	// bl 0x88156678
	ctx.lr = 0x8817D8D0;
	sub_88156678(ctx, base);
loc_8817D8D0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x8817d8a0
	if (ctx.cr6.lt) goto loc_8817D8A0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8817d8f0
	if (ctx.cr6.eq) goto loc_8817D8F0;
loc_8817D8E8:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// b 0x8817daa4
	goto loc_8817DAA4;
loc_8817D8F0:
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,1247(r28)
	ctx.current_instruction = 0x8817D8F4;
	REX_STORE_U8(ctx.r28.u32 + 1247, ctx.r11.u8);
	// b 0x8817daa8
	goto loc_8817DAA8;
loc_8817D8FC:
	// lwz r31,0(r28)
	ctx.current_instruction = 0x8817D8FC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817D908;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8817d970
	if (!ctx.cr6.lt) goto loc_8817D970;
loc_8817D918:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817d970
	if (ctx.cr6.eq) goto loc_8817D970;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8817D924;
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
	ctx.current_instruction = 0x8817D948;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8817D950;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8817d960
	if (!ctx.cr0.lt) goto loc_8817D960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8817D960;
	sub_88156678(ctx, base);
loc_8817D960:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817D960;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8817d918
	if (ctx.cr6.gt) goto loc_8817D918;
loc_8817D970:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8817D974;
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
	ctx.current_instruction = 0x8817D98C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8817D998;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8817d9a8
	if (!ctx.cr0.lt) goto loc_8817D9A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8817D9A8;
	sub_88156678(ctx, base);
loc_8817D9A8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,1247(r28)
	ctx.current_instruction = 0x8817D9B0;
	REX_STORE_U8(ctx.r28.u32 + 1247, ctx.r11.u8);
	// bne cr6,0x8817daa8
	if (!ctx.cr6.eq) goto loc_8817DAA8;
	// lwz r11,1168(r28)
	ctx.current_instruction = 0x8817D9B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1168);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8817da78
	if (ctx.cr6.lt) goto loc_8817DA78;
	// lwz r31,0(r28)
	ctx.current_instruction = 0x8817D9C4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817D9D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8817da38
	if (!ctx.cr6.lt) goto loc_8817DA38;
loc_8817D9E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817da38
	if (ctx.cr6.eq) goto loc_8817DA38;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8817D9EC;
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
	ctx.current_instruction = 0x8817DA10;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8817DA18;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8817da28
	if (!ctx.cr0.lt) goto loc_8817DA28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8817DA28;
	sub_88156678(ctx, base);
loc_8817DA28:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817DA28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8817d9e0
	if (ctx.cr6.gt) goto loc_8817D9E0;
loc_8817DA38:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8817DA3C;
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
	ctx.current_instruction = 0x8817DA54;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8817DA60;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8817da70
	if (!ctx.cr0.lt) goto loc_8817DA70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8817DA70;
	sub_88156678(ctx, base);
loc_8817DA70:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// b 0x8817daa4
	goto loc_8817DAA4;
loc_8817DA78:
	// lwz r3,0(r28)
	ctx.current_instruction = 0x8817DA78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// ld r10,0(r3)
	ctx.current_instruction = 0x8817DA7C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8817DA80;
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
	ctx.current_instruction = 0x8817DA90;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8817DA94;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8817daa0
	if (!ctx.cr0.lt) goto loc_8817DAA0;
	// bl 0x88156678
	ctx.lr = 0x8817DAA0;
	sub_88156678(ctx, base);
loc_8817DAA0:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_8817DAA4:
	// stb r11,1247(r28)
	ctx.current_instruction = 0x8817DAA4;
	REX_STORE_U8(ctx.r28.u32 + 1247, ctx.r11.u8);
loc_8817DAA8:
	// lwz r31,0(r28)
	ctx.current_instruction = 0x8817DAA8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817DAB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8817db1c
	if (!ctx.cr6.lt) goto loc_8817DB1C;
loc_8817DAC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817db1c
	if (ctx.cr6.eq) goto loc_8817DB1C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8817DAD0;
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
	ctx.current_instruction = 0x8817DAF4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8817DAFC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8817db0c
	if (!ctx.cr0.lt) goto loc_8817DB0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8817DB0C;
	sub_88156678(ctx, base);
loc_8817DB0C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817DB0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8817dac4
	if (ctx.cr6.gt) goto loc_8817DAC4;
loc_8817DB1C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8817DB20;
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
	ctx.current_instruction = 0x8817DB38;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8817DB44;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8817db54
	if (!ctx.cr0.lt) goto loc_8817DB54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8817DB54;
	sub_88156678(ctx, base);
loc_8817DB54:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// stb r11,1248(r28)
	ctx.current_instruction = 0x8817DB58;
	REX_STORE_U8(ctx.r28.u32 + 1248, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881856C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881856C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881856C8) {
			switch (rex_dispatch_address) {
				case 0x881856D0:
				case 0x88185784:
				case 0x8818586C:
				case 0x88185928:
				case 0x88185968:
				case 0x881859D0:
				case 0x88185A0C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881856C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881856D0: goto loc_881856D0;
		case 0x88185784: goto loc_88185784;
		case 0x8818586C: goto loc_8818586C;
		case 0x88185928: goto loc_88185928;
		case 0x88185968: goto loc_88185968;
		case 0x881859D0: goto loc_881859D0;
		case 0x88185A0C: goto loc_88185A0C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881856D0;
	__savegprlr_19(ctx, base);
loc_881856D0:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x881856D0;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,140(r3)
	ctx.current_instruction = 0x881856D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// lwz r9,136(r3)
	ctx.current_instruction = 0x881856DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r11,r11,21846
	ctx.r11.u64 = ctx.r11.u64 | 21846;
	// rlwinm r22,r10,31,1,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mulhw r10,r22,r11
	ctx.r10.s64 = (int64_t(ctx.r22.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r30,r8,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf. r6,r7,r22
	ctx.r6.u64 = ctx.r22.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x88185810
	if (!ctx.cr0.eq) goto loc_88185810;
	// mulhw r10,r30,r11
	ctx.r10.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf. r9,r10,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x88185810
	if (ctx.cr0.eq) goto loc_88185810;
	// clrlwi r21,r30,31
	ctx.r21.u64 = ctx.r30.u32 & 0x1;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881858f0
	if (!ctx.cr6.gt) goto loc_881858F0;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// add r24,r30,r11
	ctx.r24.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r26,r11,24640
	ctx.r26.s64 = ctx.r11.s64 + 24640;
loc_88185760:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x881857fc
	if (!ctx.cr6.lt) goto loc_881857FC;
loc_8818576C:
	// addi r5,r26,64
	ctx.r5.s64 = ctx.r26.s64 + 64;
	// lwz r3,84(r23)
	ctx.current_instruction = 0x88185770;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bl 0x8815fdc8
	ctx.lr = 0x88185784;
	sub_8815FDC8(ctx, base);
loc_88185784:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88185a58
	if (!ctx.cr6.eq) goto loc_88185A58;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8818578C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r6,r31,r29
	ctx.r6.u64 = ctx.r31.u64 + ctx.r29.u64;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stbx r8,r31,r29
	ctx.current_instruction = 0x881857A4;
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stb r7,1(r6)
	ctx.current_instruction = 0x881857B4;
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r7.u8);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stbx r5,r10,r31
	ctx.current_instruction = 0x881857C4;
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r5.u8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stb r3,1(r4)
	ctx.current_instruction = 0x881857DC;
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r3.u8);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// stbx r7,r9,r31
	ctx.current_instruction = 0x881857E4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u8);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881857EC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// stb r6,1(r8)
	ctx.current_instruction = 0x881857F4;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r6.u8);
	// blt cr6,0x8818576c
	if (ctx.cr6.lt) goto loc_8818576C;
loc_881857FC:
	// addi r25,r25,3
	ctx.r25.s64 = ctx.r25.s64 + 3;
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x88185760
	if (ctx.cr6.lt) goto loc_88185760;
	// b 0x881858f0
	goto loc_881858F0;
loc_88185810:
	// mulhw r11,r30,r11
	ctx.r11.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r20,r22,31
	ctx.r20.u64 = ctx.r22.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r20,r22
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r22.s32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r21,r11,r30
	ctx.r21.u64 = ctx.r30.u64 - ctx.r11.u64;
	// bge cr6,0x881858f0
	if (!ctx.cr6.lt) goto loc_881858F0;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// mullw r27,r30,r20
	ctx.r27.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r20.s32);
	// rlwinm r24,r30,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,24640
	ctx.r26.s64 = ctx.r11.s64 + 24640;
loc_88185848:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x881858e0
	if (!ctx.cr6.lt) goto loc_881858E0;
loc_88185854:
	// addi r5,r26,64
	ctx.r5.s64 = ctx.r26.s64 + 64;
	// lwz r3,84(r23)
	ctx.current_instruction = 0x88185858;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bl 0x8815fdc8
	ctx.lr = 0x8818586C;
	sub_8815FDC8(ctx, base);
loc_8818586C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88185a58
	if (!ctx.cr6.eq) goto loc_88185A58;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88185874;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r31,r29
	ctx.r9.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r8,r31,r29
	ctx.r8.u64 = ctx.r31.u64 + ctx.r29.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stbx r7,r31,r29
	ctx.current_instruction = 0x88185890;
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r7.u8);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stb r6,1(r9)
	ctx.current_instruction = 0x88185898;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r6.u8);
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stb r5,2(r8)
	ctx.current_instruction = 0x881858A4;
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r5.u8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stbx r3,r11,r31
	ctx.current_instruction = 0x881858B8;
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u8);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881858C8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// stb r8,1(r4)
	ctx.current_instruction = 0x881858D4;
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// stb r7,2(r9)
	ctx.current_instruction = 0x881858D8;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// blt cr6,0x88185854
	if (ctx.cr6.lt) goto loc_88185854;
loc_881858E0:
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x88185848
	if (ctx.cr6.lt) goto loc_88185848;
loc_881858F0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x881859a0
	if (!ctx.cr6.gt) goto loc_881859A0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_88185900:
	// lwz r3,84(r23)
	ctx.current_instruction = 0x88185900;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88185904;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88185908;
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
	ctx.current_instruction = 0x88185918;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8818591C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88185928
	if (!ctx.cr0.lt) goto loc_88185928;
	// bl 0x88156678
	ctx.lr = 0x88185928;
	sub_88156678(ctx, base);
loc_88185928:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8818597c
	if (ctx.cr6.eq) goto loc_8818597C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88185994
	if (!ctx.cr6.gt) goto loc_88185994;
	// subf r27,r30,r26
	ctx.r27.u64 = ctx.r26.u64 - ctx.r30.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_88185940:
	// lwz r3,84(r23)
	ctx.current_instruction = 0x88185940;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88185944;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88185948;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x88185958;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8818595C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88185968
	if (!ctx.cr0.lt) goto loc_88185968;
	// bl 0x88156678
	ctx.lr = 0x88185968;
	sub_88156678(ctx, base);
loc_88185968:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stbux r11,r27,r30
	ctx.current_instruction = 0x88185970;
	ea = ctx.r27.u32 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r27.u32 = ea;
	// bne 0x88185940
	if (!ctx.cr0.eq) goto loc_88185940;
	// b 0x88185994
	goto loc_88185994;
loc_8818597C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88185994
	if (!ctx.cr6.gt) goto loc_88185994;
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
loc_8818598C:
	// stbux r19,r11,r30
	ctx.current_instruction = 0x8818598C;
	ea = ctx.r11.u32 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r19.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8818598c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818598C;
loc_88185994:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bne 0x88185900
	if (!ctx.cr0.eq) goto loc_88185900;
loc_881859A0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88185a54
	if (ctx.cr6.eq) goto loc_88185A54;
	// lwz r3,84(r23)
	ctx.current_instruction = 0x881859A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881859AC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881859B0;
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
	ctx.current_instruction = 0x881859C0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881859C4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881859d0
	if (!ctx.cr0.lt) goto loc_881859D0;
	// bl 0x88156678
	ctx.lr = 0x881859D0;
	sub_88156678(ctx, base);
loc_881859D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88185a2c
	if (ctx.cr6.eq) goto loc_88185A2C;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88185a54
	if (!ctx.cr6.lt) goto loc_88185A54;
loc_881859E4:
	// lwz r3,84(r23)
	ctx.current_instruction = 0x881859E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881859E8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881859EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x881859FC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88185A00;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88185a0c
	if (!ctx.cr0.lt) goto loc_88185A0C;
	// bl 0x88156678
	ctx.lr = 0x88185A0C;
	sub_88156678(ctx, base);
loc_88185A0C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stbx r11,r31,r29
	ctx.current_instruction = 0x88185A10;
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x881859e4
	if (ctx.cr6.lt) goto loc_881859E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_88185A2C:
	// cmpw cr6,r21,r30
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88185a54
	if (!ctx.cr6.lt) goto loc_88185A54;
	// add r10,r21,r29
	ctx.r10.u64 = ctx.r21.u64 + ctx.r29.u64;
	// subf. r11,r21,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// beq 0x88185a54
	if (ctx.cr0.eq) goto loc_88185A54;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88185A4C:
	// stbu r9,1(r10)
	ctx.current_instruction = 0x88185A4C;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x88185a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88185A4C;
loc_88185A54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88185A58:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88193C80) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88193C80);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88193C80;
	ctx.current_instruction = 0x88193C80;
	uint32_t ea{};
	// std r31,-8(r1)
	ctx.current_instruction = 0x88193C80;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r11,0(r3)
	ctx.current_instruction = 0x88193C84;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// li r8,16
	ctx.r8.s64 = 16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r5,48
	ctx.r5.s64 = 48;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// li r3,64
	ctx.r3.s64 = 64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,80
	ctx.r6.s64 = 80;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,96
	ctx.r31.s64 = 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,-32(r1)
	ctx.current_instruction = 0x88193CCC;
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r31
	ea = (ctx.r4.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88193CF8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881964C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881964C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881964C0) {
			switch (rex_dispatch_address) {
				case 0x881964C8:
				case 0x881965E8:
				case 0x88196668:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881964C0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881964C8: goto loc_881964C8;
		case 0x881965E8: goto loc_881965E8;
		case 0x88196668: goto loc_88196668;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881964C8;
	__savegprlr_18(ctx, base);
loc_881964C8:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x881964C8;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r22,340(r1)
	ctx.current_instruction = 0x881964D0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r23,332(r1)
	ctx.current_instruction = 0x881964D8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r11,24540(r11)
	ctx.current_instruction = 0x881964E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24540);
	// clrlwi r4,r6,28
	ctx.r4.u64 = ctx.r6.u32 & 0xF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r11,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// add r27,r6,r10
	ctx.r27.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// srawi r24,r27,3
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r24.s64 = ctx.r27.s32 >> 3;
	// subfic r3,r22,0
	ctx.xer.ca = ctx.r22.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - ctx.r22.u64;
	// subf r10,r11,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r11.u64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// rlwinm r11,r11,0,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r25,r11,20
	ctx.r25.s64 = ctx.r11.s64 + 20;
	// bge cr6,0x881965c4
	if (!ctx.cr6.lt) goto loc_881965C4;
	// subf r6,r5,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r5.u64;
	// addi r3,r10,-16
	ctx.r3.s64 = ctx.r10.s64 + -16;
	// subf r30,r29,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r29.u64;
	// li r5,16
	ctx.r5.s64 = 16;
loc_88196540:
	// lbz r28,0(r7)
	ctx.current_instruction = 0x88196540;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r20,r1,96
	ctx.r20.s64 = ctx.r1.s64 + 96;
	// addi r18,r1,96
	ctx.r18.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r30,r31
	ctx.current_instruction = 0x8819654C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r19,r1,80
	ctx.r19.s64 = ctx.r1.s64 + 80;
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stw r28,96(r1)
	ctx.current_instruction = 0x8819655C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lvx128 v13,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,80(r1)
	ctx.current_instruction = 0x88196564;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xC))));
	// vspltb v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_set1_epi8(char(0xC))));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stvx128 v0,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r18
	ea = (ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x881965a4
	if (!ctx.cr6.gt) goto loc_881965A4;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_88196594:
	// lbz r28,0(r7)
	ctx.current_instruction = 0x88196594;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// stbx r28,r9,r11
	ctx.current_instruction = 0x88196598;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88196594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88196594;
loc_881965A4:
	// stvx128 v0,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r7,r23
	ctx.r7.u64 = ctx.r7.u64 + ctx.r23.u64;
	// stvx128 v0,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// stvx128 v13,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x88196540
	if (!ctx.cr0.eq) goto loc_88196540;
loc_881965C4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8819662c
	if (ctx.cr6.eq) goto loc_8819662C;
	// mullw r11,r25,r23
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r23.s32);
	// subf r30,r11,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r11.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r24,3,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF0;
	// bl 0x881ece80
	ctx.lr = 0x881965E8;
	sub_881ECE80(ctx, base);
loc_881965E8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8819662c
	if (!ctx.cr6.gt) goto loc_8819662C;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_881965F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88196620
	if (!ctx.cr6.gt) goto loc_88196620;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88196610:
	// lvlx128 v63,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x88196610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88196610;
loc_88196620:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// bne 0x881965f4
	if (!ctx.cr0.eq) goto loc_881965F4;
loc_8819662C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x881966a8
	if (ctx.cr6.eq) goto loc_881966A8;
	// subf r29,r23,r31
	ctx.r29.u64 = ctx.r31.u64 - ctx.r23.u64;
	// rlwinm r28,r24,3,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// neg r11,r26
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r26.u64);
	// beq cr6,0x88196650
	if (ctx.cr6.eq) goto loc_88196650;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x88196654
	goto loc_88196654;
loc_88196650:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_88196654:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x881ece80
	ctx.lr = 0x88196668;
	sub_881ECE80(ctx, base);
loc_88196668:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881966a8
	if (!ctx.cr6.gt) goto loc_881966A8;
loc_88196670:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8819669c
	if (!ctx.cr6.gt) goto loc_8819669C;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8819668C:
	// lvlx128 v62,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v62,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8819668c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819668C;
loc_8819669C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// bne 0x88196670
	if (!ctx.cr0.eq) goto loc_88196670;
loc_881966A8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8819B310) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8819B310;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8819B310) {
			switch (rex_dispatch_address) {
				case 0x8819B318:
				case 0x8819B630:
				case 0x8819B73C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8819B310;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8819B318: goto loc_8819B318;
		case 0x8819B630: goto loc_8819B630;
		case 0x8819B73C: goto loc_8819B73C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8819B318;
	__savegprlr_14(ctx, base);
loc_8819B318:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x8819B318;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,288(r3)
	ctx.current_instruction = 0x8819B31C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r5,276(r1)
	ctx.current_instruction = 0x8819B328;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stw r9,308(r1)
	ctx.current_instruction = 0x8819B330;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r10,316(r1)
	ctx.current_instruction = 0x8819B338;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8819b358
	if (ctx.cr6.eq) goto loc_8819B358;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r15,0
	ctx.r15.s64 = 0;
	// bne cr6,0x8819b35c
	if (!ctx.cr6.eq) goto loc_8819B35C;
loc_8819B358:
	// li r15,1
	ctx.r15.s64 = 1;
loc_8819B35C:
	// lwz r11,22140(r31)
	ctx.current_instruction = 0x8819B35C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8819b370
	if (!ctx.cr6.eq) goto loc_8819B370;
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x8819B368;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// b 0x8819b374
	goto loc_8819B374;
loc_8819B370:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8819B374:
	// lwz r8,3776(r31)
	ctx.current_instruction = 0x8819B374;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r9,220(r31)
	ctx.current_instruction = 0x8819B37C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8819B380;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,3780(r31)
	ctx.current_instruction = 0x8819B388;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r9,204(r31)
	ctx.current_instruction = 0x8819B38C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r3,208(r31)
	ctx.current_instruction = 0x8819B390;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,3784(r31)
	ctx.current_instruction = 0x8819B398;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r8,3792(r31)
	ctx.current_instruction = 0x8819B3A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// srawi r30,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 1;
	// lwz r7,3796(r31)
	ctx.current_instruction = 0x8819B3A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r3,3812(r31)
	ctx.current_instruction = 0x8819B3B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3812);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r21,r5,r9
	ctx.r21.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r20,r4,r10
	ctx.r20.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r19,r6,r10
	ctx.r19.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r18,r3,r9
	ctx.r18.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r17,r8,r10
	ctx.r17.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r16,r11,r10
	ctx.r16.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8819b3ec
	if (ctx.cr6.eq) goto loc_8819B3EC;
loc_8819B3E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8819B3EC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8819b3e0
	if (ctx.cr6.eq) goto loc_8819B3E0;
	// lwz r11,0(r22)
	ctx.current_instruction = 0x8819B3F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,140(r31)
	ctx.current_instruction = 0x8819B3F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8819b864
	if (!ctx.cr6.lt) goto loc_8819B864;
loc_8819B404:
	// lwz r10,0(r22)
	ctx.current_instruction = 0x8819B404;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mullw r24,r28,r23
	ctx.r24.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r23.s32);
	// lwz r8,232(r31)
	ctx.current_instruction = 0x8819B40C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r9,228(r31)
	ctx.current_instruction = 0x8819B410;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,21940(r31)
	ctx.current_instruction = 0x8819B414;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21940);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r24,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r29,r9,r21
	ctx.r29.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r25,r11,r20
	ctx.r25.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r26,r11,r19
	ctx.r26.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r30,r11,r17
	ctx.r30.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8819b474
	if (ctx.cr6.eq) goto loc_8819B474;
	// lwz r8,21968(r31)
	ctx.current_instruction = 0x8819B450;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.current_instruction = 0x8819B458;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8819b474
	if (ctx.cr6.eq) goto loc_8819B474;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8819b694
	if (ctx.cr6.eq) goto loc_8819B694;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bgt cr6,0x8819b694
	if (ctx.cr6.gt) goto loc_8819B694;
loc_8819B474:
	// lwz r10,288(r31)
	ctx.current_instruction = 0x8819B474;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8819b48c
	if (!ctx.cr6.eq) goto loc_8819B48C;
	// lwz r10,3432(r31)
	ctx.current_instruction = 0x8819B480;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819b64c
	if (ctx.cr6.eq) goto loc_8819B64C;
loc_8819B48C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8819b5e4
	if (ctx.cr6.eq) goto loc_8819B5E4;
	// ld r10,3632(r31)
	ctx.current_instruction = 0x8819B494;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 3632);
	// cmpdi cr6,r10,1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 1, ctx.xer);
	// bne cr6,0x8819b5e4
	if (!ctx.cr6.eq) goto loc_8819B5E4;
	// lwz r11,22140(r31)
	ctx.current_instruction = 0x8819B4A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8819b4cc
	if (!ctx.cr6.eq) goto loc_8819B4CC;
	// lwz r10,21704(r31)
	ctx.current_instruction = 0x8819B4BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21704);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8819b4d0
	if (!ctx.cr6.eq) goto loc_8819B4D0;
loc_8819B4CC:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8819B4D0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8819b5dc
	if (!ctx.cr6.eq) goto loc_8819B5DC;
	// lwz r30,20688(r31)
	ctx.current_instruction = 0x8819B4D8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bge cr6,0x8819b648
	if (!ctx.cr6.lt) goto loc_8819B648;
loc_8819B4E4:
	// lwz r10,204(r31)
	ctx.current_instruction = 0x8819B4E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,208(r31)
	ctx.current_instruction = 0x8819B4EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// lwz r4,0(r22)
	ctx.current_instruction = 0x8819B4F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// srawi r3,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 2;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r8,r30
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// mullw r6,r11,r27
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// mullw r5,r11,r28
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// mullw r3,r3,r28
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r6,r3,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r3.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8819b5cc
	if (ctx.cr6.eq) goto loc_8819B5CC;
	// lwz r3,136(r31)
	ctx.current_instruction = 0x8819B540;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8819b5cc
	if (!ctx.cr6.lt) goto loc_8819B5CC;
loc_8819B550:
	// lwz r3,0(r10)
	ctx.current_instruction = 0x8819B550;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r3,0(r11)
	ctx.current_instruction = 0x8819B558;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r3,0(r9)
	ctx.current_instruction = 0x8819B55C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// lwzu r3,4(r10)
	ctx.current_instruction = 0x8819B560;
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r3,4(r11)
	ctx.current_instruction = 0x8819B564;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ctx.current_instruction = 0x8819B568;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwzu r3,4(r10)
	ctx.current_instruction = 0x8819B56C;
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r3,4(r11)
	ctx.current_instruction = 0x8819B570;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ctx.current_instruction = 0x8819B574;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwzu r3,4(r10)
	ctx.current_instruction = 0x8819B578;
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwu r3,4(r11)
	ctx.current_instruction = 0x8819B580;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r9)
	ctx.current_instruction = 0x8819B584;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// lwz r3,0(r6)
	ctx.current_instruction = 0x8819B588;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r8)
	ctx.current_instruction = 0x8819B590;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzu r3,4(r6)
	ctx.current_instruction = 0x8819B598;
	ea = 4 + ctx.r6.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stwu r3,4(r8)
	ctx.current_instruction = 0x8819B5A0;
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r8.u32 = ea;
	// lwz r3,0(r5)
	ctx.current_instruction = 0x8819B5A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r3,0(r7)
	ctx.current_instruction = 0x8819B5A8;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwzu r3,4(r5)
	ctx.current_instruction = 0x8819B5B0;
	ea = 4 + ctx.r5.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stwu r3,4(r7)
	ctx.current_instruction = 0x8819B5B8;
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// lwz r3,136(r31)
	ctx.current_instruction = 0x8819B5BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// blt cr6,0x8819b550
	if (ctx.cr6.lt) goto loc_8819B550;
loc_8819B5CC:
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8819b4e4
	if (ctx.cr6.lt) goto loc_8819B4E4;
	// b 0x8819b648
	goto loc_8819B648;
loc_8819B5DC:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8819b4e4
	goto loc_8819B4E4;
loc_8819B5E4:
	// lwz r10,136(r31)
	ctx.current_instruction = 0x8819B5E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8819b64c
	if (!ctx.cr6.lt) goto loc_8819B64C;
	// subf r28,r30,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r30.u64;
	// subf r27,r29,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r29.u64;
	// subf r26,r30,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r30.u64;
	// subf r25,r30,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r30.u64;
loc_8819B604:
	// lwz r11,3156(r31)
	ctx.current_instruction = 0x8819B604;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3156);
	// add r8,r28,r30
	ctx.r8.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,208(r31)
	ctx.current_instruction = 0x8819B610;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// add r6,r27,r29
	ctx.r6.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lwz r9,204(r31)
	ctx.current_instruction = 0x8819B618;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r5,r26,r30
	ctx.r5.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r4,r25,r30
	ctx.r4.u64 = ctx.r25.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8819B630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8819B630:
	// lwz r10,136(r31)
	ctx.current_instruction = 0x8819B630;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8819b604
	if (ctx.cr6.lt) goto loc_8819B604;
loc_8819B648:
	// lwz r27,276(r1)
	ctx.current_instruction = 0x8819B648;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_8819B64C:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x8819b664
	if (ctx.cr6.eq) goto loc_8819B664;
	// lwz r11,0(r14)
	ctx.current_instruction = 0x8819B658;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,0(r14)
	ctx.current_instruction = 0x8819B660;
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
loc_8819B664:
	// lwz r11,0(r22)
	ctx.current_instruction = 0x8819B664;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r22)
	ctx.current_instruction = 0x8819B66C;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,140(r31)
	ctx.current_instruction = 0x8819B674;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8819b404
	if (ctx.cr6.lt) goto loc_8819B404;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3004(r31)
	ctx.current_instruction = 0x8819B688;
	REX_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8819B694:
	// lwz r5,22020(r31)
	ctx.current_instruction = 0x8819B694;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 22020);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,21960(r31)
	ctx.current_instruction = 0x8819B69C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21960);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,21976(r31)
	ctx.current_instruction = 0x8819B6A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// li r10,4
	ctx.r10.s64 = 4;
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
loc_8819B6B0:
	// subfic r9,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r27.u64;
	// rlwinm r7,r27,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// addme r9,r7
	temp.u8 = (ctx.r7.u32 + 0xFFFFFFFFu < ctx.r7.u32) | (ctx.r7.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r7.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x8819b6e0
	if (ctx.cr6.gt) goto loc_8819B6E0;
	// lwz r9,21956(r31)
	ctx.current_instruction = 0x8819B6C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.current_instruction = 0x8819B6D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// b 0x8819b6b0
	goto loc_8819B6B0;
loc_8819B6E0:
	// lwz r10,21948(r31)
	ctx.current_instruction = 0x8819B6E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8819b710
	if (!ctx.cr6.lt) goto loc_8819B710;
	// lwz r8,21956(r31)
	ctx.current_instruction = 0x8819B6EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,21948(r31)
	ctx.current_instruction = 0x8819B6F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
loc_8819B6F8:
	// lwzx r9,r8,r10
	ctx.current_instruction = 0x8819B6F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8819b6f8
	if (ctx.cr6.lt) goto loc_8819B6F8;
loc_8819B710:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8819b3e0
	if (ctx.cr6.eq) goto loc_8819B3E0;
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x8819B718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// lwz r3,80(r31)
	ctx.current_instruction = 0x8819B720;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r6,24(r3)
	ctx.current_instruction = 0x8819B734;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x88156260
	ctx.lr = 0x8819B73C;
	sub_88156260(ctx, base);
loc_8819B73C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8819B740:
	// lwz r11,80(r31)
	ctx.current_instruction = 0x8819B740;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// ld r9,0(r11)
	ctx.current_instruction = 0x8819B744;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// rldicl r8,r9,1,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8819b784
	if (!ctx.cr6.eq) goto loc_8819B784;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8819B758;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// std r7,0(r11)
	ctx.current_instruction = 0x8819B768;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// stw r6,8(r11)
	ctx.current_instruction = 0x8819B770;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// blt cr6,0x8819b740
	if (ctx.cr6.lt) goto loc_8819B740;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8819B784:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x8819b3e0
	if (!ctx.cr6.lt) goto loc_8819B3E0;
	// lwz r11,0(r22)
	ctx.current_instruction = 0x8819B78C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r22)
	ctx.current_instruction = 0x8819B798;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8819b7ac
	if (ctx.cr6.eq) goto loc_8819B7AC;
	// lwz r11,0(r14)
	ctx.current_instruction = 0x8819B7A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,0(r14)
	ctx.current_instruction = 0x8819B7A8;
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
loc_8819B7AC:
	// lwz r11,0(r22)
	ctx.current_instruction = 0x8819B7AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r10,136(r31)
	ctx.current_instruction = 0x8819B7B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// bge cr6,0x8819b7c8
	if (!ctx.cr6.lt) goto loc_8819B7C8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8819B7C8:
	// lwz r11,308(r1)
	ctx.current_instruction = 0x8819B7C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8819b7d8
	if (ctx.cr6.eq) goto loc_8819B7D8;
	// stw r9,0(r11)
	ctx.current_instruction = 0x8819B7D4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8819B7D8:
	// lwz r11,316(r1)
	ctx.current_instruction = 0x8819B7D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8819B7DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8819b864
	if (ctx.cr6.eq) goto loc_8819B864;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_8819B7EC:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8819B7EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8819b830
	if (ctx.cr6.eq) goto loc_8819B830;
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// lwz r7,0(r11)
	ctx.current_instruction = 0x8819B7FC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r5,-4(r11)
	ctx.current_instruction = 0x8819B804;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r4,r8,r10
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r8,-8(r11)
	ctx.current_instruction = 0x8819B80C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r3,-12(r11)
	ctx.current_instruction = 0x8819B810;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,0(r3)
	ctx.current_instruction = 0x8819B828;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x8819b854
	goto loc_8819B854;
loc_8819B830:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8819B830;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-4(r11)
	ctx.current_instruction = 0x8819B834;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r8,-8(r11)
	ctx.current_instruction = 0x8819B83C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r5,-12(r11)
	ctx.current_instruction = 0x8819B840;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r4,0(r5)
	ctx.current_instruction = 0x8819B850;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
loc_8819B854:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,-12(r11)
	ctx.current_instruction = 0x8819B858;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8819b7ec
	if (!ctx.cr6.eq) goto loc_8819B7EC;
loc_8819B864:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3004(r31)
	ctx.current_instruction = 0x8819B86C;
	REX_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A9838) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A9838;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A9838) {
			switch (rex_dispatch_address) {
				case 0x881A9840:
				case 0x881A98E8:
				case 0x881A9904:
				case 0x881A9924:
				case 0x881A9940:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A9838;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881A9840: goto loc_881A9840;
		case 0x881A98E8: goto loc_881A98E8;
		case 0x881A9904: goto loc_881A9904;
		case 0x881A9924: goto loc_881A9924;
		case 0x881A9940: goto loc_881A9940;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881A9840;
	__savegprlr_24(ctx, base);
loc_881A9840:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881A9840;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,3744(r3)
	ctx.current_instruction = 0x881A9844;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,224(r3)
	ctx.current_instruction = 0x881A984C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r9,220(r3)
	ctx.current_instruction = 0x881A9854;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,3776(r3)
	ctx.current_instruction = 0x881A985C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// lwz r30,3836(r3)
	ctx.current_instruction = 0x881A9860;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3836);
	// lwz r27,616(r7)
	ctx.current_instruction = 0x881A9864;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 616);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,3780(r3)
	ctx.current_instruction = 0x881A986C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// lwz r29,3840(r3)
	ctx.current_instruction = 0x881A9870;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3840);
	// lwz r28,3760(r3)
	ctx.current_instruction = 0x881A9874;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 3760);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r3,204(r3)
	ctx.current_instruction = 0x881A987C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881A9880;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// srawi r25,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r3.s32 >> 1;
	// lwz r3,3832(r31)
	ctx.current_instruction = 0x881A9888;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// lwz r6,3784(r31)
	ctx.current_instruction = 0x881A988C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r27,616(r28)
	ctx.current_instruction = 0x881A9894;
	REX_STORE_U32(ctx.r28.u32 + 616, ctx.r27.u32);
	// add r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mullw r8,r25,r8
	ctx.r8.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r8.s32);
	// lwz r3,200(r31)
	ctx.current_instruction = 0x881A98AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r24,r4,r8
	ctx.r24.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r29,r5,r11
	ctx.r29.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r27,r6,r11
	ctx.r27.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r25,r7,r8
	ctx.r25.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x881a995c
	if (!ctx.cr6.gt) goto loc_881A995C;
loc_881A98D4:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881A98D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// bl 0x881ece80
	ctx.lr = 0x881A98E8;
	sub_881ECE80(ctx, base);
loc_881A98E8:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881A98E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x881ece80
	ctx.lr = 0x881A9904;
	sub_881ECE80(ctx, base);
loc_881A9904:
	// lwz r10,204(r31)
	ctx.current_instruction = 0x881A9904;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881A990C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x881ece80
	ctx.lr = 0x881A9924;
	sub_881ECE80(ctx, base);
loc_881A9924:
	// lwz r11,204(r31)
	ctx.current_instruction = 0x881A9924;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x881ece80
	ctx.lr = 0x881A9940;
	sub_881ECE80(ctx, base);
loc_881A9940:
	// lwz r11,204(r31)
	ctx.current_instruction = 0x881A9940;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r9,200(r31)
	ctx.current_instruction = 0x881A9944;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881a98d4
	if (ctx.cr6.lt) goto loc_881A98D4;
loc_881A995C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ABDB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881ABDB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881ABDB8) {
			switch (rex_dispatch_address) {
				case 0x881ABDC0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ABDB8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881ABDC0: goto loc_881ABDC0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881ABDC0;
	__savegprlr_28(ctx, base);
loc_881ABDC0:
	// addi r31,r5,2
	ctx.r31.s64 = ctx.r5.s64 + 2;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// li r28,16
	ctx.r28.s64 = 16;
loc_881ABDCC:
	// li r30,4
	ctx.r30.s64 = 4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r11,r3,-9
	ctx.r11.s64 = ctx.r3.s64 + -9;
	// addi r5,r31,-3
	ctx.r5.s64 = ctx.r31.s64 + -3;
	// subf r29,r6,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r6.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_881ABDE4:
	// lbz r30,1(r5)
	ctx.current_instruction = 0x881ABDE4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// stb r30,5(r11)
	ctx.current_instruction = 0x881ABDE8;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r30.u8);
	// lbz r30,2(r5)
	ctx.current_instruction = 0x881ABDEC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// stb r30,7(r11)
	ctx.current_instruction = 0x881ABDF0;
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r30.u8);
	// lbz r30,3(r5)
	ctx.current_instruction = 0x881ABDF4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// stb r30,9(r11)
	ctx.current_instruction = 0x881ABDF8;
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r30.u8);
	// lbzu r30,4(r5)
	ctx.current_instruction = 0x881ABDFC;
	ea = 4 + ctx.r5.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r30,11(r11)
	ctx.current_instruction = 0x881ABE00;
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r30.u8);
	// lbz r30,0(r4)
	ctx.current_instruction = 0x881ABE04;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r30,10(r11)
	ctx.current_instruction = 0x881ABE08;
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r30.u8);
	// stb r30,6(r11)
	ctx.current_instruction = 0x881ABE0C;
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r30.u8);
	// lbzx r30,r29,r4
	ctx.current_instruction = 0x881ABE10;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r30,12(r11)
	ctx.current_instruction = 0x881ABE18;
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r30.u8);
	// stbu r30,8(r11)
	ctx.current_instruction = 0x881ABE1C;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x881abde4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881ABDE4;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bne 0x881abdcc
	if (!ctx.cr0.eq) goto loc_881ABDCC;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AC2A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881AC2A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881AC2A0) {
			switch (rex_dispatch_address) {
				case 0x881AC2A8:
				case 0x881AC30C:
				case 0x881AC340:
				case 0x881AC358:
				case 0x881AC370:
				case 0x881AC380:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AC2A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881AC2A8: goto loc_881AC2A8;
		case 0x881AC30C: goto loc_881AC30C;
		case 0x881AC340: goto loc_881AC340;
		case 0x881AC358: goto loc_881AC358;
		case 0x881AC370: goto loc_881AC370;
		case 0x881AC380: goto loc_881AC380;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881AC2A8;
	__savegprlr_19(ctx, base);
loc_881AC2A8:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x881AC2A8;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r1)
	ctx.current_instruction = 0x881AC2AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r10,152(r3)
	ctx.current_instruction = 0x881AC2B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// rlwinm r26,r11,0,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,340(r1)
	ctx.current_instruction = 0x881AC2C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// srawi r23,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r26.s32 >> 1;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r27,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 1;
	// beq cr6,0x881ac314
	if (ctx.cr6.eq) goto loc_881AC314;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r11,15948(r3)
	ctx.current_instruction = 0x881AC2E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15948);
	// lwz r27,324(r1)
	ctx.current_instruction = 0x881AC2E8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r31,316(r1)
	ctx.current_instruction = 0x881AC2F0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r26,308(r1)
	ctx.current_instruction = 0x881AC2F4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r27,100(r1)
	ctx.current_instruction = 0x881AC2FC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r31,92(r1)
	ctx.current_instruction = 0x881AC300;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r26,84(r1)
	ctx.current_instruction = 0x881AC304;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bctrl 
	ctx.lr = 0x881AC30C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881AC30C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_881AC314:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881ac390
	if (!ctx.cr6.gt) goto loc_881AC390;
	// lwz r20,324(r1)
	ctx.current_instruction = 0x881AC31C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// subf r22,r31,r8
	ctx.r22.u64 = ctx.r8.u64 - ctx.r31.u64;
	// lwz r24,316(r1)
	ctx.current_instruction = 0x881AC324;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// subf r21,r30,r5
	ctx.r21.u64 = ctx.r5.u64 - ctx.r30.u64;
	// lwz r19,308(r1)
	ctx.current_instruction = 0x881AC32C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_881AC330:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC340;
	sub_880547A0(ctx, base);
loc_881AC340:
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC358;
	sub_880547A0(ctx, base);
loc_881AC358:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// add r4,r22,r31
	ctx.r4.u64 = ctx.r22.u64 + ctx.r31.u64;
	// add r3,r21,r30
	ctx.r3.u64 = ctx.r21.u64 + ctx.r30.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC370;
	sub_880547A0(ctx, base);
loc_881AC370:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x881AC380;
	sub_880547A0(ctx, base);
loc_881AC380:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r31,r31,r19
	ctx.r31.u64 = ctx.r31.u64 + ctx.r19.u64;
	// add r30,r30,r20
	ctx.r30.u64 = ctx.r30.u64 + ctx.r20.u64;
	// bne 0x881ac330
	if (!ctx.cr0.eq) goto loc_881AC330;
loc_881AC390:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AEAA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881AEAA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881AEAA0) {
			switch (rex_dispatch_address) {
				case 0x881AEAA8:
				case 0x881AEB78:
				case 0x881AEBC0:
				case 0x881AEC04:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AEAA0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881AEAA8: goto loc_881AEAA8;
		case 0x881AEB78: goto loc_881AEB78;
		case 0x881AEBC0: goto loc_881AEBC0;
		case 0x881AEC04: goto loc_881AEC04;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881AEAA8;
	__savegprlr_27(ctx, base);
loc_881AEAA8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881AEAA8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4036(r3)
	ctx.current_instruction = 0x881AEAAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4036);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881aeb08
	if (ctx.cr6.eq) goto loc_881AEB08;
	// lwz r10,0(r4)
	ctx.current_instruction = 0x881AEAC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r10,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881aeaec
	if (ctx.cr6.eq) goto loc_881AEAEC;
	// lwz r11,4044(r3)
	ctx.current_instruction = 0x881AEAD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4044);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r4)
	ctx.current_instruction = 0x881AEAE4;
	REX_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// b 0x881aec08
	goto loc_881AEC08;
loc_881AEAEC:
	// lwz r10,248(r28)
	ctx.current_instruction = 0x881AEAEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 248);
	// lwz r11,252(r28)
	ctx.current_instruction = 0x881AEAF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 252);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,4(r27)
	ctx.current_instruction = 0x881AEB00;
	REX_STORE_U8(ctx.r27.u32 + 4, ctx.r9.u8);
	// b 0x881aec08
	goto loc_881AEC08;
loc_881AEB08:
	// lwz r11,476(r28)
	ctx.current_instruction = 0x881AEB08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881aebf8
	if (ctx.cr6.eq) goto loc_881AEBF8;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881AEB14;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AEB20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881aeb88
	if (!ctx.cr6.lt) goto loc_881AEB88;
loc_881AEB30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881aeb88
	if (ctx.cr6.eq) goto loc_881AEB88;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881AEB3C;
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
	ctx.current_instruction = 0x881AEB60;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881AEB68;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881aeb78
	if (!ctx.cr0.lt) goto loc_881AEB78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AEB78;
	sub_88156678(ctx, base);
loc_881AEB78:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881AEB78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881aeb30
	if (ctx.cr6.gt) goto loc_881AEB30;
loc_881AEB88:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881AEB8C;
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
	ctx.current_instruction = 0x881AEBA4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881AEBB0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881aebc0
	if (!ctx.cr0.lt) goto loc_881AEBC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881AEBC0;
	sub_88156678(ctx, base);
loc_881AEBC0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881aebdc
	if (ctx.cr6.eq) goto loc_881AEBDC;
	// lwz r11,4044(r28)
	ctx.current_instruction = 0x881AEBC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4044);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r27)
	ctx.current_instruction = 0x881AEBD4;
	REX_STORE_U8(ctx.r27.u32 + 4, ctx.r11.u8);
	// b 0x881aec08
	goto loc_881AEC08;
loc_881AEBDC:
	// lwz r11,248(r28)
	ctx.current_instruction = 0x881AEBDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 248);
	// lwz r10,252(r28)
	ctx.current_instruction = 0x881AEBE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 252);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r27)
	ctx.current_instruction = 0x881AEBF0;
	REX_STORE_U8(ctx.r27.u32 + 4, ctx.r11.u8);
	// b 0x881aec08
	goto loc_881AEC08;
loc_881AEBF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881ad278
	ctx.lr = 0x881AEC04;
	sub_881AD278(ctx, base);
loc_881AEC04:
	// stb r3,4(r27)
	ctx.current_instruction = 0x881AEC04;
	REX_STORE_U8(ctx.r27.u32 + 4, ctx.r3.u8);
loc_881AEC08:
	// lbz r11,4(r27)
	ctx.current_instruction = 0x881AEC08;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x881aec20
	if (ctx.cr6.lt) goto loc_881AEC20;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// ble cr6,0x881aec24
	if (!ctx.cr6.gt) goto loc_881AEC24;
loc_881AEC20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_881AEC24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B1888) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B1888;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B1888) {
			switch (rex_dispatch_address) {
				case 0x881B1890:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B1888;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B1890: goto loc_881B1890;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881B1890;
	__savegprlr_29(ctx, base);
loc_881B1890:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x881b18cc
	if (!ctx.cr6.gt) goto loc_881B18CC;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subf r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881B18B8:
	// lbzux r8,r11,r9
	ctx.current_instruction = 0x881B18B8;
	ea = ctx.r11.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mulli r4,r8,315
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(315));
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// stwu r8,8(r10)
	ctx.current_instruction = 0x881B18C4;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881b18b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B18B8;
loc_881B18CC:
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwzx r10,r30,r6
	ctx.current_instruction = 0x881B18E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// stwx r10,r31,r6
	ctx.current_instruction = 0x881B18E4;
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// ble cr6,0x881b191c
	if (!ctx.cr6.gt) goto loc_881B191C;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B1900:
	// lwz r9,12(r11)
	ctx.current_instruction = 0x881B1900;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x881B1904;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r9,r10,226
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(226));
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// stwu r10,8(r11)
	ctx.current_instruction = 0x881B1914;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x881b1900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B1900;
loc_881B191C:
	// lwz r10,4(r6)
	ctx.current_instruction = 0x881B191C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r10,-4(r6)
	ctx.current_instruction = 0x881B1928;
	REX_STORE_U32(ctx.r6.u32 + -4, ctx.r10.u32);
	// ble cr6,0x881b196c
	if (!ctx.cr6.gt) goto loc_881B196C;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881B1944:
	// lwz r8,4(r10)
	ctx.current_instruction = 0x881B1944;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,-4(r10)
	ctx.current_instruction = 0x881B1948;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r29,0(r10)
	ctx.current_instruction = 0x881B194C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r9,217
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(217));
	// srawi r9,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 12;
	// subf r8,r9,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r9.u64;
	// stw r8,0(r10)
	ctx.current_instruction = 0x881B1960;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x881b1944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B1944;
loc_881B196C:
	// lwzx r10,r30,r6
	ctx.current_instruction = 0x881B196C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stwx r10,r31,r6
	ctx.current_instruction = 0x881B1974;
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// ble cr6,0x881b19b4
	if (!ctx.cr6.gt) goto loc_881B19B4;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B198C:
	// lwz r10,-4(r11)
	ctx.current_instruction = 0x881B198C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881B1990;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881B1994;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r4,406
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(406));
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r8,0(r11)
	ctx.current_instruction = 0x881B19A8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881b198c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B198C;
loc_881B19B4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x881b19fc
	if (!ctx.cr6.gt) goto loc_881B19FC;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r9,r7,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r7.u64;
	// li r8,255
	ctx.r8.s64 = 255;
loc_881B19CC:
	// lwz r11,0(r10)
	ctx.current_instruction = 0x881B19CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x881b19ec
	if (!ctx.cr6.gt) goto loc_881B19EC;
	// subfic r6,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r4,r5
	temp.u8 = (ctx.r5.u32 + 0xFFFFFFFFu < ctx.r5.u32) | (ctx.r5.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ctx.r5.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
loc_881B19EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbux r11,r9,r7
	ctx.current_instruction = 0x881B19F4;
	ea = ctx.r9.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881b19cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B19CC;
loc_881B19FC:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B3B80) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B3B80);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B3B80;
	ctx.current_instruction = 0x881B3B80;
	PPCRegister temp{};
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881b3b94
	if (ctx.cr6.lt) goto loc_881B3B94;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x881b3b98
	goto loc_881B3B98;
loc_881B3B94:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_881B3B98:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x881b3ba8
	if (!ctx.cr6.gt) goto loc_881B3BA8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x881b3bb4
	goto loc_881B3BB4;
loc_881B3BA8:
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881b3bb4
	if (!ctx.cr6.gt) goto loc_881B3BB4;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_881B3BB4:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x881b3bc4
	if (!ctx.cr6.gt) goto loc_881B3BC4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x881b3bd0
	goto loc_881B3BD0;
loc_881B3BC4:
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881b3bd0
	if (!ctx.cr6.gt) goto loc_881B3BD0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_881B3BD0:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x881b3be0
	if (!ctx.cr6.gt) goto loc_881B3BE0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x881b3bec
	goto loc_881B3BEC;
loc_881B3BE0:
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881b3bec
	if (!ctx.cr6.gt) goto loc_881B3BEC;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_881B3BEC:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x881b3bfc
	if (!ctx.cr6.gt) goto loc_881B3BFC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x881b3c08
	goto loc_881B3C08;
loc_881B3BFC:
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881b3c08
	if (!ctx.cr6.gt) goto loc_881B3C08;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_881B3C08:
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subfc r10,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// eqv r9,r9,r11
	ctx.r9.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881B46F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B46F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B46F8) {
			switch (rex_dispatch_address) {
				case 0x881B4700:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B46F8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B4700: goto loc_881B4700;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881B4700;
	__savegprlr_27(ctx, base);
loc_881B4700:
	// lwz r9,0(r3)
	ctx.current_instruction = 0x881B4700;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r1,-136
	ctx.r10.s64 = ctx.r1.s64 + -136;
	// rlwimi r9,r4,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,0(r3)
	ctx.current_instruction = 0x881B4714;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_881B4724:
	// stdu r11,8(r10)
	ctx.current_instruction = 0x881B4724;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x881b4724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B4724;
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r29,-128(r1)
	ctx.current_instruction = 0x881B4734;
	REX_STORE_U32(ctx.r1.u32 + -128, ctx.r29.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b4850
	if (!ctx.cr6.gt) goto loc_881B4850;
	// addi r3,r9,-4
	ctx.r3.s64 = ctx.r9.s64 + -4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_881B4748:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x881B4748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r7,20
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 20, ctx.xer);
	// bge cr6,0x881b4858
	if (!ctx.cr6.lt) goto loc_881B4858;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// subfic r11,r7,20
	ctx.xer.ca = ctx.r7.u32 <= 20;
	ctx.r11.u64 = static_cast<uint64_t>(20) - ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r6,0(r10)
	ctx.current_instruction = 0x881B476C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sraw r11,r6,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// or r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 | ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stwu r11,4(r3)
	ctx.current_instruction = 0x881B4784;
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// beq cr6,0x881b4794
	if (ctx.cr6.eq) goto loc_881B4794;
	// lwz r5,-4(r10)
	ctx.current_instruction = 0x881B478C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// b 0x881b4798
	goto loc_881B4798;
loc_881B4794:
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_881B4798:
	// stw r5,0(r10)
	ctx.current_instruction = 0x881B4798;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x881b47a8
	if (!ctx.cr6.eq) goto loc_881B47A8;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_881B47A8:
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x881b480c
	if (!ctx.cr6.gt) goto loc_881B480C;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_881B47C0:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881B47C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x881b480c
	if (!ctx.cr6.eq) goto loc_881B480C;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// and r27,r10,r8
	ctx.r27.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881b47e4
	if (ctx.cr6.eq) goto loc_881B47E4;
	// lwz r10,-4(r11)
	ctx.current_instruction = 0x881B47DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x881b47e8
	goto loc_881B47E8;
loc_881B47E4:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_881B47E8:
	// stw r10,0(r11)
	ctx.current_instruction = 0x881B47E8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x881b47fc
	if (!ctx.cr6.eq) goto loc_881B47FC;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_881B47FC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x881b47c0
	if (ctx.cr6.gt) goto loc_881B47C0;
loc_881B480C:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x881b4844
	if (!ctx.cr6.lt) goto loc_881B4844;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_881B4828:
	// lwz r9,4(r10)
	ctx.current_instruction = 0x881B4828;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x881b4844
	if (!ctx.cr6.eq) goto loc_881B4844;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r5,4(r10)
	ctx.current_instruction = 0x881B4838;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x881b4828
	if (ctx.cr6.lt) goto loc_881B4828;
loc_881B4844:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x881b4748
	if (ctx.cr6.lt) goto loc_881B4748;
loc_881B4850:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881B4858:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881BA970) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881BA970;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881BA970) {
			switch (rex_dispatch_address) {
				case 0x881BA978:
				case 0x881BA9E0:
				case 0x881BAA5C:
				case 0x881BAB50:
				case 0x881BABDC:
				case 0x881BABF4:
				case 0x881BAC6C:
				case 0x881BACB0:
				case 0x881BAD44:
				case 0x881BADD0:
				case 0x881BADE8:
				case 0x881BAE7C:
				case 0x881BAEB4:
				case 0x881BAF48:
				case 0x881BAFD4:
				case 0x881BAFEC:
				case 0x881BB080:
				case 0x881BB0B8:
				case 0x881BB0DC:
				case 0x881BB164:
				case 0x881BB1AC:
				case 0x881BB1D8:
				case 0x881BB26C:
				case 0x881BB2B4:
				case 0x881BB330:
				case 0x881BB378:
				case 0x881BB3E0:
				case 0x881BB428:
				case 0x881BB490:
				case 0x881BB4D8:
				case 0x881BB73C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881BA970;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881BA978: goto loc_881BA978;
		case 0x881BA9E0: goto loc_881BA9E0;
		case 0x881BAA5C: goto loc_881BAA5C;
		case 0x881BAB50: goto loc_881BAB50;
		case 0x881BABDC: goto loc_881BABDC;
		case 0x881BABF4: goto loc_881BABF4;
		case 0x881BAC6C: goto loc_881BAC6C;
		case 0x881BACB0: goto loc_881BACB0;
		case 0x881BAD44: goto loc_881BAD44;
		case 0x881BADD0: goto loc_881BADD0;
		case 0x881BADE8: goto loc_881BADE8;
		case 0x881BAE7C: goto loc_881BAE7C;
		case 0x881BAEB4: goto loc_881BAEB4;
		case 0x881BAF48: goto loc_881BAF48;
		case 0x881BAFD4: goto loc_881BAFD4;
		case 0x881BAFEC: goto loc_881BAFEC;
		case 0x881BB080: goto loc_881BB080;
		case 0x881BB0B8: goto loc_881BB0B8;
		case 0x881BB0DC: goto loc_881BB0DC;
		case 0x881BB164: goto loc_881BB164;
		case 0x881BB1AC: goto loc_881BB1AC;
		case 0x881BB1D8: goto loc_881BB1D8;
		case 0x881BB26C: goto loc_881BB26C;
		case 0x881BB2B4: goto loc_881BB2B4;
		case 0x881BB330: goto loc_881BB330;
		case 0x881BB378: goto loc_881BB378;
		case 0x881BB3E0: goto loc_881BB3E0;
		case 0x881BB428: goto loc_881BB428;
		case 0x881BB490: goto loc_881BB490;
		case 0x881BB4D8: goto loc_881BB4D8;
		case 0x881BB73C: goto loc_881BB73C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881BA978;
	__savegprlr_14(ctx, base);
loc_881BA978:
	// stwu r1,-416(r1)
	ctx.current_instruction = 0x881BA978;
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,508(r1)
	ctx.current_instruction = 0x881BA97C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r8,476(r1)
	ctx.current_instruction = 0x881BA984;
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r8.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r9,484(r1)
	ctx.current_instruction = 0x881BA98C;
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,492(r1)
	ctx.current_instruction = 0x881BA994;
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,1836(r3)
	ctx.current_instruction = 0x881BA99C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1836);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r9,0(r11)
	ctx.current_instruction = 0x881BA9A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r8,4(r11)
	ctx.current_instruction = 0x881BA9AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,16(r11)
	ctx.current_instruction = 0x881BA9B4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r25,1764(r3)
	ctx.current_instruction = 0x881BA9BC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 1764);
	// stw r7,468(r1)
	ctx.current_instruction = 0x881BA9C0;
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r22,80(r1)
	ctx.current_instruction = 0x881BA9C8;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r22.u16);
	// stw r10,84(r1)
	ctx.current_instruction = 0x881BA9CC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,100(r1)
	ctx.current_instruction = 0x881BA9D0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,108(r1)
	ctx.current_instruction = 0x881BA9D4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r26,96(r1)
	ctx.current_instruction = 0x881BA9D8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x88052d90
	ctx.lr = 0x881BA9E0;
	sub_88052D90(ctx, base);
loc_881BA9E0:
	// lwz r7,20760(r27)
	ctx.current_instruction = 0x881BA9E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 20760);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881baa34
	if (ctx.cr6.eq) goto loc_881BAA34;
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881BA9EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881baa00
	if (ctx.cr6.eq) goto loc_881BAA00;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881baa34
	if (!ctx.cr6.eq) goto loc_881BAA34;
loc_881BAA00:
	// lwz r11,500(r1)
	ctx.current_instruction = 0x881BAA00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881BAA04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881baa2c
	if (ctx.cr6.eq) goto loc_881BAA2C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881baa24
	if (ctx.cr6.eq) goto loc_881BAA24;
	// lwz r11,1820(r27)
	ctx.current_instruction = 0x881BAA1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1820);
	// b 0x881baa30
	goto loc_881BAA30;
loc_881BAA24:
	// lwz r11,1824(r27)
	ctx.current_instruction = 0x881BAA24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1824);
	// b 0x881baa30
	goto loc_881BAA30;
loc_881BAA2C:
	// lwz r11,1816(r27)
	ctx.current_instruction = 0x881BAA2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1816);
loc_881BAA30:
	// stw r11,84(r1)
	ctx.current_instruction = 0x881BAA30;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_881BAA34:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,119
	ctx.r6.s64 = 119;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bge cr6,0x881baa50
	if (!ctx.cr6.lt) goto loc_881BAA50;
	// lwz r5,2096(r27)
	ctx.current_instruction = 0x881BAA48;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 2096);
	// b 0x881baa54
	goto loc_881BAA54;
loc_881BAA50:
	// lwz r5,2100(r27)
	ctx.current_instruction = 0x881BAA50;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 2100);
loc_881BAA54:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c6198
	ctx.lr = 0x881BAA5C;
	sub_881C6198(ctx, base);
loc_881BAA5C:
	// lwz r11,1764(r27)
	ctx.current_instruction = 0x881BAA5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881BAA60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// sth r22,2(r25)
	ctx.current_instruction = 0x881BAA64;
	REX_STORE_U16(ctx.r25.u32 + 2, ctx.r22.u16);
	// sth r10,0(r25)
	ctx.current_instruction = 0x881BAA68;
	REX_STORE_U16(ctx.r25.u32 + 0, ctx.r10.u16);
	// lwz r3,88(r1)
	ctx.current_instruction = 0x881BAA6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881bb740
	if (!ctx.cr6.eq) goto loc_881BB740;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881bb54c
	if (ctx.cr6.eq) goto loc_881BB54C;
	// lwz r10,0(r31)
	ctx.current_instruction = 0x881BAA80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// li r15,3
	ctx.r15.s64 = 3;
	// lwz r11,8(r10)
	ctx.current_instruction = 0x881BAA90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r28,40(r10)
	ctx.current_instruction = 0x881BAA94;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,12(r10)
	ctx.current_instruction = 0x881BAA98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r21,r11,1
	ctx.r21.s64 = ctx.r11.s64 + 1;
	// lwz r8,16(r10)
	ctx.current_instruction = 0x881BAAA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r23,0(r10)
	ctx.current_instruction = 0x881BAAA8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r19,28(r10)
	ctx.current_instruction = 0x881BAAAC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
	// lwz r20,32(r10)
	ctx.current_instruction = 0x881BAAB4;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r14,20(r10)
	ctx.current_instruction = 0x881BAAB8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r16,24(r10)
	ctx.current_instruction = 0x881BAABC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r17,4(r10)
	ctx.current_instruction = 0x881BAAC0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r28,104(r1)
	ctx.current_instruction = 0x881BAAC4;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x881BAAC8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,112(r1)
	ctx.current_instruction = 0x881BAACC;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
loc_881BAAD0:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881BAAD0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x881baae8
	if (!ctx.cr6.eq) goto loc_881BAAE8;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r15,20(r31)
	ctx.current_instruction = 0x881BAAE0;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// b 0x881bac0c
	goto loc_881BAC0C;
loc_881BAAE8:
	// lbz r4,8(r23)
	ctx.current_instruction = 0x881BAAE8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BAAEC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r23)
	ctx.current_instruction = 0x881BAAF4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881BAB04;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881babd4
	if (ctx.cr6.lt) goto loc_881BABD4;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BAB14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881BAB24;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881BAB2C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881babcc
	if (!ctx.cr6.lt) goto loc_881BABCC;
loc_881BAB34:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881BAB34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881BAB38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881bab60
	if (ctx.cr6.lt) goto loc_881BAB60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BAB50;
	sub_88156440(ctx, base);
loc_881BAB50:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881bab34
	if (ctx.cr6.eq) goto loc_881BAB34;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bac0c
	goto loc_881BAC0C;
loc_881BAB60:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881BAB60;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x881BAB68;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881BAB70;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881BAB74;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881BAB7C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881BAB80;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BAB88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881BAB8C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881BAB94;
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
	ctx.current_instruction = 0x881BABB0;
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
	ctx.current_instruction = 0x881BABC8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881BABCC:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bac0c
	goto loc_881BAC0C;
loc_881BABD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BABDC;
	sub_88156500(ctx, base);
loc_881BABDC:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BABDC;
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
	ctx.lr = 0x881BABF4;
	sub_88156500(ctx, base);
loc_881BABF4:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881BABFC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881babdc
	if (ctx.cr6.lt) goto loc_881BABDC;
loc_881BAC0C:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881BAC0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.current_instruction = 0x881BAC14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r31,r17
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r17.s32, ctx.xer);
	// bgt cr6,0x881bb540
	if (ctx.cr6.gt) goto loc_881BB540;
	// beq cr6,0x881bac8c
	if (ctx.cr6.eq) goto loc_881BAC8C;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x881bb540
	if (!ctx.cr6.lt) goto loc_881BB540;
	// subfc r11,r21,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r21.u32;
	ctx.r11.u64 = ctx.r31.u64 - ctx.r21.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BAC3C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,8(r3)
	ctx.current_instruction = 0x881BAC44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r7,r10,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lbzx r28,r31,r20
	ctx.current_instruction = 0x881BAC4C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r20.u32);
	// subfze r24,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	ctx.r24.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r7,0(r3)
	ctx.current_instruction = 0x881BAC58;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BAC60;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bac6c
	if (!ctx.cr0.lt) goto loc_881BAC6C;
	// bl 0x88156678
	ctx.lr = 0x881BAC6C;
	sub_88156678(ctx, base);
loc_881BAC6C:
	// lbzx r11,r31,r19
	ctx.current_instruction = 0x881BAC6C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r19.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881bac84
	if (ctx.cr6.eq) goto loc_881BAC84;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// neg r31,r10
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BAC84:
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BAC8C:
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BAC8C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BAC90;
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
	ctx.current_instruction = 0x881BACA0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BACA4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bacb0
	if (!ctx.cr0.lt) goto loc_881BACB0;
	// bl 0x88156678
	ctx.lr = 0x881BACB0;
	sub_88156678(ctx, base);
loc_881BACB0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881bae8c
	if (ctx.cr6.eq) goto loc_881BAE8C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881BACB8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881BACBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x881bacdc
	if (!ctx.cr6.eq) goto loc_881BACDC;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r15,20(r31)
	ctx.current_instruction = 0x881BACD4;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// b 0x881bae00
	goto loc_881BAE00;
loc_881BACDC:
	// lbz r4,8(r23)
	ctx.current_instruction = 0x881BACDC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BACE0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r23)
	ctx.current_instruction = 0x881BACE8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881BACF8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881badc8
	if (ctx.cr6.lt) goto loc_881BADC8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BAD08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881BAD18;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881BAD20;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881badc0
	if (!ctx.cr6.lt) goto loc_881BADC0;
loc_881BAD28:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881BAD28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881BAD2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881bad54
	if (ctx.cr6.lt) goto loc_881BAD54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BAD44;
	sub_88156440(ctx, base);
loc_881BAD44:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881bad28
	if (ctx.cr6.eq) goto loc_881BAD28;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bae00
	goto loc_881BAE00;
loc_881BAD54:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881BAD54;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881BAD5C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881BAD64;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881BAD68;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881BAD70;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881BAD74;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BAD7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881BAD80;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881BAD88;
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
	ctx.current_instruction = 0x881BADA4;
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
	ctx.current_instruction = 0x881BADBC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881BADC0:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bae00
	goto loc_881BAE00;
loc_881BADC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BADD0;
	sub_88156500(ctx, base);
loc_881BADD0:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BADD0;
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
	ctx.lr = 0x881BADE8;
	sub_88156500(ctx, base);
loc_881BADE8:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881BADF0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881badd0
	if (ctx.cr6.lt) goto loc_881BADD0;
loc_881BAE00:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881BAE00;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.current_instruction = 0x881BAE08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// beq cr6,0x881bb540
	if (ctx.cr6.eq) goto loc_881BB540;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x881bb540
	if (!ctx.cr6.lt) goto loc_881BB540;
	// lbzx r10,r11,r19
	ctx.current_instruction = 0x881BAE28;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// lbzx r28,r11,r20
	ctx.current_instruction = 0x881BAE30;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// blt cr6,0x881bae48
	if (ctx.cr6.lt) goto loc_881BAE48;
	// lwz r10,112(r1)
	ctx.current_instruction = 0x881BAE3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x881bae4c
	goto loc_881BAE4C;
loc_881BAE48:
	// lwz r10,92(r1)
	ctx.current_instruction = 0x881BAE48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_881BAE4C:
	// lbzx r9,r28,r10
	ctx.current_instruction = 0x881BAE4C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BAE54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BAE5C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BAE6C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r8,0(r3)
	ctx.current_instruction = 0x881BAE70;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge 0x881bae7c
	if (!ctx.cr0.lt) goto loc_881BAE7C;
	// bl 0x88156678
	ctx.lr = 0x881BAE7C;
	sub_88156678(ctx, base);
loc_881BAE7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881bb4dc
	if (ctx.cr6.eq) goto loc_881BB4DC;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BAE8C:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881BAE8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BAE90;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BAE94;
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
	ctx.current_instruction = 0x881BAEA4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BAEA8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881baeb4
	if (!ctx.cr0.lt) goto loc_881BAEB4;
	// bl 0x88156678
	ctx.lr = 0x881BAEB4;
	sub_88156678(ctx, base);
loc_881BAEB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x881bb090
	if (ctx.cr6.eq) goto loc_881BB090;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881BAEBC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881BAEC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x881baee0
	if (!ctx.cr6.eq) goto loc_881BAEE0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r15,20(r31)
	ctx.current_instruction = 0x881BAED8;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// b 0x881bb004
	goto loc_881BB004;
loc_881BAEE0:
	// lbz r4,8(r23)
	ctx.current_instruction = 0x881BAEE0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BAEE4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r23)
	ctx.current_instruction = 0x881BAEEC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x881BAEFC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bafcc
	if (ctx.cr6.lt) goto loc_881BAFCC;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BAF0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881BAF1C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881BAF24;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881bafc4
	if (!ctx.cr6.lt) goto loc_881BAFC4;
loc_881BAF2C:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881BAF2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881BAF30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881baf58
	if (ctx.cr6.lt) goto loc_881BAF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881BAF48;
	sub_88156440(ctx, base);
loc_881BAF48:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881baf2c
	if (ctx.cr6.eq) goto loc_881BAF2C;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bb004
	goto loc_881BB004;
loc_881BAF58:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881BAF58;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881BAF60;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881BAF68;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881BAF6C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881BAF74;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881BAF78;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BAF80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881BAF84;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881BAF8C;
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
	ctx.current_instruction = 0x881BAFA8;
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
	ctx.current_instruction = 0x881BAFC0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881BAFC4:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881bb004
	goto loc_881BB004;
loc_881BAFCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881BAFD4;
	sub_88156500(ctx, base);
loc_881BAFD4:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881BAFD4;
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
	ctx.lr = 0x881BAFEC;
	sub_88156500(ctx, base);
loc_881BAFEC:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x881BAFF4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881bafd4
	if (ctx.cr6.lt) goto loc_881BAFD4;
loc_881BB004:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881BB004;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.current_instruction = 0x881BB00C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// beq cr6,0x881bb540
	if (ctx.cr6.eq) goto loc_881BB540;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x881bb540
	if (!ctx.cr6.lt) goto loc_881BB540;
	// lbzx r10,r11,r19
	ctx.current_instruction = 0x881BB02C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// lbzx r11,r11,r20
	ctx.current_instruction = 0x881BB034;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// lwz r9,1936(r27)
	ctx.current_instruction = 0x881BB038;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1936);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// blt cr6,0x881bb050
	if (ctx.cr6.lt) goto loc_881BB050;
	// lbzx r10,r31,r16
	ctx.current_instruction = 0x881BB044;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r16.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x881bb054
	goto loc_881BB054;
loc_881BB050:
	// lbzx r10,r31,r14
	ctx.current_instruction = 0x881BB050;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r14.u32);
loc_881BB054:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BB058;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BB060;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BB070;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r8,0(r3)
	ctx.current_instruction = 0x881BB074;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge 0x881bb080
	if (!ctx.cr0.lt) goto loc_881BB080;
	// bl 0x88156678
	ctx.lr = 0x881BB080;
	sub_88156678(ctx, base);
loc_881BB080:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881bb4dc
	if (ctx.cr6.eq) goto loc_881BB4DC;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB090:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881BB090;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BB094;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BB098;
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
	ctx.current_instruction = 0x881BB0A8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BB0AC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bb0b8
	if (!ctx.cr0.lt) goto loc_881BB0B8;
	// bl 0x88156678
	ctx.lr = 0x881BB0B8;
	sub_88156678(ctx, base);
loc_881BB0B8:
	// lwz r11,15536(r27)
	ctx.current_instruction = 0x881BB0B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x881bb37c
	if (ctx.cr6.lt) goto loc_881BB37C;
	// lwz r11,1948(r27)
	ctx.current_instruction = 0x881BB0C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881bb0e0
	if (ctx.cr6.eq) goto loc_881BB0E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881b8060
	ctx.lr = 0x881BB0DC;
	sub_881B8060(ctx, base);
loc_881BB0DC:
	// stw r22,1948(r27)
	ctx.current_instruction = 0x881BB0DC;
	REX_STORE_U32(ctx.r27.u32 + 1948, ctx.r22.u32);
loc_881BB0E0:
	// lwz r30,84(r27)
	ctx.current_instruction = 0x881BB0E0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r31,1956(r27)
	ctx.current_instruction = 0x881BB0E8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 1956);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BB0F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881bb104
	if (!ctx.cr6.gt) goto loc_881BB104;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x881bb1b0
	goto loc_881BB1B0;
loc_881BB104:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bb114
	if (!ctx.cr6.eq) goto loc_881BB114;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x881bb1b0
	goto loc_881BB1B0;
loc_881BB114:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bb174
	if (!ctx.cr6.gt) goto loc_881BB174;
loc_881BB11C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb174
	if (ctx.cr6.eq) goto loc_881BB174;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881BB128;
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
	ctx.current_instruction = 0x881BB14C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881BB154;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bb164
	if (!ctx.cr0.lt) goto loc_881BB164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB164;
	sub_88156678(ctx, base);
loc_881BB164:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BB164;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bb11c
	if (ctx.cr6.gt) goto loc_881BB11C;
loc_881BB174:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881BB178;
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
	ctx.current_instruction = 0x881BB190;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881BB19C;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bb1ac
	if (!ctx.cr0.lt) goto loc_881BB1AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB1AC;
	sub_88156678(ctx, base);
loc_881BB1AC:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_881BB1B0:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x881BB1B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BB1B4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BB1B8;
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
	ctx.current_instruction = 0x881BB1C8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BB1CC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881bb1d8
	if (!ctx.cr0.lt) goto loc_881BB1D8;
	// bl 0x88156678
	ctx.lr = 0x881BB1D8;
	sub_88156678(ctx, base);
loc_881BB1D8:
	// lwz r30,84(r27)
	ctx.current_instruction = 0x881BB1D8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r31,1952(r27)
	ctx.current_instruction = 0x881BB1E0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 1952);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BB1E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881bb2c0
	if (ctx.cr6.eq) goto loc_881BB2C0;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881bb208
	if (!ctx.cr6.gt) goto loc_881BB208;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// neg r31,r22
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB208:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bb21c
	if (!ctx.cr6.eq) goto loc_881BB21C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// neg r31,r22
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB21C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bb27c
	if (!ctx.cr6.gt) goto loc_881BB27C;
loc_881BB224:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb27c
	if (ctx.cr6.eq) goto loc_881BB27C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881BB230;
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
	ctx.current_instruction = 0x881BB254;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881BB25C;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bb26c
	if (!ctx.cr0.lt) goto loc_881BB26C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB26C;
	sub_88156678(ctx, base);
loc_881BB26C:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BB26C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bb224
	if (ctx.cr6.gt) goto loc_881BB224;
loc_881BB27C:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881BB280;
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
	ctx.current_instruction = 0x881BB298;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881BB2A4;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bb2b4
	if (!ctx.cr0.lt) goto loc_881BB2B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB2B4;
	sub_88156678(ctx, base);
loc_881BB2B4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB2C0:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x881bb2d0
	if (!ctx.cr6.gt) goto loc_881BB2D0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB2D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881bb2e0
	if (!ctx.cr6.eq) goto loc_881BB2E0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB2E0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881bb340
	if (!ctx.cr6.gt) goto loc_881BB340;
loc_881BB2E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb340
	if (ctx.cr6.eq) goto loc_881BB340;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881BB2F4;
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
	ctx.current_instruction = 0x881BB318;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881BB320;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881bb330
	if (!ctx.cr0.lt) goto loc_881BB330;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB330;
	sub_88156678(ctx, base);
loc_881BB330:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881BB330;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bb2e8
	if (ctx.cr6.gt) goto loc_881BB2E8;
loc_881BB340:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881BB344;
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
	ctx.current_instruction = 0x881BB35C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881BB368;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881bb4dc
	if (!ctx.cr0.lt) goto loc_881BB4DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB378;
	sub_88156678(ctx, base);
loc_881BB378:
	// b 0x881bb4dc
	goto loc_881BB4DC;
loc_881BB37C:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881BB37C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,6
	ctx.r30.s64 = 6;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BB388;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881bb3f0
	if (!ctx.cr6.lt) goto loc_881BB3F0;
loc_881BB398:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb3f0
	if (ctx.cr6.eq) goto loc_881BB3F0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881BB3A4;
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
	ctx.current_instruction = 0x881BB3C8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881BB3D0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881bb3e0
	if (!ctx.cr0.lt) goto loc_881BB3E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB3E0;
	sub_88156678(ctx, base);
loc_881BB3E0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BB3E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bb398
	if (ctx.cr6.gt) goto loc_881BB398;
loc_881BB3F0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881BB3F4;
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
	ctx.current_instruction = 0x881BB40C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881BB418;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881bb428
	if (!ctx.cr0.lt) goto loc_881BB428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB428;
	sub_88156678(ctx, base);
loc_881BB428:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881BB428;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r30,8
	ctx.r30.s64 = 8;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BB438;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x881bb4a0
	if (!ctx.cr6.lt) goto loc_881BB4A0;
loc_881BB448:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb4a0
	if (ctx.cr6.eq) goto loc_881BB4A0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881BB454;
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
	ctx.current_instruction = 0x881BB478;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881BB480;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881bb490
	if (!ctx.cr0.lt) goto loc_881BB490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB490;
	sub_88156678(ctx, base);
loc_881BB490:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881BB490;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881bb448
	if (ctx.cr6.gt) goto loc_881BB448;
loc_881BB4A0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881BB4A4;
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
	ctx.current_instruction = 0x881BB4BC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881BB4C8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881bb4d8
	if (!ctx.cr0.lt) goto loc_881BB4D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881BB4D8;
	sub_88156678(ctx, base);
loc_881BB4D8:
	// extsb r31,r30
	ctx.r31.s64 = ctx.r30.s8;
loc_881BB4DC:
	// lwz r11,84(r27)
	ctx.current_instruction = 0x881BB4DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881BB4E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881bb540
	if (!ctx.cr6.eq) goto loc_881BB540;
	// add r10,r28,r18
	ctx.r10.u64 = ctx.r28.u64 + ctx.r18.u64;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bge cr6,0x881bb540
	if (!ctx.cr6.lt) goto loc_881BB540;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x881bb540
	if (ctx.cr6.eq) goto loc_881BB540;
	// lwz r9,84(r1)
	ctx.current_instruction = 0x881BB500;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lhz r7,80(r1)
	ctx.current_instruction = 0x881BB508;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r18,r10,1
	ctx.r18.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lbzx r5,r10,r9
	ctx.current_instruction = 0x881BB518;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// sth r3,80(r1)
	ctx.current_instruction = 0x881BB528;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// sthx r5,r4,r8
	ctx.current_instruction = 0x881BB52C;
	REX_STORE_U16(ctx.r4.u32 + ctx.r8.u32, ctx.r5.u16);
	// sthx r31,r9,r25
	ctx.current_instruction = 0x881BB530;
	REX_STORE_U16(ctx.r9.u32 + ctx.r25.u32, ctx.r31.u16);
	// bne cr6,0x881bb54c
	if (!ctx.cr6.eq) goto loc_881BB54C;
	// lwz r28,104(r1)
	ctx.current_instruction = 0x881BB538;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x881baad0
	goto loc_881BAAD0;
loc_881BB540:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BB54C:
	// lwz r10,468(r1)
	ctx.current_instruction = 0x881BB54C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881bb610
	if (ctx.cr6.eq) goto loc_881BB610;
	// lwz r11,476(r1)
	ctx.current_instruction = 0x881BB558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881bb56c
	if (ctx.cr6.eq) goto loc_881BB56C;
	// lwz r11,1924(r27)
	ctx.current_instruction = 0x881BB564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1924);
	// b 0x881bb570
	goto loc_881BB570;
loc_881BB56C:
	// lwz r11,1920(r27)
	ctx.current_instruction = 0x881BB56C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1920);
loc_881BB570:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,484(r1)
	ctx.current_instruction = 0x881BB574;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,0(r25)
	ctx.current_instruction = 0x881BB57C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lhz r9,0(r11)
	ctx.current_instruction = 0x881BB584;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r8,0(r25)
	ctx.current_instruction = 0x881BB58C;
	REX_STORE_U16(ctx.r25.u32 + 0, ctx.r8.u16);
	// beq cr6,0x881bb610
	if (ctx.cr6.eq) goto loc_881BB610;
	// li r10,7
	ctx.r10.s64 = 7;
	// lhz r6,80(r1)
	ctx.current_instruction = 0x881BB598;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881BB5A8:
	// slw r9,r7,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r25
	ctx.current_instruction = 0x881BB5B0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881bb5d8
	if (ctx.cr6.eq) goto loc_881BB5D8;
	// lhz r9,0(r8)
	ctx.current_instruction = 0x881BB5BC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sthx r3,r10,r25
	ctx.current_instruction = 0x881BB5D0;
	REX_STORE_U16(ctx.r10.u32 + ctx.r25.u32, ctx.r3.u16);
	// b 0x881bb600
	goto loc_881BB600;
loc_881BB5D8:
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// lhz r9,0(r8)
	ctx.current_instruction = 0x881BB5DC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// sthx r10,r4,r3
	ctx.current_instruction = 0x881BB5F8;
	REX_STORE_U16(ctx.r4.u32 + ctx.r3.u32, ctx.r10.u16);
	// sthx r9,r31,r25
	ctx.current_instruction = 0x881BB5FC;
	REX_STORE_U16(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u16);
loc_881BB600:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bdnz 0x881bb5a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BB5A8;
	// b 0x881bb614
	goto loc_881BB614;
loc_881BB610:
	// lhz r6,80(r1)
	ctx.current_instruction = 0x881BB610;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_881BB614:
	// lhz r9,0(r25)
	ctx.current_instruction = 0x881BB614;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r10,492(r1)
	ctx.current_instruction = 0x881BB61C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r8,96(r1)
	ctx.current_instruction = 0x881BB620;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r9,0(r10)
	ctx.current_instruction = 0x881BB628;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r25)
	ctx.current_instruction = 0x881BB62C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// sth r7,16(r10)
	ctx.current_instruction = 0x881BB630;
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r7.u16);
	// lhz r6,2(r25)
	ctx.current_instruction = 0x881BB634;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r25.u32 + 2);
	// sth r6,2(r10)
	ctx.current_instruction = 0x881BB638;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// lhz r5,16(r25)
	ctx.current_instruction = 0x881BB63C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 16);
	// sth r5,18(r10)
	ctx.current_instruction = 0x881BB640;
	REX_STORE_U16(ctx.r10.u32 + 18, ctx.r5.u16);
	// lhz r4,4(r25)
	ctx.current_instruction = 0x881BB644;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 4);
	// sth r4,4(r10)
	ctx.current_instruction = 0x881BB648;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// lhz r3,32(r25)
	ctx.current_instruction = 0x881BB64C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r25.u32 + 32);
	// sth r3,20(r10)
	ctx.current_instruction = 0x881BB650;
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r3.u16);
	// lhz r9,6(r25)
	ctx.current_instruction = 0x881BB654;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 6);
	// sth r9,6(r10)
	ctx.current_instruction = 0x881BB658;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r9.u16);
	// lhz r7,48(r25)
	ctx.current_instruction = 0x881BB65C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 48);
	// sth r7,22(r10)
	ctx.current_instruction = 0x881BB660;
	REX_STORE_U16(ctx.r10.u32 + 22, ctx.r7.u16);
	// lhz r6,8(r25)
	ctx.current_instruction = 0x881BB664;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r25.u32 + 8);
	// sth r6,8(r10)
	ctx.current_instruction = 0x881BB668;
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r6.u16);
	// lhz r5,64(r25)
	ctx.current_instruction = 0x881BB66C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 64);
	// sth r5,24(r10)
	ctx.current_instruction = 0x881BB670;
	REX_STORE_U16(ctx.r10.u32 + 24, ctx.r5.u16);
	// lhz r4,10(r25)
	ctx.current_instruction = 0x881BB674;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 10);
	// sth r4,10(r10)
	ctx.current_instruction = 0x881BB678;
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r4.u16);
	// lhz r3,80(r25)
	ctx.current_instruction = 0x881BB67C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r25.u32 + 80);
	// sth r3,26(r10)
	ctx.current_instruction = 0x881BB680;
	REX_STORE_U16(ctx.r10.u32 + 26, ctx.r3.u16);
	// lhz r9,12(r25)
	ctx.current_instruction = 0x881BB684;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + 12);
	// sth r9,12(r10)
	ctx.current_instruction = 0x881BB688;
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r9.u16);
	// lhz r7,96(r25)
	ctx.current_instruction = 0x881BB68C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + 96);
	// sth r7,28(r10)
	ctx.current_instruction = 0x881BB690;
	REX_STORE_U16(ctx.r10.u32 + 28, ctx.r7.u16);
	// lhz r6,14(r25)
	ctx.current_instruction = 0x881BB694;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r25.u32 + 14);
	// sth r6,14(r10)
	ctx.current_instruction = 0x881BB698;
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r6.u16);
	// lhz r5,112(r25)
	ctx.current_instruction = 0x881BB69C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 112);
	// sth r5,30(r10)
	ctx.current_instruction = 0x881BB6A0;
	REX_STORE_U16(ctx.r10.u32 + 30, ctx.r5.u16);
	// lhz r4,0(r25)
	ctx.current_instruction = 0x881BB6A4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// sth r10,0(r25)
	ctx.current_instruction = 0x881BB6B0;
	REX_STORE_U16(ctx.r25.u32 + 0, ctx.r10.u16);
	// ble cr6,0x881bb718
	if (!ctx.cr6.gt) goto loc_881BB718;
	// lwz r9,100(r1)
	ctx.current_instruction = 0x881BB6B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r5,108(r1)
	ctx.current_instruction = 0x881BB6C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
loc_881BB6D0:
	// lhzu r11,2(r9)
	ctx.current_instruction = 0x881BB6D0;
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r25
	ctx.current_instruction = 0x881BB6E0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r25.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// srawi r11,r3,15
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 15;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// xor r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// subfic r4,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r4,r11,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r11.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// sthx r11,r10,r25
	ctx.current_instruction = 0x881BB710;
	REX_STORE_U16(ctx.r10.u32 + ctx.r25.u32, ctx.r11.u16);
	// bdnz 0x881bb6d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BB6D0;
loc_881BB718:
	// li r11,255
	ctx.r11.s64 = 255;
	// lwz r10,3216(r27)
	ctx.current_instruction = 0x881BB71C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 3216);
	// lwz r4,516(r1)
	ctx.current_instruction = 0x881BB720;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r11,1944(r27)
	ctx.current_instruction = 0x881BB728;
	REX_STORE_U32(ctx.r27.u32 + 1944, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,524(r1)
	ctx.current_instruction = 0x881BB730;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881BB73C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BB73C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881BB740:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E2A00) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881E2A00);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E2A00;
	ctx.current_instruction = 0x881E2A00;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// li r7,255
	ctx.r7.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E2A14:
	// lhz r10,-4(r8)
	ctx.current_instruction = 0x881E2A14;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + -4);
	// lbz r9,-2(r11)
	ctx.current_instruction = 0x881E2A18;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// ble cr6,0x881e2a40
	if (!ctx.cr6.gt) goto loc_881E2A40;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
loc_881E2A40:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbz r10,-1(r11)
	ctx.current_instruction = 0x881E2A44;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// stb r9,-2(r11)
	ctx.current_instruction = 0x881E2A48;
	REX_STORE_U8(ctx.r11.u32 + -2, ctx.r9.u8);
	// lhz r9,-2(r8)
	ctx.current_instruction = 0x881E2A4C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// ble cr6,0x881e2a74
	if (!ctx.cr6.gt) goto loc_881E2A74;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
loc_881E2A74:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881E2A78;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,-1(r11)
	ctx.current_instruction = 0x881E2A7C;
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// lhz r9,0(r8)
	ctx.current_instruction = 0x881E2A80;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// ble cr6,0x881e2aa8
	if (!ctx.cr6.gt) goto loc_881E2AA8;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
loc_881E2AA8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881E2AAC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,0(r11)
	ctx.current_instruction = 0x881E2AB0;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lhz r9,2(r8)
	ctx.current_instruction = 0x881E2AB4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// ble cr6,0x881e2adc
	if (!ctx.cr6.gt) goto loc_881E2ADC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
loc_881E2ADC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stb r10,1(r11)
	ctx.current_instruction = 0x881E2AE4;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bdnz 0x881e2a14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E2A14;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881E7848) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E7848;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E7848) {
			switch (rex_dispatch_address) {
				case 0x881E7850:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E7848;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E7850: goto loc_881E7850;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881E7850;
	__savegprlr_14(ctx, base);
loc_881E7850:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881E7850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r21,r5,r7
	ctx.r21.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r8,60(r1)
	ctx.current_instruction = 0x881E7858;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,68(r1)
	ctx.current_instruction = 0x881E7860;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r15,100(r1)
	ctx.current_instruction = 0x881E7868;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881e7a88
	if (!ctx.cr6.lt) goto loc_881E7A88;
	// subf r25,r11,r10
	ctx.r25.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r20,132(r1)
	ctx.current_instruction = 0x881E7888;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r14,124(r1)
	ctx.current_instruction = 0x881E788C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r25,-160(r1)
	ctx.current_instruction = 0x881E7890;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r25.u32);
loc_881E7894:
	// srawi r11,r15,8
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 8;
	// clrlwi r18,r15,24
	ctx.r18.u64 = ctx.r15.u32 & 0xFF;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r22,r11,r3
	ctx.r22.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 + ctx.r8.u64;
	// subfic r17,r18,256
	ctx.xer.ca = ctx.r18.u32 <= 256;
	ctx.r17.u64 = static_cast<uint64_t>(256) - ctx.r18.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r22,r29
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x881e7950
	if (!ctx.cr6.eq) goto loc_881E7950;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881e791c
	if (!ctx.cr6.gt) goto loc_881E791C;
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r31,r20,-4
	ctx.r31.s64 = ctx.r20.s64 + -4;
	// subf r27,r26,r14
	ctx.r27.u64 = ctx.r14.u64 - ctx.r26.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
loc_881E78E8:
	// lwzu r10,4(r31)
	ctx.current_instruction = 0x881E78E8;
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lbzx r24,r27,r11
	ctx.current_instruction = 0x881E78EC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// subfic r29,r24,128
	ctx.xer.ca = ctx.r24.u32 <= 128;
	ctx.r29.u64 = static_cast<uint64_t>(128) - ctx.r24.u64;
	// lbzx r23,r10,r30
	ctx.current_instruction = 0x881E78F4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// lbzx r10,r28,r10
	ctx.current_instruction = 0x881E78F8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// mullw r29,r23,r29
	ctx.r29.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r29.s32);
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// srawi r10,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r11)
	ctx.current_instruction = 0x881E7910;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e78e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E78E8;
loc_881E791C:
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e7a24
	if (!ctx.cr6.lt) goto loc_881E7A24;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881E7938:
	// lwzu r10,4(r11)
	ctx.current_instruction = 0x881E7938;
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lbzx r10,r10,r30
	ctx.current_instruction = 0x881E793C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// stbx r10,r4,r26
	ctx.current_instruction = 0x881E7940;
	REX_STORE_U8(ctx.r4.u32 + ctx.r26.u32, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x881e7938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7938;
	// b 0x881e7a24
	goto loc_881E7A24;
loc_881E7950:
	// cmplw cr6,r22,r28
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x881e7a24
	if (ctx.cr6.eq) goto loc_881E7A24;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881e79e4
	if (!ctx.cr6.gt) goto loc_881E79E4;
	// addi r27,r22,1
	ctx.r27.s64 = ctx.r22.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 1;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r31,r20,-4
	ctx.r31.s64 = ctx.r20.s64 + -4;
	// subf r25,r5,r14
	ctx.r25.u64 = ctx.r14.u64 - ctx.r5.u64;
	// subf r24,r5,r21
	ctx.r24.u64 = ctx.r21.u64 - ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
loc_881E798C:
	// lwzu r10,4(r31)
	ctx.current_instruction = 0x881E798C;
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lbzx r8,r25,r11
	ctx.current_instruction = 0x881E7990;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// subfic r4,r8,128
	ctx.xer.ca = ctx.r8.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r8.u64;
	// lbzx r29,r27,r10
	ctx.current_instruction = 0x881E7998;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// lbzx r28,r10,r22
	ctx.current_instruction = 0x881E799C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r22.u32);
	// mullw r29,r29,r8
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r4
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// srawi r29,r29,7
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7F) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 7;
	// stb r29,0(r11)
	ctx.current_instruction = 0x881E79B0;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lbzx r29,r26,r10
	ctx.current_instruction = 0x881E79B4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// lbzx r10,r10,r30
	ctx.current_instruction = 0x881E79B8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// mullw r4,r10,r4
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r29,r8
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// srawi r4,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 7;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stbx r10,r24,r11
	ctx.current_instruction = 0x881E79D0;
	REX_STORE_U8(ctx.r24.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e798c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E798C;
	// lwz r8,68(r1)
	ctx.current_instruction = 0x881E79DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r25,-160(r1)
	ctx.current_instruction = 0x881E79E0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
loc_881E79E4:
	// cmpw cr6,r23,r7
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881e7a24
	if (!ctx.cr6.lt) goto loc_881E7A24;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r23,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r23.u64;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r11,r23,r21
	ctx.r11.u64 = ctx.r23.u64 + ctx.r21.u64;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// subf r31,r21,r5
	ctx.r31.u64 = ctx.r5.u64 - ctx.r21.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_881E7A08:
	// lwzu r10,4(r4)
	ctx.current_instruction = 0x881E7A08;
	ea = 4 + ctx.r4.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// lbzx r29,r10,r22
	ctx.current_instruction = 0x881E7A0C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r22.u32);
	// stbx r29,r31,r11
	ctx.current_instruction = 0x881E7A10;
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u8);
	// lbzx r10,r10,r30
	ctx.current_instruction = 0x881E7A14;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// stb r10,0(r11)
	ctx.current_instruction = 0x881E7A18;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e7a08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7A08;
loc_881E7A24:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881e7a6c
	if (!ctx.cr6.gt) goto loc_881E7A6C;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r31,r19,r16
	ctx.r31.u64 = ctx.r16.u64 - ctx.r19.u64;
	// subf r30,r19,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r19.u64;
loc_881E7A44:
	// lbzx r10,r31,r11
	ctx.current_instruction = 0x881E7A44;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbz r4,0(r11)
	ctx.current_instruction = 0x881E7A48;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r10,r10,r17
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r17.s32);
	// mullw r4,r4,r18
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r18.s32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stbx r10,r30,r11
	ctx.current_instruction = 0x881E7A60;
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881e7a44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E7A44;
loc_881E7A6C:
	// lwz r11,60(r1)
	ctx.current_instruction = 0x881E7A6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r10,108(r1)
	ctx.current_instruction = 0x881E7A74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r25,-160(r1)
	ctx.current_instruction = 0x881E7A78;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r25.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r15,r15,r10
	ctx.r15.u64 = ctx.r15.u64 + ctx.r10.u64;
	// bne 0x881e7894
	if (!ctx.cr0.eq) goto loc_881E7894;
loc_881E7A88:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EBC14) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EBC14;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EBC14) {
			switch (rex_dispatch_address) {
				case 0x881EBC68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EBC14;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EBC68: goto loc_881EBC68;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881EBC14;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881EBC1C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r26,-24(r1)
	ctx.current_instruction = 0x881EBC20;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r26.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	ctx.current_instruction = 0x881EBC28;
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881EBC2C;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,100(r31)
	ctx.current_instruction = 0x881EBC30;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r26,84(r31)
	ctx.current_instruction = 0x881EBC34;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x881ebc58
	goto loc_881EBC58;
loc_881EBC58:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x881ebc68
	if (ctx.cr6.eq) goto loc_881EBC68;
	// lwz r3,1408(r30)
	ctx.current_instruction = 0x881EBC60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x88243660
	ctx.lr = 0x881EBC68;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_881EBC68:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881EBC68;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881EBC6C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881EBC70;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r26,-24(r1)
	ctx.current_instruction = 0x881EBC74;
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.current_instruction = 0x881EBC78;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EC5B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EC5B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EC5B8) {
			switch (rex_dispatch_address) {
				case 0x881EC5CC:
				case 0x881EC5D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC5B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EC5CC: goto loc_881EC5CC;
		case 0x881EC5D8: goto loc_881EC5D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EC5BC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881EC5C0;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x882437a0
	ctx.lr = 0x881EC5CC;
	__imp__NtResumeThread(ctx, base);
loc_881EC5CC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x881ec5e0
	if (!ctx.cr0.lt) goto loc_881EC5E0;
	// bl 0x881ed488
	ctx.lr = 0x881EC5D8;
	sub_881ED488(ctx, base);
loc_881EC5D8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881ec5e4
	goto loc_881EC5E4;
loc_881EC5E0:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x881EC5E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881EC5E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EC5E8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881EC978) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EC978;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EC978) {
			switch (rex_dispatch_address) {
				case 0x881EC980:
				case 0x881EC9D8:
				case 0x881ECA08:
				case 0x881ECADC:
				case 0x881ECAEC:
				case 0x881ECB28:
				case 0x881ECB60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC978;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EC980: goto loc_881EC980;
		case 0x881EC9D8: goto loc_881EC9D8;
		case 0x881ECA08: goto loc_881ECA08;
		case 0x881ECADC: goto loc_881ECADC;
		case 0x881ECAEC: goto loc_881ECAEC;
		case 0x881ECB28: goto loc_881ECB28;
		case 0x881ECB60: goto loc_881ECB60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881EC980;
	__savegprlr_26(ctx, base);
loc_881EC980:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x881EC980;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x881ec9f8
	if (ctx.cr6.eq) goto loc_881EC9F8;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x881ec9f0
	if (ctx.cr6.eq) goto loc_881EC9F0;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// beq cr6,0x881ec9e8
	if (ctx.cr6.eq) goto loc_881EC9E8;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x881ec9e0
	if (ctx.cr6.eq) goto loc_881EC9E0;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bne cr6,0x881ec9cc
	if (!ctx.cr6.eq) goto loc_881EC9CC;
	// rlwinm. r11,r4,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,4
	ctx.r30.s64 = 4;
	// bne 0x881ec9fc
	if (!ctx.cr0.eq) goto loc_881EC9FC;
loc_881EC9CC:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x881ed488
	ctx.lr = 0x881EC9D8;
	sub_881ED488(ctx, base);
loc_881EC9D8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881ecb64
	goto loc_881ECB64;
loc_881EC9E0:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x881ec9fc
	goto loc_881EC9FC;
loc_881EC9E8:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x881ec9fc
	goto loc_881EC9FC;
loc_881EC9F0:
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x881ec9fc
	goto loc_881EC9FC;
loc_881EC9F8:
	// li r30,2
	ctx.r30.s64 = 2;
loc_881EC9FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x88243710
	ctx.lr = 0x881ECA08;
	__imp__RtlInitAnsiString(ctx, base);
loc_881ECA08:
	// lhz r11,104(r1)
	ctx.current_instruction = 0x881ECA08;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x881eca28
	if (!ctx.cr6.gt) goto loc_881ECA28;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,-1(r11)
	ctx.current_instruction = 0x881ECA1C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x881eca2c
	if (ctx.cr6.eq) goto loc_881ECA2C;
loc_881ECA28:
	// li r29,0
	ctx.r29.s64 = 0;
loc_881ECA2C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm r9,r31,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000000;
	// rlwimi r11,r31,28,4,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwinm r8,r31,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000000;
	// rlwinm r11,r11,31,3,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1C000000;
	// rlwinm r10,r31,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000000;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// li r7,-3
	ctx.r7.s64 = -3;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// not r9,r31
	ctx.r9.u64 = ~ctx.r31.u64;
	// stw r7,120(r1)
	ctx.current_instruction = 0x881ECA54;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,7,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x20;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r6,128(r1)
	ctx.current_instruction = 0x881ECA70;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r8,r31,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,124(r1)
	ctx.current_instruction = 0x881ECA7C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// beq 0x881eca94
	if (ctx.cr0.eq) goto loc_881ECA94;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// oris r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 65536;
loc_881ECA94:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881ecaa0
	if (!ctx.cr6.eq) goto loc_881ECAA0;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_881ECAA0:
	// stw r11,84(r1)
	ctx.current_instruction = 0x881ECAA0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r6,-30680
	ctx.r6.s64 = -2010644480;
	// oris r4,r28,16
	ctx.r4.u64 = ctx.r28.u64 | 1048576;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// andi. r8,r31,32679
	ctx.r8.u64 = ctx.r31.u64 & 32679;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,15376(r6)
	ctx.current_instruction = 0x881ECAB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 15376);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.current_instruction = 0x881ECAD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881ECADC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881ECADC:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x881ecb2c
	if (!ctx.cr0.lt) goto loc_881ECB2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ed488
	ctx.lr = 0x881ECAEC;
	sub_881ED488(ctx, base);
loc_881ECAEC:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,53
	ctx.r11.u64 = ctx.r11.u64 | 53;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x881ecb04
	if (!ctx.cr6.eq) goto loc_881ECB04;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x881ecb24
	goto loc_881ECB24;
loc_881ECB04:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,186
	ctx.r11.u64 = ctx.r11.u64 | 186;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x881ec9d8
	if (!ctx.cr6.eq) goto loc_881EC9D8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne cr6,0x881ecb24
	if (!ctx.cr6.eq) goto loc_881ECB24;
	// li r3,5
	ctx.r3.s64 = 5;
loc_881ECB24:
	// bl 0x881e9018
	ctx.lr = 0x881ECB28;
	sub_881E9018(ctx, base);
loc_881ECB28:
	// b 0x881ec9d8
	goto loc_881EC9D8;
loc_881ECB2C:
	// lwz r11,116(r1)
	ctx.current_instruction = 0x881ECB2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bne cr6,0x881ecb40
	if (!ctx.cr6.eq) goto loc_881ECB40;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x881ecb50
	if (ctx.cr6.eq) goto loc_881ECB50;
loc_881ECB40:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bne cr6,0x881ecb58
	if (!ctx.cr6.eq) goto loc_881ECB58;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x881ecb58
	if (!ctx.cr6.eq) goto loc_881ECB58;
loc_881ECB50:
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x881ecb5c
	goto loc_881ECB5C;
loc_881ECB58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881ECB5C:
	// bl 0x881e9018
	ctx.lr = 0x881ECB60;
	sub_881E9018(ctx, base);
loc_881ECB60:
	// lwz r3,96(r1)
	ctx.current_instruction = 0x881ECB60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_881ECB64:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EEB30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EEB30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EEB30) {
			switch (rex_dispatch_address) {
				case 0x881EEB50:
				case 0x881EEB60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEB30;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EEB50: goto loc_881EEB50;
		case 0x881EEB60: goto loc_881EEB60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EEB34;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881EEB38;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EEB3C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881EEB40;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x881eea70
	ctx.lr = 0x881EEB50;
	sub_881EEA70(ctx, base);
loc_881EEB50:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881eeb60
	if (ctx.cr0.eq) goto loc_881EEB60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ee958
	ctx.lr = 0x881EEB60;
	sub_881EE958(ctx, base);
loc_881EEB60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EEB68;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881EEB70;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EEB74;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__savevmx_18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED00);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED00;
	ctx.current_instruction = 0x881EED00;
	uint32_t ea{};
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_67) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED8C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED8C;
	ctx.current_instruction = 0x881EED8C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_105) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEEBC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEEBC;
	ctx.current_instruction = 0x881EEEBC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_126) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF64);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEF64;
	ctx.current_instruction = 0x881EEF64;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_23) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEFC0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEFC0;
	ctx.current_instruction = 0x881EEFC0;
	uint32_t ea{};
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_86) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF0BC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF0BC;
	ctx.current_instruction = 0x881EF0BC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_107) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF164);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF164;
	ctx.current_instruction = 0x881EF164;
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_881EF940) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EF940;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EF940) {
			switch (rex_dispatch_address) {
				case 0x881EF954:
				case 0x881EF994:
				case 0x881EF9B4:
				case 0x881EFA14:
				case 0x881EFA98:
				case 0x881EFAB4:
				case 0x881EFAC4:
				case 0x881EFB14:
				case 0x881EFBC0:
				case 0x881EFD70:
				case 0x881EFD8C:
				case 0x881EFDFC:
				case 0x881EFE14:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF940;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EF954: goto loc_881EF954;
		case 0x881EF994: goto loc_881EF994;
		case 0x881EF9B4: goto loc_881EF9B4;
		case 0x881EFA14: goto loc_881EFA14;
		case 0x881EFA98: goto loc_881EFA98;
		case 0x881EFAB4: goto loc_881EFAB4;
		case 0x881EFAC4: goto loc_881EFAC4;
		case 0x881EFB14: goto loc_881EFB14;
		case 0x881EFBC0: goto loc_881EFBC0;
		case 0x881EFD70: goto loc_881EFD70;
		case 0x881EFD8C: goto loc_881EFD8C;
		case 0x881EFDFC: goto loc_881EFDFC;
		case 0x881EFE14: goto loc_881EFE14;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EF944;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EF948;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x881ef27c
	ctx.lr = 0x881EF954;
	__savefpr_25(ctx, base);
loc_881EF954:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881EF954;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stfd f1,192(r1)
	ctx.current_instruction = 0x881EF95C;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f1.u64);
	// stfd f2,200(r1)
	ctx.current_instruction = 0x881EF960;
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f2.u64);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lfd f27,1488(r11)
	ctx.current_instruction = 0x881EF96C;
	ctx.f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// fcmpu cr6,f2,f27
	ctx.cr6.compare(ctx.f2.f64, ctx.f27.f64);
	// bne cr6,0x881ef984
	if (!ctx.cr6.eq) goto loc_881EF984;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f1,8624(r11)
	ctx.current_instruction = 0x881EF97C;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EF984:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bne cr6,0x881ef9d8
	if (!ctx.cr6.eq) goto loc_881EF9D8;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x881ef748
	ctx.lr = 0x881EF994;
	sub_881EF748(ctx, base);
loc_881EF994:
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// bge cr6,0x881ef9b8
	if (!ctx.cr6.lt) goto loc_881EF9B8;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfd f1,16672(r11)
	ctx.current_instruction = 0x881EF9A4;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 16672);
	// bne cr6,0x881efe08
	if (!ctx.cr6.eq) goto loc_881EFE08;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x881f1280
	ctx.lr = 0x881EF9B4;
	sub_881F1280(ctx, base);
loc_881EF9B4:
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EF9B8:
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// ble cr6,0x881ef9d8
	if (!ctx.cr6.gt) goto loc_881EF9D8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x881ef9d0
	if (!ctx.cr6.eq) goto loc_881EF9D0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EF9D0:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EF9D8:
	// lhz r11,192(r1)
	ctx.current_instruction = 0x881EF9D8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 192);
	// lhz r9,200(r1)
	ctx.current_instruction = 0x881EF9DC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 200);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x881efd94
	if (ctx.cr6.eq) goto loc_881EFD94;
	// rlwinm r10,r9,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x881efd94
	if (ctx.cr6.eq) goto loc_881EFD94;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// lfd f26,8624(r11)
	ctx.current_instruction = 0x881EFA00;
	ctx.f26.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fmr f25,f26
	ctx.f25.f64 = ctx.f26.f64;
	// bge cr6,0x881efa3c
	if (!ctx.cr6.lt) goto loc_881EFA3C;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x881ef748
	ctx.lr = 0x881EFA14;
	sub_881EF748(ctx, base);
loc_881EFA14:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x881efa30
	if (ctx.cr6.eq) goto loc_881EFA30;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x881efa38
	if (ctx.cr6.eq) goto loc_881EFA38;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f1,16680(r11)
	ctx.current_instruction = 0x881EFA28;
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 16680);
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFA30:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f25,12544(r11)
	ctx.current_instruction = 0x881EFA34;
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = REX_LOAD_U64(ctx.r11.u32 + 12544);
loc_881EFA38:
	// fneg f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = ctx.f28.u64 ^ 0x8000000000000000;
loc_881EFA3C:
	// fabs f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16096(r11)
	ctx.current_instruction = 0x881EFA44;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16096);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x881efa8c
	if (!ctx.cr6.gt) goto loc_881EFA8C;
	// fcmpu cr6,f29,f27
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// bge cr6,0x881efa5c
	if (!ctx.cr6.lt) goto loc_881EFA5C;
	// fdiv f28,f26,f28
	ctx.f28.f64 = ctx.f26.f64 / ctx.f28.f64;
loc_881EFA5C:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// ble cr6,0x881efa74
	if (!ctx.cr6.gt) goto loc_881EFA74;
loc_881EFA64:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16672(r11)
	ctx.current_instruction = 0x881EFA68;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16672);
loc_881EFA6C:
	// fmul f1,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 * ctx.f25.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFA74:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// bge cr6,0x881efa84
	if (!ctx.cr6.lt) goto loc_881EFA84;
loc_881EFA7C:
	// fmul f1,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64 * ctx.f27.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFA84:
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFA8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x881f0c40
	ctx.lr = 0x881EFA98;
	sub_881F0C40(ctx, base);
loc_881EFA98:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfd f0,17600(r11)
	ctx.current_instruction = 0x881EFAA0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 17600);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x881efb44
	if (ctx.cr6.gt) goto loc_881EFB44;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x881ef748
	ctx.lr = 0x881EFAB4;
	sub_881EF748(ctx, base);
loc_881EFAB4:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x881efb44
	if (ctx.cr0.eq) goto loc_881EFB44;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x881ef748
	ctx.lr = 0x881EFAC4;
	sub_881EF748(ctx, base);
loc_881EFAC4:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x881efb44
	if (ctx.cr0.eq) goto loc_881EFB44;
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// ble cr6,0x881efb44
	if (!ctx.cr6.gt) goto loc_881EFB44;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881EFAD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fctiwz f0,f29
	ctx.f0.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// stfd f0,88(r1)
	ctx.current_instruction = 0x881EFADC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x881EFAE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r31,r11,r10
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x881efb0c
	if (ctx.cr6.eq) goto loc_881EFB0C;
loc_881EFAF4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881efb00
	if (ctx.cr0.eq) goto loc_881EFB00;
	// fmul f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 * ctx.f30.f64;
loc_881EFB00:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmul f30,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f30.f64 * ctx.f30.f64;
	// bne 0x881efaf4
	if (!ctx.cr0.eq) goto loc_881EFAF4;
loc_881EFB0C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x881f0c28
	ctx.lr = 0x881EFB14;
	sub_881F0C28(ctx, base);
loc_881EFB14:
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// ble cr6,0x881efb30
	if (!ctx.cr6.gt) goto loc_881EFB30;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f0,16672(r11)
	ctx.current_instruction = 0x881EFB24;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16672);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// b 0x881efa6c
	goto loc_881EFA6C;
loc_881EFB30:
	// cmpwi cr6,r4,-2557
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2557, ctx.xer);
	// bge cr6,0x881efd74
	if (!ctx.cr6.lt) goto loc_881EFD74;
	// fmul f0,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 * ctx.f25.f64;
	// fmul f1,f0,f27
	ctx.f1.f64 = ctx.f0.f64 * ctx.f27.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFB44:
	// lis r10,-30715
	ctx.r10.s64 = -2012938240;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,-30560
	ctx.r31.s64 = ctx.r10.s64 + -30560;
	// lfd f0,72(r31)
	ctx.current_instruction = 0x881EFB50;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x881efb60
	if (ctx.cr6.gt) goto loc_881EFB60;
	// li r11,9
	ctx.r11.s64 = 9;
loc_881EFB60:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// lfdx f0,r10,r9
	ctx.current_instruction = 0x881EFB68;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x881efb78
	if (ctx.cr6.gt) goto loc_881EFB78;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_881EFB78:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// lfdx f0,r10,r9
	ctx.current_instruction = 0x881EFB80;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x881efb90
	if (ctx.cr6.gt) goto loc_881EFB90;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_881EFB90:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881EFB90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lfd f31,19224(r9)
	ctx.current_instruction = 0x881EFBA0;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 19224);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x881efbd0
	if (!ctx.cr6.eq) goto loc_881EFBD0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x881ef2e8
	ctx.lr = 0x881EFBC0;
	sub_881EF2E8(ctx, base);
loc_881EFBC0:
	// lfd f0,216(r31)
	ctx.current_instruction = 0x881EFBC0;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 216);
	// fmr f13,f27
	ctx.f13.f64 = ctx.f27.f64;
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// b 0x881efc60
	goto loc_881EFC60;
loc_881EFBD0:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f11,256(r31)
	ctx.current_instruction = 0x881EFBD4;
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 256);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// lfd f10,248(r31)
	ctx.current_instruction = 0x881EFBDC;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r31.u32 + 248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f9,240(r31)
	ctx.current_instruction = 0x881EFBE4;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 240);
	// addi r7,r31,144
	ctx.r7.s64 = ctx.r31.s64 + 144;
	// lfd f8,232(r31)
	ctx.current_instruction = 0x881EFBEC;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r31.u32 + 232);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lfd f12,224(r31)
	ctx.current_instruction = 0x881EFBF4;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 224);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f7,216(r31)
	ctx.current_instruction = 0x881EFBFC;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r31.u32 + 216);
	// lfdx f0,r9,r8
	ctx.current_instruction = 0x881EFC00;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// fsub f6,f30,f0
	ctx.f6.f64 = ctx.f30.f64 - ctx.f0.f64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fadd f5,f0,f30
	ctx.f5.f64 = ctx.f0.f64 + ctx.f30.f64;
	// std r10,88(r1)
	ctx.current_instruction = 0x881EFC18;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x881EFC1C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,12296(r6)
	ctx.current_instruction = 0x881EFC20;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 12296);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfdx f4,r11,r7
	ctx.current_instruction = 0x881EFC28;
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fsub f6,f6,f4
	ctx.f6.f64 = ctx.f6.f64 - ctx.f4.f64;
	// fdiv f6,f6,f5
	ctx.f6.f64 = ctx.f6.f64 / ctx.f5.f64;
	// fmul f13,f6,f13
	ctx.f13.f64 = ctx.f6.f64 * ctx.f13.f64;
	// fmul f6,f13,f13
	ctx.f6.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmul f12,f13,f12
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fmadd f11,f6,f11,f10
	ctx.f11.f64 = std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f10.f64);
	// fmadd f11,f11,f6,f9
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f9.f64);
	// fmadd f11,f11,f6,f8
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f8.f64);
	// fmul f11,f11,f6
	ctx.f11.f64 = ctx.f11.f64 * ctx.f6.f64;
	// fmul f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f12,f11,f7,f12
	ctx.f12.f64 = std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f12.f64);
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
loc_881EFC60:
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// fmul f11,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64 * ctx.f29.f64;
	// lfd f12,320(r31)
	ctx.current_instruction = 0x881EFC68;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 320);
	// lfd f13,-30224(r11)
	ctx.current_instruction = 0x881EFC6C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -30224);
	// fmul f10,f29,f13
	ctx.f10.f64 = ctx.f29.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * ctx.f31.f64;
	// fsub f9,f29,f10
	ctx.f9.f64 = ctx.f29.f64 - ctx.f10.f64;
	// fmadd f11,f9,f0,f11
	ctx.f11.f64 = std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f11.f64);
	// fmul f9,f11,f13
	ctx.f9.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fctid f9,f9
	ctx.f9.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fmul f9,f9,f31
	ctx.f9.f64 = ctx.f9.f64 * ctx.f31.f64;
	// fmadd f0,f10,f0,f9
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64);
	// fsub f11,f11,f9
	ctx.f11.f64 = ctx.f11.f64 - ctx.f9.f64;
	// fmul f10,f0,f13
	ctx.f10.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * ctx.f31.f64;
	// fsub f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 - ctx.f10.f64;
	// fadd f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 + ctx.f11.f64;
	// fmul f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctid f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmul f11,f11,f31
	ctx.f11.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fadd f10,f10,f11
	ctx.f10.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fmul f13,f10,f13
	ctx.f13.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x881efa64
	if (ctx.cr6.gt) goto loc_881EFA64;
	// lfd f12,328(r31)
	ctx.current_instruction = 0x881EFCDC;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 328);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x881efa7c
	if (ctx.cr6.lt) goto loc_881EFA7C;
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	ctx.current_instruction = 0x881EFCEC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x881EFCF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ble cr6,0x881efd04
	if (!ctx.cr6.gt) goto loc_881EFD04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsub f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 - ctx.f31.f64;
loc_881EFD04:
	// lfd f13,312(r31)
	ctx.current_instruction = 0x881EFD04;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 312);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// lfd f12,304(r31)
	ctx.current_instruction = 0x881EFD0C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 304);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// fmadd f8,f0,f13,f12
	ctx.f8.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64);
	// lfd f13,296(r31)
	ctx.current_instruction = 0x881EFD18;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 296);
	// lfd f12,288(r31)
	ctx.current_instruction = 0x881EFD1C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 288);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lfd f11,280(r31)
	ctx.current_instruction = 0x881EFD24;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 280);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// lfd f10,272(r31)
	ctx.current_instruction = 0x881EFD2C;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r31.u32 + 272);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// lfd f9,264(r31)
	ctx.current_instruction = 0x881EFD34;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 264);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// fmadd f13,f8,f0,f13
	ctx.f13.f64 = std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f8,r11,r8
	ctx.current_instruction = 0x881EFD4C;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// fmadd f13,f13,f0,f12
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64);
	// fmadd f13,f13,f0,f11
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64);
	// fmadd f13,f13,f0,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f10.f64);
	// fmadd f13,f13,f0,f9
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f9.f64);
	// fmadd f0,f13,f0,f26
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f26.f64);
	// fmul f31,f0,f8
	ctx.f31.f64 = ctx.f0.f64 * ctx.f8.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x881f0c28
	ctx.lr = 0x881EFD70;
	sub_881F0C28(ctx, base);
loc_881EFD70:
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_881EFD74:
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// bgt cr6,0x881efa64
	if (ctx.cr6.gt) goto loc_881EFA64;
	// cmpwi cr6,r4,-1021
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1021, ctx.xer);
	// blt cr6,0x881efa7c
	if (ctx.cr6.lt) goto loc_881EFA7C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x881f0c00
	ctx.lr = 0x881EFD8C;
	sub_881F0C00(ctx, base);
loc_881EFD8C:
	// fmul f1,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f25.f64;
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFD94:
	// rlwinm r10,r11,0,17,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x881efdb8
	if (!ctx.cr6.eq) goto loc_881EFDB8;
	// lwz r11,192(r1)
	ctx.current_instruction = 0x881EFDA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881efe04
	if (!ctx.cr0.eq) goto loc_881EFE04;
	// lwz r11,196(r1)
	ctx.current_instruction = 0x881EFDAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881efe04
	if (!ctx.cr6.eq) goto loc_881EFE04;
loc_881EFDB8:
	// rlwinm r11,r9,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x881efddc
	if (!ctx.cr6.eq) goto loc_881EFDDC;
	// lwz r9,200(r1)
	ctx.current_instruction = 0x881EFDC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// clrlwi. r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x881efe04
	if (!ctx.cr0.eq) goto loc_881EFE04;
	// lwz r9,204(r1)
	ctx.current_instruction = 0x881EFDD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881efe04
	if (!ctx.cr6.eq) goto loc_881EFE04;
loc_881EFDDC:
	// cmplwi cr6,r10,32760
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32760, ctx.xer);
	// beq cr6,0x881efe04
	if (ctx.cr6.eq) goto loc_881EFE04;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// beq cr6,0x881efe04
	if (ctx.cr6.eq) goto loc_881EFE04;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x881ef7b8
	ctx.lr = 0x881EFDFC;
	sub_881EF7B8(ctx, base);
loc_881EFDFC:
	// lfd f1,88(r1)
	ctx.current_instruction = 0x881EFDFC;
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x881efe08
	goto loc_881EFE08;
loc_881EFE04:
	// fadd f1,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64 + ctx.f29.f64;
loc_881EFE08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x881ef2c8
	ctx.lr = 0x881EFE14;
	__restfpr_25(ctx, base);
loc_881EFE14:
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EFE14;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EFE1C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88218F60) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88218F60);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88218F60;
	ctx.current_instruction = 0x88218F60;
	PPCRegister temp{};
	uint32_t ea{};
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r8,1
	ctx.r8.s64 = 1;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// and r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// bne cr6,0x8821908c
	if (!ctx.cr6.eq) goto loc_8821908C;
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v12,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88219204
	if (!ctx.cr6.gt) goto loc_88219204;
	// li r8,0
	ctx.r8.s64 = 0;
loc_88218FEC:
	// vor v5,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v12,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// vor v11,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// vor v10,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v6,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// vadduhm v3,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vperm128 v8,v56,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v31,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v30,v6,v31
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v6,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v27,v4,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v26,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v29,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v24,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubshs v23,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vadduhm v25,v6,v29
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v5,v28,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v22,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v20,v5,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v21,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// stvx128 v20,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v19,v21,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v19,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// blt cr6,0x88218fec
	if (ctx.cr6.lt) goto loc_88218FEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8821908C:
	// li r6,32
	ctx.r6.s64 = 32;
	// lvrx128 v52,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r6,r3
	temp.u32 = ctx.r6.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v7,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v11,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v12,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v4,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v6,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88219204
	if (!ctx.cr6.gt) goto loc_88219204;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// li r3,-32
	ctx.r3.s64 = -32;
	// li r5,-16
	ctx.r5.s64 = -16;
loc_88219118:
	// vor v31,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v12,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// vor v11,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// vor v30,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vor v10,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v3,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v42,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v29,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// vadduhm v4,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v5,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v43,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v26,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vor v3,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor v7,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v6,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v25,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v27,v63,v42,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v18,v26,v2
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vslh v23,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v4,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v25.u8));
	// vadduhm v21,v3,v23
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vor v3,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v24.u8));
	// vadduhm v22,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v20,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v19,v29,v6
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v17,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v14,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v16,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vsubshs v15,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vadduhm v3,v3,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v30,v21,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v31,v18,v16
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v29,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v30,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsrah v28,v31,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v27,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsrah v26,v30,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v28,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v25,v27,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x88219118
	if (ctx.cr6.lt) goto loc_88219118;
loc_88219204:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821E2C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8821E2C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821E2C0;
	ctx.current_instruction = 0x8821E2C0;
	uint32_t ea{};
	// li r6,48
	ctx.r6.s64 = 48;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,96
	ctx.r7.s64 = 96;
	// li r8,144
	ctx.r8.s64 = 144;
	// vpkshus v24,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// li r9,192
	ctx.r9.s64 = 192;
	// li r10,240
	ctx.r10.s64 = 240;
	// li r11,288
	ctx.r11.s64 = 288;
	// lvx128 v2,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,336
	ctx.r12.s64 = 336;
	// lvx128 v3,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v25,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v5,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v26,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v6,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v7,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v27,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v8,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stvewx v24,r0,r3
	ctx.current_instruction = 0x8821E314;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vpkshus v28,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vpkshus v29,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// vpkshus v30,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvewx v24,r0,r4
	ctx.current_instruction = 0x8821E330;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stvewx v25,r3,r5
	ctx.current_instruction = 0x8821E338;
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v31,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvewx v25,r4,r5
	ctx.current_instruction = 0x8821E340;
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v26,r3,r6
	ctx.current_instruction = 0x8821E348;
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r4,r6
	ctx.current_instruction = 0x8821E34C;
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r3,r7
	ctx.current_instruction = 0x8821E350;
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r4,r7
	ctx.current_instruction = 0x8821E354;
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r3,r8
	ctx.current_instruction = 0x8821E358;
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r4,r8
	ctx.current_instruction = 0x8821E35C;
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ctx.current_instruction = 0x8821E360;
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ctx.current_instruction = 0x8821E364;
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ctx.current_instruction = 0x8821E368;
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ctx.current_instruction = 0x8821E36C;
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ctx.current_instruction = 0x8821E370;
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ctx.current_instruction = 0x8821E374;
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821EE70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821EE70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821EE70) {
			switch (rex_dispatch_address) {
				case 0x8821EEB8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821EE70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821EEB8: goto loc_8821EEB8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8821EE74;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8821EE78;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,-5
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// li r10,1120
	ctx.r10.s64 = 1120;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// vsrh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// slw r7,r4,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// lvx128 v13,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,0
	ctx.r9.s64 = 0;
	// vaddshs v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// bl 0x8821e768
	ctx.lr = 0x8821EEB8;
	sub_8821E768(ctx, base);
loc_8821EEB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8821EEC0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821EF88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821EF88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821EF88) {
			switch (rex_dispatch_address) {
				case 0x8821EF90:
				case 0x8821EFF4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821EF88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821EF90: goto loc_8821EF90;
		case 0x8821EFF4: goto loc_8821EFF4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8821EF90;
	__savegprlr_27(ctx, base);
loc_8821EF90:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x8821EF90;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// li r11,1120
	ctx.r11.s64 = 1120;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vspltish v12,6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r31,1164(r6)
	ctx.current_instruction = 0x8821EFB0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// vslh v11,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v9,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stvx128 v9,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x882186f8
	ctx.lr = 0x8821EFF4;
	sub_882186F8(ctx, base);
loc_8821EFF4:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// li r5,1
	ctx.r5.s64 = 1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// lvx128 v4,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// vslh v2,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// slw r9,r5,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8821f0f0
	if (!ctx.cr6.eq) goto loc_8821F0F0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8821f1e8
	if (!ctx.cr6.gt) goto loc_8821F1E8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_8821F054:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v11,v13,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v13,v13,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v4,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v31,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v25,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v24,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v22,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsubshs v21,v13,v24
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v19,v21,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v18,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsrah v16,v17,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vor v8,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// stvewx128 v62,r0,r11
	ctx.current_instruction = 0x8821F0CC;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ctx.current_instruction = 0x8821F0D0;
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bdnz 0x8821f054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821F054;
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8821F0F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8821f1e8
	if (!ctx.cr6.gt) goto loc_8821F1E8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_8821F108:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v11,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v11,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v9,v13,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v11,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi128 v3,v13,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsubshs v30,v7,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v11,v11,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vslh v28,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v13,v13,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v27,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v20,v26,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v18,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v14,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubshs v1,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// lvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v29,v11,v14
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v27,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v26,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v24,v28,v13
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v23,v27,v13
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v21,v23,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8)));
	// vpkshus128 v59,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vor128 v8,v60,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bdnz 0x8821f108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821F108;
loc_8821F1E8:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88225238) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88225238;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88225238) {
			switch (rex_dispatch_address) {
				case 0x88225288:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88225238;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88225288: goto loc_88225288;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8822523C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88225240;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88225244;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.current_instruction = 0x8822524C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	ctx.current_instruction = 0x8822525C;
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
	// bl 0x882220c0
	ctx.lr = 0x88225288;
	sub_882220C0(ctx, base);
loc_88225288:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8822528C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88225294;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88225C18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88225C18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88225C18) {
			switch (rex_dispatch_address) {
				case 0x88225C68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88225C18;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88225C68: goto loc_88225C68;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88225C1C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88225C20;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88225C24;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.current_instruction = 0x88225C2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	ctx.current_instruction = 0x88225C3C;
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
	// bl 0x882225e0
	ctx.lr = 0x88225C68;
	sub_882225E0(ctx, base);
loc_88225C68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88225C6C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88225C74;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_882265F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882265F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882265F8) {
			switch (rex_dispatch_address) {
				case 0x88226600:
				case 0x88226864:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882265F8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88226600: goto loc_88226600;
		case 0x88226864: goto loc_88226864;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88226600;
	__savegprlr_25(ctx, base);
loc_88226600:
	// stwu r1,-928(r1)
	ctx.current_instruction = 0x88226600;
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
	ctx.current_instruction = 0x88226628;
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
	ctx.current_instruction = 0x8822665C;
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
	// bne cr6,0x882267e0
	if (!ctx.cr6.eq) goto loc_882267E0;
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
loc_882267E0:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x8822685c
	if (ctx.cr6.lt) goto loc_8822685C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8822685c
	if (!ctx.cr6.gt) goto loc_8822685C;
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
loc_8822681C:
	// lbzux r8,r3,r9
	ctx.current_instruction = 0x8822681C;
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r26,r27,r10
	ctx.current_instruction = 0x88226820;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// rotlwi r30,r8,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r10)
	ctx.current_instruction = 0x88226828;
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
	ctx.current_instruction = 0x88226848;
	REX_STORE_U16(ctx.r11.u32 + 48, ctx.r31.u16);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthu r8,96(r11)
	ctx.current_instruction = 0x88226854;
	ea = 96 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8822681c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822681C;
loc_8822685C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x88223088
	ctx.lr = 0x88226864;
	sub_88223088(ctx, base);
loc_88226864:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8822C2D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8822C2D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8822C2D8) {
			switch (rex_dispatch_address) {
				case 0x8822C2E0:
				case 0x8822C3BC:
				case 0x8822C454:
				case 0x8822C4B0:
				case 0x8822C500:
				case 0x8822C600:
				case 0x8822C630:
				case 0x8822C72C:
				case 0x8822C75C:
				case 0x8822C85C:
				case 0x8822C934:
				case 0x8822CA30:
				case 0x8822CB04:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8822C2D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8822C2E0: goto loc_8822C2E0;
		case 0x8822C3BC: goto loc_8822C3BC;
		case 0x8822C454: goto loc_8822C454;
		case 0x8822C4B0: goto loc_8822C4B0;
		case 0x8822C500: goto loc_8822C500;
		case 0x8822C600: goto loc_8822C600;
		case 0x8822C630: goto loc_8822C630;
		case 0x8822C72C: goto loc_8822C72C;
		case 0x8822C75C: goto loc_8822C75C;
		case 0x8822C85C: goto loc_8822C85C;
		case 0x8822C934: goto loc_8822C934;
		case 0x8822CA30: goto loc_8822CA30;
		case 0x8822CB04: goto loc_8822CB04;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8822C2E0;
	__savegprlr_14(ctx, base);
loc_8822C2E0:
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x8822C2E0;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r27,50(r3)
	ctx.current_instruction = 0x8822C2E4;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// stw r10,348(r1)
	ctx.current_instruction = 0x8822C2EC;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// rlwinm r9,r5,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// mullw r10,r27,r5
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r5.s32);
	// stw r8,332(r1)
	ctx.current_instruction = 0x8822C2F8;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r8.u32);
	// stw r7,324(r1)
	ctx.current_instruction = 0x8822C2FC;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// lwz r26,348(r3)
	ctx.current_instruction = 0x8822C300;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r28,284(r3)
	ctx.current_instruction = 0x8822C304;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lwz r20,292(r3)
	ctx.current_instruction = 0x8822C308;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// or r21,r9,r4
	ctx.r21.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r24,r8,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// rlwinm r7,r24,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,25656
	ctx.r25.s64 = ctx.r11.s64 + 25656;
	// rlwinm r30,r21,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// lis r6,115
	ctx.r6.s64 = 7536640;
	// lwzx r5,r7,r26
	ctx.current_instruction = 0x8822C330;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r29,r6,115
	ctx.r29.u64 = ctx.r6.u64 | 115;
	// rlwinm r4,r5,1,15,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x10000;
	// extsh r23,r5
	ctx.r23.s64 = ctx.r5.s16;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// srawi r22,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r22.s64 = ctx.r5.s32 >> 16;
	// stw r23,96(r1)
	ctx.current_instruction = 0x8822C34C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r11,r23,30
	ctx.r11.u64 = ctx.r23.u32 & 0x3;
	// stw r22,100(r1)
	ctx.current_instruction = 0x8822C358;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// subf r8,r5,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r5.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// subf r5,r30,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r30.u64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r7,r22,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// srawi r16,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r6.s32 >> 1;
	// srawi r3,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r22.s32 >> 1;
	// or r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stw r16,104(r1)
	ctx.current_instruction = 0x8822C384;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// rlwinm r11,r3,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF8;
	// lwzx r10,r7,r25
	ctx.current_instruction = 0x8822C38C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// rlwinm r8,r9,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r8,r8,0,16,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// add r15,r10,r11
	ctx.r15.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r15,108(r1)
	ctx.current_instruction = 0x8822C3A0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// beq cr6,0x8822c3c4
	if (ctx.cr6.eq) goto loc_8822C3C4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8822bc98
	ctx.lr = 0x8822C3BC;
	sub_8822BC98(ctx, base);
loc_8822C3BC:
	// lwz r23,96(r1)
	ctx.current_instruction = 0x8822C3BC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r22,100(r1)
	ctx.current_instruction = 0x8822C3C0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8822C3C4:
	// add r11,r27,r24
	ctx.r11.u64 = ctx.r27.u64 + ctx.r24.u64;
	// lis r27,4
	ctx.r27.s64 = 262144;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r30,r27
	ctx.r5.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwzx r9,r10,r26
	ctx.current_instruction = 0x8822C3D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r8,r9,1,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x10000;
	// extsh r24,r9
	ctx.r24.s64 = ctx.r9.s16;
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r19,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r19.s64 = ctx.r9.s32 >> 16;
	// stw r24,100(r1)
	ctx.current_instruction = 0x8822C3E8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// clrlwi r11,r24,30
	ctx.r11.u64 = ctx.r24.u32 & 0x3;
	// stw r19,96(r1)
	ctx.current_instruction = 0x8822C3F4;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// subf r3,r9,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r9.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r19,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// subf r9,r5,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r5.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + ctx.r29.u64;
	// srawi r14,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r10.s32 >> 1;
	// lwzx r11,r11,r25
	ctx.current_instruction = 0x8822C418;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// srawi r7,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r19.s32 >> 1;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r14,112(r1)
	ctx.current_instruction = 0x8822C424;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// rlwinm r10,r7,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r4,r6,0,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF8000;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r4,0,16,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// stw r26,116(r1)
	ctx.current_instruction = 0x8822C438;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8822c45c
	if (ctx.cr6.eq) goto loc_8822C45C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8822bc98
	ctx.lr = 0x8822C454;
	sub_8822BC98(ctx, base);
loc_8822C454:
	// lwz r24,100(r1)
	ctx.current_instruction = 0x8822C454;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,96(r1)
	ctx.current_instruction = 0x8822C458;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8822C45C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// rlwinm r30,r21,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwimi r11,r15,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// lis r10,59
	ctx.r10.s64 = 3866624;
	// rlwinm r9,r11,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r8,r11,r20
	ctx.r8.u64 = ctx.r20.u64 - ctx.r11.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// ori r29,r10,59
	ctx.r29.u64 = ctx.r10.u64 | 59;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r30.u64;
	// add r5,r6,r29
	ctx.r5.u64 = ctx.r6.u64 + ctx.r29.u64;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8822c4b8
	if (ctx.cr6.eq) goto loc_8822C4B8;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8822bd68
	ctx.lr = 0x8822C4B0;
	sub_8822BD68(ctx, base);
loc_8822C4B0:
	// lwz r16,104(r1)
	ctx.current_instruction = 0x8822C4B0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r15,108(r1)
	ctx.current_instruction = 0x8822C4B4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8822C4B8:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// add r5,r30,r27
	ctx.r5.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rlwimi r11,r26,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r11,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r9,r11,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 + ctx.r29.u64;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8822c504
	if (ctx.cr6.eq) goto loc_8822C504;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8822bd68
	ctx.lr = 0x8822C500;
	sub_8822BD68(ctx, base);
loc_8822C500:
	// lwz r14,112(r1)
	ctx.current_instruction = 0x8822C500;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8822C504:
	// lis r27,-30678
	ctx.r27.s64 = -2010513408;
	// lhz r8,74(r31)
	ctx.current_instruction = 0x8822C508;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// srawi r7,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r22.s32 >> 2;
	// srawi r9,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 2;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r11,-10096(r27)
	ctx.current_instruction = 0x8822C518;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -10096);
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// add r29,r10,r17
	ctx.r29.u64 = ctx.r10.u64 + ctx.r17.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r30,r8,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf. r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8822c5ac
	if (!ctx.cr0.eq) goto loc_8822C5AC;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// dcbt r10,r29
	// addi r9,r30,64
	ctx.r9.s64 = ctx.r30.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r29
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r29
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r30.u64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_8822C5AC:
	// clrlwi r28,r22,30
	ctx.r28.u64 = ctx.r22.u32 & 0x3;
	// rlwinm r10,r23,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,-10096(r27)
	ctx.current_instruction = 0x8822C5BC;
	REX_STORE_U32(ctx.r27.u32 + -10096, ctx.r11.u32);
	// clrlwi r26,r23,30
	ctx.r26.u64 = ctx.r23.u32 & 0x3;
	// addi r11,r10,241
	ctx.r11.s64 = ctx.r10.s64 + 241;
	// li r25,1
	ctx.r25.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8822C5D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwzx r4,r5,r31
	ctx.current_instruction = 0x8822C5E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8822C600;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822C600:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8822c630
	if (ctx.cr6.eq) goto loc_8822C630;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,35(r31)
	ctx.current_instruction = 0x8822C60C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8822C614;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881cd1c8
	ctx.lr = 0x8822C630;
	sub_881CD1C8(ctx, base);
loc_8822C630:
	// lwz r11,-10096(r27)
	ctx.current_instruction = 0x8822C630;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -10096);
	// srawi r9,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r19.s32 >> 2;
	// srawi r8,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 2;
	// lhz r10,74(r31)
	ctx.current_instruction = 0x8822C63C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r9,r17
	ctx.r29.u64 = ctx.r9.u64 + ctx.r17.u64;
	// subf. r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r26,r10,r18
	ctx.r26.u64 = ctx.r10.u64 + ctx.r18.u64;
	// rotlwi r30,r10,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// bne 0x8822c6dc
	if (!ctx.cr0.eq) goto loc_8822C6DC;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// dcbt r10,r29
	// addi r9,r30,64
	ctx.r9.s64 = ctx.r30.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r29
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r29
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r29
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r30.u64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_8822C6DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8822C6E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// clrlwi r28,r19,30
	ctx.r28.u64 = ctx.r19.u32 & 0x3;
	// stw r11,-10096(r27)
	ctx.current_instruction = 0x8822C6E8;
	REX_STORE_U32(ctx.r27.u32 + -10096, ctx.r11.u32);
	// rlwinm r11,r24,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xC;
	// clrlwi r27,r24,30
	ctx.r27.u64 = ctx.r24.u32 & 0x3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,241
	ctx.r11.s64 = ctx.r11.s64 + 241;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r11,r3,r31
	ctx.current_instruction = 0x8822C71C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8822C72C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822C72C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8822c75c
	if (ctx.cr6.eq) goto loc_8822C75C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,35(r31)
	ctx.current_instruction = 0x8822C738;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8822C740;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881cd1c8
	ctx.lr = 0x8822C75C;
	sub_881CD1C8(ctx, base);
loc_8822C75C:
	// lis r30,-30678
	ctx.r30.s64 = -2010513408;
	// lhz r8,76(r31)
	ctx.current_instruction = 0x8822C760;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// srawi r7,r15,2
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r15.s32 >> 2;
	// lwz r23,324(r1)
	ctx.current_instruction = 0x8822C768;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r9,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r16.s32 >> 2;
	// lwz r22,332(r1)
	ctx.current_instruction = 0x8822C770;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r11,-10092(r30)
	ctx.current_instruction = 0x8822C778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -10092);
	// srawi r6,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 4;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + ctx.r23.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r10,r22
	ctx.r29.u64 = ctx.r10.u64 + ctx.r22.u64;
	// subf. r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// bne 0x8822c810
	if (!ctx.cr0.eq) goto loc_8822C810;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r3
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r3
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r3
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r3
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r3
	// li r11,0
	ctx.r11.s64 = 0;
loc_8822C810:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r24,348(r1)
	ctx.current_instruction = 0x8822C814;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// clrlwi r28,r15,30
	ctx.r28.u64 = ctx.r15.u32 & 0x3;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8822C81C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r11,-10092(r30)
	ctx.current_instruction = 0x8822C820;
	REX_STORE_U32(ctx.r30.u32 + -10092, ctx.r11.u32);
	// rlwinm r11,r16,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xC;
	// lbz r9,35(r31)
	ctx.current_instruction = 0x8822C828;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// clrlwi r27,r16,30
	ctx.r27.u64 = ctx.r16.u32 & 0x3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwzx r11,r11,r31
	ctx.current_instruction = 0x8822C850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8822C85C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822C85C:
	// lwz r11,-10092(r30)
	ctx.current_instruction = 0x8822C85C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -10092);
	// lhz r8,76(r31)
	ctx.current_instruction = 0x8822C860;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8822c8ec
	if (!ctx.cr0.eq) goto loc_8822C8EC;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r29
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r29
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r29
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_8822C8EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8822C8F0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r26,356(r1)
	ctx.current_instruction = 0x8822C8F4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-10092(r30)
	ctx.current_instruction = 0x8822C8FC;
	REX_STORE_U32(ctx.r30.u32 + -10092, ctx.r11.u32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,35(r31)
	ctx.current_instruction = 0x8822C904;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r11,r31
	ctx.current_instruction = 0x8822C928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8822C934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822C934:
	// lwz r7,116(r1)
	ctx.current_instruction = 0x8822C934;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r11,76(r31)
	ctx.current_instruction = 0x8822C938;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lwz r10,-10092(r30)
	ctx.current_instruction = 0x8822C93C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -10092);
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// srawi r8,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r14.s32 >> 2;
	// srawi r6,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 4;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf. r8,r4,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r3,r9,r23
	ctx.r3.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r29,r9,r22
	ctx.r29.u64 = ctx.r9.u64 + ctx.r22.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bne 0x8822c9ec
	if (!ctx.cr0.eq) goto loc_8822C9EC;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r3
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r3
	// addi r11,r6,32
	ctx.r11.s64 = ctx.r6.s64 + 32;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r10,r3
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r3
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r3
	// li r10,0
	ctx.r10.s64 = 0;
loc_8822C9EC:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8822C9F0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// clrlwi r28,r7,30
	ctx.r28.u64 = ctx.r7.u32 & 0x3;
	// stw r11,-10092(r30)
	ctx.current_instruction = 0x8822C9F8;
	REX_STORE_U32(ctx.r30.u32 + -10092, ctx.r11.u32);
	// rlwinm r11,r14,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xC;
	// clrlwi r27,r14,30
	ctx.r27.u64 = ctx.r14.u32 & 0x3;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwzx r11,r9,r31
	ctx.current_instruction = 0x8822CA20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r9,35(r31)
	ctx.current_instruction = 0x8822CA28;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// bctrl 
	ctx.lr = 0x8822CA30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822CA30:
	// lwz r11,-10092(r30)
	ctx.current_instruction = 0x8822CA30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -10092);
	// lhz r8,76(r31)
	ctx.current_instruction = 0x8822CA34;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8822cac0
	if (!ctx.cr0.eq) goto loc_8822CAC0;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r29
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r29
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r29
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r29
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r29
	// li r11,0
	ctx.r11.s64 = 0;
loc_8822CAC0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8822CAC4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-10092(r30)
	ctx.current_instruction = 0x8822CACC;
	REX_STORE_U32(ctx.r30.u32 + -10092, ctx.r11.u32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,35(r31)
	ctx.current_instruction = 0x8822CAD4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r11,r31
	ctx.current_instruction = 0x8822CAF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8822CB04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822CB04:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

