#include "forzahorizon2_funcs.42.h"

DEFINE_REX_FUNC(sub_880503C8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880503C8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880503C8;
	ctx.current_instruction = 0x880503C8;
	// b 0x88055ce0
	sub_88055CE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88050458) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88050458;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88050458) {
			switch (rex_dispatch_address) {
				case 0x88050460:
				case 0x880504E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050458;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88050460: goto loc_88050460;
		case 0x880504E8: goto loc_880504E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88050460;
	__savegprlr_20(ctx, base);
loc_88050460:
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x88050460;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,527(r1)
	ctx.current_instruction = 0x88050464;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 527);
	// lwz r9,516(r1)
	ctx.current_instruction = 0x88050468;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r8,508(r1)
	ctx.current_instruction = 0x8805046C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r7,500(r1)
	ctx.current_instruction = 0x88050470;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r31,492(r1)
	ctx.current_instruction = 0x88050474;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r30,484(r1)
	ctx.current_instruction = 0x88050478;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// lbz r29,479(r1)
	ctx.current_instruction = 0x8805047C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 479);
	// lbz r28,471(r1)
	ctx.current_instruction = 0x88050480;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r1.u32 + 471);
	// lbz r27,463(r1)
	ctx.current_instruction = 0x88050484;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 463);
	// lwz r26,452(r1)
	ctx.current_instruction = 0x88050488;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r25,444(r1)
	ctx.current_instruction = 0x8805048C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r24,436(r1)
	ctx.current_instruction = 0x88050490;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r23,428(r1)
	ctx.current_instruction = 0x88050494;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r22,420(r1)
	ctx.current_instruction = 0x88050498;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r21,412(r1)
	ctx.current_instruction = 0x8805049C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r20,404(r1)
	ctx.current_instruction = 0x880504A0;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// stb r11,207(r1)
	ctx.current_instruction = 0x880504A4;
	REX_STORE_U8(ctx.r1.u32 + 207, ctx.r11.u8);
	// stw r9,196(r1)
	ctx.current_instruction = 0x880504A8;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stw r8,188(r1)
	ctx.current_instruction = 0x880504AC;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stw r7,180(r1)
	ctx.current_instruction = 0x880504B0;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// stw r31,172(r1)
	ctx.current_instruction = 0x880504B4;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r30,164(r1)
	ctx.current_instruction = 0x880504B8;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stb r29,159(r1)
	ctx.current_instruction = 0x880504BC;
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r29.u8);
	// stb r28,151(r1)
	ctx.current_instruction = 0x880504C0;
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r28.u8);
	// stb r27,143(r1)
	ctx.current_instruction = 0x880504C4;
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r27.u8);
	// stw r26,132(r1)
	ctx.current_instruction = 0x880504C8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r25,124(r1)
	ctx.current_instruction = 0x880504CC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r24,116(r1)
	ctx.current_instruction = 0x880504D0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,108(r1)
	ctx.current_instruction = 0x880504D4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r22,100(r1)
	ctx.current_instruction = 0x880504D8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r21,92(r1)
	ctx.current_instruction = 0x880504DC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r20,84(r1)
	ctx.current_instruction = 0x880504E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x880568a8
	ctx.lr = 0x880504E8;
	sub_880568A8(ctx, base);
loc_880504E8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88053720) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88053720;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88053720) {
			switch (rex_dispatch_address) {
				case 0x88053728:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88053720;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88053728: goto loc_88053728;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88053728;
	__savegprlr_19(ctx, base);
loc_88053728:
	// lhz r9,0(r3)
	ctx.current_instruction = 0x88053728;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// lhz r8,10(r3)
	ctx.current_instruction = 0x88053730;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.current_instruction = 0x8805373C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r6,6(r3)
	ctx.current_instruction = 0x88053740;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 6);
	// addi r20,r10,2060
	ctx.r20.s64 = ctx.r10.s64 + 2060;
	// addi r30,r11,-16383
	ctx.r30.s64 = ctx.r11.s64 + -16383;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	ctx.current_instruction = 0x88053754;
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r30,-16383
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -16383, ctx.xer);
	// lwz r21,12(r20)
	ctx.current_instruction = 0x8805375C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r20.u32 + 12);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	ctx.current_instruction = 0x88053764;
	REX_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,-144(r1)
	ctx.current_instruction = 0x8805376C;
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// bne cr6,0x880537b0
	if (!ctx.cr6.eq) goto loc_880537B0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88053778:
	// lwz r9,0(r10)
	ctx.current_instruction = 0x88053778;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88053798
	if (!ctx.cr6.eq) goto loc_88053798;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x88053778
	if (ctx.cr6.lt) goto loc_88053778;
	// b 0x88053de4
	goto loc_88053DE4;
loc_88053798:
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	ctx.current_instruction = 0x880537A0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	ctx.current_instruction = 0x880537A4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	ctx.current_instruction = 0x880537A8;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x88053de8
	goto loc_88053DE8;
loc_880537B0:
	// lwz r25,8(r20)
	ctx.current_instruction = 0x880537B0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.current_instruction = 0x880537B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,-152
	ctx.r28.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	ctx.r26.s64 = ctx.r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.current_instruction = 0x880537C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.current_instruction = 0x880537C8;
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
	ctx.current_instruction = 0x880537DC;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	ctx.current_instruction = 0x880537E0;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// stw r10,8(r8)
	ctx.current_instruction = 0x880537EC;
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
	ctx.current_instruction = 0x88053804;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r29.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880538fc
	if (ctx.cr0.eq) goto loc_880538FC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.current_instruction = 0x88053824;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88053868
	if (!ctx.cr0.eq) goto loc_88053868;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x880538fc
	if (!ctx.cr6.lt) goto loc_880538FC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_88053848:
	// lwz r9,0(r10)
	ctx.current_instruction = 0x88053848;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88053868
	if (!ctx.cr6.eq) goto loc_88053868;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x88053848
	if (ctx.cr6.lt) goto loc_88053848;
	// b 0x880538fc
	goto loc_880538FC;
loc_88053868:
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
	ctx.current_instruction = 0x8805388C;
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
	// blt cr6,0x880538ac
	if (ctx.cr6.lt) goto loc_880538AC;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x880538b0
	if (!ctx.cr6.lt) goto loc_880538B0;
loc_880538AC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_880538B0:
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r7,r8
	ctx.current_instruction = 0x880538B4;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x880538fc
	if (ctx.cr0.lt) goto loc_880538FC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_880538C8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880538fc
	if (ctx.cr6.eq) goto loc_880538FC;
	// lwz r9,-4(r10)
	ctx.current_instruction = 0x880538D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880538ec
	if (ctx.cr6.lt) goto loc_880538EC;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x880538f0
	if (!ctx.cr6.lt) goto loc_880538F0;
loc_880538EC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_880538F0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ctx.current_instruction = 0x880538F4;
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x880538c8
	if (!ctx.cr0.lt) goto loc_880538C8;
loc_880538FC:
	// lwzx r10,r27,r28
	ctx.current_instruction = 0x880538FC;
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
	ctx.current_instruction = 0x88053910;
	REX_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r10.u32);
	// bge cr6,0x88053944
	if (!ctx.cr6.lt) goto loc_88053944;
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
	// beq cr6,0x88053944
	if (ctx.cr6.eq) goto loc_88053944;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8805393C:
	// stwu r9,4(r10)
	ctx.current_instruction = 0x8805393C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8805393c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8805393C;
loc_88053944:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x88053950
	if (ctx.cr6.eq) goto loc_88053950;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_88053950:
	// lwz r11,4(r20)
	ctx.current_instruction = 0x88053950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r25.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8805397c
	if (!ctx.cr6.lt) goto loc_8805397C;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	ctx.current_instruction = 0x8805396C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	ctx.current_instruction = 0x88053970;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	ctx.current_instruction = 0x88053974;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x88053de8
	goto loc_88053DE8;
loc_8805397C:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x88053c64
	if (ctx.cr6.gt) goto loc_88053C64;
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
	ctx.current_instruction = 0x880539A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r31,4(r9)
	ctx.current_instruction = 0x880539B0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	ctx.current_instruction = 0x880539B4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r7,0(r6)
	ctx.current_instruction = 0x880539C4;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r31,4(r6)
	ctx.current_instruction = 0x880539C8;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r30,8(r6)
	ctx.current_instruction = 0x880539D4;
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_880539E4:
	// lwz r9,4(r10)
	ctx.current_instruction = 0x880539E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	ctx.current_instruction = 0x880539EC;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x880539F8;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.current_instruction = 0x880539FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r9,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x880539e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880539E4;
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
loc_88053A24:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88053a38
	if (ctx.cr6.lt) goto loc_88053A38;
	// lwz r10,0(r8)
	ctx.current_instruction = 0x88053A2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	ctx.current_instruction = 0x88053A30;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x88053a3c
	goto loc_88053A3C;
loc_88053A38:
	// stw r23,0(r11)
	ctx.current_instruction = 0x88053A38;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_88053A3C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x88053a24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053A24;
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
	ctx.current_instruction = 0x88053A70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// subfic r30,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r30.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88053b6c
	if (ctx.cr0.eq) goto loc_88053B6C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.current_instruction = 0x88053A90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88053ad4
	if (!ctx.cr0.eq) goto loc_88053AD4;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x88053b6c
	if (!ctx.cr6.lt) goto loc_88053B6C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_88053AB4:
	// lwz r9,0(r10)
	ctx.current_instruction = 0x88053AB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88053ad4
	if (!ctx.cr6.eq) goto loc_88053AD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x88053ab4
	if (ctx.cr6.lt) goto loc_88053AB4;
	// b 0x88053b6c
	goto loc_88053B6C;
loc_88053AD4:
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
	ctx.current_instruction = 0x88053AF8;
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
	// blt cr6,0x88053b18
	if (ctx.cr6.lt) goto loc_88053B18;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x88053b1c
	if (!ctx.cr6.lt) goto loc_88053B1C;
loc_88053B18:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_88053B1C:
	// stwx r10,r7,r8
	ctx.current_instruction = 0x88053B1C;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x88053b6c
	if (ctx.cr0.lt) goto loc_88053B6C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_88053B38:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88053b6c
	if (ctx.cr6.eq) goto loc_88053B6C;
	// lwz r9,-4(r10)
	ctx.current_instruction = 0x88053B40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88053b5c
	if (ctx.cr6.lt) goto loc_88053B5C;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x88053b60
	if (!ctx.cr6.lt) goto loc_88053B60;
loc_88053B5C:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_88053B60:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ctx.current_instruction = 0x88053B64;
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x88053b38
	if (!ctx.cr0.lt) goto loc_88053B38;
loc_88053B6C:
	// lwzx r10,r28,r29
	ctx.current_instruction = 0x88053B6C;
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
	ctx.current_instruction = 0x88053B80;
	REX_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// bge cr6,0x88053bb4
	if (!ctx.cr6.lt) goto loc_88053BB4;
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
	// beq cr6,0x88053bb4
	if (ctx.cr6.eq) goto loc_88053BB4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88053BAC:
	// stwu r9,4(r10)
	ctx.current_instruction = 0x88053BAC;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88053bac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053BAC;
loc_88053BB4:
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
loc_88053BF0:
	// lwz r5,4(r10)
	ctx.current_instruction = 0x88053BF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r3,-160(r1)
	ctx.current_instruction = 0x88053BF8;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ctx.current_instruction = 0x88053C04;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.current_instruction = 0x88053C08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x88053bf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053BF0;
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
loc_88053C30:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88053c44
	if (ctx.cr6.lt) goto loc_88053C44;
	// lwz r10,0(r8)
	ctx.current_instruction = 0x88053C38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	ctx.current_instruction = 0x88053C3C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x88053c48
	goto loc_88053C48;
loc_88053C44:
	// stw r23,0(r11)
	ctx.current_instruction = 0x88053C44;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_88053C48:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x88053c30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053C30;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x88053de8
	goto loc_88053DE8;
loc_88053C64:
	// lwz r5,0(r20)
	ctx.current_instruction = 0x88053C64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88053d34
	if (ctx.cr6.lt) goto loc_88053D34;
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
	ctx.current_instruction = 0x88053C84;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	ctx.current_instruction = 0x88053C88;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r23,8(r11)
	ctx.current_instruction = 0x88053C90;
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
	ctx.current_instruction = 0x88053CA8;
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
	ctx.current_instruction = 0x88053CBC;
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
loc_88053CC0:
	// lwz r31,4(r10)
	ctx.current_instruction = 0x88053CC0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r30,r31,r9
	ctx.r30.u64 = ctx.r31.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	ctx.current_instruction = 0x88053CC8;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// srw r31,r31,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ctx.current_instruction = 0x88053CD4;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.current_instruction = 0x88053CD8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x88053cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053CC0;
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
loc_88053D00:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88053d14
	if (ctx.cr6.lt) goto loc_88053D14;
	// lwz r10,0(r8)
	ctx.current_instruction = 0x88053D08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	ctx.current_instruction = 0x88053D0C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x88053d18
	goto loc_88053D18;
loc_88053D14:
	// stw r23,0(r11)
	ctx.current_instruction = 0x88053D14;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_88053D18:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x88053d00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053D00;
	// lwz r11,20(r20)
	ctx.current_instruction = 0x88053D28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x88053de8
	goto loc_88053DE8;
loc_88053D34:
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lwz r7,-152(r1)
	ctx.current_instruction = 0x88053D38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,20(r20)
	ctx.current_instruction = 0x88053D40;
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
	ctx.current_instruction = 0x88053D54;
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
loc_88053D7C:
	// lwz r8,4(r10)
	ctx.current_instruction = 0x88053D7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	ctx.current_instruction = 0x88053D84;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x88053D90;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.current_instruction = 0x88053D94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x88053d7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053D7C;
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
loc_88053DBC:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x88053dd0
	if (ctx.cr6.lt) goto loc_88053DD0;
	// lwz r10,0(r8)
	ctx.current_instruction = 0x88053DC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	ctx.current_instruction = 0x88053DC8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x88053dd4
	goto loc_88053DD4;
loc_88053DD0:
	// stw r23,0(r11)
	ctx.current_instruction = 0x88053DD0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_88053DD4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x88053dbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88053DBC;
loc_88053DE4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_88053DE8:
	// subfic r10,r21,31
	ctx.xer.ca = ctx.r21.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r21.u64;
	// lwz r11,16(r20)
	ctx.current_instruction = 0x88053DEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 16);
	// subfic r9,r19,0
	ctx.xer.ca = ctx.r19.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r19.u64;
	// lwz r8,-152(r1)
	ctx.current_instruction = 0x88053DF4;
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
	// bne cr6,0x88053e24
	if (!ctx.cr6.eq) goto loc_88053E24;
	// lwz r11,-148(r1)
	ctx.current_instruction = 0x88053E18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	ctx.current_instruction = 0x88053E1C;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x88053e2c
	goto loc_88053E2C;
loc_88053E24:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x88053e30
	if (!ctx.cr6.eq) goto loc_88053E30;
loc_88053E2C:
	// stw r10,0(r4)
	ctx.current_instruction = 0x88053E2C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_88053E30:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880693B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880693B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880693B8;
	ctx.current_instruction = 0x880693B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x882436c0
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069430) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88069430);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069430;
	ctx.current_instruction = 0x88069430;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x882436c0
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880694D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880694D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880694D8;
	ctx.current_instruction = 0x880694D8;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x882436e0
	__imp__KeResetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880697E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880697E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880697E0) {
			switch (rex_dispatch_address) {
				case 0x88069828:
				case 0x8806983C:
				case 0x88069850:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880697E0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88069828: goto loc_88069828;
		case 0x8806983C: goto loc_8806983C;
		case 0x88069850: goto loc_88069850;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880697E4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880697E8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880697EC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,248
	ctx.r11.s64 = ctx.r3.s64 + 248;
loc_880697F8:
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
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
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
	// bne 0x880697f8
	if (!ctx.cr0.eq) goto loc_880697F8;
	// lwz r3,44(r31)
	ctx.current_instruction = 0x88069814;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,0(r3)
	ctx.current_instruction = 0x88069818;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,96(r8)
	ctx.current_instruction = 0x8806981C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88069828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069828:
	// lwz r6,0(r31)
	ctx.current_instruction = 0x88069828;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,200(r6)
	ctx.current_instruction = 0x88069830;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 200);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8806983C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806983C:
	// lwz r4,0(r31)
	ctx.current_instruction = 0x8806983C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,208(r4)
	ctx.current_instruction = 0x88069844;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88069850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069850:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88069854;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806985C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806D290) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806D290);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806D290;
	ctx.current_instruction = 0x8806D290;
	// lwz r11,8176(r3)
	ctx.current_instruction = 0x8806D290;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806d2c0
	if (ctx.cr6.eq) goto loc_8806D2C0;
	// lwz r11,8180(r3)
	ctx.current_instruction = 0x8806D29C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8180);
	// lwz r10,168(r11)
	ctx.current_instruction = 0x8806D2A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8806d2c0
	if (ctx.cr6.eq) goto loc_8806D2C0;
	// lwz r11,56(r11)
	ctx.current_instruction = 0x8806D2AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8806d2c0
	if (ctx.cr6.lt) goto loc_8806D2C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8806d36c
	if (!ctx.cr6.gt) goto loc_8806D36C;
loc_8806D2C0:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8806D2C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,7596(r3)
	ctx.current_instruction = 0x8806D2CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7596);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806d304
	if (!ctx.cr6.eq) goto loc_8806D304;
	// lwz r11,7904(r3)
	ctx.current_instruction = 0x8806D2D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7904);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x8806d2f0
	if (!ctx.cr6.lt) goto loc_8806D2F0;
loc_8806D2E4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,21076(r3)
	ctx.current_instruction = 0x8806D2E8;
	REX_STORE_U32(ctx.r3.u32 + 21076, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806D2F0:
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,21076(r3)
	ctx.current_instruction = 0x8806D2FC;
	REX_STORE_U32(ctx.r3.u32 + 21076, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806D304:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,-16(r1)
	ctx.current_instruction = 0x8806D30C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.current_instruction = 0x8806D310;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lfd f0,11992(r10)
	ctx.current_instruction = 0x8806D31C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 11992);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f13,11984(r9)
	ctx.current_instruction = 0x8806D324;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 11984);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8806d334
	if (ctx.cr6.lt) goto loc_8806D334;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8806D334:
	// lfd f13,7888(r3)
	ctx.current_instruction = 0x8806D334;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 7888);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8806d2e4
	if (ctx.cr6.lt) goto loc_8806D2E4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f12,11976(r11)
	ctx.current_instruction = 0x8806D344;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 11976);
	// fmul f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,37888
	ctx.r10.u64 = ctx.r11.u64 | 37888;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8806d36c
	if (ctx.cr6.gt) goto loc_8806D36C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8806D36C:
	// stw r11,21076(r3)
	ctx.current_instruction = 0x8806D36C;
	REX_STORE_U32(ctx.r3.u32 + 21076, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806FD80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806FD80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806FD80) {
			switch (rex_dispatch_address) {
				case 0x8806FEF0:
				case 0x8806FF04:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806FD80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806FEF0: goto loc_8806FEF0;
		case 0x8806FF04: goto loc_8806FF04;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806FD84;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806FD88;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8806FD8C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,632(r3)
	ctx.current_instruction = 0x8806FD90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,624(r3)
	ctx.current_instruction = 0x8806FD98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r9,2572(r3)
	ctx.current_instruction = 0x8806FD9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2572);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,1352(r3)
	ctx.current_instruction = 0x8806FDA8;
	REX_STORE_U32(ctx.r3.u32 + 1352, ctx.r8.u32);
	// lwz r7,648(r3)
	ctx.current_instruction = 0x8806FDAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// lwz r6,640(r3)
	ctx.current_instruction = 0x8806FDB0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// subf r5,r6,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r6.u64;
	// stw r5,1364(r3)
	ctx.current_instruction = 0x8806FDB8;
	REX_STORE_U32(ctx.r3.u32 + 1364, ctx.r5.u32);
	// lwz r9,1352(r31)
	ctx.current_instruction = 0x8806FDBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// lwz r8,1364(r31)
	ctx.current_instruction = 0x8806FDC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1364);
	// lwz r4,636(r3)
	ctx.current_instruction = 0x8806FDC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// lwz r3,628(r3)
	ctx.current_instruction = 0x8806FDC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 628);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r11,1360(r31)
	ctx.current_instruction = 0x8806FDD0;
	REX_STORE_U32(ctx.r31.u32 + 1360, ctx.r11.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r6,644(r31)
	ctx.current_instruction = 0x8806FDD8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 644);
	// lwz r10,652(r31)
	ctx.current_instruction = 0x8806FDDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 652);
	// subf r5,r6,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,1372(r31)
	ctx.current_instruction = 0x8806FDE8;
	REX_STORE_U32(ctx.r31.u32 + 1372, ctx.r5.u32);
	// stw r9,816(r31)
	ctx.current_instruction = 0x8806FDEC;
	REX_STORE_U32(ctx.r31.u32 + 816, ctx.r9.u32);
	// stw r8,820(r31)
	ctx.current_instruction = 0x8806FDF0;
	REX_STORE_U32(ctx.r31.u32 + 820, ctx.r8.u32);
	// stw r7,824(r31)
	ctx.current_instruction = 0x8806FDF4;
	REX_STORE_U32(ctx.r31.u32 + 824, ctx.r7.u32);
	// stw r6,828(r31)
	ctx.current_instruction = 0x8806FDF8;
	REX_STORE_U32(ctx.r31.u32 + 828, ctx.r6.u32);
	// beq cr6,0x8806fe30
	if (ctx.cr6.eq) goto loc_8806FE30;
	// lwz r10,796(r31)
	ctx.current_instruction = 0x8806FE00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// lwz r11,800(r31)
	ctx.current_instruction = 0x8806FE04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,820(r31)
	ctx.current_instruction = 0x8806FE1C;
	REX_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,828(r31)
	ctx.current_instruction = 0x8806FE24;
	REX_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// stw r4,816(r31)
	ctx.current_instruction = 0x8806FE28;
	REX_STORE_U32(ctx.r31.u32 + 816, ctx.r4.u32);
	// stw r3,824(r31)
	ctx.current_instruction = 0x8806FE2C;
	REX_STORE_U32(ctx.r31.u32 + 824, ctx.r3.u32);
loc_8806FE30:
	// lwz r10,816(r31)
	ctx.current_instruction = 0x8806FE30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 816);
	// mullw r5,r7,r9
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwz r11,820(r31)
	ctx.current_instruction = 0x8806FE38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 820);
	// lwz r4,796(r31)
	ctx.current_instruction = 0x8806FE3C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// stw r5,1376(r31)
	ctx.current_instruction = 0x8806FE40;
	REX_STORE_U32(ctx.r31.u32 + 1376, ctx.r5.u32);
	// addi r3,r10,32
	ctx.r3.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r3,1356(r31)
	ctx.current_instruction = 0x8806FE4C;
	REX_STORE_U32(ctx.r31.u32 + 1356, ctx.r3.u32);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// stw r11,1368(r31)
	ctx.current_instruction = 0x8806FE54;
	REX_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// bne cr6,0x8806fe6c
	if (!ctx.cr6.eq) goto loc_8806FE6C;
	// lwz r11,800(r31)
	ctx.current_instruction = 0x8806FE5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8806fe70
	if (ctx.cr6.eq) goto loc_8806FE70;
loc_8806FE6C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8806FE70:
	// stw r10,832(r31)
	ctx.current_instruction = 0x8806FE70;
	REX_STORE_U32(ctx.r31.u32 + 832, ctx.r10.u32);
	// addi r10,r9,64
	ctx.r10.s64 = ctx.r9.s64 + 64;
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// stw r10,1380(r31)
	ctx.current_instruction = 0x8806FE80;
	REX_STORE_U32(ctx.r31.u32 + 1380, ctx.r10.u32);
	// srawi r8,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 4;
	// stw r11,1384(r31)
	ctx.current_instruction = 0x8806FE88;
	REX_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// stw r9,720(r31)
	ctx.current_instruction = 0x8806FE8C;
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r9.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r3,r8,r9
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r8,724(r31)
	ctx.current_instruction = 0x8806FE98;
	REX_STORE_U32(ctx.r31.u32 + 724, ctx.r8.u32);
	// stw r3,728(r31)
	ctx.current_instruction = 0x8806FE9C;
	REX_STORE_U32(ctx.r31.u32 + 728, ctx.r3.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r7,64
	ctx.r8.s64 = ctx.r7.s64 + 64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r9,732(r31)
	ctx.current_instruction = 0x8806FEAC;
	REX_STORE_U32(ctx.r31.u32 + 732, ctx.r9.u32);
	// addi r7,r6,32
	ctx.r7.s64 = ctx.r6.s64 + 32;
	// stw r8,1388(r31)
	ctx.current_instruction = 0x8806FEB4;
	REX_STORE_U32(ctx.r31.u32 + 1388, ctx.r8.u32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,1392(r31)
	ctx.current_instruction = 0x8806FEC0;
	REX_STORE_U32(ctx.r31.u32 + 1392, ctx.r7.u32);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,1408(r31)
	ctx.current_instruction = 0x8806FEC8;
	REX_STORE_U32(ctx.r31.u32 + 1408, ctx.r3.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,1404(r31)
	ctx.current_instruction = 0x8806FED0;
	REX_STORE_U32(ctx.r31.u32 + 1404, ctx.r6.u32);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r9,1400(r31)
	ctx.current_instruction = 0x8806FED8;
	REX_STORE_U32(ctx.r31.u32 + 1400, ctx.r9.u32);
	// stw r11,1412(r31)
	ctx.current_instruction = 0x8806FEDC;
	REX_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,1396(r31)
	ctx.current_instruction = 0x8806FEE4;
	REX_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e6cc8
	ctx.lr = 0x8806FEF0;
	sub_880E6CC8(ctx, base);
loc_8806FEF0:
	// lwz r8,4(r31)
	ctx.current_instruction = 0x8806FEF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x8806ff04
	if (!ctx.cr6.eq) goto loc_8806FF04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5b50
	ctx.lr = 0x8806FF04;
	sub_880F5B50(ctx, base);
loc_8806FF04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806FF08;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806FF10;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88078398) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88078398);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88078398;
	ctx.current_instruction = 0x88078398;
	// lfd f0,7744(r3)
	ctx.current_instruction = 0x88078398;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 7744);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,8008(r3)
	ctx.current_instruction = 0x880783A0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 8008);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	ctx.current_instruction = 0x880783AC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r11,-12(r1)
	ctx.current_instruction = 0x880783B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8020(r3)
	ctx.current_instruction = 0x880783B8;
	REX_STORE_U32(ctx.r3.u32 + 8020, ctx.r11.u32);
	// bgt cr6,0x880783c8
	if (ctx.cr6.gt) goto loc_880783C8;
	// lwz r11,7884(r3)
	ctx.current_instruction = 0x880783C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7884);
	// stw r11,8020(r3)
	ctx.current_instruction = 0x880783C4;
	REX_STORE_U32(ctx.r3.u32 + 8020, ctx.r11.u32);
loc_880783C8:
	// lwz r8,7596(r3)
	ctx.current_instruction = 0x880783C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 7596);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x880783fc
	if (!ctx.cr6.eq) goto loc_880783FC;
	// lfd f13,30568(r3)
	ctx.current_instruction = 0x880783D4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 30568);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	ctx.current_instruction = 0x880783E0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r11,-12(r1)
	ctx.current_instruction = 0x880783E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,30580(r3)
	ctx.current_instruction = 0x880783EC;
	REX_STORE_U32(ctx.r3.u32 + 30580, ctx.r11.u32);
	// bgt cr6,0x880783fc
	if (ctx.cr6.gt) goto loc_880783FC;
	// lwz r11,30576(r3)
	ctx.current_instruction = 0x880783F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30576);
	// stw r11,30580(r3)
	ctx.current_instruction = 0x880783F8;
	REX_STORE_U32(ctx.r3.u32 + 30580, ctx.r11.u32);
loc_880783FC:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r9,8000(r3)
	ctx.current_instruction = 0x88078400;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8000);
	// lwz r11,8020(r3)
	ctx.current_instruction = 0x88078404;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8020);
	// ori r7,r10,65533
	ctx.r7.u64 = ctx.r10.u64 | 65533;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8807841c
	if (ctx.cr6.lt) goto loc_8807841C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8807841C:
	// stw r11,8020(r3)
	ctx.current_instruction = 0x8807841C;
	REX_STORE_U32(ctx.r3.u32 + 8020, ctx.r11.u32);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x88078434
	if (!ctx.cr6.eq) goto loc_88078434;
	// lwz r11,7952(r3)
	ctx.current_instruction = 0x88078428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7952);
	// lwz r10,30580(r3)
	ctx.current_instruction = 0x8807842C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30580);
	// b 0x88078438
	goto loc_88078438;
loc_88078434:
	// lwz r10,7952(r3)
	ctx.current_instruction = 0x88078434;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7952);
loc_88078438:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,7952(r3)
	ctx.current_instruction = 0x8807843C;
	REX_STORE_U32(ctx.r3.u32 + 7952, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88078450
	if (ctx.cr6.lt) goto loc_88078450;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_88078450:
	// lwz r10,2192(r3)
	ctx.current_instruction = 0x88078450;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2192);
	// lwz r9,2200(r3)
	ctx.current_instruction = 0x88078454;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2200);
	// stw r11,7952(r3)
	ctx.current_instruction = 0x88078458;
	REX_STORE_U32(ctx.r3.u32 + 7952, ctx.r11.u32);
	// subf. r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r8,2192(r3)
	ctx.current_instruction = 0x88078460;
	REX_STORE_U32(ctx.r3.u32 + 2192, ctx.r8.u32);
	// bgelr 
	if (!ctx.cr0.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2192(r3)
	ctx.current_instruction = 0x8807846C;
	REX_STORE_U32(ctx.r3.u32 + 2192, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807C410) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807C410;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807C410) {
			switch (rex_dispatch_address) {
				case 0x8807C418:
				case 0x8807C474:
				case 0x8807C4C8:
				case 0x8807C4EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807C410;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807C418: goto loc_8807C418;
		case 0x8807C474: goto loc_8807C474;
		case 0x8807C4C8: goto loc_8807C4C8;
		case 0x8807C4EC: goto loc_8807C4EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8807C418;
	__savegprlr_24(ctx, base);
loc_8807C418:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8807C418;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// stw r31,0(r3)
	ctx.current_instruction = 0x8807C428;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r31,4(r30)
	ctx.current_instruction = 0x8807C434;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r31,8(r30)
	ctx.current_instruction = 0x8807C43C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,12(r30)
	ctx.current_instruction = 0x8807C444;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r31,0(r4)
	ctx.current_instruction = 0x8807C44C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,16(r30)
	ctx.current_instruction = 0x8807C454;
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r5,20(r30)
	ctx.current_instruction = 0x8807C458;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r5.u32);
	// ble cr6,0x8807c494
	if (!ctx.cr6.gt) goto loc_8807C494;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// ori r25,r11,32768
	ctx.r25.u64 = ctx.r11.u64 | 32768;
loc_8807C468:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x88050340
	ctx.lr = 0x8807C474;
	sub_88050340(ctx, base);
loc_8807C474:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807c4b0
	if (ctx.cr6.eq) goto loc_8807C4B0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r31,4(r3)
	ctx.current_instruction = 0x8807C480;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r3,0(r27)
	ctx.current_instruction = 0x8807C484;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8807c468
	if (ctx.cr6.lt) goto loc_8807C468;
loc_8807C494:
	// stw r3,12(r30)
	ctx.current_instruction = 0x8807C494;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// stw r31,0(r3)
	ctx.current_instruction = 0x8807C498;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,4(r30)
	ctx.current_instruction = 0x8807C4A0;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,0(r30)
	ctx.current_instruction = 0x8807C4A4;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8807C4B0:
	// lwz r3,0(r26)
	ctx.current_instruction = 0x8807C4B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807c4d4
	if (ctx.cr6.eq) goto loc_8807C4D4;
loc_8807C4BC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x8807C4C0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x88050358
	ctx.lr = 0x8807C4C8;
	sub_88050358(ctx, base);
loc_8807C4C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8807c4bc
	if (!ctx.cr6.eq) goto loc_8807C4BC;
loc_8807C4D4:
	// lwz r3,0(r30)
	ctx.current_instruction = 0x8807C4D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807c4f8
	if (ctx.cr6.eq) goto loc_8807C4F8;
loc_8807C4E0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x8807C4E4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x88050358
	ctx.lr = 0x8807C4EC;
	sub_88050358(ctx, base);
loc_8807C4EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8807c4e0
	if (!ctx.cr6.eq) goto loc_8807C4E0;
loc_8807C4F8:
	// li r11,-100
	ctx.r11.s64 = -100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r24)
	ctx.current_instruction = 0x8807C500;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807D9E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807D9E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807D9E0) {
			switch (rex_dispatch_address) {
				case 0x8807D9E8:
				case 0x8807DA2C:
				case 0x8807DA60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807D9E0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807D9E8: goto loc_8807D9E8;
		case 0x8807DA2C: goto loc_8807DA2C;
		case 0x8807DA60: goto loc_8807DA60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8807D9E8;
	__savegprlr_27(ctx, base);
loc_8807D9E8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8807D9E8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8807D9EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r10,9356
	ctx.r10.s64 = 613154816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ori r27,r10,32768
	ctx.r27.u64 = ctx.r10.u64 | 32768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8807da4c
	if (!ctx.cr6.gt) goto loc_8807DA4C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8807DA10:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8807DA10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.current_instruction = 0x8807DA18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807da38
	if (ctx.cr6.eq) goto loc_8807DA38;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x8807DA2C;
	sub_88050358(ctx, base);
loc_8807DA2C:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8807DA2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r28,4(r11)
	ctx.current_instruction = 0x8807DA34;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_8807DA38:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807DA38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8807da10
	if (ctx.cr6.lt) goto loc_8807DA10;
loc_8807DA4C:
	// lwz r3,0(r31)
	ctx.current_instruction = 0x8807DA4C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807da64
	if (ctx.cr6.eq) goto loc_8807DA64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x8807DA60;
	sub_88050358(ctx, base);
loc_8807DA60:
	// stw r28,0(r31)
	ctx.current_instruction = 0x8807DA60;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8807DA64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88080098) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88080098;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88080098) {
			switch (rex_dispatch_address) {
				case 0x880801F0:
				case 0x8808021C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88080098;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880801F0: goto loc_880801F0;
		case 0x8808021C: goto loc_8808021C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8808009C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880800A0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880800A4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// lwz r11,2572(r3)
	ctx.current_instruction = 0x880800AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2572);
	// srawi r7,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 1;
	// stw r4,1352(r3)
	ctx.current_instruction = 0x880800B4;
	REX_STORE_U32(ctx.r3.u32 + 1352, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,1360(r3)
	ctx.current_instruction = 0x880800BC;
	REX_STORE_U32(ctx.r3.u32 + 1360, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,816(r3)
	ctx.current_instruction = 0x880800C4;
	REX_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// stw r8,1364(r3)
	ctx.current_instruction = 0x880800C8;
	REX_STORE_U32(ctx.r3.u32 + 1364, ctx.r8.u32);
	// stw r7,1372(r3)
	ctx.current_instruction = 0x880800CC;
	REX_STORE_U32(ctx.r3.u32 + 1372, ctx.r7.u32);
	// stw r8,820(r3)
	ctx.current_instruction = 0x880800D0;
	REX_STORE_U32(ctx.r3.u32 + 820, ctx.r8.u32);
	// stw r5,824(r3)
	ctx.current_instruction = 0x880800D4;
	REX_STORE_U32(ctx.r3.u32 + 824, ctx.r5.u32);
	// stw r7,828(r3)
	ctx.current_instruction = 0x880800D8;
	REX_STORE_U32(ctx.r3.u32 + 828, ctx.r7.u32);
	// beq cr6,0x88080110
	if (ctx.cr6.eq) goto loc_88080110;
	// lwz r10,796(r3)
	ctx.current_instruction = 0x880800E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// lwz r11,800(r3)
	ctx.current_instruction = 0x880800E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// stw r11,820(r3)
	ctx.current_instruction = 0x880800F8;
	REX_STORE_U32(ctx.r3.u32 + 820, ctx.r11.u32);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,828(r31)
	ctx.current_instruction = 0x88080104;
	REX_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// stw r6,816(r31)
	ctx.current_instruction = 0x88080108;
	REX_STORE_U32(ctx.r31.u32 + 816, ctx.r6.u32);
	// stw r3,824(r31)
	ctx.current_instruction = 0x8808010C;
	REX_STORE_U32(ctx.r31.u32 + 824, ctx.r3.u32);
loc_88080110:
	// lwz r10,816(r31)
	ctx.current_instruction = 0x88080110;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 816);
	// mullw r9,r4,r5
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r11,820(r31)
	ctx.current_instruction = 0x88080118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 820);
	// lwz r6,796(r31)
	ctx.current_instruction = 0x8808011C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// stw r9,1376(r31)
	ctx.current_instruction = 0x88080120;
	REX_STORE_U32(ctx.r31.u32 + 1376, ctx.r9.u32);
	// addi r3,r10,32
	ctx.r3.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r3,1356(r31)
	ctx.current_instruction = 0x8808012C;
	REX_STORE_U32(ctx.r31.u32 + 1356, ctx.r3.u32);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// stw r11,1368(r31)
	ctx.current_instruction = 0x88080134;
	REX_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// bne cr6,0x8808014c
	if (!ctx.cr6.eq) goto loc_8808014C;
	// lwz r11,800(r31)
	ctx.current_instruction = 0x8808013C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x88080150
	if (ctx.cr6.eq) goto loc_88080150;
loc_8808014C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88080150:
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// stw r11,832(r31)
	ctx.current_instruction = 0x88080154;
	REX_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// li r9,6144
	ctx.r9.s64 = 6144;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,720(r31)
	ctx.current_instruction = 0x88080160;
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// cmpwi cr6,r11,6144
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6144, ctx.xer);
	// blt cr6,0x88080178
	if (ctx.cr6.lt) goto loc_88080178;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_88080178:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// stw r9,6732(r31)
	ctx.current_instruction = 0x8808017C;
	REX_STORE_U32(ctx.r31.u32 + 6732, ctx.r9.u32);
	// srawi r8,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 4;
	// addi r9,r4,64
	ctx.r9.s64 = ctx.r4.s64 + 64;
	// stw r11,1384(r31)
	ctx.current_instruction = 0x88080188;
	REX_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// mullw r3,r8,r10
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// stw r8,724(r31)
	ctx.current_instruction = 0x88080190;
	REX_STORE_U32(ctx.r31.u32 + 724, ctx.r8.u32);
	// stw r9,1380(r31)
	ctx.current_instruction = 0x88080194;
	REX_STORE_U32(ctx.r31.u32 + 1380, ctx.r9.u32);
	// stw r3,728(r31)
	ctx.current_instruction = 0x88080198;
	REX_STORE_U32(ctx.r31.u32 + 728, ctx.r3.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r10,732(r31)
	ctx.current_instruction = 0x880801A8;
	REX_STORE_U32(ctx.r31.u32 + 732, ctx.r10.u32);
	// addi r8,r5,64
	ctx.r8.s64 = ctx.r5.s64 + 64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,1388(r31)
	ctx.current_instruction = 0x880801B8;
	REX_STORE_U32(ctx.r31.u32 + 1388, ctx.r8.u32);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,1408(r31)
	ctx.current_instruction = 0x880801C0;
	REX_STORE_U32(ctx.r31.u32 + 1408, ctx.r3.u32);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// stw r5,1404(r31)
	ctx.current_instruction = 0x880801C8;
	REX_STORE_U32(ctx.r31.u32 + 1404, ctx.r5.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,1400(r31)
	ctx.current_instruction = 0x880801D0;
	REX_STORE_U32(ctx.r31.u32 + 1400, ctx.r9.u32);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,1392(r31)
	ctx.current_instruction = 0x880801D8;
	REX_STORE_U32(ctx.r31.u32 + 1392, ctx.r7.u32);
	// stw r11,1412(r31)
	ctx.current_instruction = 0x880801DC;
	REX_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,1396(r31)
	ctx.current_instruction = 0x880801E4;
	REX_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e6cc8
	ctx.lr = 0x880801F0;
	sub_880E6CC8(ctx, base);
loc_880801F0:
	// lwz r8,4(r31)
	ctx.current_instruction = 0x880801F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x8808021c
	if (!ctx.cr6.eq) goto loc_8808021C;
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x880801FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808021c
	if (ctx.cr6.eq) goto loc_8808021C;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x88080208;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808021c
	if (ctx.cr6.eq) goto loc_8808021C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5b50
	ctx.lr = 0x8808021C;
	sub_880F5B50(ctx, base);
loc_8808021C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88080220;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88080228;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88085DF0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88085DF0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88085DF0;
	ctx.current_instruction = 0x88085DF0;
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// subf. r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88085e0c
	if (!ctx.cr0.eq) goto loc_88085E0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	ctx.current_instruction = 0x88085E04;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88085E0C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x88085e20
	if (!ctx.cr6.lt) goto loc_88085E20;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	ctx.current_instruction = 0x88085E18;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88085E20:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x88085e34
	if (!ctx.cr6.lt) goto loc_88085E34;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	ctx.current_instruction = 0x88085E2C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88085E34:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bge cr6,0x88085e48
	if (!ctx.cr6.lt) goto loc_88085E48;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r4)
	ctx.current_instruction = 0x88085E40;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88085E48:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// blt cr6,0x88085e58
	if (ctx.cr6.lt) goto loc_88085E58;
	// li r11,5
	ctx.r11.s64 = 5;
loc_88085E58:
	// stw r11,0(r4)
	ctx.current_instruction = 0x88085E58;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8808A188) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8808A188;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8808A188) {
			switch (rex_dispatch_address) {
				case 0x8808A190:
				case 0x8808A27C:
				case 0x8808A294:
				case 0x8808A2D8:
				case 0x8808A2F0:
				case 0x8808A394:
				case 0x8808A3AC:
				case 0x8808A3F0:
				case 0x8808A408:
				case 0x8808A4AC:
				case 0x8808A4C4:
				case 0x8808A508:
				case 0x8808A520:
				case 0x8808A5B0:
				case 0x8808A5C8:
				case 0x8808A60C:
				case 0x8808A624:
				case 0x8808A6D0:
				case 0x8808A6E8:
				case 0x8808A72C:
				case 0x8808A744:
				case 0x8808A7DC:
				case 0x8808A7F4:
				case 0x8808A838:
				case 0x8808A850:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8808A188;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8808A190: goto loc_8808A190;
		case 0x8808A27C: goto loc_8808A27C;
		case 0x8808A294: goto loc_8808A294;
		case 0x8808A2D8: goto loc_8808A2D8;
		case 0x8808A2F0: goto loc_8808A2F0;
		case 0x8808A394: goto loc_8808A394;
		case 0x8808A3AC: goto loc_8808A3AC;
		case 0x8808A3F0: goto loc_8808A3F0;
		case 0x8808A408: goto loc_8808A408;
		case 0x8808A4AC: goto loc_8808A4AC;
		case 0x8808A4C4: goto loc_8808A4C4;
		case 0x8808A508: goto loc_8808A508;
		case 0x8808A520: goto loc_8808A520;
		case 0x8808A5B0: goto loc_8808A5B0;
		case 0x8808A5C8: goto loc_8808A5C8;
		case 0x8808A60C: goto loc_8808A60C;
		case 0x8808A624: goto loc_8808A624;
		case 0x8808A6D0: goto loc_8808A6D0;
		case 0x8808A6E8: goto loc_8808A6E8;
		case 0x8808A72C: goto loc_8808A72C;
		case 0x8808A744: goto loc_8808A744;
		case 0x8808A7DC: goto loc_8808A7DC;
		case 0x8808A7F4: goto loc_8808A7F4;
		case 0x8808A838: goto loc_8808A838;
		case 0x8808A850: goto loc_8808A850;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8808A190;
	__savegprlr_14(ctx, base);
loc_8808A190:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x8808A190;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// stw r5,340(r1)
	ctx.current_instruction = 0x8808A198;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r8,388(r1)
	ctx.current_instruction = 0x8808A1A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r20,484(r1)
	ctx.current_instruction = 0x8808A1A8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r24,476(r1)
	ctx.current_instruction = 0x8808A1B0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// subfic r4,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// lwz r19,468(r1)
	ctx.current_instruction = 0x8808A1B8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r18,460(r1)
	ctx.current_instruction = 0x8808A1C0;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// subfe r8,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r17,444(r1)
	ctx.current_instruction = 0x8808A1C8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// lwz r16,436(r1)
	ctx.current_instruction = 0x8808A1D0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r5,396(r1)
	ctx.current_instruction = 0x8808A1D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r29,412(r1)
	ctx.current_instruction = 0x8808A1E0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// subfic r7,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r5.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r9,-2
	ctx.r9.s64 = -2;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 & ctx.r28.u64;
	// and r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 & ctx.r9.u64;
	// and r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r4,148(r1)
	ctx.current_instruction = 0x8808A200;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// and r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 & ctx.r28.u64;
	// stw r30,144(r1)
	ctx.current_instruction = 0x8808A208;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r22,16
	ctx.r22.s64 = 16;
	// li r15,0
	ctx.r15.s64 = 0;
	// stw r10,140(r1)
	ctx.current_instruction = 0x8808A214;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8808a468
	if (!ctx.cr6.lt) goto loc_8808A468;
loc_8808A228:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x8808A228;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x8808a33c
	if (!ctx.cr6.lt) goto loc_8808A33C;
	// lwz r11,452(r1)
	ctx.current_instruction = 0x8808A23C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// add r25,r27,r11
	ctx.r25.u64 = ctx.r27.u64 + ctx.r11.u64;
loc_8808A244:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808A244;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808A24C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x8808a280
	if (!ctx.cr6.eq) goto loc_8808A280;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808A268;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A270;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A27C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A27C:
	// b 0x8808a294
	goto loc_8808A294;
loc_8808A280:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808A280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A288;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A294:
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r19,116(r1)
	ctx.current_instruction = 0x8808A298;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r18,108(r1)
	ctx.current_instruction = 0x8808A2A0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808A2A8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808A2AC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808A2B8;
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
	ctx.lr = 0x8808A2D8;
	sub_88085938(ctx, base);
loc_8808A2D8:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8808A2E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r30,r17
	ctx.r4.u64 = ctx.r30.u64 + ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x8808A2F0;
	sub_88085E60(ctx, base);
loc_8808A2F0:
	// lwz r7,128(r1)
	ctx.current_instruction = 0x8808A2F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A2FC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x8808a30c
	if (ctx.cr6.eq) goto loc_8808A30C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A308;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8808A30C:
	// lwz r9,108(r24)
	ctx.current_instruction = 0x8808A30C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x8808A310;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8808a330
	if (!ctx.cr6.lt) goto loc_8808A330;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r14,r27
	ctx.r14.u64 = ctx.r27.u64;
loc_8808A330:
	// addic. r30,r30,2
	ctx.xer.ca = ctx.r30.u32 > 4294967293;
	ctx.r30.s64 = ctx.r30.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8808a244
	if (ctx.cr0.lt) goto loc_8808A244;
	// lwz r3,340(r1)
	ctx.current_instruction = 0x8808A338;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_8808A33C:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x8808A33C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,140(r1)
	ctx.current_instruction = 0x8808A344;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// subf r26,r11,r3
	ctx.r26.u64 = ctx.r3.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8808a45c
	if (ctx.cr6.lt) goto loc_8808A45C;
	// lwz r11,452(r1)
	ctx.current_instruction = 0x8808A354;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// add r25,r27,r11
	ctx.r25.u64 = ctx.r27.u64 + ctx.r11.u64;
loc_8808A35C:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808A35C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808A364;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x8808a398
	if (!ctx.cr6.eq) goto loc_8808A398;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A380;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808A388;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A394:
	// b 0x8808a3ac
	goto loc_8808A3AC;
loc_8808A398:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808A398;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A3A0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A3AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A3AC:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r19,116(r1)
	ctx.current_instruction = 0x8808A3B0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stw r18,108(r1)
	ctx.current_instruction = 0x8808A3B8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r9,84(r1)
	ctx.current_instruction = 0x8808A3C0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,100(r1)
	ctx.current_instruction = 0x8808A3C4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,92(r1)
	ctx.current_instruction = 0x8808A3D0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
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
	ctx.lr = 0x8808A3F0;
	sub_88085938(ctx, base);
loc_8808A3F0:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8808A3F8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r30,r17
	ctx.r4.u64 = ctx.r30.u64 + ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x8808A408;
	sub_88085E60(ctx, base);
loc_8808A408:
	// lwz r7,128(r1)
	ctx.current_instruction = 0x8808A408;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A414;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x8808a424
	if (ctx.cr6.eq) goto loc_8808A424;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A420;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8808A424:
	// lwz r9,108(r24)
	ctx.current_instruction = 0x8808A424;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x8808A428;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8808a448
	if (!ctx.cr6.lt) goto loc_8808A448;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r14,r27
	ctx.r14.u64 = ctx.r27.u64;
loc_8808A448:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808A448;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8808a35c
	if (!ctx.cr6.gt) goto loc_8808A35C;
	// lwz r3,340(r1)
	ctx.current_instruction = 0x8808A458;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_8808A45C:
	// lwz r30,144(r1)
	ctx.current_instruction = 0x8808A45C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addic. r27,r27,2
	ctx.xer.ca = ctx.r27.u32 > 4294967293;
	ctx.r27.s64 = ctx.r27.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x8808a228
	if (ctx.cr0.lt) goto loc_8808A228;
loc_8808A468:
	// addi r26,r3,-1
	ctx.r26.s64 = ctx.r3.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8808a56c
	if (!ctx.cr6.lt) goto loc_8808A56C;
loc_8808A474:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808A474;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808A47C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x8808a4b0
	if (!ctx.cr6.eq) goto loc_8808A4B0;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A498;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808A4A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A4AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A4AC:
	// b 0x8808a4c4
	goto loc_8808A4C4;
loc_8808A4B0:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808A4B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A4B8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A4C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A4C4:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r19,116(r1)
	ctx.current_instruction = 0x8808A4C8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r18,108(r1)
	ctx.current_instruction = 0x8808A4D0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808A4D8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	ctx.current_instruction = 0x8808A4DC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808A4E4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
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
	ctx.lr = 0x8808A508;
	sub_88085938(ctx, base);
loc_8808A508:
	// li r7,1
	ctx.r7.s64 = 1;
	// add r4,r30,r17
	ctx.r4.u64 = ctx.r30.u64 + ctx.r17.u64;
	// lwz r5,452(r1)
	ctx.current_instruction = 0x8808A510;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8808A518;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x88085e60
	ctx.lr = 0x8808A520;
	sub_88085E60(ctx, base);
loc_8808A520:
	// lwz r7,128(r1)
	ctx.current_instruction = 0x8808A520;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A52C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x8808a53c
	if (ctx.cr6.eq) goto loc_8808A53C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A538;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8808A53C:
	// lwz r9,108(r24)
	ctx.current_instruction = 0x8808A53C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x8808A540;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8808a560
	if (!ctx.cr6.lt) goto loc_8808A560;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,0
	ctx.r14.s64 = 0;
loc_8808A560:
	// addic. r30,r30,2
	ctx.xer.ca = ctx.r30.u32 > 4294967293;
	ctx.r30.s64 = ctx.r30.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8808a474
	if (ctx.cr0.lt) goto loc_8808A474;
	// lwz r3,340(r1)
	ctx.current_instruction = 0x8808A568;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_8808A56C:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808A56C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8808a678
	if (ctx.cr6.lt) goto loc_8808A678;
loc_8808A57C:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808A57C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808A584;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x8808a5b4
	if (!ctx.cr6.eq) goto loc_8808A5B4;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A59C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808A5A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A5B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A5B0:
	// b 0x8808a5c8
	goto loc_8808A5C8;
loc_8808A5B4:
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A5B4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808A5BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A5C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A5C8:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r19,116(r1)
	ctx.current_instruction = 0x8808A5CC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r18,108(r1)
	ctx.current_instruction = 0x8808A5D4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808A5DC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	ctx.current_instruction = 0x8808A5E0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r9,84(r1)
	ctx.current_instruction = 0x8808A5E8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
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
	ctx.lr = 0x8808A60C;
	sub_88085938(ctx, base);
loc_8808A60C:
	// li r7,1
	ctx.r7.s64 = 1;
	// add r4,r30,r17
	ctx.r4.u64 = ctx.r30.u64 + ctx.r17.u64;
	// lwz r5,452(r1)
	ctx.current_instruction = 0x8808A614;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8808A61C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x88085e60
	ctx.lr = 0x8808A624;
	sub_88085E60(ctx, base);
loc_8808A624:
	// lwz r8,128(r1)
	ctx.current_instruction = 0x8808A624;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A630;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x8808a640
	if (ctx.cr6.eq) goto loc_8808A640;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A63C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8808A640:
	// lwz r9,108(r24)
	ctx.current_instruction = 0x8808A640;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x8808A644;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8808a664
	if (!ctx.cr6.lt) goto loc_8808A664;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// li r14,0
	ctx.r14.s64 = 0;
loc_8808A664:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808A664;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lwz r3,340(r1)
	ctx.current_instruction = 0x8808A66C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8808a57c
	if (!ctx.cr6.gt) goto loc_8808A57C;
loc_8808A678:
	// lwz r11,148(r1)
	ctx.current_instruction = 0x8808A678;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8808a8b4
	if (ctx.cr6.lt) goto loc_8808A8B4;
loc_8808A684:
	// lwz r30,144(r1)
	ctx.current_instruction = 0x8808A684;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8808a790
	if (!ctx.cr6.lt) goto loc_8808A790;
	// lwz r11,452(r1)
	ctx.current_instruction = 0x8808A690;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// add r27,r28,r11
	ctx.r27.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_8808A698:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808A698;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808A6A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x8808a6d4
	if (!ctx.cr6.eq) goto loc_8808A6D4;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A6BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808A6C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A6D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A6D0:
	// b 0x8808a6e8
	goto loc_8808A6E8;
loc_8808A6D4:
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A6D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808A6DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A6E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A6E8:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r19,116(r1)
	ctx.current_instruction = 0x8808A6EC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r18,108(r1)
	ctx.current_instruction = 0x8808A6F4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808A6FC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	ctx.current_instruction = 0x8808A700;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r9,84(r1)
	ctx.current_instruction = 0x8808A708;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
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
	ctx.lr = 0x8808A72C;
	sub_88085938(ctx, base);
loc_8808A72C:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8808A734;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r30,r17
	ctx.r4.u64 = ctx.r30.u64 + ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x8808A744;
	sub_88085E60(ctx, base);
loc_8808A744:
	// lwz r8,128(r1)
	ctx.current_instruction = 0x8808A744;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A750;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x8808a760
	if (ctx.cr6.eq) goto loc_8808A760;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A75C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8808A760:
	// lwz r9,108(r24)
	ctx.current_instruction = 0x8808A760;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x8808A764;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8808a784
	if (!ctx.cr6.lt) goto loc_8808A784;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
loc_8808A784:
	// addic. r30,r30,2
	ctx.xer.ca = ctx.r30.u32 > 4294967293;
	ctx.r30.s64 = ctx.r30.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8808a698
	if (ctx.cr0.lt) goto loc_8808A698;
	// lwz r3,340(r1)
	ctx.current_instruction = 0x8808A78C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_8808A790:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808A790;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8808a8a4
	if (ctx.cr6.lt) goto loc_8808A8A4;
	// lwz r11,452(r1)
	ctx.current_instruction = 0x8808A7A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// add r27,r28,r11
	ctx.r27.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_8808A7A8:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808A7A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808A7B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x8808a7e0
	if (!ctx.cr6.eq) goto loc_8808A7E0;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A7C8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808A7D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A7DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A7DC:
	// b 0x8808a7f4
	goto loc_8808A7F4;
loc_8808A7E0:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808A7E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808A7E8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A7F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A7F4:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r19,116(r1)
	ctx.current_instruction = 0x8808A7F8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r18,108(r1)
	ctx.current_instruction = 0x8808A800;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808A808;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	ctx.current_instruction = 0x8808A80C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r9,84(r1)
	ctx.current_instruction = 0x8808A814;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
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
	ctx.lr = 0x8808A838;
	sub_88085938(ctx, base);
loc_8808A838:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8808A840;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r30,r17
	ctx.r4.u64 = ctx.r30.u64 + ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x8808A850;
	sub_88085E60(ctx, base);
loc_8808A850:
	// lwz r8,128(r1)
	ctx.current_instruction = 0x8808A850;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A85C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x8808a86c
	if (ctx.cr6.eq) goto loc_8808A86C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x8808A868;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8808A86C:
	// lwz r9,108(r24)
	ctx.current_instruction = 0x8808A86C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x8808A870;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8808a890
	if (!ctx.cr6.lt) goto loc_8808A890;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
loc_8808A890:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808A890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lwz r3,340(r1)
	ctx.current_instruction = 0x8808A898;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8808a7a8
	if (!ctx.cr6.gt) goto loc_8808A7A8;
loc_8808A8A4:
	// lwz r11,148(r1)
	ctx.current_instruction = 0x8808A8A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8808a684
	if (!ctx.cr6.gt) goto loc_8808A684;
loc_8808A8B4:
	// lwz r11,492(r1)
	ctx.current_instruction = 0x8808A8B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r10,500(r1)
	ctx.current_instruction = 0x8808A8B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r9,508(r1)
	ctx.current_instruction = 0x8808A8BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// stw r15,0(r11)
	ctx.current_instruction = 0x8808A8C0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// stw r14,0(r10)
	ctx.current_instruction = 0x8808A8C4;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r14.u32);
	// stw r23,0(r9)
	ctx.current_instruction = 0x8808A8C8;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r23.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BCB50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BCB50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BCB50) {
			switch (rex_dispatch_address) {
				case 0x880BCB58:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BCB50;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880BCB58: goto loc_880BCB58;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880BCB58;
	__savegprlr_14(ctx, base);
loc_880BCB58:
	// stw r4,28(r1)
	ctx.current_instruction = 0x880BCB58;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r5,15
	ctx.r8.s64 = ctx.r5.s64 + 15;
	// addi r6,r5,14
	ctx.r6.s64 = ctx.r5.s64 + 14;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r3,r5,13
	ctx.r3.s64 = ctx.r5.s64 + 13;
	// addi r31,r5,12
	ctx.r31.s64 = ctx.r5.s64 + 12;
	// addi r30,r5,11
	ctx.r30.s64 = ctx.r5.s64 + 11;
	// addi r29,r5,10
	ctx.r29.s64 = ctx.r5.s64 + 10;
	// addi r28,r5,9
	ctx.r28.s64 = ctx.r5.s64 + 9;
	// addi r27,r5,8
	ctx.r27.s64 = ctx.r5.s64 + 8;
	// addi r26,r5,7
	ctx.r26.s64 = ctx.r5.s64 + 7;
	// addi r25,r5,6
	ctx.r25.s64 = ctx.r5.s64 + 6;
	// addi r24,r5,5
	ctx.r24.s64 = ctx.r5.s64 + 5;
	// addi r23,r5,4
	ctx.r23.s64 = ctx.r5.s64 + 4;
	// addi r22,r5,3
	ctx.r22.s64 = ctx.r5.s64 + 3;
	// addi r21,r5,2
	ctx.r21.s64 = ctx.r5.s64 + 2;
	// addi r20,r5,1
	ctx.r20.s64 = ctx.r5.s64 + 1;
loc_880BCBAC:
	// lbzx r18,r21,r11
	ctx.current_instruction = 0x880BCBAC;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// lbzx r4,r20,r11
	ctx.current_instruction = 0x880BCBB0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// lbzx r19,r22,r11
	ctx.current_instruction = 0x880BCBB4;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// add r4,r4,r18
	ctx.r4.u64 = ctx.r4.u64 + ctx.r18.u64;
	// lbzx r17,r23,r11
	ctx.current_instruction = 0x880BCBBC;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// lbzx r15,r24,r11
	ctx.current_instruction = 0x880BCBC0;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// add r4,r4,r19
	ctx.r4.u64 = ctx.r4.u64 + ctx.r19.u64;
	// lbzx r18,r25,r11
	ctx.current_instruction = 0x880BCBC8;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// lbzx r16,r26,r11
	ctx.current_instruction = 0x880BCBCC;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// add r4,r4,r17
	ctx.r4.u64 = ctx.r4.u64 + ctx.r17.u64;
	// lbzx r19,r27,r11
	ctx.current_instruction = 0x880BCBD4;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// std r9,-184(r1)
	ctx.current_instruction = 0x880BCBD8;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r9.u64);
	// add r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 + ctx.r15.u64;
	// lbzx r9,r31,r11
	ctx.current_instruction = 0x880BCBE0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r17,r29,r11
	ctx.current_instruction = 0x880BCBE4;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r4,r4,r18
	ctx.r4.u64 = ctx.r4.u64 + ctx.r18.u64;
	// lbzx r18,r28,r11
	ctx.current_instruction = 0x880BCBEC;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// std r8,-192(r1)
	ctx.current_instruction = 0x880BCBF0;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r8.u64);
	// add r4,r4,r16
	ctx.r4.u64 = ctx.r4.u64 + ctx.r16.u64;
	// lbzx r15,r30,r11
	ctx.current_instruction = 0x880BCBF8;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r14,r6,r11
	ctx.current_instruction = 0x880BCBFC;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// add r4,r4,r19
	ctx.r4.u64 = ctx.r4.u64 + ctx.r19.u64;
	// lbzx r16,r11,r5
	ctx.current_instruction = 0x880BCC04;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stw r18,-208(r1)
	ctx.current_instruction = 0x880BCC08;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r18.u32);
	// lwz r19,-208(r1)
	ctx.current_instruction = 0x880BCC0C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// stw r19,-204(r1)
	ctx.current_instruction = 0x880BCC10;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r19.u32);
	// rotlwi r19,r19,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// add r19,r4,r19
	ctx.r19.u64 = ctx.r4.u64 + ctx.r19.u64;
	// lbzx r8,r8,r11
	ctx.current_instruction = 0x880BCC1C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r18,r3,r11
	ctx.current_instruction = 0x880BCC20;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r19,r19,r17
	ctx.r19.u64 = ctx.r19.u64 + ctx.r17.u64;
	// stw r9,-208(r1)
	ctx.current_instruction = 0x880BCC2C;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// std r27,-176(r1)
	ctx.current_instruction = 0x880BCC34;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r27.u64);
	// add r19,r19,r15
	ctx.r19.u64 = ctx.r19.u64 + ctx.r15.u64;
	// std r30,-168(r1)
	ctx.current_instruction = 0x880BCC3C;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r30.u64);
	// add r19,r19,r9
	ctx.r19.u64 = ctx.r19.u64 + ctx.r9.u64;
	// lbzx r4,r23,r11
	ctx.current_instruction = 0x880BCC44;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// lbzx r17,r24,r11
	ctx.current_instruction = 0x880BCC48;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// lbzx r27,r27,r11
	ctx.current_instruction = 0x880BCC4C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r18,r19,r18
	ctx.r18.u64 = ctx.r19.u64 + ctx.r18.u64;
	// lbzx r15,r29,r11
	ctx.current_instruction = 0x880BCC54;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lbzx r30,r30,r11
	ctx.current_instruction = 0x880BCC5C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r18,r18,r14
	ctx.r18.u64 = ctx.r18.u64 + ctx.r14.u64;
	// stw r4,-204(r1)
	ctx.current_instruction = 0x880BCC64;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r4.u32);
	// rotlwi r4,r17,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// lbzx r14,r21,r11
	ctx.current_instruction = 0x880BCC6C;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// rotlwi r19,r15,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// stw r17,-204(r1)
	ctx.current_instruction = 0x880BCC74;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r17.u32);
	// stw r27,-204(r1)
	ctx.current_instruction = 0x880BCC78;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r27.u32);
	// rotlwi r27,r27,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// stw r15,-204(r1)
	ctx.current_instruction = 0x880BCC80;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r15.u32);
	// stw r30,-204(r1)
	ctx.current_instruction = 0x880BCC84;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r30.u32);
	// rotlwi r30,r30,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r8,-204(r1)
	ctx.current_instruction = 0x880BCC8C;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r4,-208(r1)
	ctx.current_instruction = 0x880BCC94;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r4.u32);
	// stw r14,-204(r1)
	ctx.current_instruction = 0x880BCC98;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r14.u32);
	// rotlwi r14,r14,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// lbzx r4,r20,r11
	ctx.current_instruction = 0x880BCCA0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// add r18,r18,r8
	ctx.r18.u64 = ctx.r18.u64 + ctx.r8.u64;
	// lbzx r17,r22,r11
	ctx.current_instruction = 0x880BCCA8;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// add r4,r4,r14
	ctx.r4.u64 = ctx.r4.u64 + ctx.r14.u64;
	// lbzx r15,r25,r11
	ctx.current_instruction = 0x880BCCB0;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// add r18,r18,r16
	ctx.r18.u64 = ctx.r18.u64 + ctx.r16.u64;
	// stw r19,-200(r1)
	ctx.current_instruction = 0x880BCCB8;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r19.u32);
	// add r4,r4,r17
	ctx.r4.u64 = ctx.r4.u64 + ctx.r17.u64;
	// lbzx r17,r26,r11
	ctx.current_instruction = 0x880BCCC0;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// add r10,r18,r10
	ctx.r10.u64 = ctx.r18.u64 + ctx.r10.u64;
	// lbzx r19,r28,r11
	ctx.current_instruction = 0x880BCCC8;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lwz r9,-208(r1)
	ctx.current_instruction = 0x880BCCD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// lbzx r14,r31,r11
	ctx.current_instruction = 0x880BCCD4;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lbzx r16,r6,r11
	ctx.current_instruction = 0x880BCCDC;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// add r4,r4,r15
	ctx.r4.u64 = ctx.r4.u64 + ctx.r15.u64;
	// lbzx r18,r11,r5
	ctx.current_instruction = 0x880BCCE4;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r15,r3,r11
	ctx.current_instruction = 0x880BCCE8;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r4,r4,r17
	ctx.r4.u64 = ctx.r4.u64 + ctx.r17.u64;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + ctx.r27.u64;
	// lwz r9,-200(r1)
	ctx.current_instruction = 0x880BCCF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// ld r8,-192(r1)
	ctx.current_instruction = 0x880BCCF8;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// add r4,r4,r19
	ctx.r4.u64 = ctx.r4.u64 + ctx.r19.u64;
	// ld r27,-176(r1)
	ctx.current_instruction = 0x880BCD00;
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// ld r9,-184(r1)
	ctx.current_instruction = 0x880BCD08;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// add r19,r4,r30
	ctx.r19.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbzx r17,r8,r11
	ctx.current_instruction = 0x880BCD10;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// ld r30,-168(r1)
	ctx.current_instruction = 0x880BCD14;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r19,r19,r14
	ctx.r19.u64 = ctx.r19.u64 + ctx.r14.u64;
	// add r19,r19,r15
	ctx.r19.u64 = ctx.r19.u64 + ctx.r15.u64;
	// add r19,r19,r16
	ctx.r19.u64 = ctx.r19.u64 + ctx.r16.u64;
	// add r19,r19,r17
	ctx.r19.u64 = ctx.r19.u64 + ctx.r17.u64;
	// add r19,r19,r18
	ctx.r19.u64 = ctx.r19.u64 + ctx.r18.u64;
	// add r9,r19,r9
	ctx.r9.u64 = ctx.r19.u64 + ctx.r9.u64;
	// bdnz 0x880bcbac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880BCBAC;
	// lwz r8,28(r1)
	ctx.current_instruction = 0x880BCD38;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r7,0(r8)
	ctx.current_instruction = 0x880BCD44;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BE910) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880BE910);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BE910;
	ctx.current_instruction = 0x880BE910;
	// lwz r10,64(r3)
	ctx.current_instruction = 0x880BE910;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,60(r3)
	ctx.current_instruction = 0x880BE914;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r3,r9,r5
	ctx.current_instruction = 0x880BE920;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880BEB38) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880BEB38);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BEB38;
	ctx.current_instruction = 0x880BEB38;
	// lwz r11,28(r3)
	ctx.current_instruction = 0x880BEB38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r9,24(r3)
	ctx.current_instruction = 0x880BEB48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_880BEB54:
	// lwz r8,16(r8)
	ctx.current_instruction = 0x880BEB54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880beb7c
	if (ctx.cr6.eq) goto loc_880BEB7C;
	// lwz r8,28(r3)
	ctx.current_instruction = 0x880BEB60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16428
	ctx.r11.s64 = ctx.r11.s64 + 16428;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x880beb54
	if (ctx.cr6.lt) goto loc_880BEB54;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880BEB7C:
	// mulli r11,r10,16428
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(16428));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,20(r11)
	ctx.current_instruction = 0x880BEB90;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,52(r3)
	ctx.current_instruction = 0x880BEB94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,52(r3)
	ctx.current_instruction = 0x880BEB9C;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880BEEA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BEEA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BEEA0) {
			switch (rex_dispatch_address) {
				case 0x880BEEA8:
				case 0x880BEED0:
				case 0x880BEEE8:
				case 0x880BEF00:
				case 0x880BEF18:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BEEA0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BEEA8: goto loc_880BEEA8;
		case 0x880BEED0: goto loc_880BEED0;
		case 0x880BEEE8: goto loc_880BEEE8;
		case 0x880BEF00: goto loc_880BEF00;
		case 0x880BEF18: goto loc_880BEF18;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880BEEA8;
	__savegprlr_29(ctx, base);
loc_880BEEA8:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880BEEA8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.current_instruction = 0x880BEEB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880beed4
	if (ctx.cr6.eq) goto loc_880BEED4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880BEED0;
	sub_88050358(ctx, base);
loc_880BEED0:
	// stw r30,0(r31)
	ctx.current_instruction = 0x880BEED0;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_880BEED4:
	// lwz r3,4(r31)
	ctx.current_instruction = 0x880BEED4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880beeec
	if (ctx.cr6.eq) goto loc_880BEEEC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880BEEE8;
	sub_88050358(ctx, base);
loc_880BEEE8:
	// stw r30,4(r31)
	ctx.current_instruction = 0x880BEEE8;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_880BEEEC:
	// lwz r3,12(r31)
	ctx.current_instruction = 0x880BEEEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bef04
	if (ctx.cr6.eq) goto loc_880BEF04;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880BEF00;
	sub_88050358(ctx, base);
loc_880BEF00:
	// stw r30,12(r31)
	ctx.current_instruction = 0x880BEF00;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_880BEF04:
	// lwz r3,8(r31)
	ctx.current_instruction = 0x880BEF04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bef1c
	if (ctx.cr6.eq) goto loc_880BEF1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880BEF18;
	sub_88050358(ctx, base);
loc_880BEF18:
	// stw r30,8(r31)
	ctx.current_instruction = 0x880BEF18;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_880BEF1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BF708) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880BF708);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BF708;
	ctx.current_instruction = 0x880BF708;
	// b 0x880bf590
	sub_880BF590(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BF710) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BF710;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BF710) {
			switch (rex_dispatch_address) {
				case 0x880BF74C:
				case 0x880BF768:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BF710;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BF74C: goto loc_880BF74C;
		case 0x880BF768: goto loc_880BF768;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880BF714;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880BF718;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880BF71C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880BF720;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.current_instruction = 0x880BF728;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,13600
	ctx.r10.s64 = ctx.r11.s64 + 13600;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	ctx.current_instruction = 0x880BF73C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x880bf750
	if (ctx.cr6.eq) goto loc_880BF750;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x880bf270
	ctx.lr = 0x880BF74C;
	sub_880BF270(ctx, base);
loc_880BF74C:
	// stw r30,24(r31)
	ctx.current_instruction = 0x880BF74C;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_880BF750:
	// lwz r3,32(r31)
	ctx.current_instruction = 0x880BF750;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf76c
	if (ctx.cr6.eq) goto loc_880BF76C;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880BF768;
	sub_88050358(ctx, base);
loc_880BF768:
	// stw r30,32(r31)
	ctx.current_instruction = 0x880BF768;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_880BF76C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880BF770;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880BF778;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880BF77C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880BFBB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BFBB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BFBB8) {
			switch (rex_dispatch_address) {
				case 0x880BFBC0:
				case 0x880BFC38:
				case 0x880BFD24:
				case 0x880BFD3C:
				case 0x880BFD54:
				case 0x880BFD6C:
				case 0x880BFE0C:
				case 0x880BFEF8:
				case 0x880C00BC:
				case 0x880C00DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BFBB8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BFBC0: goto loc_880BFBC0;
		case 0x880BFC38: goto loc_880BFC38;
		case 0x880BFD24: goto loc_880BFD24;
		case 0x880BFD3C: goto loc_880BFD3C;
		case 0x880BFD54: goto loc_880BFD54;
		case 0x880BFD6C: goto loc_880BFD6C;
		case 0x880BFE0C: goto loc_880BFE0C;
		case 0x880BFEF8: goto loc_880BFEF8;
		case 0x880C00BC: goto loc_880C00BC;
		case 0x880C00DC: goto loc_880C00DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x880BFBC0;
	__savegprlr_21(ctx, base);
loc_880BFBC0:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880BFBC0;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// or r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 | ctx.r5.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880bfbec
	if (ctx.cr6.eq) goto loc_880BFBEC;
	// li r22,2
	ctx.r22.s64 = 2;
	// b 0x880bfbf8
	goto loc_880BFBF8;
loc_880BFBEC:
	// subfic r11,r26,4
	ctx.xer.ca = ctx.r26.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r26.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r22,r9,31
	ctx.r22.u64 = ctx.r9.u32 & 0x1;
loc_880BFBF8:
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// bge cr6,0x880bfcd8
	if (!ctx.cr6.lt) goto loc_880BFCD8;
	// mullw r11,r24,r26
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r26.s32);
	// add r29,r23,r26
	ctx.r29.u64 = ctx.r23.u64 + ctx.r26.u64;
	// add r27,r11,r23
	ctx.r27.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x880c00dc
	if (!ctx.cr6.lt) goto loc_880C00DC;
	// subf r28,r26,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r26.u64;
loc_880BFC18:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x880bfcc0
	if (!ctx.cr6.gt) goto loc_880BFCC0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_880BFC28:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x880BFC38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BFC38:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x880bfcc0
	if (!ctx.cr6.gt) goto loc_880BFCC0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x880bfc5c
	if (!ctx.cr6.eq) goto loc_880BFC5C;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880BFC48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.current_instruction = 0x880BFC4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r30)
	ctx.current_instruction = 0x880BFC50;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	ctx.current_instruction = 0x880BFC54;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x880bfcac
	goto loc_880BFCAC;
loc_880BFC5C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bgt cr6,0x880bfc8c
	if (ctx.cr6.gt) goto loc_880BFC8C;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
loc_880BFC70:
	// lwz r8,4(r9)
	ctx.current_instruction = 0x880BFC70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x880BFC78;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r8,4(r10)
	ctx.current_instruction = 0x880BFC7C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ctx.current_instruction = 0x880BFC80;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bfc70
	if (!ctx.cr0.eq) goto loc_880BFC70;
	// b 0x880bfcac
	goto loc_880BFCAC;
loc_880BFC8C:
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
loc_880BFC94:
	// lbz r8,1(r9)
	ctx.current_instruction = 0x880BFC94;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,1(r10)
	ctx.current_instruction = 0x880BFC9C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r8,1(r10)
	ctx.current_instruction = 0x880BFCA0;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r9)
	ctx.current_instruction = 0x880BFCA4;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bne 0x880bfc94
	if (!ctx.cr0.eq) goto loc_880BFC94;
loc_880BFCAC:
	// subf r11,r26,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r26.u64;
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x880bfc28
	if (ctx.cr6.gt) goto loc_880BFC28;
loc_880BFCC0:
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x880bfc18
	if (ctx.cr6.lt) goto loc_880BFC18;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_880BFCD8:
	// rlwinm r11,r24,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// ble cr6,0x880bfd70
	if (!ctx.cr6.gt) goto loc_880BFD70;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplwi cr6,r24,40
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 40, ctx.xer);
	// ble cr6,0x880bfd58
	if (!ctx.cr6.gt) goto loc_880BFD58;
	// rlwinm r11,r24,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mullw r31,r11,r26
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// rlwinm r28,r31,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r31,r23
	ctx.r4.u64 = ctx.r31.u64 + ctx.r23.u64;
	// add r5,r28,r23
	ctx.r5.u64 = ctx.r28.u64 + ctx.r23.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x880bfb10
	ctx.lr = 0x880BFD24;
	sub_880BFB10(ctx, base);
loc_880BFD24:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r31.u64;
	// bl 0x880bfb10
	ctx.lr = 0x880BFD3C;
	sub_880BFB10(ctx, base);
loc_880BFD3C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r4,r31,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r3,r28,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r28.u64;
	// bl 0x880bfb10
	ctx.lr = 0x880BFD54;
	sub_880BFB10(ctx, base);
loc_880BFD54:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_880BFD58:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880bfb10
	ctx.lr = 0x880BFD6C;
	sub_880BFB10(ctx, base);
loc_880BFD6C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_880BFD70:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x880bfdd0
	if (ctx.cr6.eq) goto loc_880BFDD0;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bgt cr6,0x880bfdac
	if (ctx.cr6.gt) goto loc_880BFDAC;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
loc_880BFD90:
	// lwz r8,4(r9)
	ctx.current_instruction = 0x880BFD90;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x880BFD98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r8,4(r10)
	ctx.current_instruction = 0x880BFD9C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ctx.current_instruction = 0x880BFDA0;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bfd90
	if (!ctx.cr0.eq) goto loc_880BFD90;
	// b 0x880bfddc
	goto loc_880BFDDC;
loc_880BFDAC:
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
loc_880BFDB4:
	// lbz r8,1(r9)
	ctx.current_instruction = 0x880BFDB4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,1(r10)
	ctx.current_instruction = 0x880BFDBC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r8,1(r10)
	ctx.current_instruction = 0x880BFDC0;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r9)
	ctx.current_instruction = 0x880BFDC4;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bne 0x880bfdb4
	if (!ctx.cr0.eq) goto loc_880BFDB4;
	// b 0x880bfddc
	goto loc_880BFDDC;
loc_880BFDD0:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x880BFDD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880BFDD8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_880BFDDC:
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r27,r11,r23
	ctx.r27.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_880BFDF4:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x880bfe94
	if (ctx.cr6.gt) goto loc_880BFE94;
loc_880BFDFC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880BFE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BFE0C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x880bfee8
	if (ctx.cr6.gt) goto loc_880BFEE8;
	// bne cr6,0x880bfe88
	if (!ctx.cr6.eq) goto loc_880BFE88;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x880bfe34
	if (!ctx.cr6.eq) goto loc_880BFE34;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880BFE20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.current_instruction = 0x880BFE24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r28)
	ctx.current_instruction = 0x880BFE28;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	ctx.current_instruction = 0x880BFE2C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x880bfe84
	goto loc_880BFE84;
loc_880BFE34:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bgt cr6,0x880bfe64
	if (ctx.cr6.gt) goto loc_880BFE64;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// addi r9,r29,-4
	ctx.r9.s64 = ctx.r29.s64 + -4;
loc_880BFE48:
	// lwz r8,4(r9)
	ctx.current_instruction = 0x880BFE48;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x880BFE50;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r8,4(r10)
	ctx.current_instruction = 0x880BFE54;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ctx.current_instruction = 0x880BFE58;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bfe48
	if (!ctx.cr0.eq) goto loc_880BFE48;
	// b 0x880bfe84
	goto loc_880BFE84;
loc_880BFE64:
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
loc_880BFE6C:
	// lbz r8,1(r9)
	ctx.current_instruction = 0x880BFE6C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,1(r10)
	ctx.current_instruction = 0x880BFE74;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r8,1(r10)
	ctx.current_instruction = 0x880BFE78;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r9)
	ctx.current_instruction = 0x880BFE7C;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bne 0x880bfe6c
	if (!ctx.cr0.eq) goto loc_880BFE6C;
loc_880BFE84:
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
loc_880BFE88:
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x880bfdfc
	if (!ctx.cr6.gt) goto loc_880BFDFC;
loc_880BFE94:
	// mullw r11,r24,r26
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r26.s32);
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// subf r8,r28,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r28.u64;
	// subf r11,r23,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r23.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880bfeb0
	if (ctx.cr6.lt) goto loc_880BFEB0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_880BFEB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880c002c
	if (ctx.cr6.eq) goto loc_880C002C;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// subf r9,r11,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r11.u64;
	// bgt cr6,0x880c000c
	if (ctx.cr6.gt) goto loc_880C000C;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_880BFECC:
	// lwz r7,4(r9)
	ctx.current_instruction = 0x880BFECC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,4(r10)
	ctx.current_instruction = 0x880BFED4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r7,4(r10)
	ctx.current_instruction = 0x880BFED8;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r9)
	ctx.current_instruction = 0x880BFEDC;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bfecc
	if (!ctx.cr0.eq) goto loc_880BFECC;
	// b 0x880c002c
	goto loc_880C002C;
loc_880BFEE8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x880BFEF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BFEF8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880bff84
	if (ctx.cr6.lt) goto loc_880BFF84;
	// bne cr6,0x880bff74
	if (!ctx.cr6.eq) goto loc_880BFF74;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x880bff20
	if (!ctx.cr6.eq) goto loc_880BFF20;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880BFF0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r31)
	ctx.current_instruction = 0x880BFF10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	ctx.current_instruction = 0x880BFF14;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	ctx.current_instruction = 0x880BFF18;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x880bff70
	goto loc_880BFF70;
loc_880BFF20:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bgt cr6,0x880bff50
	if (ctx.cr6.gt) goto loc_880BFF50;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r9,r27,-4
	ctx.r9.s64 = ctx.r27.s64 + -4;
loc_880BFF34:
	// lwz r8,4(r9)
	ctx.current_instruction = 0x880BFF34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x880BFF3C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r8,4(r10)
	ctx.current_instruction = 0x880BFF40;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ctx.current_instruction = 0x880BFF44;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bff34
	if (!ctx.cr0.eq) goto loc_880BFF34;
	// b 0x880bff70
	goto loc_880BFF70;
loc_880BFF50:
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
loc_880BFF58:
	// lbz r8,1(r9)
	ctx.current_instruction = 0x880BFF58;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,1(r10)
	ctx.current_instruction = 0x880BFF60;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r8,1(r10)
	ctx.current_instruction = 0x880BFF64;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r9)
	ctx.current_instruction = 0x880BFF68;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bne 0x880bff58
	if (!ctx.cr0.eq) goto loc_880BFF58;
loc_880BFF70:
	// subf r27,r26,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r26.u64;
loc_880BFF74:
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x880bfee8
	if (!ctx.cr6.gt) goto loc_880BFEE8;
	// b 0x880bfe94
	goto loc_880BFE94;
loc_880BFF84:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x880bffa8
	if (!ctx.cr6.eq) goto loc_880BFFA8;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880BFF8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.current_instruction = 0x880BFF90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	ctx.current_instruction = 0x880BFF94;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// stw r10,0(r31)
	ctx.current_instruction = 0x880BFF9C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// b 0x880bfdf4
	goto loc_880BFDF4;
loc_880BFFA8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bgt cr6,0x880bffe0
	if (ctx.cr6.gt) goto loc_880BFFE0;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
loc_880BFFBC:
	// lwz r8,4(r9)
	ctx.current_instruction = 0x880BFFBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x880BFFC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r8,4(r10)
	ctx.current_instruction = 0x880BFFC8;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ctx.current_instruction = 0x880BFFCC;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne 0x880bffbc
	if (!ctx.cr0.eq) goto loc_880BFFBC;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// b 0x880bfdf4
	goto loc_880BFDF4;
loc_880BFFE0:
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
loc_880BFFE8:
	// lbz r8,1(r9)
	ctx.current_instruction = 0x880BFFE8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,1(r10)
	ctx.current_instruction = 0x880BFFF0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r8,1(r10)
	ctx.current_instruction = 0x880BFFF4;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r9)
	ctx.current_instruction = 0x880BFFF8;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bne 0x880bffe8
	if (!ctx.cr0.eq) goto loc_880BFFE8;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// b 0x880bfdf4
	goto loc_880BFDF4;
loc_880C000C:
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_880C0014:
	// lbz r7,1(r9)
	ctx.current_instruction = 0x880C0014;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r6,1(r10)
	ctx.current_instruction = 0x880C001C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r7,1(r10)
	ctx.current_instruction = 0x880C0020;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// stbu r6,1(r9)
	ctx.current_instruction = 0x880C0024;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r9.u32 = ea;
	// bne 0x880c0014
	if (!ctx.cr0.eq) goto loc_880C0014;
loc_880C002C:
	// subf r11,r27,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r27.u64;
	// subf r31,r31,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r31.u64;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r26.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880c0044
	if (!ctx.cr6.lt) goto loc_880C0044;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_880C0044:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880c009c
	if (ctx.cr6.eq) goto loc_880C009C;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// subf r9,r11,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// bgt cr6,0x880c007c
	if (ctx.cr6.gt) goto loc_880C007C;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_880C0060:
	// lwz r7,4(r9)
	ctx.current_instruction = 0x880C0060;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,4(r10)
	ctx.current_instruction = 0x880C0068;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwu r7,4(r10)
	ctx.current_instruction = 0x880C006C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r9)
	ctx.current_instruction = 0x880C0070;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// bne 0x880c0060
	if (!ctx.cr0.eq) goto loc_880C0060;
	// b 0x880c009c
	goto loc_880C009C;
loc_880C007C:
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_880C0084:
	// lbz r7,1(r9)
	ctx.current_instruction = 0x880C0084;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r6,1(r10)
	ctx.current_instruction = 0x880C008C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbu r7,1(r10)
	ctx.current_instruction = 0x880C0090;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// stbu r6,1(r9)
	ctx.current_instruction = 0x880C0094;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r9.u32 = ea;
	// bne 0x880c0084
	if (!ctx.cr0.eq) goto loc_880C0084;
loc_880C009C:
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x880c00bc
	if (!ctx.cr6.gt) goto loc_880C00BC;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// divwu r4,r8,r26
	ctx.r4.u64 = uint32_t(ctx.r26.u32 ? ctx.r8.u32 / ctx.r26.u32 : 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// twllei r26,0
	if (ctx.r26.s32 == 0 || ctx.r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x880bfbb8
	ctx.lr = 0x880C00BC;
	sub_880BFBB8(ctx, base);
loc_880C00BC:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x880c00dc
	if (!ctx.cr6.gt) goto loc_880C00DC;
	// subf r3,r31,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// divwu r4,r31,r26
	ctx.r4.u64 = uint32_t(ctx.r26.u32 ? ctx.r31.u32 / ctx.r26.u32 : 0);
	// twllei r26,0
	if (ctx.r26.s32 == 0 || ctx.r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x880bfbb8
	ctx.lr = 0x880C00DC;
	sub_880BFBB8(ctx, base);
loc_880C00DC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CA088) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CA088;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CA088) {
			switch (rex_dispatch_address) {
				case 0x880CA0D0:
				case 0x880CA104:
				case 0x880CA144:
				case 0x880CA184:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CA088;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CA0D0: goto loc_880CA0D0;
		case 0x880CA104: goto loc_880CA104;
		case 0x880CA144: goto loc_880CA144;
		case 0x880CA184: goto loc_880CA184;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880CA08C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880CA090;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.current_instruction = 0x880CA094;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,16(r3)
	ctx.current_instruction = 0x880CA0A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bne cr6,0x880ca114
	if (!ctx.cr6.eq) goto loc_880CA114;
	// lwz r3,20(r3)
	ctx.current_instruction = 0x880CA0A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880ca0e0
	if (!ctx.cr6.eq) goto loc_880CA0E0;
	// lwz r10,14704(r11)
	ctx.current_instruction = 0x880CA0B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14704);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,80(r11)
	ctx.current_instruction = 0x880CA0C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r4,36(r11)
	ctx.current_instruction = 0x880CA0C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880CA0D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CA0D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880CA0D4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880CA0E0:
	// lwz r10,14708(r11)
	ctx.current_instruction = 0x880CA0E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14708);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,80(r11)
	ctx.current_instruction = 0x880CA0EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,48(r11)
	ctx.current_instruction = 0x880CA0F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,44(r11)
	ctx.current_instruction = 0x880CA0F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,40(r11)
	ctx.current_instruction = 0x880CA0F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880CA104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CA104:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880CA108;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880CA114:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880ca154
	if (!ctx.cr6.eq) goto loc_880CA154;
	// lwz r10,14716(r11)
	ctx.current_instruction = 0x880CA11C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14716);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,80(r11)
	ctx.current_instruction = 0x880CA128;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,32(r11)
	ctx.current_instruction = 0x880CA12C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r5,28(r11)
	ctx.current_instruction = 0x880CA130;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r11)
	ctx.current_instruction = 0x880CA134;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,36(r11)
	ctx.current_instruction = 0x880CA138;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880CA144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CA144:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880CA148;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880CA154:
	// lwz r4,14712(r11)
	ctx.current_instruction = 0x880CA154;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 14712);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,80(r11)
	ctx.current_instruction = 0x880CA15C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r8,48(r11)
	ctx.current_instruction = 0x880CA160;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,44(r11)
	ctx.current_instruction = 0x880CA164;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r6,40(r11)
	ctx.current_instruction = 0x880CA168;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r5,32(r11)
	ctx.current_instruction = 0x880CA170;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.current_instruction = 0x880CA174;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,24(r11)
	ctx.current_instruction = 0x880CA178;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880CA17C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x880CA184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CA184:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880CA188;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CB150) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CB150;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CB150) {
			switch (rex_dispatch_address) {
				case 0x880CB158:
				case 0x880CB18C:
				case 0x880CB198:
				case 0x880CB1E8:
				case 0x880CB1F4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CB150;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CB158: goto loc_880CB158;
		case 0x880CB18C: goto loc_880CB18C;
		case 0x880CB198: goto loc_880CB198;
		case 0x880CB1E8: goto loc_880CB1E8;
		case 0x880CB1F4: goto loc_880CB1F4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880CB158;
	__savegprlr_28(ctx, base);
loc_880CB158:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880CB158;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.current_instruction = 0x880CB15C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880cb1b4
	if (ctx.cr6.eq) goto loc_880CB1B4;
loc_880CB174:
	// lbz r11,0(r31)
	ctx.current_instruction = 0x880CB174;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cb1b4
	if (ctx.cr6.eq) goto loc_880CB1B4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x88052678
	ctx.lr = 0x880CB18C;
	sub_88052678(ctx, base);
loc_880CB18C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88052678
	ctx.lr = 0x880CB198;
	sub_88052678(ctx, base);
loc_880CB198:
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880cb1b4
	if (!ctx.cr6.eq) goto loc_880CB1B4;
	// lbzu r11,1(r29)
	ctx.current_instruction = 0x880CB1A0;
	ea = 1 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880cb174
	if (!ctx.cr6.eq) goto loc_880CB174;
loc_880CB1B4:
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880CB1B4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880cb1dc
	if (!ctx.cr6.eq) goto loc_880CB1DC;
	// lbz r11,0(r31)
	ctx.current_instruction = 0x880CB1C4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880cb1dc
	if (!ctx.cr6.eq) goto loc_880CB1DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880CB1DC:
	// lbz r11,0(r31)
	ctx.current_instruction = 0x880CB1DC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x88052678
	ctx.lr = 0x880CB1E8;
	sub_88052678(ctx, base);
loc_880CB1E8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88052678
	ctx.lr = 0x880CB1F4;
	sub_88052678(ctx, base);
loc_880CB1F4:
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x880cb204
	if (ctx.cr6.lt) goto loc_880CB204;
	// li r3,1
	ctx.r3.s64 = 1;
loc_880CB204:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CBFE0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CBFE0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CBFE0) {
			switch (rex_dispatch_address) {
				case 0x880CBFE8:
				case 0x880CC048:
				case 0x880CC0CC:
				case 0x880CC0F4:
				case 0x880CC108:
				case 0x880CC118:
				case 0x880CC160:
				case 0x880CC1BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CBFE0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CBFE8: goto loc_880CBFE8;
		case 0x880CC048: goto loc_880CC048;
		case 0x880CC0CC: goto loc_880CC0CC;
		case 0x880CC0F4: goto loc_880CC0F4;
		case 0x880CC108: goto loc_880CC108;
		case 0x880CC118: goto loc_880CC118;
		case 0x880CC160: goto loc_880CC160;
		case 0x880CC1BC: goto loc_880CC1BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880CBFE8;
	__savegprlr_20(ctx, base);
loc_880CBFE8:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880CBFE8;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r4)
	ctx.current_instruction = 0x880CBFF8;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r30,80(r1)
	ctx.current_instruction = 0x880CC000;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,0(r29)
	ctx.current_instruction = 0x880CC008;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// stw r30,0(r6)
	ctx.current_instruction = 0x880CC010;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// std r30,0(r7)
	ctx.current_instruction = 0x880CC018;
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r30.u64);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// stw r30,0(r8)
	ctx.current_instruction = 0x880CC020;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r30,0(r9)
	ctx.current_instruction = 0x880CC028;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// stw r30,0(r10)
	ctx.current_instruction = 0x880CC030;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// stw r30,84(r1)
	ctx.current_instruction = 0x880CC038;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r3,72(r3)
	ctx.current_instruction = 0x880CC03C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lbz r4,96(r31)
	ctx.current_instruction = 0x880CC040;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 96);
	// bl 0x880cb730
	ctx.lr = 0x880CC048;
	sub_880CB730(ctx, base);
loc_880CC048:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc2b8
	if (ctx.cr6.lt) goto loc_880CC2B8;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880CC050;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r11)
	ctx.current_instruction = 0x880CC054;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880cc070
	if (!ctx.cr6.eq) goto loc_880CC070;
loc_880CC060:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880CC070:
	// lwz r10,24(r11)
	ctx.current_instruction = 0x880CC070;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,80(r1)
	ctx.current_instruction = 0x880CC074;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,52(r10)
	ctx.current_instruction = 0x880CC078;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880cc12c
	if (ctx.cr6.eq) goto loc_880CC12C;
	// lwz r9,60(r10)
	ctx.current_instruction = 0x880CC084;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880cc09c
	if (ctx.cr6.eq) goto loc_880CC09C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r30,56(r11)
	ctx.current_instruction = 0x880CC094;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
	// b 0x880cc0a0
	goto loc_880CC0A0;
loc_880CC09C:
	// stw r30,28(r11)
	ctx.current_instruction = 0x880CC09C;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
loc_880CC0A0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CC0A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x880CC0A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,60(r11)
	ctx.current_instruction = 0x880CC0A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r9,24(r10)
	ctx.current_instruction = 0x880CC0AC;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x880CC0B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,24(r31)
	ctx.current_instruction = 0x880CC0B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,36(r7)
	ctx.current_instruction = 0x880CC0BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lwz r4,0(r8)
	ctx.current_instruction = 0x880CC0C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// bctrl 
	ctx.lr = 0x880CC0CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CC0CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc2b8
	if (ctx.cr6.lt) goto loc_880CC2B8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CC0D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,44(r11)
	ctx.current_instruction = 0x880CC0D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880cc108
	if (ctx.cr6.eq) goto loc_880CC108;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x880CC0E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x880cb318
	ctx.lr = 0x880CC0F4;
	sub_880CB318(ctx, base);
loc_880CC0F4:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CC0F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x880CC0FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// bl 0x880cb318
	ctx.lr = 0x880CC108;
	sub_880CB318(ctx, base);
loc_880CC108:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x880CC10C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x880cb318
	ctx.lr = 0x880CC118;
	sub_880CB318(ctx, base);
loc_880CC118:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880CC118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x880CC11C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	ctx.current_instruction = 0x880CC124;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880CC128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_880CC12C:
	// lwz r10,24(r11)
	ctx.current_instruction = 0x880CC12C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880cc060
	if (ctx.cr6.eq) goto loc_880CC060;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,24(r31)
	ctx.current_instruction = 0x880CC13C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CC144;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,32(r10)
	ctx.current_instruction = 0x880CC150;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880CC154;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880CC160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CC160:
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc2b4
	if (ctx.cr6.lt) goto loc_880CC2B4;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880CC16C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r10,40(r11)
	ctx.current_instruction = 0x880CC174;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880cc1c4
	if (ctx.cr6.eq) goto loc_880CC1C4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CC180;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x880CC184;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,24(r11)
	ctx.current_instruction = 0x880CC188;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x880cc198
	if (!ctx.cr6.eq) goto loc_880CC198;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
loc_880CC198:
	// lwz r10,20(r31)
	ctx.current_instruction = 0x880CC198;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r6,44(r11)
	ctx.current_instruction = 0x880CC1A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,0(r29)
	ctx.current_instruction = 0x880CC1A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.current_instruction = 0x880CC1AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,8(r10)
	ctx.current_instruction = 0x880CC1B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880CC1BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CC1BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc2b8
	if (ctx.cr6.lt) goto loc_880CC2B8;
loc_880CC1C4:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CC1C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r29)
	ctx.current_instruction = 0x880CC1C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,24(r11)
	ctx.current_instruction = 0x880CC1CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,24(r11)
	ctx.current_instruction = 0x880CC1D4;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CC1D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x880CC1DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ld r7,32(r11)
	ctx.current_instruction = 0x880CC1E0;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r7,0(r26)
	ctx.current_instruction = 0x880CC1E4;
	REX_STORE_U64(ctx.r26.u32 + 0, ctx.r7.u64);
	// ld r6,32(r11)
	ctx.current_instruction = 0x880CC1E8;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r6,64(r31)
	ctx.current_instruction = 0x880CC1EC;
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r6.u64);
	// lwz r5,16(r11)
	ctx.current_instruction = 0x880CC1F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,0(r25)
	ctx.current_instruction = 0x880CC1F4;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.current_instruction = 0x880CC1F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,0(r24)
	ctx.current_instruction = 0x880CC1FC;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r4.u32);
	// lwz r3,48(r11)
	ctx.current_instruction = 0x880CC200;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880cc230
	if (!ctx.cr6.eq) goto loc_880CC230;
	// lwz r9,32(r10)
	ctx.current_instruction = 0x880CC20C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880cc230
	if (!ctx.cr6.eq) goto loc_880CC230;
	// stw r27,48(r11)
	ctx.current_instruction = 0x880CC218;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r27.u32);
	// stw r27,0(r22)
	ctx.current_instruction = 0x880CC21C;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r27.u32);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880CC220;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r29)
	ctx.current_instruction = 0x880CC224;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,32(r11)
	ctx.current_instruction = 0x880CC228;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x880cc240
	goto loc_880CC240;
loc_880CC230:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880CC230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,32(r10)
	ctx.current_instruction = 0x880CC234;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,32(r10)
	ctx.current_instruction = 0x880CC23C;
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_880CC240:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880CC240;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880CC244;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,32(r11)
	ctx.current_instruction = 0x880CC248;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,16(r10)
	ctx.current_instruction = 0x880CC24C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x880cc294
	if (!ctx.cr6.eq) goto loc_880CC294;
	// stw r27,0(r20)
	ctx.current_instruction = 0x880CC258;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r27.u32);
	// stw r30,32(r11)
	ctx.current_instruction = 0x880CC25C;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// lbz r10,96(r31)
	ctx.current_instruction = 0x880CC260;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 96);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// rlwinm r6,r8,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r6,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r6.u64;
	// slw r4,r27,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r3,r11,r31
	ctx.current_instruction = 0x880CC284;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stwx r10,r11,r31
	ctx.current_instruction = 0x880CC28C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880CC290;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880CC294:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880cc2b8
	if (!ctx.cr6.eq) goto loc_880CC2B8;
	// stw r27,52(r10)
	ctx.current_instruction = 0x880CC2A8;
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r27.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880CC2B4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_880CC2B8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D3200) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D3200;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D3200) {
			switch (rex_dispatch_address) {
				case 0x880D3208:
				case 0x880D3288:
				case 0x880D3378:
				case 0x880D341C:
				case 0x880D3444:
				case 0x880D3480:
				case 0x880D3528:
				case 0x880D356C:
				case 0x880D35E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D3200;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D3208: goto loc_880D3208;
		case 0x880D3288: goto loc_880D3288;
		case 0x880D3378: goto loc_880D3378;
		case 0x880D341C: goto loc_880D341C;
		case 0x880D3444: goto loc_880D3444;
		case 0x880D3480: goto loc_880D3480;
		case 0x880D3528: goto loc_880D3528;
		case 0x880D356C: goto loc_880D356C;
		case 0x880D35E0: goto loc_880D35E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880D3208;
	__savegprlr_14(ctx, base);
loc_880D3208:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x880D3208;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,332(r3)
	ctx.current_instruction = 0x880D320C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lhz r10,0(r5)
	ctx.current_instruction = 0x880D3214;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r11,340(r3)
	ctx.current_instruction = 0x880D321C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// lwz r31,0(r3)
	ctx.current_instruction = 0x880D3228;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,360(r3)
	ctx.current_instruction = 0x880D322C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// lwz r16,328(r3)
	ctx.current_instruction = 0x880D3230;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880d32b4
	if (!ctx.cr6.lt) goto loc_880D32B4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,340(r3)
	ctx.current_instruction = 0x880D3240;
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// lhz r10,0(r5)
	ctx.current_instruction = 0x880D3244;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d32a0
	if (ctx.cr6.eq) goto loc_880D32A0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880d32a0
	if (!ctx.cr6.gt) goto loc_880D32A0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_880D3260:
	// lhz r11,0(r15)
	ctx.current_instruction = 0x880D3260;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r15.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,524(r31)
	ctx.current_instruction = 0x880D3268;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3270;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3274;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880D3288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3288:
	// lwz r8,344(r21)
	ctx.current_instruction = 0x880D3288;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + 344);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// stwx r3,r8,r28
	ctx.current_instruction = 0x880D3294;
	REX_STORE_U32(ctx.r8.u32 + ctx.r28.u32, ctx.r3.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// blt cr6,0x880d3260
	if (ctx.cr6.lt) goto loc_880D3260;
loc_880D32A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r15)
	ctx.current_instruction = 0x880D32A8;
	REX_STORE_U16(ctx.r15.u32 + 0, ctx.r11.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880D32B4:
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r7,88(r31)
	ctx.current_instruction = 0x880D32B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r6,r6,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// divw r26,r8,r16
	ctx.r26.u64 = uint32_t((ctx.r16.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r16.s32 == -1)) ? ctx.r8.s32 / ctx.r16.s32 : 0);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// andc r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r10,r16,r5
	ctx.r10.u64 = ctx.r16.u64 & ~ctx.r5.u64;
	// addi r14,r26,1
	ctx.r14.s64 = ctx.r26.s64 + 1;
	// divw r8,r6,r30
	ctx.r8.u64 = uint32_t((ctx.r30.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r6.s32 / ctx.r30.s32 : 0);
	// andc r7,r30,r3
	ctx.r7.u64 = ctx.r30.u64 & ~ctx.r3.u64;
	// twllei r16,0
	if (ctx.r16.s32 == 0 || ctx.r16.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r8,r14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x880d3320
	if (!ctx.cr6.lt) goto loc_880D3320;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880D3320:
	// mullw r10,r26,r16
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r16.s32);
	// add r17,r10,r11
	ctx.r17.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rotlwi r11,r17,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r17.u32, 1);
	// divw r24,r17,r28
	ctx.r24.u64 = uint32_t((ctx.r28.s32 && !(ctx.r17.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r17.s32 / ctx.r28.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x880d3390
	if (!ctx.cr6.gt) goto loc_880D3390;
	// li r27,0
	ctx.r27.s64 = 0;
loc_880D3350:
	// lhz r11,0(r15)
	ctx.current_instruction = 0x880D3350;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r15.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,524(r31)
	ctx.current_instruction = 0x880D3358;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3360;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3364;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x880D3378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3378:
	// lwz r8,348(r21)
	ctx.current_instruction = 0x880D3378;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + 348);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// stwx r3,r27,r8
	ctx.current_instruction = 0x880D3384;
	REX_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// blt cr6,0x880d3350
	if (ctx.cr6.lt) goto loc_880D3350;
loc_880D3390:
	// lwz r11,88(r31)
	ctx.current_instruction = 0x880D3390;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmpw cr6,r24,r26
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r26.s32, ctx.xer);
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r25,r10,r20
	ctx.r25.u64 = ctx.r10.u64 + ctx.r20.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bgt cr6,0x880d33b0
	if (ctx.cr6.gt) goto loc_880D33B0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_880D33B0:
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r22,r10,r20
	ctx.r22.u64 = ctx.r10.u64 + ctx.r20.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpw cr6,r24,r26
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x880d33cc
	if (!ctx.cr6.gt) goto loc_880D33CC;
	// subf r18,r26,r24
	ctx.r18.u64 = ctx.r24.u64 - ctx.r26.u64;
loc_880D33CC:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r19,r11,r20
	ctx.r19.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mullw r11,r24,r28
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r28.s32);
	// subf r26,r11,r17
	ctx.r26.u64 = ctx.r17.u64 - ctx.r11.u64;
	// cmplw cr6,r25,r19
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x880d34e4
	if (ctx.cr6.lt) goto loc_880D34E4;
loc_880D33E4:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880d3490
	if (!ctx.cr6.gt) goto loc_880D3490;
	// subf r23,r26,r28
	ctx.r23.u64 = ctx.r28.u64 - ctx.r26.u64;
	// neg r27,r30
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r30.u64);
loc_880D33F8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880d3424
	if (ctx.cr6.eq) goto loc_880D3424;
	// lwz r11,524(r31)
	ctx.current_instruction = 0x880D3400;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D340C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3410;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D341C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D341C:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x880d3428
	goto loc_880D3428;
loc_880D3424:
	// li r24,0
	ctx.r24.s64 = 0;
loc_880D3428:
	// lwz r11,524(r31)
	ctx.current_instruction = 0x880D3428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3434;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3438;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3444:
	// lwz r10,520(r31)
	ctx.current_instruction = 0x880D3444;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// mullw r11,r3,r23
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r23.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mullw r10,r24,r26
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r26.s32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r3,r9,r28
	ctx.r3.u64 = uint32_t((ctx.r28.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r9.s32 / ctx.r28.s32 : 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// andc r7,r28,r8
	ctx.r7.u64 = ctx.r28.u64 & ~ctx.r8.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bctrl 
	ctx.lr = 0x880D3480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3480:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x880d33f8
	if (ctx.cr6.lt) goto loc_880D33F8;
loc_880D3490:
	// subf. r26,r16,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r16.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bgt 0x880d34d0
	if (ctx.cr0.gt) goto loc_880D34D0;
	// subf r11,r28,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r28.u64;
	// lwz r10,88(r31)
	ctx.current_instruction = 0x880D349C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// divw r8,r9,r28
	ctx.r8.u64 = uint32_t((ctx.r28.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r9.s32 / ctx.r28.s32 : 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mullw r5,r8,r28
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// andc r4,r28,r6
	ctx.r4.u64 = ctx.r28.u64 & ~ctx.r6.u64;
	// mullw r11,r7,r30
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r26,r5,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r5.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_880D34D0:
	// lwz r11,88(r31)
	ctx.current_instruction = 0x880D34D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r25,r19
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r19.u32, ctx.xer);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// subf r22,r10,r22
	ctx.r22.u64 = ctx.r22.u64 - ctx.r10.u64;
	// bge cr6,0x880d33e4
	if (!ctx.cr6.lt) goto loc_880D33E4;
loc_880D34E4:
	// lwz r11,340(r21)
	ctx.current_instruction = 0x880D34E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880d357c
	if (!ctx.cr6.gt) goto loc_880D357C;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880d357c
	if (!ctx.cr6.lt) goto loc_880D357C;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880d35a4
	if (!ctx.cr6.gt) goto loc_880D35A4;
	// subf r25,r26,r28
	ctx.r25.u64 = ctx.r28.u64 - ctx.r26.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_880D350C:
	// lwz r11,524(r31)
	ctx.current_instruction = 0x880D350C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3518;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D351C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3528:
	// lwz r9,344(r21)
	ctx.current_instruction = 0x880D3528;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 344);
	// mullw r10,r3,r26
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// lwz r8,520(r31)
	ctx.current_instruction = 0x880D3530;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// lwzx r7,r9,r27
	ctx.current_instruction = 0x880D3534;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mullw r11,r7,r25
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// andc r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// divw r3,r3,r28
	ctx.r3.u64 = uint32_t((ctx.r28.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r3.s32 / ctx.r28.s32 : 0);
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bctrl 
	ctx.lr = 0x880D356C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D356C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x880d350c
	if (ctx.cr6.lt) goto loc_880D350C;
loc_880D357C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880d35a4
	if (!ctx.cr6.gt) goto loc_880D35A4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_880D358C:
	// lwz r10,348(r21)
	ctx.current_instruction = 0x880D358C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 348);
	// lwz r9,344(r21)
	ctx.current_instruction = 0x880D3590;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 344);
	// lwzx r8,r11,r10
	ctx.current_instruction = 0x880D3594;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r8,r9,r11
	ctx.current_instruction = 0x880D3598;
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d358c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D358C;
loc_880D35A4:
	// lhz r11,0(r15)
	ctx.current_instruction = 0x880D35A4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r15.u32 + 0);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// subf r11,r10,r17
	ctx.r11.u64 = ctx.r17.u64 - ctx.r10.u64;
	// add r9,r11,r16
	ctx.r9.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stw r9,340(r21)
	ctx.current_instruction = 0x880D35B8;
	REX_STORE_U32(ctx.r21.u32 + 340, ctx.r9.u32);
	// beq cr6,0x880d35e0
	if (ctx.cr6.eq) goto loc_880D35E0;
	// lwz r10,88(r31)
	ctx.current_instruction = 0x880D35C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mullw r9,r10,r18
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r18.s32);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mullw r8,r14,r10
	ctx.r8.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r10.s32);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r4,r11,r20
	ctx.r4.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x880547a0
	ctx.lr = 0x880D35E0;
	sub_880547A0(ctx, base);
loc_880D35E0:
	// sth r14,0(r15)
	ctx.current_instruction = 0x880D35E0;
	REX_STORE_U16(ctx.r15.u32 + 0, ctx.r14.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DC228) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880DC228);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DC228;
	ctx.current_instruction = 0x880DC228;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x880dc238
	if (!ctx.cr6.lt) goto loc_880DC238;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880DC238:
	// b 0x880dba50
	sub_880DBA50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DC338) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DC338;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DC338) {
			switch (rex_dispatch_address) {
				case 0x880DC340:
				case 0x880DC35C:
				case 0x880DC374:
				case 0x880DC3A4:
				case 0x880DC3BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DC338;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880DC340: goto loc_880DC340;
		case 0x880DC35C: goto loc_880DC35C;
		case 0x880DC374: goto loc_880DC374;
		case 0x880DC3A4: goto loc_880DC3A4;
		case 0x880DC3BC: goto loc_880DC3BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880DC340;
	__savegprlr_26(ctx, base);
loc_880DC340:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880DC340;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x880dba50
	ctx.lr = 0x880DC35C;
	sub_880DBA50(ctx, base);
loc_880DC35C:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r28,8
	ctx.r5.s64 = ctx.r28.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x880dba50
	ctx.lr = 0x880DC374;
	sub_880DBA50(ctx, base);
loc_880DC374:
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// ble cr6,0x880dc3c8
	if (!ctx.cr6.gt) goto loc_880DC3C8;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r5,r28,8
	ctx.r5.s64 = ctx.r28.s64 + 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880dba50
	ctx.lr = 0x880DC3A4;
	sub_880DBA50(ctx, base);
loc_880DC3A4:
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880dba50
	ctx.lr = 0x880DC3BC;
	sub_880DBA50(ctx, base);
loc_880DC3BC:
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880DC3C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DCFA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DCFA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DCFA0) {
			switch (rex_dispatch_address) {
				case 0x880DCFA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DCFA0;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880DCFA8: goto loc_880DCFA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x880DCFA8;
	__savegprlr_16(ctx, base);
loc_880DCFA8:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,20(r1)
	ctx.current_instruction = 0x880DCFAC;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// stw r4,28(r1)
	ctx.current_instruction = 0x880DCFB4;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r5,36(r1)
	ctx.current_instruction = 0x880DCFBC;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,-236(r1)
	ctx.current_instruction = 0x880DCFC4;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r9.u32);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stw r6,44(r1)
	ctx.current_instruction = 0x880DCFCC;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// stw r7,52(r1)
	ctx.current_instruction = 0x880DCFD0;
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// stw r8,-240(r1)
	ctx.current_instruction = 0x880DCFDC;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r8.u32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stw r10,-224(r1)
	ctx.current_instruction = 0x880DCFE4;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r11,r11,14576
	ctx.r11.s64 = ctx.r11.s64 + 14576;
	// addi r10,r10,14512
	ctx.r10.s64 = ctx.r10.s64 + 14512;
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,-232(r1)
	ctx.current_instruction = 0x880DCFF8;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r11.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r10,-228(r1)
	ctx.current_instruction = 0x880DD000;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// b 0x880dd018
	goto loc_880DD018;
loc_880DD008:
	// lwz r6,44(r1)
	ctx.current_instruction = 0x880DD008;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r4,28(r1)
	ctx.current_instruction = 0x880DD00C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r11,-232(r1)
	ctx.current_instruction = 0x880DD010;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r10,-228(r1)
	ctx.current_instruction = 0x880DD014;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
loc_880DD018:
	// lwzx r10,r9,r10
	ctx.current_instruction = 0x880DD018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r3,r1,-208
	ctx.r3.s64 = ctx.r1.s64 + -208;
	// lwzx r11,r9,r11
	ctx.current_instruction = 0x880DD020;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mullw r7,r10,r6
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r6,36(r1)
	ctx.current_instruction = 0x880DD028;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r5,20(r1)
	ctx.current_instruction = 0x880DD02C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r5,8(r11)
	ctx.current_instruction = 0x880DD044;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,12(r10)
	ctx.current_instruction = 0x880DD048;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// lbz r4,12(r11)
	ctx.current_instruction = 0x880DD04C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r6,8(r10)
	ctx.current_instruction = 0x880DD050;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// subf r4,r4,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lbz r7,4(r10)
	ctx.current_instruction = 0x880DD058;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// lbz r5,0(r10)
	ctx.current_instruction = 0x880DD060;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r29,4(r11)
	ctx.current_instruction = 0x880DD064;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r28,0(r11)
	ctx.current_instruction = 0x880DD06C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r29,r29,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r29.u64;
	// subf r28,r28,r5
	ctx.r28.u64 = ctx.r5.u64 - ctx.r28.u64;
	// srawi r7,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 31;
	// lbz r5,12(r10)
	ctx.current_instruction = 0x880DD080;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r27,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r6.s32 >> 31;
	// lbz r26,12(r11)
	ctx.current_instruction = 0x880DD088;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// xor r21,r4,r7
	ctx.r21.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// lbz r24,8(r10)
	ctx.current_instruction = 0x880DD090;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// srawi r25,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r29.s32 >> 31;
	// lbz r22,8(r11)
	ctx.current_instruction = 0x880DD098;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// subf r5,r26,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r26,4(r10)
	ctx.current_instruction = 0x880DD0A0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r23,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r28.s32 >> 31;
	// subf r4,r22,r24
	ctx.r4.u64 = ctx.r24.u64 - ctx.r22.u64;
	// lbz r24,4(r11)
	ctx.current_instruction = 0x880DD0AC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// srawi r22,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r5.s32 >> 31;
	// lbz r18,0(r11)
	ctx.current_instruction = 0x880DD0B4;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r19,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r4.s32 >> 31;
	// lbz r20,0(r10)
	ctx.current_instruction = 0x880DD0BC;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r26,r24,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r24.u64;
	// xor r24,r5,r22
	ctx.r24.u64 = ctx.r5.u64 ^ ctx.r22.u64;
	// xor r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r27.u64;
	// xor r5,r4,r19
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r19.u64;
	// srawi r17,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r26.s32 >> 31;
	// subf r4,r27,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r27.u64;
	// subf r7,r7,r21
	ctx.r7.u64 = ctx.r21.u64 - ctx.r7.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r20,r18,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r18.u64;
	// subf r5,r19,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r19.u64;
	// subf r6,r22,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r22.u64;
	// xor r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r25.u64;
	// lbz r27,12(r10)
	ctx.current_instruction = 0x880DD0F4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// xor r26,r26,r17
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r17.u64;
	// lbz r24,12(r11)
	ctx.current_instruction = 0x880DD0FC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r22,8(r10)
	ctx.current_instruction = 0x880DD104;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// srawi r19,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r20.s32 >> 31;
	// lbz r21,8(r11)
	ctx.current_instruction = 0x880DD10C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbz r18,4(r10)
	ctx.current_instruction = 0x880DD114;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r25,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r25.u64;
	// lbz r16,4(r11)
	ctx.current_instruction = 0x880DD11C;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// xor r29,r28,r23
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r23.u64;
	// subf r5,r17,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r17.u64;
	// xor r28,r20,r19
	ctx.r28.u64 = ctx.r20.u64 ^ ctx.r19.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r4,r23,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r23.u64;
	// subf r5,r19,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r19.u64;
	// subf r27,r24,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r24.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// srawi r29,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 31;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r28,r21,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r21.u64;
	// xor r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 ^ ctx.r29.u64;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r6,0(r10)
	ctx.current_instruction = 0x880DD15C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r27,0(r11)
	ctx.current_instruction = 0x880DD164;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// xor r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// lwz r25,-224(r1)
	ctx.current_instruction = 0x880DD170;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// subf r27,r27,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r27.u64;
	// subf r6,r29,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r29.u64;
	// lbz r23,12(r10)
	ctx.current_instruction = 0x880DD17C;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// subf r26,r16,r18
	ctx.r26.u64 = ctx.r18.u64 - ctx.r16.u64;
	// lbz r21,12(r11)
	ctx.current_instruction = 0x880DD184;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// subf r5,r5,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r5.u64;
	// lbz r20,8(r10)
	ctx.current_instruction = 0x880DD18C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// srawi r24,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r26.s32 >> 31;
	// lbz r4,8(r11)
	ctx.current_instruction = 0x880DD194;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// subf r29,r21,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r21.u64;
	// lbz r23,4(r10)
	ctx.current_instruction = 0x880DD19C;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r22,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r27.s32 >> 31;
	// subf r4,r4,r20
	ctx.r4.u64 = ctx.r20.u64 - ctx.r4.u64;
	// lbz r28,4(r11)
	ctx.current_instruction = 0x880DD1A8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// srawi r21,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r29.s32 >> 31;
	// lbz r10,0(r10)
	ctx.current_instruction = 0x880DD1B0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r20,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r4.s32 >> 31;
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880DD1B8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r28,r28,r23
	ctx.r28.u64 = ctx.r23.u64 - ctx.r28.u64;
	// xor r4,r4,r20
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r20.u64;
	// xor r29,r29,r21
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r21.u64;
	// xor r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r24.u64;
	// srawi r23,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r28.s32 >> 31;
	// subf r19,r11,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r6,r20,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r20.u64;
	// subf r10,r21,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r21.u64;
	// subf r11,r24,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r24.u64;
	// xor r4,r27,r22
	ctx.r4.u64 = ctx.r27.u64 ^ ctx.r22.u64;
	// xor r29,r28,r23
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r23.u64;
	// srawi r28,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r19.s32 >> 31;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// subf r6,r23,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r23.u64;
	// subf r5,r22,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r22.u64;
	// xor r4,r19,r28
	ctx.r4.u64 = ctx.r19.u64 ^ ctx.r28.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r6,r28,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r28.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r6,-236(r1)
	ctx.current_instruction = 0x880DD218;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r9,r3
	ctx.current_instruction = 0x880DD228;
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lwz r3,52(r1)
	ctx.current_instruction = 0x880DD230;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880dd260
	if (ctx.cr6.gt) goto loc_880DD260;
	// lwz r11,-240(r1)
	ctx.current_instruction = 0x880DD23C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// stw r6,-236(r1)
	ctx.current_instruction = 0x880DD250;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r6.u32);
	// stw r7,-240(r1)
	ctx.current_instruction = 0x880DD254;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r7.u32);
	// blt cr6,0x880dd008
	if (ctx.cr6.lt) goto loc_880DD008;
	// b 0x880dd264
	goto loc_880DD264;
loc_880DD260:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_880DD264:
	// lwz r11,-240(r1)
	ctx.current_instruction = 0x880DD264;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x880dd278
	if (!ctx.cr6.eq) goto loc_880DD278;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880dd27c
	if (ctx.cr6.gt) goto loc_880DD27C;
loc_880DD278:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_880DD27C:
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E39D0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E39D0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E39D0;
	ctx.current_instruction = 0x880E39D0;
	// lwz r11,7976(r3)
	ctx.current_instruction = 0x880E39D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e3ac0
	if (!ctx.cr6.eq) goto loc_880E3AC0;
	// lwz r11,8104(r3)
	ctx.current_instruction = 0x880E39DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e3ac0
	if (ctx.cr6.eq) goto loc_880E3AC0;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18412(r11)
	ctx.current_instruction = 0x880E39EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e3ac0
	if (!ctx.cr6.eq) goto loc_880E3AC0;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18416(r11)
	ctx.current_instruction = 0x880E39FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e3ac0
	if (!ctx.cr6.eq) goto loc_880E3AC0;
	// lwz r11,7952(r3)
	ctx.current_instruction = 0x880E3A08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7952);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// lwz r9,7960(r3)
	ctx.current_instruction = 0x880E3A10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7960);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880e3a34
	if (ctx.cr6.lt) goto loc_880E3A34;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7972(r3)
	ctx.current_instruction = 0x880E3A20;
	REX_STORE_U32(ctx.r3.u32 + 7972, ctx.r11.u32);
	// lwz r11,-19940(r10)
	ctx.current_instruction = 0x880E3A24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -19940);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	ctx.current_instruction = 0x880E3A2C;
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E3A34:
	// lwz r9,7964(r3)
	ctx.current_instruction = 0x880E3A34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7964);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,7972(r3)
	ctx.current_instruction = 0x880E3A3C;
	REX_STORE_U32(ctx.r3.u32 + 7972, ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880e3a64
	if (ctx.cr6.lt) goto loc_880E3A64;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// lwz r11,-19952(r11)
	ctx.current_instruction = 0x880E3A54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19952);
	// stw r11,-19940(r10)
	ctx.current_instruction = 0x880E3A58;
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// stw r11,-19948(r9)
	ctx.current_instruction = 0x880E3A5C;
	REX_STORE_U32(ctx.r9.u32 + -19948, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E3A64:
	// lwz r11,676(r3)
	ctx.current_instruction = 0x880E3A64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x880e3a88
	if (ctx.cr6.gt) goto loc_880E3A88;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,-19952(r11)
	ctx.current_instruction = 0x880E3A74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19952);
	// stw r11,-19940(r10)
	ctx.current_instruction = 0x880E3A78;
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	ctx.current_instruction = 0x880E3A80;
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E3A88:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x880e3aa8
	if (ctx.cr6.lt) goto loc_880E3AA8;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,-19964(r11)
	ctx.current_instruction = 0x880E3A94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19964);
	// stw r11,-19940(r10)
	ctx.current_instruction = 0x880E3A98;
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	ctx.current_instruction = 0x880E3AA0;
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E3AA8:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,-19960(r11)
	ctx.current_instruction = 0x880E3AAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19960);
	// stw r11,-19940(r10)
	ctx.current_instruction = 0x880E3AB0;
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r11,-19948(r10)
	ctx.current_instruction = 0x880E3AB8;
	REX_STORE_U32(ctx.r10.u32 + -19948, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E3AC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7972(r3)
	ctx.current_instruction = 0x880E3AC4;
	REX_STORE_U32(ctx.r3.u32 + 7972, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E6840) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E6840);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E6840;
	ctx.current_instruction = 0x880E6840;
	PPCRegister temp{};
	// stb r4,0(r5)
	ctx.current_instruction = 0x880E6840;
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r4.u8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.current_instruction = 0x880E6848;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880e68c4
	if (ctx.cr6.lt) goto loc_880E68C4;
	// beq cr6,0x880e68a8
	if (ctx.cr6.eq) goto loc_880E68A8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880e6888
	if (ctx.cr6.eq) goto loc_880E6888;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x880e6888
	if (ctx.cr6.eq) goto loc_880E6888;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x880e6888
	if (ctx.cr6.eq) goto loc_880E6888;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x880e6898
	if (!ctx.cr6.eq) goto loc_880E6898;
loc_880E6888:
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r9,0(r5)
	ctx.current_instruction = 0x880E6890;
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// stb r4,0(r6)
	ctx.current_instruction = 0x880E6894;
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
loc_880E6898:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r9,48(r10)
	ctx.current_instruction = 0x880E68A0;
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E68A8:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// stw r5,48(r10)
	ctx.current_instruction = 0x880E68BC;
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r5.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E68C4:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r10)
	ctx.current_instruction = 0x880E68D4;
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E7798) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E7798;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E7798) {
			switch (rex_dispatch_address) {
				case 0x880E77A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E7798;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880E77A0: goto loc_880E77A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880E77A0;
	__savegprlr_19(ctx, base);
loc_880E77A0:
	// lwz r11,800(r3)
	ctx.current_instruction = 0x880E77A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// lwz r10,796(r3)
	ctx.current_instruction = 0x880E77A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r5,720(r3)
	ctx.current_instruction = 0x880E77AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r9,1380(r3)
	ctx.current_instruction = 0x880E77B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// rlwinm r10,r11,1,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10;
	// lwz r4,1624(r3)
	ctx.current_instruction = 0x880E77BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// lwz r30,728(r3)
	ctx.current_instruction = 0x880E77C4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,1360(r3)
	ctx.current_instruction = 0x880E77CC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,1372(r3)
	ctx.current_instruction = 0x880E77D4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// add r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lwz r6,1396(r3)
	ctx.current_instruction = 0x880E77DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1396);
	// lwz r7,1400(r3)
	ctx.current_instruction = 0x880E77E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1400);
	// xori r8,r11,24
	ctx.r8.u64 = ctx.r11.u64 ^ 24;
	// rlwinm r31,r9,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r10,8,0,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// stw r6,3048(r3)
	ctx.current_instruction = 0x880E77F8;
	REX_STORE_U32(ctx.r3.u32 + 3048, ctx.r6.u32);
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r7,3052(r3)
	ctx.current_instruction = 0x880E7800;
	REX_STORE_U32(ctx.r3.u32 + 3052, ctx.r7.u32);
	// divwu r11,r29,r4
	ctx.r11.u64 = uint32_t(ctx.r4.u32 ? ctx.r29.u32 / ctx.r4.u32 : 0);
	// stw r31,19088(r3)
	ctx.current_instruction = 0x880E7808;
	REX_STORE_U32(ctx.r3.u32 + 19088, ctx.r31.u32);
	// divwu r10,r28,r4
	ctx.r10.u64 = uint32_t(ctx.r4.u32 ? ctx.r28.u32 / ctx.r4.u32 : 0);
	// stw r8,7996(r3)
	ctx.current_instruction = 0x880E7810;
	REX_STORE_U32(ctx.r3.u32 + 7996, ctx.r8.u32);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r30,19460(r3)
	ctx.current_instruction = 0x880E7818;
	REX_STORE_U32(ctx.r3.u32 + 19460, ctx.r30.u32);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r27,19452(r3)
	ctx.current_instruction = 0x880E7820;
	REX_STORE_U32(ctx.r3.u32 + 19452, ctx.r27.u32);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// stw r11,3028(r3)
	ctx.current_instruction = 0x880E7828;
	REX_STORE_U32(ctx.r3.u32 + 3028, ctx.r11.u32);
	// stw r10,3036(r3)
	ctx.current_instruction = 0x880E782C;
	REX_STORE_U32(ctx.r3.u32 + 3036, ctx.r10.u32);
	// blt cr6,0x880e78d8
	if (ctx.cr6.lt) goto loc_880E78D8;
	// lwz r8,1384(r3)
	ctx.current_instruction = 0x880E7834;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1384);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r11,3992(r3)
	ctx.current_instruction = 0x880E783C;
	REX_STORE_U32(ctx.r3.u32 + 3992, ctx.r11.u32);
	// stw r10,4000(r3)
	ctx.current_instruction = 0x880E7840;
	REX_STORE_U32(ctx.r3.u32 + 4000, ctx.r10.u32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r9,r6
	ctx.r27.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r31,3996(r3)
	ctx.current_instruction = 0x880E7854;
	REX_STORE_U32(ctx.r3.u32 + 3996, ctx.r31.u32);
	// add r26,r8,r7
	ctx.r26.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r30,4004(r3)
	ctx.current_instruction = 0x880E785C;
	REX_STORE_U32(ctx.r3.u32 + 4004, ctx.r30.u32);
	// stw r27,4016(r3)
	ctx.current_instruction = 0x880E7860;
	REX_STORE_U32(ctx.r3.u32 + 4016, ctx.r27.u32);
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// stw r26,4020(r3)
	ctx.current_instruction = 0x880E7868;
	REX_STORE_U32(ctx.r3.u32 + 4020, ctx.r26.u32);
	// bne cr6,0x880e78d8
	if (!ctx.cr6.eq) goto loc_880E78D8;
	// stw r31,4960(r3)
	ctx.current_instruction = 0x880E7870;
	REX_STORE_U32(ctx.r3.u32 + 4960, ctx.r31.u32);
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r9,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,4968(r3)
	ctx.current_instruction = 0x880E787C;
	REX_STORE_U32(ctx.r3.u32 + 4968, ctx.r30.u32);
	// stw r28,5940(r3)
	ctx.current_instruction = 0x880E7880;
	REX_STORE_U32(ctx.r3.u32 + 5940, ctx.r28.u32);
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r8,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,5932(r3)
	ctx.current_instruction = 0x880E788C;
	REX_STORE_U32(ctx.r3.u32 + 5932, ctx.r29.u32);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r31,r28,r6
	ctx.r31.u64 = ctx.r28.u64 + ctx.r6.u64;
	// stw r11,4964(r3)
	ctx.current_instruction = 0x880E78AC;
	REX_STORE_U32(ctx.r3.u32 + 4964, ctx.r11.u32);
	// add r30,r26,r7
	ctx.r30.u64 = ctx.r26.u64 + ctx.r7.u64;
	// stw r10,4972(r3)
	ctx.current_instruction = 0x880E78B4;
	REX_STORE_U32(ctx.r3.u32 + 4972, ctx.r10.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r31,4984(r3)
	ctx.current_instruction = 0x880E78BC;
	REX_STORE_U32(ctx.r3.u32 + 4984, ctx.r31.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r30,4988(r3)
	ctx.current_instruction = 0x880E78C4;
	REX_STORE_U32(ctx.r3.u32 + 4988, ctx.r30.u32);
	// stw r11,5928(r3)
	ctx.current_instruction = 0x880E78C8;
	REX_STORE_U32(ctx.r3.u32 + 5928, ctx.r11.u32);
	// stw r10,5936(r3)
	ctx.current_instruction = 0x880E78CC;
	REX_STORE_U32(ctx.r3.u32 + 5936, ctx.r10.u32);
	// stw r9,5952(r3)
	ctx.current_instruction = 0x880E78D0;
	REX_STORE_U32(ctx.r3.u32 + 5952, ctx.r9.u32);
	// stw r8,5956(r3)
	ctx.current_instruction = 0x880E78D4;
	REX_STORE_U32(ctx.r3.u32 + 5956, ctx.r8.u32);
loc_880E78D8:
	// lwz r8,724(r3)
	ctx.current_instruction = 0x880E78D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// li r22,0
	ctx.r22.s64 = 0;
	// divwu r11,r5,r4
	ctx.r11.u64 = uint32_t(ctx.r4.u32 ? ctx.r5.u32 / ctx.r4.u32 : 0);
	// divwu r25,r8,r4
	ctx.r25.u64 = uint32_t(ctx.r4.u32 ? ctx.r8.u32 / ctx.r4.u32 : 0);
	// stw r22,3112(r3)
	ctx.current_instruction = 0x880E78E8;
	REX_STORE_U32(ctx.r3.u32 + 3112, ctx.r22.u32);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r22,3120(r3)
	ctx.current_instruction = 0x880E78F0;
	REX_STORE_U32(ctx.r3.u32 + 3120, ctx.r22.u32);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r11,3628(r3)
	ctx.current_instruction = 0x880E78F8;
	REX_STORE_U32(ctx.r3.u32 + 3628, ctx.r11.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// stw r25,3116(r3)
	ctx.current_instruction = 0x880E7900;
	REX_STORE_U32(ctx.r3.u32 + 3116, ctx.r25.u32);
	// bne cr6,0x880e7910
	if (!ctx.cr6.eq) goto loc_880E7910;
	// stw r8,3124(r3)
	ctx.current_instruction = 0x880E7908;
	REX_STORE_U32(ctx.r3.u32 + 3124, ctx.r8.u32);
	// b 0x880e7918
	goto loc_880E7918;
loc_880E7910:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,3124(r3)
	ctx.current_instruction = 0x880E7914;
	REX_STORE_U32(ctx.r3.u32 + 3124, ctx.r11.u32);
loc_880E7918:
	// lwz r11,20(r3)
	ctx.current_instruction = 0x880E7918;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// add r23,r6,r11
	ctx.r23.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r23,784(r3)
	ctx.current_instruction = 0x880E7924;
	REX_STORE_U32(ctx.r3.u32 + 784, ctx.r23.u32);
	// blt cr6,0x880e7fa0
	if (ctx.cr6.lt) goto loc_880E7FA0;
	// lwz r11,3124(r3)
	ctx.current_instruction = 0x880E792C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3124);
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// stw r25,4080(r3)
	ctx.current_instruction = 0x880E7934;
	REX_STORE_U32(ctx.r3.u32 + 4080, ctx.r25.u32);
	// stw r11,4088(r3)
	ctx.current_instruction = 0x880E7938;
	REX_STORE_U32(ctx.r3.u32 + 4088, ctx.r11.u32);
	// bne cr6,0x880e795c
	if (!ctx.cr6.eq) goto loc_880E795C;
	// rlwinm r11,r8,31,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x3FFFFFFF;
	// rlwinm r10,r8,31,2,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x3FFFFFFE;
	// rlwinm r9,r5,31,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x3FFFFFFF;
	// stw r11,4084(r3)
	ctx.current_instruction = 0x880E794C;
	REX_STORE_U32(ctx.r3.u32 + 4084, ctx.r11.u32);
	// stw r10,4092(r3)
	ctx.current_instruction = 0x880E7950;
	REX_STORE_U32(ctx.r3.u32 + 4092, ctx.r10.u32);
	// stw r9,4596(r3)
	ctx.current_instruction = 0x880E7954;
	REX_STORE_U32(ctx.r3.u32 + 4596, ctx.r9.u32);
	// b 0x880e7968
	goto loc_880E7968;
loc_880E795C:
	// stw r8,4084(r3)
	ctx.current_instruction = 0x880E795C;
	REX_STORE_U32(ctx.r3.u32 + 4084, ctx.r8.u32);
	// stw r5,4596(r3)
	ctx.current_instruction = 0x880E7960;
	REX_STORE_U32(ctx.r3.u32 + 4596, ctx.r5.u32);
	// stw r8,4092(r3)
	ctx.current_instruction = 0x880E7964;
	REX_STORE_U32(ctx.r3.u32 + 4092, ctx.r8.u32);
loc_880E7968:
	// mullw r11,r25,r5
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r5.s32);
	// lwz r24,3400(r3)
	ctx.current_instruction = 0x880E796C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 3400);
	// lwz r6,3404(r3)
	ctx.current_instruction = 0x880E7970;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3404);
	// lwz r31,3408(r3)
	ctx.current_instruction = 0x880E7974;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 3408);
	// lwz r30,1608(r3)
	ctx.current_instruction = 0x880E7978;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1608);
	// stw r11,4100(r3)
	ctx.current_instruction = 0x880E797C;
	REX_STORE_U32(ctx.r3.u32 + 4100, ctx.r11.u32);
	// stw r11,4104(r3)
	ctx.current_instruction = 0x880E7980;
	REX_STORE_U32(ctx.r3.u32 + 4104, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r10,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r29,r25,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r7,r24
	ctx.r7.u64 = ctx.r7.u64 + ctx.r24.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r29,4096(r3)
	ctx.current_instruction = 0x880E79B4;
	REX_STORE_U32(ctx.r3.u32 + 4096, ctx.r29.u32);
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r7,4368(r3)
	ctx.current_instruction = 0x880E79BC;
	REX_STORE_U32(ctx.r3.u32 + 4368, ctx.r7.u32);
	// stw r6,4372(r3)
	ctx.current_instruction = 0x880E79C0;
	REX_STORE_U32(ctx.r3.u32 + 4372, ctx.r6.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r31,4376(r3)
	ctx.current_instruction = 0x880E79C8;
	REX_STORE_U32(ctx.r3.u32 + 4376, ctx.r31.u32);
	// beq cr6,0x880e7a60
	if (ctx.cr6.eq) goto loc_880E7A60;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,3412(r3)
	ctx.current_instruction = 0x880E79D4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 3412);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,3416(r3)
	ctx.current_instruction = 0x880E79DC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3416);
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,3420(r3)
	ctx.current_instruction = 0x880E79E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3420);
	// add r27,r11,r6
	ctx.r27.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,3424(r3)
	ctx.current_instruction = 0x880E79EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3424);
	// rlwinm r11,r29,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r29,3104(r3)
	ctx.current_instruction = 0x880E79F4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3104);
	// lwz r28,3428(r3)
	ctx.current_instruction = 0x880E79F8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 3428);
	// rlwinm r26,r27,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r21,r31,r11
	ctx.r21.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r27,3432(r3)
	ctx.current_instruction = 0x880E7A04;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 3432);
	// add r20,r30,r11
	ctx.r20.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r31,3436(r3)
	ctx.current_instruction = 0x880E7A0C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 3436);
	// add r19,r7,r11
	ctx.r19.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r30,3440(r3)
	ctx.current_instruction = 0x880E7A14;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3440);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r7,3108(r3)
	ctx.current_instruction = 0x880E7A1C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3108);
	// add r6,r29,r9
	ctx.r6.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r21,4380(r3)
	ctx.current_instruction = 0x880E7A24;
	REX_STORE_U32(ctx.r3.u32 + 4380, ctx.r21.u32);
	// add r29,r28,r10
	ctx.r29.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stw r11,4392(r3)
	ctx.current_instruction = 0x880E7A2C;
	REX_STORE_U32(ctx.r3.u32 + 4392, ctx.r11.u32);
	// add r28,r27,r10
	ctx.r28.u64 = ctx.r27.u64 + ctx.r10.u64;
	// stw r20,4384(r3)
	ctx.current_instruction = 0x880E7A34;
	REX_STORE_U32(ctx.r3.u32 + 4384, ctx.r20.u32);
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r19,4388(r3)
	ctx.current_instruction = 0x880E7A3C;
	REX_STORE_U32(ctx.r3.u32 + 4388, ctx.r19.u32);
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r6,4072(r3)
	ctx.current_instruction = 0x880E7A44;
	REX_STORE_U32(ctx.r3.u32 + 4072, ctx.r6.u32);
	// add r10,r26,r7
	ctx.r10.u64 = ctx.r26.u64 + ctx.r7.u64;
	// stw r29,4396(r3)
	ctx.current_instruction = 0x880E7A4C;
	REX_STORE_U32(ctx.r3.u32 + 4396, ctx.r29.u32);
	// stw r28,4400(r3)
	ctx.current_instruction = 0x880E7A50;
	REX_STORE_U32(ctx.r3.u32 + 4400, ctx.r28.u32);
	// stw r31,4404(r3)
	ctx.current_instruction = 0x880E7A54;
	REX_STORE_U32(ctx.r3.u32 + 4404, ctx.r31.u32);
	// stw r11,4408(r3)
	ctx.current_instruction = 0x880E7A58;
	REX_STORE_U32(ctx.r3.u32 + 4408, ctx.r11.u32);
	// stw r10,4076(r3)
	ctx.current_instruction = 0x880E7A5C;
	REX_STORE_U32(ctx.r3.u32 + 4076, ctx.r10.u32);
loc_880E7A60:
	// lwz r11,1404(r3)
	ctx.current_instruction = 0x880E7A60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1404);
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// lwz r7,1408(r3)
	ctx.current_instruction = 0x880E7A68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1408);
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// lwz r10,3396(r3)
	ctx.current_instruction = 0x880E7A70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3396);
	// stw r11,4420(r3)
	ctx.current_instruction = 0x880E7A74;
	REX_STORE_U32(ctx.r3.u32 + 4420, ctx.r11.u32);
	// add r4,r23,r11
	ctx.r4.u64 = ctx.r23.u64 + ctx.r11.u64;
	// mullw r6,r25,r7
	ctx.r6.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// stw r4,4412(r3)
	ctx.current_instruction = 0x880E7A80;
	REX_STORE_U32(ctx.r3.u32 + 4412, ctx.r4.u32);
	// stw r6,4424(r3)
	ctx.current_instruction = 0x880E7A84;
	REX_STORE_U32(ctx.r3.u32 + 4424, ctx.r6.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4364(r3)
	ctx.current_instruction = 0x880E7A8C;
	REX_STORE_U32(ctx.r3.u32 + 4364, ctx.r11.u32);
	// bne cr6,0x880e7fa0
	if (!ctx.cr6.eq) goto loc_880E7FA0;
	// rlwinm r9,r8,31,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x3FFFFFFF;
	// lwz r7,4092(r3)
	ctx.current_instruction = 0x880E7A98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4092);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r11,r5,r9
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stw r9,5048(r3)
	ctx.current_instruction = 0x880E7AA4;
	REX_STORE_U32(ctx.r3.u32 + 5048, ctx.r9.u32);
	// stw r11,5068(r3)
	ctx.current_instruction = 0x880E7AA8;
	REX_STORE_U32(ctx.r3.u32 + 5068, ctx.r11.u32);
	// stw r11,5072(r3)
	ctx.current_instruction = 0x880E7AAC;
	REX_STORE_U32(ctx.r3.u32 + 5072, ctx.r11.u32);
	// stw r7,5056(r3)
	ctx.current_instruction = 0x880E7AB0;
	REX_STORE_U32(ctx.r3.u32 + 5056, ctx.r7.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,5052(r3)
	ctx.current_instruction = 0x880E7AD4;
	REX_STORE_U32(ctx.r3.u32 + 5052, ctx.r9.u32);
	// rlwinm r6,r10,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r8,3,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF0;
	// stw r7,5060(r3)
	ctx.current_instruction = 0x880E7AE0;
	REX_STORE_U32(ctx.r3.u32 + 5060, ctx.r7.u32);
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r6,5564(r3)
	ctx.current_instruction = 0x880E7AE8;
	REX_STORE_U32(ctx.r3.u32 + 5564, ctx.r6.u32);
	// stw r5,5064(r3)
	ctx.current_instruction = 0x880E7AEC;
	REX_STORE_U32(ctx.r3.u32 + 5064, ctx.r5.u32);
	// stw r4,5336(r3)
	ctx.current_instruction = 0x880E7AF0;
	REX_STORE_U32(ctx.r3.u32 + 5336, ctx.r4.u32);
	// lwz r10,3404(r3)
	ctx.current_instruction = 0x880E7AF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3404);
	// lwz r9,720(r3)
	ctx.current_instruction = 0x880E7AF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r11,5048(r3)
	ctx.current_instruction = 0x880E7AFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,5340(r3)
	ctx.current_instruction = 0x880E7B14;
	REX_STORE_U32(ctx.r3.u32 + 5340, ctx.r7.u32);
	// lwz r10,3408(r3)
	ctx.current_instruction = 0x880E7B18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3408);
	// lwz r6,5048(r3)
	ctx.current_instruction = 0x880E7B1C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r5,720(r3)
	ctx.current_instruction = 0x880E7B20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,5344(r3)
	ctx.current_instruction = 0x880E7B38;
	REX_STORE_U32(ctx.r3.u32 + 5344, ctx.r11.u32);
	// lwz r10,1608(r3)
	ctx.current_instruction = 0x880E7B3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880e7cb0
	if (ctx.cr6.eq) goto loc_880E7CB0;
	// lwz r9,720(r3)
	ctx.current_instruction = 0x880E7B48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r11,5048(r3)
	ctx.current_instruction = 0x880E7B4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r10,3412(r3)
	ctx.current_instruction = 0x880E7B50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3412);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,5348(r3)
	ctx.current_instruction = 0x880E7B68;
	REX_STORE_U32(ctx.r3.u32 + 5348, ctx.r7.u32);
	// lwz r10,3416(r3)
	ctx.current_instruction = 0x880E7B6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3416);
	// lwz r6,5048(r3)
	ctx.current_instruction = 0x880E7B70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r5,720(r3)
	ctx.current_instruction = 0x880E7B74;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,5352(r3)
	ctx.current_instruction = 0x880E7B8C;
	REX_STORE_U32(ctx.r3.u32 + 5352, ctx.r11.u32);
	// lwz r10,3420(r3)
	ctx.current_instruction = 0x880E7B90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3420);
	// lwz r8,720(r3)
	ctx.current_instruction = 0x880E7B94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r9,5048(r3)
	ctx.current_instruction = 0x880E7B98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,5356(r3)
	ctx.current_instruction = 0x880E7BB0;
	REX_STORE_U32(ctx.r3.u32 + 5356, ctx.r6.u32);
	// lwz r10,3424(r3)
	ctx.current_instruction = 0x880E7BB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3424);
	// lwz r5,5048(r3)
	ctx.current_instruction = 0x880E7BB8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r4,720(r3)
	ctx.current_instruction = 0x880E7BBC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,5360(r3)
	ctx.current_instruction = 0x880E7BD4;
	REX_STORE_U32(ctx.r3.u32 + 5360, ctx.r10.u32);
	// lwz r10,3104(r3)
	ctx.current_instruction = 0x880E7BD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3104);
	// lwz r9,5048(r3)
	ctx.current_instruction = 0x880E7BDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r8,720(r3)
	ctx.current_instruction = 0x880E7BE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,5040(r3)
	ctx.current_instruction = 0x880E7BF8;
	REX_STORE_U32(ctx.r3.u32 + 5040, ctx.r6.u32);
	// lwz r10,3428(r3)
	ctx.current_instruction = 0x880E7BFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3428);
	// lwz r5,5048(r3)
	ctx.current_instruction = 0x880E7C00;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r4,720(r3)
	ctx.current_instruction = 0x880E7C04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,5364(r3)
	ctx.current_instruction = 0x880E7C1C;
	REX_STORE_U32(ctx.r3.u32 + 5364, ctx.r10.u32);
	// lwz r10,3432(r3)
	ctx.current_instruction = 0x880E7C20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3432);
	// lwz r9,5048(r3)
	ctx.current_instruction = 0x880E7C24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r8,720(r3)
	ctx.current_instruction = 0x880E7C28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,5368(r3)
	ctx.current_instruction = 0x880E7C40;
	REX_STORE_U32(ctx.r3.u32 + 5368, ctx.r6.u32);
	// lwz r10,3436(r3)
	ctx.current_instruction = 0x880E7C44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3436);
	// lwz r5,5048(r3)
	ctx.current_instruction = 0x880E7C48;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r4,720(r3)
	ctx.current_instruction = 0x880E7C4C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,5372(r3)
	ctx.current_instruction = 0x880E7C64;
	REX_STORE_U32(ctx.r3.u32 + 5372, ctx.r10.u32);
	// lwz r10,3440(r3)
	ctx.current_instruction = 0x880E7C68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3440);
	// lwz r9,5048(r3)
	ctx.current_instruction = 0x880E7C6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r8,720(r3)
	ctx.current_instruction = 0x880E7C70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,5376(r3)
	ctx.current_instruction = 0x880E7C88;
	REX_STORE_U32(ctx.r3.u32 + 5376, ctx.r6.u32);
	// lwz r5,5048(r3)
	ctx.current_instruction = 0x880E7C8C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r4,720(r3)
	ctx.current_instruction = 0x880E7C90;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,3108(r3)
	ctx.current_instruction = 0x880E7C94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3108);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,5044(r3)
	ctx.current_instruction = 0x880E7CAC;
	REX_STORE_U32(ctx.r3.u32 + 5044, ctx.r10.u32);
loc_880E7CB0:
	// lwz r11,1404(r3)
	ctx.current_instruction = 0x880E7CB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1404);
	// lwz r10,5048(r3)
	ctx.current_instruction = 0x880E7CB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,5388(r3)
	ctx.current_instruction = 0x880E7CBC;
	REX_STORE_U32(ctx.r3.u32 + 5388, ctx.r9.u32);
	// lwz r8,5048(r3)
	ctx.current_instruction = 0x880E7CC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r7,1408(r3)
	ctx.current_instruction = 0x880E7CC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1408);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// stw r6,5392(r3)
	ctx.current_instruction = 0x880E7CCC;
	REX_STORE_U32(ctx.r3.u32 + 5392, ctx.r6.u32);
	// lwz r10,784(r3)
	ctx.current_instruction = 0x880E7CD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r11,5388(r3)
	ctx.current_instruction = 0x880E7CD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5388);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,5380(r3)
	ctx.current_instruction = 0x880E7CDC;
	REX_STORE_U32(ctx.r3.u32 + 5380, ctx.r5.u32);
	// lwz r10,3396(r3)
	ctx.current_instruction = 0x880E7CE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3396);
	// lwz r4,5048(r3)
	ctx.current_instruction = 0x880E7CE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 5048);
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880E7CE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,5332(r3)
	ctx.current_instruction = 0x880E7D00;
	REX_STORE_U32(ctx.r3.u32 + 5332, ctx.r8.u32);
	// lwz r7,1624(r3)
	ctx.current_instruction = 0x880E7D04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880E7D08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r5,r6,r7
	ctx.r5.u64 = uint32_t(ctx.r7.u32 ? ctx.r6.u32 / ctx.r7.u32 : 0);
	// stw r5,6016(r3)
	ctx.current_instruction = 0x880E7D1C;
	REX_STORE_U32(ctx.r3.u32 + 6016, ctx.r5.u32);
	// lwz r4,5060(r3)
	ctx.current_instruction = 0x880E7D20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 5060);
	// stw r4,6024(r3)
	ctx.current_instruction = 0x880E7D24;
	REX_STORE_U32(ctx.r3.u32 + 6024, ctx.r4.u32);
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880E7D28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// stw r11,6020(r3)
	ctx.current_instruction = 0x880E7D2C;
	REX_STORE_U32(ctx.r3.u32 + 6020, ctx.r11.u32);
	// lwz r10,724(r3)
	ctx.current_instruction = 0x880E7D30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// stw r10,6028(r3)
	ctx.current_instruction = 0x880E7D34;
	REX_STORE_U32(ctx.r3.u32 + 6028, ctx.r10.u32);
	// lwz r9,720(r3)
	ctx.current_instruction = 0x880E7D38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// stw r9,6532(r3)
	ctx.current_instruction = 0x880E7D3C;
	REX_STORE_U32(ctx.r3.u32 + 6532, ctx.r9.u32);
	// lwz r8,6016(r3)
	ctx.current_instruction = 0x880E7D40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,6032(r3)
	ctx.current_instruction = 0x880E7D48;
	REX_STORE_U32(ctx.r3.u32 + 6032, ctx.r7.u32);
	// lwz r6,720(r3)
	ctx.current_instruction = 0x880E7D4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r5,6016(r3)
	ctx.current_instruction = 0x880E7D50;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// stw r4,6036(r3)
	ctx.current_instruction = 0x880E7D58;
	REX_STORE_U32(ctx.r3.u32 + 6036, ctx.r4.u32);
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880E7D5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,6016(r3)
	ctx.current_instruction = 0x880E7D60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,6040(r3)
	ctx.current_instruction = 0x880E7D68;
	REX_STORE_U32(ctx.r3.u32 + 6040, ctx.r9.u32);
	// lwz r10,3400(r3)
	ctx.current_instruction = 0x880E7D6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3400);
	// lwz r8,720(r3)
	ctx.current_instruction = 0x880E7D70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r7,6016(r3)
	ctx.current_instruction = 0x880E7D74;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,6304(r3)
	ctx.current_instruction = 0x880E7D8C;
	REX_STORE_U32(ctx.r3.u32 + 6304, ctx.r5.u32);
	// lwz r10,3404(r3)
	ctx.current_instruction = 0x880E7D90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3404);
	// lwz r4,720(r3)
	ctx.current_instruction = 0x880E7D94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r11,6016(r3)
	ctx.current_instruction = 0x880E7D98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,6308(r3)
	ctx.current_instruction = 0x880E7DB0;
	REX_STORE_U32(ctx.r3.u32 + 6308, ctx.r8.u32);
	// lwz r10,3408(r3)
	ctx.current_instruction = 0x880E7DB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3408);
	// lwz r7,6016(r3)
	ctx.current_instruction = 0x880E7DB8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// lwz r6,720(r3)
	ctx.current_instruction = 0x880E7DBC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,6312(r3)
	ctx.current_instruction = 0x880E7DD4;
	REX_STORE_U32(ctx.r3.u32 + 6312, ctx.r4.u32);
	// lwz r11,1608(r3)
	ctx.current_instruction = 0x880E7DD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e7f4c
	if (ctx.cr6.eq) goto loc_880E7F4C;
	// lwz r9,6016(r3)
	ctx.current_instruction = 0x880E7DE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880E7DE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,3412(r3)
	ctx.current_instruction = 0x880E7DEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3412);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,6316(r3)
	ctx.current_instruction = 0x880E7E04;
	REX_STORE_U32(ctx.r3.u32 + 6316, ctx.r7.u32);
	// lwz r10,3416(r3)
	ctx.current_instruction = 0x880E7E08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3416);
	// lwz r6,720(r3)
	ctx.current_instruction = 0x880E7E0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r5,6016(r3)
	ctx.current_instruction = 0x880E7E10;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,6320(r3)
	ctx.current_instruction = 0x880E7E28;
	REX_STORE_U32(ctx.r3.u32 + 6320, ctx.r11.u32);
	// lwz r10,3420(r3)
	ctx.current_instruction = 0x880E7E2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3420);
	// lwz r9,720(r3)
	ctx.current_instruction = 0x880E7E30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r8,6016(r3)
	ctx.current_instruction = 0x880E7E34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6324(r3)
	ctx.current_instruction = 0x880E7E4C;
	REX_STORE_U32(ctx.r3.u32 + 6324, ctx.r6.u32);
	// lwz r10,3424(r3)
	ctx.current_instruction = 0x880E7E50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3424);
	// lwz r5,720(r3)
	ctx.current_instruction = 0x880E7E54;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r4,6016(r3)
	ctx.current_instruction = 0x880E7E58;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6328(r3)
	ctx.current_instruction = 0x880E7E70;
	REX_STORE_U32(ctx.r3.u32 + 6328, ctx.r10.u32);
	// lwz r10,3104(r3)
	ctx.current_instruction = 0x880E7E74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3104);
	// lwz r9,6016(r3)
	ctx.current_instruction = 0x880E7E78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// lwz r8,720(r3)
	ctx.current_instruction = 0x880E7E7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6008(r3)
	ctx.current_instruction = 0x880E7E94;
	REX_STORE_U32(ctx.r3.u32 + 6008, ctx.r6.u32);
	// lwz r5,720(r3)
	ctx.current_instruction = 0x880E7E98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r4,6016(r3)
	ctx.current_instruction = 0x880E7E9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,3428(r3)
	ctx.current_instruction = 0x880E7EA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3428);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6332(r3)
	ctx.current_instruction = 0x880E7EB8;
	REX_STORE_U32(ctx.r3.u32 + 6332, ctx.r10.u32);
	// lwz r10,3432(r3)
	ctx.current_instruction = 0x880E7EBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3432);
	// lwz r9,720(r3)
	ctx.current_instruction = 0x880E7EC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r8,6016(r3)
	ctx.current_instruction = 0x880E7EC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6336(r3)
	ctx.current_instruction = 0x880E7EDC;
	REX_STORE_U32(ctx.r3.u32 + 6336, ctx.r6.u32);
	// lwz r4,720(r3)
	ctx.current_instruction = 0x880E7EE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r5,6016(r3)
	ctx.current_instruction = 0x880E7EE4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,3436(r3)
	ctx.current_instruction = 0x880E7EF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3436);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6340(r3)
	ctx.current_instruction = 0x880E7F00;
	REX_STORE_U32(ctx.r3.u32 + 6340, ctx.r10.u32);
	// lwz r10,3440(r3)
	ctx.current_instruction = 0x880E7F04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3440);
	// lwz r9,720(r3)
	ctx.current_instruction = 0x880E7F08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r8,6016(r3)
	ctx.current_instruction = 0x880E7F0C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6344(r3)
	ctx.current_instruction = 0x880E7F24;
	REX_STORE_U32(ctx.r3.u32 + 6344, ctx.r6.u32);
	// lwz r5,720(r3)
	ctx.current_instruction = 0x880E7F28;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r4,6016(r3)
	ctx.current_instruction = 0x880E7F2C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// lwz r10,3108(r3)
	ctx.current_instruction = 0x880E7F30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3108);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6012(r3)
	ctx.current_instruction = 0x880E7F48;
	REX_STORE_U32(ctx.r3.u32 + 6012, ctx.r10.u32);
loc_880E7F4C:
	// lwz r11,1404(r3)
	ctx.current_instruction = 0x880E7F4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1404);
	// lwz r10,6016(r3)
	ctx.current_instruction = 0x880E7F50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,6356(r3)
	ctx.current_instruction = 0x880E7F58;
	REX_STORE_U32(ctx.r3.u32 + 6356, ctx.r9.u32);
	// lwz r8,1408(r3)
	ctx.current_instruction = 0x880E7F5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1408);
	// lwz r7,6016(r3)
	ctx.current_instruction = 0x880E7F60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// stw r6,6360(r3)
	ctx.current_instruction = 0x880E7F68;
	REX_STORE_U32(ctx.r3.u32 + 6360, ctx.r6.u32);
	// lwz r11,6356(r3)
	ctx.current_instruction = 0x880E7F6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6356);
	// lwz r10,784(r3)
	ctx.current_instruction = 0x880E7F70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,6348(r3)
	ctx.current_instruction = 0x880E7F78;
	REX_STORE_U32(ctx.r3.u32 + 6348, ctx.r5.u32);
	// lwz r10,3396(r3)
	ctx.current_instruction = 0x880E7F7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3396);
	// lwz r4,6016(r3)
	ctx.current_instruction = 0x880E7F80;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 6016);
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880E7F84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,6300(r3)
	ctx.current_instruction = 0x880E7F9C;
	REX_STORE_U32(ctx.r3.u32 + 6300, ctx.r8.u32);
loc_880E7FA0:
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x880E7FA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e8040
	if (!ctx.cr6.eq) goto loc_880E8040;
	// lwz r10,768(r3)
	ctx.current_instruction = 0x880E7FAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// lwz r11,1396(r3)
	ctx.current_instruction = 0x880E7FB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1396);
	// lwz r10,64(r10)
	ctx.current_instruction = 0x880E7FB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,784(r3)
	ctx.current_instruction = 0x880E7FBC;
	REX_STORE_U32(ctx.r3.u32 + 784, ctx.r9.u32);
	// stw r10,20(r3)
	ctx.current_instruction = 0x880E7FC0;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r8,772(r3)
	ctx.current_instruction = 0x880E7FC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 772);
	// lwz r10,64(r8)
	ctx.current_instruction = 0x880E7FC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,19092(r3)
	ctx.current_instruction = 0x880E7FD0;
	REX_STORE_U32(ctx.r3.u32 + 19092, ctx.r7.u32);
	// lwz r6,772(r3)
	ctx.current_instruction = 0x880E7FD4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 772);
	// lwz r10,1400(r3)
	ctx.current_instruction = 0x880E7FD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1400);
	// lwz r11,88(r6)
	ctx.current_instruction = 0x880E7FDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,19096(r3)
	ctx.current_instruction = 0x880E7FE4;
	REX_STORE_U32(ctx.r3.u32 + 19096, ctx.r5.u32);
	// lwz r4,772(r3)
	ctx.current_instruction = 0x880E7FE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 772);
	// lwz r10,1400(r3)
	ctx.current_instruction = 0x880E7FEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1400);
	// lwz r11,112(r4)
	ctx.current_instruction = 0x880E7FF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,19100(r3)
	ctx.current_instruction = 0x880E7FF8;
	REX_STORE_U32(ctx.r3.u32 + 19100, ctx.r11.u32);
	// lwz r11,1624(r3)
	ctx.current_instruction = 0x880E7FFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x880e8040
	if (ctx.cr6.lt) goto loc_880E8040;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lwz r10,4420(r3)
	ctx.current_instruction = 0x880E800C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4420);
	// lwz r11,784(r3)
	ctx.current_instruction = 0x880E8010;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4412(r3)
	ctx.current_instruction = 0x880E8018;
	REX_STORE_U32(ctx.r3.u32 + 4412, ctx.r11.u32);
	// blt cr6,0x880e8040
	if (ctx.cr6.lt) goto loc_880E8040;
	// lwz r10,784(r3)
	ctx.current_instruction = 0x880E8020;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r11,5388(r3)
	ctx.current_instruction = 0x880E8024;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5388);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,5380(r3)
	ctx.current_instruction = 0x880E802C;
	REX_STORE_U32(ctx.r3.u32 + 5380, ctx.r11.u32);
	// lwz r11,6356(r3)
	ctx.current_instruction = 0x880E8030;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6356);
	// lwz r10,784(r3)
	ctx.current_instruction = 0x880E8034;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6348(r3)
	ctx.current_instruction = 0x880E803C;
	REX_STORE_U32(ctx.r3.u32 + 6348, ctx.r10.u32);
loc_880E8040:
	// lwz r11,2336(r3)
	ctx.current_instruction = 0x880E8040;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e80b4
	if (ctx.cr6.eq) goto loc_880E80B4;
	// lwz r11,796(r3)
	ctx.current_instruction = 0x880E804C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e8064
	if (!ctx.cr6.eq) goto loc_880E8064;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880E805C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// b 0x880e807c
	goto loc_880E807C;
loc_880E8064:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880E8068;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// bge cr6,0x880e8078
	if (!ctx.cr6.lt) goto loc_880E8078;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x880e807c
	goto loc_880E807C;
loc_880E8078:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_880E807C:
	// stw r11,7072(r3)
	ctx.current_instruction = 0x880E807C;
	REX_STORE_U32(ctx.r3.u32 + 7072, ctx.r11.u32);
	// lwz r11,800(r3)
	ctx.current_instruction = 0x880E8080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e8098
	if (!ctx.cr6.eq) goto loc_880E8098;
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880E8090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// b 0x880e80b0
	goto loc_880E80B0;
loc_880E8098:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880E809C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// bge cr6,0x880e80ac
	if (!ctx.cr6.lt) goto loc_880E80AC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x880e80b0
	goto loc_880E80B0;
loc_880E80AC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_880E80B0:
	// stw r11,7076(r3)
	ctx.current_instruction = 0x880E80B0;
	REX_STORE_U32(ctx.r3.u32 + 7076, ctx.r11.u32);
loc_880E80B4:
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880E80B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880e815c
	if (!ctx.cr6.gt) goto loc_880E815C;
loc_880E80C8:
	// lwz r10,720(r3)
	ctx.current_instruction = 0x880E80C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x880e814c
	if (!ctx.cr6.gt) goto loc_880E814C;
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mulli r10,r9,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(276));
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_880E80E4:
	// lwz r8,724(r3)
	ctx.current_instruction = 0x880E80E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// cntlzw r4,r11
	ctx.r4.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,720(r3)
	ctx.current_instruction = 0x880E80EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r31,r8,-1
	ctx.r31.s64 = ctx.r8.s64 + -1;
	// lwz r8,7764(r3)
	ctx.current_instruction = 0x880E80F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r31,r6,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r6.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cntlzw r31,r31
	ctx.r31.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r31,r31,28,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x2;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// or r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 | ctx.r7.u64;
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r4,120(r8)
	ctx.current_instruction = 0x880E813C;
	REX_STORE_U32(ctx.r8.u32 + 120, ctx.r4.u32);
	// lwz r8,720(r3)
	ctx.current_instruction = 0x880E8140;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x880e80e4
	if (ctx.cr6.lt) goto loc_880E80E4;
loc_880E814C:
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880E814C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880e80c8
	if (ctx.cr6.lt) goto loc_880E80C8;
loc_880E815C:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881078D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881078D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881078D0) {
			switch (rex_dispatch_address) {
				case 0x881078D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881078D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881078D8: goto loc_881078D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881078D8;
	__savegprlr_14(ctx, base);
loc_881078D8:
	// lwz r21,84(r1)
	ctx.current_instruction = 0x881078D8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r3,20(r1)
	ctx.current_instruction = 0x881078E0;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r31,r21,1
	ctx.r31.s64 = ctx.r21.s64 + 1;
	// srawi r20,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r20.s64 = ctx.r31.s32 >> 1;
	// srawi. r19,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r21.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r31,r20,r7
	ctx.r31.u64 = ctx.r20.u64 + ctx.r7.u64;
	// stw r20,-184(r1)
	ctx.current_instruction = 0x881078F8;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r20.u32);
	// stw r19,-180(r1)
	ctx.current_instruction = 0x881078FC;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r19.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// ble 0x88107af8
	if (!ctx.cr0.gt) goto loc_88107AF8;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
loc_8810790C:
	// lwz r4,720(r3)
	ctx.current_instruction = 0x8810790C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lbz r28,1(r11)
	ctx.current_instruction = 0x88107910;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,3(r11)
	ctx.current_instruction = 0x88107918;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r26,0(r11)
	ctx.current_instruction = 0x8810791C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// lbz r24,4(r11)
	ctx.current_instruction = 0x88107928;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r22,5(r11)
	ctx.current_instruction = 0x8810792C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r29,2(r11)
	ctx.current_instruction = 0x88107938;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r23,r28,2,22,29
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FC) | (ctx.r23.u64 & 0xFFFFFFFFFFFFFC03);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwimi r27,r28,2,22,25
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C0) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r29,r26,2,22,25
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwinm r4,r23,4,24,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xF0;
	// rlwinm r29,r29,0,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF0;
	// lbz r28,3(r11)
	ctx.current_instruction = 0x88107954;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r27,r27,0,24,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0;
	// lbz r26,1(r11)
	ctx.current_instruction = 0x8810795C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r25,r28,0,26,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x30;
	// lbz r23,2(r11)
	ctx.current_instruction = 0x88107964;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r18,r26,0,26,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x30;
	// lbz r17,0(r11)
	ctx.current_instruction = 0x8810796C;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r25,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 2;
	// lbz r16,4(r11)
	ctx.current_instruction = 0x88107974;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r23,r23,0,26,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x30;
	// lbz r15,5(r11)
	ctx.current_instruction = 0x8810797C;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// or r25,r25,r18
	ctx.r25.u64 = ctx.r25.u64 | ctx.r18.u64;
	// rlwinm r18,r17,0,26,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x30;
	// extsb r25,r25
	ctx.r25.s64 = ctx.r25.s8;
	// rlwimi r28,r26,2,28,29
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xC) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r25,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 2;
	// srawi r23,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 2;
	// clrlwi r28,r28,28
	ctx.r28.u64 = ctx.r28.u32 & 0xF;
	// or r23,r23,r18
	ctx.r23.u64 = ctx.r23.u64 | ctx.r18.u64;
	// or r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 | ctx.r4.u64;
	// extsb r26,r23
	ctx.r26.s64 = ctx.r23.s8;
	// or r28,r25,r27
	ctx.r28.u64 = ctx.r25.u64 | ctx.r27.u64;
	// srawi r26,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 2;
	// rlwinm r27,r16,0,26,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x30;
	// or r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 | ctx.r29.u64;
	// stb r29,0(r30)
	ctx.current_instruction = 0x881079B8;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// stb r28,0(r31)
	ctx.current_instruction = 0x881079BC;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// rlwinm r28,r24,2,24,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xC0;
	// stb r4,0(r7)
	ctx.current_instruction = 0x881079C4;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r4.u8);
	// lwz r4,720(r3)
	ctx.current_instruction = 0x881079C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r22,2,24,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xC0;
	// rlwinm r27,r15,0,26,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x30;
	// or r27,r27,r29
	ctx.r27.u64 = ctx.r27.u64 | ctx.r29.u64;
	// lbzux r29,r11,r4
	ctx.current_instruction = 0x881079E8;
	ea = ctx.r11.u32 + ctx.r4.u32;
	ctx.r29.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbz r26,4(r11)
	ctx.current_instruction = 0x881079EC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r26,r26,0,26,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x30;
	// lbz r18,2(r11)
	ctx.current_instruction = 0x881079F4;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r18,r29,2,22,25
	ctx.r18.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C0) | (ctx.r18.u64 & 0xFFFFFFFFFFFFFC3F);
	// lbz r25,1(r11)
	ctx.current_instruction = 0x881079FC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r29,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r26.s32 >> 2;
	// lbz r24,3(r11)
	ctx.current_instruction = 0x88107A04;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// lbz r17,5(r11)
	ctx.current_instruction = 0x88107A0C;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwimi r22,r25,2,22,25
	ctx.r22.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3C0) | (ctx.r22.u64 & 0xFFFFFFFFFFFFFC3F);
	// lbz r4,2(r11)
	ctx.current_instruction = 0x88107A18;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// or r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwimi r24,r25,2,22,29
	ctx.r24.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3FC) | (ctx.r24.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwinm r29,r17,0,26,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x30;
	// lbz r17,4(r11)
	ctx.current_instruction = 0x88107A28;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// lbz r23,0(r11)
	ctx.current_instruction = 0x88107A30;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r26,r18,0,24,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xF0;
	// lbz r18,1(r11)
	ctx.current_instruction = 0x88107A38;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r25,r22,0,24,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xF0;
	// lbz r22,3(r11)
	ctx.current_instruction = 0x88107A40;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r24,r24,4,24,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xF0;
	// rlwinm r4,r4,0,26,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30;
	// srawi r16,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r16.s64 = ctx.r29.s32 >> 2;
	// srawi r15,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r15.s64 = ctx.r4.s32 >> 2;
	// lbz r29,5(r11)
	ctx.current_instruction = 0x88107A54;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r23,r23,0,26,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x30;
	// lwz r4,720(r3)
	ctx.current_instruction = 0x88107A5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r14,r22,0,26,27
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x30;
	// or r23,r15,r23
	ctx.r23.u64 = ctx.r15.u64 | ctx.r23.u64;
	// mr r15,r14
	ctx.r15.u64 = ctx.r14.u64;
	// extsb r23,r23
	ctx.r23.s64 = ctx.r23.s8;
	// rlwinm r14,r18,0,26,27
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x30;
	// srawi r23,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 2;
	// srawi r15,r15,2
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x3) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 2;
	// rlwimi r22,r18,2,28,29
	ctx.r22.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xC) | (ctx.r22.u64 & 0xFFFFFFFFFFFFFFF3);
	// or r15,r15,r14
	ctx.r15.u64 = ctx.r15.u64 | ctx.r14.u64;
	// rlwinm r18,r17,0,26,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x30;
	// extsb r17,r15
	ctx.r17.s64 = ctx.r15.s8;
	// clrlwi r22,r22,28
	ctx.r22.u64 = ctx.r22.u32 & 0xF;
	// rlwinm r15,r29,0,26,27
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x30;
	// or r26,r23,r26
	ctx.r26.u64 = ctx.r23.u64 | ctx.r26.u64;
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r17,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 2;
	// stbu r26,1(r30)
	ctx.current_instruction = 0x88107AA0;
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r26.u8);
	ctx.r30.u32 = ea;
	// or r24,r22,r24
	ctx.r24.u64 = ctx.r22.u64 | ctx.r24.u64;
	// srawi r22,r18,4
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xF) != 0);
	ctx.r22.s64 = ctx.r18.s32 >> 4;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// or r27,r16,r27
	ctx.r27.u64 = ctx.r16.u64 | ctx.r27.u64;
	// or r25,r17,r25
	ctx.r25.u64 = ctx.r17.u64 | ctx.r25.u64;
	// srawi r26,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r15.s32 >> 4;
	// clrlwi r29,r24,24
	ctx.r29.u64 = ctx.r24.u32 & 0xFF;
	// stbu r25,1(r31)
	ctx.current_instruction = 0x88107AC0;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r25.u8);
	ctx.r31.u32 = ea;
	// or r28,r22,r28
	ctx.r28.u64 = ctx.r22.u64 | ctx.r28.u64;
	// or r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 | ctx.r27.u64;
	// stbu r29,1(r7)
	ctx.current_instruction = 0x88107ACC;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r29.u8);
	ctx.r7.u32 = ea;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r28,0(r8)
	ctx.current_instruction = 0x88107AD4;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r28.u8);
	// stb r27,0(r9)
	ctx.current_instruction = 0x88107AD8;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r27.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8810790c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810790C;
loc_88107AF8:
	// clrlwi r24,r21,30
	ctx.r24.u64 = ctx.r21.u32 & 0x3;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x88107c78
	if (ctx.cr6.eq) goto loc_88107C78;
	// lwz r4,720(r3)
	ctx.current_instruction = 0x88107B04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r23,r21,0,30,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x2;
	// lbz r27,3(r11)
	ctx.current_instruction = 0x88107B0C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,1(r11)
	ctx.current_instruction = 0x88107B14;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r26,0(r11)
	ctx.current_instruction = 0x88107B18;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// lbz r22,2(r11)
	ctx.current_instruction = 0x88107B24;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lbz r18,4(r11)
	ctx.current_instruction = 0x88107B2C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// lbz r16,5(r11)
	ctx.current_instruction = 0x88107B34;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwimi r29,r28,2,22,25
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r22,r26,2,22,25
	ctx.r22.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C0) | (ctx.r22.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r17,r28,2,22,29
	ctx.r17.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FC) | (ctx.r17.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwinm r25,r4,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r29,0,24,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF0;
	// rlwinm r28,r22,0,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xF0;
	// rlwinm r26,r17,4,24,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 4) & 0xF0;
	// rlwinm r4,r18,2,24,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xC0;
	// rlwinm r29,r16,2,24,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xC0;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x88107be8
	if (!ctx.cr6.eq) goto loc_88107BE8;
	// lbz r23,2(r11)
	ctx.current_instruction = 0x88107B68;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// lbz r22,0(r11)
	ctx.current_instruction = 0x88107B70;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r23,r23,0,26,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x30;
	// lbz r18,3(r11)
	ctx.current_instruction = 0x88107B7C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r22,r22,0,26,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x30;
	// lbz r17,1(r11)
	ctx.current_instruction = 0x88107B84;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r23,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 2;
	// lbz r16,4(r11)
	ctx.current_instruction = 0x88107B8C;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r15,r18,0,26,27
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x30;
	// lbz r14,5(r11)
	ctx.current_instruction = 0x88107B94;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// or r23,r23,r22
	ctx.r23.u64 = ctx.r23.u64 | ctx.r22.u64;
	// rlwinm r22,r17,0,26,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x30;
	// extsb r23,r23
	ctx.r23.s64 = ctx.r23.s8;
	// rlwimi r18,r17,2,28,29
	ctx.r18.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xC) | (ctx.r18.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r23,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 2;
	// srawi r15,r15,2
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x3) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 2;
	// clrlwi r18,r18,28
	ctx.r18.u64 = ctx.r18.u32 & 0xF;
	// or r22,r15,r22
	ctx.r22.u64 = ctx.r15.u64 | ctx.r22.u64;
	// or r26,r18,r26
	ctx.r26.u64 = ctx.r18.u64 | ctx.r26.u64;
	// extsb r22,r22
	ctx.r22.s64 = ctx.r22.s8;
	// rlwinm r18,r16,0,26,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x30;
	// srawi r22,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 2;
	// rlwinm r17,r14,0,26,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0x30;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// or r28,r23,r28
	ctx.r28.u64 = ctx.r23.u64 | ctx.r28.u64;
	// or r27,r22,r27
	ctx.r27.u64 = ctx.r22.u64 | ctx.r27.u64;
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// or r4,r18,r4
	ctx.r4.u64 = ctx.r18.u64 | ctx.r4.u64;
	// or r29,r17,r29
	ctx.r29.u64 = ctx.r17.u64 | ctx.r29.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
loc_88107BE8:
	// stb r28,0(r30)
	ctx.current_instruction = 0x88107BE8;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// stb r27,0(r31)
	ctx.current_instruction = 0x88107BF0;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r26,0(r7)
	ctx.current_instruction = 0x88107BF8;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r26.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne cr6,0x88107c68
	if (!ctx.cr6.eq) goto loc_88107C68;
	// lbz r28,1(r11)
	ctx.current_instruction = 0x88107C04;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r27,3(r11)
	ctx.current_instruction = 0x88107C08;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r26,4(r11)
	ctx.current_instruction = 0x88107C0C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// lbz r24,5(r11)
	ctx.current_instruction = 0x88107C14;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// lbz r22,0(r11)
	ctx.current_instruction = 0x88107C1C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwimi r27,r28,2,22,29
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FC) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFC03);
	// lbz r11,2(r11)
	ctx.current_instruction = 0x88107C24;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r23,r28,2,22,25
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C0) | (ctx.r23.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwinm r26,r26,0,26,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x30;
	// rlwimi r11,r22,2,22,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwinm r24,r24,0,26,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x30;
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// rlwinm r25,r23,0,24,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xF0;
	// stb r11,1(r30)
	ctx.current_instruction = 0x88107C40;
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// srawi r28,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r26.s32 >> 2;
	// rlwinm r11,r27,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xF0;
	// stb r25,0(r31)
	ctx.current_instruction = 0x88107C4C;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r25.u8);
	// srawi r30,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r24.s32 >> 2;
	// stb r11,0(r7)
	ctx.current_instruction = 0x88107C54;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// or r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 | ctx.r4.u64;
	// or r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 | ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_88107C68:
	// stb r4,0(r8)
	ctx.current_instruction = 0x88107C68;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r29,0(r9)
	ctx.current_instruction = 0x88107C70;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r29.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_88107C78:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r29,720(r3)
	ctx.current_instruction = 0x88107C7C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// add r4,r20,r31
	ctx.r4.u64 = ctx.r20.u64 + ctx.r31.u64;
	// stw r30,-200(r1)
	ctx.current_instruction = 0x88107C88;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r30.u32);
	// add r31,r20,r7
	ctx.r31.u64 = ctx.r20.u64 + ctx.r7.u64;
	// stw r11,76(r1)
	ctx.current_instruction = 0x88107C90;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,-192(r1)
	ctx.current_instruction = 0x88107C98;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r31.u32);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// stw r10,-176(r1)
	ctx.current_instruction = 0x88107CA0;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// ble cr6,0x88108248
	if (!ctx.cr6.gt) goto loc_88108248;
	// addi r25,r5,-1
	ctx.r25.s64 = ctx.r5.s64 + -1;
	// addi r24,r6,-1
	ctx.r24.s64 = ctx.r6.s64 + -1;
	// addi r23,r8,-1
	ctx.r23.s64 = ctx.r8.s64 + -1;
	// stw r25,36(r1)
	ctx.current_instruction = 0x88107CB4;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r25.u32);
	// addi r22,r9,-1
	ctx.r22.s64 = ctx.r9.s64 + -1;
	// stw r24,44(r1)
	ctx.current_instruction = 0x88107CBC;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r24.u32);
	// stw r23,60(r1)
	ctx.current_instruction = 0x88107CC0;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r23.u32);
	// stw r22,68(r1)
	ctx.current_instruction = 0x88107CC4;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r22.u32);
loc_88107CC8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x88107fac
	if (!ctx.cr6.gt) goto loc_88107FAC;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
loc_88107CD4:
	// lwz r10,720(r3)
	ctx.current_instruction = 0x88107CD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x88107CD8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r5,1(r11)
	ctx.current_instruction = 0x88107CE0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r28,4(r11)
	ctx.current_instruction = 0x88107CE4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r26,5(r11)
	ctx.current_instruction = 0x88107CF0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r6,2(r11)
	ctx.current_instruction = 0x88107CF4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,3(r11)
	ctx.current_instruction = 0x88107D00;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// rlwimi r9,r24,2,22,25
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r25,r5,2,22,29
	ctx.r25.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC) | (ctx.r25.u64 & 0xFFFFFFFFFFFFFC03);
	// lbzux r10,r11,r10
	ctx.current_instruction = 0x88107D14;
	ea = ctx.r11.u32 + ctx.r10.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r6,r8,2,22,25
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r27,r8,2,22,29
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwinm r8,r10,0,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// rlwinm r6,r6,0,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// rlwinm r9,r9,0,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0;
	// lbz r5,3(r11)
	ctx.current_instruction = 0x88107D2C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r27,r27,4,24,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xF0;
	// lbz r29,1(r11)
	ctx.current_instruction = 0x88107D34;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r24,r5,0,26,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30;
	// lbz r23,2(r11)
	ctx.current_instruction = 0x88107D3C;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r22,r29,0,26,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x30;
	// lbz r21,4(r11)
	ctx.current_instruction = 0x88107D44;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// srawi r24,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 2;
	// lbz r20,5(r11)
	ctx.current_instruction = 0x88107D4C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r19,r23,0,26,27
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x30;
	// or r24,r24,r22
	ctx.r24.u64 = ctx.r24.u64 | ctx.r22.u64;
	// rlwimi r23,r10,2,28,29
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r23.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r24,r24
	ctx.r24.s64 = ctx.r24.s8;
	// rlwimi r5,r29,2,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r24,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 2;
	// srawi r22,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r19.s32 >> 2;
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// or r8,r22,r8
	ctx.r8.u64 = ctx.r22.u64 | ctx.r8.u64;
	// rlwinm r29,r25,4,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xF0;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// clrlwi r8,r23,28
	ctx.r8.u64 = ctx.r23.u32 & 0xF;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// or r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 | ctx.r27.u64;
	// or r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r10,r24,r9
	ctx.r10.u64 = ctx.r24.u64 | ctx.r9.u64;
	// stb r6,0(r30)
	ctx.current_instruction = 0x88107D90;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r6.u8);
	// or r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 | ctx.r29.u64;
	// stb r10,0(r4)
	ctx.current_instruction = 0x88107D98;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// rlwinm r6,r28,6,24,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xC0;
	// stb r8,0(r7)
	ctx.current_instruction = 0x88107DA0;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r8.u8);
	// rlwinm r10,r21,4,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0x30;
	// stb r5,0(r31)
	ctx.current_instruction = 0x88107DA8;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// rlwinm r5,r26,6,24,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xC0;
	// rlwinm r9,r20,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0x30;
	// or r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 | ctx.r6.u64;
	// lwz r10,720(r3)
	ctx.current_instruction = 0x88107DB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,720(r3)
	ctx.current_instruction = 0x88107DC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r8,r28,2,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xC0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r21,0,26,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x30;
	// rlwinm r31,r26,2,24,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xC0;
	// or r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 | ctx.r8.u64;
	// rlwinm r29,r20,0,26,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x30;
	// lbzux r10,r11,r9
	ctx.current_instruction = 0x88107DE4;
	ea = ctx.r11.u32 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbz r30,2(r11)
	ctx.current_instruction = 0x88107DEC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// or r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 | ctx.r31.u64;
	// lbz r25,4(r11)
	ctx.current_instruction = 0x88107DF4;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// lbz r28,1(r11)
	ctx.current_instruction = 0x88107DFC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lbz r27,3(r11)
	ctx.current_instruction = 0x88107E04;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lbz r24,5(r11)
	ctx.current_instruction = 0x88107E0C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r25,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x30;
	// lbz r22,2(r11)
	ctx.current_instruction = 0x88107E18;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r23,r24,0,26,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x30;
	// lbz r21,0(r11)
	ctx.current_instruction = 0x88107E20;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// rlwinm r20,r22,0,26,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x30;
	// lbz r19,3(r11)
	ctx.current_instruction = 0x88107E2C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// srawi r23,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 2;
	// stw r3,-172(r1)
	ctx.current_instruction = 0x88107E34;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r3.u32);
	// rlwinm r18,r21,0,26,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x30;
	// lbz r17,1(r11)
	ctx.current_instruction = 0x88107E3C;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r20,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 2;
	// lbz r16,4(r11)
	ctx.current_instruction = 0x88107E44;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r15,r19,0,26,27
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x30;
	// std r11,-168(r1)
	ctx.current_instruction = 0x88107E4C;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// or r20,r20,r18
	ctx.r20.u64 = ctx.r20.u64 | ctx.r18.u64;
	// lbz r14,5(r11)
	ctx.current_instruction = 0x88107E54;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// extsb r20,r20
	ctx.r20.s64 = ctx.r20.s8;
	// rlwinm r18,r17,0,26,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x30;
	// srawi r20,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 2;
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// rlwimi r30,r29,2,22,25
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C0) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFC3F);
	// or r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 | ctx.r18.u64;
	// rlwinm r18,r16,0,26,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x30;
	// mr r15,r27
	ctx.r15.u64 = ctx.r27.u64;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// extsb r29,r18
	ctx.r29.s64 = ctx.r18.s8;
	// rlwimi r26,r10,2,22,29
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC) | (ctx.r26.u64 & 0xFFFFFFFFFFFFFC03);
	// lwz r10,-200(r1)
	ctx.current_instruction = 0x88107E88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r22,r21,2,28,29
	ctx.r22.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xC) | (ctx.r22.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwimi r15,r28,2,22,29
	ctx.r15.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FC) | (ctx.r15.u64 & 0xFFFFFFFFFFFFFC03);
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// rlwimi r19,r17,2,28,29
	ctx.r19.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xC) | (ctx.r19.u64 & 0xFFFFFFFFFFFFFFF3);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r25,r25,2,28,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xC;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// rlwinm r28,r14,0,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0x30;
	// rlwinm r26,r26,4,24,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xF0;
	// rlwimi r27,r11,2,22,25
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C0) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFC3F);
	// clrlwi r22,r22,28
	ctx.r22.u64 = ctx.r22.u32 & 0xF;
	// rlwinm r24,r24,2,28,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xC;
	// rlwinm r21,r15,4,24,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 4) & 0xF0;
	// clrlwi r19,r19,28
	ctx.r19.u64 = ctx.r19.u32 & 0xF;
	// or r6,r25,r6
	ctx.r6.u64 = ctx.r25.u64 | ctx.r6.u64;
	// or r8,r23,r31
	ctx.r8.u64 = ctx.r23.u64 | ctx.r31.u64;
	// or r29,r29,r9
	ctx.r29.u64 = ctx.r29.u64 | ctx.r9.u64;
	// lwz r9,-172(r1)
	ctx.current_instruction = 0x88107ED4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// or r31,r22,r26
	ctx.r31.u64 = ctx.r22.u64 | ctx.r26.u64;
	// rlwinm r30,r30,0,24,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0;
	// rlwinm r27,r27,0,24,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0;
	// or r5,r24,r5
	ctx.r5.u64 = ctx.r24.u64 | ctx.r5.u64;
	// or r26,r19,r21
	ctx.r26.u64 = ctx.r19.u64 | ctx.r21.u64;
	// clrlwi r25,r6,24
	ctx.r25.u64 = ctx.r6.u32 & 0xFF;
	// lwz r6,60(r1)
	ctx.current_instruction = 0x88107EF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// clrlwi r24,r16,30
	ctx.r24.u64 = ctx.r16.u32 & 0x3;
	// or r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 | ctx.r8.u64;
	// or r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 | ctx.r27.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// or r30,r20,r30
	ctx.r30.u64 = ctx.r20.u64 | ctx.r30.u64;
	// clrlwi r27,r26,24
	ctx.r27.u64 = ctx.r26.u32 & 0xFF;
	// or r26,r24,r25
	ctx.r26.u64 = ctx.r24.u64 | ctx.r25.u64;
	// stbu r30,1(r10)
	ctx.current_instruction = 0x88107F14;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r30.u8);
	ctx.r10.u32 = ea;
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,-192(r1)
	ctx.current_instruction = 0x88107F1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stbu r3,1(r4)
	ctx.current_instruction = 0x88107F20;
	ea = 1 + ctx.r4.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r4.u32 = ea;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r3,r14,30
	ctx.r3.u64 = ctx.r14.u32 & 0x3;
	// lwz r8,36(r1)
	ctx.current_instruction = 0x88107F2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// lwz r10,44(r1)
	ctx.current_instruction = 0x88107F34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// or r21,r3,r5
	ctx.r21.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stbu r31,1(r7)
	ctx.current_instruction = 0x88107F3C;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r31.u8);
	ctx.r7.u32 = ea;
	// rlwinm r3,r25,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,68(r1)
	ctx.current_instruction = 0x88107F44;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// addi r25,r8,1
	ctx.r25.s64 = ctx.r8.s64 + 1;
	// stw r30,-200(r1)
	ctx.current_instruction = 0x88107F4C;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r30.u32);
	// addi r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 1;
	// stbu r27,1(r9)
	ctx.current_instruction = 0x88107F54;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r27.u8);
	ctx.r9.u32 = ea;
	// addi r23,r6,1
	ctx.r23.s64 = ctx.r6.s64 + 1;
	// ld r11,-168(r1)
	ctx.current_instruction = 0x88107F5C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// addi r22,r5,1
	ctx.r22.s64 = ctx.r5.s64 + 1;
	// stb r26,1(r8)
	ctx.current_instruction = 0x88107F64;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r26.u8);
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// stb r21,1(r10)
	ctx.current_instruction = 0x88107F6C;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r21.u8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stb r29,1(r6)
	ctx.current_instruction = 0x88107F74;
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r29.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r3,20(r1)
	ctx.current_instruction = 0x88107F7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r28,1(r5)
	ctx.current_instruction = 0x88107F84;
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r28.u8);
	// stw r31,-192(r1)
	ctx.current_instruction = 0x88107F88;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r31.u32);
	// stw r25,36(r1)
	ctx.current_instruction = 0x88107F8C;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r25.u32);
	// stw r24,44(r1)
	ctx.current_instruction = 0x88107F90;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r24.u32);
	// stw r23,60(r1)
	ctx.current_instruction = 0x88107F94;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r23.u32);
	// stw r22,68(r1)
	ctx.current_instruction = 0x88107F98;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r22.u32);
	// bdnz 0x88107cd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88107CD4;
	// lwz r21,84(r1)
	ctx.current_instruction = 0x88107FA0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r19,-180(r1)
	ctx.current_instruction = 0x88107FA4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r20,-184(r1)
	ctx.current_instruction = 0x88107FA8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
loc_88107FAC:
	// clrlwi r10,r21,30
	ctx.r10.u64 = ctx.r21.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8810820c
	if (ctx.cr6.eq) goto loc_8810820C;
	// lwz r10,720(r3)
	ctx.current_instruction = 0x88107FB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r18,r21,0,30,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x2;
	// lbz r6,2(r11)
	ctx.current_instruction = 0x88107FC0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,3(r11)
	ctx.current_instruction = 0x88107FC8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x88107FCC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 2, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r5,1(r11)
	ctx.current_instruction = 0x88107FD8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lbz r17,4(r11)
	ctx.current_instruction = 0x88107FE0;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
	// lbz r16,5(r11)
	ctx.current_instruction = 0x88107FE8;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
	// rlwimi r9,r8,2,22,25
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r6,r8,2,22,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r15,r5,2,22,25
	ctx.r15.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C0) | (ctx.r15.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r14,r5,2,22,29
	ctx.r14.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC) | (ctx.r14.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm r5,r9,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0;
	// rlwinm r29,r6,4,24,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xF0;
	// rlwinm r28,r15,0,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xF0;
	// rlwinm r27,r14,4,24,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 4) & 0xF0;
	// rlwinm r10,r17,2,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xC0;
	// rlwinm r9,r16,2,24,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xC0;
	// rlwinm r8,r17,6,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 6) & 0xC0;
	// rlwinm r6,r16,6,24,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 6) & 0xC0;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bne cr6,0x88108130
	if (!ctx.cr6.eq) goto loc_88108130;
	// lbz r18,2(r11)
	ctx.current_instruction = 0x88108034;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// lbz r17,3(r11)
	ctx.current_instruction = 0x8810803C;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r22,r18,0,26,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x30;
	// lbz r21,0(r11)
	ctx.current_instruction = 0x88108048;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r20,r17,0,26,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x30;
	// std r4,-192(r1)
	ctx.current_instruction = 0x88108050;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r4.u64);
	// srawi r22,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 2;
	// std r7,-168(r1)
	ctx.current_instruction = 0x88108058;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r7.u64);
	// stb r20,-207(r1)
	ctx.current_instruction = 0x8810805C;
	REX_STORE_U8(ctx.r1.u32 + -207, ctx.r20.u8);
	// rlwinm r19,r21,0,26,27
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x30;
	// stb r22,-208(r1)
	ctx.current_instruction = 0x88108064;
	REX_STORE_U8(ctx.r1.u32 + -208, ctx.r22.u8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lwz r22,68(r1)
	ctx.current_instruction = 0x8810806C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbz r4,-207(r1)
	ctx.current_instruction = 0x88108074;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + -207);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r21,-172(r1)
	ctx.current_instruction = 0x8810807C;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r21.u32);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// std r31,-160(r1)
	ctx.current_instruction = 0x88108084;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r31.u64);
	// lwz r31,-172(r1)
	ctx.current_instruction = 0x88108088;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lbz r7,-208(r1)
	ctx.current_instruction = 0x8810808C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -208);
	// or r7,r7,r19
	ctx.r7.u64 = ctx.r7.u64 | ctx.r19.u64;
	// std r3,-200(r1)
	ctx.current_instruction = 0x88108094;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r3.u64);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lbz r16,1(r11)
	ctx.current_instruction = 0x8810809C;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwimi r18,r31,2,28,29
	ctx.r18.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xC) | (ctx.r18.u64 & 0xFFFFFFFFFFFFFFF3);
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// lbz r15,4(r11)
	ctx.current_instruction = 0x881080A8;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// lbz r14,5(r11)
	ctx.current_instruction = 0x881080B0;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r3,r16,0,26,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x30;
	// lwz r20,-184(r1)
	ctx.current_instruction = 0x881080B8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// rlwimi r17,r16,2,28,29
	ctx.r17.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xC) | (ctx.r17.u64 & 0xFFFFFFFFFFFFFFF3);
	// lwz r19,-180(r1)
	ctx.current_instruction = 0x881080C0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lwz r21,84(r1)
	ctx.current_instruction = 0x881080C8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r18,r18,28
	ctx.r18.u64 = ctx.r18.u32 & 0xF;
	// ld r31,-160(r1)
	ctx.current_instruction = 0x881080D0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// extsb r16,r4
	ctx.r16.s64 = ctx.r4.s8;
	// clrlwi r17,r17,28
	ctx.r17.u64 = ctx.r17.u32 & 0xF;
	// rlwinm r4,r15,4,26,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 4) & 0x30;
	// rlwinm r3,r14,4,26,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 4) & 0x30;
	// or r29,r18,r29
	ctx.r29.u64 = ctx.r18.u64 | ctx.r29.u64;
	// srawi r18,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r18.s64 = ctx.r16.s32 >> 2;
	// or r27,r17,r27
	ctx.r27.u64 = ctx.r17.u64 | ctx.r27.u64;
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// ld r4,-192(r1)
	ctx.current_instruction = 0x881080F4;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// or r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 | ctx.r6.u64;
	// rlwinm r17,r15,0,26,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x30;
	// rlwinm r16,r14,0,26,27
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0x30;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// ld r7,-168(r1)
	ctx.current_instruction = 0x88108108;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// ld r3,-200(r1)
	ctx.current_instruction = 0x8810810C;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// or r28,r18,r28
	ctx.r28.u64 = ctx.r18.u64 | ctx.r28.u64;
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// or r10,r17,r10
	ctx.r10.u64 = ctx.r17.u64 | ctx.r10.u64;
	// or r9,r16,r9
	ctx.r9.u64 = ctx.r16.u64 | ctx.r9.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
loc_88108130:
	// stb r5,0(r30)
	ctx.current_instruction = 0x88108130;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r5.u8);
	// clrlwi r5,r21,30
	ctx.r5.u64 = ctx.r21.u32 & 0x3;
	// stb r28,0(r4)
	ctx.current_instruction = 0x88108138;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r28.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r29,0(r7)
	ctx.current_instruction = 0x88108140;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r29.u8);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// stb r27,0(r31)
	ctx.current_instruction = 0x88108148;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne cr6,0x881081ec
	if (!ctx.cr6.eq) goto loc_881081EC;
	// lbz r5,2(r11)
	ctx.current_instruction = 0x88108154;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbz r26,3(r11)
	ctx.current_instruction = 0x8810815C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// lbz r29,0(r11)
	ctx.current_instruction = 0x88108164;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lbz r28,1(r11)
	ctx.current_instruction = 0x8810816C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mr r15,r26
	ctx.r15.u64 = ctx.r26.u64;
	// rlwimi r27,r29,2,22,25
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C0) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFC3F);
	// lbz r17,4(r11)
	ctx.current_instruction = 0x88108178;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwimi r15,r28,2,22,25
	ctx.r15.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C0) | (ctx.r15.u64 & 0xFFFFFFFFFFFFFC3F);
	// lbz r11,5(r11)
	ctx.current_instruction = 0x88108180;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
	// rlwimi r26,r28,2,22,29
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FC) | (ctx.r26.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r5,r29,2,22,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwinm r28,r27,0,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0;
	// mr r18,r29
	ctx.r18.u64 = ctx.r29.u64;
	// rlwinm r27,r15,0,24,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xF0;
	// stb r28,1(r30)
	ctx.current_instruction = 0x8810819C;
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r28.u8);
	// rlwinm r18,r11,0,26,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// rlwinm r5,r5,4,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xF0;
	// stb r27,0(r4)
	ctx.current_instruction = 0x881081A8;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r27.u8);
	// rlwinm r14,r17,0,26,27
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x30;
	// rlwinm r30,r17,2,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xC;
	// stb r5,1(r7)
	ctx.current_instruction = 0x881081B4;
	REX_STORE_U8(ctx.r7.u32 + 1, ctx.r5.u8);
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// srawi r29,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r14.s32 >> 2;
	// rlwinm r28,r26,4,24,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xF0;
	// srawi r7,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r18.s32 >> 2;
	// or r5,r30,r8
	ctx.r5.u64 = ctx.r30.u64 | ctx.r8.u64;
	// stb r28,0(r31)
	ctx.current_instruction = 0x881081CC;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// or r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 | ctx.r10.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_881081EC:
	// stbu r8,1(r25)
	ctx.current_instruction = 0x881081EC;
	ea = 1 + ctx.r25.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r25.u32 = ea;
	// stbu r6,1(r24)
	ctx.current_instruction = 0x881081F0;
	ea = 1 + ctx.r24.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r24.u32 = ea;
	// stbu r10,1(r23)
	ctx.current_instruction = 0x881081F4;
	ea = 1 + ctx.r23.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r23.u32 = ea;
	// stbu r9,1(r22)
	ctx.current_instruction = 0x881081F8;
	ea = 1 + ctx.r22.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r22.u32 = ea;
	// stw r25,36(r1)
	ctx.current_instruction = 0x881081FC;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r25.u32);
	// stw r24,44(r1)
	ctx.current_instruction = 0x88108200;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r24.u32);
	// stw r23,60(r1)
	ctx.current_instruction = 0x88108204;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r23.u32);
	// stw r22,68(r1)
	ctx.current_instruction = 0x88108208;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r22.u32);
loc_8810820C:
	// lwz r11,-176(r1)
	ctx.current_instruction = 0x8810820C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r9,76(r1)
	ctx.current_instruction = 0x88108214;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// add r31,r20,r31
	ctx.r31.u64 = ctx.r20.u64 + ctx.r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r8,720(r3)
	ctx.current_instruction = 0x88108220;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// addi r11,r9,6
	ctx.r11.s64 = ctx.r9.s64 + 6;
	// stw r4,-200(r1)
	ctx.current_instruction = 0x88108228;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,-176(r1)
	ctx.current_instruction = 0x88108230;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// add r4,r20,r4
	ctx.r4.u64 = ctx.r20.u64 + ctx.r4.u64;
	// stw r31,-192(r1)
	ctx.current_instruction = 0x88108238;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r31.u32);
	// stw r11,76(r1)
	ctx.current_instruction = 0x8810823C;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88107cc8
	if (ctx.cr6.lt) goto loc_88107CC8;
loc_88108248:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88121B70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88121B70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88121B70) {
			switch (rex_dispatch_address) {
				case 0x88121B78:
				case 0x88121BB0:
				case 0x88121C04:
				case 0x88121C24:
				case 0x88121C9C:
				case 0x88121CE8:
				case 0x88121D40:
				case 0x88121DA0:
				case 0x88121E00:
				case 0x88121E60:
				case 0x88121E98:
				case 0x88121EF0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88121B70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88121B78: goto loc_88121B78;
		case 0x88121BB0: goto loc_88121BB0;
		case 0x88121C04: goto loc_88121C04;
		case 0x88121C24: goto loc_88121C24;
		case 0x88121C9C: goto loc_88121C9C;
		case 0x88121CE8: goto loc_88121CE8;
		case 0x88121D40: goto loc_88121D40;
		case 0x88121DA0: goto loc_88121DA0;
		case 0x88121E00: goto loc_88121E00;
		case 0x88121E60: goto loc_88121E60;
		case 0x88121E98: goto loc_88121E98;
		case 0x88121EF0: goto loc_88121EF0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88121B78;
	__savegprlr_23(ctx, base);
loc_88121B78:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x88121B78;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r27,28(r3)
	ctx.current_instruction = 0x88121B80;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r29,r4,-24
	ctx.r29.s64 = ctx.r4.s64 + -24;
	// stw r11,92(r1)
	ctx.current_instruction = 0x88121B88;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	ctx.current_instruction = 0x88121B90;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,96(r1)
	ctx.current_instruction = 0x88121B98;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.current_instruction = 0x88121B9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88121BA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88121BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88121BB0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121f08
	if (ctx.cr6.lt) goto loc_88121F08;
	// lwz r11,4(r27)
	ctx.current_instruction = 0x88121BB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lhz r10,66(r11)
	ctx.current_instruction = 0x88121BBC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 66);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88121bdc
	if (!ctx.cr6.gt) goto loc_88121BDC;
loc_88121BCC:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88121BDC:
	// li r11,18
	ctx.r11.s64 = 18;
	// cmplwi cr6,r29,18
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 18, ctx.xer);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88121BE4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x88121bcc
	if (ctx.cr6.lt) goto loc_88121BCC;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881196f8
	ctx.lr = 0x88121C04;
	sub_881196F8(ctx, base);
loc_88121C04:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121f08
	if (ctx.cr6.lt) goto loc_88121F08;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88119210
	ctx.lr = 0x88121C24;
	sub_88119210(ctx, base);
loc_88121C24:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121f08
	if (ctx.cr6.lt) goto loc_88121F08;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,14152
	ctx.r11.s64 = ctx.r11.s64 + 14152;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_88121C3C:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88121C3C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x88121C40;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x88121c5c
	if (!ctx.cr0.eq) goto loc_88121C5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88121c3c
	if (!ctx.cr6.eq) goto loc_88121C3C;
loc_88121C5C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88121bcc
	if (!ctx.cr6.eq) goto loc_88121BCC;
	// lhz r10,80(r1)
	ctx.current_instruction = 0x88121C64;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x88121bcc
	if (!ctx.cr6.eq) goto loc_88121BCC;
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r29,22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 22, ctx.xer);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88121C78;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x88121bcc
	if (ctx.cr6.lt) goto loc_88121BCC;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r30,22
	ctx.r30.s64 = 22;
	// bl 0x88119390
	ctx.lr = 0x88121C9C;
	sub_88119390(ctx, base);
loc_88121C9C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121f08
	if (ctx.cr6.lt) goto loc_88121F08;
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88121CA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x88121eb8
	if (ctx.cr6.lt) goto loc_88121EB8;
	// cmplwi cr6,r29,22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 22, ctx.xer);
	// ble cr6,0x88121eb8
	if (!ctx.cr6.gt) goto loc_88121EB8;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// addi r26,r11,6756
	ctx.r26.s64 = ctx.r11.s64 + 6756;
	// addi r25,r10,6740
	ctx.r25.s64 = ctx.r10.s64 + 6740;
	// addi r24,r9,14104
	ctx.r24.s64 = ctx.r9.s64 + 14104;
	// addi r23,r8,14136
	ctx.r23.s64 = ctx.r8.s64 + 14136;
loc_88121CD8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8811f4c0
	ctx.lr = 0x88121CE8;
	sub_8811F4C0(ctx, base);
loc_88121CE8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121f08
	if (ctx.cr6.lt) goto loc_88121F08;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r23,16
	ctx.r8.s64 = ctx.r23.s64 + 16;
loc_88121CFC:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88121CFC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x88121D00;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x88121d1c
	if (!ctx.cr0.eq) goto loc_88121D1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88121cfc
	if (!ctx.cr6.eq) goto loc_88121CFC;
loc_88121D1C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88121d50
	if (!ctx.cr6.eq) goto loc_88121D50;
	// ld r11,96(r1)
	ctx.current_instruction = 0x88121D24;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r31,r4,r30
	ctx.r31.u64 = ctx.r4.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x88121bcc
	if (ctx.cr6.gt) goto loc_88121BCC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8811cab0
	ctx.lr = 0x88121D40;
	sub_8811CAB0(ctx, base);
loc_88121D40:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121f08
	if (ctx.cr6.lt) goto loc_88121F08;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x88121eb0
	goto loc_88121EB0;
loc_88121D50:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
loc_88121D5C:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88121D5C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x88121D60;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x88121d7c
	if (!ctx.cr0.eq) goto loc_88121D7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88121d5c
	if (!ctx.cr6.eq) goto loc_88121D5C;
loc_88121D7C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88121db0
	if (!ctx.cr6.eq) goto loc_88121DB0;
	// ld r11,96(r1)
	ctx.current_instruction = 0x88121D84;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r31,r4,r30
	ctx.r31.u64 = ctx.r4.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x88121bcc
	if (ctx.cr6.gt) goto loc_88121BCC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8811fb68
	ctx.lr = 0x88121DA0;
	sub_8811FB68(ctx, base);
loc_88121DA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121f08
	if (ctx.cr6.lt) goto loc_88121F08;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x88121eb0
	goto loc_88121EB0;
loc_88121DB0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
loc_88121DBC:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88121DBC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x88121DC0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x88121ddc
	if (!ctx.cr0.eq) goto loc_88121DDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88121dbc
	if (!ctx.cr6.eq) goto loc_88121DBC;
loc_88121DDC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88121e10
	if (!ctx.cr6.eq) goto loc_88121E10;
	// ld r11,96(r1)
	ctx.current_instruction = 0x88121DE4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r31,r4,r30
	ctx.r31.u64 = ctx.r4.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x88121bcc
	if (ctx.cr6.gt) goto loc_88121BCC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8811e4e8
	ctx.lr = 0x88121E00;
	sub_8811E4E8(ctx, base);
loc_88121E00:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121f08
	if (ctx.cr6.lt) goto loc_88121F08;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x88121eb0
	goto loc_88121EB0;
loc_88121E10:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r26,16
	ctx.r8.s64 = ctx.r26.s64 + 16;
loc_88121E1C:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88121E1C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x88121E20;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x88121e3c
	if (!ctx.cr0.eq) goto loc_88121E3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88121e1c
	if (!ctx.cr6.eq) goto loc_88121E1C;
loc_88121E3C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88121e70
	if (!ctx.cr6.eq) goto loc_88121E70;
	// ld r11,96(r1)
	ctx.current_instruction = 0x88121E44;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r31,r4,r30
	ctx.r31.u64 = ctx.r4.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x88121bcc
	if (ctx.cr6.gt) goto loc_88121BCC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8811e8f8
	ctx.lr = 0x88121E60;
	sub_8811E8F8(ctx, base);
loc_88121E60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121f08
	if (ctx.cr6.lt) goto loc_88121F08;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x88121eb0
	goto loc_88121EB0;
loc_88121E70:
	// lwz r10,0(r27)
	ctx.current_instruction = 0x88121E70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// ld r31,96(r1)
	ctx.current_instruction = 0x88121E74;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// lwz r9,20(r10)
	ctx.current_instruction = 0x88121E80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88121E88;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88121E98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88121E98:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121f08
	if (ctx.cr6.lt) goto loc_88121F08;
	// ld r11,8(r27)
	ctx.current_instruction = 0x88121EA0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r27.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// std r11,8(r27)
	ctx.current_instruction = 0x88121EAC;
	REX_STORE_U64(ctx.r27.u32 + 8, ctx.r11.u64);
loc_88121EB0:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x88121cd8
	if (ctx.cr6.lt) goto loc_88121CD8;
loc_88121EB8:
	// lwz r11,4(r27)
	ctx.current_instruction = 0x88121EB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lhz r10,66(r11)
	ctx.current_instruction = 0x88121EBC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 66);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,66(r11)
	ctx.current_instruction = 0x88121EC4;
	REX_STORE_U16(ctx.r11.u32 + 66, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.current_instruction = 0x88121EC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r6,r7,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r7.u64;
	// subf. r31,r30,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x88121f08
	if (ctx.cr0.eq) goto loc_88121F08;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x88121ED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88121EE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88121EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88121EF0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88121f08
	if (ctx.cr6.lt) goto loc_88121F08;
	// ld r10,8(r27)
	ctx.current_instruction = 0x88121EF8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r27.u32 + 8);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r27)
	ctx.current_instruction = 0x88121F04;
	REX_STORE_U64(ctx.r27.u32 + 8, ctx.r11.u64);
loc_88121F08:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88126D28) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88126D28;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88126D28) {
			switch (rex_dispatch_address) {
				case 0x88126D30:
				case 0x88126E10:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88126D28;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88126D30: goto loc_88126D30;
		case 0x88126E10: goto loc_88126E10;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88126D30;
	__savegprlr_26(ctx, base);
loc_88126D30:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88126D30;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x88126D34;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r28,32767
	ctx.r28.s64 = 32767;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88126e70
	if (ctx.cr6.eq) goto loc_88126E70;
	// lwz r7,468(r3)
	ctx.current_instruction = 0x88126D50;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// li r29,0
	ctx.r29.s64 = 0;
loc_88126D58:
	// lwz r11,320(r31)
	ctx.current_instruction = 0x88126D58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,444(r31)
	ctx.current_instruction = 0x88126D5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,424(r9)
	ctx.current_instruction = 0x88126D68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 424);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x88126D6C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x88126D70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r4,-2(r5)
	ctx.current_instruction = 0x88126D80;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + -2);
	// extsh r30,r4
	ctx.r30.s64 = ctx.r4.s16;
	// beq cr6,0x88126d98
	if (ctx.cr6.eq) goto loc_88126D98;
	// lwz r11,456(r31)
	ctx.current_instruction = 0x88126D8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// sraw r30,r30,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r30.s32 < 0) & (((ctx.r30.s32 >> temp.u32) << temp.u32) != ctx.r30.s32);
	ctx.r30.s64 = ctx.r30.s32 >> temp.u32;
	// b 0x88126dac
	goto loc_88126DAC;
loc_88126D98:
	// lwz r11,448(r31)
	ctx.current_instruction = 0x88126D98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88126dac
	if (ctx.cr6.eq) goto loc_88126DAC;
	// lwz r11,456(r31)
	ctx.current_instruction = 0x88126DA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
loc_88126DAC:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x88126DAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x88126e38
	if (ctx.cr6.gt) goto loc_88126E38;
	// lwz r11,424(r9)
	ctx.current_instruction = 0x88126DB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 424);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88126DC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhzx r9,r10,r8
	ctx.current_instruction = 0x88126DC4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// beq cr6,0x88126ddc
	if (ctx.cr6.eq) goto loc_88126DDC;
	// lwz r10,456(r31)
	ctx.current_instruction = 0x88126DD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// sraw r11,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x88126df0
	goto loc_88126DF0;
loc_88126DDC:
	// lwz r10,448(r31)
	ctx.current_instruction = 0x88126DDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88126df0
	if (ctx.cr6.eq) goto loc_88126DF0;
	// lwz r10,456(r31)
	ctx.current_instruction = 0x88126DE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_88126DF0:
	// extsh r5,r30
	ctx.r5.s64 = ctx.r30.s16;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812d8e8
	ctx.lr = 0x88126E10;
	sub_8812D8E8(ctx, base);
loc_88126E10:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,80(r1)
	ctx.current_instruction = 0x88126E14;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r7,468(r31)
	ctx.current_instruction = 0x88126E1C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// subf r11,r9,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x88126e44
	goto loc_88126E44;
loc_88126E38:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
loc_88126E44:
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88126e5c
	if (!ctx.cr6.lt) goto loc_88126E5C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_88126E5C:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88126E5C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,1776
	ctx.r29.s64 = ctx.r29.s64 + 1776;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88126d58
	if (ctx.cr6.lt) goto loc_88126D58;
loc_88126E70:
	// lwz r11,388(r31)
	ctx.current_instruction = 0x88126E70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// subf r10,r11,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r11.u64;
	// stw r10,0(r26)
	ctx.current_instruction = 0x88126E78;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812BEA0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8812BEA0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812BEA0;
	ctx.current_instruction = 0x8812BEA0;
	PPCRegister temp{};
	// lwz r8,8(r3)
	ctx.current_instruction = 0x8812BEA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,48(r3)
	ctx.current_instruction = 0x8812BEA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,40(r3)
	ctx.current_instruction = 0x8812BEAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,0(r8)
	ctx.current_instruction = 0x8812BEB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,60(r10)
	ctx.current_instruction = 0x8812BEB8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x8812bee4
	if (ctx.cr6.gt) goto loc_8812BEE4;
	// lwz r9,212(r10)
	ctx.current_instruction = 0x8812BEC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 212);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8812bedc
	if (ctx.cr6.eq) goto loc_8812BEDC;
	// lwz r10,8(r10)
	ctx.current_instruction = 0x8812BED0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// b 0x8812bf00
	goto loc_8812BF00;
loc_8812BEDC:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8812bf04
	goto loc_8812BF04;
loc_8812BEE4:
	// lwz r9,604(r10)
	ctx.current_instruction = 0x8812BEE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 604);
	// lwz r10,8(r10)
	ctx.current_instruction = 0x8812BEE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8812befc
	if (ctx.cr6.eq) goto loc_8812BEFC;
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// b 0x8812bf00
	goto loc_8812BF00;
loc_8812BEFC:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_8812BF00:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8812BF04:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r10,80(r11)
	ctx.current_instruction = 0x8812BF1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,20(r11)
	ctx.current_instruction = 0x8812BF20;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,24(r11)
	ctx.current_instruction = 0x8812BF24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.current_instruction = 0x8812BF2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812DD90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812DD90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812DD90) {
			switch (rex_dispatch_address) {
				case 0x8812DD98:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812DD90;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x8812DD98: goto loc_8812DD98;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8812DD98;
	__savegprlr_29(ctx, base);
loc_8812DD98:
	// lwz r10,176(r3)
	ctx.current_instruction = 0x8812DD98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8812e104
	if (!ctx.cr6.eq) goto loc_8812E104;
	// lwz r31,60(r3)
	ctx.current_instruction = 0x8812DDAC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bgt cr6,0x8812de64
	if (ctx.cr6.gt) goto loc_8812DE64;
	// lwz r9,320(r3)
	ctx.current_instruction = 0x8812DDB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r5,34(r3)
	ctx.current_instruction = 0x8812DDC0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,424(r9)
	ctx.current_instruction = 0x8812DDC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 424);
	// lwz r7,16(r10)
	ctx.current_instruction = 0x8812DDCC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lbz r10,0(r7)
	ctx.current_instruction = 0x8812DDD0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// ble cr6,0x8812de1c
	if (!ctx.cr6.gt) goto loc_8812DE1C;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8812DDF4:
	// lwz r7,40(r7)
	ctx.current_instruction = 0x8812DDF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1776
	ctx.r10.s64 = ctx.r10.s64 + 1776;
	// addi r7,r7,0
	ctx.r7.s64 = ctx.r7.s64 + 0;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// subfic r7,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfe r29,r29,r29
	temp.u8 = (~ctx.r29.u32 + ctx.r29.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r29.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ctx.r11.u64;
	// blt cr6,0x8812ddf4
	if (ctx.cr6.lt) goto loc_8812DDF4;
loc_8812DE1C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812de64
	if (ctx.cr6.eq) goto loc_8812DE64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8812de64
	if (!ctx.cr6.gt) goto loc_8812DE64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r6,34(r3)
	ctx.current_instruction = 0x8812DE34;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8812DE3C:
	// lwz r7,48(r7)
	ctx.current_instruction = 0x8812DE3C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1776
	ctx.r10.s64 = ctx.r10.s64 + 1776;
	// addi r7,r7,0
	ctx.r7.s64 = ctx.r7.s64 + 0;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// blt cr6,0x8812de3c
	if (ctx.cr6.lt) goto loc_8812DE3C;
loc_8812DE64:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// stw r10,76(r3)
	ctx.current_instruction = 0x8812DE6C;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// bgt cr6,0x8812dfac
	if (ctx.cr6.gt) goto loc_8812DFAC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812de84
	if (ctx.cr6.eq) goto loc_8812DE84;
	// lwz r9,464(r3)
	ctx.current_instruction = 0x8812DE7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 464);
	// b 0x8812df78
	goto loc_8812DF78;
loc_8812DE84:
	// lwz r11,320(r3)
	ctx.current_instruction = 0x8812DE84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r10,444(r3)
	ctx.current_instruction = 0x8812DE88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,424(r11)
	ctx.current_instruction = 0x8812DE90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,8(r9)
	ctx.current_instruction = 0x8812DE94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r10,-2(r8)
	ctx.current_instruction = 0x8812DE98;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r11,0(r8)
	ctx.current_instruction = 0x8812DE9C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// beq cr6,0x8812dec0
	if (ctx.cr6.eq) goto loc_8812DEC0;
	// lwz r9,456(r3)
	ctx.current_instruction = 0x8812DEA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sraw r11,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// sraw r10,r7,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r10.s64 = ctx.r7.s32 >> temp.u32;
	// b 0x8812deec
	goto loc_8812DEEC;
loc_8812DEC0:
	// lwz r9,448(r3)
	ctx.current_instruction = 0x8812DEC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8812deec
	if (ctx.cr6.eq) goto loc_8812DEEC;
	// lwz r9,456(r3)
	ctx.current_instruction = 0x8812DECC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// slw r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// slw r4,r7,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
loc_8812DEEC:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8812df04
	if (ctx.cr6.lt) goto loc_8812DF04;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8812df24
	goto loc_8812DF24;
loc_8812DF04:
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
loc_8812DF24:
	// lwz r8,140(r3)
	ctx.current_instruction = 0x8812DF24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8812df54
	if (!ctx.cr6.eq) goto loc_8812DF54;
	// lwz r8,148(r3)
	ctx.current_instruction = 0x8812DF30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8812df54
	if (!ctx.cr6.eq) goto loc_8812DF54;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_8812DF54:
	// lwz r10,468(r3)
	ctx.current_instruction = 0x8812DF54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r30,76(r3)
	ctx.current_instruction = 0x8812DF5C;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// subf r10,r5,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r5.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8812DF78:
	// lhz r11,34(r3)
	ctx.current_instruction = 0x8812DF78;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812e0f4
	if (ctx.cr6.eq) goto loc_8812E0F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8812DF8C:
	// lwz r8,360(r3)
	ctx.current_instruction = 0x8812DF8C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r11,r8
	ctx.current_instruction = 0x8812DF94;
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r7,34(r3)
	ctx.current_instruction = 0x8812DF9C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8812df8c
	if (ctx.cr6.lt) goto loc_8812DF8C;
	// b 0x8812e0f4
	goto loc_8812E0F4;
loc_8812DFAC:
	// lwz r11,372(r3)
	ctx.current_instruction = 0x8812DFAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812e020
	if (ctx.cr6.eq) goto loc_8812E020;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x8812DFB8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812e0f4
	if (ctx.cr6.eq) goto loc_8812E0F4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8812DFCC:
	// lwz r11,444(r3)
	ctx.current_instruction = 0x8812DFCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812dfe8
	if (ctx.cr6.eq) goto loc_8812DFE8;
	// lwz r11,376(r3)
	ctx.current_instruction = 0x8812DFD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 376);
	// lwz r8,456(r3)
	ctx.current_instruction = 0x8812DFDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x8812e000
	goto loc_8812E000;
loc_8812DFE8:
	// lwz r11,448(r3)
	ctx.current_instruction = 0x8812DFE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,376(r3)
	ctx.current_instruction = 0x8812DFF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 376);
	// beq cr6,0x8812e000
	if (ctx.cr6.eq) goto loc_8812E000;
	// lwz r8,456(r3)
	ctx.current_instruction = 0x8812DFF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// slw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
loc_8812E000:
	// lwz r8,360(r3)
	ctx.current_instruction = 0x8812E000;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r11,r10,r8
	ctx.current_instruction = 0x8812E008;
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lhz r7,34(r3)
	ctx.current_instruction = 0x8812E010;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8812dfcc
	if (ctx.cr6.lt) goto loc_8812DFCC;
	// b 0x8812e0f4
	goto loc_8812E0F4;
loc_8812E020:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8812e038
	if (ctx.cr6.eq) goto loc_8812E038;
	// lwz r11,468(r3)
	ctx.current_instruction = 0x8812E02C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// neg r5,r11
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x8812e0b4
	goto loc_8812E0B4;
loc_8812E038:
	// lhz r11,34(r3)
	ctx.current_instruction = 0x8812E038;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812e0b4
	if (ctx.cr6.eq) goto loc_8812E0B4;
	// lwz r8,320(r3)
	ctx.current_instruction = 0x8812E048;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r6,444(r3)
	ctx.current_instruction = 0x8812E054;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8812E05C:
	// lwz r11,424(r11)
	ctx.current_instruction = 0x8812E05C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r4,8(r11)
	ctx.current_instruction = 0x8812E064;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,0(r4)
	ctx.current_instruction = 0x8812E068;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// beq cr6,0x8812e080
	if (ctx.cr6.eq) goto loc_8812E080;
	// lwz r4,456(r3)
	ctx.current_instruction = 0x8812E074;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// sraw r11,r11,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x8812e094
	goto loc_8812E094;
loc_8812E080:
	// lwz r4,448(r3)
	ctx.current_instruction = 0x8812E080;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8812e094
	if (ctx.cr6.eq) goto loc_8812E094;
	// lwz r4,456(r3)
	ctx.current_instruction = 0x8812E08C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
loc_8812E094:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8812e0a0
	if (!ctx.cr6.gt) goto loc_8812E0A0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8812E0A0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1776
	ctx.r10.s64 = ctx.r10.s64 + 1776;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// blt cr6,0x8812e05c
	if (ctx.cr6.lt) goto loc_8812E05C;
loc_8812E0B4:
	// lhz r11,34(r3)
	ctx.current_instruction = 0x8812E0B4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812e0f4
	if (ctx.cr6.eq) goto loc_8812E0F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8812E0C8:
	// lwz r9,468(r3)
	ctx.current_instruction = 0x8812E0C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,360(r3)
	ctx.current_instruction = 0x8812E0D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// stwx r4,r11,r8
	ctx.current_instruction = 0x8812E0E0;
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r9,34(r3)
	ctx.current_instruction = 0x8812E0E8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8812e0c8
	if (ctx.cr6.lt) goto loc_8812E0C8;
loc_8812E0F4:
	// lwz r11,72(r3)
	ctx.current_instruction = 0x8812E0F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8812e104
	if (!ctx.cr6.eq) goto loc_8812E104;
	// stw r30,72(r3)
	ctx.current_instruction = 0x8812E100;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
loc_8812E104:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88139F80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88139F80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88139F80) {
			switch (rex_dispatch_address) {
				case 0x88139FF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88139F80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88139FF8: goto loc_88139FF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88139F84;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88139F88;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88139F8C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x88139F90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// subf r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lwz r9,724(r3)
	ctx.current_instruction = 0x88139F98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88139fc0
	if (!ctx.cr6.eq) goto loc_88139FC0;
	// lwz r11,800(r3)
	ctx.current_instruction = 0x88139FAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
loc_88139FC0:
	// lwz r9,7084(r3)
	ctx.current_instruction = 0x88139FC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7084);
	// mullw r11,r7,r4
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// lwz r31,796(r3)
	ctx.current_instruction = 0x88139FC8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// lwz r6,6800(r3)
	ctx.current_instruction = 0x88139FCC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 6800);
	// lwz r10,6844(r3)
	ctx.current_instruction = 0x88139FD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6844);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mullw r5,r31,r4
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88139FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88139FF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88139FFC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8813A004;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8813CD20) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8813CD20);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813CD20;
	ctx.current_instruction = 0x8813CD20;
	// lwz r7,4(r3)
	ctx.current_instruction = 0x8813CD20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r7)
	ctx.current_instruction = 0x8813CD24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8813cd3c
	if (ctx.cr6.eq) goto loc_8813CD3C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x8813cd40
	if (!ctx.cr6.eq) goto loc_8813CD40;
loc_8813CD3C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8813CD40:
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8813CD40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,12849
	ctx.r9.s64 = 842072064;
	// lis r8,12338
	ctx.r8.s64 = 808583168;
	// ori r9,r9,22105
	ctx.r9.u64 = ctx.r9.u64 | 22105;
	// lis r4,22101
	ctx.r4.s64 = 1448411136;
	// ori r6,r8,13385
	ctx.r6.u64 = ctx.r8.u64 | 13385;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x8813CD58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r8,r4,22857
	ctx.r8.u64 = ctx.r4.u64 | 22857;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8813ced0
	if (ctx.cr6.gt) goto loc_8813CED0;
	// beq cr6,0x8813cee0
	if (ctx.cr6.eq) goto loc_8813CEE0;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8813cee0
	if (ctx.cr6.eq) goto loc_8813CEE0;
	// lis r8,12593
	ctx.r8.s64 = 825294848;
	// ori r4,r8,13392
	ctx.r4.u64 = ctx.r8.u64 | 13392;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8813ced8
	if (!ctx.cr6.eq) goto loc_8813CED8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8813ce00
	if (ctx.cr6.eq) goto loc_8813CE00;
	// lhz r11,14(r7)
	ctx.current_instruction = 0x8813CD8C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8813cdac
	if (!ctx.cr6.eq) goto loc_8813CDAC;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CDA0;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CDAC:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8813cdc8
	if (!ctx.cr6.eq) goto loc_8813CDC8;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CDBC;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CDC8:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8813cde4
	if (!ctx.cr6.eq) goto loc_8813CDE4;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CDD8;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CDE4:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8813cfdc
	if (!ctx.cr6.eq) goto loc_8813CFDC;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CDF4;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CE00:
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r8,r11,22094
	ctx.r8.u64 = ctx.r11.u64 | 22094;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8813ce24
	if (!ctx.cr6.eq) goto loc_8813CE24;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x8813CE18;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CE24:
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// ori r8,r11,22105
	ctx.r8.u64 = ctx.r11.u64 | 22105;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8813ce48
	if (!ctx.cr6.eq) goto loc_8813CE48;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CE3C;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CE48:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r8,r11,22869
	ctx.r8.u64 = ctx.r11.u64 | 22869;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8813ce6c
	if (!ctx.cr6.eq) goto loc_8813CE6C;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CE60;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CE6C:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r8,r11,21849
	ctx.r8.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8813ce90
	if (!ctx.cr6.eq) goto loc_8813CE90;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CE84;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CE90:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r8,r11,22857
	ctx.r8.u64 = ctx.r11.u64 | 22857;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8813ceb0
	if (ctx.cr6.eq) goto loc_8813CEB0;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8813ceb0
	if (ctx.cr6.eq) goto loc_8813CEB0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8813cfdc
	if (!ctx.cr6.eq) goto loc_8813CFDC;
loc_8813CEB0:
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x8813CEB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8813cfdc
	if (ctx.cr6.eq) goto loc_8813CFDC;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x8813CEC4;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CED0:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8813cee0
	if (ctx.cr6.eq) goto loc_8813CEE0;
loc_8813CED8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CEE0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8813cfe4
	if (ctx.cr6.eq) goto loc_8813CFE4;
	// lhz r11,14(r7)
	ctx.current_instruction = 0x8813CEE8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8813cf28
	if (!ctx.cr6.eq) goto loc_8813CF28;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x8813CEF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8813cf14
	if (!ctx.cr6.eq) goto loc_8813CF14;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CF08;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CF14:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CF1C;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CF28:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8813cf64
	if (!ctx.cr6.eq) goto loc_8813CF64;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x8813CF30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8813cf50
	if (!ctx.cr6.eq) goto loc_8813CF50;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CF44;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CF50:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CF58;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CF64:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8813cfa0
	if (!ctx.cr6.eq) goto loc_8813CFA0;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x8813CF6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8813cf8c
	if (!ctx.cr6.eq) goto loc_8813CF8C;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CF80;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CF8C:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CF94;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CFA0:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8813cfdc
	if (!ctx.cr6.eq) goto loc_8813CFDC;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x8813CFA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8813cfc8
	if (!ctx.cr6.eq) goto loc_8813CFC8;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CFBC;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CFC8:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813CFD0;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CFDC:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813CFE4:
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// ori r7,r11,22105
	ctx.r7.u64 = ctx.r11.u64 | 22105;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8813d028
	if (!ctx.cr6.eq) goto loc_8813D028;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x8813CFF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8813d014
	if (!ctx.cr6.eq) goto loc_8813D014;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813D008;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D014:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813D01C;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D028:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r7,r11,22869
	ctx.r7.u64 = ctx.r11.u64 | 22869;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8813d06c
	if (!ctx.cr6.eq) goto loc_8813D06C;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x8813D038;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8813d058
	if (!ctx.cr6.eq) goto loc_8813D058;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813D04C;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D058:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813D060;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D06C:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r7,r11,21849
	ctx.r7.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8813d0b0
	if (!ctx.cr6.eq) goto loc_8813D0B0;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x8813D07C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8813d09c
	if (!ctx.cr6.eq) goto loc_8813D09C;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813D090;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D09C:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813D0A4;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D0B0:
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// ori r7,r11,21846
	ctx.r7.u64 = ctx.r11.u64 | 21846;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8813d0f4
	if (!ctx.cr6.eq) goto loc_8813D0F4;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x8813D0C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8813d0e0
	if (!ctx.cr6.eq) goto loc_8813D0E0;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813D0D4;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D0E0:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813D0E8;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D0F4:
	// lis r11,22068
	ctx.r11.s64 = 1446248448;
	// ori r7,r11,12592
	ctx.r7.u64 = ctx.r11.u64 | 12592;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8813d124
	if (!ctx.cr6.eq) goto loc_8813D124;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x8813D104;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8813cfdc
	if (ctx.cr6.eq) goto loc_8813CFDC;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14716(r3)
	ctx.current_instruction = 0x8813D118;
	REX_STORE_U32(ctx.r3.u32 + 14716, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D124:
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r7,r11,22094
	ctx.r7.u64 = ctx.r11.u64 | 22094;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8813d148
	if (!ctx.cr6.eq) goto loc_8813D148;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x8813D13C;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D148:
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r7,r11,22094
	ctx.r7.u64 = ctx.r11.u64 | 22094;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8813d18c
	if (!ctx.cr6.eq) goto loc_8813D18C;
	// lwz r11,14652(r3)
	ctx.current_instruction = 0x8813D158;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14652);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8813d178
	if (!ctx.cr6.eq) goto loc_8813D178;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x8813D16C;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D178:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x8813D180;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8813D18C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8813d1a4
	if (ctx.cr6.eq) goto loc_8813D1A4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8813d1a4
	if (ctx.cr6.eq) goto loc_8813D1A4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8813cfdc
	if (!ctx.cr6.eq) goto loc_8813CFDC;
loc_8813D1A4:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// addi r10,r11,-24168
	ctx.r10.s64 = ctx.r11.s64 + -24168;
	// stw r10,14712(r3)
	ctx.current_instruction = 0x8813D1AC;
	REX_STORE_U32(ctx.r3.u32 + 14712, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881470F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881470F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881470F8) {
			switch (rex_dispatch_address) {
				case 0x88147100:
				case 0x88147114:
				case 0x88147224:
				case 0x88147238:
				case 0x88147264:
				case 0x88147278:
				case 0x88147298:
				case 0x881472B4:
				case 0x88147420:
				case 0x8814751C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881470F8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88147100: goto loc_88147100;
		case 0x88147114: goto loc_88147114;
		case 0x88147224: goto loc_88147224;
		case 0x88147238: goto loc_88147238;
		case 0x88147264: goto loc_88147264;
		case 0x88147278: goto loc_88147278;
		case 0x88147298: goto loc_88147298;
		case 0x881472B4: goto loc_881472B4;
		case 0x88147420: goto loc_88147420;
		case 0x8814751C: goto loc_8814751C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88147100;
	__savegprlr_20(ctx, base);
loc_88147100:
	// stfd f29,-128(r1)
	ctx.current_instruction = 0x88147100;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f29.u64);
	// stfd f30,-120(r1)
	ctx.current_instruction = 0x88147104;
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	ctx.current_instruction = 0x88147108;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x881eef54
	ctx.lr = 0x88147114;
	__savevmx_124(ctx, base);
loc_88147114:
	// stwu r1,-384(r1)
	ctx.current_instruction = 0x88147114;
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r26.s64 = temp.s64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x8814714c
	if (!ctx.cr6.gt) goto loc_8814714C;
loc_8814713C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// srw r11,r6,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8814713c
	if (ctx.cr6.gt) goto loc_8814713C;
loc_8814714C:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// and r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 & ctx.r26.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// add r25,r11,r29
	ctx.r25.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r23,r8,27,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r6,64
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 64, ctx.xer);
	// blt cr6,0x881471f4
	if (ctx.cr6.lt) goto loc_881471F4;
	// cmpwi cr6,r6,2048
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2048, ctx.xer);
	// bgt cr6,0x881471f4
	if (ctx.cr6.gt) goto loc_881471F4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x881471f4
	if (ctx.cr6.eq) goto loc_881471F4;
	// srawi r11,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 7;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,17104
	ctx.r8.s64 = ctx.r10.s64 + 17104;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x881471A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,0(r7)
	ctx.current_instruction = 0x881471A4;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r7)
	ctx.current_instruction = 0x881471AC;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r7)
	ctx.current_instruction = 0x881471B0;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,8(r7)
	ctx.current_instruction = 0x881471B8;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,40(r7)
	ctx.current_instruction = 0x881471C0;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,20(r7)
	ctx.current_instruction = 0x881471C8;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f2,16(r7)
	ctx.current_instruction = 0x881471D0;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f9,80(r1)
	ctx.current_instruction = 0x881471D4;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,144(r1)
	ctx.current_instruction = 0x881471D8;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f5,96(r1)
	ctx.current_instruction = 0x881471DC;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f4,160(r1)
	ctx.current_instruction = 0x881471E0;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f3,112(r1)
	ctx.current_instruction = 0x881471E8;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,128(r1)
	ctx.current_instruction = 0x881471EC;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// b 0x881472c8
	goto loc_881472C8;
loc_881471F4:
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,80(r1)
	ctx.current_instruction = 0x881471FC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88147200;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f30,f0
	ctx.f30.f64 = double(ctx.f0.s64);
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// lfd f0,12544(r10)
	ctx.current_instruction = 0x8814720C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12544);
	// fdiv f13,f0,f30
	ctx.f13.f64 = ctx.f0.f64 / ctx.f30.f64;
	// lfd f0,7016(r9)
	ctx.current_instruction = 0x88147214;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 7016);
	// fmul f29,f13,f0
	ctx.f29.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x881eff80
	ctx.lr = 0x88147224;
	sub_881EFF80(ctx, base);
loc_88147224:
	// fmul f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 * ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,80(r1)
	ctx.current_instruction = 0x88147230;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x881efea0
	ctx.lr = 0x88147238;
	sub_881EFEA0(ctx, base);
loc_88147238:
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// fmul f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 * ctx.f31.f64;
	// lfd f0,8624(r8)
	ctx.current_instruction = 0x88147244;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 8624);
	// fdiv f30,f0,f30
	ctx.f30.f64 = ctx.f0.f64 / ctx.f30.f64;
	// lfd f0,7008(r7)
	ctx.current_instruction = 0x8814724C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 7008);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,128(r1)
	ctx.current_instruction = 0x88147254;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmul f29,f30,f0
	ctx.f29.f64 = ctx.f30.f64 * ctx.f0.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x881eff80
	ctx.lr = 0x88147264;
	sub_881EFF80(ctx, base);
loc_88147264:
	// fmul f8,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64 * ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,144(r1)
	ctx.current_instruction = 0x88147270;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x881efea0
	ctx.lr = 0x88147278;
	sub_881EFEA0(ctx, base);
loc_88147278:
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// fmul f6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f1.f64 * ctx.f31.f64;
	// lfd f0,6992(r6)
	ctx.current_instruction = 0x88147280;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + 6992);
	// fmul f31,f30,f0
	ctx.f31.f64 = ctx.f30.f64 * ctx.f0.f64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,96(r1)
	ctx.current_instruction = 0x8814728C;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x881efea0
	ctx.lr = 0x88147298;
	sub_881EFEA0(ctx, base);
loc_88147298:
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lfd f0,12296(r5)
	ctx.current_instruction = 0x8814729C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 12296);
	// fmul f4,f1,f0
	ctx.f4.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f31,f4
	ctx.f31.f64 = double(float(ctx.f4.f64));
	// stfs f31,112(r1)
	ctx.current_instruction = 0x881472AC;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x881eff80
	ctx.lr = 0x881472B4;
	sub_881EFF80(ctx, base);
loc_881472B4:
	// lis r4,-30719
	ctx.r4.s64 = -2013200384;
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,160(r1)
	ctx.current_instruction = 0x881472BC;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,7000(r4)
	ctx.current_instruction = 0x881472C0;
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_881472C8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f2,176(r1)
	ctx.current_instruction = 0x881472CC;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r11,7760
	ctx.r31.s64 = ctx.r11.s64 + 7760;
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// vspltw128 v12,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// vspltw128 v0,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v59,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v127,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vor v9,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vspltw128 v10,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// vor v8,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vsldoi v11,v12,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vmaddcfp128 v9,v127,v9,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vxor128 v126,v127,v62
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// srawi r10,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 2;
	// lvx128 v58,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v12,v10,v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 8));
	// addze r27,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r27.s64 = temp.s64;
	// lvx128 v57,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v8,v126,v8,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw128 v125,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v125.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vspltw128 v124,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v124.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// vsldoi v0,v0,v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 8));
	// vsldoi v13,v13,v8,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 8));
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// ble cr6,0x881473fc
	if (!ctx.cr6.gt) goto loc_881473FC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_88147374:
	// lvx128 v56,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v12,v126,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor128 v55,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// lvx128 v54,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v11,v127,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vor128 v53,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vrlimi128 v55,v54,5,2
	simde_mm_store_ps(ctx.v55.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 78), 5));
	// vrlimi128 v53,v56,5,2
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 78), 5));
	// vmulfp128 v9,v13,v55
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vpermwi128 v8,v55,78
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xB1));
	// stvx128 v53,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r28,-16
	ctx.r28.s64 = ctx.r28.s64 + -16;
	// vmaddfp128 v0,v127,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v10,v8,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v10,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// bdnz 0x88147374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88147374;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881473fc
	if (!ctx.cr6.gt) goto loc_881473FC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_881473CC:
	// lvx128 v52,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v12,v126,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v9,v13,v52
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vpermwi128 v8,v52,78
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xB1));
	// vmaddfp128 v11,v127,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp128 v0,v127,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v10,v8,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// vxor128 v10,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// bdnz 0x881473cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881473CC;
loc_881473FC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r5,r24,-1
	ctx.r5.s64 = ctx.r24.s64 + -1;
	// bne cr6,0x8814740c
	if (!ctx.cr6.eq) goto loc_8814740C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_8814740C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x88147420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88147420:
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v0,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// li r7,32
	ctx.r7.s64 = 32;
	// vsldoi128 v11,v124,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lvx128 v10,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// vmaddcfp128 v9,v126,v9,v125
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v125.f32)));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsldoi128 v12,v125,v10,12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 4));
	// lvx128 v63,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v8,v127,v8,v124
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v124.f32)));
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vsldoi v13,v10,v9,12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 4));
	// vrlimi128 v12,v9,1,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 1));
	// vmaddcfp128 v7,v127,v7,v0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsldoi v0,v0,v8,12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 4));
	// vmaddfp128 v10,v126,v8,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vrlimi128 v11,v8,1,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 1));
	// vrlimi128 v0,v7,1,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v7.f32), 228), 1));
	// vrlimi128 v13,v10,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 228), 1));
	// vxor128 v8,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v9,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v62,v0,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// ble cr6,0x881474fc
	if (!ctx.cr6.gt) goto loc_881474FC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_88147498:
	// lvx128 v51,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vor128 v50,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// lvx128 v49,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v11,v127,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddcfp128 v10,v126,v10,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v12,v51,78
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xB1));
	// vrlimi128 v50,v49,5,1
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 147), 5));
	// vrlimi128 v12,v49,5,2
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 78), 5));
	// vmulfp128 v6,v62,v50
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vmulfp128 v7,v13,v50
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vmaddfp128 v13,v126,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp128 v0,v127,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v9,v12,v6
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v8,v8,v12,v7
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vor v12,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vxor128 v62,v0,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vpermwi128 v48,v9,228
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x1B));
	// vxor128 v9,v13,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vxor128 v8,v0,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v48,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x88147498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88147498;
loc_881474FC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x88147510
	if (ctx.cr6.eq) goto loc_88147510;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r20)
	ctx.current_instruction = 0x8814750C;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_88147510:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x881ef1ec
	ctx.lr = 0x8814751C;
	__restvmx_124(ctx, base);
loc_8814751C:
	// lfd f29,-128(r1)
	ctx.current_instruction = 0x8814751C;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	ctx.current_instruction = 0x88147520;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.current_instruction = 0x88147524;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881508C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881508C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881508C0) {
			switch (rex_dispatch_address) {
				case 0x88150974:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881508C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88150974: goto loc_88150974;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881508C4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881508C8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881508CC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881508D0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_881508DC:
	// lwz r11,15612(r31)
	ctx.current_instruction = 0x881508DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// addi r11,r11,5152
	ctx.r11.s64 = ctx.r11.s64 + 5152;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.current_instruction = 0x881508E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,50
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 50, ctx.xer);
	// ble cr6,0x88150974
	if (!ctx.cr6.gt) goto loc_88150974;
	// lwz r11,15612(r31)
	ctx.current_instruction = 0x881508F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// lwz r10,188(r31)
	ctx.current_instruction = 0x881508F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// addi r9,r11,5152
	ctx.r9.s64 = ctx.r11.s64 + 5152;
	// lwz r8,180(r31)
	ctx.current_instruction = 0x88150900;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// addi r7,r11,2571
	ctx.r7.s64 = ctx.r11.s64 + 2571;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r4,r10,r8
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwzx r3,r6,r31
	ctx.current_instruction = 0x88150914;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// ldx r10,r5,r31
	ctx.current_instruction = 0x88150918;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r31.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r8,r10,r9
	ctx.r8.s64 = (ctx.r9.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r10.s64 / ctx.r9.s64 : 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// andc r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// tdlgei r6,-1
	if (ctx.r6.s64 == -1ll || ctx.r6.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// blt cr6,0x88150974
	if (ctx.cr6.lt) goto loc_88150974;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// blt cr6,0x88150974
	if (ctx.cr6.lt) goto loc_88150974;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r5,r11,r10
	ctx.r5.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// li r4,119
	ctx.r4.s64 = 119;
	// addi r3,r30,6
	ctx.r3.s64 = ctx.r30.s64 + 6;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x8817d628
	ctx.lr = 0x88150974;
	sub_8817D628(ctx, base);
loc_88150974:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// ble cr6,0x881508dc
	if (!ctx.cr6.gt) goto loc_881508DC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88150984;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8815098C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88150990;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881533D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881533D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881533D8;
	ctx.current_instruction = 0x881533D8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881533e8
	if (!ctx.cr6.eq) goto loc_881533E8;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881533E8:
	// b 0x8814fb28
	sub_8814FB28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881544D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881544D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881544D0) {
			switch (rex_dispatch_address) {
				case 0x881544D8:
				case 0x881545C8:
				case 0x8815469C:
				case 0x881546A4:
				case 0x881546C4:
				case 0x881546D0:
				case 0x881546FC:
				case 0x88154724:
				case 0x8815472C:
				case 0x8815479C:
				case 0x881547A4:
				case 0x881547E4:
				case 0x88154844:
				case 0x8815485C:
				case 0x881548C8:
				case 0x881549F0:
				case 0x88154A08:
				case 0x88154A50:
				case 0x88154A64:
				case 0x88154A84:
				case 0x88154AAC:
				case 0x88154AC0:
				case 0x88154AE4:
				case 0x88154AF0:
				case 0x88154AFC:
				case 0x88154B5C:
				case 0x88154B64:
				case 0x88154B84:
				case 0x88154B90:
				case 0x88154BBC:
				case 0x88154BD8:
				case 0x88154BE0:
				case 0x88154D4C:
				case 0x88154D54:
				case 0x88154EAC:
				case 0x88154F14:
				case 0x88154F24:
				case 0x881551E8:
				case 0x88155294:
				case 0x88155338:
				case 0x8815534C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881544D0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881544D8: goto loc_881544D8;
		case 0x881545C8: goto loc_881545C8;
		case 0x8815469C: goto loc_8815469C;
		case 0x881546A4: goto loc_881546A4;
		case 0x881546C4: goto loc_881546C4;
		case 0x881546D0: goto loc_881546D0;
		case 0x881546FC: goto loc_881546FC;
		case 0x88154724: goto loc_88154724;
		case 0x8815472C: goto loc_8815472C;
		case 0x8815479C: goto loc_8815479C;
		case 0x881547A4: goto loc_881547A4;
		case 0x881547E4: goto loc_881547E4;
		case 0x88154844: goto loc_88154844;
		case 0x8815485C: goto loc_8815485C;
		case 0x881548C8: goto loc_881548C8;
		case 0x881549F0: goto loc_881549F0;
		case 0x88154A08: goto loc_88154A08;
		case 0x88154A50: goto loc_88154A50;
		case 0x88154A64: goto loc_88154A64;
		case 0x88154A84: goto loc_88154A84;
		case 0x88154AAC: goto loc_88154AAC;
		case 0x88154AC0: goto loc_88154AC0;
		case 0x88154AE4: goto loc_88154AE4;
		case 0x88154AF0: goto loc_88154AF0;
		case 0x88154AFC: goto loc_88154AFC;
		case 0x88154B5C: goto loc_88154B5C;
		case 0x88154B64: goto loc_88154B64;
		case 0x88154B84: goto loc_88154B84;
		case 0x88154B90: goto loc_88154B90;
		case 0x88154BBC: goto loc_88154BBC;
		case 0x88154BD8: goto loc_88154BD8;
		case 0x88154BE0: goto loc_88154BE0;
		case 0x88154D4C: goto loc_88154D4C;
		case 0x88154D54: goto loc_88154D54;
		case 0x88154EAC: goto loc_88154EAC;
		case 0x88154F14: goto loc_88154F14;
		case 0x88154F24: goto loc_88154F24;
		case 0x881551E8: goto loc_881551E8;
		case 0x88155294: goto loc_88155294;
		case 0x88155338: goto loc_88155338;
		case 0x8815534C: goto loc_8815534C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x881544D8;
	__savegprlr_15(ctx, base);
loc_881544D8:
	// stwu r1,-1408(r1)
	ctx.current_instruction = 0x881544D8;
	ea = -1408 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88154508
	if (!ctx.cr6.eq) goto loc_88154508;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88154508:
	// lwz r31,736(r27)
	ctx.current_instruction = 0x88154508;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 736);
	// lwz r11,3724(r31)
	ctx.current_instruction = 0x8815450C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88154524
	if (!ctx.cr6.eq) goto loc_88154524;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88154524:
	// lwz r11,3744(r31)
	ctx.current_instruction = 0x88154524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// li r17,0
	ctx.r17.s64 = 0;
	// stw r17,32(r11)
	ctx.current_instruction = 0x8815452C;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r17.u32);
	// lwz r10,3980(r31)
	ctx.current_instruction = 0x88154530;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3980);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881545b0
	if (ctx.cr6.eq) goto loc_881545B0;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88154588
	if (ctx.cr6.eq) goto loc_88154588;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88154588
	if (ctx.cr6.eq) goto loc_88154588;
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88154588
	if (ctx.cr6.eq) goto loc_88154588;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x88154590
	if (ctx.cr6.eq) goto loc_88154590;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// beq cr6,0x88154588
	if (ctx.cr6.eq) goto loc_88154588;
loc_8815457C:
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88154588:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x8815459c
	if (!ctx.cr6.eq) goto loc_8815459C;
loc_88154590:
	// clrlwi r11,r20,16
	ctx.r11.u64 = ctx.r20.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8815457c
	if (ctx.cr6.eq) goto loc_8815457C;
loc_8815459C:
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// bne cr6,0x881545b0
	if (!ctx.cr6.eq) goto loc_881545B0;
	// clrlwi r11,r20,16
	ctx.r11.u64 = ctx.r20.u32 & 0xFFFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8815457c
	if (ctx.cr6.eq) goto loc_8815457C;
loc_881545B0:
	// lwz r11,22132(r31)
	ctx.current_instruction = 0x881545B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22132);
	// li r18,1
	ctx.r18.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881545cc
	if (!ctx.cr6.eq) goto loc_881545CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814fc60
	ctx.lr = 0x881545C8;
	sub_8814FC60(ctx, base);
loc_881545C8:
	// b 0x88154f14
	goto loc_88154F14;
loc_881545CC:
	// lwz r11,3464(r31)
	ctx.current_instruction = 0x881545CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3464);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881545f4
	if (!ctx.cr6.eq) goto loc_881545F4;
	// lwz r11,22092(r31)
	ctx.current_instruction = 0x881545D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22092);
	// stw r17,3464(r31)
	ctx.current_instruction = 0x881545DC;
	REX_STORE_U32(ctx.r31.u32 + 3464, ctx.r17.u32);
	// sth r18,3740(r31)
	ctx.current_instruction = 0x881545E0;
	REX_STORE_U16(ctx.r31.u32 + 3740, ctx.r18.u16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88154f14
	if (!ctx.cr6.eq) goto loc_88154F14;
	// stw r17,22092(r31)
	ctx.current_instruction = 0x881545EC;
	REX_STORE_U32(ctx.r31.u32 + 22092, ctx.r17.u32);
	// b 0x88154afc
	goto loc_88154AFC;
loc_881545F4:
	// lhz r11,3740(r31)
	ctx.current_instruction = 0x881545F4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3740);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8815460c
	if (!ctx.cr6.eq) goto loc_8815460C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_8815460C:
	// lwz r11,15364(r31)
	ctx.current_instruction = 0x8815460C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15364);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x88154860
	if (!ctx.cr6.eq) goto loc_88154860;
	// li r18,1
	ctx.r18.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88154630
	if (!ctx.cr6.eq) goto loc_88154630;
	// lwz r11,15432(r31)
	ctx.current_instruction = 0x88154624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154638
	if (ctx.cr6.eq) goto loc_88154638;
loc_88154630:
	// stw r18,15628(r31)
	ctx.current_instruction = 0x88154630;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r18.u32);
	// b 0x8815463c
	goto loc_8815463C;
loc_88154638:
	// stw r17,15628(r31)
	ctx.current_instruction = 0x88154638;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r17.u32);
loc_8815463C:
	// lwz r11,14856(r31)
	ctx.current_instruction = 0x8815463C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881546d0
	if (ctx.cr6.eq) goto loc_881546D0;
	// lwz r11,288(r31)
	ctx.current_instruction = 0x88154648;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815465c
	if (ctx.cr6.eq) goto loc_8815465C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881546a4
	if (!ctx.cr6.eq) goto loc_881546A4;
loc_8815465C:
	// lwz r10,14836(r31)
	ctx.current_instruction = 0x8815465C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88154674
	if (!ctx.cr6.eq) goto loc_88154674;
	// lwz r11,14860(r31)
	ctx.current_instruction = 0x88154668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14860);
	// stw r11,14864(r31)
	ctx.current_instruction = 0x8815466C;
	REX_STORE_U32(ctx.r31.u32 + 14864, ctx.r11.u32);
	// b 0x881546a4
	goto loc_881546A4;
loc_88154674:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881546a4
	if (ctx.cr6.eq) goto loc_881546A4;
	// lwz r11,14864(r31)
	ctx.current_instruction = 0x8815467C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8815469c
	if (!ctx.cr6.eq) goto loc_8815469C;
	// lwz r11,14860(r31)
	ctx.current_instruction = 0x88154688;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14860);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8815469c
	if (!ctx.cr6.eq) goto loc_8815469C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881664c0
	ctx.lr = 0x8815469C;
	sub_881664C0(ctx, base);
loc_8815469C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881a8e90
	ctx.lr = 0x881546A4;
	sub_881A8E90(ctx, base);
loc_881546A4:
	// lwz r11,14860(r31)
	ctx.current_instruction = 0x881546A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14860);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881546d0
	if (ctx.cr6.eq) goto loc_881546D0;
	// lwz r11,15628(r31)
	ctx.current_instruction = 0x881546B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881546c8
	if (!ctx.cr6.eq) goto loc_881546C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817ce50
	ctx.lr = 0x881546C4;
	sub_8817CE50(ctx, base);
loc_881546C4:
	// stw r18,15628(r31)
	ctx.current_instruction = 0x881546C4;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r18.u32);
loc_881546C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881a8fb0
	ctx.lr = 0x881546D0;
	sub_881A8FB0(ctx, base);
loc_881546D0:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x881546D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88154700
	if (!ctx.cr6.eq) goto loc_88154700;
	// lwz r11,21916(r31)
	ctx.current_instruction = 0x881546DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881546f4
	if (!ctx.cr6.eq) goto loc_881546F4;
	// lwz r11,21920(r31)
	ctx.current_instruction = 0x881546E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154700
	if (ctx.cr6.eq) goto loc_88154700;
loc_881546F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881a93a0
	ctx.lr = 0x881546FC;
	sub_881A93A0(ctx, base);
loc_881546FC:
	// stw r18,15628(r31)
	ctx.current_instruction = 0x881546FC;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r18.u32);
loc_88154700:
	// lwz r11,14884(r31)
	ctx.current_instruction = 0x88154700;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881547f0
	if (ctx.cr6.eq) goto loc_881547F0;
	// lwz r11,14888(r31)
	ctx.current_instruction = 0x8815470C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881547f0
	if (ctx.cr6.eq) goto loc_881547F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b07b8
	ctx.lr = 0x88154724;
	sub_881B07B8(ctx, base);
loc_88154724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8815472C;
	sub_881B31B0(ctx, base);
loc_8815472C:
	// lwz r11,15628(r31)
	ctx.current_instruction = 0x8815472C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15628);
	// lwz r10,224(r31)
	ctx.current_instruction = 0x88154730;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,220(r31)
	ctx.current_instruction = 0x8815473C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r29,14888(r31)
	ctx.current_instruction = 0x88154740;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// lwz r28,14892(r31)
	ctx.current_instruction = 0x88154744;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r17,14888(r31)
	ctx.current_instruction = 0x8815474C;
	REX_STORE_U32(ctx.r31.u32 + 14888, ctx.r17.u32);
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// stw r29,14892(r31)
	ctx.current_instruction = 0x88154754;
	REX_STORE_U32(ctx.r31.u32 + 14892, ctx.r29.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x881547a8
	if (ctx.cr6.eq) goto loc_881547A8;
	// lwz r9,3808(r31)
	ctx.current_instruction = 0x88154760;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3808);
	// lwz r8,3804(r31)
	ctx.current_instruction = 0x88154764;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3804);
	// lwz r6,3800(r31)
	ctx.current_instruction = 0x88154768;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3800);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,14968(r11)
	ctx.current_instruction = 0x88154774;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14968);
	// lwz r5,3840(r31)
	ctx.current_instruction = 0x88154778;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r4,3836(r31)
	ctx.current_instruction = 0x88154780;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// lwz r30,3832(r31)
	ctx.current_instruction = 0x88154784;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r11,14964(r11)
	ctx.current_instruction = 0x8815478C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14964);
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x881b1680
	ctx.lr = 0x8815479C;
	sub_881B1680(ctx, base);
loc_8815479C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881662e8
	ctx.lr = 0x881547A4;
	sub_881662E8(ctx, base);
loc_881547A4:
	// b 0x881547e4
	goto loc_881547E4;
loc_881547A8:
	// lwz r9,3840(r31)
	ctx.current_instruction = 0x881547A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// lwz r8,3836(r31)
	ctx.current_instruction = 0x881547AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// lwz r6,3832(r31)
	ctx.current_instruction = 0x881547B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,14968(r11)
	ctx.current_instruction = 0x881547BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14968);
	// lwz r5,3784(r31)
	ctx.current_instruction = 0x881547C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r4,3780(r31)
	ctx.current_instruction = 0x881547C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r30,3776(r31)
	ctx.current_instruction = 0x881547CC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r11,14964(r11)
	ctx.current_instruction = 0x881547D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14964);
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x881b1680
	ctx.lr = 0x881547E4;
	sub_881B1680(ctx, base);
loc_881547E4:
	// stw r28,14892(r31)
	ctx.current_instruction = 0x881547E4;
	REX_STORE_U32(ctx.r31.u32 + 14892, ctx.r28.u32);
	// stw r29,14888(r31)
	ctx.current_instruction = 0x881547E8;
	REX_STORE_U32(ctx.r31.u32 + 14888, ctx.r29.u32);
	// stw r18,15628(r31)
	ctx.current_instruction = 0x881547EC;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r18.u32);
loc_881547F0:
	// lwz r11,14836(r31)
	ctx.current_instruction = 0x881547F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88154850
	if (!ctx.cr6.gt) goto loc_88154850;
	// lwz r11,288(r31)
	ctx.current_instruction = 0x881547FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88154810
	if (ctx.cr6.eq) goto loc_88154810;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88154830
	if (!ctx.cr6.eq) goto loc_88154830;
loc_88154810:
	// lwz r11,3492(r31)
	ctx.current_instruction = 0x88154810;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154848
	if (ctx.cr6.eq) goto loc_88154848;
	// lwz r11,296(r31)
	ctx.current_instruction = 0x8815481C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88154848
	if (ctx.cr6.eq) goto loc_88154848;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x88154848
	if (ctx.cr6.eq) goto loc_88154848;
loc_88154830:
	// stw r18,3432(r31)
	ctx.current_instruction = 0x88154830;
	REX_STORE_U32(ctx.r31.u32 + 3432, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r18,15564(r31)
	ctx.current_instruction = 0x88154838;
	REX_STORE_U32(ctx.r31.u32 + 15564, ctx.r18.u32);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bl 0x8814fcc0
	ctx.lr = 0x88154844;
	sub_8814FCC0(ctx, base);
loc_88154844:
	// b 0x88155358
	goto loc_88155358;
loc_88154848:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r17,3432(r31)
	ctx.current_instruction = 0x8815484C;
	REX_STORE_U32(ctx.r31.u32 + 3432, ctx.r17.u32);
loc_88154850:
	// stw r18,15564(r31)
	ctx.current_instruction = 0x88154850;
	REX_STORE_U32(ctx.r31.u32 + 15564, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814fcc0
	ctx.lr = 0x8815485C;
	sub_8814FCC0(ctx, base);
loc_8815485C:
	// b 0x88155358
	goto loc_88155358;
loc_88154860:
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,15616(r31)
	ctx.current_instruction = 0x88154868;
	REX_STORE_U32(ctx.r31.u32 + 15616, ctx.r10.u32);
	// bne cr6,0x8815487c
	if (!ctx.cr6.eq) goto loc_8815487C;
	// lwz r11,15432(r31)
	ctx.current_instruction = 0x88154870;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154a14
	if (ctx.cr6.eq) goto loc_88154A14;
loc_8815487C:
	// lwz r11,15372(r31)
	ctx.current_instruction = 0x8815487C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15372);
	// lwz r10,15376(r31)
	ctx.current_instruction = 0x88154880;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// stw r17,220(r31)
	ctx.current_instruction = 0x88154888;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r17.u32);
	// srawi r8,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// stw r17,224(r31)
	ctx.current_instruction = 0x88154890;
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r17.u32);
	// srawi r3,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 4;
	// stw r9,208(r31)
	ctx.current_instruction = 0x88154898;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,88(r31)
	ctx.current_instruction = 0x881548A0;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,140(r31)
	ctx.current_instruction = 0x881548A8;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// stw r10,92(r31)
	ctx.current_instruction = 0x881548AC;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r11,204(r31)
	ctx.current_instruction = 0x881548B0;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r7,228(r31)
	ctx.current_instruction = 0x881548B4;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r7.u32);
	// stw r6,232(r31)
	ctx.current_instruction = 0x881548B8;
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r6.u32);
	// stw r8,136(r31)
	ctx.current_instruction = 0x881548BC;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// lwz r4,3392(r31)
	ctx.current_instruction = 0x881548C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3392);
	// bl 0x881aea88
	ctx.lr = 0x881548C8;
	sub_881AEA88(ctx, base);
loc_881548C8:
	// lwz r8,3392(r31)
	ctx.current_instruction = 0x881548C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3392);
	// lwz r5,204(r31)
	ctx.current_instruction = 0x881548CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r4,208(r31)
	ctx.current_instruction = 0x881548D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,136(r31)
	ctx.current_instruction = 0x881548DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,212(r31)
	ctx.current_instruction = 0x881548E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,216(r31)
	ctx.current_instruction = 0x881548EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// divwu r8,r10,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// lwz r29,88(r31)
	ctx.current_instruction = 0x881548F4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,3868(r31)
	ctx.current_instruction = 0x881548F8;
	REX_STORE_U32(ctx.r31.u32 + 3868, ctx.r3.u32);
	// stw r3,3904(r31)
	ctx.current_instruction = 0x881548FC;
	REX_STORE_U32(ctx.r31.u32 + 3904, ctx.r3.u32);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// stw r8,3872(r31)
	ctx.current_instruction = 0x88154904;
	REX_STORE_U32(ctx.r31.u32 + 3872, ctx.r8.u32);
	// stw r5,96(r31)
	ctx.current_instruction = 0x88154908;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// stw r4,108(r31)
	ctx.current_instruction = 0x8815490C;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// stw r11,104(r31)
	ctx.current_instruction = 0x88154910;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r6,116(r31)
	ctx.current_instruction = 0x88154914;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// stw r9,100(r31)
	ctx.current_instruction = 0x88154918;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stw r7,112(r31)
	ctx.current_instruction = 0x8815491C;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// bne cr6,0x88154934
	if (!ctx.cr6.eq) goto loc_88154934;
	// lwz r9,92(r31)
	ctx.current_instruction = 0x88154924;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// beq cr6,0x88154938
	if (ctx.cr6.eq) goto loc_88154938;
loc_88154934:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_88154938:
	// lwz r9,15372(r31)
	ctx.current_instruction = 0x88154938;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15372);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,15376(r31)
	ctx.current_instruction = 0x88154940;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
	// addi r6,r9,15
	ctx.r6.s64 = ctx.r9.s64 + 15;
	// stw r11,120(r31)
	ctx.current_instruction = 0x88154948;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r5,r8,15
	ctx.r5.s64 = ctx.r8.s64 + 15;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// stw r11,128(r31)
	ctx.current_instruction = 0x88154958;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r10,132(r31)
	ctx.current_instruction = 0x88154964;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r4,124(r31)
	ctx.current_instruction = 0x88154968;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
	// bne cr6,0x88154984
	if (!ctx.cr6.eq) goto loc_88154984;
	// lwz r11,140(r31)
	ctx.current_instruction = 0x88154970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88154988
	if (ctx.cr6.eq) goto loc_88154988;
loc_88154984:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_88154988:
	// stw r11,152(r31)
	ctx.current_instruction = 0x88154988;
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r19,15552(r31)
	ctx.current_instruction = 0x88154990;
	REX_STORE_U32(ctx.r31.u32 + 15552, ctx.r19.u32);
	// sth r20,15556(r31)
	ctx.current_instruction = 0x88154994;
	REX_STORE_U16(ctx.r31.u32 + 15556, ctx.r20.u16);
	// stw r30,15568(r31)
	ctx.current_instruction = 0x88154998;
	REX_STORE_U32(ctx.r31.u32 + 15568, ctx.r30.u32);
	// beq cr6,0x881549ac
	if (ctx.cr6.eq) goto loc_881549AC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x881549ac
	if (ctx.cr6.eq) goto loc_881549AC;
	// stw r17,15568(r31)
	ctx.current_instruction = 0x881549A8;
	REX_STORE_U32(ctx.r31.u32 + 15568, ctx.r17.u32);
loc_881549AC:
	// lwz r11,15568(r31)
	ctx.current_instruction = 0x881549AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15568);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881549d4
	if (ctx.cr6.eq) goto loc_881549D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x881549d4
	if (ctx.cr6.eq) goto loc_881549D4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x881549e4
	if (!ctx.cr6.eq) goto loc_881549E4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x881549e4
	goto loc_881549E4;
loc_881549D4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x881549e4
	if (!ctx.cr6.eq) goto loc_881549E4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_881549E4:
	// stw r11,15560(r31)
	ctx.current_instruction = 0x881549E4;
	REX_STORE_U32(ctx.r31.u32 + 15560, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881acf40
	ctx.lr = 0x881549F0;
	sub_881ACF40(ctx, base);
loc_881549F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815536c
	if (!ctx.cr6.eq) goto loc_8815536C;
	// stw r18,15548(r31)
	ctx.current_instruction = 0x881549F8;
	REX_STORE_U32(ctx.r31.u32 + 15548, ctx.r18.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881abd70
	ctx.lr = 0x88154A08;
	sub_881ABD70(ctx, base);
loc_88154A08:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815536c
	if (!ctx.cr6.eq) goto loc_8815536C;
	// b 0x88155358
	goto loc_88155358;
loc_88154A14:
	// stw r19,15552(r31)
	ctx.current_instruction = 0x88154A14;
	REX_STORE_U32(ctx.r31.u32 + 15552, ctx.r19.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// sth r20,15556(r31)
	ctx.current_instruction = 0x88154A1C;
	REX_STORE_U16(ctx.r31.u32 + 15556, ctx.r20.u16);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r30,15568(r31)
	ctx.current_instruction = 0x88154A24;
	REX_STORE_U32(ctx.r31.u32 + 15568, ctx.r30.u32);
	// bne cr6,0x88154a30
	if (!ctx.cr6.eq) goto loc_88154A30;
	// lwz r11,88(r31)
	ctx.current_instruction = 0x88154A2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
loc_88154A30:
	// stw r11,15560(r31)
	ctx.current_instruction = 0x88154A30;
	REX_STORE_U32(ctx.r31.u32 + 15560, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x88154a48
	if (ctx.cr6.eq) goto loc_88154A48;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x88154a48
	if (ctx.cr6.eq) goto loc_88154A48;
	// stw r17,15568(r31)
	ctx.current_instruction = 0x88154A44;
	REX_STORE_U32(ctx.r31.u32 + 15568, ctx.r17.u32);
loc_88154A48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881acf40
	ctx.lr = 0x88154A50;
	sub_881ACF40(ctx, base);
loc_88154A50:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815536c
	if (!ctx.cr6.eq) goto loc_8815536C;
	// stw r18,15548(r31)
	ctx.current_instruction = 0x88154A58;
	REX_STORE_U32(ctx.r31.u32 + 15548, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88150998
	ctx.lr = 0x88154A64;
	sub_88150998(ctx, base);
loc_88154A64:
	// lwz r11,3700(r31)
	ctx.current_instruction = 0x88154A64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3700);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x88154a90
	if (!ctx.cr6.eq) goto loc_88154A90;
	// lwz r11,288(r31)
	ctx.current_instruction = 0x88154A70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88154aac
	if (!ctx.cr6.eq) goto loc_88154AAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817d3e0
	ctx.lr = 0x88154A84;
	sub_8817D3E0(ctx, base);
loc_88154A84:
	// lwz r11,15612(r31)
	ctx.current_instruction = 0x88154A84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15612);
	// stw r11,3700(r31)
	ctx.current_instruction = 0x88154A88;
	REX_STORE_U32(ctx.r31.u32 + 3700, ctx.r11.u32);
	// b 0x88154aac
	goto loc_88154AAC;
loc_88154A90:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88154aa4
	if (ctx.cr6.lt) goto loc_88154AA4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x88154aa4
	if (ctx.cr6.gt) goto loc_88154AA4;
	// stw r11,15612(r31)
	ctx.current_instruction = 0x88154AA0;
	REX_STORE_U32(ctx.r31.u32 + 15612, ctx.r11.u32);
loc_88154AA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817d3e0
	ctx.lr = 0x88154AAC;
	sub_8817D3E0(ctx, base);
loc_88154AAC:
	// lwz r11,15572(r31)
	ctx.current_instruction = 0x88154AAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154afc
	if (ctx.cr6.eq) goto loc_88154AFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814cd70
	ctx.lr = 0x88154AC0;
	sub_8814CD70(ctx, base);
loc_88154AC0:
	// lwz r11,3980(r31)
	ctx.current_instruction = 0x88154AC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3980);
	// lwz r5,140(r31)
	ctx.current_instruction = 0x88154AC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x88154ae8
	if (ctx.cr6.eq) goto loc_88154AE8;
	// lwz r11,15924(r31)
	ctx.current_instruction = 0x88154AD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15924);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88154AE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88154AE4:
	// b 0x88154af0
	goto loc_88154AF0;
loc_88154AE8:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8817cfb8
	ctx.lr = 0x88154AF0;
	sub_8817CFB8(ctx, base);
loc_88154AF0:
	// stw r18,15628(r31)
	ctx.current_instruction = 0x88154AF0;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814cdd0
	ctx.lr = 0x88154AFC;
	sub_8814CDD0(ctx, base);
loc_88154AFC:
	// lwz r11,14856(r31)
	ctx.current_instruction = 0x88154AFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154b90
	if (ctx.cr6.eq) goto loc_88154B90;
	// lwz r11,288(r31)
	ctx.current_instruction = 0x88154B08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154b1c
	if (ctx.cr6.eq) goto loc_88154B1C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88154b64
	if (!ctx.cr6.eq) goto loc_88154B64;
loc_88154B1C:
	// lwz r10,14836(r31)
	ctx.current_instruction = 0x88154B1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88154b34
	if (!ctx.cr6.eq) goto loc_88154B34;
	// lwz r11,14860(r31)
	ctx.current_instruction = 0x88154B28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14860);
	// stw r11,14864(r31)
	ctx.current_instruction = 0x88154B2C;
	REX_STORE_U32(ctx.r31.u32 + 14864, ctx.r11.u32);
	// b 0x88154b64
	goto loc_88154B64;
loc_88154B34:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88154b64
	if (ctx.cr6.eq) goto loc_88154B64;
	// lwz r11,14864(r31)
	ctx.current_instruction = 0x88154B3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88154b5c
	if (!ctx.cr6.eq) goto loc_88154B5C;
	// lwz r11,14860(r31)
	ctx.current_instruction = 0x88154B48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14860);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88154b5c
	if (!ctx.cr6.eq) goto loc_88154B5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881664c0
	ctx.lr = 0x88154B5C;
	sub_881664C0(ctx, base);
loc_88154B5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881a8e90
	ctx.lr = 0x88154B64;
	sub_881A8E90(ctx, base);
loc_88154B64:
	// lwz r11,14860(r31)
	ctx.current_instruction = 0x88154B64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14860);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154b90
	if (ctx.cr6.eq) goto loc_88154B90;
	// lwz r11,15628(r31)
	ctx.current_instruction = 0x88154B70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88154b88
	if (!ctx.cr6.eq) goto loc_88154B88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817ce50
	ctx.lr = 0x88154B84;
	sub_8817CE50(ctx, base);
loc_88154B84:
	// stw r18,15628(r31)
	ctx.current_instruction = 0x88154B84;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r18.u32);
loc_88154B88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88197308
	ctx.lr = 0x88154B90;
	sub_88197308(ctx, base);
loc_88154B90:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88154B90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88154bc0
	if (!ctx.cr6.eq) goto loc_88154BC0;
	// lwz r11,21916(r31)
	ctx.current_instruction = 0x88154B9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88154bb4
	if (!ctx.cr6.eq) goto loc_88154BB4;
	// lwz r11,21920(r31)
	ctx.current_instruction = 0x88154BA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154bc0
	if (ctx.cr6.eq) goto loc_88154BC0;
loc_88154BB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881a93a0
	ctx.lr = 0x88154BBC;
	sub_881A93A0(ctx, base);
loc_88154BBC:
	// stw r18,15628(r31)
	ctx.current_instruction = 0x88154BBC;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r18.u32);
loc_88154BC0:
	// lwz r11,14888(r31)
	ctx.current_instruction = 0x88154BC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154eb8
	if (ctx.cr6.eq) goto loc_88154EB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b07b8
	ctx.lr = 0x88154BD8;
	sub_881B07B8(ctx, base);
loc_88154BD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b31b0
	ctx.lr = 0x88154BE0;
	sub_881B31B0(ctx, base);
loc_88154BE0:
	// lwz r11,15628(r31)
	ctx.current_instruction = 0x88154BE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,14888(r31)
	ctx.current_instruction = 0x88154BE8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// lwz r28,14892(r31)
	ctx.current_instruction = 0x88154BEC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// lwz r11,15964(r31)
	ctx.current_instruction = 0x88154BF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15964);
	// stw r17,14888(r31)
	ctx.current_instruction = 0x88154BF4;
	REX_STORE_U32(ctx.r31.u32 + 14888, ctx.r17.u32);
	// stw r29,14892(r31)
	ctx.current_instruction = 0x88154BF8;
	REX_STORE_U32(ctx.r31.u32 + 14892, ctx.r29.u32);
	// beq cr6,0x88154d58
	if (ctx.cr6.eq) goto loc_88154D58;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154cf8
	if (ctx.cr6.eq) goto loc_88154CF8;
	// lwz r11,20416(r31)
	ctx.current_instruction = 0x88154C08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88154cf8
	if (!ctx.cr6.eq) goto loc_88154CF8;
	// lwz r10,3760(r31)
	ctx.current_instruction = 0x88154C14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r9,592(r10)
	ctx.current_instruction = 0x88154C1C;
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
	ctx.current_instruction = 0x88154C30;
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// stw r8,48(r11)
	ctx.current_instruction = 0x88154C34;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3760(r31)
	ctx.current_instruction = 0x88154C38;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// stw r6,52(r11)
	ctx.current_instruction = 0x88154C3C;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,14892(r31)
	ctx.current_instruction = 0x88154C40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r3,14964(r4)
	ctx.current_instruction = 0x88154C4C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14964);
	// stw r3,72(r11)
	ctx.current_instruction = 0x88154C50;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r3.u32);
	// lwz r10,14892(r31)
	ctx.current_instruction = 0x88154C54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// mulli r10,r10,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r8,14968(r9)
	ctx.current_instruction = 0x88154C60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14968);
	// stw r8,76(r11)
	ctx.current_instruction = 0x88154C64;
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// lwz r7,220(r31)
	ctx.current_instruction = 0x88154C68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// stw r7,80(r11)
	ctx.current_instruction = 0x88154C6C;
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// lwz r6,224(r31)
	ctx.current_instruction = 0x88154C70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// stw r6,84(r11)
	ctx.current_instruction = 0x88154C74;
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// lwz r5,14888(r31)
	ctx.current_instruction = 0x88154C78;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// stw r5,88(r11)
	ctx.current_instruction = 0x88154C7C;
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r5.u32);
	// lwz r4,14892(r31)
	ctx.current_instruction = 0x88154C80;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// stw r4,92(r11)
	ctx.current_instruction = 0x88154C84;
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// lwz r3,14892(r31)
	ctx.current_instruction = 0x88154C88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// mulli r10,r3,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(84));
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,14948(r10)
	ctx.current_instruction = 0x88154C94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 14948);
	// stw r9,96(r11)
	ctx.current_instruction = 0x88154C98;
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r10,14892(r31)
	ctx.current_instruction = 0x88154C9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// addi r8,r10,178
	ctx.r8.s64 = ctx.r10.s64 + 178;
	// mulli r7,r8,84
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(84));
	// lwzx r6,r7,r31
	ctx.current_instruction = 0x88154CA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r6,100(r11)
	ctx.current_instruction = 0x88154CAC;
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// lwz r5,14892(r31)
	ctx.current_instruction = 0x88154CB0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r3,14936(r4)
	ctx.current_instruction = 0x88154CBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14936);
	// stw r3,112(r11)
	ctx.current_instruction = 0x88154CC0;
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r3.u32);
	// lwz r10,204(r31)
	ctx.current_instruction = 0x88154CC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// stw r10,104(r11)
	ctx.current_instruction = 0x88154CC8;
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r9,208(r31)
	ctx.current_instruction = 0x88154CCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// stw r9,108(r11)
	ctx.current_instruction = 0x88154CD0;
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// lwz r8,180(r31)
	ctx.current_instruction = 0x88154CD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// stw r8,60(r11)
	ctx.current_instruction = 0x88154CD8;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwz r7,192(r31)
	ctx.current_instruction = 0x88154CDC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// stw r7,68(r11)
	ctx.current_instruction = 0x88154CE0;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lwz r6,188(r31)
	ctx.current_instruction = 0x88154CE4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// stw r6,56(r11)
	ctx.current_instruction = 0x88154CE8;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r5,200(r31)
	ctx.current_instruction = 0x88154CEC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// stw r5,64(r11)
	ctx.current_instruction = 0x88154CF0;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// b 0x88154eac
	goto loc_88154EAC;
loc_88154CF8:
	// lwz r11,14892(r31)
	ctx.current_instruction = 0x88154CF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,224(r31)
	ctx.current_instruction = 0x88154D00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// lwz r9,3808(r31)
	ctx.current_instruction = 0x88154D08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3808);
	// lwz r8,3804(r31)
	ctx.current_instruction = 0x88154D0C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3804);
	// lwz r7,3800(r31)
	ctx.current_instruction = 0x88154D10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3800);
	// lwz r30,220(r31)
	ctx.current_instruction = 0x88154D14;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,3840(r31)
	ctx.current_instruction = 0x88154D18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// lwz r5,3836(r31)
	ctx.current_instruction = 0x88154D1C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// lwz r4,3832(r31)
	ctx.current_instruction = 0x88154D20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lwz r10,14968(r11)
	ctx.current_instruction = 0x88154D34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14968);
	// lwz r11,14964(r11)
	ctx.current_instruction = 0x88154D38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14964);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x881b1680
	ctx.lr = 0x88154D4C;
	sub_881B1680(ctx, base);
loc_88154D4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881662e8
	ctx.lr = 0x88154D54;
	sub_881662E8(ctx, base);
loc_88154D54:
	// b 0x88154eac
	goto loc_88154EAC;
loc_88154D58:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154e58
	if (ctx.cr6.eq) goto loc_88154E58;
	// lwz r11,20416(r31)
	ctx.current_instruction = 0x88154D60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88154e58
	if (!ctx.cr6.eq) goto loc_88154E58;
	// lwz r11,3760(r31)
	ctx.current_instruction = 0x88154D6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r17,592(r11)
	ctx.current_instruction = 0x88154D74;
	REX_STORE_U32(ctx.r11.u32 + 592, ctx.r17.u32);
	// lwz r10,3760(r31)
	ctx.current_instruction = 0x88154D78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// lwz r9,592(r10)
	ctx.current_instruction = 0x88154D7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 592);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,592(r10)
	ctx.current_instruction = 0x88154D84;
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r8,48(r11)
	ctx.current_instruction = 0x88154D94;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3744(r31)
	ctx.current_instruction = 0x88154D98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// stw r6,52(r11)
	ctx.current_instruction = 0x88154D9C;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,14892(r31)
	ctx.current_instruction = 0x88154DA0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r3,14964(r4)
	ctx.current_instruction = 0x88154DAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14964);
	// stw r3,72(r11)
	ctx.current_instruction = 0x88154DB0;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r3.u32);
	// lwz r10,14892(r31)
	ctx.current_instruction = 0x88154DB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// mulli r10,r10,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r8,14968(r9)
	ctx.current_instruction = 0x88154DC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14968);
	// stw r8,76(r11)
	ctx.current_instruction = 0x88154DC4;
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// lwz r7,220(r31)
	ctx.current_instruction = 0x88154DC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// stw r7,80(r11)
	ctx.current_instruction = 0x88154DCC;
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// lwz r6,224(r31)
	ctx.current_instruction = 0x88154DD0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// stw r6,84(r11)
	ctx.current_instruction = 0x88154DD4;
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// lwz r5,14888(r31)
	ctx.current_instruction = 0x88154DD8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// stw r5,88(r11)
	ctx.current_instruction = 0x88154DDC;
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r5.u32);
	// lwz r4,14892(r31)
	ctx.current_instruction = 0x88154DE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// stw r4,92(r11)
	ctx.current_instruction = 0x88154DE4;
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// lwz r3,14892(r31)
	ctx.current_instruction = 0x88154DE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// mulli r10,r3,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(84));
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,14948(r10)
	ctx.current_instruction = 0x88154DF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 14948);
	// stw r9,96(r11)
	ctx.current_instruction = 0x88154DF8;
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r10,14892(r31)
	ctx.current_instruction = 0x88154DFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// addi r8,r10,178
	ctx.r8.s64 = ctx.r10.s64 + 178;
	// mulli r7,r8,84
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(84));
	// lwzx r6,r7,r31
	ctx.current_instruction = 0x88154E08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r6,100(r11)
	ctx.current_instruction = 0x88154E0C;
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// lwz r5,14892(r31)
	ctx.current_instruction = 0x88154E10;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r3,14936(r4)
	ctx.current_instruction = 0x88154E1C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14936);
	// stw r3,112(r11)
	ctx.current_instruction = 0x88154E20;
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r3.u32);
	// lwz r10,204(r31)
	ctx.current_instruction = 0x88154E24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// stw r10,104(r11)
	ctx.current_instruction = 0x88154E28;
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r9,208(r31)
	ctx.current_instruction = 0x88154E2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// stw r9,108(r11)
	ctx.current_instruction = 0x88154E30;
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// lwz r8,180(r31)
	ctx.current_instruction = 0x88154E34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// stw r8,60(r11)
	ctx.current_instruction = 0x88154E38;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwz r7,192(r31)
	ctx.current_instruction = 0x88154E3C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// stw r7,68(r11)
	ctx.current_instruction = 0x88154E40;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lwz r6,188(r31)
	ctx.current_instruction = 0x88154E44;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// stw r6,56(r11)
	ctx.current_instruction = 0x88154E48;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r5,200(r31)
	ctx.current_instruction = 0x88154E4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// stw r5,64(r11)
	ctx.current_instruction = 0x88154E50;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// b 0x88154eac
	goto loc_88154EAC;
loc_88154E58:
	// lwz r11,14892(r31)
	ctx.current_instruction = 0x88154E58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14892);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,224(r31)
	ctx.current_instruction = 0x88154E60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// lwz r9,3840(r31)
	ctx.current_instruction = 0x88154E68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// lwz r8,3836(r31)
	ctx.current_instruction = 0x88154E6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// lwz r7,3832(r31)
	ctx.current_instruction = 0x88154E70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// lwz r30,220(r31)
	ctx.current_instruction = 0x88154E74;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,3784(r31)
	ctx.current_instruction = 0x88154E78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r5,3780(r31)
	ctx.current_instruction = 0x88154E7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r4,3776(r31)
	ctx.current_instruction = 0x88154E80;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lwz r10,14968(r11)
	ctx.current_instruction = 0x88154E94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14968);
	// lwz r11,14964(r11)
	ctx.current_instruction = 0x88154E98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14964);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x881b1680
	ctx.lr = 0x88154EAC;
	sub_881B1680(ctx, base);
loc_88154EAC:
	// stw r28,14892(r31)
	ctx.current_instruction = 0x88154EAC;
	REX_STORE_U32(ctx.r31.u32 + 14892, ctx.r28.u32);
	// stw r29,14888(r31)
	ctx.current_instruction = 0x88154EB0;
	REX_STORE_U32(ctx.r31.u32 + 14888, ctx.r29.u32);
	// stw r18,15628(r31)
	ctx.current_instruction = 0x88154EB4;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r18.u32);
loc_88154EB8:
	// lwz r11,14836(r31)
	ctx.current_instruction = 0x88154EB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14836);
	// stw r17,22136(r31)
	ctx.current_instruction = 0x88154EBC;
	REX_STORE_U32(ctx.r31.u32 + 22136, ctx.r17.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88154f0c
	if (!ctx.cr6.gt) goto loc_88154F0C;
	// lwz r11,288(r31)
	ctx.current_instruction = 0x88154EC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88154edc
	if (ctx.cr6.eq) goto loc_88154EDC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88154efc
	if (!ctx.cr6.eq) goto loc_88154EFC;
loc_88154EDC:
	// lwz r11,3492(r31)
	ctx.current_instruction = 0x88154EDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88154f04
	if (ctx.cr6.eq) goto loc_88154F04;
	// lwz r11,296(r31)
	ctx.current_instruction = 0x88154EE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88154f04
	if (ctx.cr6.eq) goto loc_88154F04;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x88154f04
	if (ctx.cr6.eq) goto loc_88154F04;
loc_88154EFC:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x88154f08
	goto loc_88154F08;
loc_88154F04:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_88154F08:
	// stw r11,3432(r31)
	ctx.current_instruction = 0x88154F08;
	REX_STORE_U32(ctx.r31.u32 + 3432, ctx.r11.u32);
loc_88154F0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814fcc0
	ctx.lr = 0x88154F14;
	sub_8814FCC0(ctx, base);
loc_88154F14:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88150238
	ctx.lr = 0x88154F24;
	sub_88150238(ctx, base);
loc_88154F24:
	// lwz r24,15536(r31)
	ctx.current_instruction = 0x88154F24;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r24,7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 7, ctx.xer);
	// beq cr6,0x88154f38
	if (ctx.cr6.eq) goto loc_88154F38;
	// cmpwi cr6,r24,6
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 6, ctx.xer);
	// bne cr6,0x88155340
	if (!ctx.cr6.eq) goto loc_88155340;
loc_88154F38:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x88154F38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88155340
	if (!ctx.cr6.eq) goto loc_88155340;
	// lwz r11,3772(r31)
	ctx.current_instruction = 0x88154F44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3772);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r10,21888(r31)
	ctx.current_instruction = 0x88154F4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21888);
	// stw r17,128(r1)
	ctx.current_instruction = 0x88154F50;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r22,4(r11)
	ctx.current_instruction = 0x88154F58;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r21,8(r11)
	ctx.current_instruction = 0x88154F5C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r23,0(r11)
	ctx.current_instruction = 0x88154F60;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x88154f8c
	if (!ctx.cr6.eq) goto loc_88154F8C;
	// lwz r11,14836(r31)
	ctx.current_instruction = 0x88154F68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88154f8c
	if (!ctx.cr6.gt) goto loc_88154F8C;
	// ld r11,3632(r31)
	ctx.current_instruction = 0x88154F74;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x88154f8c
	if (!ctx.cr6.gt) goto loc_88154F8C;
	// lwz r10,22084(r31)
	ctx.current_instruction = 0x88154F80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22084);
	// lwz r25,22088(r31)
	ctx.current_instruction = 0x88154F84;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 22088);
	// b 0x88154f94
	goto loc_88154F94;
loc_88154F8C:
	// lwz r10,156(r31)
	ctx.current_instruction = 0x88154F8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r25,160(r31)
	ctx.current_instruction = 0x88154F90;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
loc_88154F94:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bne cr6,0x88154fa4
	if (!ctx.cr6.eq) goto loc_88154FA4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_88154FA4:
	// lwz r9,15364(r31)
	ctx.current_instruction = 0x88154FA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15364);
	// stw r8,15560(r31)
	ctx.current_instruction = 0x88154FA8;
	REX_STORE_U32(ctx.r31.u32 + 15560, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88154fd8
	if (!ctx.cr6.eq) goto loc_88154FD8;
	// addi r11,r10,15
	ctx.r11.s64 = ctx.r10.s64 + 15;
	// addi r7,r25,15
	ctx.r7.s64 = ctx.r25.s64 + 15;
	// srawi r6,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 4;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r3,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 4;
	// rlwinm r30,r4,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x88154fe0
	goto loc_88154FE0;
loc_88154FD8:
	// lwz r30,132(r1)
	ctx.current_instruction = 0x88154FD8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r29,132(r1)
	ctx.current_instruction = 0x88154FDC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_88154FE0:
	// lwz r4,3980(r31)
	ctx.current_instruction = 0x88154FE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3980);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88155010
	if (ctx.cr6.eq) goto loc_88155010;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// addi r28,r10,64
	ctx.r28.s64 = ctx.r10.s64 + 64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x88155024
	goto loc_88155024;
loc_88155010:
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,32
	ctx.r7.s64 = 32;
loc_88155024:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88155038
	if (!ctx.cr6.eq) goto loc_88155038;
	// lwz r11,15432(r31)
	ctx.current_instruction = 0x8815502C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88155044
	if (ctx.cr6.eq) goto loc_88155044;
loc_88155038:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
loc_88155044:
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// bne cr6,0x881550bc
	if (!ctx.cr6.eq) goto loc_881550BC;
	// clrlwi r11,r20,16
	ctx.r11.u64 = ctx.r20.u32 & 0xFFFF;
	// li r9,31
	ctx.r9.s64 = 31;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x88155074
	if (!ctx.cr6.eq) goto loc_88155074;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r9,240(r1)
	ctx.current_instruction = 0x88155060;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// li r15,2016
	ctx.r15.s64 = 2016;
	// ori r3,r3,63488
	ctx.r3.u64 = ctx.r3.u64 | 63488;
	// stw r15,236(r1)
	ctx.current_instruction = 0x8815506C;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r15.u32);
	// stw r3,232(r1)
	ctx.current_instruction = 0x88155070;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
loc_88155074:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x88155094
	if (!ctx.cr6.eq) goto loc_88155094;
	// stw r9,240(r1)
	ctx.current_instruction = 0x8815507C;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// li r11,31744
	ctx.r11.s64 = 31744;
	// li r9,992
	ctx.r9.s64 = 992;
	// stw r11,232(r1)
	ctx.current_instruction = 0x88155088;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// li r20,16
	ctx.r20.s64 = 16;
	// stw r9,236(r1)
	ctx.current_instruction = 0x88155090;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
loc_88155094:
	// clrlwi r11,r20,16
	ctx.r11.u64 = ctx.r20.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x881550bc
	if (!ctx.cr6.eq) goto loc_881550BC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// ori r3,r11,65280
	ctx.r3.u64 = ctx.r11.u64 | 65280;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,232(r1)
	ctx.current_instruction = 0x881550B0;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// stw r3,236(r1)
	ctx.current_instruction = 0x881550B4;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// stw r11,240(r1)
	ctx.current_instruction = 0x881550B8;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
loc_881550BC:
	// lwz r11,22040(r31)
	ctx.current_instruction = 0x881550BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22040);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r8,196(r1)
	ctx.current_instruction = 0x881550C4;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,192(r1)
	ctx.current_instruction = 0x881550CC;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x881550dc
	if (!ctx.cr6.eq) goto loc_881550DC;
	// lwz r11,22120(r31)
	ctx.current_instruction = 0x881550D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22120);
loc_881550DC:
	// clrlwi r3,r20,16
	ctx.r3.u64 = ctx.r20.u32 & 0xFFFF;
	// lwz r15,15568(r31)
	ctx.current_instruction = 0x881550E0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r31.u32 + 15568);
	// sth r20,206(r1)
	ctx.current_instruction = 0x881550E4;
	REX_STORE_U16(ctx.r1.u32 + 206, ctx.r20.u16);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// stw r19,208(r1)
	ctx.current_instruction = 0x881550EC;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r19.u32);
	// sth r18,204(r1)
	ctx.current_instruction = 0x881550F0;
	REX_STORE_U16(ctx.r1.u32 + 204, ctx.r18.u16);
	// stw r17,216(r1)
	ctx.current_instruction = 0x881550F4;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r17.u32);
	// stw r17,220(r1)
	ctx.current_instruction = 0x881550F8;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r17.u32);
	// stw r11,200(r1)
	ctx.current_instruction = 0x881550FC;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r17,224(r1)
	ctx.current_instruction = 0x88155100;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r17.u32);
	// stw r17,228(r1)
	ctx.current_instruction = 0x88155104;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r17.u32);
	// mullw r3,r8,r25
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// rlwinm r8,r3,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpwi cr6,r15,2
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 2, ctx.xer);
	// stw r8,212(r1)
	ctx.current_instruction = 0x88155114;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// bne cr6,0x88155124
	if (!ctx.cr6.eq) goto loc_88155124;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,200(r1)
	ctx.current_instruction = 0x88155120;
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
loc_88155124:
	// stw r9,144(r1)
	ctx.current_instruction = 0x88155124;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r3,21656(r31)
	ctx.current_instruction = 0x8815512C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21656);
	// add r11,r30,r5
	ctx.r11.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r9,r29,r5
	ctx.r9.u64 = ctx.r29.u64 + ctx.r5.u64;
	// sth r18,156(r1)
	ctx.current_instruction = 0x88155138;
	REX_STORE_U16(ctx.r1.u32 + 156, ctx.r18.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r8,158(r1)
	ctx.current_instruction = 0x88155140;
	REX_STORE_U16(ctx.r1.u32 + 158, ctx.r8.u16);
	// stw r11,148(r1)
	ctx.current_instruction = 0x88155144;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r9,152(r1)
	ctx.current_instruction = 0x88155148;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// bne cr6,0x88155204
	if (!ctx.cr6.eq) goto loc_88155204;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88155168
	if (ctx.cr6.eq) goto loc_88155168;
	// lis r8,12593
	ctx.r8.s64 = 825294848;
	// ori r5,r8,13392
	ctx.r5.u64 = ctx.r8.u64 | 13392;
	// stw r5,160(r1)
	ctx.current_instruction = 0x88155160;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// b 0x88155174
	goto loc_88155174;
loc_88155168:
	// lis r8,-30680
	ctx.r8.s64 = -2010644480;
	// lwz r8,8080(r8)
	ctx.current_instruction = 0x8815516C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8080);
	// stw r8,160(r1)
	ctx.current_instruction = 0x88155170;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
loc_88155174:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r24,7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 7, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,164(r1)
	ctx.current_instruction = 0x8815518C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// bne cr6,0x881551b8
	if (!ctx.cr6.eq) goto loc_881551B8;
	// ld r11,3632(r31)
	ctx.current_instruction = 0x88155194;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x881551a8
	if (!ctx.cr6.gt) goto loc_881551A8;
	// lwz r11,21680(r31)
	ctx.current_instruction = 0x881551A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21680);
	// b 0x881551ac
	goto loc_881551AC;
loc_881551A8:
	// lwz r11,21676(r31)
	ctx.current_instruction = 0x881551A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21676);
loc_881551AC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x881551bc
	if (ctx.cr6.eq) goto loc_881551BC;
loc_881551B8:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_881551BC:
	// stw r26,116(r1)
	ctx.current_instruction = 0x881551BC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,100(r1)
	ctx.current_instruction = 0x881551C4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r27,108(r1)
	ctx.current_instruction = 0x881551D0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,92(r1)
	ctx.current_instruction = 0x881551D8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r25,84(r1)
	ctx.current_instruction = 0x881551E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x881aac20
	ctx.lr = 0x881551E8;
	sub_881AAC20(ctx, base);
loc_881551E8:
	// lwz r11,128(r1)
	ctx.current_instruction = 0x881551E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r3,21656(r31)
	ctx.current_instruction = 0x881551EC;
	REX_STORE_U32(ctx.r31.u32 + 21656, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881552a0
	if (ctx.cr6.eq) goto loc_881552A0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_88155204:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88155218
	if (ctx.cr6.eq) goto loc_88155218;
	// lis r8,12593
	ctx.r8.s64 = 825294848;
	// ori r5,r8,13392
	ctx.r5.u64 = ctx.r8.u64 | 13392;
	// b 0x88155220
	goto loc_88155220;
loc_88155218:
	// lis r8,12338
	ctx.r8.s64 = 808583168;
	// ori r5,r8,13385
	ctx.r5.u64 = ctx.r8.u64 | 13385;
loc_88155220:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r5,160(r1)
	ctx.current_instruction = 0x88155224;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r24,7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 7, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,164(r1)
	ctx.current_instruction = 0x8815523C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// bne cr6,0x88155268
	if (!ctx.cr6.eq) goto loc_88155268;
	// ld r11,3632(r31)
	ctx.current_instruction = 0x88155244;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x88155258
	if (!ctx.cr6.gt) goto loc_88155258;
	// lwz r11,21680(r31)
	ctx.current_instruction = 0x88155250;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21680);
	// b 0x8815525c
	goto loc_8815525C;
loc_88155258:
	// lwz r11,21676(r31)
	ctx.current_instruction = 0x88155258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21676);
loc_8815525C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x8815526c
	if (ctx.cr6.eq) goto loc_8815526C;
loc_88155268:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_8815526C:
	// stw r25,84(r1)
	ctx.current_instruction = 0x8815526C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r26,116(r1)
	ctx.current_instruction = 0x88155274;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,100(r1)
	ctx.current_instruction = 0x8815527C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r11,92(r1)
	ctx.current_instruction = 0x88155284;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r27,108(r1)
	ctx.current_instruction = 0x8815528C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// bl 0x881aa7a8
	ctx.lr = 0x88155294;
	sub_881AA7A8(ctx, base);
loc_88155294:
	// stw r3,128(r1)
	ctx.current_instruction = 0x88155294;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815536c
	if (!ctx.cr6.eq) goto loc_8815536C;
loc_881552A0:
	// lwz r8,21656(r31)
	ctx.current_instruction = 0x881552A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21656);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8815457c
	if (ctx.cr6.eq) goto loc_8815457C;
	// lwz r11,3980(r31)
	ctx.current_instruction = 0x881552AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881552dc
	if (ctx.cr6.eq) goto loc_881552DC;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// addi r7,r26,1
	ctx.r7.s64 = ctx.r26.s64 + 1;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 + ctx.r23.u64;
	// add r22,r10,r22
	ctx.r22.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_881552DC:
	// lwz r11,22144(r31)
	ctx.current_instruction = 0x881552DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22144);
	// stw r11,52(r8)
	ctx.current_instruction = 0x881552E0;
	REX_STORE_U32(ctx.r8.u32 + 52, ctx.r11.u32);
	// lwz r10,22144(r31)
	ctx.current_instruction = 0x881552E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22144);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88155320
	if (!ctx.cr6.eq) goto loc_88155320;
	// lwz r11,22148(r31)
	ctx.current_instruction = 0x881552F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22148);
	// stw r11,40(r8)
	ctx.current_instruction = 0x881552F4;
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// lwz r10,22152(r31)
	ctx.current_instruction = 0x881552F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22152);
	// stw r10,44(r8)
	ctx.current_instruction = 0x881552FC;
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r10.u32);
	// lwz r9,22156(r31)
	ctx.current_instruction = 0x88155300;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 22156);
	// stw r9,48(r8)
	ctx.current_instruction = 0x88155304;
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r9.u32);
	// lwz r7,22160(r31)
	ctx.current_instruction = 0x88155308;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 22160);
	// stw r7,14624(r8)
	ctx.current_instruction = 0x8815530C;
	REX_STORE_U32(ctx.r8.u32 + 14624, ctx.r7.u32);
	// lwz r6,22164(r31)
	ctx.current_instruction = 0x88155310;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 22164);
	// stw r6,14628(r8)
	ctx.current_instruction = 0x88155314;
	REX_STORE_U32(ctx.r8.u32 + 14628, ctx.r6.u32);
	// lwz r5,22168(r31)
	ctx.current_instruction = 0x88155318;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 22168);
	// stw r5,14632(r8)
	ctx.current_instruction = 0x8815531C;
	REX_STORE_U32(ctx.r8.u32 + 14632, ctx.r5.u32);
loc_88155320:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r3,21656(r31)
	ctx.current_instruction = 0x88155324;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21656);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x881aa778
	ctx.lr = 0x88155338;
	sub_881AA778(ctx, base);
loc_88155338:
	// stw r17,21888(r31)
	ctx.current_instruction = 0x88155338;
	REX_STORE_U32(ctx.r31.u32 + 21888, ctx.r17.u32);
	// b 0x8815535c
	goto loc_8815535C;
loc_88155340:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881abd70
	ctx.lr = 0x8815534C;
	sub_881ABD70(ctx, base);
loc_8815534C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815536c
	if (!ctx.cr6.eq) goto loc_8815536C;
	// stw r17,21888(r31)
	ctx.current_instruction = 0x88155354;
	REX_STORE_U32(ctx.r31.u32 + 21888, ctx.r17.u32);
loc_88155358:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8815535C:
	// lhz r11,3740(r31)
	ctx.current_instruction = 0x8815535C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 3740);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,3740(r31)
	ctx.current_instruction = 0x88155368;
	REX_STORE_U16(ctx.r31.u32 + 3740, ctx.r10.u16);
loc_8815536C:
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88183608) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88183608;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88183608) {
			switch (rex_dispatch_address) {
				case 0x88183610:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88183608;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88183610: goto loc_88183610;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88183610;
	__savegprlr_20(ctx, base);
loc_88183610:
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818362C:
	// lhz r7,4(r10)
	ctx.current_instruction = 0x8818362C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r5,6(r10)
	ctx.current_instruction = 0x88183630;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r9,2(r10)
	ctx.current_instruction = 0x88183634;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// lhzu r6,8(r10)
	ctx.current_instruction = 0x8818363C;
	ea = 8 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mulli r5,r4,1892
	ctx.r5.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1892));
	// mulli r6,r3,784
	ctx.r6.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(784));
	// subf r29,r7,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mulli r3,r3,1892
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1892));
	// mulli r4,r4,784
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(784));
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r7,r30,1448
	ctx.r7.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1448));
	// subf r5,r3,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mulli r6,r29,1448
	ctx.r6.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1448));
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
	// srawi r4,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 7;
	// srawi r3,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 7;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// sth r9,0(r11)
	ctx.current_instruction = 0x881836B0;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// sth r7,2(r11)
	ctx.current_instruction = 0x881836B8;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// sth r6,4(r11)
	ctx.current_instruction = 0x881836BC;
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// sth r5,6(r11)
	ctx.current_instruction = 0x881836C0;
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8818362c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818362C;
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
	// subf r26,r11,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r25,r11,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r24,r11,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r23,r11,r7
	ctx.r23.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r22,r11,r8
	ctx.r22.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_8818370C:
	// lhz r8,0(r11)
	ctx.current_instruction = 0x8818370C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzx r6,r22,r11
	ctx.current_instruction = 0x88183710;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r5,r24,r11
	ctx.current_instruction = 0x88183718;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r11.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r4,r25,r11
	ctx.current_instruction = 0x88183720;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzx r3,r23,r11
	ctx.current_instruction = 0x88183728;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r11.u32);
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhzx r31,r26,r11
	ctx.current_instruction = 0x88183730;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhzx r30,r10,r11
	ctx.current_instruction = 0x88183738;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// mulli r8,r8,565
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(565));
	// lhzx r29,r9,r11
	ctx.current_instruction = 0x88183740;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// add r28,r4,r5
	ctx.r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r27,r6,3406
	ctx.r27.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r7,2276
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(2276));
	// mulli r6,r28,2408
	ctx.r6.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(2408));
	// subf r28,r27,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r27.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// mulli r6,r5,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(799));
	// mulli r5,r4,4017
	ctx.r5.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(4017));
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// subf r4,r6,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// srawi r6,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r28.s32 >> 3;
	// srawi r5,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 3;
	// srawi r4,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// mulli r8,r27,1108
	ctx.r8.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(1108));
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// mulli r21,r3,3784
	ctx.r21.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(3784));
	// mulli r3,r31,1568
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(1568));
	// subf r27,r4,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r28,r5,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r5.u64;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// subf r21,r21,r8
	ctx.r21.u64 = ctx.r8.u64 - ctx.r21.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r20,r27,r28
	ctx.r20.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r30,r31,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r21,3
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r21.s32 >> 3;
	// srawi r31,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 3;
	// subf r28,r27,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r27.u64;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mulli r21,r20,181
	ctx.r21.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(181));
	// subf r29,r29,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r29.u64;
	// subf r30,r31,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r31.u64;
	// mulli r28,r28,181
	ctx.r28.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(181));
	// addi r27,r21,128
	ctx.r27.s64 = ctx.r21.s64 + 128;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// srawi r4,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 8;
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r31,r3,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r3.u64;
	// srawi r3,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r28.s32 >> 8;
	// srawi r28,r27,14
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FFF) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 14;
	// add r29,r5,r4
	ctx.r29.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// sthx r28,r10,r11
	ctx.current_instruction = 0x8818381C;
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u16);
	// srawi r29,r29,14
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 14;
	// add r28,r30,r6
	ctx.r28.u64 = ctx.r30.u64 + ctx.r6.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r6.u64;
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// srawi r27,r27,14
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 14;
	// srawi r31,r28,14
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFF) != 0);
	ctx.r31.s64 = ctx.r28.s32 >> 14;
	// sth r29,0(r11)
	ctx.current_instruction = 0x8818383C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// srawi r4,r6,14
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 14;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r7,r3,14
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 14;
	// srawi r5,r5,14
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 14;
	// sthx r27,r26,r11
	ctx.current_instruction = 0x88183854;
	REX_STORE_U16(ctx.r26.u32 + ctx.r11.u32, ctx.r27.u16);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// sthx r31,r25,r11
	ctx.current_instruction = 0x8818385C;
	REX_STORE_U16(ctx.r25.u32 + ctx.r11.u32, ctx.r31.u16);
	// srawi r4,r8,14
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 14;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// sthx r6,r9,r11
	ctx.current_instruction = 0x88183868;
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u16);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sthx r3,r24,r11
	ctx.current_instruction = 0x88183874;
	REX_STORE_U16(ctx.r24.u32 + ctx.r11.u32, ctx.r3.u16);
	// sthx r8,r23,r11
	ctx.current_instruction = 0x88183878;
	REX_STORE_U16(ctx.r23.u32 + ctx.r11.u32, ctx.r8.u16);
	// sthx r7,r22,r11
	ctx.current_instruction = 0x8818387C;
	REX_STORE_U16(ctx.r22.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8818370c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818370C;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8818A038) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8818A038);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8818A038;
	ctx.current_instruction = 0x8818A038;
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A048:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x8818A048;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ctx.current_instruction = 0x8818A04C;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8818a048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A048;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A06C:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x8818A06C;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x8818A070;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a06c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A06C;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A090:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x8818A090;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x8818A094;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A090;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A0B4:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x8818A0B4;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x8818A0B8;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a0b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A0B4;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A0D8:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x8818A0D8;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x8818A0DC;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a0d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A0D8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A0FC:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x8818A0FC;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x8818A100;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a0fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A0FC;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A120:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x8818A120;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x8818A124;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8818a120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A120;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8818A144:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x8818A144;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ctx.current_instruction = 0x8818A148;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8818a144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8818A144;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88190148) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88190148;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88190148) {
			switch (rex_dispatch_address) {
				case 0x88190150:
				case 0x88190168:
				case 0x881901C4:
				case 0x881901F8:
				case 0x88190288:
				case 0x881902D0:
				case 0x88190338:
				case 0x88190380:
				case 0x881903D8:
				case 0x8819041C:
				case 0x88190480:
				case 0x88190500:
				case 0x88190548:
				case 0x881905A0:
				case 0x881905D4:
				case 0x881905F0:
				case 0x8819065C:
				case 0x881906A4:
				case 0x8819070C:
				case 0x88190754:
				case 0x881907AC:
				case 0x881907F0:
				case 0x88190854:
				case 0x88190888:
				case 0x8819090C:
				case 0x88190954:
				case 0x881909C4:
				case 0x88190A0C:
				case 0x88190A9C:
				case 0x88190AE4:
				case 0x88190B50:
				case 0x88190B98:
				case 0x88190BCC:
				case 0x88190C00:
				case 0x88190C10:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88190148;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88190150: goto loc_88190150;
		case 0x88190168: goto loc_88190168;
		case 0x881901C4: goto loc_881901C4;
		case 0x881901F8: goto loc_881901F8;
		case 0x88190288: goto loc_88190288;
		case 0x881902D0: goto loc_881902D0;
		case 0x88190338: goto loc_88190338;
		case 0x88190380: goto loc_88190380;
		case 0x881903D8: goto loc_881903D8;
		case 0x8819041C: goto loc_8819041C;
		case 0x88190480: goto loc_88190480;
		case 0x88190500: goto loc_88190500;
		case 0x88190548: goto loc_88190548;
		case 0x881905A0: goto loc_881905A0;
		case 0x881905D4: goto loc_881905D4;
		case 0x881905F0: goto loc_881905F0;
		case 0x8819065C: goto loc_8819065C;
		case 0x881906A4: goto loc_881906A4;
		case 0x8819070C: goto loc_8819070C;
		case 0x88190754: goto loc_88190754;
		case 0x881907AC: goto loc_881907AC;
		case 0x881907F0: goto loc_881907F0;
		case 0x88190854: goto loc_88190854;
		case 0x88190888: goto loc_88190888;
		case 0x8819090C: goto loc_8819090C;
		case 0x88190954: goto loc_88190954;
		case 0x881909C4: goto loc_881909C4;
		case 0x88190A0C: goto loc_88190A0C;
		case 0x88190A9C: goto loc_88190A9C;
		case 0x88190AE4: goto loc_88190AE4;
		case 0x88190B50: goto loc_88190B50;
		case 0x88190B98: goto loc_88190B98;
		case 0x88190BCC: goto loc_88190BCC;
		case 0x88190C00: goto loc_88190C00;
		case 0x88190C10: goto loc_88190C10;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88190150;
	__savegprlr_27(ctx, base);
loc_88190150:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x88190150;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x8819015C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x88190018
	ctx.lr = 0x88190168;
	sub_88190018(ctx, base);
loc_88190168:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88190c1c
	if (!ctx.cr6.eq) goto loc_88190C1C;
	// lwz r11,21552(r28)
	ctx.current_instruction = 0x88190170;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881901f8
	if (ctx.cr6.eq) goto loc_881901F8;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8819017C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,8
	ctx.r30.s64 = 8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190184;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x881901d4
	if (!ctx.cr6.lt) goto loc_881901D4;
loc_88190194:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881901d4
	if (ctx.cr6.eq) goto loc_881901D4;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8819019C;
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
	ctx.current_instruction = 0x881901B0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881901B4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x881901c4
	if (!ctx.cr0.lt) goto loc_881901C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881901C4;
	sub_88156678(ctx, base);
loc_881901C4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881901C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88190194
	if (ctx.cr6.gt) goto loc_88190194;
loc_881901D4:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881901D4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x881901E4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x881901E8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x881901f8
	if (!ctx.cr0.lt) goto loc_881901F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881901F8;
	sub_88156678(ctx, base);
loc_881901F8:
	// lwz r11,21536(r28)
	ctx.current_instruction = 0x881901F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881905d4
	if (ctx.cr6.eq) goto loc_881905D4;
	// lwz r11,21864(r28)
	ctx.current_instruction = 0x88190204;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88190494
	if (ctx.cr6.eq) goto loc_88190494;
	// lwz r11,22252(r28)
	ctx.current_instruction = 0x88190210;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 22252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88190494
	if (!ctx.cr6.eq) goto loc_88190494;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8819021C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8819022C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88190388
	if (ctx.cr6.eq) goto loc_88190388;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88190298
	if (!ctx.cr6.lt) goto loc_88190298;
loc_88190240:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88190298
	if (ctx.cr6.eq) goto loc_88190298;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8819024C;
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
	ctx.current_instruction = 0x88190270;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88190278;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88190288
	if (!ctx.cr0.lt) goto loc_88190288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190288;
	sub_88156678(ctx, base);
loc_88190288:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190288;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88190240
	if (ctx.cr6.gt) goto loc_88190240;
loc_88190298:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8819029C;
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
	ctx.current_instruction = 0x881902B4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881902C0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881902d0
	if (!ctx.cr0.lt) goto loc_881902D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881902D0;
	sub_88156678(ctx, base);
loc_881902D0:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881902D0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,21540(r28)
	ctx.current_instruction = 0x881902D8;
	REX_STORE_U32(ctx.r28.u32 + 21540, ctx.r30.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881902E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88190348
	if (!ctx.cr6.lt) goto loc_88190348;
loc_881902F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88190348
	if (ctx.cr6.eq) goto loc_88190348;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881902FC;
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
	ctx.current_instruction = 0x88190320;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88190328;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88190338
	if (!ctx.cr0.lt) goto loc_88190338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190338;
	sub_88156678(ctx, base);
loc_88190338:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190338;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881902f0
	if (ctx.cr6.gt) goto loc_881902F0;
loc_88190348:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8819034C;
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
	ctx.current_instruction = 0x88190364;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88190370;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88190380
	if (!ctx.cr0.lt) goto loc_88190380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190380;
	sub_88156678(ctx, base);
loc_88190380:
	// stw r30,21544(r28)
	ctx.current_instruction = 0x88190380;
	REX_STORE_U32(ctx.r28.u32 + 21544, ctx.r30.u32);
	// b 0x881905d4
	goto loc_881905D4;
loc_88190388:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881903e8
	if (!ctx.cr6.lt) goto loc_881903E8;
loc_88190390:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881903e8
	if (ctx.cr6.eq) goto loc_881903E8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8819039C;
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
	ctx.current_instruction = 0x881903C0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881903C8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881903d8
	if (!ctx.cr0.lt) goto loc_881903D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881903D8;
	sub_88156678(ctx, base);
loc_881903D8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881903D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88190390
	if (ctx.cr6.gt) goto loc_88190390;
loc_881903E8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881903EC;
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
	ctx.current_instruction = 0x88190404;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r4,0(r31)
	ctx.current_instruction = 0x8819040C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8819041c
	if (!ctx.cr0.lt) goto loc_8819041C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8819041C;
	sub_88156678(ctx, base);
loc_8819041C:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8819041C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190428;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881905b0
	if (!ctx.cr6.lt) goto loc_881905B0;
loc_88190438:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881905b0
	if (ctx.cr6.eq) goto loc_881905B0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88190444;
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
	ctx.current_instruction = 0x88190468;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88190470;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88190480
	if (!ctx.cr0.lt) goto loc_88190480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190480;
	sub_88156678(ctx, base);
loc_88190480:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190480;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88190438
	if (ctx.cr6.gt) goto loc_88190438;
	// b 0x881905b0
	goto loc_881905B0;
loc_88190494:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88190494;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881904A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88190550
	if (ctx.cr6.eq) goto loc_88190550;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88190510
	if (!ctx.cr6.lt) goto loc_88190510;
loc_881904B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88190510
	if (ctx.cr6.eq) goto loc_88190510;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881904C4;
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
	ctx.current_instruction = 0x881904E8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881904F0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88190500
	if (!ctx.cr0.lt) goto loc_88190500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190500;
	sub_88156678(ctx, base);
loc_88190500:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190500;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881904b8
	if (ctx.cr6.gt) goto loc_881904B8;
loc_88190510:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88190514;
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
	ctx.current_instruction = 0x8819052C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88190538;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88190548
	if (!ctx.cr0.lt) goto loc_88190548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190548;
	sub_88156678(ctx, base);
loc_88190548:
	// stw r30,21868(r28)
	ctx.current_instruction = 0x88190548;
	REX_STORE_U32(ctx.r28.u32 + 21868, ctx.r30.u32);
	// b 0x881905d4
	goto loc_881905D4;
loc_88190550:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881905b0
	if (!ctx.cr6.lt) goto loc_881905B0;
loc_88190558:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881905b0
	if (ctx.cr6.eq) goto loc_881905B0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88190564;
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
	ctx.current_instruction = 0x88190588;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88190590;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881905a0
	if (!ctx.cr0.lt) goto loc_881905A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881905A0;
	sub_88156678(ctx, base);
loc_881905A0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881905A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88190558
	if (ctx.cr6.gt) goto loc_88190558;
loc_881905B0:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881905B0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// stw r8,8(r31)
	ctx.current_instruction = 0x881905C0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// std r7,0(r31)
	ctx.current_instruction = 0x881905C4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// bge 0x881905d4
	if (!ctx.cr0.lt) goto loc_881905D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881905D4;
	sub_88156678(ctx, base);
loc_881905D4:
	// lwz r11,22076(r28)
	ctx.current_instruction = 0x881905D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 22076);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881905f0
	if (ctx.cr6.eq) goto loc_881905F0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88165170
	ctx.lr = 0x881905F0;
	sub_88165170(ctx, base);
loc_881905F0:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881905F0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190600;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8819075c
	if (ctx.cr6.eq) goto loc_8819075C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8819066c
	if (!ctx.cr6.lt) goto loc_8819066C;
loc_88190614:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8819066c
	if (ctx.cr6.eq) goto loc_8819066C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88190620;
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
	ctx.current_instruction = 0x88190644;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8819064C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8819065c
	if (!ctx.cr0.lt) goto loc_8819065C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8819065C;
	sub_88156678(ctx, base);
loc_8819065C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8819065C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88190614
	if (ctx.cr6.gt) goto loc_88190614;
loc_8819066C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88190670;
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
	ctx.current_instruction = 0x88190688;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88190694;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881906a4
	if (!ctx.cr0.lt) goto loc_881906A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881906A4;
	sub_88156678(ctx, base);
loc_881906A4:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881906A4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,3960(r28)
	ctx.current_instruction = 0x881906AC;
	REX_STORE_U32(ctx.r28.u32 + 3960, ctx.r30.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881906B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8819071c
	if (!ctx.cr6.lt) goto loc_8819071C;
loc_881906C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8819071c
	if (ctx.cr6.eq) goto loc_8819071C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881906D0;
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
	ctx.current_instruction = 0x881906F4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881906FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8819070c
	if (!ctx.cr0.lt) goto loc_8819070C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8819070C;
	sub_88156678(ctx, base);
loc_8819070C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8819070C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881906c4
	if (ctx.cr6.gt) goto loc_881906C4;
loc_8819071C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88190720;
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
	ctx.current_instruction = 0x88190738;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88190744;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88190754
	if (!ctx.cr0.lt) goto loc_88190754;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190754;
	sub_88156678(ctx, base);
loc_88190754:
	// stw r30,21676(r28)
	ctx.current_instruction = 0x88190754;
	REX_STORE_U32(ctx.r28.u32 + 21676, ctx.r30.u32);
	// b 0x88190888
	goto loc_88190888;
loc_8819075C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881907bc
	if (!ctx.cr6.lt) goto loc_881907BC;
loc_88190764:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881907bc
	if (ctx.cr6.eq) goto loc_881907BC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88190770;
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
	ctx.current_instruction = 0x88190794;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8819079C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881907ac
	if (!ctx.cr0.lt) goto loc_881907AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881907AC;
	sub_88156678(ctx, base);
loc_881907AC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881907AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88190764
	if (ctx.cr6.gt) goto loc_88190764;
loc_881907BC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881907C0;
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
	ctx.current_instruction = 0x881907D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r4,0(r31)
	ctx.current_instruction = 0x881907E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881907f0
	if (!ctx.cr0.lt) goto loc_881907F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881907F0;
	sub_88156678(ctx, base);
loc_881907F0:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881907F0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881907FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88190864
	if (!ctx.cr6.lt) goto loc_88190864;
loc_8819080C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88190864
	if (ctx.cr6.eq) goto loc_88190864;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88190818;
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
	ctx.current_instruction = 0x8819083C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88190844;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88190854
	if (!ctx.cr0.lt) goto loc_88190854;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190854;
	sub_88156678(ctx, base);
loc_88190854:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190854;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8819080c
	if (ctx.cr6.gt) goto loc_8819080C;
loc_88190864:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88190864;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x88190874;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x88190878;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x88190888
	if (!ctx.cr0.lt) goto loc_88190888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190888;
	sub_88156678(ctx, base);
loc_88190888:
	// lwz r11,22080(r28)
	ctx.current_instruction = 0x88190888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 22080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88190a24
	if (ctx.cr6.eq) goto loc_88190A24;
	// lwz r11,21776(r28)
	ctx.current_instruction = 0x88190894;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881908a8
	if (ctx.cr6.eq) goto loc_881908A8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88190a24
	if (!ctx.cr6.eq) goto loc_88190A24;
loc_881908A8:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881908A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881908B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8819091c
	if (!ctx.cr6.lt) goto loc_8819091C;
loc_881908C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8819091c
	if (ctx.cr6.eq) goto loc_8819091C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881908D0;
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
	ctx.current_instruction = 0x881908F4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881908FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8819090c
	if (!ctx.cr0.lt) goto loc_8819090C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8819090C;
	sub_88156678(ctx, base);
loc_8819090C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8819090C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881908c4
	if (ctx.cr6.gt) goto loc_881908C4;
loc_8819091C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88190920;
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
	ctx.current_instruction = 0x88190938;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88190944;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88190954
	if (!ctx.cr0.lt) goto loc_88190954;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190954;
	sub_88156678(ctx, base);
loc_88190954:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// stw r30,21784(r28)
	ctx.current_instruction = 0x88190958;
	REX_STORE_U32(ctx.r28.u32 + 21784, ctx.r30.u32);
	// bne cr6,0x88190a24
	if (!ctx.cr6.eq) goto loc_88190A24;
loc_88190960:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88190960;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8819096C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881909d4
	if (!ctx.cr6.lt) goto loc_881909D4;
loc_8819097C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881909d4
	if (ctx.cr6.eq) goto loc_881909D4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88190988;
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
	ctx.current_instruction = 0x881909AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881909B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881909c4
	if (!ctx.cr0.lt) goto loc_881909C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881909C4;
	sub_88156678(ctx, base);
loc_881909C4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881909C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8819097c
	if (ctx.cr6.gt) goto loc_8819097C;
loc_881909D4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881909D8;
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
	ctx.current_instruction = 0x881909F0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881909FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88190a0c
	if (!ctx.cr0.lt) goto loc_88190A0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190A0C;
	sub_88156678(ctx, base);
loc_88190A0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88190a24
	if (ctx.cr6.eq) goto loc_88190A24;
	// lwz r11,21784(r28)
	ctx.current_instruction = 0x88190A14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21784);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21784(r28)
	ctx.current_instruction = 0x88190A1C;
	REX_STORE_U32(ctx.r28.u32 + 21784, ctx.r11.u32);
	// b 0x88190960
	goto loc_88190960;
loc_88190A24:
	// lwz r11,21776(r28)
	ctx.current_instruction = 0x88190A24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21776);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88190a38
	if (ctx.cr6.eq) goto loc_88190A38;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88190bd4
	if (!ctx.cr6.eq) goto loc_88190BD4;
loc_88190A38:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88190A38;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190A44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88190aac
	if (!ctx.cr6.lt) goto loc_88190AAC;
loc_88190A54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88190aac
	if (ctx.cr6.eq) goto loc_88190AAC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88190A60;
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
	ctx.current_instruction = 0x88190A84;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88190A8C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88190a9c
	if (!ctx.cr0.lt) goto loc_88190A9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190A9C;
	sub_88156678(ctx, base);
loc_88190A9C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190A9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88190a54
	if (ctx.cr6.gt) goto loc_88190A54;
loc_88190AAC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88190AB0;
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
	ctx.current_instruction = 0x88190AC8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88190AD4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88190ae4
	if (!ctx.cr0.lt) goto loc_88190AE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190AE4;
	sub_88156678(ctx, base);
loc_88190AE4:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x88190bb8
	if (!ctx.cr6.eq) goto loc_88190BB8;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88190AEC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190AF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x88190b60
	if (!ctx.cr6.lt) goto loc_88190B60;
loc_88190B08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88190b60
	if (ctx.cr6.eq) goto loc_88190B60;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88190B14;
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
	ctx.current_instruction = 0x88190B38;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88190B40;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88190b50
	if (!ctx.cr0.lt) goto loc_88190B50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190B50;
	sub_88156678(ctx, base);
loc_88190B50:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88190B50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88190b08
	if (ctx.cr6.gt) goto loc_88190B08;
loc_88190B60:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88190B64;
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
	ctx.current_instruction = 0x88190B7C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88190B88;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88190b98
	if (!ctx.cr0.lt) goto loc_88190B98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88190B98;
	sub_88156678(ctx, base);
loc_88190B98:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// blt cr6,0x88190bac
	if (ctx.cr6.lt) goto loc_88190BAC;
loc_88190BA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88190BAC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// b 0x88190bc0
	goto loc_88190BC0;
loc_88190BB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_88190BC0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88166358
	ctx.lr = 0x88190BCC;
	sub_88166358(ctx, base);
loc_88190BCC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88190c1c
	if (!ctx.cr6.eq) goto loc_88190C1C;
loc_88190BD4:
	// lwz r11,84(r28)
	ctx.current_instruction = 0x88190BD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88190BD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88190ba0
	if (!ctx.cr6.eq) goto loc_88190BA0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88190c18
	if (ctx.cr6.eq) goto loc_88190C18;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.current_instruction = 0x88190BF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,24688(r28)
	ctx.current_instruction = 0x88190BF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 24688);
	// bl 0x88151290
	ctx.lr = 0x88190C00;
	sub_88151290(ctx, base);
loc_88190C00:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x88190C08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x881515a8
	ctx.lr = 0x88190C10;
	sub_881515A8(ctx, base);
loc_88190C10:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88190c1c
	if (!ctx.cr6.eq) goto loc_88190C1C;
loc_88190C18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88190C1C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AB5E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881AB5E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881AB5E8) {
			switch (rex_dispatch_address) {
				case 0x881AB5F0:
				case 0x881AB660:
				case 0x881AB69C:
				case 0x881AB744:
				case 0x881AB750:
				case 0x881AB818:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AB5E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881AB5F0: goto loc_881AB5F0;
		case 0x881AB660: goto loc_881AB660;
		case 0x881AB69C: goto loc_881AB69C;
		case 0x881AB744: goto loc_881AB744;
		case 0x881AB750: goto loc_881AB750;
		case 0x881AB818: goto loc_881AB818;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x881AB5F0;
	__savegprlr_16(ctx, base);
loc_881AB5F0:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x881AB5F0;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3772(r3)
	ctx.current_instruction = 0x881AB5F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3772);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r18,128(r3)
	ctx.current_instruction = 0x881AB5FC;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r17,132(r3)
	ctx.current_instruction = 0x881AB600;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ab618
	if (!ctx.cr6.eq) goto loc_881AB618;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_881AB618:
	// lwz r7,3772(r31)
	ctx.current_instruction = 0x881AB618;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3772);
	// lwz r10,15692(r31)
	ctx.current_instruction = 0x881AB61C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15692);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881AB620;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r24,r10,r4
	ctx.r24.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r8,220(r31)
	ctx.current_instruction = 0x881AB628;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,15956(r31)
	ctx.current_instruction = 0x881AB62C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15956);
	// lwz r9,0(r7)
	ctx.current_instruction = 0x881AB630;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,4(r7)
	ctx.current_instruction = 0x881AB634;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r7,8(r7)
	ctx.current_instruction = 0x881AB63C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// add r25,r8,r9
	ctx.r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r22,r7,r11
	ctx.r22.u64 = ctx.r7.u64 + ctx.r11.u64;
	// beq cr6,0x881ab6d8
	if (ctx.cr6.eq) goto loc_881AB6D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,156(r31)
	ctx.current_instruction = 0x881AB654;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r29,160(r31)
	ctx.current_instruction = 0x881AB658;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x8814d328
	ctx.lr = 0x881AB660;
	sub_8814D328(ctx, base);
loc_881AB660:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881ab670
	if (ctx.cr6.eq) goto loc_881AB670;
	// lwz r28,15372(r31)
	ctx.current_instruction = 0x881AB668;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 15372);
	// lwz r29,15376(r31)
	ctx.current_instruction = 0x881AB66C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
loc_881AB670:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x881ab85c
	if (ctx.cr6.eq) goto loc_881AB85C;
loc_881AB67C:
	// lwz r11,15956(r31)
	ctx.current_instruction = 0x881AB67C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15956);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881AB69C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881AB69C:
	// lwz r7,108(r31)
	ctx.current_instruction = 0x881AB69C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// lwz r9,96(r31)
	ctx.current_instruction = 0x881AB6A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,15684(r31)
	ctx.current_instruction = 0x881AB6A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// add r25,r9,r25
	ctx.r25.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// blt cr6,0x881ab67c
	if (ctx.cr6.lt) goto loc_881AB67C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_881AB6D8:
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x881ab85c
	if (ctx.cr6.eq) goto loc_881AB85C;
loc_881AB6E4:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x881ab834
	if (ctx.cr6.eq) goto loc_881AB834;
	// addi r20,r18,-1
	ctx.r20.s64 = ctx.r18.s64 + -1;
	// addi r19,r17,-1
	ctx.r19.s64 = ctx.r17.s64 + -1;
	// subf r23,r26,r22
	ctx.r23.u64 = ctx.r22.u64 - ctx.r26.u64;
loc_881AB708:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x881ab748
	if (ctx.cr6.eq) goto loc_881AB748;
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x881ab748
	if (ctx.cr6.eq) goto loc_881AB748;
	// lwz r11,15936(r31)
	ctx.current_instruction = 0x881AB718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15936);
	// add r7,r23,r30
	ctx.r7.u64 = ctx.r23.u64 + ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,15684(r31)
	ctx.current_instruction = 0x881AB724;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15684);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,108(r31)
	ctx.current_instruction = 0x881AB72C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,96(r31)
	ctx.current_instruction = 0x881AB734;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881AB744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881AB744:
	// b 0x881ab818
	goto loc_881AB818;
loc_881AB748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d328
	ctx.lr = 0x881AB750;
	sub_8814D328(ctx, base);
loc_881AB750:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881ab794
	if (ctx.cr6.eq) goto loc_881AB794;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x881ab768
	if (ctx.cr6.eq) goto loc_881AB768;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x881ab778
	goto loc_881AB778;
loc_881AB768:
	// lwz r10,15380(r31)
	ctx.current_instruction = 0x881AB768;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15380);
	// lwz r11,15372(r31)
	ctx.current_instruction = 0x881AB76C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15372);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_881AB778:
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x881ab788
	if (ctx.cr6.eq) goto loc_881AB788;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x881ab7ec
	goto loc_881AB7EC;
loc_881AB788:
	// lwz r11,15384(r31)
	ctx.current_instruction = 0x881AB788;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15384);
	// lwz r9,15376(r31)
	ctx.current_instruction = 0x881AB78C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
	// b 0x881ab7cc
	goto loc_881AB7CC;
loc_881AB794:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x881ab7a4
	if (ctx.cr6.eq) goto loc_881AB7A4;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x881ab7b4
	goto loc_881AB7B4;
loc_881AB7A4:
	// lwz r10,180(r31)
	ctx.current_instruction = 0x881AB7A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,156(r31)
	ctx.current_instruction = 0x881AB7A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_881AB7B4:
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x881ab7c4
	if (ctx.cr6.eq) goto loc_881AB7C4;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x881ab7ec
	goto loc_881AB7EC;
loc_881AB7C4:
	// lwz r11,188(r31)
	ctx.current_instruction = 0x881AB7C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r9,160(r31)
	ctx.current_instruction = 0x881AB7C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
loc_881AB7CC:
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subfic r11,r6,16
	ctx.xer.ca = ctx.r6.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r6.u64;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_881AB7EC:
	// lwz r16,15940(r31)
	ctx.current_instruction = 0x881AB7EC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 15940);
	// add r7,r23,r30
	ctx.r7.u64 = ctx.r23.u64 + ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r9,108(r31)
	ctx.current_instruction = 0x881AB7F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r8,96(r31)
	ctx.current_instruction = 0x881AB800;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x881AB808;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x881AB818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881AB818:
	// lwz r11,15696(r31)
	ctx.current_instruction = 0x881AB818;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15696);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x881ab708
	if (ctx.cr6.lt) goto loc_881AB708;
loc_881AB834:
	// lwz r11,112(r31)
	ctx.current_instruction = 0x881AB834;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r9,100(r31)
	ctx.current_instruction = 0x881AB83C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,15708(r31)
	ctx.current_instruction = 0x881AB840;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15708);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 + ctx.r9.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x881ab6e4
	if (ctx.cr6.lt) goto loc_881AB6E4;
loc_881AB85C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B07B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B07B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B07B8;
	ctx.current_instruction = 0x881B07B8;
	// mulli r11,r4,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(84));
	// lwz r8,20760(r3)
	ctx.current_instruction = 0x881B07BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20760);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r9,14896(r11)
	ctx.current_instruction = 0x881B07C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 14896);
	// lwz r10,14904(r11)
	ctx.current_instruction = 0x881B07CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14904);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,180(r3)
	ctx.current_instruction = 0x881B07D4;
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r9.u32);
	// stw r10,188(r3)
	ctx.current_instruction = 0x881B07D8;
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// lwz r7,14900(r11)
	ctx.current_instruction = 0x881B07DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14900);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,192(r3)
	ctx.current_instruction = 0x881B07E4;
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r7.u32);
	// lwz r4,14908(r11)
	ctx.current_instruction = 0x881B07E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 14908);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,200(r3)
	ctx.current_instruction = 0x881B07F0;
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r4.u32);
	// stw r6,164(r3)
	ctx.current_instruction = 0x881B07F4;
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r6.u32);
	// stw r10,172(r3)
	ctx.current_instruction = 0x881B07F8;
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// stw r5,168(r3)
	ctx.current_instruction = 0x881B07FC;
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r5.u32);
	// stw r9,176(r3)
	ctx.current_instruction = 0x881B0800;
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// lwz r8,14912(r11)
	ctx.current_instruction = 0x881B0804;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14912);
	// stw r8,156(r3)
	ctx.current_instruction = 0x881B0808;
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r8.u32);
	// lwz r7,14916(r11)
	ctx.current_instruction = 0x881B080C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14916);
	// stw r7,160(r3)
	ctx.current_instruction = 0x881B0810;
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r7.u32);
	// beq cr6,0x881b0848
	if (ctx.cr6.eq) goto loc_881B0848;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,168(r3)
	ctx.current_instruction = 0x881B0834;
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,176(r3)
	ctx.current_instruction = 0x881B083C;
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// stw r7,164(r3)
	ctx.current_instruction = 0x881B0840;
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r7.u32);
	// stw r6,172(r3)
	ctx.current_instruction = 0x881B0844;
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r6.u32);
loc_881B0848:
	// lwz r9,14920(r11)
	ctx.current_instruction = 0x881B0848;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 14920);
	// lwz r10,3788(r3)
	ctx.current_instruction = 0x881B084C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,184(r3)
	ctx.current_instruction = 0x881B0854;
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r9.u32);
	// lwz r8,14924(r11)
	ctx.current_instruction = 0x881B0858;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14924);
	// stw r8,196(r3)
	ctx.current_instruction = 0x881B085C;
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
	// lwz r7,14928(r11)
	ctx.current_instruction = 0x881B0860;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14928);
	// stw r7,152(r3)
	ctx.current_instruction = 0x881B0864;
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r7.u32);
	// lwz r6,14932(r11)
	ctx.current_instruction = 0x881B0868;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 14932);
	// stw r6,136(r3)
	ctx.current_instruction = 0x881B086C;
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// lwz r5,14936(r11)
	ctx.current_instruction = 0x881B0870;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 14936);
	// stw r5,140(r3)
	ctx.current_instruction = 0x881B0874;
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r5.u32);
	// lwz r4,14940(r11)
	ctx.current_instruction = 0x881B0878;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 14940);
	// stw r4,144(r3)
	ctx.current_instruction = 0x881B087C;
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r4.u32);
	// lwz r9,14944(r11)
	ctx.current_instruction = 0x881B0880;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 14944);
	// stw r9,148(r3)
	ctx.current_instruction = 0x881B0884;
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
	// lwz r8,14948(r11)
	ctx.current_instruction = 0x881B0888;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14948);
	// stw r8,204(r3)
	ctx.current_instruction = 0x881B088C;
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r8.u32);
	// lwz r7,14952(r11)
	ctx.current_instruction = 0x881B0890;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14952);
	// stw r7,208(r3)
	ctx.current_instruction = 0x881B0894;
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r7.u32);
	// lwz r6,14956(r11)
	ctx.current_instruction = 0x881B0898;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 14956);
	// stw r6,212(r3)
	ctx.current_instruction = 0x881B089C;
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r6.u32);
	// lwz r5,14960(r11)
	ctx.current_instruction = 0x881B08A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 14960);
	// stw r5,216(r3)
	ctx.current_instruction = 0x881B08A4;
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// lwz r4,14964(r11)
	ctx.current_instruction = 0x881B08A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 14964);
	// stw r4,220(r3)
	ctx.current_instruction = 0x881B08AC;
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r4.u32);
	// lwz r9,14968(r11)
	ctx.current_instruction = 0x881B08B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 14968);
	// stw r9,224(r3)
	ctx.current_instruction = 0x881B08B4;
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r9.u32);
	// lwz r8,14972(r11)
	ctx.current_instruction = 0x881B08B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14972);
	// stw r8,228(r3)
	ctx.current_instruction = 0x881B08BC;
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r8.u32);
	// lwz r7,14976(r11)
	ctx.current_instruction = 0x881B08C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14976);
	// stw r7,232(r3)
	ctx.current_instruction = 0x881B08C4;
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r7.u32);
	// beq cr6,0x881b08dc
	if (ctx.cr6.eq) goto loc_881B08DC;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,3812(r3)
	ctx.current_instruction = 0x881B08D4;
	REX_STORE_U32(ctx.r3.u32 + 3812, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881B08DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3812(r3)
	ctx.current_instruction = 0x881B08E0;
	REX_STORE_U32(ctx.r3.u32 + 3812, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881B2308) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B2308;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B2308) {
			switch (rex_dispatch_address) {
				case 0x881B2310:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B2308;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B2310: goto loc_881B2310;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881B2310;
	__savegprlr_24(ctx, base);
loc_881B2310:
	// lbz r9,0(r4)
	ctx.current_instruction = 0x881B2310;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r24,r6,-2
	ctx.r24.s64 = ctx.r6.s64 + -2;
	// lbz r10,1(r4)
	ctx.current_instruction = 0x881B2318;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// lbz r8,2(r4)
	ctx.current_instruction = 0x881B2320;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// addi r28,r4,2
	ctx.r28.s64 = ctx.r4.s64 + 2;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r31,3(r4)
	ctx.current_instruction = 0x881B232C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// addi r27,r4,3
	ctx.r27.s64 = ctx.r4.s64 + 3;
	// mulli r7,r7,14
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(14));
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r8,r7,11
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(11));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// stw r9,0(r5)
	ctx.current_instruction = 0x881B2364;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ble cr6,0x881b23d8
	if (!ctx.cr6.gt) goto loc_881B23D8;
	// addi r10,r24,-3
	ctx.r10.s64 = ctx.r24.s64 + -3;
	// addi r26,r4,-1
	ctx.r26.s64 = ctx.r4.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r25,r4,-2
	ctx.r25.s64 = ctx.r4.s64 + -2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B2388:
	// lbzx r8,r11,r4
	ctx.current_instruction = 0x881B2388;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r10,r29,r11
	ctx.current_instruction = 0x881B238C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r30,r26,r11
	ctx.current_instruction = 0x881B2390;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r8,r28,r11
	ctx.current_instruction = 0x881B2398;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r7,r25,r11
	ctx.current_instruction = 0x881B239C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// mulli r10,r10,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// lbzx r31,r27,r11
	ctx.current_instruction = 0x881B23A4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r7,r7,11
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(11));
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// srawi r10,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 7;
	// stwu r10,8(r9)
	ctx.current_instruction = 0x881B23D0;
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x881b2388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B2388;
loc_881B23D8:
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r30,r24,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lbz r9,-2(r11)
	ctx.current_instruction = 0x881B23EC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r10,-1(r11)
	ctx.current_instruction = 0x881B23F0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,-4(r11)
	ctx.current_instruction = 0x881B23F4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r4,-3(r11)
	ctx.current_instruction = 0x881B23FC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mulli r11,r29,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(14));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r7,r9,11
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(11));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// stwx r10,r30,r5
	ctx.current_instruction = 0x881B2428;
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u32);
	// ble cr6,0x881b2478
	if (!ctx.cr6.gt) goto loc_881B2478;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881B2448:
	// lwz r11,0(r5)
	ctx.current_instruction = 0x881B2448;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x881b2460
	if (!ctx.cr6.gt) goto loc_881B2460;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_881B2460:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r31,r10,r8
	ctx.current_instruction = 0x881B2464;
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r31.u8);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stbx r11,r8,r3
	ctx.current_instruction = 0x881B246C;
	REX_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bdnz 0x881b2448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B2448;
loc_881B2478:
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B4248) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B4248;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B4248) {
			switch (rex_dispatch_address) {
				case 0x881B4250:
				case 0x881B429C:
				case 0x881B42CC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B4248;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B4250: goto loc_881B4250;
		case 0x881B429C: goto loc_881B429C;
		case 0x881B42CC: goto loc_881B42CC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881B4250;
	__savegprlr_26(ctx, base);
loc_881B4250:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881B4250;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881b429c
	if (!ctx.cr6.gt) goto loc_881B429C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881b428c
	if (!ctx.cr6.eq) goto loc_881B428C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881b429c
	if (ctx.cr6.eq) goto loc_881B429C;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x881b429c
	if (ctx.cr6.eq) goto loc_881B429C;
loc_881B428C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b3c28
	ctx.lr = 0x881B429C;
	sub_881B3C28(ctx, base);
loc_881B429C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x881b42cc
	if (!ctx.cr6.gt) goto loc_881B42CC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x881b42bc
	if (!ctx.cr6.eq) goto loc_881B42BC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881b42cc
	if (ctx.cr6.eq) goto loc_881B42CC;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// beq cr6,0x881b42cc
	if (ctx.cr6.eq) goto loc_881B42CC;
loc_881B42BC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b3f80
	ctx.lr = 0x881B42CC;
	sub_881B3F80(ctx, base);
loc_881B42CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B5248) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B5248;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B5248) {
			switch (rex_dispatch_address) {
				case 0x881B5250:
				case 0x881B527C:
				case 0x881B5330:
				case 0x881B53CC:
				case 0x881B53EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B5248;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B5250: goto loc_881B5250;
		case 0x881B527C: goto loc_881B527C;
		case 0x881B5330: goto loc_881B5330;
		case 0x881B53CC: goto loc_881B53CC;
		case 0x881B53EC: goto loc_881B53EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881B5250;
	__savegprlr_28(ctx, base);
loc_881B5250:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881B5250;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x881B5254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,20(r4)
	ctx.current_instruction = 0x881B525C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881B5268;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881b52a8
	if (!ctx.cr6.eq) goto loc_881B52A8;
	// bl 0x881b4ab8
	ctx.lr = 0x881B527C;
	sub_881B4AB8(ctx, base);
loc_881B527C:
	// stw r3,0(r29)
	ctx.current_instruction = 0x881B527C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881b5294
	if (ctx.cr6.eq) goto loc_881B5294;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881B5294:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881B5294;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,20(r30)
	ctx.current_instruction = 0x881B5298;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881B529C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r8,4(r11)
	ctx.current_instruction = 0x881B52A4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_881B52A8:
	// lwz r11,44(r30)
	ctx.current_instruction = 0x881B52A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881b52c8
	if (!ctx.cr6.eq) goto loc_881B52C8;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r31)
	ctx.current_instruction = 0x881B52BC;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881B52C8:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881B52C8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x881B52CC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881B52D4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881B52E4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881b53c4
	if (ctx.cr6.lt) goto loc_881B53C4;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881B52F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881B5304;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881B530C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881b53b4
	if (!ctx.cr6.lt) goto loc_881B53B4;
loc_881B5314:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881B5314;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881B5318;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881b5348
	if (ctx.cr6.lt) goto loc_881B5348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881B5330;
	sub_88156440(ctx, base);
loc_881B5330:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881b5314
	if (ctx.cr6.eq) goto loc_881B5314;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881B5348:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881B5348;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881B5350;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x881B5358;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x881B535C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x881B5364;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881B5368;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881B5370;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881B5374;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881B537C;
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
	ctx.current_instruction = 0x881B5398;
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
	ctx.current_instruction = 0x881B53B0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_881B53B4:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881B53C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881B53CC;
	sub_88156500(ctx, base);
loc_881B53CC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_881B53D4:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881B53D4;
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
	ctx.lr = 0x881B53EC;
	sub_88156500(ctx, base);
loc_881B53EC:
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881B53F4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881b53d4
	if (ctx.cr6.lt) goto loc_881B53D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C1B70) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881C1B70);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C1B70;
	ctx.current_instruction = 0x881C1B70;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881C1B70;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x881C1B74;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r8,0(r4)
	ctx.current_instruction = 0x881C1B78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,0(r5)
	ctx.current_instruction = 0x881C1B80;
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
	// bge cr6,0x881c1bb0
	if (!ctx.cr6.lt) goto loc_881C1BB0;
	// li r11,-16
	ctx.r11.s64 = -16;
	// b 0x881c1bc4
	goto loc_881C1BC4;
loc_881C1BB0:
	// lwz r30,136(r31)
	ctx.current_instruction = 0x881C1BB0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r30,r30,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881c1bc8
	if (!ctx.cr6.gt) goto loc_881C1BC8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881C1BC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_881C1BC8:
	// cmpwi cr6,r10,-16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -16, ctx.xer);
	// bge cr6,0x881c1bdc
	if (!ctx.cr6.lt) goto loc_881C1BDC;
	// li r10,-16
	ctx.r10.s64 = -16;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881c1c00
	goto loc_881C1C00;
loc_881C1BDC:
	// lwz r31,140(r31)
	ctx.current_instruction = 0x881C1BDC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm r31,r31,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x881c1bf8
	if (!ctx.cr6.gt) goto loc_881C1BF8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881c1c00
	goto loc_881C1C00;
loc_881C1BF8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881c1c28
	if (ctx.cr6.eq) goto loc_881C1C28;
loc_881C1C00:
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
	ctx.current_instruction = 0x881C1C20;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r5)
	ctx.current_instruction = 0x881C1C24;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_881C1C28:
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881C1C28;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881C1C2C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881C3378) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C3378;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C3378) {
			switch (rex_dispatch_address) {
				case 0x881C3380:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C3378;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881C3380: goto loc_881C3380;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x881C3380;
	__savegprlr_21(ctx, base);
loc_881C3380:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r27,8
	ctx.r27.s64 = 8;
loc_881C338C:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 2;
	// addi r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881C33A0:
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r5,4(r7)
	ctx.current_instruction = 0x881C33A4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r3,2(r7)
	ctx.current_instruction = 0x881C33A8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// lbzx r26,r30,r11
	ctx.current_instruction = 0x881C33AC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r25,6(r7)
	ctx.current_instruction = 0x881C33B8;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r24,0(r7)
	ctx.current_instruction = 0x881C33BC;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lbz r23,1(r10)
	ctx.current_instruction = 0x881C33C0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lbz r22,2(r10)
	ctx.current_instruction = 0x881C33C8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lbz r21,-1(r10)
	ctx.current_instruction = 0x881C33D0;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// mullw r5,r23,r5
	ctx.r5.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r26,r3
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r3.s32);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mullw r5,r22,r25
	ctx.r5.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r5,r24,r21
	ctx.r5.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r21.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sraw. r10,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x881c3404
	if (!ctx.cr0.lt) goto loc_881C3404;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x881c3410
	goto loc_881C3410;
loc_881C3404:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x881c3410
	if (!ctx.cr6.gt) goto loc_881C3410;
	// li r10,255
	ctx.r10.s64 = 255;
loc_881C3410:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stbx r5,r31,r11
	ctx.current_instruction = 0x881C3418;
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// lhz r26,6(r7)
	ctx.current_instruction = 0x881C341C;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r25,0(r7)
	ctx.current_instruction = 0x881C3420;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lbzx r22,r30,r11
	ctx.current_instruction = 0x881C3424;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbz r5,1(r10)
	ctx.current_instruction = 0x881C3428;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r23,3(r10)
	ctx.current_instruction = 0x881C342C;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r24,2(r10)
	ctx.current_instruction = 0x881C3430;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lhz r10,4(r7)
	ctx.current_instruction = 0x881C3434;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r3,2(r7)
	ctx.current_instruction = 0x881C3438;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mullw r5,r5,r3
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// mullw r10,r24,r10
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r10.s32);
	// extsh r3,r26
	ctx.r3.s64 = ctx.r26.s16;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r5,r23,r3
	ctx.r5.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r3.s32);
	// extsh r3,r25
	ctx.r3.s64 = ctx.r25.s16;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r5,r3,r22
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r22.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sraw. r5,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r5.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x881c347c
	if (!ctx.cr0.lt) goto loc_881C347C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x881c3488
	goto loc_881C3488;
loc_881C347C:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// ble cr6,0x881c3488
	if (!ctx.cr6.gt) goto loc_881C3488;
	// li r5,255
	ctx.r5.s64 = 255;
loc_881C3488:
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r5,1(r3)
	ctx.current_instruction = 0x881C3490;
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r5.u8);
	// lbz r25,1(r10)
	ctx.current_instruction = 0x881C3494;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lhz r24,2(r7)
	ctx.current_instruction = 0x881C3498;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// lhz r5,4(r7)
	ctx.current_instruction = 0x881C349C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lbz r23,2(r10)
	ctx.current_instruction = 0x881C34A0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsh r22,r5
	ctx.r22.s64 = ctx.r5.s16;
	// lbz r21,3(r10)
	ctx.current_instruction = 0x881C34A8;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsh r5,r24
	ctx.r5.s64 = ctx.r24.s16;
	// lhz r3,6(r7)
	ctx.current_instruction = 0x881C34B0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// lbz r24,4(r10)
	ctx.current_instruction = 0x881C34B4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// mullw r5,r23,r5
	ctx.r5.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r5.s32);
	// lhz r26,0(r7)
	ctx.current_instruction = 0x881C34BC;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// mullw r10,r21,r22
	ctx.r10.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r22.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r5,r24,r3
	ctx.r5.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r3.s32);
	// extsh r3,r26
	ctx.r3.s64 = ctx.r26.s16;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r5,r3,r25
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sraw. r5,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r5.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x881c34f4
	if (!ctx.cr0.lt) goto loc_881C34F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x881c3500
	goto loc_881C3500;
loc_881C34F4:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// ble cr6,0x881c3500
	if (!ctx.cr6.gt) goto loc_881C3500;
	// li r5,255
	ctx.r5.s64 = 255;
loc_881C3500:
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stb r5,2(r3)
	ctx.current_instruction = 0x881C3508;
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r5.u8);
	// lbzx r26,r29,r11
	ctx.current_instruction = 0x881C350C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbz r21,2(r10)
	ctx.current_instruction = 0x881C3510;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lhz r5,0(r7)
	ctx.current_instruction = 0x881C3514;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lhz r24,2(r7)
	ctx.current_instruction = 0x881C3518;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// lhz r25,4(r7)
	ctx.current_instruction = 0x881C351C;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// extsh r22,r5
	ctx.r22.s64 = ctx.r5.s16;
	// lbz r23,1(r10)
	ctx.current_instruction = 0x881C3524;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsh r5,r24
	ctx.r5.s64 = ctx.r24.s16;
	// lhz r3,6(r7)
	ctx.current_instruction = 0x881C352C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lbz r24,3(r10)
	ctx.current_instruction = 0x881C3534;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r5,r23,r5
	ctx.r5.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r5.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r10,r21,r25
	ctx.r10.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r3,r24,r3
	ctx.r3.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mullw r5,r22,r26
	ctx.r5.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r26.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sraw. r10,r3,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r10.s64 = ctx.r3.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x881c356c
	if (!ctx.cr0.lt) goto loc_881C356C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x881c3578
	goto loc_881C3578;
loc_881C356C:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x881c3578
	if (!ctx.cr6.gt) goto loc_881C3578;
	// li r10,255
	ctx.r10.s64 = 255;
loc_881C3578:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r28,r11
	ctx.current_instruction = 0x881C357C;
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881c33a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C33A0;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// bne 0x881c338c
	if (!ctx.cr0.eq) goto loc_881C338C;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C9728) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C9728;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C9728) {
			switch (rex_dispatch_address) {
				case 0x881C9730:
				case 0x881C9738:
				case 0x881C9838:
				case 0x881C9864:
				case 0x881C98C8:
				case 0x881C98D8:
				case 0x881C9914:
				case 0x881C9928:
				case 0x881C99A4:
				case 0x881C9A40:
				case 0x881C9A6C:
				case 0x881C9A90:
				case 0x881C9AB8:
				case 0x881C9AD0:
				case 0x881C9AE4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C9728;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C9730: goto loc_881C9730;
		case 0x881C9738: goto loc_881C9738;
		case 0x881C9838: goto loc_881C9838;
		case 0x881C9864: goto loc_881C9864;
		case 0x881C98C8: goto loc_881C98C8;
		case 0x881C98D8: goto loc_881C98D8;
		case 0x881C9914: goto loc_881C9914;
		case 0x881C9928: goto loc_881C9928;
		case 0x881C99A4: goto loc_881C99A4;
		case 0x881C9A40: goto loc_881C9A40;
		case 0x881C9A6C: goto loc_881C9A6C;
		case 0x881C9A90: goto loc_881C9A90;
		case 0x881C9AB8: goto loc_881C9AB8;
		case 0x881C9AD0: goto loc_881C9AD0;
		case 0x881C9AE4: goto loc_881C9AE4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881C9730;
	__savegprlr_14(ctx, base);
loc_881C9730:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef280
	ctx.lr = 0x881C9738;
	__savefpr_26(ctx, base);
loc_881C9738:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x881C9738;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r10,380(r1)
	ctx.current_instruction = 0x881C9740;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// lwz r10,412(r1)
	ctx.current_instruction = 0x881C9744;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r9,372(r1)
	ctx.current_instruction = 0x881C9750;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lwz r9,420(r1)
	ctx.current_instruction = 0x881C9758;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r7,80(r1)
	ctx.current_instruction = 0x881C9760;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x881C9764;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// std r6,80(r1)
	ctx.current_instruction = 0x881C976C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x881C9770;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// std r5,80(r1)
	ctx.current_instruction = 0x881C977C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x881C9780;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// srawi r24,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r3.s32 >> 1;
	// fcfid f30,f13
	ctx.f30.f64 = double(ctx.f13.s64);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// fsub f28,f10,f11
	ctx.f28.f64 = ctx.f10.f64 - ctx.f11.f64;
	// srawi r17,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r17.s64 = ctx.r4.s32 >> 1;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lfd f26,1488(r8)
	ctx.current_instruction = 0x881C97A8;
	ctx.f26.u64 = REX_LOAD_U64(ctx.r8.u32 + 1488);
	// fsub f9,f28,f30
	ctx.f9.f64 = ctx.f28.f64 - ctx.f30.f64;
	// fadd f8,f28,f30
	ctx.f8.f64 = ctx.f28.f64 + ctx.f30.f64;
	// fctiwz f7,f9
	ctx.f7.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,80(r1)
	ctx.current_instruction = 0x881C97B8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881C97BC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r4,r25
	ctx.r4.s64 = ctx.r25.s32;
	// std r4,80(r1)
	ctx.current_instruction = 0x881C97C4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f6,80(r1)
	ctx.current_instruction = 0x881C97C8;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fsub f4,f9,f5
	ctx.f4.f64 = ctx.f9.f64 - ctx.f5.f64;
	// fctiwz f3,f8
	ctx.f3.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f3,80(r1)
	ctx.current_instruction = 0x881C97D8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r22,84(r1)
	ctx.current_instruction = 0x881C97DC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fcmpu cr6,f4,f26
	ctx.cr6.compare(ctx.f4.f64, ctx.f26.f64);
	// bne cr6,0x881c97ec
	if (!ctx.cr6.eq) goto loc_881C97EC;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
loc_881C97EC:
	// lwz r19,388(r1)
	ctx.current_instruction = 0x881C97EC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x881c9870
	if (!ctx.cr6.gt) goto loc_881C9870;
	// subf r11,r22,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r22.u64;
	// addi r28,r25,1
	ctx.r28.s64 = ctx.r25.s64 + 1;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// subf r26,r19,r14
	ctx.r26.u64 = ctx.r14.u64 - ctx.r19.u64;
	// subf r30,r19,r21
	ctx.r30.u64 = ctx.r21.u64 - ctx.r19.u64;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_881C9814:
	// cmpw cr6,r28,r21
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r21.s32, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// blt cr6,0x881c9824
	if (ctx.cr6.lt) goto loc_881C9824;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_881C9824:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x881c9838
	if (!ctx.cr6.gt) goto loc_881C9838;
	// add r4,r26,r31
	ctx.r4.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x881C9838;
	sub_880547A0(ctx, base);
loc_881C9838:
	// cmpw cr6,r27,r21
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r21.s32, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// blt cr6,0x881c9848
	if (ctx.cr6.lt) goto loc_881C9848;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_881C9848:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x881c9864
	if (!ctx.cr6.gt) goto loc_881C9864;
	// subf r11,r5,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x880547a0
	ctx.lr = 0x881C9864;
	sub_880547A0(ctx, base);
loc_881C9864:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r21
	ctx.r31.u64 = ctx.r31.u64 + ctx.r21.u64;
	// bne 0x881c9814
	if (!ctx.cr0.eq) goto loc_881C9814;
loc_881C9870:
	// lwz r26,404(r1)
	ctx.current_instruction = 0x881C9870;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r20,396(r1)
	ctx.current_instruction = 0x881C9878;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x881c9934
	if (!ctx.cr6.gt) goto loc_881C9934;
	// srawi r11,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// srawi r10,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r22.s32 >> 1;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// subf r11,r10,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r10.u64;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
loc_881C9898:
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// blt cr6,0x881c98a8
	if (ctx.cr6.lt) goto loc_881C98A8;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_881C98A8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881c98d8
	if (!ctx.cr6.gt) goto loc_881C98D8;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r31,r11,r24
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// add r4,r31,r16
	ctx.r4.u64 = ctx.r31.u64 + ctx.r16.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x880547a0
	ctx.lr = 0x881C98C8;
	sub_880547A0(ctx, base);
loc_881C98C8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r15
	ctx.r4.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r3,r31,r26
	ctx.r3.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x881C98D8;
	sub_880547A0(ctx, base);
loc_881C98D8:
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r24.s32, ctx.xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// blt cr6,0x881c98e8
	if (ctx.cr6.lt) goto loc_881C98E8;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_881C98E8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881c9928
	if (!ctx.cr6.gt) goto loc_881C9928;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r10,372(r1)
	ctx.current_instruction = 0x881C98F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r8,r9,r24
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// subf r31,r30,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r30.u64;
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x880547a0
	ctx.lr = 0x881C9914;
	sub_880547A0(ctx, base);
loc_881C9914:
	// lwz r7,380(r1)
	ctx.current_instruction = 0x881C9914;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r7
	ctx.r4.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r3,r31,r26
	ctx.r3.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x881C9928;
	sub_880547A0(ctx, base);
loc_881C9928:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x881c9898
	if (ctx.cr6.lt) goto loc_881C9898;
loc_881C9934:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// lwz r28,80(r1)
	ctx.current_instruction = 0x881C9938;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// xoris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 ^ 2147483648;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addc r7,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r25,r23,r14
	ctx.r25.u64 = ctx.r14.u64 - ctx.r23.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r27,r19,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r19.u64;
	// and r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 & ctx.r11.u64;
	// lfd f29,12088(r10)
	ctx.current_instruction = 0x881C9964;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// lfd f27,-26264(r11)
	ctx.current_instruction = 0x881C996C;
	ctx.f27.u64 = REX_LOAD_U64(ctx.r11.u32 + -26264);
loc_881C9970:
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r21.s32, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x881c9980
	if (ctx.cr6.lt) goto loc_881C9980;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_881C9980:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881c9ad8
	if (!ctx.cr6.lt) goto loc_881C9AD8;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	ctx.current_instruction = 0x881C998C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x881C9990;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f31,f13,f28
	ctx.f31.f64 = ctx.f13.f64 - ctx.f28.f64;
	// fdiv f1,f31,f30
	ctx.f1.f64 = ctx.f31.f64 / ctx.f30.f64;
	// bl 0x881f0340
	ctx.lr = 0x881C99A4;
	sub_881F0340(ctx, base);
loc_881C99A4:
	// fsub f12,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f27.f64 - ctx.f1.f64;
	// fmsub f11,f1,f30,f31
	ctx.f11.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f31.f64);
	// fmsub f10,f12,f30,f31
	ctx.f10.f64 = std::fma(ctx.f12.f64, ctx.f30.f64, -ctx.f31.f64);
	// fadd f9,f11,f29
	ctx.f9.f64 = ctx.f11.f64 + ctx.f29.f64;
	// fadd f8,f10,f29
	ctx.f8.f64 = ctx.f10.f64 + ctx.f29.f64;
	// fctiwz f7,f9
	ctx.f7.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	ctx.current_instruction = 0x881C99BC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r9,92(r1)
	ctx.current_instruction = 0x881C99C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,88(r1)
	ctx.current_instruction = 0x881C99C8;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r10,92(r1)
	ctx.current_instruction = 0x881C99CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x881c99f8
	if (!ctx.cr6.lt) goto loc_881C99F8;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
loc_881C99E0:
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + ctx.r14.u64;
	// add r3,r30,r19
	ctx.r3.u64 = ctx.r30.u64 + ctx.r19.u64;
	// b 0x881c9a34
	goto loc_881C9A34;
loc_881C99F8:
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x881c9a28
	if (!ctx.cr6.lt) goto loc_881C9A28;
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// ble cr6,0x881c9a14
	if (!ctx.cr6.gt) goto loc_881C9A14;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// b 0x881c99e0
	goto loc_881C99E0;
loc_881C9A14:
	// add r3,r30,r19
	ctx.r3.u64 = ctx.r30.u64 + ctx.r19.u64;
	// add r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 + ctx.r25.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x881c9a34
	goto loc_881C9A34;
loc_881C9A28:
	// add r3,r30,r19
	ctx.r3.u64 = ctx.r30.u64 + ctx.r19.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// add r4,r27,r3
	ctx.r4.u64 = ctx.r27.u64 + ctx.r3.u64;
loc_881C9A34:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x881ca308
	ctx.lr = 0x881C9A40;
	sub_881CA308(ctx, base);
loc_881C9A40:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c9ad0
	if (!ctx.cr6.eq) goto loc_881C9AD0;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x881c9a74
	if (!ctx.cr6.eq) goto loc_881C9A74;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r4,r31,r16
	ctx.r4.u64 = ctx.r31.u64 + ctx.r16.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x881ca308
	ctx.lr = 0x881C9A6C;
	sub_881CA308(ctx, base);
loc_881C9A6C:
	// add r4,r31,r15
	ctx.r4.u64 = ctx.r31.u64 + ctx.r15.u64;
	// b 0x881c9ac0
	goto loc_881C9AC0;
loc_881C9A74:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x881c9a98
	if (!ctx.cr6.eq) goto loc_881C9A98;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r4,r28,r16
	ctx.r4.u64 = ctx.r28.u64 + ctx.r16.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x881ca308
	ctx.lr = 0x881C9A90;
	sub_881CA308(ctx, base);
loc_881C9A90:
	// add r4,r28,r15
	ctx.r4.u64 = ctx.r28.u64 + ctx.r15.u64;
	// b 0x881c9ac0
	goto loc_881C9AC0;
loc_881C9A98:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x881c9ad0
	if (!ctx.cr6.eq) goto loc_881C9AD0;
	// lwz r11,372(r1)
	ctx.current_instruction = 0x881C9AA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x881ca308
	ctx.lr = 0x881C9AB8;
	sub_881CA308(ctx, base);
loc_881C9AB8:
	// lwz r10,380(r1)
	ctx.current_instruction = 0x881C9AB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
loc_881C9AC0:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r3,r31,r26
	ctx.r3.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bl 0x881ca308
	ctx.lr = 0x881C9AD0;
	sub_881CA308(ctx, base);
loc_881C9AD0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x881c9970
	goto loc_881C9970;
loc_881C9AD8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2cc
	ctx.lr = 0x881C9AE4;
	__restfpr_26(ctx, base);
loc_881C9AE4:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881D35B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881D35B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881D35B0) {
			switch (rex_dispatch_address) {
				case 0x881D35B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881D35B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881D35B8: goto loc_881D35B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881D35B8;
	__savegprlr_14(ctx, base);
loc_881D35B8:
	// lwz r10,92(r3)
	ctx.current_instruction = 0x881D35B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,112(r3)
	ctx.current_instruction = 0x881D35C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// stw r3,20(r1)
	ctx.current_instruction = 0x881D35C4;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,-268(r1)
	ctx.current_instruction = 0x881D35D0;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r30.u32);
	// ble cr6,0x881d4380
	if (!ctx.cr6.gt) goto loc_881D4380;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fsub f8,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f2.f64 - ctx.f1.f64;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfd f12,23440(r10)
	ctx.current_instruction = 0x881D35F0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 23440);
	// lfd f7,1488(r9)
	ctx.current_instruction = 0x881D35F4;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r9.u32 + 1488);
	// stw r11,-320(r1)
	ctx.current_instruction = 0x881D35F8;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// lfd f9,12088(r8)
	ctx.current_instruction = 0x881D35FC;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r8.u32 + 12088);
	// lfd f10,8624(r7)
	ctx.current_instruction = 0x881D3600;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r7.u32 + 8624);
loc_881D3604:
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// lwz r9,96(r3)
	ctx.current_instruction = 0x881D3608;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// std r10,-176(r1)
	ctx.current_instruction = 0x881D3610;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r10.u64);
	// lfd f13,-176(r1)
	ctx.current_instruction = 0x881D3614;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmadd f11,f11,f3,f4
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x881d3634
	if (ctx.cr6.eq) goto loc_881D3634;
	// fsub f13,f3,f10
	ctx.f13.f64 = ctx.f3.f64 - ctx.f10.f64;
	// fmul f13,f13,f9
	ctx.f13.f64 = ctx.f13.f64 * ctx.f9.f64;
	// b 0x881d3638
	goto loc_881D3638;
loc_881D3634:
	// fmr f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f7.f64;
loc_881D3638:
	// fadd f13,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f11.f64;
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D3640;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r8,100(r3)
	ctx.current_instruction = 0x881D3644;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-248(r1)
	ctx.current_instruction = 0x881D364C;
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.f11.u64);
	// lwz r10,-244(r1)
	ctx.current_instruction = 0x881D3650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// stw r9,8228(r7)
	ctx.current_instruction = 0x881D365C;
	REX_STORE_U32(ctx.r7.u32 + 8228, ctx.r9.u32);
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// std r5,-232(r1)
	ctx.current_instruction = 0x881D3664;
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r5.u64);
	// lfd f6,-232(r1)
	ctx.current_instruction = 0x881D3668;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fmsub f2,f13,f12,f5
	ctx.f2.f64 = std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f5.f64);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,-248(r1)
	ctx.current_instruction = 0x881D3680;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r7.u32);
	// fctiwz f13,f2
	ctx.f13.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f13,-256(r1)
	ctx.current_instruction = 0x881D3688;
	REX_STORE_U64(ctx.r1.u32 + -256, ctx.f13.u64);
	// lwz r25,-252(r1)
	ctx.current_instruction = 0x881D368C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// mullw r9,r25,r25
	ctx.r9.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r25.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// stw r9,-240(r1)
	ctx.current_instruction = 0x881D369C;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stw r6,-256(r1)
	ctx.current_instruction = 0x881D36A4;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r6.u32);
	// ble cr6,0x881d3ed0
	if (!ctx.cr6.gt) goto loc_881D3ED0;
	// lwz r9,84(r3)
	ctx.current_instruction = 0x881D36AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d3ecc
	if (!ctx.cr6.lt) goto loc_881D3ECC;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D36BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r30,-272(r1)
	ctx.current_instruction = 0x881D36C4;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d436c
	if (!ctx.cr6.gt) goto loc_881D436C;
loc_881D36D0:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-280(r1)
	ctx.current_instruction = 0x881D36D8;
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.f13.u64);
	// lwz r10,-276(r1)
	ctx.current_instruction = 0x881D36DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d3c00
	if (!ctx.cr6.gt) goto loc_881D3C00;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D36E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d3bfc
	if (!ctx.cr6.lt) goto loc_881D3BFC;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// li r9,4
	ctx.r9.s64 = 4;
	// std r6,-192(r1)
	ctx.current_instruction = 0x881D3708;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r6.u64);
	// lfd f13,-192(r1)
	ctx.current_instruction = 0x881D370C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// stw r11,8228(r8)
	ctx.current_instruction = 0x881D3718;
	REX_STORE_U32(ctx.r8.u32 + 8228, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-280(r1)
	ctx.current_instruction = 0x881D372C;
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.f5.u64);
	// lwz r21,-276(r1)
	ctx.current_instruction = 0x881D3730;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// mullw r5,r21,r21
	ctx.r5.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r21.s32);
	// srawi r20,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r20.s64 = ctx.r5.s32 >> 8;
	// mullw r4,r20,r21
	ctx.r4.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r21.s32);
	// stw r20,-280(r1)
	ctx.current_instruction = 0x881D3740;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r20.u32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// stw r11,-236(r1)
	ctx.current_instruction = 0x881D3748;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
loc_881D374C:
	// lwz r7,80(r3)
	ctx.current_instruction = 0x881D374C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lbz r11,0(r31)
	ctx.current_instruction = 0x881D3750;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,-4(r31)
	ctx.current_instruction = 0x881D3758;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + -4);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,8(r31)
	ctx.current_instruction = 0x881D3760;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// subf r26,r8,r31
	ctx.r26.u64 = ctx.r31.u64 - ctx.r8.u64;
	// lbz r8,4(r31)
	ctx.current_instruction = 0x881D3768;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// std r31,-312(r1)
	ctx.current_instruction = 0x881D3770;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.r31.u64);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// std r25,-208(r1)
	ctx.current_instruction = 0x881D3778;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r25.u64);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// add r24,r6,r31
	ctx.r24.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lbz r10,0(r26)
	ctx.current_instruction = 0x881D3784;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// rlwinm r22,r7,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r28,4(r26)
	ctx.current_instruction = 0x881D378C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r26.u32 + 4);
	// rotlwi r27,r11,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r29,-4(r3)
	ctx.current_instruction = 0x881D3794;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r3.u32 + -4);
	// add r17,r9,r10
	ctx.r17.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r7,r28,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r28.u64;
	// lbz r30,4(r3)
	ctx.current_instruction = 0x881D37A0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r4,0(r24)
	ctx.current_instruction = 0x881D37A4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// subf r15,r11,r8
	ctx.r15.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r23,r7,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,0(r3)
	ctx.current_instruction = 0x881D37B0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// add r3,r27,r29
	ctx.r3.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lbz r6,-4(r26)
	ctx.current_instruction = 0x881D37B8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r26.u32 + -4);
	// subf r19,r4,r23
	ctx.r19.u64 = ctx.r23.u64 - ctx.r4.u64;
	// lbz r23,4(r24)
	ctx.current_instruction = 0x881D37C0;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbzx r22,r22,r31
	ctx.current_instruction = 0x881D37C8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r31.u32);
	// subf r19,r6,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r6.u64;
	// lbz r27,8(r26)
	ctx.current_instruction = 0x881D37D0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r26.u32 + 8);
	// rlwinm r18,r3,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r26,-4(r24)
	ctx.current_instruction = 0x881D37D8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r24.u32 + -4);
	// add r3,r19,r23
	ctx.r3.u64 = ctx.r19.u64 + ctx.r23.u64;
	// lbz r24,8(r24)
	ctx.current_instruction = 0x881D37E0;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r24.u32 + 8);
	// subf r19,r23,r18
	ctx.r19.u64 = ctx.r18.u64 - ctx.r23.u64;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r18,r22,r19
	ctx.r18.u64 = ctx.r19.u64 - ctx.r22.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r18,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// stw r3,-304(r1)
	ctx.current_instruction = 0x881D37FC;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r3.u32);
	// stw r19,-300(r1)
	ctx.current_instruction = 0x881D3800;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r19.u32);
	// add r19,r30,r6
	ctx.r19.u64 = ctx.r30.u64 + ctx.r6.u64;
	// rlwinm r3,r17,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r19,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r3,r4
	ctx.r19.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r17,r26,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r26.u64;
	// add r3,r19,r5
	ctx.r3.u64 = ctx.r19.u64 + ctx.r5.u64;
	// subf r19,r27,r17
	ctx.r19.u64 = ctx.r17.u64 - ctx.r27.u64;
	// subf r16,r30,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r30.u64;
	// rlwinm r17,r19,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r3,3,0,28
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r19,r17,r24
	ctx.r19.u64 = ctx.r17.u64 + ctx.r24.u64;
	// subf r17,r3,r14
	ctx.r17.u64 = ctx.r14.u64 - ctx.r3.u64;
	// stw r19,-296(r1)
	ctx.current_instruction = 0x881D3834;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r19.u32);
	// subf r19,r5,r16
	ctx.r19.u64 = ctx.r16.u64 - ctx.r5.u64;
	// lwz r16,-296(r1)
	ctx.current_instruction = 0x881D383C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r3,r16,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r9
	ctx.r19.u64 = ctx.r19.u64 + ctx.r9.u64;
	// lwz r31,-304(r1)
	ctx.current_instruction = 0x881D3848;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r17,r17,r3
	ctx.r17.u64 = ctx.r17.u64 + ctx.r3.u64;
	// rlwinm r16,r19,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r3,r29,r22
	ctx.r3.u64 = ctx.r22.u64 - ctx.r29.u64;
	// subf r19,r19,r16
	ctx.r19.u64 = ctx.r16.u64 - ctx.r19.u64;
	// lwz r16,-300(r1)
	ctx.current_instruction = 0x881D385C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 + ctx.r26.u64;
	// add r14,r7,r8
	ctx.r14.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r14,r14,13
	ctx.r14.s64 = static_cast<int64_t>(ctx.r14.u64 * static_cast<uint64_t>(13));
	// stw r16,-300(r1)
	ctx.current_instruction = 0x881D3870;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r16.u32);
	// lwz r25,-300(r1)
	ctx.current_instruction = 0x881D3874;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r31,-304(r1)
	ctx.current_instruction = 0x881D3878;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r31.u32);
	// add r18,r18,r25
	ctx.r18.u64 = ctx.r18.u64 + ctx.r25.u64;
	// rlwinm r16,r3,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r17,r18
	ctx.r18.u64 = ctx.r17.u64 + ctx.r18.u64;
	// add r3,r3,r16
	ctx.r3.u64 = ctx.r3.u64 + ctx.r16.u64;
	// rotlwi r17,r31,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// add r19,r17,r19
	ctx.r19.u64 = ctx.r17.u64 + ctx.r19.u64;
	// subf r17,r29,r9
	ctx.r17.u64 = ctx.r9.u64 - ctx.r29.u64;
	// add r19,r19,r3
	ctx.r19.u64 = ctx.r19.u64 + ctx.r3.u64;
	// subf r18,r14,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r14.u64;
	// mulli r3,r15,11
	ctx.r3.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(11));
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r11,r10
	ctx.r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r14,r23,r4
	ctx.r14.u64 = ctx.r4.u64 - ctx.r23.u64;
	// add r3,r19,r3
	ctx.r3.u64 = ctx.r19.u64 + ctx.r3.u64;
	// srawi r16,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r18.s32 >> 1;
	// subf r17,r5,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r5.u64;
	// stw r3,-288(r1)
	ctx.current_instruction = 0x881D38BC;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r3.u32);
	// subf r15,r6,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r6.u64;
	// rotlwi r18,r11,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r14,r22,r14
	ctx.r14.u64 = ctx.r14.u64 - ctx.r22.u64;
	// subf r3,r6,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r6.u64;
	// add r18,r11,r18
	ctx.r18.u64 = ctx.r11.u64 + ctx.r18.u64;
	// rlwinm r19,r15,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r9,r14
	ctx.r15.u64 = ctx.r14.u64 - ctx.r9.u64;
	// stw r18,-264(r1)
	ctx.current_instruction = 0x881D38DC;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r18.u32);
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// subf r18,r10,r15
	ctx.r18.u64 = ctx.r15.u64 - ctx.r10.u64;
	// add r15,r3,r22
	ctx.r15.u64 = ctx.r3.u64 + ctx.r22.u64;
	// add r22,r18,r29
	ctx.r22.u64 = ctx.r18.u64 + ctx.r29.u64;
	// subf r19,r4,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r4.u64;
	// add r22,r22,r5
	ctx.r22.u64 = ctx.r22.u64 + ctx.r5.u64;
	// subf r17,r7,r30
	ctx.r17.u64 = ctx.r30.u64 - ctx.r7.u64;
	// add r22,r22,r28
	ctx.r22.u64 = ctx.r22.u64 + ctx.r28.u64;
	// add r19,r19,r26
	ctx.r19.u64 = ctx.r19.u64 + ctx.r26.u64;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r4,r8
	ctx.r14.u64 = ctx.r8.u64 - ctx.r4.u64;
	// stw r22,-300(r1)
	ctx.current_instruction = 0x881D390C;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r22.u32);
	// subf r3,r8,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r8.u64;
	// lwz r31,-300(r1)
	ctx.current_instruction = 0x881D3914;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r17,r19,r7
	ctx.r17.u64 = ctx.r19.u64 + ctx.r7.u64;
	// subf r19,r30,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r30.u64;
	// mullw r20,r16,r20
	ctx.r20.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r20.s32);
	// stw r20,-292(r1)
	ctx.current_instruction = 0x881D3924;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r20.u32);
	// add r19,r19,r10
	ctx.r19.u64 = ctx.r19.u64 + ctx.r10.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r19,-296(r1)
	ctx.current_instruction = 0x881D3930;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r19.u32);
	// subf r20,r8,r30
	ctx.r20.u64 = ctx.r30.u64 - ctx.r8.u64;
	// rlwinm r18,r3,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r15,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,-304(r1)
	ctx.current_instruction = 0x881D3940;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r18.u32);
	// rlwinm r18,r20,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r24,r22
	ctx.r16.u64 = ctx.r22.u64 - ctx.r24.u64;
	// rlwinm r19,r17,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r20,r18
	ctx.r20.u64 = ctx.r20.u64 + ctx.r18.u64;
	// rotlwi r18,r29,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// add r20,r19,r20
	ctx.r20.u64 = ctx.r19.u64 + ctx.r20.u64;
	// add r25,r16,r27
	ctx.r25.u64 = ctx.r16.u64 + ctx.r27.u64;
	// lwz r16,-264(r1)
	ctx.current_instruction = 0x881D3960;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// add r19,r29,r18
	ctx.r19.u64 = ctx.r29.u64 + ctx.r18.u64;
	// std r8,-264(r1)
	ctx.current_instruction = 0x881D3968;
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r8.u64);
	// rotlwi r17,r7,1
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwz r18,-304(r1)
	ctx.current_instruction = 0x881D3970;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// rotlwi r14,r9,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r8,-292(r1)
	ctx.current_instruction = 0x881D3978;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// subf r20,r19,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r19.u64;
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// lwz r22,-296(r1)
	ctx.current_instruction = 0x881D3984;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r17,r17,r10
	ctx.r17.u64 = ctx.r17.u64 + ctx.r10.u64;
	// rlwinm r18,r25,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,-288(r1)
	ctx.current_instruction = 0x881D3990;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// mr r15,r22
	ctx.r15.u64 = ctx.r22.u64;
	// rlwinm r22,r22,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r22,-292(r1)
	ctx.current_instruction = 0x881D39A0;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r22.u32);
	// subf r22,r9,r14
	ctx.r22.u64 = ctx.r14.u64 - ctx.r9.u64;
	// lwz r19,-292(r1)
	ctx.current_instruction = 0x881D39A8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// subf r19,r15,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r15.u64;
	// add r15,r31,r3
	ctx.r15.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lwz r3,-236(r1)
	ctx.current_instruction = 0x881D39B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// subf r23,r28,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r28.u64;
	// add r31,r20,r22
	ctx.r31.u64 = ctx.r20.u64 + ctx.r22.u64;
	// add r20,r18,r19
	ctx.r20.u64 = ctx.r18.u64 + ctx.r19.u64;
	// subf r14,r11,r7
	ctx.r14.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r25,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 1;
	// subf r17,r16,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r16.u64;
	// rlwinm r19,r23,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r22,r14,11
	ctx.r22.s64 = static_cast<int64_t>(ctx.r14.u64 * static_cast<uint64_t>(11));
	// subf r15,r26,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r26.u64;
	// add r22,r20,r22
	ctx.r22.u64 = ctx.r20.u64 + ctx.r22.u64;
	// srawi r14,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r31.s32 >> 1;
	// subf r17,r4,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r4.u64;
	// mullw r18,r25,r3
	ctx.r18.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r3.s32);
	// add r23,r23,r19
	ctx.r23.u64 = ctx.r23.u64 + ctx.r19.u64;
	// subf r20,r27,r15
	ctx.r20.u64 = ctx.r15.u64 - ctx.r27.u64;
	// lwz r15,-240(r1)
	ctx.current_instruction = 0x881D39F4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r18,r8,r18
	ctx.r18.u64 = ctx.r8.u64 + ctx.r18.u64;
	// mullw r19,r14,r21
	ctx.r19.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r21.s32);
	// srawi r17,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 1;
	// add r24,r20,r24
	ctx.r24.u64 = ctx.r20.u64 + ctx.r24.u64;
	// lwz r20,-280(r1)
	ctx.current_instruction = 0x881D3A08;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r22,r22,r23
	ctx.r22.u64 = ctx.r22.u64 + ctx.r23.u64;
	// subf r14,r9,r29
	ctx.r14.u64 = ctx.r29.u64 - ctx.r9.u64;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r23,r18,r19
	ctx.r23.u64 = ctx.r18.u64 + ctx.r19.u64;
	// rlwinm r29,r17,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 8) & 0xFFFFFF00;
	// add r24,r24,r6
	ctx.r24.u64 = ctx.r24.u64 + ctx.r6.u64;
	// srawi r22,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 1;
	// subf r19,r6,r8
	ctx.r19.u64 = ctx.r8.u64 - ctx.r6.u64;
	// add r8,r23,r29
	ctx.r8.u64 = ctx.r23.u64 + ctx.r29.u64;
	// mullw r29,r24,r3
	ctx.r29.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r3.s32);
	// stw r8,-288(r1)
	ctx.current_instruction = 0x881D3A34;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r8.u32);
	// ld r8,-264(r1)
	ctx.current_instruction = 0x881D3A38;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// mullw r23,r22,r20
	ctx.r23.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r20.s32);
	// rlwinm r24,r19,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r23,r29
	ctx.r23.u64 = ctx.r23.u64 + ctx.r29.u64;
	// rlwinm r22,r14,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r5,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r5.u64;
	// subf r24,r10,r28
	ctx.r24.u64 = ctx.r28.u64 - ctx.r10.u64;
	// subf r18,r26,r22
	ctx.r18.u64 = ctx.r22.u64 - ctx.r26.u64;
	// subf r26,r7,r30
	ctx.r26.u64 = ctx.r30.u64 - ctx.r7.u64;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// rlwinm r24,r24,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r14,r29,r27
	ctx.r14.u64 = ctx.r29.u64 + ctx.r27.u64;
	// rlwinm r22,r26,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r30,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r30.u64;
	// subf r30,r30,r18
	ctx.r30.u64 = ctx.r18.u64 - ctx.r30.u64;
	// subf r29,r8,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r19,r8,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r26,r22
	ctx.r22.u64 = ctx.r26.u64 + ctx.r22.u64;
	// rotlwi r17,r28,2
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// rlwinm r18,r14,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r8,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r8.u64;
	// rlwinm r26,r29,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r9
	ctx.r19.u64 = ctx.r19.u64 + ctx.r9.u64;
	// subf r14,r7,r30
	ctx.r14.u64 = ctx.r30.u64 - ctx.r7.u64;
	// add r28,r28,r17
	ctx.r28.u64 = ctx.r28.u64 + ctx.r17.u64;
	// add r18,r18,r22
	ctx.r18.u64 = ctx.r18.u64 + ctx.r22.u64;
	// subf r24,r9,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r9.u64;
	// subf r30,r7,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rotlwi r17,r10,3
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// rlwinm r31,r19,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r28,r18
	ctx.r28.u64 = ctx.r18.u64 - ctx.r28.u64;
	// subf r19,r10,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r10.u64;
	// subf r18,r27,r24
	ctx.r18.u64 = ctx.r24.u64 - ctx.r27.u64;
	// rlwinm r22,r30,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r10,r17
	ctx.r26.u64 = ctx.r17.u64 - ctx.r10.u64;
	// subf r29,r9,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r9.u64;
	// subf r24,r16,r31
	ctx.r24.u64 = ctx.r31.u64 - ctx.r16.u64;
	// add r27,r19,r4
	ctx.r27.u64 = ctx.r19.u64 + ctx.r4.u64;
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// add r22,r29,r5
	ctx.r22.u64 = ctx.r29.u64 + ctx.r5.u64;
	// subf r24,r5,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r5.u64;
	// add r28,r18,r7
	ctx.r28.u64 = ctx.r18.u64 + ctx.r7.u64;
	// add r29,r27,r8
	ctx.r29.u64 = ctx.r27.u64 + ctx.r8.u64;
	// srawi r27,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r26.s32 >> 1;
	// add r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 + ctx.r5.u64;
	// subf r30,r10,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r10.u64;
	// srawi r26,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r24.s32 >> 1;
	// srawi r28,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r22.s32 >> 1;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r24,r30,r4
	ctx.r24.u64 = ctx.r30.u64 + ctx.r4.u64;
	// mullw r4,r28,r3
	ctx.r4.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// add r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r28,r29,r6
	ctx.r28.u64 = ctx.r29.u64 + ctx.r6.u64;
	// mullw r5,r26,r20
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r20.s32);
	// lwz r29,-256(r1)
	ctx.current_instruction = 0x881D3B1C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// ld r25,-208(r1)
	ctx.current_instruction = 0x881D3B20;
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// ld r31,-312(r1)
	ctx.current_instruction = 0x881D3B24;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// srawi r26,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r24.s32 >> 1;
	// lwz r24,-288(r1)
	ctx.current_instruction = 0x881D3B2C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r22,r9,r11
	ctx.r22.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r19,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r8.s32 >> 1;
	// add r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mullw r8,r26,r29
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r18,r30,r6
	ctx.r18.u64 = ctx.r30.u64 + ctx.r6.u64;
	// subf r30,r10,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r4,r28,r21
	ctx.r4.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r21.s32);
	// srawi r28,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 1;
	// mullw r9,r19,r21
	ctx.r9.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r21.s32);
	// mullw r5,r18,r3
	ctx.r5.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r3.s32);
	// mullw r7,r27,r20
	ctx.r7.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r20.s32);
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r23,r4
	ctx.r4.u64 = ctx.r23.u64 + ctx.r4.u64;
	// mullw r9,r28,r25
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r25.s32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mullw r6,r6,r21
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r21.s32);
	// mullw r8,r4,r29
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// mullw r24,r24,r15
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r15.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r24,r8
	ctx.r9.u64 = ctx.r24.u64 + ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r8,r3,r25
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x881d3bbc
	if (!ctx.cr6.gt) goto loc_881D3BBC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x881d3bc8
	goto loc_881D3BC8;
loc_881D3BBC:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_881D3BC8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-320(r1)
	ctx.current_instruction = 0x881D3BCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r3,20(r1)
	ctx.current_instruction = 0x881D3BD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r10,4(r11)
	ctx.current_instruction = 0x881D3BD8;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-320(r1)
	ctx.current_instruction = 0x881D3BE0;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// bdnz 0x881d374c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881D374C;
	// lwz r31,-272(r1)
	ctx.current_instruction = 0x881D3BE8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r7,-248(r1)
	ctx.current_instruction = 0x881D3BF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r29,-268(r1)
	ctx.current_instruction = 0x881D3BF4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// b 0x881d3eb4
	goto loc_881D3EB4;
loc_881D3BFC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_881D3C00:
	// blt cr6,0x881d3da8
	if (ctx.cr6.lt) goto loc_881D3DA8;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D3C04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d3da8
	if (!ctx.cr6.lt) goto loc_881D3DA8;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D3C18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// std r5,-224(r1)
	ctx.current_instruction = 0x881D3C28;
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r5.u64);
	// lfd f13,-224(r1)
	ctx.current_instruction = 0x881D3C2C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// stw r9,8228(r10)
	ctx.current_instruction = 0x881D3C34;
	REX_STORE_U32(ctx.r10.u32 + 8228, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// lbzx r8,r8,r7
	ctx.current_instruction = 0x881D3C44;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r10)
	ctx.current_instruction = 0x881D3C4C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,0(r9)
	ctx.current_instruction = 0x881D3C50;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,4(r9)
	ctx.current_instruction = 0x881D3C54;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// mullw r6,r5,r25
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	ctx.current_instruction = 0x881D3C60;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r28,-308(r1)
	ctx.current_instruction = 0x881D3C64;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r5,r9,r28
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// subfic r9,r28,256
	ctx.xer.ca = ctx.r28.u32 <= 256;
	ctx.r9.u64 = static_cast<uint64_t>(256) - ctx.r28.u64;
	// mullw r27,r5,r25
	ctx.r27.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// subf r26,r25,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r25.u64;
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// srawi r9,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 8;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stb r6,4(r11)
	ctx.current_instruction = 0x881D3CA0;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lwz r4,80(r3)
	ctx.current_instruction = 0x881D3CA4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r5,5(r10)
	ctx.current_instruction = 0x881D3CB0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,1(r10)
	ctx.current_instruction = 0x881D3CB4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r4,5(r9)
	ctx.current_instruction = 0x881D3CB8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r9,1(r9)
	ctx.current_instruction = 0x881D3CBC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r6,r9,r25
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mullw r4,r5,r28
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// mullw r5,r26,r8
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,5(r11)
	ctx.current_instruction = 0x881D3CF4;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D3CF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r5,6(r10)
	ctx.current_instruction = 0x881D3D04;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r8,2(r10)
	ctx.current_instruction = 0x881D3D08;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r4,6(r9)
	ctx.current_instruction = 0x881D3D0C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r9,2(r9)
	ctx.current_instruction = 0x881D3D10;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r6,r9,r25
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mullw r4,r5,r28
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// mullw r5,r26,r8
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,6(r11)
	ctx.current_instruction = 0x881D3D48;
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// lwz r8,80(r3)
	ctx.current_instruction = 0x881D3D4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,3(r10)
	ctx.current_instruction = 0x881D3D54;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,7(r10)
	ctx.current_instruction = 0x881D3D58;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r6,r26,r9
	ctx.r6.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// lbz r4,3(r10)
	ctx.current_instruction = 0x881D3D64;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r10,7(r10)
	ctx.current_instruction = 0x881D3D68;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r8,r4,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r10,r5,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r5.u64;
	// mullw r8,r4,r25
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// mullw r4,r9,r25
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,7(r11)
	ctx.current_instruction = 0x881D3DA0;
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// b 0x881d3eac
	goto loc_881D3EAC;
loc_881D3DA8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d3ea8
	if (!ctx.cr6.gt) goto loc_881D3EA8;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D3DB0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d3ea8
	if (!ctx.cr6.lt) goto loc_881D3EA8;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// std r5,-216(r1)
	ctx.current_instruction = 0x881D3DCC;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r5.u64);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r5,r8,r7
	ctx.current_instruction = 0x881D3DD4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stw r9,8228(r10)
	ctx.current_instruction = 0x881D3DD8;
	REX_STORE_U32(ctx.r10.u32 + 8228, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r4,r10
	ctx.current_instruction = 0x881D3DE0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r6,r4,r25
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// lfd f13,-216(r1)
	ctx.current_instruction = 0x881D3DE8;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	ctx.current_instruction = 0x881D3DF8;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r9,-308(r1)
	ctx.current_instruction = 0x881D3DFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r4,4(r11)
	ctx.current_instruction = 0x881D3E24;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// lbz r8,1(r10)
	ctx.current_instruction = 0x881D3E28;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r4,80(r3)
	ctx.current_instruction = 0x881D3E2C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r8,r28,r8
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// lbz r4,1(r9)
	ctx.current_instruction = 0x881D3E3C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r9,r4,r25
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,5(r11)
	ctx.current_instruction = 0x881D3E4C;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r8,2(r10)
	ctx.current_instruction = 0x881D3E50;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r4,80(r3)
	ctx.current_instruction = 0x881D3E54;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lbz r5,2(r9)
	ctx.current_instruction = 0x881D3E64;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r9,r5,r25
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// stb r9,6(r11)
	ctx.current_instruction = 0x881D3E74;
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// lbz r5,3(r10)
	ctx.current_instruction = 0x881D3E78;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lwz r4,80(r3)
	ctx.current_instruction = 0x881D3E7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lbz r8,3(r10)
	ctx.current_instruction = 0x881D3E8C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r10,r8,r25
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,7(r11)
	ctx.current_instruction = 0x881D3EA0;
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r4.u8);
	// b 0x881d3eac
	goto loc_881D3EAC;
loc_881D3EA8:
	// stb r30,4(r11)
	ctx.current_instruction = 0x881D3EA8;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
loc_881D3EAC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,-320(r1)
	ctx.current_instruction = 0x881D3EB0;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
loc_881D3EB4:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D3EB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,-272(r1)
	ctx.current_instruction = 0x881D3EBC;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r31.u32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881d36d0
	if (ctx.cr6.lt) goto loc_881D36D0;
	// b 0x881d436c
	goto loc_881D436C;
loc_881D3ECC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_881D3ED0:
	// blt cr6,0x881d41cc
	if (ctx.cr6.lt) goto loc_881D41CC;
	// lwz r9,84(r3)
	ctx.current_instruction = 0x881D3ED4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d41cc
	if (!ctx.cr6.lt) goto loc_881D41CC;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D3EE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d436c
	if (!ctx.cr6.gt) goto loc_881D436C;
loc_881D3EF4:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-312(r1)
	ctx.current_instruction = 0x881D3EFC;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f13.u64);
	// lwz r10,-308(r1)
	ctx.current_instruction = 0x881D3F00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881d41b0
	if (ctx.cr6.lt) goto loc_881D41B0;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D3F0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d40b0
	if (!ctx.cr6.lt) goto loc_881D40B0;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D3F20;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// std r5,-200(r1)
	ctx.current_instruction = 0x881D3F30;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r5.u64);
	// lfd f13,-200(r1)
	ctx.current_instruction = 0x881D3F34;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// stw r9,8228(r10)
	ctx.current_instruction = 0x881D3F3C;
	REX_STORE_U32(ctx.r10.u32 + 8228, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// lbzx r8,r8,r7
	ctx.current_instruction = 0x881D3F4C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r10)
	ctx.current_instruction = 0x881D3F54;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,0(r9)
	ctx.current_instruction = 0x881D3F58;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,4(r9)
	ctx.current_instruction = 0x881D3F5C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// mullw r6,r5,r25
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	ctx.current_instruction = 0x881D3F68;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r28,-308(r1)
	ctx.current_instruction = 0x881D3F6C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subfic r27,r28,256
	ctx.xer.ca = ctx.r28.u32 <= 256;
	ctx.r27.u64 = static_cast<uint64_t>(256) - ctx.r28.u64;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r27,r25,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r25.u64;
	// mullw r4,r9,r28
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// mullw r9,r4,r25
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// mullw r8,r27,r8
	ctx.r8.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stb r6,4(r11)
	ctx.current_instruction = 0x881D3FA8;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lwz r4,80(r3)
	ctx.current_instruction = 0x881D3FAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r26,5(r10)
	ctx.current_instruction = 0x881D3FB8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,1(r10)
	ctx.current_instruction = 0x881D3FBC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r4,5(r9)
	ctx.current_instruction = 0x881D3FC0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r9,1(r9)
	ctx.current_instruction = 0x881D3FC4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r6,r9,r25
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mullw r5,r27,r8
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// subf r9,r26,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r26.u64;
	// mullw r4,r26,r28
	ctx.r4.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,5(r11)
	ctx.current_instruction = 0x881D3FFC;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// lbz r6,6(r10)
	ctx.current_instruction = 0x881D4000;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r8,2(r10)
	ctx.current_instruction = 0x881D4004;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r5,80(r3)
	ctx.current_instruction = 0x881D4008;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r4,r6,r28
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// lbz r5,6(r9)
	ctx.current_instruction = 0x881D4018;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r26,2(r9)
	ctx.current_instruction = 0x881D401C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// subf r9,r26,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r26.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// mullw r5,r27,r8
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r6,r26,r25
	ctx.r6.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r25.s32);
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,6(r11)
	ctx.current_instruction = 0x881D4050;
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// lbz r9,3(r10)
	ctx.current_instruction = 0x881D4054;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r6,r27,r9
	ctx.r6.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r9.s32);
	// lwz r8,80(r3)
	ctx.current_instruction = 0x881D405C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,7(r10)
	ctx.current_instruction = 0x881D4064;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// lbz r27,7(r10)
	ctx.current_instruction = 0x881D4070;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r10,3(r10)
	ctx.current_instruction = 0x881D4074;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r8,r10,r25
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// subf r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r4,r9,r28
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// mullw r10,r4,r25
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stb r6,7(r11)
	ctx.current_instruction = 0x881D40A8;
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// b 0x881d41b4
	goto loc_881D41B4;
loc_881D40B0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d41b0
	if (!ctx.cr6.gt) goto loc_881D41B0;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881D40B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x881d41b0
	if (!ctx.cr6.lt) goto loc_881D41B0;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// std r5,-184(r1)
	ctx.current_instruction = 0x881D40D4;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r5.u64);
	// lfd f13,-184(r1)
	ctx.current_instruction = 0x881D40D8;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// stw r9,8228(r10)
	ctx.current_instruction = 0x881D40E8;
	REX_STORE_U32(ctx.r10.u32 + 8228, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r5,r8,r7
	ctx.current_instruction = 0x881D40F0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lbzx r4,r4,r10
	ctx.current_instruction = 0x881D40F4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r6,r4,r25
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	ctx.current_instruction = 0x881D4100;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r9,-308(r1)
	ctx.current_instruction = 0x881D4104;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r25.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r4,4(r11)
	ctx.current_instruction = 0x881D412C;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// lbz r8,1(r10)
	ctx.current_instruction = 0x881D4130;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r4,80(r3)
	ctx.current_instruction = 0x881D4134;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r8,r28,r8
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// lbz r4,1(r9)
	ctx.current_instruction = 0x881D4144;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r9,r4,r25
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,5(r11)
	ctx.current_instruction = 0x881D4154;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r9,2(r10)
	ctx.current_instruction = 0x881D4158;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// mullw r8,r5,r9
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// lwz r5,80(r3)
	ctx.current_instruction = 0x881D4160;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,2(r4)
	ctx.current_instruction = 0x881D416C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// stb r5,6(r11)
	ctx.current_instruction = 0x881D417C;
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// lbz r8,3(r10)
	ctx.current_instruction = 0x881D4180;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lwz r5,80(r3)
	ctx.current_instruction = 0x881D4184;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r9,r6,r8
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lbz r10,3(r4)
	ctx.current_instruction = 0x881D4194;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stb r6,7(r11)
	ctx.current_instruction = 0x881D41A8;
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// b 0x881d41b4
	goto loc_881D41B4;
loc_881D41B0:
	// stb r30,4(r11)
	ctx.current_instruction = 0x881D41B0;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
loc_881D41B4:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D41B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881d3ef4
	if (ctx.cr6.lt) goto loc_881D3EF4;
	// b 0x881d4368
	goto loc_881D4368;
loc_881D41CC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d4344
	if (!ctx.cr6.gt) goto loc_881D4344;
	// lwz r9,84(r3)
	ctx.current_instruction = 0x881D41D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d4344
	if (!ctx.cr6.lt) goto loc_881D4344;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D41E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d436c
	if (!ctx.cr6.gt) goto loc_881D436C;
loc_881D41F0:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-312(r1)
	ctx.current_instruction = 0x881D41F8;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f13.u64);
	// lwz r10,-308(r1)
	ctx.current_instruction = 0x881D41FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x881d4328
	if (ctx.cr6.lt) goto loc_881D4328;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D4208;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d42dc
	if (!ctx.cr6.lt) goto loc_881D42DC;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// std r6,-168(r1)
	ctx.current_instruction = 0x881D4228;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// lbzx r4,r8,r7
	ctx.current_instruction = 0x881D422C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stw r9,8228(r10)
	ctx.current_instruction = 0x881D4230;
	REX_STORE_U32(ctx.r10.u32 + 8228, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r8,4(r10)
	ctx.current_instruction = 0x881D4238;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lfd f13,-168(r1)
	ctx.current_instruction = 0x881D423C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	ctx.current_instruction = 0x881D424C;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r31,-308(r1)
	ctx.current_instruction = 0x881D4250;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subfic r6,r31,256
	ctx.xer.ca = ctx.r31.u32 <= 256;
	ctx.r6.u64 = static_cast<uint64_t>(256) - ctx.r31.u64;
	// subf r9,r25,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r25.u64;
	// mullw r6,r8,r31
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// add r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r28,r9,r25
	ctx.r28.u64 = ctx.r9.u64 + ctx.r25.u64;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r4,r9,r25
	ctx.r4.u64 = ctx.r9.u64 + ctx.r25.u64;
	// srawi r8,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 8;
	// add r6,r9,r25
	ctx.r6.u64 = ctx.r9.u64 + ctx.r25.u64;
	// stb r8,4(r11)
	ctx.current_instruction = 0x881D427C;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r8,5(r10)
	ctx.current_instruction = 0x881D4280;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r9,1(r10)
	ctx.current_instruction = 0x881D4284;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,5(r11)
	ctx.current_instruction = 0x881D4298;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r8,6(r10)
	ctx.current_instruction = 0x881D429C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r9,2(r10)
	ctx.current_instruction = 0x881D42A0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// stb r9,6(r11)
	ctx.current_instruction = 0x881D42B4;
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// lbz r6,7(r10)
	ctx.current_instruction = 0x881D42B8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// mullw r9,r6,r31
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// lbz r10,3(r10)
	ctx.current_instruction = 0x881D42C0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stb r6,7(r11)
	ctx.current_instruction = 0x881D42D4;
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// b 0x881d432c
	goto loc_881D432C;
loc_881D42DC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881d4328
	if (!ctx.cr6.gt) goto loc_881D4328;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x881D42E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881d4328
	if (!ctx.cr6.lt) goto loc_881D4328;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// lbz r6,0(r10)
	ctx.current_instruction = 0x881D4300;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,8228(r8)
	ctx.current_instruction = 0x881D4304;
	REX_STORE_U32(ctx.r8.u32 + 8228, ctx.r9.u32);
	// stb r6,4(r11)
	ctx.current_instruction = 0x881D4308;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lbz r4,1(r10)
	ctx.current_instruction = 0x881D430C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r4,5(r11)
	ctx.current_instruction = 0x881D4310;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
	// lbz r9,2(r10)
	ctx.current_instruction = 0x881D4314;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,6(r11)
	ctx.current_instruction = 0x881D4318;
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// lbz r8,3(r10)
	ctx.current_instruction = 0x881D431C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r8,7(r11)
	ctx.current_instruction = 0x881D4320;
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// b 0x881d432c
	goto loc_881D432C;
loc_881D4328:
	// stb r30,4(r11)
	ctx.current_instruction = 0x881D4328;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
loc_881D432C:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x881D432C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881d41f0
	if (ctx.cr6.lt) goto loc_881D41F0;
	// b 0x881d4368
	goto loc_881D4368;
loc_881D4344:
	// lwz r9,88(r3)
	ctx.current_instruction = 0x881D4344;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881d436c
	if (!ctx.cr6.gt) goto loc_881D436C;
loc_881D4354:
	// stbu r30,4(r11)
	ctx.current_instruction = 0x881D4354;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,88(r3)
	ctx.current_instruction = 0x881D435C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881d4354
	if (ctx.cr6.lt) goto loc_881D4354;
loc_881D4368:
	// stw r11,-320(r1)
	ctx.current_instruction = 0x881D4368;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
loc_881D436C:
	// lwz r10,92(r3)
	ctx.current_instruction = 0x881D436C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r29,-268(r1)
	ctx.current_instruction = 0x881D4374;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r29.u32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881d3604
	if (ctx.cr6.lt) goto loc_881D3604;
loc_881D4380:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_79) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEDEC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEDEC;
	ctx.current_instruction = 0x881EEDEC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_88) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE34);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE34;
	ctx.current_instruction = 0x881EEE34;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_76) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF06C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF06C;
	ctx.current_instruction = 0x881EF06C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_118) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF1BC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF1BC;
	ctx.current_instruction = 0x881EF1BC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savefpr_28) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF288);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF288;
	ctx.current_instruction = 0x881EF288;
	// stfd f28,-32(r12)
	ctx.current_instruction = 0x881EF288;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(__restfpr_21) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF2B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF2B8;
	ctx.current_instruction = 0x881EF2B8;
	// lfd f21,-88(r12)
	ctx.current_instruction = 0x881EF2B8;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_881F04B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F04B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F04B0) {
			switch (rex_dispatch_address) {
				case 0x881F04E8:
				case 0x881F04F4:
				case 0x881F0534:
				case 0x881F0540:
				case 0x881F0550:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F04B0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F04E8: goto loc_881F04E8;
		case 0x881F04F4: goto loc_881F04F4;
		case 0x881F0534: goto loc_881F0534;
		case 0x881F0540: goto loc_881F0540;
		case 0x881F0550: goto loc_881F0550;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F04B4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881F04B8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881F04BC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F04C4;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	ctx.current_instruction = 0x881F04CC;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	ctx.current_instruction = 0x881F04DC;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne 0x881f04fc
	if (!ctx.cr0.eq) goto loc_881F04FC;
	// bl 0x880529c8
	ctx.lr = 0x881F04E8;
	sub_880529C8(ctx, base);
loc_881F04E8:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F04EC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x881F04F4;
	sub_880523E8(ctx, base);
loc_881F04F4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f0514
	goto loc_881F0514;
loc_881F04FC:
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881F04FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f052c
	if (ctx.cr0.eq) goto loc_881F052C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	ctx.current_instruction = 0x881F050C;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_881F0510:
	// lwz r3,80(r31)
	ctx.current_instruction = 0x881F0510;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_881F0514:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F0518;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881F0520;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881F0524;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881F052C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881ef620
	ctx.lr = 0x881F0534;
	sub_881EF620(ctx, base);
loc_881F0534:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881f0408
	ctx.lr = 0x881F0540;
	sub_881F0408(ctx, base);
loc_881F0540:
	// stw r3,80(r31)
	ctx.current_instruction = 0x881F0540;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x881f0574
	ctx.lr = 0x881F0550;
	sub_881F0574(ctx, base);
loc_881F0550:
	// b 0x881f0510
	goto loc_881F0510;
}

DEFINE_REX_FUNC(sub_881F1C20) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F1C20);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1C20;
	ctx.current_instruction = 0x881F1C20;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,24064
	ctx.r10.s64 = ctx.r10.s64 + 24064;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.current_instruction = 0x881F1C38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x88243660
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F5EC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F5EC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F5EC8) {
			switch (rex_dispatch_address) {
				case 0x881F5ED0:
				case 0x881F5EEC:
				case 0x881F5F04:
				case 0x881F5F1C:
				case 0x881F5F34:
				case 0x881F5F60:
				case 0x881F5F68:
				case 0x881F5FA0:
				case 0x881F5FAC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F5EC8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F5ED0: goto loc_881F5ED0;
		case 0x881F5EEC: goto loc_881F5EEC;
		case 0x881F5F04: goto loc_881F5F04;
		case 0x881F5F1C: goto loc_881F5F1C;
		case 0x881F5F34: goto loc_881F5F34;
		case 0x881F5F60: goto loc_881F5F60;
		case 0x881F5F68: goto loc_881F5F68;
		case 0x881F5FA0: goto loc_881F5FA0;
		case 0x881F5FAC: goto loc_881F5FAC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881F5ED0;
	__savegprlr_28(ctx, base);
loc_881F5ED0:
	// stwu r1,-1664(r1)
	ctx.current_instruction = 0x881F5ED0;
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r28,r3,22432
	ctx.r28.s64 = ctx.r3.s64 + 22432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,24352(r11)
	ctx.current_instruction = 0x881F5EE4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24352);
	// bl 0x881fc868
	ctx.lr = 0x881F5EEC;
	sub_881FC868(ctx, base);
loc_881F5EEC:
	// addi r29,r31,17392
	ctx.r29.s64 = ctx.r31.s64 + 17392;
	// addi r30,r31,15984
	ctx.r30.s64 = ctx.r31.s64 + 15984;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881f2288
	ctx.lr = 0x881F5F04;
	sub_881F2288(ctx, base);
loc_881F5F04:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881f5fc8
	if (!ctx.cr6.eq) goto loc_881F5FC8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881f6240
	ctx.lr = 0x881F5F1C;
	sub_881F6240(ctx, base);
loc_881F5F1C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881f5fc8
	if (!ctx.cr6.eq) goto loc_881F5FC8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881f5110
	ctx.lr = 0x881F5F34;
	sub_881F5110(ctx, base);
loc_881F5F34:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881f5fc8
	if (!ctx.cr6.eq) goto loc_881F5FC8;
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x881F5F3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881f5fa0
	if (ctx.cr6.eq) goto loc_881F5FA0;
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x881F5F48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x881f5f64
	if (!ctx.cr6.eq) goto loc_881F5F64;
	// bl 0x881f5028
	ctx.lr = 0x881F5F60;
	sub_881F5028(ctx, base);
loc_881F5F60:
	// b 0x881f5f68
	goto loc_881F5F68;
loc_881F5F64:
	// bl 0x881f4f60
	ctx.lr = 0x881F5F68;
	sub_881F4F60(ctx, base);
loc_881F5F68:
	// lhz r10,16036(r31)
	ctx.current_instruction = 0x881F5F68;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 16036);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881F5F70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,3784(r31)
	ctx.current_instruction = 0x881F5F7C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r6,3780(r31)
	ctx.current_instruction = 0x881F5F80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,3776(r31)
	ctx.current_instruction = 0x881F5F88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r5,220(r31)
	ctx.current_instruction = 0x881F5F90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bl 0x8817ea48
	ctx.lr = 0x881F5FA0;
	sub_8817EA48(ctx, base);
loc_881F5FA0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881fcbb0
	ctx.lr = 0x881F5FAC;
	sub_881FCBB0(ctx, base);
loc_881F5FAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15624(r31)
	ctx.current_instruction = 0x881F5FB4;
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15628(r31)
	ctx.current_instruction = 0x881F5FBC;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r10.u32);
	// stw r11,15600(r31)
	ctx.current_instruction = 0x881F5FC0;
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r11.u32);
	// stw r11,460(r31)
	ctx.current_instruction = 0x881F5FC4;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
loc_881F5FC8:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882038D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882038D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882038D8) {
			switch (rex_dispatch_address) {
				case 0x882038E0:
				case 0x88203940:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882038D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882038E0: goto loc_882038E0;
		case 0x88203940: goto loc_88203940;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x882038E0;
	__savegprlr_23(ctx, base);
loc_882038E0:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x882038E0;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r29,50(r3)
	ctx.current_instruction = 0x882038E4;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r24,0(r8)
	ctx.current_instruction = 0x882038EC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r31,348(r3)
	ctx.current_instruction = 0x882038F4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// srawi r26,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r29.s32 >> 1;
	// beq cr6,0x88203924
	if (ctx.cr6.eq) goto loc_88203924;
	// lwz r11,1304(r3)
	ctx.current_instruction = 0x8820390C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x88203918;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88203928
	if (ctx.cr6.eq) goto loc_88203928;
loc_88203924:
	// li r25,1
	ctx.r25.s64 = 1;
loc_88203928:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88203940
	if (ctx.cr6.eq) goto loc_88203940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,336(r30)
	ctx.current_instruction = 0x88203938;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x88203940;
	sub_88202E58(ctx, base);
loc_88203940:
	// stw r28,96(r1)
	ctx.current_instruction = 0x88203940;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r28,104(r1)
	ctx.current_instruction = 0x88203948;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r28,100(r1)
	ctx.current_instruction = 0x88203950;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// beq cr6,0x882039f0
	if (ctx.cr6.eq) goto loc_882039F0;
	// lwz r10,-24(r27)
	ctx.current_instruction = 0x88203958;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + -24);
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x882039f0
	if (ctx.cr6.eq) goto loc_882039F0;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x88203988
	if (!ctx.cr6.lt) goto loc_88203988;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x8820397C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r10,80(r1)
	ctx.current_instruction = 0x88203980;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x882039e4
	goto loc_882039E4;
loc_88203988:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.current_instruction = 0x88203994;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r6,r8,r31
	ctx.current_instruction = 0x88203998;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r7,88(r1)
	ctx.current_instruction = 0x8820399C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,84(r1)
	ctx.current_instruction = 0x882039A0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lhz r8,86(r1)
	ctx.current_instruction = 0x882039A4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,84(r1)
	ctx.current_instruction = 0x882039A8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,88(r1)
	ctx.current_instruction = 0x882039AC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r5,90(r1)
	ctx.current_instruction = 0x882039B0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// sth r5,82(r1)
	ctx.current_instruction = 0x882039DC;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r5.u16);
	// sth r4,80(r1)
	ctx.current_instruction = 0x882039E0;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
loc_882039E4:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x882039E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,96(r1)
	ctx.current_instruction = 0x882039EC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_882039F0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x88203b6c
	if (!ctx.cr6.eq) goto loc_88203B6C;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r29,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r29.u64;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r9,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r9.u64;
	// lwz r10,0(r6)
	ctx.current_instruction = 0x88203A0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88203aa8
	if (ctx.cr6.eq) goto loc_88203AA8;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x88203a38
	if (!ctx.cr6.lt) goto loc_88203A38;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.current_instruction = 0x88203A2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,80(r1)
	ctx.current_instruction = 0x88203A30;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x88203a94
	goto loc_88203A94;
loc_88203A38:
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.current_instruction = 0x88203A44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r4,r8,r31
	ctx.current_instruction = 0x88203A48;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x88203A4C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r4,88(r1)
	ctx.current_instruction = 0x88203A50;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lhz r9,90(r1)
	ctx.current_instruction = 0x88203A54;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r7,86(r1)
	ctx.current_instruction = 0x88203A58;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,84(r1)
	ctx.current_instruction = 0x88203A5C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r10,88(r1)
	ctx.current_instruction = 0x88203A60;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// sth r7,82(r1)
	ctx.current_instruction = 0x88203A8C;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// sth r4,80(r1)
	ctx.current_instruction = 0x88203A90;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
loc_88203A94:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88203A94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwx r10,r9,r8
	ctx.current_instruction = 0x88203AA4;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_88203AA8:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x88203b6c
	if (ctx.cr6.eq) goto loc_88203B6C;
	// addi r10,r26,-1
	ctx.r10.s64 = ctx.r26.s64 + -1;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88203ac8
	if (ctx.cr6.eq) goto loc_88203AC8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
	// b 0x88203ad0
	goto loc_88203AD0;
loc_88203AC8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r6,-24
	ctx.r10.s64 = ctx.r6.s64 + -24;
loc_88203AD0:
	// lwz r10,0(r10)
	ctx.current_instruction = 0x88203AD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88203b6c
	if (ctx.cr6.eq) goto loc_88203B6C;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x88203afc
	if (!ctx.cr6.lt) goto loc_88203AFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x88203AF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r10,80(r1)
	ctx.current_instruction = 0x88203AF4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x88203b58
	goto loc_88203B58;
loc_88203AFC:
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.current_instruction = 0x88203B08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r6,r8,r31
	ctx.current_instruction = 0x88203B0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x88203B10;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	ctx.current_instruction = 0x88203B14;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lhz r11,90(r1)
	ctx.current_instruction = 0x88203B18;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r4,86(r1)
	ctx.current_instruction = 0x88203B20;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r9,84(r1)
	ctx.current_instruction = 0x88203B24;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r7,88(r1)
	ctx.current_instruction = 0x88203B28;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// sth r11,82(r1)
	ctx.current_instruction = 0x88203B50;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r10,80(r1)
	ctx.current_instruction = 0x88203B54;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
loc_88203B58:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88203B58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwx r11,r10,r9
	ctx.current_instruction = 0x88203B68;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_88203B6C:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x88203c18
	if (ctx.cr6.lt) goto loc_88203C18;
	// lhz r11,106(r1)
	ctx.current_instruction = 0x88203B74;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r10,102(r1)
	ctx.current_instruction = 0x88203B78;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r9,98(r1)
	ctx.current_instruction = 0x88203B7C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,96(r1)
	ctx.current_instruction = 0x88203B84;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,104(r1)
	ctx.current_instruction = 0x88203B8C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// lhz r4,100(r1)
	ctx.current_instruction = 0x88203B94;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r28,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r28.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r28,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r28.u64;
	// subf r8,r27,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r27.u64;
	// subf r26,r6,r4
	ctx.r26.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r25,r27,r6
	ctx.r25.u64 = ctx.r6.u64 - ctx.r27.u64;
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
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & ctx.r28.u64;
	// andc r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r26.u64;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & ctx.r27.u64;
	// andc r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r25.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 | ctx.r8.u64;
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// b 0x88203c38
	goto loc_88203C38;
loc_88203C18:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r10,96(r1)
	ctx.current_instruction = 0x88203C1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,80(r1)
	ctx.current_instruction = 0x88203C2C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lhz r11,82(r1)
	ctx.current_instruction = 0x88203C30;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,80(r1)
	ctx.current_instruction = 0x88203C34;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_88203C38:
	// lhz r6,62(r30)
	ctx.current_instruction = 0x88203C38;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 62);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lhz r5,64(r30)
	ctx.current_instruction = 0x88203C40;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 64);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// lhz r4,68(r30)
	ctx.current_instruction = 0x88203C4C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 68);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r6,66(r30)
	ctx.current_instruction = 0x88203C54;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 66);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// and r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 & ctx.r4.u64;
	// and r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 & ctx.r9.u64;
	// add r6,r24,r29
	ctx.r6.u64 = ctx.r24.u64 + ctx.r29.u64;
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r4,r10,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r5,80(r1)
	ctx.current_instruction = 0x88203C8C;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r4,82(r1)
	ctx.current_instruction = 0x88203C94;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r4.u16);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88203C9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r9)
	ctx.current_instruction = 0x88203CA8;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r9)
	ctx.current_instruction = 0x88203CAC;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	ctx.current_instruction = 0x88203CB0;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	ctx.current_instruction = 0x88203CB4;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88219820) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88219820;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88219820) {
			switch (rex_dispatch_address) {
				case 0x88219860:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88219820;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88219860: goto loc_88219860;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88219824;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88219828;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,-5
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// vsrh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vaddshs v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// bl 0x88218840
	ctx.lr = 0x88219860;
	sub_88218840(ctx, base);
loc_88219860:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88219864;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_882198C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882198C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882198C0) {
			switch (rex_dispatch_address) {
				case 0x88219900:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882198C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88219900: goto loc_88219900;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x882198C4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x882198C8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,-5
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// vsrh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vaddshs v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// bl 0x88218cf0
	ctx.lr = 0x88219900;
	sub_88218CF0(ctx, base);
loc_88219900:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88219904;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88219D40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88219D40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88219D40) {
			switch (rex_dispatch_address) {
				case 0x88219D48:
				case 0x88219D90:
				case 0x88219DA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88219D40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88219D48: goto loc_88219D48;
		case 0x88219D90: goto loc_88219D90;
		case 0x88219DA8: goto loc_88219DA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88219D48;
	__savegprlr_29(ctx, base);
loc_88219D48:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88219D48;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
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
	// lvx128 v13,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// vaddshs v2,v1,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// vsubshs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88218f60
	ctx.lr = 0x88219D90;
	sub_88218F60(ctx, base);
loc_88219D90:
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
	// bl 0x88219210
	ctx.lr = 0x88219DA8;
	sub_88219210(ctx, base);
loc_88219DA8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821AE68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821AE68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821AE68) {
			switch (rex_dispatch_address) {
				case 0x8821AE70:
				case 0x8821B21C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821AE68;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821AE70: goto loc_8821AE70;
		case 0x8821B21C: goto loc_8821B21C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821AE70;
	__savegprlr_29(ctx, base);
loc_8821AE70:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8821AE70;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r5,1120
	ctx.r5.s64 = 1120;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v9,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, result);
	}
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// lvx128 v10,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// vaddshs v4,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r3,1
	ctx.r3.s64 = 1;
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// vsubshs v2,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// slw r5,r3,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x8821b024
	if (!ctx.cr6.eq) goto loc_8821B024;
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
	// vperm128 v9,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
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
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x8821b20c
	if (!ctx.cr6.gt) goto loc_8821B20C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8821AF38:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v31,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v30,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v26,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vslh v24,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v28,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v23,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v27,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v22,v8,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// vslh v29,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vslh v15,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v26,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v29,v22,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v31,v15
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vsubshs v21,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v20,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vsubshs v19,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v18,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v17,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v16,v20,v4
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v15,v23,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v14,v21,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v31,v17,v15
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v30,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsrah v29,v31,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v29,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x8821af38
	if (ctx.cr6.lt) goto loc_8821AF38;
	// b 0x8821b20c
	goto loc_8821B20C;
loc_8821B024:
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
	// vor128 v8,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v29,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v31,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x8821b20c
	if (!ctx.cr6.gt) goto loc_8821B20C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// li r30,-32
	ctx.r30.s64 = -32;
	// li r31,-16
	ctx.r31.s64 = -16;
loc_8821B0B0:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v28,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v27,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v42,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v26,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v41,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v29,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v19,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v29
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v24,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
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
	// vadduhm v23,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v5,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v14,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// vmrghb v31,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v29,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// vslh v22,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v19,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v18,v25,v14
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v16,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v28,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vadduhm v22,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v21,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v24,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v14,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v19,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v5,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v15,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v21,v27,v21
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v14,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v28,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v27,v20,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v24,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v25,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v23,v15
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v18,v21,v14
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsubshs v16,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vsubshs v17,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v15,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v14,v28,v19
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v28,v27,v18
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v27,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v26,v15,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v25,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v23,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// stvx128 v25,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v23,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v22,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vor128 v2,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x8821b0b0
	if (ctx.cr6.lt) goto loc_8821B0B0;
loc_8821B20C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88219500
	ctx.lr = 0x8821B21C;
	sub_88219500(ctx, base);
loc_8821B21C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88223B88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88223B88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88223B88) {
			switch (rex_dispatch_address) {
				case 0x88223B90:
				case 0x88223DC8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88223B88;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88223B90: goto loc_88223B90;
		case 0x88223DC8: goto loc_88223DC8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88223B90;
	__savegprlr_26(ctx, base);
loc_88223B90:
	// stwu r1,-912(r1)
	ctx.current_instruction = 0x88223B90;
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
	// bne cr6,0x88223d38
	if (!ctx.cr6.eq) goto loc_88223D38;
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
	// b 0x88223d3c
	goto loc_88223D3C;
loc_88223D38:
	// blt cr6,0x88223db4
	if (ctx.cr6.lt) goto loc_88223DB4;
loc_88223D3C:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88223db4
	if (!ctx.cr6.gt) goto loc_88223DB4;
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
loc_88223D70:
	// lbzux r8,r3,r9
	ctx.current_instruction = 0x88223D70;
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r6,r27,r11
	ctx.current_instruction = 0x88223D74;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// rotlwi r30,r8,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r11)
	ctx.current_instruction = 0x88223D7C;
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
	ctx.current_instruction = 0x88223DA4;
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r6.u16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sthu r8,96(r10)
	ctx.current_instruction = 0x88223DAC;
	ea = 96 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88223d70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88223D70;
loc_88223DB4:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r26,r11
	ea = (ctx.r26.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88222df8
	ctx.lr = 0x88223DC8;
	sub_88222DF8(ctx, base);
loc_88223DC8:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88229EF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88229EF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88229EF8) {
			switch (rex_dispatch_address) {
				case 0x88229F00:
				case 0x88229F5C:
				case 0x8822A03C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88229EF8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88229F00: goto loc_88229F00;
		case 0x88229F5C: goto loc_88229F5C;
		case 0x8822A03C: goto loc_8822A03C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88229F00;
	__savegprlr_26(ctx, base);
loc_88229F00:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88229F00;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// lwz r11,24(r6)
	ctx.current_instruction = 0x88229F10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// subfic r27,r5,2
	ctx.xer.ca = ctx.r5.u32 <= 2;
	ctx.r27.u64 = static_cast<uint64_t>(2) - ctx.r5.u64;
	// lwz r4,620(r3)
	ctx.current_instruction = 0x88229F18;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 620);
	// addi r5,r3,168
	ctx.r5.s64 = ctx.r3.s64 + 168;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r8)
	ctx.current_instruction = 0x88229F24;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r30,4(r8)
	ctx.current_instruction = 0x88229F28;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,40(r6)
	ctx.current_instruction = 0x88229F30;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r29,0(r11)
	ctx.current_instruction = 0x88229F38;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r6)
	ctx.current_instruction = 0x88229F3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r26,24(r6)
	ctx.current_instruction = 0x88229F40;
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r26.u32);
	// dcbzl r0,r31
	ea = (ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// blt cr6,0x88229f64
	if (ctx.cr6.lt) goto loc_88229F64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// bl 0x8817db68
	ctx.lr = 0x88229F5C;
	sub_8817DB68(ctx, base);
loc_88229F5C:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x88229fc4
	goto loc_88229FC4;
loc_88229F64:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x88229fc0
	if (!ctx.cr6.gt) goto loc_88229FC0;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_88229F70:
	// lhz r3,0(r11)
	ctx.current_instruction = 0x88229F70;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r29,r3,24,8,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r29,r7
	ctx.r8.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lbzx r29,r10,r4
	ctx.current_instruction = 0x88229F98;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbzx r26,r29,r5
	ctx.current_instruction = 0x88229FAC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// or r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 | ctx.r9.u64;
	// sthx r8,r29,r31
	ctx.current_instruction = 0x88229FB8;
	REX_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u16);
	// bdnz 0x88229f70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88229F70;
loc_88229FC0:
	// stw r11,20(r6)
	ctx.current_instruction = 0x88229FC0;
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
loc_88229FC4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r27,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// bne cr6,0x8822a030
	if (!ctx.cr6.eq) goto loc_8822A030;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x88229FD0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,80(r1)
	ctx.current_instruction = 0x8822A00C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8822A030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88218328
	ctx.lr = 0x8822A03C;
	sub_88218328(ctx, base);
loc_8822A03C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8822AE90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8822AE90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8822AE90) {
			switch (rex_dispatch_address) {
				case 0x8822AE98:
				case 0x8822AF04:
				case 0x8822AFF4:
				case 0x8822B048:
				case 0x8822B138:
				case 0x8822B18C:
				case 0x8822B27C:
				case 0x8822B2D0:
				case 0x8822B3C4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8822AE90;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8822AE98: goto loc_8822AE98;
		case 0x8822AF04: goto loc_8822AF04;
		case 0x8822AFF4: goto loc_8822AFF4;
		case 0x8822B048: goto loc_8822B048;
		case 0x8822B138: goto loc_8822B138;
		case 0x8822B18C: goto loc_8822B18C;
		case 0x8822B27C: goto loc_8822B27C;
		case 0x8822B2D0: goto loc_8822B2D0;
		case 0x8822B3C4: goto loc_8822B3C4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x8822AE98;
	__savegprlr_23(ctx, base);
loc_8822AE98:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8822AE98;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwz r11,24(r6)
	ctx.current_instruction = 0x8822AEA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.current_instruction = 0x8822AEB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r26,668(r8)
	ctx.current_instruction = 0x8822AEB8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 668);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x8822AEC0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r27,r3,232
	ctx.r27.s64 = ctx.r3.s64 + 232;
	// lwz r4,632(r3)
	ctx.current_instruction = 0x8822AEC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,4(r29)
	ctx.current_instruction = 0x8822AED0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,40(r31)
	ctx.current_instruction = 0x8822AED8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r28,r26,30
	ctx.r28.u64 = ctx.r26.u32 & 0x3;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8822AEE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	ctx.current_instruction = 0x8822AEE4;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822af0c
	if (ctx.cr6.lt) goto loc_8822AF0C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822AF04;
	sub_8817DB68(ctx, base);
loc_8822AF04:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822af6c
	goto loc_8822AF6C;
loc_8822AF0C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822af68
	if (!ctx.cr6.gt) goto loc_8822AF68;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822AF18:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x8822AF18;
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
	ctx.current_instruction = 0x8822AF40;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r27,r3
	ctx.current_instruction = 0x8822AF54;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	ctx.current_instruction = 0x8822AF60;
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x8822af18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822AF18;
loc_8822AF68:
	// stw r11,20(r31)
	ctx.current_instruction = 0x8822AF68;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822AF6C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822afd8
	if (!ctx.cr6.eq) goto loc_8822AFD8;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x8822AF74;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
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
	ctx.current_instruction = 0x8822AFC4;
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	ctx.current_instruction = 0x8822AFC8;
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	ctx.current_instruction = 0x8822AFCC;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	ctx.current_instruction = 0x8822AFD0;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x8822aff4
	goto loc_8822AFF4;
loc_8822AFD8:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x88218590
	ctx.lr = 0x8822AFF4;
	sub_88218590(ctx, base);
loc_8822AFF4:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8822AFF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r26,r26,30,26,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.current_instruction = 0x8822AFFC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.current_instruction = 0x8822B008;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.current_instruction = 0x8822B00C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r28,r26,30
	ctx.r28.u64 = ctx.r26.u32 & 0x3;
	// lwz r30,40(r31)
	ctx.current_instruction = 0x8822B014;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x8822B01C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8822B020;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	ctx.current_instruction = 0x8822B024;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822b050
	if (ctx.cr6.lt) goto loc_8822B050;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822B048;
	sub_8817DB68(ctx, base);
loc_8822B048:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822b0b0
	goto loc_8822B0B0;
loc_8822B050:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822b0ac
	if (!ctx.cr6.gt) goto loc_8822B0AC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822B05C:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x8822B05C;
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
	ctx.current_instruction = 0x8822B084;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r27,r3
	ctx.current_instruction = 0x8822B098;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	ctx.current_instruction = 0x8822B0A4;
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x8822b05c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822B05C;
loc_8822B0AC:
	// stw r11,20(r31)
	ctx.current_instruction = 0x8822B0AC;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822B0B0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822b11c
	if (!ctx.cr6.eq) goto loc_8822B11C;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x8822B0B8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
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
	ctx.current_instruction = 0x8822B108;
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	ctx.current_instruction = 0x8822B10C;
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	ctx.current_instruction = 0x8822B110;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	ctx.current_instruction = 0x8822B114;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x8822b138
	goto loc_8822B138;
loc_8822B11C:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x88218590
	ctx.lr = 0x8822B138;
	sub_88218590(ctx, base);
loc_8822B138:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8822B138;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r26,r26,30,26,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.current_instruction = 0x8822B140;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.current_instruction = 0x8822B14C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.current_instruction = 0x8822B150;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r28,r26,30
	ctx.r28.u64 = ctx.r26.u32 & 0x3;
	// lwz r30,40(r31)
	ctx.current_instruction = 0x8822B158;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x8822B160;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8822B164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	ctx.current_instruction = 0x8822B168;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822b194
	if (ctx.cr6.lt) goto loc_8822B194;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822B18C;
	sub_8817DB68(ctx, base);
loc_8822B18C:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822b1f4
	goto loc_8822B1F4;
loc_8822B194:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822b1f0
	if (!ctx.cr6.gt) goto loc_8822B1F0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822B1A0:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x8822B1A0;
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
	ctx.current_instruction = 0x8822B1C8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r27,r3
	ctx.current_instruction = 0x8822B1DC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	ctx.current_instruction = 0x8822B1E8;
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x8822b1a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822B1A0;
loc_8822B1F0:
	// stw r11,20(r31)
	ctx.current_instruction = 0x8822B1F0;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822B1F4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822b260
	if (!ctx.cr6.eq) goto loc_8822B260;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x8822B1FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r9,r28,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
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
	ctx.current_instruction = 0x8822B24C;
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	ctx.current_instruction = 0x8822B250;
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	ctx.current_instruction = 0x8822B254;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	ctx.current_instruction = 0x8822B258;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// b 0x8822b27c
	goto loc_8822B27C;
loc_8822B260:
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x88218590
	ctx.lr = 0x8822B27C;
	sub_88218590(ctx, base);
loc_8822B27C:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8822B27C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r26,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r25)
	ctx.current_instruction = 0x8822B284;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.current_instruction = 0x8822B290;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.current_instruction = 0x8822B294;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// lwz r30,40(r31)
	ctx.current_instruction = 0x8822B29C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x8822B2A4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8822B2A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,24(r31)
	ctx.current_instruction = 0x8822B2AC;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// dcbzl r0,r30
	ea = (ctx.r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x8822b2d8
	if (ctx.cr6.lt) goto loc_8822B2D8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822B2D0;
	sub_8817DB68(ctx, base);
loc_8822B2D0:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822b338
	goto loc_8822B338;
loc_8822B2D8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8822b334
	if (!ctx.cr6.gt) goto loc_8822B334;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8822B2E4:
	// lhz r5,0(r11)
	ctx.current_instruction = 0x8822B2E4;
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
	ctx.current_instruction = 0x8822B30C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r29,r27,r3
	ctx.current_instruction = 0x8822B320;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	ctx.current_instruction = 0x8822B32C;
	REX_STORE_U16(ctx.r3.u32 + ctx.r30.u32, ctx.r8.u16);
	// bdnz 0x8822b2e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822B2E4;
loc_8822B334:
	// stw r11,20(r31)
	ctx.current_instruction = 0x8822B334;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8822B338:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8822b3a8
	if (!ctx.cr6.eq) goto loc_8822B3A8;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x8822B340;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
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
	ctx.current_instruction = 0x8822B390;
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// std r10,32(r11)
	ctx.current_instruction = 0x8822B394;
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// std r10,16(r11)
	ctx.current_instruction = 0x8822B398;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,0(r11)
	ctx.current_instruction = 0x8822B39C;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8822B3A8:
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r11,r28,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x88218590
	ctx.lr = 0x8822B3C4;
	sub_88218590(ctx, base);
loc_8822B3C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

