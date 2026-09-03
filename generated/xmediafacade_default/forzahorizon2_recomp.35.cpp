#include "forzahorizon2_funcs.35.h"

DEFINE_REX_FUNC(sub_88050340) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050340);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050340;
	ctx.current_instruction = 0x88050340;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,236(r11)
	ctx.current_instruction = 0x88050348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__restgprlr_26) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050890);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x88050890;
	ctx.current_instruction = 0x88050890;
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

DEFINE_REX_FUNC(sub_88050F48) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050F48);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050F48;
	ctx.current_instruction = 0x88050F48;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050d80
	sub_88050D80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880515C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880515C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880515C8) {
			switch (rex_dispatch_address) {
				case 0x880515D0:
				case 0x880515F8:
				case 0x88051604:
				case 0x88051610:
				case 0x88051680:
				case 0x880516B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880515C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880515D0: goto loc_880515D0;
		case 0x880515F8: goto loc_880515F8;
		case 0x88051604: goto loc_88051604;
		case 0x88051610: goto loc_88051610;
		case 0x88051680: goto loc_88051680;
		case 0x880516B0: goto loc_880516B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880515D0;
	__savegprlr_28(ctx, base);
loc_880515D0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880515D0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.current_instruction = 0x880515D8;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x88052ce8
	ctx.lr = 0x880515F8;
	sub_88052CE8(ctx, base);
loc_880515F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x88051618
	if (!ctx.cr6.eq) goto loc_88051618;
loc_88051600:
	// bl 0x880529c8
	ctx.lr = 0x88051604;
	sub_880529C8(ctx, base);
loc_88051604:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	ctx.current_instruction = 0x88051608;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x88051610;
	sub_880523E8(ctx, base);
loc_88051610:
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x880516b0
	goto loc_880516B0;
loc_88051618:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x88051600
	if (ctx.cr6.eq) goto loc_88051600;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88051620;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x88051634
	if (!ctx.cr6.eq) goto loc_88051634;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x88051654
	goto loc_88051654;
loc_88051634:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// neg r9,r31
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// andc r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r31.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subf r10,r10,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r10.u64;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
loc_88051654:
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// neg r10,r31
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// andc r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88052aa8
	ctx.lr = 0x88051680;
	sub_88052AA8(ctx, base);
loc_88051680:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x88051694
	if (ctx.cr0.eq) goto loc_88051694;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	ctx.current_instruction = 0x8805168C;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x880516b0
	goto loc_880516B0;
loc_88051694:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88051378
	ctx.lr = 0x880516B0;
	sub_88051378(ctx, base);
loc_880516B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88057888) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88057888;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88057888) {
			switch (rex_dispatch_address) {
				case 0x88057890:
				case 0x880578AC:
				case 0x880578C0:
				case 0x880578CC:
				case 0x880578EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057888;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88057890: goto loc_88057890;
		case 0x880578AC: goto loc_880578AC;
		case 0x880578C0: goto loc_880578C0;
		case 0x880578CC: goto loc_880578CC;
		case 0x880578EC: goto loc_880578EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88057890;
	__savegprlr_29(ctx, base);
loc_88057890:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88057890;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88057894;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,40(r11)
	ctx.current_instruction = 0x880578A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880578AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880578AC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880578d8
	if (ctx.cr6.lt) goto loc_880578D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88050010
	ctx.lr = 0x880578C0;
	sub_88050010(ctx, base);
loc_880578C0:
	// stw r29,56(r31)
	ctx.current_instruction = 0x880578C0;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88057280
	ctx.lr = 0x880578CC;
	sub_88057280(ctx, base);
loc_880578CC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x880578ec
	if (!ctx.cr6.lt) goto loc_880578EC;
loc_880578D8:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880578D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.current_instruction = 0x880578E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880578EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880578EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880589C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880589C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880589C8) {
			switch (rex_dispatch_address) {
				case 0x880589D0:
				case 0x880589EC:
				case 0x88058A00:
				case 0x88058A14:
				case 0x88058A20:
				case 0x88058A80:
				case 0x88058AC0:
				case 0x88058AE8:
				case 0x88058B38:
				case 0x88058B5C:
				case 0x88058B78:
				case 0x88058B9C:
				case 0x88058BAC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880589C8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880589D0: goto loc_880589D0;
		case 0x880589EC: goto loc_880589EC;
		case 0x88058A00: goto loc_88058A00;
		case 0x88058A14: goto loc_88058A14;
		case 0x88058A20: goto loc_88058A20;
		case 0x88058A80: goto loc_88058A80;
		case 0x88058AC0: goto loc_88058AC0;
		case 0x88058AE8: goto loc_88058AE8;
		case 0x88058B38: goto loc_88058B38;
		case 0x88058B5C: goto loc_88058B5C;
		case 0x88058B78: goto loc_88058B78;
		case 0x88058B9C: goto loc_88058B9C;
		case 0x88058BAC: goto loc_88058BAC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x880589D0;
	__savegprlr_23(ctx, base);
loc_880589D0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880589D0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x88057ae0
	ctx.lr = 0x880589EC;
	sub_88057AE0(ctx, base);
loc_880589EC:
	// lwz r11,124(r31)
	ctx.current_instruction = 0x880589EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x88058a0c
	if (!ctx.cr6.eq) goto loc_88058A0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88057ae8
	ctx.lr = 0x88058A00;
	sub_88057AE8(ctx, base);
loc_88058A00:
	// lwz r11,128(r31)
	ctx.current_instruction = 0x88058A00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x88058bb4
	if (ctx.cr6.eq) goto loc_88058BB4;
loc_88058A0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88057ae0
	ctx.lr = 0x88058A14;
	sub_88057AE0(ctx, base);
loc_88058A14:
	// stw r3,124(r31)
	ctx.current_instruction = 0x88058A14;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88057ae8
	ctx.lr = 0x88058A20;
	sub_88057AE8(ctx, base);
loc_88058A20:
	// lwz r11,124(r31)
	ctx.current_instruction = 0x88058A20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,356(r31)
	ctx.current_instruction = 0x88058A28;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,128(r31)
	ctx.current_instruction = 0x88058A30;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r23,r31,332
	ctx.r23.s64 = ctx.r31.s64 + 332;
	// stw r9,360(r31)
	ctx.current_instruction = 0x88058A38;
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// stw r10,336(r31)
	ctx.current_instruction = 0x88058A3C;
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r11,344(r31)
	ctx.current_instruction = 0x88058A44;
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,332(r31)
	ctx.current_instruction = 0x88058A48;
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,340(r31)
	ctx.current_instruction = 0x88058A50;
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stw r10,348(r31)
	ctx.current_instruction = 0x88058A54;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// rldicr r29,r11,63,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,352(r31)
	ctx.current_instruction = 0x88058A5C;
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// stw r9,364(r31)
	ctx.current_instruction = 0x88058A60;
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
loc_88058A64:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lwz r3,56(r31)
	ctx.current_instruction = 0x88058A68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x88050058
	ctx.lr = 0x88058A80;
	sub_88050058(ctx, base);
loc_88058A80:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x88058a64
	if (ctx.cr6.lt) goto loc_88058A64;
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// li r25,72
	ctx.r25.s64 = 72;
	// ori r26,r11,2
	ctx.r26.u64 = ctx.r11.u64 | 2;
	// ori r27,r10,14
	ctx.r27.u64 = ctx.r10.u64 | 14;
loc_88058AA0:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_88058AA8:
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.current_instruction = 0x88058AB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88058ac4
	if (ctx.cr6.eq) goto loc_88058AC4;
	// bl 0x88050298
	ctx.lr = 0x88058AC0;
	sub_88050298(ctx, base);
loc_88058AC0:
	// stwx r24,r30,r31
	ctx.current_instruction = 0x88058AC0;
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r24.u32);
loc_88058AC4:
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r4,24(r29)
	ctx.current_instruction = 0x88058AC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r29)
	ctx.current_instruction = 0x88058AD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x880501d8
	ctx.lr = 0x88058AE8;
	sub_880501D8(ctx, base);
loc_88058AE8:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stwx r3,r30,r31
	ctx.current_instruction = 0x88058AEC;
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r27
	ctx.r3.u64 = ctx.r9.u64 & ctx.r27.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88058b10
	if (ctx.cr6.lt) goto loc_88058B10;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x88058aa8
	if (ctx.cr6.lt) goto loc_88058AA8;
loc_88058B10:
	// addi r25,r25,3
	ctx.r25.s64 = ctx.r25.s64 + 3;
	// cmplwi cr6,r25,81
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 81, ctx.xer);
	// blt cr6,0x88058aa0
	if (ctx.cr6.lt) goto loc_88058AA0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88058bb8
	if (ctx.cr6.lt) goto loc_88058BB8;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88058B24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.current_instruction = 0x88058B2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88058B38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88058B38:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88058bb4
	if (ctx.cr6.lt) goto loc_88058BB4;
	// lwz r11,112(r31)
	ctx.current_instruction = 0x88058B44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88058b60
	if (!ctx.cr6.eq) goto loc_88058B60;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88057510
	ctx.lr = 0x88058B5C;
	sub_88057510(ctx, base);
loc_88058B5C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_88058B60:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88058bb4
	if (ctx.cr6.lt) goto loc_88058BB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.current_instruction = 0x88058B6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r30,76(r31)
	ctx.current_instruction = 0x88058B70;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x88050130
	ctx.lr = 0x88058B78;
	sub_88050130(ctx, base);
loc_88058B78:
	// lwz r11,128(r31)
	ctx.current_instruction = 0x88058B78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 576, ctx.xer);
	// ble cr6,0x88058b8c
	if (!ctx.cr6.gt) goto loc_88058B8C;
	// lwz r11,328(r31)
	ctx.current_instruction = 0x88058B84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// b 0x88058b90
	goto loc_88058B90;
loc_88058B8C:
	// lwz r11,324(r31)
	ctx.current_instruction = 0x88058B8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
loc_88058B90:
	// stw r11,76(r31)
	ctx.current_instruction = 0x88058B90;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x88050280
	ctx.lr = 0x88058B9C;
	sub_88050280(ctx, base);
loc_88058B9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88058bac
	if (ctx.cr6.eq) goto loc_88058BAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88050298
	ctx.lr = 0x88058BAC;
	sub_88050298(ctx, base);
loc_88058BAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,120(r31)
	ctx.current_instruction = 0x88058BB0;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_88058BB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_88058BB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805D7E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805D7E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805D7E8) {
			switch (rex_dispatch_address) {
				case 0x8805D814:
				case 0x8805D81C:
				case 0x8805D838:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805D7E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805D814: goto loc_8805D814;
		case 0x8805D81C: goto loc_8805D81C;
		case 0x8805D838: goto loc_8805D838;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805D7EC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8805D7F0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805D7F4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805D7F8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,9392
	ctx.r10.s64 = ctx.r11.s64 + 9392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	ctx.current_instruction = 0x8805D80C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8805c8f8
	ctx.lr = 0x8805D814;
	sub_8805C8F8(ctx, base);
loc_8805D814:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062000
	ctx.lr = 0x8805D81C;
	sub_88062000(ctx, base);
loc_8805D81C:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8805d83c
	if (ctx.cr6.eq) goto loc_8805D83C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x88050358
	ctx.lr = 0x8805D838;
	sub_88050358(ctx, base);
loc_8805D838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8805D83C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805D840;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8805D848;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805D84C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880606F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880606F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880606F0) {
			switch (rex_dispatch_address) {
				case 0x880606F8:
				case 0x88060768:
				case 0x88060784:
				case 0x880607A4:
				case 0x880607B4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880606F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880606F8: goto loc_880606F8;
		case 0x88060768: goto loc_88060768;
		case 0x88060784: goto loc_88060784;
		case 0x880607A4: goto loc_880607A4;
		case 0x880607B4: goto loc_880607B4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880606F8;
	__savegprlr_24(ctx, base);
loc_880606F8:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880606F8;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,244(r1)
	ctx.current_instruction = 0x880606FC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwz r11,14476(r31)
	ctx.current_instruction = 0x88060704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14476);
	// lwz r9,14512(r31)
	ctx.current_instruction = 0x88060708;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14512);
	// mullw r29,r28,r11
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// mullw r9,r9,r28
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r27,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 2;
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addze r9,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r3,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r28.s32 >> 1;
	// add r28,r9,r4
	ctx.r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addze r4,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r27,r9,r5
	ctx.r27.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r26,r11,r7
	ctx.r26.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880607d4
	if (!ctx.cr6.lt) goto loc_880607D4;
	// subf r24,r4,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r4.u64;
loc_88060758:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,14476(r31)
	ctx.current_instruction = 0x8806075C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14476);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x88060768;
	sub_880547A0(ctx, base);
loc_88060768:
	// lwz r5,14476(r31)
	ctx.current_instruction = 0x88060768;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14476);
	// lwz r11,14512(r31)
	ctx.current_instruction = 0x8806076C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14512);
	// add r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x88060784;
	sub_880547A0(ctx, base);
loc_88060784:
	// lwz r11,14512(r31)
	ctx.current_instruction = 0x88060784;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14512);
	// lwz r10,14476(r31)
	ctx.current_instruction = 0x88060788;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14476);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,14484(r31)
	ctx.current_instruction = 0x88060794;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14484);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// bl 0x880547a0
	ctx.lr = 0x880607A4;
	sub_880547A0(ctx, base);
loc_880607A4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,14484(r31)
	ctx.current_instruction = 0x880607A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14484);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880547a0
	ctx.lr = 0x880607B4;
	sub_880547A0(ctx, base);
loc_880607B4:
	// lwz r10,14520(r31)
	ctx.current_instruction = 0x880607B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14520);
	// lwz r11,14484(r31)
	ctx.current_instruction = 0x880607B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14484);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bne 0x88060758
	if (!ctx.cr0.eq) goto loc_88060758;
loc_880607D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88063CC8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88063CC8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88063CC8;
	ctx.current_instruction = 0x88063CC8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88063cdc
	if (!ctx.cr6.eq) goto loc_88063CDC;
loc_88063CD0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063CDC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88063cd0
	if (ctx.cr6.eq) goto loc_88063CD0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88063cd0
	if (ctx.cr6.eq) goto loc_88063CD0;
	// lwz r3,0(r4)
	ctx.current_instruction = 0x88063CEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x880cb950
	sub_880CB950(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88064840) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88064840;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88064840) {
			switch (rex_dispatch_address) {
				case 0x88064848:
				case 0x880648A0:
				case 0x880648B8:
				case 0x880648E8:
				case 0x88064964:
				case 0x880649D4:
				case 0x880649F4:
				case 0x880649FC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88064840;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88064848: goto loc_88064848;
		case 0x880648A0: goto loc_880648A0;
		case 0x880648B8: goto loc_880648B8;
		case 0x880648E8: goto loc_880648E8;
		case 0x88064964: goto loc_88064964;
		case 0x880649D4: goto loc_880649D4;
		case 0x880649F4: goto loc_880649F4;
		case 0x880649FC: goto loc_880649FC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88064848;
	__savegprlr_26(ctx, base);
loc_88064848:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88064848;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	ctx.current_instruction = 0x88064858;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r27,84(r1)
	ctx.current_instruction = 0x88064860;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88064a04
	if (ctx.cr6.eq) goto loc_88064A04;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88064a04
	if (ctx.cr6.eq) goto loc_88064A04;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x88064a04
	if (ctx.cr6.lt) goto loc_88064A04;
	// cmplwi cr6,r4,127
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 127, ctx.xer);
	// bgt cr6,0x88064a04
	if (ctx.cr6.gt) goto loc_88064A04;
	// lwz r11,528(r3)
	ctx.current_instruction = 0x88064884;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88064a04
	if (ctx.cr6.eq) goto loc_88064A04;
	// li r5,796
	ctx.r5.s64 = 796;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88052d90
	ctx.lr = 0x880648A0;
	sub_88052D90(ctx, base);
loc_880648A0:
	// lwz r11,4(r26)
	ctx.current_instruction = 0x880648A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,124(r11)
	ctx.current_instruction = 0x880648B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x880648B8;
	sub_880CB730(ctx, base);
loc_880648B8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880649f4
	if (ctx.cr6.lt) goto loc_880649F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880648C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880648C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88064a04
	if (!ctx.cr6.eq) goto loc_88064A04;
	// lwz r11,4(r26)
	ctx.current_instruction = 0x880648D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,128(r11)
	ctx.current_instruction = 0x880648E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x880cb730
	ctx.lr = 0x880648E8;
	sub_880CB730(ctx, base);
loc_880648E8:
	// lwz r7,4(r26)
	ctx.current_instruction = 0x880648E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,104(r7)
	ctx.current_instruction = 0x880648EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88064930
	if (ctx.cr6.eq) goto loc_88064930;
	// lhz r8,0(r11)
	ctx.current_instruction = 0x880648F8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88064930
	if (ctx.cr6.eq) goto loc_88064930;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88064904;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8806490C:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r6,0(r10)
	ctx.current_instruction = 0x88064914;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8806497c
	if (ctx.cr6.eq) goto loc_8806497C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8806490c
	if (ctx.cr6.lt) goto loc_8806490C;
loc_88064930:
	// lwz r11,28(r7)
	ctx.current_instruction = 0x88064930;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// li r9,10
	ctx.r9.s64 = 10;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divwu r7,r8,r9
	ctx.r7.u64 = uint32_t(ctx.r9.u32 ? ctx.r8.u32 / ctx.r9.u32 : 0);
	// stw r7,4(r29)
	ctx.current_instruction = 0x88064944;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
loc_88064948:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88064948;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88064988
	if (ctx.cr6.eq) goto loc_88064988;
	// ld r3,64(r11)
	ctx.current_instruction = 0x88064954;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x88064988
	if (ctx.cr6.eq) goto loc_88064988;
	// bl 0x881ee930
	ctx.lr = 0x88064964;
	sub_881EE930(ctx, base);
loc_88064964:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,9664(r11)
	ctx.current_instruction = 0x88064968;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9664);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,8(r29)
	ctx.current_instruction = 0x88064974;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// b 0x88064994
	goto loc_88064994;
loc_8806497C:
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8806497C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r29)
	ctx.current_instruction = 0x88064980;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x88064948
	goto loc_88064948;
loc_88064988:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x8806498C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	ctx.current_instruction = 0x88064990;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_88064994:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88064994;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r29,790
	ctx.r5.s64 = ctx.r29.s64 + 790;
	// addi r4,r29,792
	ctx.r4.s64 = ctx.r29.s64 + 792;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x880649A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r10)
	ctx.current_instruction = 0x880649A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,16(r29)
	ctx.current_instruction = 0x880649AC;
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.current_instruction = 0x880649B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r8)
	ctx.current_instruction = 0x880649B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,12(r29)
	ctx.current_instruction = 0x880649B8;
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.current_instruction = 0x880649BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r6)
	ctx.current_instruction = 0x880649C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r10,0(r29)
	ctx.current_instruction = 0x880649C4;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880649C8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// sth r9,788(r29)
	ctx.current_instruction = 0x880649CC;
	REX_STORE_U16(ctx.r29.u32 + 788, ctx.r9.u16);
	// bl 0x88063590
	ctx.lr = 0x880649D4;
	sub_88063590(ctx, base);
loc_880649D4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880649f4
	if (ctx.cr6.lt) goto loc_880649F4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// addi r4,r11,9744
	ctx.r4.s64 = ctx.r11.s64 + 9744;
	// li r5,768
	ctx.r5.s64 = 768;
	// bl 0x880547a0
	ctx.lr = 0x880649F4;
	sub_880547A0(ctx, base);
loc_880649F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880638b8
	ctx.lr = 0x880649FC;
	sub_880638B8(ctx, base);
loc_880649FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88064A04:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88068920) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88068920;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88068920) {
			switch (rex_dispatch_address) {
				case 0x88068928:
				case 0x8806898C:
				case 0x880689AC:
				case 0x880689CC:
				case 0x880689EC:
				case 0x88068A10:
				case 0x88068A30:
				case 0x88068A58:
				case 0x88068A84:
				case 0x88068AC8:
				case 0x88068AE0:
				case 0x88068B48:
				case 0x88068B70:
				case 0x88068B94:
				case 0x88068BA0:
				case 0x88068BC8:
				case 0x88068BE0:
				case 0x88068BF8:
				case 0x88068C0C:
				case 0x88068C38:
				case 0x88068C5C:
				case 0x88068C80:
				case 0x88068CA0:
				case 0x88068CB4:
				case 0x88068CD0:
				case 0x88068CF0:
				case 0x88068D10:
				case 0x88068D30:
				case 0x88068D50:
				case 0x88068D70:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88068920;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88068928: goto loc_88068928;
		case 0x8806898C: goto loc_8806898C;
		case 0x880689AC: goto loc_880689AC;
		case 0x880689CC: goto loc_880689CC;
		case 0x880689EC: goto loc_880689EC;
		case 0x88068A10: goto loc_88068A10;
		case 0x88068A30: goto loc_88068A30;
		case 0x88068A58: goto loc_88068A58;
		case 0x88068A84: goto loc_88068A84;
		case 0x88068AC8: goto loc_88068AC8;
		case 0x88068AE0: goto loc_88068AE0;
		case 0x88068B48: goto loc_88068B48;
		case 0x88068B70: goto loc_88068B70;
		case 0x88068B94: goto loc_88068B94;
		case 0x88068BA0: goto loc_88068BA0;
		case 0x88068BC8: goto loc_88068BC8;
		case 0x88068BE0: goto loc_88068BE0;
		case 0x88068BF8: goto loc_88068BF8;
		case 0x88068C0C: goto loc_88068C0C;
		case 0x88068C38: goto loc_88068C38;
		case 0x88068C5C: goto loc_88068C5C;
		case 0x88068C80: goto loc_88068C80;
		case 0x88068CA0: goto loc_88068CA0;
		case 0x88068CB4: goto loc_88068CB4;
		case 0x88068CD0: goto loc_88068CD0;
		case 0x88068CF0: goto loc_88068CF0;
		case 0x88068D10: goto loc_88068D10;
		case 0x88068D30: goto loc_88068D30;
		case 0x88068D50: goto loc_88068D50;
		case 0x88068D70: goto loc_88068D70;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88068928;
	__savegprlr_29(ctx, base);
loc_88068928:
	// stfd f30,-48(r1)
	ctx.current_instruction = 0x88068928;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	ctx.current_instruction = 0x8806892C;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88068930;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,280(r3)
	ctx.current_instruction = 0x88068938;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// stw r29,100(r1)
	ctx.current_instruction = 0x88068948;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	ctx.current_instruction = 0x8806894C;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,80(r1)
	ctx.current_instruction = 0x88068950;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	ctx.current_instruction = 0x88068954;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,92(r1)
	ctx.current_instruction = 0x88068958;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,88(r1)
	ctx.current_instruction = 0x8806895C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bne cr6,0x88068978
	if (!ctx.cr6.eq) goto loc_88068978;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.current_instruction = 0x8806896C;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.current_instruction = 0x88068970;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_88068978:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88068978;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88068980;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806898C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806898C:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x8806898C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8806899C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,68(r9)
	ctx.current_instruction = 0x880689A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880689AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880689AC:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x880689AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r3)
	ctx.current_instruction = 0x880689BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r7)
	ctx.current_instruction = 0x880689C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880689CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880689CC:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x880689CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r10,0(r3)
	ctx.current_instruction = 0x880689DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.current_instruction = 0x880689E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880689EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880689EC:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880689EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88068a14
	if (ctx.cr6.eq) goto loc_88068A14;
	// lwz r11,0(r10)
	ctx.current_instruction = 0x880689FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88068A04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068A10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068A10:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88068A10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88068A14:
	// lwz r3,92(r1)
	ctx.current_instruction = 0x88068A14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88068a38
	if (ctx.cr6.eq) goto loc_88068A38;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068A20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88068A24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068A30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068A30:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88068A30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,92(r1)
	ctx.current_instruction = 0x88068A34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_88068A38:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88068A38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88068a64
	if (ctx.cr6.eq) goto loc_88068A64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88068A44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.current_instruction = 0x88068A4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88068A58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068A58:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88068A58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88068A5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,92(r1)
	ctx.current_instruction = 0x88068A60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_88068A64:
	// lwz r9,88(r1)
	ctx.current_instruction = 0x88068A64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88068a94
	if (ctx.cr6.eq) goto loc_88068A94;
	// lwz r11,0(r9)
	ctx.current_instruction = 0x88068A70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88068A78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068A84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068A84:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88068A84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88068A88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,92(r1)
	ctx.current_instruction = 0x88068A8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x88068A90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88068A94:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88068c1c
	if (ctx.cr6.lt) goto loc_88068C1C;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f30,6732(r10)
	ctx.current_instruction = 0x88068AA4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x88068ab4
	if (ctx.cr6.gt) goto loc_88068AB4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_88068AB4:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88068AB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,144(r10)
	ctx.current_instruction = 0x88068ABC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88068AC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068AC8:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x88068AC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r8,0(r3)
	ctx.current_instruction = 0x88068AD0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,108(r8)
	ctx.current_instruction = 0x88068AD4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 108);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88068AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068AE0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88068c0c
	if (ctx.cr6.lt) goto loc_88068C0C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,280(r31)
	ctx.current_instruction = 0x88068AF0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,280(r31)
	ctx.current_instruction = 0x88068AF4;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lfs f0,6708(r11)
	ctx.current_instruction = 0x88068AF8;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x88068b0c
	if (!ctx.cr6.eq) goto loc_88068B0C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_88068B0C:
	// stw r11,260(r31)
	ctx.current_instruction = 0x88068B0C;
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x88068c0c
	if (!ctx.cr6.eq) goto loc_88068C0C;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// stw r29,108(r1)
	ctx.current_instruction = 0x88068B1C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,96(r1)
	ctx.current_instruction = 0x88068B20;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bge cr6,0x88068ba4
	if (!ctx.cr6.lt) goto loc_88068BA4;
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88068B28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// ld r11,288(r31)
	ctx.current_instruction = 0x88068B30;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 288);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r3)
	ctx.current_instruction = 0x88068B38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,124(r10)
	ctx.current_instruction = 0x88068B3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 124);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88068B48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068B48:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88068be4
	if (ctx.cr6.lt) goto loc_88068BE4;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88068B54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,108(r1)
	ctx.current_instruction = 0x88068B5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068B60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.current_instruction = 0x88068B64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068B70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068B70:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88068be4
	if (ctx.cr6.lt) goto loc_88068BE4;
	// lwz r3,88(r1)
	ctx.current_instruction = 0x88068B7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068B84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.current_instruction = 0x88068B88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068B94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068B94:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,104(r1)
	ctx.current_instruction = 0x88068B98;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x88067be8
	ctx.lr = 0x88068BA0;
	sub_88067BE8(ctx, base);
loc_88068BA0:
	// b 0x88068bcc
	goto loc_88068BCC;
loc_88068BA4:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88068BA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88068BAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r3)
	ctx.current_instruction = 0x88068BB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ld r9,128(r11)
	ctx.current_instruction = 0x88068BB4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 128);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,124(r10)
	ctx.current_instruction = 0x88068BBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 124);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88068BC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068BC8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_88068BCC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88068be4
	if (ctx.cr6.lt) goto loc_88068BE4;
	// lwz r4,96(r1)
	ctx.current_instruction = 0x88068BD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,44(r31)
	ctx.current_instruction = 0x88068BD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8805b758
	ctx.lr = 0x88068BE0;
	sub_8805B758(ctx, base);
loc_88068BE0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_88068BE4:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88068BE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,200(r11)
	ctx.current_instruction = 0x88068BEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068BF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068BF8:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88068BF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,196(r9)
	ctx.current_instruction = 0x88068C00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 196);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88068C0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068C0C:
	// lwz r9,88(r1)
	ctx.current_instruction = 0x88068C0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.current_instruction = 0x88068C10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88068C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88068C18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88068C1C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88068c44
	if (ctx.cr6.eq) goto loc_88068C44;
	// lwz r11,0(r10)
	ctx.current_instruction = 0x88068C24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88068C2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068C38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068C38:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88068C38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,92(r1)
	ctx.current_instruction = 0x88068C3C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x88068C40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88068C44:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88068c64
	if (ctx.cr6.eq) goto loc_88068C64;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068C4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88068C50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068C5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068C5C:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88068C5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x88068C60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88068C64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88068c84
	if (ctx.cr6.eq) goto loc_88068C84;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88068C6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.current_instruction = 0x88068C74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88068C80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068C80:
	// lwz r9,88(r1)
	ctx.current_instruction = 0x88068C80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88068C84:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88068ca0
	if (ctx.cr6.eq) goto loc_88068CA0;
	// lwz r11,0(r9)
	ctx.current_instruction = 0x88068C8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88068C94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068CA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068CA0:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88068CA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88068CA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068CB4:
	// lwz r3,92(r1)
	ctx.current_instruction = 0x88068CB4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88068cd4
	if (ctx.cr6.eq) goto loc_88068CD4;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068CC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88068CC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068CD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068CD0:
	// stw r29,92(r1)
	ctx.current_instruction = 0x88068CD0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
loc_88068CD4:
	// lwz r3,88(r1)
	ctx.current_instruction = 0x88068CD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88068cf4
	if (ctx.cr6.eq) goto loc_88068CF4;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068CE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88068CE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068CF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068CF0:
	// stw r29,88(r1)
	ctx.current_instruction = 0x88068CF0;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_88068CF4:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88068CF4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88068d14
	if (ctx.cr6.eq) goto loc_88068D14;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068D00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88068D04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068D10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068D10:
	// stw r29,80(r1)
	ctx.current_instruction = 0x88068D10;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_88068D14:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88068D14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88068d34
	if (ctx.cr6.eq) goto loc_88068D34;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068D20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88068D24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068D30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068D30:
	// stw r29,84(r1)
	ctx.current_instruction = 0x88068D30;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_88068D34:
	// lwz r3,100(r1)
	ctx.current_instruction = 0x88068D34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88068d54
	if (ctx.cr6.eq) goto loc_88068D54;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068D40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88068D44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068D50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068D50:
	// stw r29,100(r1)
	ctx.current_instruction = 0x88068D50;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
loc_88068D54:
	// lwz r3,104(r1)
	ctx.current_instruction = 0x88068D54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88068d70
	if (ctx.cr6.eq) goto loc_88068D70;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88068D60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88068D64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88068D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068D70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.current_instruction = 0x88068D78;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.current_instruction = 0x88068D7C;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807C0D8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807C0D8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807C0D8;
	ctx.current_instruction = 0x8807C0D8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8807c1ac
	if (ctx.cr6.eq) goto loc_8807C1AC;
	// lwz r10,16(r3)
	ctx.current_instruction = 0x8807C0E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8807c1ac
	if (ctx.cr6.gt) goto loc_8807C1AC;
	// lwz r10,8(r3)
	ctx.current_instruction = 0x8807C0F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r10)
	ctx.current_instruction = 0x8807C0F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,8(r3)
	ctx.current_instruction = 0x8807C100;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// bne cr6,0x8807c10c
	if (!ctx.cr6.eq) goto loc_8807C10C;
	// stw r9,12(r3)
	ctx.current_instruction = 0x8807C108;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
loc_8807C10C:
	// stw r4,4(r10)
	ctx.current_instruction = 0x8807C10C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8807c130
	if (!ctx.cr6.eq) goto loc_8807C130;
	// lwz r9,0(r11)
	ctx.current_instruction = 0x8807C118;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	ctx.current_instruction = 0x8807C11C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x8807C120;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,0(r11)
	ctx.current_instruction = 0x8807C128;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8807c190
	goto loc_8807C190;
loc_8807C130:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8807c164
	if (!ctx.cr6.eq) goto loc_8807C164;
	// stw r9,0(r10)
	ctx.current_instruction = 0x8807C138;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x8807C13C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,4(r11)
	ctx.current_instruction = 0x8807C144;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x8807c198
	if (!ctx.cr6.eq) goto loc_8807C198;
	// stw r10,0(r11)
	ctx.current_instruction = 0x8807C14C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8807C154;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	ctx.current_instruction = 0x8807C15C;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8807C164:
	// lwz r9,0(r11)
	ctx.current_instruction = 0x8807C164;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r8,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r8.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8807c17c
	if (!ctx.cr0.gt) goto loc_8807C17C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8807C174:
	// lwz r9,0(r9)
	ctx.current_instruction = 0x8807C174;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bdnz 0x8807c174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8807C174;
loc_8807C17C:
	// lwz r8,0(r9)
	ctx.current_instruction = 0x8807C17C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r10)
	ctx.current_instruction = 0x8807C180;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r10,0(r9)
	ctx.current_instruction = 0x8807C184;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r7,0(r10)
	ctx.current_instruction = 0x8807C188;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
loc_8807C190:
	// bne cr6,0x8807c198
	if (!ctx.cr6.eq) goto loc_8807C198;
	// stw r10,4(r11)
	ctx.current_instruction = 0x8807C194;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8807C198:
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8807C198;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	ctx.current_instruction = 0x8807C1A4;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8807C1AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807D410) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807D410;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807D410) {
			switch (rex_dispatch_address) {
				case 0x8807D418:
				case 0x8807D444:
				case 0x8807D45C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807D410;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807D418: goto loc_8807D418;
		case 0x8807D444: goto loc_8807D444;
		case 0x8807D45C: goto loc_8807D45C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8807D418;
	__savegprlr_27(ctx, base);
loc_8807D418:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8807D418;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r27,r5,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r5,r3,1048
	ctx.r5.s64 = ctx.r3.s64 + 1048;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r4,1048
	ctx.r4.s64 = ctx.r4.s64 + 1048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8807d278
	ctx.lr = 0x8807D444;
	sub_8807D278(ctx, base);
loc_8807D444:
	// stfs f1,0(r29)
	ctx.current_instruction = 0x8807D444;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807d278
	ctx.lr = 0x8807D45C;
	sub_8807D278(ctx, base);
loc_8807D45C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stfs f1,0(r28)
	ctx.current_instruction = 0x8807D460;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f13,0(r29)
	ctx.current_instruction = 0x8807D464;
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,12416(r11)
	ctx.current_instruction = 0x8807D468;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12416);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8807d4a0
	if (ctx.cr6.gt) goto loc_8807D4A0;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8807d4a0
	if (ctx.cr6.gt) goto loc_8807D4A0;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,12444(r11)
	ctx.current_instruction = 0x8807D480;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8807d494
	if (!ctx.cr6.gt) goto loc_8807D494;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8807d4a0
	if (ctx.cr6.gt) goto loc_8807D4A0;
loc_8807D494:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8807D4A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807E0F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807E0F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807E0F0) {
			switch (rex_dispatch_address) {
				case 0x8807E0F8:
				case 0x8807E168:
				case 0x8807E174:
				case 0x8807E190:
				case 0x8807E1CC:
				case 0x8807E1D8:
				case 0x8807E1E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807E0F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807E0F8: goto loc_8807E0F8;
		case 0x8807E168: goto loc_8807E168;
		case 0x8807E174: goto loc_8807E174;
		case 0x8807E190: goto loc_8807E190;
		case 0x8807E1CC: goto loc_8807E1CC;
		case 0x8807E1D8: goto loc_8807E1D8;
		case 0x8807E1E8: goto loc_8807E1E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8807E0F8;
	__savegprlr_27(ctx, base);
loc_8807E0F8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8807E0F8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,2800(r3)
	ctx.current_instruction = 0x8807E0FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807e120
	if (!ctx.cr6.eq) goto loc_8807E120;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8807e120
	if (!ctx.cr6.eq) goto loc_8807E120;
	// stw r29,30696(r3)
	ctx.current_instruction = 0x8807E11C;
	REX_STORE_U32(ctx.r3.u32 + 30696, ctx.r29.u32);
loc_8807E120:
	// lwz r11,1620(r31)
	ctx.current_instruction = 0x8807E120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1620);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807e25c
	if (ctx.cr6.eq) goto loc_8807E25C;
	// lwz r11,30420(r31)
	ctx.current_instruction = 0x8807E130;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807e194
	if (ctx.cr6.eq) goto loc_8807E194;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8807e154
	if (!ctx.cr6.eq) goto loc_8807E154;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,30416(r31)
	ctx.current_instruction = 0x8807E148;
	REX_STORE_U32(ctx.r31.u32 + 30416, ctx.r29.u32);
	// beq cr6,0x8807e154
	if (ctx.cr6.eq) goto loc_8807E154;
	// stw r30,30424(r31)
	ctx.current_instruction = 0x8807E150;
	REX_STORE_U32(ctx.r31.u32 + 30424, ctx.r30.u32);
loc_8807E154:
	// addi r4,r31,768
	ctx.r4.s64 = ctx.r31.s64 + 768;
	// lwz r27,768(r31)
	ctx.current_instruction = 0x8807E158;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 768);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,2096(r31)
	ctx.current_instruction = 0x8807E160;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x8807c2d8
	ctx.lr = 0x8807E168;
	sub_8807C2D8(ctx, base);
loc_8807E168:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,2096(r31)
	ctx.current_instruction = 0x8807E16C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x8807c328
	ctx.lr = 0x8807E174;
	sub_8807C328(ctx, base);
loc_8807E174:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8807e188
	if (ctx.cr6.eq) goto loc_8807E188;
loc_8807E17C:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8807E188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4858
	ctx.lr = 0x8807E190;
	sub_880E4858(ctx, base);
loc_8807E190:
	// stw r29,30420(r31)
	ctx.current_instruction = 0x8807E190;
	REX_STORE_U32(ctx.r31.u32 + 30420, ctx.r29.u32);
loc_8807E194:
	// lwz r11,2092(r31)
	ctx.current_instruction = 0x8807E194;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2092);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807e1e8
	if (!ctx.cr6.eq) goto loc_8807E1E8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8807e1e8
	if (!ctx.cr6.eq) goto loc_8807E1E8;
	// lwz r11,8236(r31)
	ctx.current_instruction = 0x8807E1A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807e1e8
	if (!ctx.cr6.eq) goto loc_8807E1E8;
	// stw r29,2092(r31)
	ctx.current_instruction = 0x8807E1B4;
	REX_STORE_U32(ctx.r31.u32 + 2092, ctx.r29.u32);
	// addi r4,r31,768
	ctx.r4.s64 = ctx.r31.s64 + 768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r27,768(r31)
	ctx.current_instruction = 0x8807E1C0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 768);
	// lwz r3,2096(r31)
	ctx.current_instruction = 0x8807E1C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x8807c2d8
	ctx.lr = 0x8807E1CC;
	sub_8807C2D8(ctx, base);
loc_8807E1CC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,2096(r31)
	ctx.current_instruction = 0x8807E1D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x8807c328
	ctx.lr = 0x8807E1D8;
	sub_8807C328(ctx, base);
loc_8807E1D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8807e17c
	if (!ctx.cr6.eq) goto loc_8807E17C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4858
	ctx.lr = 0x8807E1E8;
	sub_880E4858(ctx, base);
loc_8807E1E8:
	// lwz r10,2800(r31)
	ctx.current_instruction = 0x8807E1E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807e22c
	if (ctx.cr6.eq) goto loc_8807E22C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8807e25c
	if (!ctx.cr6.eq) goto loc_8807E25C;
	// ld r9,7728(r31)
	ctx.current_instruction = 0x8807E1FC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 7728);
	// ld r8,30528(r31)
	ctx.current_instruction = 0x8807E200;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 30528);
	// ld r11,30552(r31)
	ctx.current_instruction = 0x8807E204;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 30552);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x8807e25c
	if (ctx.cr6.lt) goto loc_8807E25C;
	// ld r9,7704(r31)
	ctx.current_instruction = 0x8807E214;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 7704);
	// sradi r8,r11,1
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s64 >> 1;
	// ld r7,7712(r31)
	ctx.current_instruction = 0x8807E21C;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 7712);
	// subf r6,r7,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r7.u64;
	// cmpd cr6,r6,r8
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r8.s64, ctx.xer);
	// blt cr6,0x8807e25c
	if (ctx.cr6.lt) goto loc_8807E25C;
loc_8807E22C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8807e25c
	if (!ctx.cr6.eq) goto loc_8807E25C;
	// ld r11,30528(r31)
	ctx.current_instruction = 0x8807E234;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 30528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r9,7728(r31)
	ctx.current_instruction = 0x8807E23C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 7728);
	// stw r30,2092(r31)
	ctx.current_instruction = 0x8807E240;
	REX_STORE_U32(ctx.r31.u32 + 2092, ctx.r30.u32);
	// std r11,30536(r31)
	ctx.current_instruction = 0x8807E244;
	REX_STORE_U64(ctx.r31.u32 + 30536, ctx.r11.u64);
	// std r9,30528(r31)
	ctx.current_instruction = 0x8807E248;
	REX_STORE_U64(ctx.r31.u32 + 30528, ctx.r9.u64);
	// bne cr6,0x8807e258
	if (!ctx.cr6.eq) goto loc_8807E258;
	// stw r30,30544(r31)
	ctx.current_instruction = 0x8807E250;
	REX_STORE_U32(ctx.r31.u32 + 30544, ctx.r30.u32);
	// b 0x8807e25c
	goto loc_8807E25C;
loc_8807E258:
	// stw r29,30544(r31)
	ctx.current_instruction = 0x8807E258;
	REX_STORE_U32(ctx.r31.u32 + 30544, ctx.r29.u32);
loc_8807E25C:
	// lwz r11,7700(r31)
	ctx.current_instruction = 0x8807E25C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807e26c
	if (ctx.cr6.eq) goto loc_8807E26C;
	// stw r29,7700(r31)
	ctx.current_instruction = 0x8807E268;
	REX_STORE_U32(ctx.r31.u32 + 7700, ctx.r29.u32);
loc_8807E26C:
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x8807E26C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8807e538
	if (!ctx.cr6.eq) goto loc_8807E538;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8807e334
	if (!ctx.cr6.eq) goto loc_8807E334;
	// lwz r11,20256(r31)
	ctx.current_instruction = 0x8807E280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807e2e4
	if (!ctx.cr6.eq) goto loc_8807E2E4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,30496(r31)
	ctx.current_instruction = 0x8807E290;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 30496);
	// lfd f13,8624(r11)
	ctx.current_instruction = 0x8807E294;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8807e2bc
	if (ctx.cr6.lt) goto loc_8807E2BC;
	// lfd f13,30488(r31)
	ctx.current_instruction = 0x8807E2A0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 30488);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lfd f0,12088(r11)
	ctx.current_instruction = 0x8807E2AC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12088);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f11,30496(r31)
	ctx.current_instruction = 0x8807E2B4;
	REX_STORE_U64(ctx.r31.u32 + 30496, ctx.f11.u64);
	// b 0x8807e2c4
	goto loc_8807E2C4;
loc_8807E2BC:
	// lfd f0,30488(r31)
	ctx.current_instruction = 0x8807E2BC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 30488);
	// stfd f0,30496(r31)
	ctx.current_instruction = 0x8807E2C0;
	REX_STORE_U64(ctx.r31.u32 + 30496, ctx.f0.u64);
loc_8807E2C4:
	// lwz r11,676(r31)
	ctx.current_instruction = 0x8807E2C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// stw r30,30512(r31)
	ctx.current_instruction = 0x8807E2C8;
	REX_STORE_U32(ctx.r31.u32 + 30512, ctx.r30.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	ctx.current_instruction = 0x8807E2D0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8807E2D4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f13,30504(r31)
	ctx.current_instruction = 0x8807E2DC;
	REX_STORE_U64(ctx.r31.u32 + 30504, ctx.f13.u64);
	// b 0x8807e334
	goto loc_8807E334;
loc_8807E2E4:
	// lwz r9,676(r31)
	ctx.current_instruction = 0x8807E2E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// lfd f0,30504(r31)
	ctx.current_instruction = 0x8807E2E8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 30504);
	// lwz r11,30512(r31)
	ctx.current_instruction = 0x8807E2EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30512);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// ld r7,7712(r31)
	ctx.current_instruction = 0x8807E2F4;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 7712);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r8,80(r1)
	ctx.current_instruction = 0x8807E2FC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x8807E300;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r11,30512(r31)
	ctx.current_instruction = 0x8807E308;
	REX_STORE_U32(ctx.r31.u32 + 30512, ctx.r11.u32);
	// fadd f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 + ctx.f0.f64;
	// stfd f0,30504(r31)
	ctx.current_instruction = 0x8807E310;
	REX_STORE_U64(ctx.r31.u32 + 30504, ctx.f0.u64);
	// cmpdi cr6,r7,500
	ctx.cr6.compare<int64_t>(ctx.r7.s64, 500, ctx.xer);
	// ble cr6,0x8807e334
	if (!ctx.cr6.gt) goto loc_8807E334;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	ctx.current_instruction = 0x8807E320;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x8807E324;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f11,f0,f12
	ctx.f11.f64 = ctx.f0.f64 / ctx.f12.f64;
	// stfd f11,30488(r31)
	ctx.current_instruction = 0x8807E330;
	REX_STORE_U64(ctx.r31.u32 + 30488, ctx.f11.u64);
loc_8807E334:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8807e344
	if (!ctx.cr6.eq) goto loc_8807E344;
	// stw r30,30592(r31)
	ctx.current_instruction = 0x8807E33C;
	REX_STORE_U32(ctx.r31.u32 + 30592, ctx.r30.u32);
	// b 0x8807e3f4
	goto loc_8807E3F4;
loc_8807E344:
	// lwz r11,7944(r31)
	ctx.current_instruction = 0x8807E344;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7944);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807e3bc
	if (!ctx.cr6.eq) goto loc_8807E3BC;
	// lfd f0,7704(r31)
	ctx.current_instruction = 0x8807E350;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7704);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lfd f13,30456(r31)
	ctx.current_instruction = 0x8807E358;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 30456);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f11,30440(r31)
	ctx.current_instruction = 0x8807E360;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 30440);
	// std r10,80(r1)
	ctx.current_instruction = 0x8807E364;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fsub f0,f13,f11
	ctx.f0.f64 = ctx.f13.f64 - ctx.f11.f64;
	// lfd f9,80(r1)
	ctx.current_instruction = 0x8807E36C;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f10,7888(r31)
	ctx.current_instruction = 0x8807E370;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// stfd f0,30456(r31)
	ctx.current_instruction = 0x8807E374;
	REX_STORE_U64(ctx.r31.u32 + 30456, ctx.f0.u64);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// fcfid f11,f9
	ctx.f11.f64 = double(ctx.f9.s64);
	// fmsub f13,f12,f10,f11
	ctx.f13.f64 = std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f11.f64);
	// stfd f13,30464(r31)
	ctx.current_instruction = 0x8807E384;
	REX_STORE_U64(ctx.r31.u32 + 30464, ctx.f13.u64);
	// bge cr6,0x8807e3a8
	if (!ctx.cr6.lt) goto loc_8807E3A8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stfd f11,30440(r31)
	ctx.current_instruction = 0x8807E390;
	REX_STORE_U64(ctx.r31.u32 + 30440, ctx.f11.u64);
	// std r29,7712(r31)
	ctx.current_instruction = 0x8807E394;
	REX_STORE_U64(ctx.r31.u32 + 7712, ctx.r29.u64);
	// lfd f12,9656(r11)
	ctx.current_instruction = 0x8807E398;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 9656);
	// fmadd f0,f0,f12,f13
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64);
	// stfd f0,30464(r31)
	ctx.current_instruction = 0x8807E3A0;
	REX_STORE_U64(ctx.r31.u32 + 30464, ctx.f0.u64);
	// b 0x8807e3f0
	goto loc_8807E3F0;
loc_8807E3A8:
	// fadd f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// stfd f0,30464(r31)
	ctx.current_instruction = 0x8807E3AC;
	REX_STORE_U64(ctx.r31.u32 + 30464, ctx.f0.u64);
	// stfd f11,30440(r31)
	ctx.current_instruction = 0x8807E3B0;
	REX_STORE_U64(ctx.r31.u32 + 30440, ctx.f11.u64);
	// std r29,7712(r31)
	ctx.current_instruction = 0x8807E3B4;
	REX_STORE_U64(ctx.r31.u32 + 7712, ctx.r29.u64);
	// b 0x8807e3f0
	goto loc_8807E3F0;
loc_8807E3BC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfd f13,30440(r31)
	ctx.current_instruction = 0x8807E3C0;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 30440);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	ctx.current_instruction = 0x8807E3C8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8807E3CC;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// fadd f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 + ctx.f0.f64;
	// stfd f11,30440(r31)
	ctx.current_instruction = 0x8807E3D8;
	REX_STORE_U64(ctx.r31.u32 + 30440, ctx.f11.u64);
	// bne cr6,0x8807e3f0
	if (!ctx.cr6.eq) goto loc_8807E3F0;
	// lfd f13,30464(r31)
	ctx.current_instruction = 0x8807E3E0;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 30464);
	// stw r11,30560(r31)
	ctx.current_instruction = 0x8807E3E4;
	REX_STORE_U32(ctx.r31.u32 + 30560, ctx.r11.u32);
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - ctx.f0.f64;
	// stfd f12,30464(r31)
	ctx.current_instruction = 0x8807E3EC;
	REX_STORE_U64(ctx.r31.u32 + 30464, ctx.f12.u64);
loc_8807E3F0:
	// stw r29,30592(r31)
	ctx.current_instruction = 0x8807E3F0;
	REX_STORE_U32(ctx.r31.u32 + 30592, ctx.r29.u32);
loc_8807E3F4:
	// lwz r11,30580(r31)
	ctx.current_instruction = 0x8807E3F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30580);
	// lfd f0,30456(r31)
	ctx.current_instruction = 0x8807E3F8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 30456);
	// ld r9,7744(r31)
	ctx.current_instruction = 0x8807E3FC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 7744);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// cmpdi cr6,r9,1
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 1, ctx.xer);
	// std r10,88(r1)
	ctx.current_instruction = 0x8807E408;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r9,80(r1)
	ctx.current_instruction = 0x8807E40C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.current_instruction = 0x8807E410;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// stfd f11,30456(r31)
	ctx.current_instruction = 0x8807E41C;
	REX_STORE_U64(ctx.r31.u32 + 30456, ctx.f11.u64);
	// ble cr6,0x8807e4fc
	if (!ctx.cr6.gt) goto loc_8807E4FC;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lfd f13,30464(r31)
	ctx.current_instruction = 0x8807E428;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 30464);
	// ld r11,7712(r31)
	ctx.current_instruction = 0x8807E42C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 7712);
	// ld r10,7704(r31)
	ctx.current_instruction = 0x8807E430;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 7704);
	// rldicr r7,r11,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lfd f0,1488(r8)
	ctx.current_instruction = 0x8807E438;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 1488);
	// cmpd cr6,r7,r10
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r10.s64, ctx.xer);
	// fsel f12,f13,f13,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8807E444;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f12,30464(r31)
	ctx.current_instruction = 0x8807E44C;
	REX_STORE_U64(ctx.r31.u32 + 30464, ctx.f12.u64);
	// fmul f11,f13,f12
	ctx.f11.f64 = ctx.f13.f64 * ctx.f12.f64;
	// bge cr6,0x8807e488
	if (!ctx.cr6.lt) goto loc_8807E488;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,88(r1)
	ctx.current_instruction = 0x8807E460;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f0,12480(r10)
	ctx.current_instruction = 0x8807E468;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12480);
	// lfd f10,88(r1)
	ctx.current_instruction = 0x8807E46C;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fdiv f8,f11,f9
	ctx.f8.f64 = ctx.f11.f64 / ctx.f9.f64;
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// stfd f7,30472(r31)
	ctx.current_instruction = 0x8807E47C;
	REX_STORE_U64(ctx.r31.u32 + 30472, ctx.f7.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8807E488:
	// rldicr r8,r9,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicr r9,r9,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpd cr6,r8,r10
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r10.s64, ctx.xer);
	// bgt cr6,0x8807e4d0
	if (ctx.cr6.gt) goto loc_8807E4D0;
	// std r11,88(r1)
	ctx.current_instruction = 0x8807E4A4;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f10,88(r1)
	ctx.current_instruction = 0x8807E4A8;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fdiv f8,f11,f9
	ctx.f8.f64 = ctx.f11.f64 / ctx.f9.f64;
	// lfd f0,12296(r10)
	ctx.current_instruction = 0x8807E4B8;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12296);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// stfd f7,30472(r31)
	ctx.current_instruction = 0x8807E4C4;
	REX_STORE_U64(ctx.r31.u32 + 30472, ctx.f7.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8807E4D0:
	// std r11,88(r1)
	ctx.current_instruction = 0x8807E4D0;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f0,12384(r10)
	ctx.current_instruction = 0x8807E4DC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12384);
	// lfd f10,88(r1)
	ctx.current_instruction = 0x8807E4E0;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fdiv f8,f11,f9
	ctx.f8.f64 = ctx.f11.f64 / ctx.f9.f64;
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// stfd f7,30472(r31)
	ctx.current_instruction = 0x8807E4F0;
	REX_STORE_U64(ctx.r31.u32 + 30472, ctx.f7.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8807E4FC:
	// lfd f0,7720(r31)
	ctx.current_instruction = 0x8807E4FC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7720);
	// ld r11,7704(r31)
	ctx.current_instruction = 0x8807E500;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 7704);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ld r10,7712(r31)
	ctx.current_instruction = 0x8807E508;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 7712);
	// lfd f12,30464(r31)
	ctx.current_instruction = 0x8807E50C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 30464);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// std r8,88(r1)
	ctx.current_instruction = 0x8807E518;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.current_instruction = 0x8807E51C;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmul f9,f13,f12
	ctx.f9.f64 = ctx.f13.f64 * ctx.f12.f64;
	// lfd f0,12480(r9)
	ctx.current_instruction = 0x8807E528;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12480);
	// fdiv f8,f9,f10
	ctx.f8.f64 = ctx.f9.f64 / ctx.f10.f64;
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// stfd f7,30472(r31)
	ctx.current_instruction = 0x8807E534;
	REX_STORE_U64(ctx.r31.u32 + 30472, ctx.f7.u64);
loc_8807E538:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8809C278) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8809C278;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8809C278) {
			switch (rex_dispatch_address) {
				case 0x8809C280:
				case 0x8809C2FC:
				case 0x8809C680:
				case 0x8809C84C:
				case 0x8809CA10:
				case 0x8809CA4C:
				case 0x8809CAA4:
				case 0x8809CB38:
				case 0x8809CB4C:
				case 0x8809CB6C:
				case 0x8809CD18:
				case 0x8809CD98:
				case 0x8809CE1C:
				case 0x8809CE58:
				case 0x8809CE70:
				case 0x8809CE98:
				case 0x8809CEB0:
				case 0x8809CEF0:
				case 0x8809CF0C:
				case 0x8809CF40:
				case 0x8809CF58:
				case 0x8809D014:
				case 0x8809D0A0:
				case 0x8809D134:
				case 0x8809D184:
				case 0x8809D19C:
				case 0x8809D1C4:
				case 0x8809D1DC:
				case 0x8809D218:
				case 0x8809D230:
				case 0x8809D260:
				case 0x8809D278:
				case 0x8809D2DC:
				case 0x8809D2F4:
				case 0x8809D318:
				case 0x8809D330:
				case 0x8809D358:
				case 0x8809D370:
				case 0x8809D3C4:
				case 0x8809D3E0:
				case 0x8809D410:
				case 0x8809D428:
				case 0x8809D458:
				case 0x8809D470:
				case 0x8809D51C:
				case 0x8809D560:
				case 0x8809D578:
				case 0x8809D640:
				case 0x8809D710:
				case 0x8809D728:
				case 0x8809D76C:
				case 0x8809D784:
				case 0x8809D8F8:
				case 0x8809D910:
				case 0x8809D958:
				case 0x8809D970:
				case 0x8809D9F0:
				case 0x8809DA14:
				case 0x8809DACC:
				case 0x8809DBA4:
				case 0x8809DBB8:
				case 0x8809DBD4:
				case 0x8809DD78:
				case 0x8809DD94:
				case 0x8809DDB0:
				case 0x8809DDC8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8809C278;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8809C280: goto loc_8809C280;
		case 0x8809C2FC: goto loc_8809C2FC;
		case 0x8809C680: goto loc_8809C680;
		case 0x8809C84C: goto loc_8809C84C;
		case 0x8809CA10: goto loc_8809CA10;
		case 0x8809CA4C: goto loc_8809CA4C;
		case 0x8809CAA4: goto loc_8809CAA4;
		case 0x8809CB38: goto loc_8809CB38;
		case 0x8809CB4C: goto loc_8809CB4C;
		case 0x8809CB6C: goto loc_8809CB6C;
		case 0x8809CD18: goto loc_8809CD18;
		case 0x8809CD98: goto loc_8809CD98;
		case 0x8809CE1C: goto loc_8809CE1C;
		case 0x8809CE58: goto loc_8809CE58;
		case 0x8809CE70: goto loc_8809CE70;
		case 0x8809CE98: goto loc_8809CE98;
		case 0x8809CEB0: goto loc_8809CEB0;
		case 0x8809CEF0: goto loc_8809CEF0;
		case 0x8809CF0C: goto loc_8809CF0C;
		case 0x8809CF40: goto loc_8809CF40;
		case 0x8809CF58: goto loc_8809CF58;
		case 0x8809D014: goto loc_8809D014;
		case 0x8809D0A0: goto loc_8809D0A0;
		case 0x8809D134: goto loc_8809D134;
		case 0x8809D184: goto loc_8809D184;
		case 0x8809D19C: goto loc_8809D19C;
		case 0x8809D1C4: goto loc_8809D1C4;
		case 0x8809D1DC: goto loc_8809D1DC;
		case 0x8809D218: goto loc_8809D218;
		case 0x8809D230: goto loc_8809D230;
		case 0x8809D260: goto loc_8809D260;
		case 0x8809D278: goto loc_8809D278;
		case 0x8809D2DC: goto loc_8809D2DC;
		case 0x8809D2F4: goto loc_8809D2F4;
		case 0x8809D318: goto loc_8809D318;
		case 0x8809D330: goto loc_8809D330;
		case 0x8809D358: goto loc_8809D358;
		case 0x8809D370: goto loc_8809D370;
		case 0x8809D3C4: goto loc_8809D3C4;
		case 0x8809D3E0: goto loc_8809D3E0;
		case 0x8809D410: goto loc_8809D410;
		case 0x8809D428: goto loc_8809D428;
		case 0x8809D458: goto loc_8809D458;
		case 0x8809D470: goto loc_8809D470;
		case 0x8809D51C: goto loc_8809D51C;
		case 0x8809D560: goto loc_8809D560;
		case 0x8809D578: goto loc_8809D578;
		case 0x8809D640: goto loc_8809D640;
		case 0x8809D710: goto loc_8809D710;
		case 0x8809D728: goto loc_8809D728;
		case 0x8809D76C: goto loc_8809D76C;
		case 0x8809D784: goto loc_8809D784;
		case 0x8809D8F8: goto loc_8809D8F8;
		case 0x8809D910: goto loc_8809D910;
		case 0x8809D958: goto loc_8809D958;
		case 0x8809D970: goto loc_8809D970;
		case 0x8809D9F0: goto loc_8809D9F0;
		case 0x8809DA14: goto loc_8809DA14;
		case 0x8809DACC: goto loc_8809DACC;
		case 0x8809DBA4: goto loc_8809DBA4;
		case 0x8809DBB8: goto loc_8809DBB8;
		case 0x8809DBD4: goto loc_8809DBD4;
		case 0x8809DD78: goto loc_8809DD78;
		case 0x8809DD94: goto loc_8809DD94;
		case 0x8809DDB0: goto loc_8809DDB0;
		case 0x8809DDC8: goto loc_8809DDC8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8809C280;
	__savegprlr_14(ctx, base);
loc_8809C280:
	// stwu r1,-1408(r1)
	ctx.current_instruction = 0x8809C280;
	ea = -1408 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r10,1484(r1)
	ctx.current_instruction = 0x8809C288;
	REX_STORE_U32(ctx.r1.u32 + 1484, ctx.r10.u32);
	// lwz r11,28088(r3)
	ctx.current_instruction = 0x8809C28C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28088);
	// addi r10,r1,991
	ctx.r10.s64 = ctx.r1.s64 + 991;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r8,1468(r1)
	ctx.current_instruction = 0x8809C298;
	REX_STORE_U32(ctx.r1.u32 + 1468, ctx.r8.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r9,1476(r1)
	ctx.current_instruction = 0x8809C2A0;
	REX_STORE_U32(ctx.r1.u32 + 1476, ctx.r9.u32);
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r4,1436(r1)
	ctx.current_instruction = 0x8809C2A8;
	REX_STORE_U32(ctx.r1.u32 + 1436, ctx.r4.u32);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stw r5,1444(r1)
	ctx.current_instruction = 0x8809C2B0;
	REX_STORE_U32(ctx.r1.u32 + 1444, ctx.r5.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r7,1460(r1)
	ctx.current_instruction = 0x8809C2B8;
	REX_STORE_U32(ctx.r1.u32 + 1460, ctx.r7.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r9,292(r1)
	ctx.current_instruction = 0x8809C2C0;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8809c2d8
	if (ctx.cr6.eq) goto loc_8809C2D8;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8809c2ec
	goto loc_8809C2EC;
loc_8809C2D8:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lwz r5,1588(r1)
	ctx.current_instruction = 0x8809C2DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809c2ec
	if (!ctx.cr6.eq) goto loc_8809C2EC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8809C2EC:
	// lwz r28,1580(r1)
	ctx.current_instruction = 0x8809C2EC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880e2660
	ctx.lr = 0x8809C2FC;
	sub_880E2660(ctx, base);
loc_8809C2FC:
	// srawi r11,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// lwz r10,724(r27)
	ctx.current_instruction = 0x8809C300;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 724);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lwz r8,8(r28)
	ctx.current_instruction = 0x8809C308;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mullw r11,r10,r29
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lwz r6,12(r28)
	ctx.current_instruction = 0x8809C310;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r9,7764(r27)
	ctx.current_instruction = 0x8809C314;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 7764);
	// lwz r5,1540(r1)
	ctx.current_instruction = 0x8809C318;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// stw r3,240(r1)
	ctx.current_instruction = 0x8809C31C;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// stw r8,288(r1)
	ctx.current_instruction = 0x8809C320;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// stw r6,208(r1)
	ctx.current_instruction = 0x8809C324;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// lwz r4,1500(r1)
	ctx.current_instruction = 0x8809C328;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// lwz r3,1492(r1)
	ctx.current_instruction = 0x8809C32C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// srawi r10,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 2;
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r5,1556(r1)
	ctx.current_instruction = 0x8809C34C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// stw r9,280(r1)
	ctx.current_instruction = 0x8809C350;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// beq cr6,0x8809c3d4
	if (ctx.cr6.eq) goto loc_8809C3D4;
	// srawi r10,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// ble cr6,0x8809c3ac
	if (!ctx.cr6.gt) goto loc_8809C3AC;
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
loc_8809C384:
	// lwz r30,-128(r10)
	ctx.current_instruction = 0x8809C384;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -128);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8809c39c
	if (!ctx.cr6.eq) goto loc_8809C39C;
	// lwz r30,0(r10)
	ctx.current_instruction = 0x8809C390;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8809c3ac
	if (ctx.cr6.eq) goto loc_8809C3AC;
loc_8809C39C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8809c384
	if (ctx.cr6.lt) goto loc_8809C384;
loc_8809C3AC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8809c3d4
	if (!ctx.cr6.eq) goto loc_8809C3D4;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,1556(r1)
	ctx.current_instruction = 0x8809C3C8;
	REX_STORE_U32(ctx.r1.u32 + 1556, ctx.r5.u32);
	// stwx r9,r10,r31
	ctx.current_instruction = 0x8809C3CC;
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r8,r11,r31
	ctx.current_instruction = 0x8809C3D0;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
loc_8809C3D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8809c40c
	if (!ctx.cr6.gt) goto loc_8809C40C;
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
loc_8809C3E4:
	// lwz r9,-128(r10)
	ctx.current_instruction = 0x8809C3E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -128);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8809c3fc
	if (!ctx.cr6.eq) goto loc_8809C3FC;
	// lwz r9,0(r10)
	ctx.current_instruction = 0x8809C3F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8809c40c
	if (ctx.cr6.eq) goto loc_8809C40C;
loc_8809C3FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8809c3e4
	if (ctx.cr6.lt) goto loc_8809C3E4;
loc_8809C40C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8809c434
	if (!ctx.cr6.eq) goto loc_8809C434;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,1556(r1)
	ctx.current_instruction = 0x8809C428;
	REX_STORE_U32(ctx.r1.u32 + 1556, ctx.r5.u32);
	// stwx r7,r8,r31
	ctx.current_instruction = 0x8809C42C;
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r6,r11,r31
	ctx.current_instruction = 0x8809C430;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
loc_8809C434:
	// srawi r9,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r26.s32 >> 1;
	// lwz r20,1572(r1)
	ctx.current_instruction = 0x8809C438;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// srawi r7,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r25.s32 >> 1;
	// stw r9,296(r1)
	ctx.current_instruction = 0x8809C444;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// stw r8,320(r1)
	ctx.current_instruction = 0x8809C44C;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// stw r7,284(r1)
	ctx.current_instruction = 0x8809C454;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// stw r23,232(r1)
	ctx.current_instruction = 0x8809C464;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
	// addi r10,r1,576
	ctx.r10.s64 = ctx.r1.s64 + 576;
	// stw r6,216(r1)
	ctx.current_instruction = 0x8809C46C;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r6.u32);
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// stw r3,276(r1)
	ctx.current_instruction = 0x8809C474;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,212(r1)
	ctx.current_instruction = 0x8809C47C;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// addi r7,r11,6848
	ctx.r7.s64 = ctx.r11.s64 + 6848;
	// stw r9,312(r1)
	ctx.current_instruction = 0x8809C484;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// stw r8,268(r1)
	ctx.current_instruction = 0x8809C48C;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// stw r7,228(r1)
	ctx.current_instruction = 0x8809C490;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r7.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8809c98c
	if (!ctx.cr6.gt) goto loc_8809C98C;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// lwz r17,280(r1)
	ctx.current_instruction = 0x8809C4A0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r16,280(r1)
	ctx.current_instruction = 0x8809C4A4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r11,260(r1)
	ctx.current_instruction = 0x8809C4A8;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
loc_8809C4AC:
	// lwz r6,260(r1)
	ctx.current_instruction = 0x8809C4AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,1380(r27)
	ctx.current_instruction = 0x8809C4B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// lwz r15,1548(r1)
	ctx.current_instruction = 0x8809C4B8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lwz r7,268(r1)
	ctx.current_instruction = 0x8809C4BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r31,1444(r1)
	ctx.current_instruction = 0x8809C4C0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// neg r14,r15
	ctx.r14.s64 = static_cast<int64_t>(-ctx.r15.u64);
	// lwz r9,128(r6)
	ctx.current_instruction = 0x8809C4C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 128);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r8,0(r6)
	ctx.current_instruction = 0x8809C4D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r15,220(r1)
	ctx.current_instruction = 0x8809C4DC;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r15.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// stw r4,300(r1)
	ctx.current_instruction = 0x8809C4EC;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// stw r5,308(r1)
	ctx.current_instruction = 0x8809C4F0;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// stw r14,264(r1)
	ctx.current_instruction = 0x8809C4F4;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r14.u32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// add r18,r11,r31
	ctx.r18.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ble cr6,0x8809c598
	if (!ctx.cr6.gt) goto loc_8809C598;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8809c598
	if (ctx.cr6.eq) goto loc_8809C598;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_8809C514:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8809c590
	if (ctx.cr6.eq) goto loc_8809C590;
	// lwz r11,0(r7)
	ctx.current_instruction = 0x8809C51C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8809c554
	if (!ctx.cr6.eq) goto loc_8809C554;
	// lwz r11,128(r7)
	ctx.current_instruction = 0x8809C528;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 128);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8809c540
	if (!ctx.cr6.eq) goto loc_8809C540;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8809C540:
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8809c588
	if (!ctx.cr6.eq) goto loc_8809C588;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x8809c584
	goto loc_8809C584;
loc_8809C554:
	// lwz r6,128(r7)
	ctx.current_instruction = 0x8809C554;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 128);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8809c588
	if (!ctx.cr6.eq) goto loc_8809C588;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8809c574
	if (!ctx.cr6.eq) goto loc_8809C574;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8809C574:
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8809c588
	if (!ctx.cr6.eq) goto loc_8809C588;
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
loc_8809C584:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8809C588:
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bdnz 0x8809c514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8809C514;
loc_8809C590:
	// stw r29,264(r1)
	ctx.current_instruction = 0x8809C590;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// stw r3,220(r1)
	ctx.current_instruction = 0x8809C594;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
loc_8809C598:
	// lwz r11,1508(r1)
	ctx.current_instruction = 0x8809C598;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// add r10,r14,r5
	ctx.r10.u64 = ctx.r14.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8809c5ac
	if (!ctx.cr6.lt) goto loc_8809C5AC;
	// subf r14,r5,r11
	ctx.r14.u64 = ctx.r11.u64 - ctx.r5.u64;
loc_8809C5AC:
	// lwz r11,1516(r1)
	ctx.current_instruction = 0x8809C5AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
	// add r10,r15,r5
	ctx.r10.u64 = ctx.r15.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809c5c0
	if (!ctx.cr6.gt) goto loc_8809C5C0;
	// subf r15,r5,r11
	ctx.r15.u64 = ctx.r11.u64 - ctx.r5.u64;
loc_8809C5C0:
	// lwz r11,1524(r1)
	ctx.current_instruction = 0x8809C5C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// add r10,r29,r4
	ctx.r10.u64 = ctx.r29.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8809c5d8
	if (!ctx.cr6.lt) goto loc_8809C5D8;
	// subf r29,r4,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r4.u64;
	// stw r29,264(r1)
	ctx.current_instruction = 0x8809C5D4;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
loc_8809C5D8:
	// lwz r11,1532(r1)
	ctx.current_instruction = 0x8809C5D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809c5f0
	if (!ctx.cr6.gt) goto loc_8809C5F0;
	// subf r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	// stw r3,220(r1)
	ctx.current_instruction = 0x8809C5EC;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
loc_8809C5F0:
	// lwz r11,1540(r1)
	ctx.current_instruction = 0x8809C5F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809c7cc
	if (ctx.cr6.eq) goto loc_8809C7CC;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x8809c8f4
	if (ctx.cr6.gt) goto loc_8809C8F4;
	// lwz r11,264(r1)
	ctx.current_instruction = 0x8809C604;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r10,300(r1)
	ctx.current_instruction = 0x8809C60C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,312(r1)
	ctx.current_instruction = 0x8809C610;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r26,r8,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r21,r9,r26
	ctx.r21.u64 = ctx.r26.u64 - ctx.r9.u64;
loc_8809C620:
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpw cr6,r14,r15
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r15.s32, ctx.xer);
	// bgt cr6,0x8809c7ac
	if (ctx.cr6.gt) goto loc_8809C7AC;
	// lwz r10,308(r1)
	ctx.current_instruction = 0x8809C630;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// srawi r9,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 31;
	// lwz r11,320(r1)
	ctx.current_instruction = 0x8809C638;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// add r8,r14,r10
	ctx.r8.u64 = ctx.r14.u64 + ctx.r10.u64;
	// lwz r7,296(r1)
	ctx.current_instruction = 0x8809C640;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// xor r6,r21,r9
	ctx.r6.u64 = ctx.r21.u64 ^ ctx.r9.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r9,r6
	ctx.r24.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r30,r11,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r28,r7,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r7.u64;
loc_8809C658:
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809C658;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// lwz r10,288(r1)
	ctx.current_instruction = 0x8809C660;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// lwz r3,1436(r1)
	ctx.current_instruction = 0x8809C66C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r11,r18
	ctx.r5.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x8809C680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809C680:
	// lwz r9,284(r1)
	ctx.current_instruction = 0x8809C680;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r8,r28,r30
	ctx.r8.u64 = ctx.r28.u64 + ctx.r30.u64;
	// subf r7,r9,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r9.u64;
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
	// bgt cr6,0x8809c6e0
	if (ctx.cr6.gt) goto loc_8809C6E0;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8809c6e0
	if (ctx.cr6.gt) goto loc_8809C6E0;
	// lwz r8,228(r1)
	ctx.current_instruction = 0x8809C6B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r8
	ctx.current_instruction = 0x8809C6C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r10,r8
	ctx.current_instruction = 0x8809C6C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r20
	ctx.current_instruction = 0x8809C6D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// lwzx r10,r5,r20
	ctx.current_instruction = 0x8809C6D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809c6ec
	goto loc_8809C6EC;
loc_8809C6E0:
	// lwz r11,20(r20)
	ctx.current_instruction = 0x8809C6E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// lwz r8,228(r1)
	ctx.current_instruction = 0x8809C6E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809C6EC:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8809c710
	if (!ctx.cr6.lt) goto loc_8809C710;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r19,r23,1
	ctx.r19.s64 = ctx.r23.s64 + 1;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,272(r1)
	ctx.current_instruction = 0x8809C704;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_8809C710:
	// srawi r10,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 31;
	// lwz r7,216(r1)
	ctx.current_instruction = 0x8809C714;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// add r6,r22,r25
	ctx.r6.u64 = ctx.r22.u64 + ctx.r25.u64;
	// xor r5,r30,r10
	ctx.r5.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// stwx r11,r9,r7
	ctx.current_instruction = 0x8809C72C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// bgt cr6,0x8809c764
	if (ctx.cr6.gt) goto loc_8809C764;
	// cmpwi cr6,r24,158
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 158, ctx.xer);
	// bgt cr6,0x8809c764
	if (ctx.cr6.gt) goto loc_8809C764;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r8
	ctx.current_instruction = 0x8809C744;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r6,r10,r8
	ctx.current_instruction = 0x8809C748;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r20
	ctx.current_instruction = 0x8809C754;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// lwzx r10,r4,r20
	ctx.current_instruction = 0x8809C758;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r20.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809c76c
	goto loc_8809C76C;
loc_8809C764:
	// lwz r11,20(r20)
	ctx.current_instruction = 0x8809C764;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809C76C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8809c790
	if (!ctx.cr6.lt) goto loc_8809C790;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r19,r23,1
	ctx.r19.s64 = ctx.r23.s64 + 1;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r10,272(r1)
	ctx.current_instruction = 0x8809C784;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_8809C790:
	// lwz r10,276(r1)
	ctx.current_instruction = 0x8809C790;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// stwx r11,r9,r10
	ctx.current_instruction = 0x8809C7A4;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// ble cr6,0x8809c658
	if (!ctx.cr6.gt) goto loc_8809C658;
loc_8809C7AC:
	// lwz r11,220(r1)
	ctx.current_instruction = 0x8809C7AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r21,r21,2
	ctx.r21.s64 = ctx.r21.s64 + 2;
	// addi r22,r22,7
	ctx.r22.s64 = ctx.r22.s64 + 7;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809c620
	if (!ctx.cr6.gt) goto loc_8809C620;
	// b 0x8809c8f4
	goto loc_8809C8F4;
loc_8809C7CC:
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x8809c8f4
	if (ctx.cr6.gt) goto loc_8809C8F4;
	// lwz r11,264(r1)
	ctx.current_instruction = 0x8809C7D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,300(r1)
	ctx.current_instruction = 0x8809C7DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,284(r1)
	ctx.current_instruction = 0x8809C7E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r22,288(r1)
	ctx.current_instruction = 0x8809C7E8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r21,1436(r1)
	ctx.current_instruction = 0x8809C7EC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r9,r7
	ctx.r24.u64 = ctx.r7.u64 - ctx.r9.u64;
loc_8809C7F8:
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpw cr6,r14,r15
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r15.s32, ctx.xer);
	// bgt cr6,0x8809c8dc
	if (ctx.cr6.gt) goto loc_8809C8DC;
	// lwz r11,308(r1)
	ctx.current_instruction = 0x8809C808;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// srawi r10,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r24.s32 >> 31;
	// lwz r9,296(r1)
	ctx.current_instruction = 0x8809C810;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// add r8,r14,r11
	ctx.r8.u64 = ctx.r14.u64 + ctx.r11.u64;
	// xor r7,r24,r10
	ctx.r7.u64 = ctx.r24.u64 ^ ctx.r10.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r10,r7
	ctx.r26.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r30,r9,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_8809C828:
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809C828;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// add r5,r11,r18
	ctx.r5.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x8809C84C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809C84C:
	// srawi r11,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 31;
	// xor r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809c894
	if (ctx.cr6.gt) goto loc_8809C894;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x8809c894
	if (ctx.cr6.gt) goto loc_8809C894;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x8809C86C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809C874;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809C878;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r20
	ctx.current_instruction = 0x8809C884;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// lwzx r10,r5,r20
	ctx.current_instruction = 0x8809C888;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809c89c
	goto loc_8809C89C;
loc_8809C894:
	// lwz r11,20(r20)
	ctx.current_instruction = 0x8809C894;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809C89C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8809c8b8
	if (!ctx.cr6.lt) goto loc_8809C8B8;
	// addi r19,r23,1
	ctx.r19.s64 = ctx.r23.s64 + 1;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_8809C8B8:
	// add r10,r25,r28
	ctx.r10.u64 = ctx.r25.u64 + ctx.r28.u64;
	// lwz r9,216(r1)
	ctx.current_instruction = 0x8809C8BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// stwx r11,r8,r9
	ctx.current_instruction = 0x8809C8D4;
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// ble cr6,0x8809c828
	if (!ctx.cr6.gt) goto loc_8809C828;
loc_8809C8DC:
	// lwz r11,220(r1)
	ctx.current_instruction = 0x8809C8DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r25,r25,7
	ctx.r25.s64 = ctx.r25.s64 + 7;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809c7f8
	if (!ctx.cr6.gt) goto loc_8809C7F8;
loc_8809C8F4:
	// lwz r11,232(r1)
	ctx.current_instruction = 0x8809C8F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8809c968
	if (!ctx.cr6.lt) goto loc_8809C968;
	// lwz r10,300(r1)
	ctx.current_instruction = 0x8809C900;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r11,308(r1)
	ctx.current_instruction = 0x8809C904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r9,264(r1)
	ctx.current_instruction = 0x8809C908;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r8,220(r1)
	ctx.current_instruction = 0x8809C90C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r7,1540(r1)
	ctx.current_instruction = 0x8809C910;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// stw r10,244(r1)
	ctx.current_instruction = 0x8809C914;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r10,212(r1)
	ctx.current_instruction = 0x8809C918;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r23,232(r1)
	ctx.current_instruction = 0x8809C920;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
	// stw r11,252(r1)
	ctx.current_instruction = 0x8809C924;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// stw r17,256(r1)
	ctx.current_instruction = 0x8809C928;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r17.u32);
	// stw r16,248(r1)
	ctx.current_instruction = 0x8809C92C;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r16.u32);
	// stw r14,328(r1)
	ctx.current_instruction = 0x8809C930;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r14.u32);
	// stw r9,304(r1)
	ctx.current_instruction = 0x8809C934;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// stw r15,324(r1)
	ctx.current_instruction = 0x8809C938;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r15.u32);
	// stw r8,316(r1)
	ctx.current_instruction = 0x8809C93C;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// beq cr6,0x8809c95c
	if (ctx.cr6.eq) goto loc_8809C95C;
	// lwz r11,272(r1)
	ctx.current_instruction = 0x8809C944;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809c95c
	if (ctx.cr6.eq) goto loc_8809C95C;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x8809C950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// stw r10,276(r1)
	ctx.current_instruction = 0x8809C954;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// b 0x8809c964
	goto loc_8809C964;
loc_8809C95C:
	// lwz r11,216(r1)
	ctx.current_instruction = 0x8809C95C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// stw r10,216(r1)
	ctx.current_instruction = 0x8809C960;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
loc_8809C964:
	// stw r11,212(r1)
	ctx.current_instruction = 0x8809C964;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
loc_8809C968:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x8809C968;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r10,260(r1)
	ctx.current_instruction = 0x8809C96C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r9,1556(r1)
	ctx.current_instruction = 0x8809C970;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r11,268(r1)
	ctx.current_instruction = 0x8809C97C;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r8,260(r1)
	ctx.current_instruction = 0x8809C984;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r8.u32);
	// blt cr6,0x8809c4ac
	if (ctx.cr6.lt) goto loc_8809C4AC;
loc_8809C98C:
	// lwz r25,256(r1)
	ctx.current_instruction = 0x8809C98C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r23,252(r1)
	ctx.current_instruction = 0x8809C990;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r22,248(r1)
	ctx.current_instruction = 0x8809C994;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r11,244(r1)
	ctx.current_instruction = 0x8809C998;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r30,r25,r23
	ctx.r30.u64 = ctx.r25.u64 + ctx.r23.u64;
	// lwz r10,1540(r1)
	ctx.current_instruction = 0x8809C9A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// add r31,r22,r11
	ctx.r31.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lwz r16,1484(r1)
	ctx.current_instruction = 0x8809C9A8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1484);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r17,1476(r1)
	ctx.current_instruction = 0x8809C9B0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1476);
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,296(r1)
	ctx.current_instruction = 0x8809C9B8;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,288(r1)
	ctx.current_instruction = 0x8809C9C0;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r28.u32);
	// beq cr6,0x8809ca6c
	if (ctx.cr6.eq) goto loc_8809CA6C;
	// lwz r9,2608(r27)
	ctx.current_instruction = 0x8809C9C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 2608);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,2604(r27)
	ctx.current_instruction = 0x8809C9D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 2604);
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r11,r16,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r16.u64;
	// lwz r21,2616(r27)
	ctx.current_instruction = 0x8809C9DC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r27.u32 + 2616);
	// subf r10,r17,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r17.u64;
	// lwz r19,2612(r27)
	ctx.current_instruction = 0x8809C9E4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r27.u32 + 2612);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// and r11,r5,r21
	ctx.r11.u64 = ctx.r5.u64 & ctx.r21.u64;
	// and r10,r4,r19
	ctx.r10.u64 = ctx.r4.u64 & ctx.r19.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r5,r9,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r4,r8,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// bl 0x88085e60
	ctx.lr = 0x8809CA10;
	sub_88085E60(ctx, base);
loc_8809CA10:
	// lwz r26,1500(r1)
	ctx.current_instruction = 0x8809CA10;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r24,1492(r1)
	ctx.current_instruction = 0x8809CA18;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r11,r26,r18
	ctx.r11.u64 = ctx.r18.u64 - ctx.r26.u64;
	// subf r10,r24,r15
	ctx.r10.u64 = ctx.r15.u64 - ctx.r24.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// and r5,r9,r21
	ctx.r5.u64 = ctx.r9.u64 & ctx.r21.u64;
	// and r4,r8,r19
	ctx.r4.u64 = ctx.r8.u64 & ctx.r19.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r5,r18,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r18.u64;
	// subf r4,r15,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r15.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085e60
	ctx.lr = 0x8809CA4C;
	sub_88085E60(ctx, base);
loc_8809CA4C:
	// cmpw cr6,r14,r3
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8809ca5c
	if (!ctx.cr6.lt) goto loc_8809CA5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8809ca68
	goto loc_8809CA68;
loc_8809CA5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r17,r24
	ctx.r17.u64 = ctx.r24.u64;
	// mr r16,r26
	ctx.r16.u64 = ctx.r26.u64;
loc_8809CA68:
	// stw r11,272(r1)
	ctx.current_instruction = 0x8809CA68;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
loc_8809CA6C:
	// lwz r11,28088(r27)
	ctx.current_instruction = 0x8809CA6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28088);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8809ca84
	if (ctx.cr6.eq) goto loc_8809CA84;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8809ca98
	goto loc_8809CA98;
loc_8809CA84:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwz r5,1588(r1)
	ctx.current_instruction = 0x8809CA88;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809ca98
	if (!ctx.cr6.eq) goto loc_8809CA98;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8809CA98:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,1580(r1)
	ctx.current_instruction = 0x8809CA9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// bl 0x880e2660
	ctx.lr = 0x8809CAA4;
	sub_880E2660(ctx, base);
loc_8809CAA4:
	// lwz r11,240(r1)
	ctx.current_instruction = 0x8809CAA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// stw r10,240(r1)
	ctx.current_instruction = 0x8809CAB0;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// lwz r10,232(r1)
	ctx.current_instruction = 0x8809CAB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8809cbb8
	if (!ctx.cr6.eq) goto loc_8809CBB8;
	// srawi r10,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 2;
	// lwz r4,1380(r27)
	ctx.current_instruction = 0x8809CAC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// srawi r11,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r16.s32 >> 2;
	// lwz r9,1564(r1)
	ctx.current_instruction = 0x8809CAD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// lwz r6,1444(r1)
	ctx.current_instruction = 0x8809CAD4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,244(r1)
	ctx.current_instruction = 0x8809CADC;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r31,292(r1)
	ctx.current_instruction = 0x8809CAE4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stw r10,252(r1)
	ctx.current_instruction = 0x8809CAE8;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stw r30,248(r1)
	ctx.current_instruction = 0x8809CAEC;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r30,256(r1)
	ctx.current_instruction = 0x8809CAF0;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r27)
	ctx.current_instruction = 0x8809CAF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// clrlwi r7,r17,30
	ctx.r7.u64 = ctx.r17.u32 & 0x3;
	// clrlwi r8,r16,30
	ctx.r8.u64 = ctx.r16.u32 & 0x3;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r7,224(r1)
	ctx.current_instruction = 0x8809CB08;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r9,2308(r27)
	ctx.current_instruction = 0x8809CB10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 2308);
	// stw r8,236(r1)
	ctx.current_instruction = 0x8809CB14;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// li r29,16
	ctx.r29.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne cr6,0x8809cb3c
	if (!ctx.cr6.eq) goto loc_8809CB3C;
	// lwz r11,2488(r27)
	ctx.current_instruction = 0x8809CB28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2488);
	// stw r29,84(r1)
	ctx.current_instruction = 0x8809CB2C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809CB38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809CB38:
	// b 0x8809cb4c
	goto loc_8809CB4C;
loc_8809CB3C:
	// stw r29,84(r1)
	ctx.current_instruction = 0x8809CB3C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r11,2496(r27)
	ctx.current_instruction = 0x8809CB40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809CB4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809CB4C:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809CB4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,1436(r1)
	ctx.current_instruction = 0x8809CB58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809CB6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809CB6C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,158
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 158, ctx.xer);
	// bgt cr6,0x8809cba8
	if (ctx.cr6.gt) goto loc_8809CBA8;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x8809CB78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809CB84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809CB88;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r20
	ctx.current_instruction = 0x8809CB94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// lwzx r11,r5,r20
	ctx.current_instruction = 0x8809CB98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8809ddf4
	goto loc_8809DDF4;
loc_8809CBA8:
	// lwz r11,20(r20)
	ctx.current_instruction = 0x8809CBA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8809ddf4
	goto loc_8809DDF4;
loc_8809CBB8:
	// lwz r11,1524(r1)
	ctx.current_instruction = 0x8809CBB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// lwz r10,1532(r1)
	ctx.current_instruction = 0x8809CBBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// subf r9,r31,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r31.u64;
	// lwz r5,2604(r27)
	ctx.current_instruction = 0x8809CBC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 2604);
	// subf r4,r31,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r31.u64;
	// lwz r8,1508(r1)
	ctx.current_instruction = 0x8809CBCC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// lwz r3,2608(r27)
	ctx.current_instruction = 0x8809CBD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 2608);
	// subf r11,r17,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r17.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809CBDC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// subfe r9,r10,r9
	temp.u8 = (~ctx.r10.u32 + ctx.r9.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r26,1516(r1)
	ctx.current_instruction = 0x8809CBE4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
	// addic r7,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// lwz r24,2612(r27)
	ctx.current_instruction = 0x8809CBEC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r27.u32 + 2612);
	// subf r21,r30,r8
	ctx.r21.u64 = ctx.r8.u64 - ctx.r30.u64;
	// lwz r19,2616(r27)
	ctx.current_instruction = 0x8809CBF4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r27.u32 + 2616);
	// subfe r8,r7,r4
	temp.u8 = (~ctx.r7.u32 + ctx.r4.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r18,316(r1)
	ctx.current_instruction = 0x8809CBFC;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,324(r1)
	ctx.current_instruction = 0x8809CC04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// subf r10,r16,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r16.u64;
	// lwz r7,328(r1)
	ctx.current_instruction = 0x8809CC0C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// subf r30,r30,r26
	ctx.r30.u64 = ctx.r26.u64 - ctx.r30.u64;
	// stw r9,276(r1)
	ctx.current_instruction = 0x8809CC14;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// add r29,r10,r28
	ctx.r29.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r10,304(r1)
	ctx.current_instruction = 0x8809CC1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addic r28,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r28.s64 = ctx.r21.s64 + -1;
	// stw r8,268(r1)
	ctx.current_instruction = 0x8809CC24;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// stw r11,304(r1)
	ctx.current_instruction = 0x8809CC28;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// mullw r11,r31,r6
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// lwz r31,1444(r1)
	ctx.current_instruction = 0x8809CC30;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// and r4,r4,r24
	ctx.r4.u64 = ctx.r4.u64 & ctx.r24.u64;
	// and r29,r29,r19
	ctx.r29.u64 = ctx.r29.u64 & ctx.r19.u64;
	// subfe r15,r28,r21
	temp.u8 = (~ctx.r28.u32 + ctx.r21.u32 < ~ctx.r28.u32) | (~ctx.r28.u32 + ctx.r21.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r15.u64 = ~ctx.r28.u64 + ctx.r21.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addic r28,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r28.s64 = ctx.r30.s64 + -1;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r4,r3,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r3.u64;
	// subf r26,r10,r22
	ctx.r26.u64 = ctx.r22.u64 - ctx.r10.u64;
	// subf r10,r10,r18
	ctx.r10.u64 = ctx.r18.u64 - ctx.r10.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r3,304(r1)
	ctx.current_instruction = 0x8809CC5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// subfe r14,r28,r30
	temp.u8 = (~ctx.r28.u32 + ctx.r30.u32 < ~ctx.r28.u32) | (~ctx.r28.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r14.u64 = ~ctx.r28.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r29,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r5.s32 >> 1;
	// stw r10,284(r1)
	ctx.current_instruction = 0x8809CC68;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// subf r18,r7,r3
	ctx.r18.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r19,r7,r25
	ctx.r19.u64 = ctx.r25.u64 - ctx.r7.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r30,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r4.s32 >> 1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8809cf6c
	if (!ctx.cr6.eq) goto loc_8809CF6C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8809cf6c
	if (ctx.cr6.eq) goto loc_8809CF6C;
	// addi r23,r29,-2
	ctx.r23.s64 = ctx.r29.s64 + -2;
	// addi r9,r30,-2
	ctx.r9.s64 = ctx.r30.s64 + -2;
	// srawi r8,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r23.s32 >> 31;
	// subf r11,r6,r19
	ctx.r11.u64 = ctx.r19.u64 - ctx.r6.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r5,r23,r8
	ctx.r5.u64 = ctx.r23.u64 ^ ctx.r8.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// xor r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r25,r7,r4
	ctx.r25.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r24,r10,-1
	ctx.r24.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809ccf4
	if (ctx.cr6.gt) goto loc_8809CCF4;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x8809ccf4
	if (ctx.cr6.gt) goto loc_8809CCF4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x8809CCCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809CCD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809CCD8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r20
	ctx.current_instruction = 0x8809CCE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// lwzx r11,r4,r20
	ctx.current_instruction = 0x8809CCE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r20.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809ccfc
	goto loc_8809CCFC;
loc_8809CCF4:
	// lwz r11,20(r20)
	ctx.current_instruction = 0x8809CCF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809CCFC:
	// lwz r22,208(r1)
	ctx.current_instruction = 0x8809CCFC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,1436(r1)
	ctx.current_instruction = 0x8809CD08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x8809CD18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809CD18:
	// srawi r11,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 31;
	// lwz r21,212(r1)
	ctx.current_instruction = 0x8809CD1C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r19,-8
	ctx.r10.s64 = ctx.r19.s64 + -8;
	// xor r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 ^ ctx.r11.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r3,r28
	ctx.r7.u64 = ctx.r3.u64 + ctx.r28.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// stwx r7,r8,r21
	ctx.current_instruction = 0x8809CD38;
	REX_STORE_U32(ctx.r8.u32 + ctx.r21.u32, ctx.r7.u32);
	// bgt cr6,0x8809cd74
	if (ctx.cr6.gt) goto loc_8809CD74;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x8809cd74
	if (ctx.cr6.gt) goto loc_8809CD74;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x8809CD4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809CD54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809CD58;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r20
	ctx.current_instruction = 0x8809CD64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// lwzx r11,r5,r20
	ctx.current_instruction = 0x8809CD68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809cd7c
	goto loc_8809CD7C;
loc_8809CD74:
	// lwz r11,20(r20)
	ctx.current_instruction = 0x8809CD74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809CD7C:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809CD80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// addi r5,r24,1
	ctx.r5.s64 = ctx.r24.s64 + 1;
	// lwz r3,1436(r1)
	ctx.current_instruction = 0x8809CD88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x8809CD98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809CD98:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r11,r19,-7
	ctx.r11.s64 = ctx.r19.s64 + -7;
	// srawi r10,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 31;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 ^ ctx.r10.u64;
	// add r7,r3,r28
	ctx.r7.u64 = ctx.r3.u64 + ctx.r28.u64;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stwx r7,r9,r21
	ctx.current_instruction = 0x8809CDB4;
	REX_STORE_U32(ctx.r9.u32 + ctx.r21.u32, ctx.r7.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809cdf4
	if (ctx.cr6.gt) goto loc_8809CDF4;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x8809cdf4
	if (ctx.cr6.gt) goto loc_8809CDF4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x8809CDCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809CDD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809CDD8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r20
	ctx.current_instruction = 0x8809CDE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// lwzx r11,r5,r20
	ctx.current_instruction = 0x8809CDE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809cdfc
	goto loc_8809CDFC;
loc_8809CDF4:
	// lwz r11,20(r20)
	ctx.current_instruction = 0x8809CDF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809CDFC:
	// lwz r25,1436(r1)
	ctx.current_instruction = 0x8809CDFC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r24,2
	ctx.r5.s64 = ctx.r24.s64 + 2;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809CE08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8809CE1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809CE1C:
	// addi r11,r19,-6
	ctx.r11.s64 = ctx.r19.s64 + -6;
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// stwx r10,r9,r21
	ctx.current_instruction = 0x8809CE2C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r21.u32, ctx.r10.u32);
	// bne cr6,0x8809cebc
	if (!ctx.cr6.eq) goto loc_8809CEBC;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8809cebc
	if (ctx.cr6.eq) goto loc_8809CEBC;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809CE40;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8809CE58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809CE58:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809CE70;
	sub_88085820(ctx, base);
loc_8809CE70:
	// add r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809CE74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,-4(r21)
	ctx.current_instruction = 0x8809CE7C;
	REX_STORE_U32(ctx.r21.u32 + -4, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x8809CE98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809CE98:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 2;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809CEB0;
	sub_88085820(ctx, base);
loc_8809CEB0:
	// add r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 + ctx.r3.u64;
	// stw r10,24(r21)
	ctx.current_instruction = 0x8809CEB4;
	REX_STORE_U32(ctx.r21.u32 + 24, ctx.r10.u32);
	// b 0x8809d480
	goto loc_8809D480;
loc_8809CEBC:
	// cmpw cr6,r19,r18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r18.s32, ctx.xer);
	// bne cr6,0x8809d480
	if (!ctx.cr6.eq) goto loc_8809D480;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x8809d480
	if (ctx.cr6.eq) goto loc_8809D480;
	// lwz r28,208(r1)
	ctx.current_instruction = 0x8809CECC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r24,1436(r1)
	ctx.current_instruction = 0x8809CED4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809CEE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8809CEF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809CEF0:
	// lwz r25,1572(r1)
	ctx.current_instruction = 0x8809CEF0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809CF0C;
	sub_88085820(ctx, base);
loc_8809CF0C:
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lwz r28,212(r1)
	ctx.current_instruction = 0x8809CF14;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809CF1C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// add r9,r23,r3
	ctx.r9.u64 = ctx.r23.u64 + ctx.r3.u64;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r28
	ctx.current_instruction = 0x8809CF30;
	REX_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x8809CF40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809CF40:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809CF58;
	sub_88085820(ctx, base);
loc_8809CF58:
	// addi r8,r18,8
	ctx.r8.s64 = ctx.r18.s64 + 8;
	// add r7,r24,r3
	ctx.r7.u64 = ctx.r24.u64 + ctx.r3.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r28
	ctx.current_instruction = 0x8809CF64;
	REX_STORE_U32(ctx.r6.u32 + ctx.r28.u32, ctx.r7.u32);
	// b 0x8809d480
	goto loc_8809D480;
loc_8809CF6C:
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8809d28c
	if (!ctx.cr6.eq) goto loc_8809D28C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8809d28c
	if (ctx.cr6.eq) goto loc_8809D28C;
	// addi r21,r29,-2
	ctx.r21.s64 = ctx.r29.s64 + -2;
	// addi r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 2;
	// srawi r8,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r21.s32 >> 31;
	// add r11,r19,r6
	ctx.r11.u64 = ctx.r19.u64 + ctx.r6.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r5,r21,r8
	ctx.r5.u64 = ctx.r21.u64 ^ ctx.r8.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// xor r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r22,r7,r4
	ctx.r22.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r23,r10,-1
	ctx.r23.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809cfe4
	if (ctx.cr6.gt) goto loc_8809CFE4;
	// cmpwi cr6,r22,158
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 158, ctx.xer);
	// bgt cr6,0x8809cfe4
	if (ctx.cr6.gt) goto loc_8809CFE4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x8809CFBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809CFC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809CFC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r20
	ctx.current_instruction = 0x8809CFD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// lwzx r11,r4,r20
	ctx.current_instruction = 0x8809CFD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r20.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809cfec
	goto loc_8809CFEC;
loc_8809CFE4:
	// lwz r11,20(r20)
	ctx.current_instruction = 0x8809CFE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809CFEC:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809CFEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r3,1436(r1)
	ctx.current_instruction = 0x8809CFF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// subf r20,r26,r10
	ctx.r20.u64 = ctx.r10.u64 - ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r25,r20,r19
	ctx.r25.u64 = ctx.r20.u64 + ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8809D014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D014:
	// srawi r9,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 31;
	// addi r8,r25,6
	ctx.r8.s64 = ctx.r25.s64 + 6;
	// lwz r7,212(r1)
	ctx.current_instruction = 0x8809D01C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// xor r6,r29,r9
	ctx.r6.u64 = ctx.r29.u64 ^ ctx.r9.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// subf r11,r9,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// stwx r4,r5,r7
	ctx.current_instruction = 0x8809D034;
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u32);
	// bgt cr6,0x8809d074
	if (ctx.cr6.gt) goto loc_8809D074;
	// cmpwi cr6,r22,158
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 158, ctx.xer);
	// bgt cr6,0x8809d074
	if (ctx.cr6.gt) goto loc_8809D074;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x8809D048;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r8,r22,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1572(r1)
	ctx.current_instruction = 0x8809D050;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809D054;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x8809D058;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.current_instruction = 0x8809D064;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r10,r5,r10
	ctx.current_instruction = 0x8809D068;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809d080
	goto loc_8809D080;
loc_8809D074:
	// lwz r11,1572(r1)
	ctx.current_instruction = 0x8809D074;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8809D078;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r24,r10,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809D080:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809D080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r23,1
	ctx.r5.s64 = ctx.r23.s64 + 1;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D08C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1436(r1)
	ctx.current_instruction = 0x8809D094;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809D0A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D0A0:
	// addi r28,r29,2
	ctx.r28.s64 = ctx.r29.s64 + 2;
	// lwz r10,212(r1)
	ctx.current_instruction = 0x8809D0A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r9,r25,7
	ctx.r9.s64 = ctx.r25.s64 + 7;
	// srawi r8,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 31;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r6,r28,r8
	ctx.r6.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// add r5,r3,r24
	ctx.r5.u64 = ctx.r3.u64 + ctx.r24.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// stwx r5,r7,r10
	ctx.current_instruction = 0x8809D0C0;
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r5.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809d104
	if (ctx.cr6.gt) goto loc_8809D104;
	// cmpwi cr6,r22,158
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 158, ctx.xer);
	// bgt cr6,0x8809d104
	if (ctx.cr6.gt) goto loc_8809D104;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x8809D0D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r22,1572(r1)
	ctx.current_instruction = 0x8809D0E0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809D0E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809D0E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r22
	ctx.current_instruction = 0x8809D0F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// lwzx r11,r5,r22
	ctx.current_instruction = 0x8809D0F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r22.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809d110
	goto loc_8809D110;
loc_8809D104:
	// lwz r22,1572(r1)
	ctx.current_instruction = 0x8809D104;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// lwz r11,20(r22)
	ctx.current_instruction = 0x8809D108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809D110:
	// lwz r24,208(r1)
	ctx.current_instruction = 0x8809D110;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r5,r23,2
	ctx.r5.s64 = ctx.r23.s64 + 2;
	// lwz r23,1436(r1)
	ctx.current_instruction = 0x8809D118;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D124;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x8809D134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D134:
	// addi r11,r25,8
	ctx.r11.s64 = ctx.r25.s64 + 8;
	// lwz r25,212(r1)
	ctx.current_instruction = 0x8809D138;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// stwx r10,r9,r25
	ctx.current_instruction = 0x8809D148;
	REX_STORE_U32(ctx.r9.u32 + ctx.r25.u32, ctx.r10.u32);
	// bne cr6,0x8809d1e8
	if (!ctx.cr6.eq) goto loc_8809D1E8;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8809d1e8
	if (ctx.cr6.eq) goto loc_8809D1E8;
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D15C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8809D184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D184:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809D19C;
	sub_88085820(ctx, base);
loc_8809D19C:
	// add r9,r28,r3
	ctx.r9.u64 = ctx.r28.u64 + ctx.r3.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D1A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,-4(r29)
	ctx.current_instruction = 0x8809D1A8;
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r9.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// subf r11,r6,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r6.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x8809D1C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D1C4:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r30,-2
	ctx.r5.s64 = ctx.r30.s64 + -2;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809D1DC;
	sub_88085820(ctx, base);
loc_8809D1DC:
	// add r8,r28,r3
	ctx.r8.u64 = ctx.r28.u64 + ctx.r3.u64;
	// stw r8,-32(r29)
	ctx.current_instruction = 0x8809D1E0;
	REX_STORE_U32(ctx.r29.u32 + -32, ctx.r8.u32);
	// b 0x8809d480
	goto loc_8809D480;
loc_8809D1E8:
	// cmpw cr6,r19,r18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r18.s32, ctx.xer);
	// bne cr6,0x8809d480
	if (!ctx.cr6.eq) goto loc_8809D480;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x8809d480
	if (ctx.cr6.eq) goto loc_8809D480;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D1FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r29,r20,r18
	ctx.r29.u64 = ctx.r20.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x8809D218;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D218:
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809D230;
	sub_88085820(ctx, base);
loc_8809D230:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// add r10,r21,r3
	ctx.r10.u64 = ctx.r21.u64 + ctx.r3.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D238;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// subf r11,r6,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r6.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// stwx r10,r9,r25
	ctx.current_instruction = 0x8809D254;
	REX_STORE_U32(ctx.r9.u32 + ctx.r25.u32, ctx.r10.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x8809D260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D260:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r30,-2
	ctx.r5.s64 = ctx.r30.s64 + -2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809D278;
	sub_88085820(ctx, base);
loc_8809D278:
	// addi r8,r29,-6
	ctx.r8.s64 = ctx.r29.s64 + -6;
	// add r7,r24,r3
	ctx.r7.u64 = ctx.r24.u64 + ctx.r3.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r25
	ctx.current_instruction = 0x8809D284;
	REX_STORE_U32(ctx.r6.u32 + ctx.r25.u32, ctx.r7.u32);
	// b 0x8809d480
	goto loc_8809D480;
loc_8809D28C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x8809d37c
	if (!ctx.cr6.eq) goto loc_8809D37C;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8809d37c
	if (ctx.cr6.eq) goto loc_8809D37C;
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D2A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// lwz r25,208(r1)
	ctx.current_instruction = 0x8809D2A4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// subf r9,r26,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r26.u64;
	// lwz r24,1436(r1)
	ctx.current_instruction = 0x8809D2B0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// subf r10,r6,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lwz r8,212(r1)
	ctx.current_instruction = 0x8809D2B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r29,r29,-2
	ctx.r29.s64 = ctx.r29.s64 + -2;
	// add r28,r11,r8
	ctx.r28.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8809D2DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D2DC:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r30,-2
	ctx.r5.s64 = ctx.r30.s64 + -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809D2F4;
	sub_88085820(ctx, base);
loc_8809D2F4:
	// add r7,r23,r3
	ctx.r7.u64 = ctx.r23.u64 + ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D2FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// stw r7,-32(r28)
	ctx.current_instruction = 0x8809D300;
	REX_STORE_U32(ctx.r28.u32 + -32, ctx.r7.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bctrl 
	ctx.lr = 0x8809D318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D318:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809D330;
	sub_88085820(ctx, base);
loc_8809D330:
	// add r5,r23,r3
	ctx.r5.u64 = ctx.r23.u64 + ctx.r3.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D334;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r5,-4(r28)
	ctx.current_instruction = 0x8809D33C;
	REX_STORE_U32(ctx.r28.u32 + -4, ctx.r5.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x8809D358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D358:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809D370;
	sub_88085820(ctx, base);
loc_8809D370:
	// add r4,r25,r3
	ctx.r4.u64 = ctx.r25.u64 + ctx.r3.u64;
	// stw r4,24(r28)
	ctx.current_instruction = 0x8809D374;
	REX_STORE_U32(ctx.r28.u32 + 24, ctx.r4.u32);
	// b 0x8809d480
	goto loc_8809D480;
loc_8809D37C:
	// cmpw cr6,r19,r18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r18.s32, ctx.xer);
	// bne cr6,0x8809d480
	if (!ctx.cr6.eq) goto loc_8809D480;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x8809d480
	if (ctx.cr6.eq) goto loc_8809D480;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D38C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r25,208(r1)
	ctx.current_instruction = 0x8809D394;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r22,1436(r1)
	ctx.current_instruction = 0x8809D39C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// subf r10,r6,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r6.u64;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// add r28,r11,r18
	ctx.r28.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x8809D3C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D3C4:
	// lwz r23,1572(r1)
	ctx.current_instruction = 0x8809D3C4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r30,-2
	ctx.r5.s64 = ctx.r30.s64 + -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809D3E0;
	sub_88085820(ctx, base);
loc_8809D3E0:
	// addi r10,r28,-6
	ctx.r10.s64 = ctx.r28.s64 + -6;
	// lwz r24,212(r1)
	ctx.current_instruction = 0x8809D3E4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// add r9,r21,r3
	ctx.r9.u64 = ctx.r21.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D3F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// stwx r9,r8,r24
	ctx.current_instruction = 0x8809D408;
	REX_STORE_U32(ctx.r8.u32 + ctx.r24.u32, ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8809D410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D410:
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809D428;
	sub_88085820(ctx, base);
loc_8809D428:
	// addi r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 1;
	// add r4,r21,r3
	ctx.r4.u64 = ctx.r21.u64 + ctx.r3.u64;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D430;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// add r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 + ctx.r31.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stwx r4,r3,r24
	ctx.current_instruction = 0x8809D448;
	REX_STORE_U32(ctx.r3.u32 + ctx.r24.u32, ctx.r4.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x8809D458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D458:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809D470;
	sub_88085820(ctx, base);
loc_8809D470:
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// add r10,r25,r3
	ctx.r10.u64 = ctx.r25.u64 + ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r24
	ctx.current_instruction = 0x8809D47C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r24.u32, ctx.r10.u32);
loc_8809D480:
	// lwz r9,2604(r27)
	ctx.current_instruction = 0x8809D480;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 2604);
	// lwz r8,2608(r27)
	ctx.current_instruction = 0x8809D484;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 2608);
	// lwz r28,296(r1)
	ctx.current_instruction = 0x8809D488;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// subf r10,r17,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r17.u64;
	// lwz r24,288(r1)
	ctx.current_instruction = 0x8809D490;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// subf r11,r16,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r16.u64;
	// lwz r7,2612(r27)
	ctx.current_instruction = 0x8809D498;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 2612);
	// add r6,r10,r28
	ctx.r6.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r5,2616(r27)
	ctx.current_instruction = 0x8809D4A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 2616);
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r3,28036(r27)
	ctx.current_instruction = 0x8809D4A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 28036);
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
	// and r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 & ctx.r5.u64;
	// subf r30,r9,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r29,r8,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8809d9b8
	if (ctx.cr6.eq) goto loc_8809D9B8;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r10,724(r27)
	ctx.current_instruction = 0x8809D4C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 724);
	// lwz r24,1468(r1)
	ctx.current_instruction = 0x8809D4CC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8809D4D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,2488(r27)
	ctx.current_instruction = 0x8809D4DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2488);
	// mullw r11,r10,r24
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// lwz r25,1460(r1)
	ctx.current_instruction = 0x8809D4E4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1460);
	// lwz r23,292(r1)
	ctx.current_instruction = 0x8809D4E8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r28,7764(r27)
	ctx.current_instruction = 0x8809D4EC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 7764);
	// lwz r4,1380(r27)
	ctx.current_instruction = 0x8809D4F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lwz r10,1560(r27)
	ctx.current_instruction = 0x8809D4F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// lwz r9,2308(r27)
	ctx.current_instruction = 0x8809D4FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 2308);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mulli r11,r3,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(276));
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8809D51C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D51C:
	// addi r7,r1,220
	ctx.r7.s64 = ctx.r1.s64 + 220;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lwz r4,1436(r1)
	ctx.current_instruction = 0x8809D524;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// stw r7,92(r1)
	ctx.current_instruction = 0x8809D52C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,84(r1)
	ctx.current_instruction = 0x8809D530;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8809D53C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r25,108(r1)
	ctx.current_instruction = 0x8809D544;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8809D54C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085938
	ctx.lr = 0x8809D560;
	sub_88085938(ctx, base);
loc_8809D560:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,216(r1)
	ctx.current_instruction = 0x8809D568;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085e60
	ctx.lr = 0x8809D578;
	sub_88085E60(ctx, base);
loc_8809D578:
	// lwz r5,208(r1)
	ctx.current_instruction = 0x8809D578;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,1540(r1)
	ctx.current_instruction = 0x8809D57C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stw r11,208(r1)
	ctx.current_instruction = 0x8809D584;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8809d598
	if (ctx.cr6.eq) goto loc_8809D598;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,208(r1)
	ctx.current_instruction = 0x8809D594;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_8809D598:
	// lwz r22,1540(r1)
	ctx.current_instruction = 0x8809D598;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// addi r10,r1,260
	ctx.r10.s64 = ctx.r1.s64 + 260;
	// lwz r25,1468(r1)
	ctx.current_instruction = 0x8809D5A0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwz r20,1460(r1)
	ctx.current_instruction = 0x8809D5A8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1460);
	// addi r8,r1,236
	ctx.r8.s64 = ctx.r1.s64 + 236;
	// stw r10,204(r1)
	ctx.current_instruction = 0x8809D5B0;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r9,188(r1)
	ctx.current_instruction = 0x8809D5B8;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// addi r4,r18,1
	ctx.r4.s64 = ctx.r18.s64 + 1;
	// stw r29,148(r1)
	ctx.current_instruction = 0x8809D5C0;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r8,196(r1)
	ctx.current_instruction = 0x8809D5C8;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stw r28,172(r1)
	ctx.current_instruction = 0x8809D5D0;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r22,180(r1)
	ctx.current_instruction = 0x8809D5D8;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r25,164(r1)
	ctx.current_instruction = 0x8809D5DC;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// stw r20,156(r1)
	ctx.current_instruction = 0x8809D5E0;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// lwz r10,108(r28)
	ctx.current_instruction = 0x8809D5E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 108);
	// lwz r9,220(r1)
	ctx.current_instruction = 0x8809D5E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r24,1564(r1)
	ctx.current_instruction = 0x8809D5F0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// lwz r31,284(r1)
	ctx.current_instruction = 0x8809D5F4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r23,292(r1)
	ctx.current_instruction = 0x8809D5F8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r29,212(r1)
	ctx.current_instruction = 0x8809D5FC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r15,84(r1)
	ctx.current_instruction = 0x8809D600;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// lwz r15,1436(r1)
	ctx.current_instruction = 0x8809D604;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// stw r4,116(r1)
	ctx.current_instruction = 0x8809D608;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lwz r10,268(r1)
	ctx.current_instruction = 0x8809D60C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// stw r30,140(r1)
	ctx.current_instruction = 0x8809D610;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r24,132(r1)
	ctx.current_instruction = 0x8809D614;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,276(r1)
	ctx.current_instruction = 0x8809D61C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8809D624;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stw r8,260(r1)
	ctx.current_instruction = 0x8809D62C;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r8.u32);
	// stw r11,124(r1)
	ctx.current_instruction = 0x8809D630;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r29,100(r1)
	ctx.current_instruction = 0x8809D634;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r14,92(r1)
	ctx.current_instruction = 0x8809D638;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// bl 0x8808a188
	ctx.lr = 0x8809D640;
	sub_8808A188(ctx, base);
loc_8809D640:
	// lwz r10,296(r1)
	ctx.current_instruction = 0x8809D640;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r9,224(r1)
	ctx.current_instruction = 0x8809D644;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x8809d668
	if (!ctx.cr6.eq) goto loc_8809D668;
	// lwz r11,288(r1)
	ctx.current_instruction = 0x8809D654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,236(r1)
	ctx.current_instruction = 0x8809D658;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x8809d7e0
	if (ctx.cr6.eq) goto loc_8809D7E0;
loc_8809D668:
	// srawi r29,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r17.s32 >> 2;
	// lwz r21,1508(r1)
	ctx.current_instruction = 0x8809D66C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// srawi r26,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r16.s32 >> 2;
	// clrlwi r31,r17,30
	ctx.r31.u64 = ctx.r17.u32 & 0x3;
	// lwz r17,1516(r1)
	ctx.current_instruction = 0x8809D678;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
	// clrlwi r30,r16,30
	ctx.r30.u64 = ctx.r16.u32 & 0x3;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x8809d698
	if (!ctx.cr6.lt) goto loc_8809D698;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// b 0x8809d6a4
	goto loc_8809D6A4;
loc_8809D698:
	// cmpw cr6,r29,r17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x8809d6a4
	if (!ctx.cr6.gt) goto loc_8809D6A4;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_8809D6A4:
	// lwz r18,1524(r1)
	ctx.current_instruction = 0x8809D6A4;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// lwz r19,1532(r1)
	ctx.current_instruction = 0x8809D6A8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// cmpw cr6,r26,r18
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x8809d6bc
	if (!ctx.cr6.lt) goto loc_8809D6BC;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x8809d6c8
	goto loc_8809D6C8;
loc_8809D6BC:
	// cmpw cr6,r26,r19
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x8809d6c8
	if (!ctx.cr6.gt) goto loc_8809D6C8;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8809D6C8:
	// lwz r4,1380(r27)
	ctx.current_instruction = 0x8809D6C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// lwz r9,1444(r1)
	ctx.current_instruction = 0x8809D6D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// li r5,16
	ctx.r5.s64 = 16;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r27)
	ctx.current_instruction = 0x8809D6E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,2308(r27)
	ctx.current_instruction = 0x8809D6EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 2308);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// bne cr6,0x8809d714
	if (!ctx.cr6.eq) goto loc_8809D714;
	// lwz r11,2488(r27)
	ctx.current_instruction = 0x8809D6FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2488);
	// stw r5,84(r1)
	ctx.current_instruction = 0x8809D700;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809D710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D710:
	// b 0x8809d728
	goto loc_8809D728;
loc_8809D714:
	// lwz r11,2496(r27)
	ctx.current_instruction = 0x8809D714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2496);
	// stw r5,84(r1)
	ctx.current_instruction = 0x8809D718;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809D728;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D728:
	// addi r9,r1,220
	ctx.r9.s64 = ctx.r1.s64 + 220;
	// stw r25,116(r1)
	ctx.current_instruction = 0x8809D72C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stw r20,108(r1)
	ctx.current_instruction = 0x8809D734;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8809D738;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8809D740;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8809D74C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085938
	ctx.lr = 0x8809D76C;
	sub_88085938(ctx, base);
loc_8809D76C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,216(r1)
	ctx.current_instruction = 0x8809D774;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085e60
	ctx.lr = 0x8809D784;
	sub_88085E60(ctx, base);
loc_8809D784:
	// lwz r7,208(r1)
	ctx.current_instruction = 0x8809D784;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r11,208(r1)
	ctx.current_instruction = 0x8809D790;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// beq cr6,0x8809d7a0
	if (ctx.cr6.eq) goto loc_8809D7A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,208(r1)
	ctx.current_instruction = 0x8809D79C;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_8809D7A0:
	// lwz r9,108(r28)
	ctx.current_instruction = 0x8809D7A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 108);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r10,220(r1)
	ctx.current_instruction = 0x8809D7A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r25,260(r1)
	ctx.current_instruction = 0x8809D7B0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x8809d7f8
	if (!ctx.cr6.lt) goto loc_8809D7F8;
	// stw r31,224(r1)
	ctx.current_instruction = 0x8809D7C0;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r30,236(r1)
	ctx.current_instruction = 0x8809D7C8;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r29,252(r1)
	ctx.current_instruction = 0x8809D7CC;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r29.u32);
	// stw r26,244(r1)
	ctx.current_instruction = 0x8809D7D0;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r16,248(r1)
	ctx.current_instruction = 0x8809D7D4;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r16.u32);
	// stw r16,256(r1)
	ctx.current_instruction = 0x8809D7D8;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r16.u32);
	// b 0x8809d7f8
	goto loc_8809D7F8;
loc_8809D7E0:
	// lwz r25,260(r1)
	ctx.current_instruction = 0x8809D7E0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r21,1508(r1)
	ctx.current_instruction = 0x8809D7E8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// lwz r18,1524(r1)
	ctx.current_instruction = 0x8809D7EC;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// lwz r19,1532(r1)
	ctx.current_instruction = 0x8809D7F0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// lwz r17,1516(r1)
	ctx.current_instruction = 0x8809D7F4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
loc_8809D7F8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8809d9b0
	if (ctx.cr6.eq) goto loc_8809D9B0;
	// lwz r11,272(r1)
	ctx.current_instruction = 0x8809D800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809d818
	if (!ctx.cr6.eq) goto loc_8809D818;
	// lwz r11,1492(r1)
	ctx.current_instruction = 0x8809D80C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// lwz r10,1500(r1)
	ctx.current_instruction = 0x8809D810;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// b 0x8809d820
	goto loc_8809D820;
loc_8809D818:
	// lwz r11,1476(r1)
	ctx.current_instruction = 0x8809D818;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1476);
	// lwz r10,1484(r1)
	ctx.current_instruction = 0x8809D81C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1484);
loc_8809D820:
	// lwz r9,256(r1)
	ctx.current_instruction = 0x8809D820;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r8,252(r1)
	ctx.current_instruction = 0x8809D824;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r7,224(r1)
	ctx.current_instruction = 0x8809D828;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8809d860
	if (!ctx.cr6.eq) goto loc_8809D860;
	// lwz r9,248(r1)
	ctx.current_instruction = 0x8809D840;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r8,244(r1)
	ctx.current_instruction = 0x8809D844;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,236(r1)
	ctx.current_instruction = 0x8809D848;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8809d9b0
	if (ctx.cr6.eq) goto loc_8809D9B0;
loc_8809D860:
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// srawi r26,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 2;
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r30,r10,30
	ctx.r30.u64 = ctx.r10.u32 & 0x3;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x8809d888
	if (!ctx.cr6.lt) goto loc_8809D888;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// b 0x8809d894
	goto loc_8809D894;
loc_8809D888:
	// cmpw cr6,r29,r17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x8809d894
	if (!ctx.cr6.gt) goto loc_8809D894;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_8809D894:
	// cmpw cr6,r26,r18
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x8809d8a4
	if (!ctx.cr6.lt) goto loc_8809D8A4;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x8809d8b0
	goto loc_8809D8B0;
loc_8809D8A4:
	// cmpw cr6,r26,r19
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x8809d8b0
	if (!ctx.cr6.gt) goto loc_8809D8B0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8809D8B0:
	// lwz r4,1380(r27)
	ctx.current_instruction = 0x8809D8B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// lwz r9,1444(r1)
	ctx.current_instruction = 0x8809D8B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// li r5,16
	ctx.r5.s64 = 16;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r27)
	ctx.current_instruction = 0x8809D8C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,2308(r27)
	ctx.current_instruction = 0x8809D8D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 2308);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// bne cr6,0x8809d8fc
	if (!ctx.cr6.eq) goto loc_8809D8FC;
	// lwz r11,2488(r27)
	ctx.current_instruction = 0x8809D8E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2488);
	// stw r5,84(r1)
	ctx.current_instruction = 0x8809D8E8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809D8F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D8F8:
	// b 0x8809d910
	goto loc_8809D910;
loc_8809D8FC:
	// stw r5,84(r1)
	ctx.current_instruction = 0x8809D8FC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r11,2496(r27)
	ctx.current_instruction = 0x8809D904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809D910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809D910:
	// lwz r11,1468(r1)
	ctx.current_instruction = 0x8809D910;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,220
	ctx.r9.s64 = ctx.r1.s64 + 220;
	// stw r20,108(r1)
	ctx.current_instruction = 0x8809D91C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// stw r10,84(r1)
	ctx.current_instruction = 0x8809D924;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8809D928;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r8,100(r1)
	ctx.current_instruction = 0x8809D930;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,116(r1)
	ctx.current_instruction = 0x8809D93C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085938
	ctx.lr = 0x8809D958;
	sub_88085938(ctx, base);
loc_8809D958:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,216(r1)
	ctx.current_instruction = 0x8809D960;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085e60
	ctx.lr = 0x8809D970;
	sub_88085E60(ctx, base);
loc_8809D970:
	// lwz r7,208(r1)
	ctx.current_instruction = 0x8809D970;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r6,108(r28)
	ctx.current_instruction = 0x8809D978;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 108);
	// lwz r10,220(r1)
	ctx.current_instruction = 0x8809D97C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x8809d9b0
	if (!ctx.cr6.lt) goto loc_8809D9B0;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r31,224(r1)
	ctx.current_instruction = 0x8809D998;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r30,236(r1)
	ctx.current_instruction = 0x8809D99C;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r29,252(r1)
	ctx.current_instruction = 0x8809D9A0;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r29.u32);
	// stw r26,244(r1)
	ctx.current_instruction = 0x8809D9A4;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r16,248(r1)
	ctx.current_instruction = 0x8809D9A8;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r16.u32);
	// stw r16,256(r1)
	ctx.current_instruction = 0x8809D9AC;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r16.u32);
loc_8809D9B0:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// b 0x8809ddf4
	goto loc_8809DDF4;
loc_8809D9B8:
	// lwz r11,240(r1)
	ctx.current_instruction = 0x8809D9B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r22,1572(r1)
	ctx.current_instruction = 0x8809D9BC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809da20
	if (ctx.cr6.eq) goto loc_8809DA20;
	// lwz r11,1540(r1)
	ctx.current_instruction = 0x8809D9C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809da20
	if (!ctx.cr6.eq) goto loc_8809DA20;
	// lwz r11,1580(r1)
	ctx.current_instruction = 0x8809D9D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// srawi r5,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 1;
	// srawi r4,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r20,12(r11)
	ctx.current_instruction = 0x8809D9E8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x88085820
	ctx.lr = 0x8809D9F0;
	sub_88085820(ctx, base);
loc_8809D9F0:
	// lwz r21,1436(r1)
	ctx.current_instruction = 0x8809D9F0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,1380(r27)
	ctx.current_instruction = 0x8809D9FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8809DA14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809DA14:
	// add r11,r25,r3
	ctx.r11.u64 = ctx.r25.u64 + ctx.r3.u64;
	// stw r11,232(r1)
	ctx.current_instruction = 0x8809DA18;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// b 0x8809da28
	goto loc_8809DA28;
loc_8809DA20:
	// lwz r20,208(r1)
	ctx.current_instruction = 0x8809DA20;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r21,1436(r1)
	ctx.current_instruction = 0x8809DA24;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1436);
loc_8809DA28:
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r3,280(r1)
	ctx.current_instruction = 0x8809DA2C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r10,1580(r1)
	ctx.current_instruction = 0x8809DA30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r7,280(r1)
	ctx.current_instruction = 0x8809DA38;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r25,1564(r1)
	ctx.current_instruction = 0x8809DA40;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// srawi r9,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 1;
	// lwz r8,284(r1)
	ctx.current_instruction = 0x8809DA48;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// addi r30,r1,232
	ctx.r30.s64 = ctx.r1.s64 + 232;
	// lwz r23,292(r1)
	ctx.current_instruction = 0x8809DA50;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r29,r1,236
	ctx.r29.s64 = ctx.r1.s64 + 236;
	// stw r10,148(r1)
	ctx.current_instruction = 0x8809DA58;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r31,212(r1)
	ctx.current_instruction = 0x8809DA60;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stw r9,156(r1)
	ctx.current_instruction = 0x8809DA68;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r8,124(r1)
	ctx.current_instruction = 0x8809DA70;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stw r3,196(r1)
	ctx.current_instruction = 0x8809DA78;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r11,164(r1)
	ctx.current_instruction = 0x8809DA80;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r22,140(r1)
	ctx.current_instruction = 0x8809DA88;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// stw r25,132(r1)
	ctx.current_instruction = 0x8809DA8C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r23,108(r1)
	ctx.current_instruction = 0x8809DA90;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r30,188(r1)
	ctx.current_instruction = 0x8809DA94;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r29,180(r1)
	ctx.current_instruction = 0x8809DA98;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r18,116(r1)
	ctx.current_instruction = 0x8809DA9C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// stw r31,100(r1)
	ctx.current_instruction = 0x8809DAA0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lwz r11,28464(r27)
	ctx.current_instruction = 0x8809DAA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28464);
	// lwz r9,276(r1)
	ctx.current_instruction = 0x8809DAA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r8,232(r1)
	ctx.current_instruction = 0x8809DAAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,280(r1)
	ctx.current_instruction = 0x8809DAB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r14,92(r1)
	ctx.current_instruction = 0x8809DAB4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r15,84(r1)
	ctx.current_instruction = 0x8809DABC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// stw r10,172(r1)
	ctx.current_instruction = 0x8809DAC0;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// lwz r10,268(r1)
	ctx.current_instruction = 0x8809DAC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bctrl 
	ctx.lr = 0x8809DACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809DACC:
	// clrlwi r31,r17,30
	ctx.r31.u64 = ctx.r17.u32 & 0x3;
	// clrlwi r30,r16,30
	ctx.r30.u64 = ctx.r16.u32 & 0x3;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8809dae4
	if (!ctx.cr6.eq) goto loc_8809DAE4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8809dc4c
	if (ctx.cr6.eq) goto loc_8809DC4C;
loc_8809DAE4:
	// lwz r11,224(r1)
	ctx.current_instruction = 0x8809DAE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x8809db04
	if (!ctx.cr6.eq) goto loc_8809DB04;
	// lwz r11,236(r1)
	ctx.current_instruction = 0x8809DAF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x8809dc4c
	if (ctx.cr6.eq) goto loc_8809DC4C;
loc_8809DB04:
	// srawi r29,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r17.s32 >> 2;
	// lwz r26,1508(r1)
	ctx.current_instruction = 0x8809DB08;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// srawi r28,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r16.s32 >> 2;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8809db28
	if (!ctx.cr6.lt) goto loc_8809DB28;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x8809db38
	goto loc_8809DB38;
loc_8809DB28:
	// lwz r9,1516(r1)
	ctx.current_instruction = 0x8809DB28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809db38
	if (!ctx.cr6.gt) goto loc_8809DB38;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8809DB38:
	// lwz r24,1524(r1)
	ctx.current_instruction = 0x8809DB38;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x8809db4c
	if (!ctx.cr6.lt) goto loc_8809DB4C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8809db5c
	goto loc_8809DB5C;
loc_8809DB4C:
	// lwz r9,1532(r1)
	ctx.current_instruction = 0x8809DB4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809db5c
	if (!ctx.cr6.gt) goto loc_8809DB5C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8809DB5C:
	// lwz r4,1380(r27)
	ctx.current_instruction = 0x8809DB5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r9,1444(r1)
	ctx.current_instruction = 0x8809DB64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r27)
	ctx.current_instruction = 0x8809DB74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,2308(r27)
	ctx.current_instruction = 0x8809DB80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 2308);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bne cr6,0x8809dba8
	if (!ctx.cr6.eq) goto loc_8809DBA8;
	// lwz r19,2488(r27)
	ctx.current_instruction = 0x8809DB94;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r27.u32 + 2488);
	// stw r11,84(r1)
	ctx.current_instruction = 0x8809DB98;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8809DBA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809DBA4:
	// b 0x8809dbb8
	goto loc_8809DBB8;
loc_8809DBA8:
	// stw r11,84(r1)
	ctx.current_instruction = 0x8809DBA8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r19,2496(r27)
	ctx.current_instruction = 0x8809DBAC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r27.u32 + 2496);
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8809DBB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809DBB8:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8809DBD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809DBD4:
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r19,158
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 158, ctx.xer);
	// bgt cr6,0x8809dc10
	if (ctx.cr6.gt) goto loc_8809DC10;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x8809DBE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809DBF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809DBF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r22
	ctx.current_instruction = 0x8809DC00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// lwzx r10,r5,r22
	ctx.current_instruction = 0x8809DC04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r22.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809dc18
	goto loc_8809DC18;
loc_8809DC10:
	// lwz r11,20(r22)
	ctx.current_instruction = 0x8809DC10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809DC18:
	// lwz r10,232(r1)
	ctx.current_instruction = 0x8809DC18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8809dc5c
	if (!ctx.cr6.lt) goto loc_8809DC5C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r31,224(r1)
	ctx.current_instruction = 0x8809DC2C;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r30,236(r1)
	ctx.current_instruction = 0x8809DC30;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r11,232(r1)
	ctx.current_instruction = 0x8809DC34;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stw r29,252(r1)
	ctx.current_instruction = 0x8809DC38;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r29.u32);
	// stw r28,244(r1)
	ctx.current_instruction = 0x8809DC3C;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stw r19,248(r1)
	ctx.current_instruction = 0x8809DC40;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r19.u32);
	// stw r19,256(r1)
	ctx.current_instruction = 0x8809DC44;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r19.u32);
	// b 0x8809dc5c
	goto loc_8809DC5C;
loc_8809DC4C:
	// lwz r24,1524(r1)
	ctx.current_instruction = 0x8809DC4C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r26,1508(r1)
	ctx.current_instruction = 0x8809DC54;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// lwz r10,232(r1)
	ctx.current_instruction = 0x8809DC58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
loc_8809DC5C:
	// lwz r11,1540(r1)
	ctx.current_instruction = 0x8809DC5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809ddf4
	if (ctx.cr6.eq) goto loc_8809DDF4;
	// lwz r11,272(r1)
	ctx.current_instruction = 0x8809DC68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809dc80
	if (!ctx.cr6.eq) goto loc_8809DC80;
	// lwz r11,1492(r1)
	ctx.current_instruction = 0x8809DC74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// lwz r9,1500(r1)
	ctx.current_instruction = 0x8809DC78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// b 0x8809dc88
	goto loc_8809DC88;
loc_8809DC80:
	// lwz r11,1476(r1)
	ctx.current_instruction = 0x8809DC80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1476);
	// lwz r9,1484(r1)
	ctx.current_instruction = 0x8809DC84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1484);
loc_8809DC88:
	// clrlwi r29,r11,30
	ctx.r29.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8809dca0
	if (!ctx.cr6.eq) goto loc_8809DCA0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8809ddf4
	if (ctx.cr6.eq) goto loc_8809DDF4;
loc_8809DCA0:
	// lwz r8,256(r1)
	ctx.current_instruction = 0x8809DCA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r7,252(r1)
	ctx.current_instruction = 0x8809DCA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r6,224(r1)
	ctx.current_instruction = 0x8809DCA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8809dce0
	if (!ctx.cr6.eq) goto loc_8809DCE0;
	// lwz r8,248(r1)
	ctx.current_instruction = 0x8809DCC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r7,244(r1)
	ctx.current_instruction = 0x8809DCC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r6,236(r1)
	ctx.current_instruction = 0x8809DCC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8809ddf4
	if (ctx.cr6.eq) goto loc_8809DDF4;
loc_8809DCE0:
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// srawi r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8809dd00
	if (!ctx.cr6.lt) goto loc_8809DD00;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x8809dd10
	goto loc_8809DD10;
loc_8809DD00:
	// lwz r9,1516(r1)
	ctx.current_instruction = 0x8809DD00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1516);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809dd10
	if (!ctx.cr6.gt) goto loc_8809DD10;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8809DD10:
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x8809dd20
	if (!ctx.cr6.lt) goto loc_8809DD20;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8809dd30
	goto loc_8809DD30;
loc_8809DD20:
	// lwz r9,1532(r1)
	ctx.current_instruction = 0x8809DD20;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809dd30
	if (!ctx.cr6.gt) goto loc_8809DD30;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8809DD30:
	// lwz r4,1380(r27)
	ctx.current_instruction = 0x8809DD30;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r9,1444(r1)
	ctx.current_instruction = 0x8809DD38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r27)
	ctx.current_instruction = 0x8809DD48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,2308(r27)
	ctx.current_instruction = 0x8809DD54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 2308);
	// li r6,16
	ctx.r6.s64 = 16;
	// bne cr6,0x8809dd7c
	if (!ctx.cr6.eq) goto loc_8809DD7C;
	// lwz r26,2488(r27)
	ctx.current_instruction = 0x8809DD60;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r27.u32 + 2488);
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8809DD6C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8809DD78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809DD78:
	// b 0x8809dd94
	goto loc_8809DD94;
loc_8809DD7C:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r11,2496(r27)
	ctx.current_instruction = 0x8809DD80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2496);
	// stw r5,84(r1)
	ctx.current_instruction = 0x8809DD84;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809DD94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809DD94:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8809DDB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809DDB0:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085820
	ctx.lr = 0x8809DDC8;
	sub_88085820(ctx, base);
loc_8809DDC8:
	// lwz r10,232(r1)
	ctx.current_instruction = 0x8809DDC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8809ddf4
	if (!ctx.cr6.lt) goto loc_8809DDF4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,224(r1)
	ctx.current_instruction = 0x8809DDDC;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stw r28,236(r1)
	ctx.current_instruction = 0x8809DDE0;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r31,252(r1)
	ctx.current_instruction = 0x8809DDE4;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// stw r30,244(r1)
	ctx.current_instruction = 0x8809DDE8;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r19,248(r1)
	ctx.current_instruction = 0x8809DDEC;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r19.u32);
	// stw r19,256(r1)
	ctx.current_instruction = 0x8809DDF0;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r19.u32);
loc_8809DDF4:
	// lwz r11,256(r1)
	ctx.current_instruction = 0x8809DDF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,252(r1)
	ctx.current_instruction = 0x8809DDF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r8,248(r1)
	ctx.current_instruction = 0x8809DDFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r7,244(r1)
	ctx.current_instruction = 0x8809DE00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,224(r1)
	ctx.current_instruction = 0x8809DE08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r5,1596(r1)
	ctx.current_instruction = 0x8809DE10;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1596);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,1604(r1)
	ctx.current_instruction = 0x8809DE18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r7,236(r1)
	ctx.current_instruction = 0x8809DE1C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1612(r1)
	ctx.current_instruction = 0x8809DE24;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// add r4,r9,r3
	ctx.r4.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r4,0(r5)
	ctx.current_instruction = 0x8809DE30;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r3,0(r8)
	ctx.current_instruction = 0x8809DE34;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// stw r10,0(r6)
	ctx.current_instruction = 0x8809DE38;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E44D0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E44D0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E44D0;
	ctx.current_instruction = 0x880E44D0;
	// lwz r11,848(r3)
	ctx.current_instruction = 0x880E44D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 848);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x880e4514
	if (ctx.cr6.eq) goto loc_880E4514;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880e4514
	if (ctx.cr6.eq) goto loc_880E4514;
	// lwz r11,856(r3)
	ctx.current_instruction = 0x880E44E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 856);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880e44f8
	if (ctx.cr6.lt) goto loc_880E44F8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x880e4514
	if (!ctx.cr6.gt) goto loc_880E4514;
loc_880E44F8:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19948(r11)
	ctx.current_instruction = 0x880E4504;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19948);
	// stw r11,-19940(r10)
	ctx.current_instruction = 0x880E4508;
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// stw r9,7984(r3)
	ctx.current_instruction = 0x880E450C;
	REX_STORE_U32(ctx.r3.u32 + 7984, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880E4514:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-19964(r11)
	ctx.current_instruction = 0x880E4520;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -19964);
	// stw r11,-19940(r10)
	ctx.current_instruction = 0x880E4524;
	REX_STORE_U32(ctx.r10.u32 + -19940, ctx.r11.u32);
	// stw r9,7984(r3)
	ctx.current_instruction = 0x880E4528;
	REX_STORE_U32(ctx.r3.u32 + 7984, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E4A00) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E4A00);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E4A00;
	ctx.current_instruction = 0x880E4A00;
	// std r31,-8(r1)
	ctx.current_instruction = 0x880E4A00;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,800(r3)
	ctx.current_instruction = 0x880E4A04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// lwz r9,796(r3)
	ctx.current_instruction = 0x880E4A08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// lwz r11,30752(r3)
	ctx.current_instruction = 0x880E4A0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30752);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r31,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x880e4a88
	if (ctx.cr6.eq) goto loc_880E4A88;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880e4a88
	if (!ctx.cr6.gt) goto loc_880E4A88;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880E4A3C:
	// lwz r9,6844(r3)
	ctx.current_instruction = 0x880E4A3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6844);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lbzx r10,r8,r9
	ctx.current_instruction = 0x880E4A44;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw. r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// divw r7,r10,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt 0x880e4a78
	if (ctx.cr0.lt) goto loc_880E4A78;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// b 0x880e4a7c
	goto loc_880E4A7C;
loc_880E4A78:
	// addi r7,r7,127
	ctx.r7.s64 = ctx.r7.s64 + 127;
loc_880E4A7C:
	// stbx r7,r8,r9
	ctx.current_instruction = 0x880E4A7C;
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x880e4a3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E4A3C;
loc_880E4A88:
	// lwz r11,30756(r3)
	ctx.current_instruction = 0x880E4A88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30756);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x880e4b60
	if (ctx.cr6.eq) goto loc_880E4B60;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x880e4b00
	if (!ctx.cr6.gt) goto loc_880E4B00;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_880E4AB0:
	// lwz r9,6848(r3)
	ctx.current_instruction = 0x880E4AB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6848);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lbzx r10,r9,r8
	ctx.current_instruction = 0x880E4AB8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw. r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// divw r6,r10,r11
	ctx.r6.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// blt 0x880e4ae4
	if (ctx.cr0.lt) goto loc_880E4AE4;
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// b 0x880e4aec
	goto loc_880E4AEC;
loc_880E4AE4:
	// addi r6,r6,127
	ctx.r6.s64 = ctx.r6.s64 + 127;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_880E4AEC:
	// andc r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// stbx r10,r9,r8
	ctx.current_instruction = 0x880E4AF0;
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bdnz 0x880e4ab0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E4AB0;
loc_880E4B00:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x880e4b60
	if (!ctx.cr6.gt) goto loc_880E4B60;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_880E4B10:
	// lwz r9,6852(r3)
	ctx.current_instruction = 0x880E4B10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6852);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lbzx r10,r9,r8
	ctx.current_instruction = 0x880E4B18;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// mullw. r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// divw r6,r10,r11
	ctx.r6.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// blt 0x880e4b44
	if (ctx.cr0.lt) goto loc_880E4B44;
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// b 0x880e4b4c
	goto loc_880E4B4C;
loc_880E4B44:
	// addi r6,r6,127
	ctx.r6.s64 = ctx.r6.s64 + 127;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_880E4B4C:
	// andc r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// stbx r10,r9,r8
	ctx.current_instruction = 0x880E4B50;
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bdnz 0x880e4b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E4B10;
loc_880E4B60:
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880E4B60;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E8350) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E8350;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E8350) {
			switch (rex_dispatch_address) {
				case 0x880E83CC:
				case 0x880E83D0:
				case 0x880E8450:
				case 0x880E8458:
				case 0x880E8464:
				case 0x880E8470:
				case 0x880E8498:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E8350;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E83CC: goto loc_880E83CC;
		case 0x880E83D0: goto loc_880E83D0;
		case 0x880E8450: goto loc_880E8450;
		case 0x880E8458: goto loc_880E8458;
		case 0x880E8464: goto loc_880E8464;
		case 0x880E8470: goto loc_880E8470;
		case 0x880E8498: goto loc_880E8498;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880E8354;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880E8358;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880E835C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880E8360;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30408(r3)
	ctx.current_instruction = 0x880E8364;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e84d8
	if (!ctx.cr6.eq) goto loc_880E84D8;
	// lwz r11,7212(r3)
	ctx.current_instruction = 0x880E8374;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e83d0
	if (ctx.cr6.eq) goto loc_880E83D0;
	// lwz r11,16(r3)
	ctx.current_instruction = 0x880E8380;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,7212(r3)
	ctx.current_instruction = 0x880E838C;
	REX_STORE_U32(ctx.r3.u32 + 7212, ctx.r9.u32);
	// addi r8,r11,1979
	ctx.r8.s64 = ctx.r11.s64 + 1979;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r5,r6,r3
	ctx.current_instruction = 0x880E83A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stw r5,7912(r3)
	ctx.current_instruction = 0x880E83A8;
	REX_STORE_U32(ctx.r3.u32 + 7912, ctx.r5.u32);
	// lwz r4,7396(r11)
	ctx.current_instruction = 0x880E83AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 7396);
	// stw r4,7556(r3)
	ctx.current_instruction = 0x880E83B0;
	REX_STORE_U32(ctx.r3.u32 + 7556, ctx.r4.u32);
	// lwz r10,7400(r11)
	ctx.current_instruction = 0x880E83B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 7400);
	// stw r10,7560(r3)
	ctx.current_instruction = 0x880E83B8;
	REX_STORE_U32(ctx.r3.u32 + 7560, ctx.r10.u32);
	// lwz r9,7404(r11)
	ctx.current_instruction = 0x880E83BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 7404);
	// stw r9,7564(r3)
	ctx.current_instruction = 0x880E83C0;
	REX_STORE_U32(ctx.r3.u32 + 7564, ctx.r9.u32);
	// lwz r4,16(r3)
	ctx.current_instruction = 0x880E83C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x880e6fe8
	ctx.lr = 0x880E83CC;
	sub_880E6FE8(ctx, base);
loc_880E83CC:
	// bl 0x880e7798
	ctx.lr = 0x880E83D0;
	sub_880E7798(ctx, base);
loc_880E83D0:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880E83D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880e83e8
	if (ctx.cr6.eq) goto loc_880E83E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880e8480
	if (!ctx.cr6.eq) goto loc_880E8480;
loc_880E83E8:
	// lwz r3,16(r31)
	ctx.current_instruction = 0x880E83E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,1700(r31)
	ctx.current_instruction = 0x880E83EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1700);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880e8480
	if (ctx.cr6.eq) goto loc_880E8480;
	// lwz r9,7220(r31)
	ctx.current_instruction = 0x880E83F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7220);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880e8480
	if (!ctx.cr6.eq) goto loc_880E8480;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880e8480
	if (ctx.cr6.eq) goto loc_880E8480;
	// mulli r11,r10,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(88));
	// lwz r4,20(r31)
	ctx.current_instruction = 0x880E8410;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,24(r31)
	ctx.current_instruction = 0x880E8414;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,28(r31)
	ctx.current_instruction = 0x880E8418;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,19092(r31)
	ctx.current_instruction = 0x880E841C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// lwz r8,19096(r31)
	ctx.current_instruction = 0x880E8420;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r9,19100(r31)
	ctx.current_instruction = 0x880E8424;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1780(r11)
	ctx.current_instruction = 0x880E8434;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1780);
	// lwz r11,1776(r11)
	ctx.current_instruction = 0x880E8438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1776);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bge cr6,0x880e8454
	if (!ctx.cr6.lt) goto loc_880E8454;
	// bl 0x880e7370
	ctx.lr = 0x880E8450;
	sub_880E7370(ctx, base);
loc_880E8450:
	// b 0x880e8458
	goto loc_880E8458;
loc_880E8454:
	// bl 0x880e7108
	ctx.lr = 0x880E8458;
	sub_880E7108(ctx, base);
loc_880E8458:
	// stw r30,7220(r31)
	ctx.current_instruction = 0x880E8458;
	REX_STORE_U32(ctx.r31.u32 + 7220, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e5d48
	ctx.lr = 0x880E8464;
	sub_880E5D48(ctx, base);
loc_880E8464:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x880E8470;
	sub_880F40C0(ctx, base);
loc_880E8470:
	// lwz r11,7864(r31)
	ctx.current_instruction = 0x880E8470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880e8480
	if (!ctx.cr6.eq) goto loc_880E8480;
	// stw r30,30396(r31)
	ctx.current_instruction = 0x880E847C;
	REX_STORE_U32(ctx.r31.u32 + 30396, ctx.r30.u32);
loc_880E8480:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x880E8480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e84b0
	if (ctx.cr6.eq) goto loc_880E84B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,19104(r31)
	ctx.current_instruction = 0x880E8490;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 19104);
	// bl 0x880e75b8
	ctx.lr = 0x880E8498;
	sub_880E75B8(ctx, base);
loc_880E8498:
	// lwz r11,7232(r31)
	ctx.current_instruction = 0x880E8498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7232);
	// lwz r10,7864(r31)
	ctx.current_instruction = 0x880E849C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7864);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,19104(r31)
	ctx.current_instruction = 0x880E84A4;
	REX_STORE_U32(ctx.r31.u32 + 19104, ctx.r11.u32);
	// bne cr6,0x880e84b0
	if (!ctx.cr6.eq) goto loc_880E84B0;
	// stw r30,30396(r31)
	ctx.current_instruction = 0x880E84AC;
	REX_STORE_U32(ctx.r31.u32 + 30396, ctx.r30.u32);
loc_880E84B0:
	// lwz r11,19104(r31)
	ctx.current_instruction = 0x880E84B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19104);
	// lwz r8,7556(r31)
	ctx.current_instruction = 0x880E84B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7556);
	// lwz r9,7560(r31)
	ctx.current_instruction = 0x880E84B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7560);
	// lwz r10,7564(r31)
	ctx.current_instruction = 0x880E84BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7564);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,6844(r31)
	ctx.current_instruction = 0x880E84CC;
	REX_STORE_U32(ctx.r31.u32 + 6844, ctx.r8.u32);
	// stw r7,6848(r31)
	ctx.current_instruction = 0x880E84D0;
	REX_STORE_U32(ctx.r31.u32 + 6848, ctx.r7.u32);
	// stw r6,6852(r31)
	ctx.current_instruction = 0x880E84D4;
	REX_STORE_U32(ctx.r31.u32 + 6852, ctx.r6.u32);
loc_880E84D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880E84DC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880E84E4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880E84E8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880ECD98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880ECD98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880ECD98) {
			switch (rex_dispatch_address) {
				case 0x880ECDA0:
				case 0x880ECE7C:
				case 0x880ECEB8:
				case 0x880ED0C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880ECD98;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880ECDA0: goto loc_880ECDA0;
		case 0x880ECE7C: goto loc_880ECE7C;
		case 0x880ECEB8: goto loc_880ECEB8;
		case 0x880ED0C0: goto loc_880ED0C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880ECDA0;
	__savegprlr_14(ctx, base);
loc_880ECDA0:
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x880ECDA0;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r1)
	ctx.current_instruction = 0x880ECDA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// lwz r10,27940(r3)
	ctx.current_instruction = 0x880ECDAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 27940);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// stw r9,388(r1)
	ctx.current_instruction = 0x880ECDB8;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// stw r4,348(r1)
	ctx.current_instruction = 0x880ECDBC;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// stw r8,380(r1)
	ctx.current_instruction = 0x880ECDC0;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,31532(r3)
	ctx.current_instruction = 0x880ECDD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 31532);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r28,28(r11)
	ctx.current_instruction = 0x880ECDDC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r10,36(r11)
	ctx.current_instruction = 0x880ECDE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// lwz r6,4(r11)
	ctx.current_instruction = 0x880ECDEC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x880ECDF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r5,12(r11)
	ctx.current_instruction = 0x880ECDFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// lwz r19,16(r11)
	ctx.current_instruction = 0x880ECE04;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r16,20(r11)
	ctx.current_instruction = 0x880ECE0C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// lwz r23,24(r11)
	ctx.current_instruction = 0x880ECE14;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r22,32(r11)
	ctx.current_instruction = 0x880ECE1C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r14,0(r11)
	ctx.current_instruction = 0x880ECE20;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r26,132(r1)
	ctx.current_instruction = 0x880ECE24;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r26,128(r1)
	ctx.current_instruction = 0x880ECE28;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r28,140(r1)
	ctx.current_instruction = 0x880ECE2C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r10,148(r1)
	ctx.current_instruction = 0x880ECE30;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r6,144(r1)
	ctx.current_instruction = 0x880ECE34;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r9,152(r1)
	ctx.current_instruction = 0x880ECE38;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r5,156(r1)
	ctx.current_instruction = 0x880ECE3C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// beq cr6,0x880ececc
	if (ctx.cr6.eq) goto loc_880ECECC;
	// lwz r30,428(r1)
	ctx.current_instruction = 0x880ECE44;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x880ececc
	if (ctx.cr6.lt) goto loc_880ECECC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bgt cr6,0x880ececc
	if (ctx.cr6.gt) goto loc_880ECECC;
	// lwz r29,420(r1)
	ctx.current_instruction = 0x880ECE58;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// lwz r28,412(r1)
	ctx.current_instruction = 0x880ECE60;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r26,136(r1)
	ctx.current_instruction = 0x880ECE6C;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r26,136(r1)
	ctx.current_instruction = 0x880ECE74;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// bl 0x880ecb80
	ctx.lr = 0x880ECE7C;
	sub_880ECB80(ctx, base);
loc_880ECE7C:
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r4,31532(r18)
	ctx.current_instruction = 0x880ECE84;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 31532);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r8,388(r1)
	ctx.current_instruction = 0x880ECE8C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r17,108(r1)
	ctx.current_instruction = 0x880ECE94;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r26,116(r1)
	ctx.current_instruction = 0x880ECE9C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// std r26,96(r1)
	ctx.current_instruction = 0x880ECEA4;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// std r26,88(r1)
	ctx.current_instruction = 0x880ECEAC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880ECEB0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880ecc18
	ctx.lr = 0x880ECEB8;
	sub_880ECC18(ctx, base);
loc_880ECEB8:
	// lwz r8,128(r1)
	ctx.current_instruction = 0x880ECEB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r29,348(r1)
	ctx.current_instruction = 0x880ECEBC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r28,140(r1)
	ctx.current_instruction = 0x880ECEC0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,144(r1)
	ctx.current_instruction = 0x880ECEC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,388(r1)
	ctx.current_instruction = 0x880ECEC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
loc_880ECECC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// sth r26,0(r20)
	ctx.current_instruction = 0x880ECED0;
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r26.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r26,128(r1)
	ctx.current_instruction = 0x880ECED8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// ble cr6,0x880ecf70
	if (!ctx.cr6.gt) goto loc_880ECF70;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_880ECEE8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x880ecf00
	if (ctx.cr6.eq) goto loc_880ECF00;
	// lhz r11,0(r9)
	ctx.current_instruction = 0x880ECEF0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mullw r27,r10,r16
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r16.s32);
	// rlwinm r25,r27,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_880ECF00:
	// lwz r11,0(r24)
	ctx.current_instruction = 0x880ECF00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r4,r25,r22
	ctx.r4.u64 = ctx.r25.u64 + ctx.r22.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r3,r15
	ctx.current_instruction = 0x880ECF0C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r15.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x880ecf3c
	if (!ctx.cr6.lt) goto loc_880ECF3C;
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// mullw r11,r11,r11
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// b 0x880ecf60
	goto loc_880ECF60;
loc_880ECF3C:
	// lhz r11,0(r20)
	ctx.current_instruction = 0x880ECF3C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r31,r4,r29
	ctx.current_instruction = 0x880ECF4C;
	REX_STORE_U16(ctx.r4.u32 + ctx.r29.u32, ctx.r31.u16);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lhz r11,0(r20)
	ctx.current_instruction = 0x880ECF54;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,0(r20)
	ctx.current_instruction = 0x880ECF5C;
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r11.u16);
loc_880ECF60:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x880ecee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880ECEE8;
	// stw r5,128(r1)
	ctx.current_instruction = 0x880ECF6C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
loc_880ECF70:
	// lhz r11,0(r20)
	ctx.current_instruction = 0x880ECF70;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880ed098
	if (!ctx.cr6.gt) goto loc_880ED098;
	// lis r10,-30679
	ctx.r10.s64 = -2010578944;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r7,r10,-27328
	ctx.r7.s64 = ctx.r10.s64 + -27328;
loc_880ECF94:
	// lhz r10,2(r11)
	ctx.current_instruction = 0x880ECF94;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r9,148(r1)
	ctx.current_instruction = 0x880ECF98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 + ctx.r21.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r17
	ctx.current_instruction = 0x880ECFA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r15
	ctx.current_instruction = 0x880ECFB0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r15.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r31,r10,r28
	ctx.r31.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x880ecfe4
	if (ctx.cr6.gt) goto loc_880ECFE4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x880ecfd8
	if (ctx.cr6.lt) goto loc_880ECFD8;
	// lwz r9,152(r1)
	ctx.current_instruction = 0x880ECFCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// sth r3,0(r11)
	ctx.current_instruction = 0x880ECFD0;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// b 0x880ed064
	goto loc_880ED064;
loc_880ECFD8:
	// lwz r9,156(r1)
	ctx.current_instruction = 0x880ECFD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// sth r4,0(r11)
	ctx.current_instruction = 0x880ECFDC;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// b 0x880ed064
	goto loc_880ED064;
loc_880ECFE4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twllei r19,0
	if (ctx.r19.s32 == 0 || ctx.r19.u32 < 0u) ppc_trap(ctx, base, 0);
	// blt cr6,0x880ed024
	if (ctx.cr6.lt) goto loc_880ED024;
	// subf r9,r16,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r16.u64;
	// divw r31,r9,r19
	ctx.r31.u64 = uint32_t((ctx.r19.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r9.s32 / ctx.r19.s32 : 0);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r19,r9
	ctx.r9.u64 = ctx.r19.u64 & ~ctx.r9.u64;
	// lhzx r31,r31,r7
	ctx.current_instruction = 0x880ED008;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// mullw r9,r9,r14
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r14.s32);
	// sth r31,0(r11)
	ctx.current_instruction = 0x880ED018;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// b 0x880ed064
	goto loc_880ED064;
loc_880ED024:
	// add r9,r10,r16
	ctx.r9.u64 = ctx.r10.u64 + ctx.r16.u64;
	// divw r31,r9,r19
	ctx.r31.u64 = uint32_t((ctx.r19.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r9.s32 / ctx.r19.s32 : 0);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r31,r31,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r31.u64;
	// andc r9,r19,r9
	ctx.r9.u64 = ctx.r19.u64 & ~ctx.r9.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lhz r9,0(r31)
	ctx.current_instruction = 0x880ED044;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// sth r9,0(r11)
	ctx.current_instruction = 0x880ED058;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// mullw r9,r9,r14
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r14.s32);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
loc_880ED064:
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r31,0(r20)
	ctx.current_instruction = 0x880ED068;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// mullw r10,r10,r10
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r21,r8,1
	ctx.r21.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880ecf94
	if (ctx.cr6.lt) goto loc_880ECF94;
	// lwz r7,388(r1)
	ctx.current_instruction = 0x880ED090;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// stw r5,128(r1)
	ctx.current_instruction = 0x880ED094;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
loc_880ED098:
	// stw r7,84(r1)
	ctx.current_instruction = 0x880ED098;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwz r10,132(r1)
	ctx.current_instruction = 0x880ED0A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r9,404(r1)
	ctx.current_instruction = 0x880ED0AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x880ebf30
	ctx.lr = 0x880ED0C0;
	sub_880EBF30(ctx, base);
loc_880ED0C0:
	// lwz r9,380(r1)
	ctx.current_instruction = 0x880ED0C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r11,128(r1)
	ctx.current_instruction = 0x880ED0C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,0(r9)
	ctx.current_instruction = 0x880ED0C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r9)
	ctx.current_instruction = 0x880ED0D0;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r20)
	ctx.current_instruction = 0x880ED0D4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F5E20) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F5E20);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F5E20;
	ctx.current_instruction = 0x880F5E20;
	// lwz r11,7772(r3)
	ctx.current_instruction = 0x880F5E20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7772);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// beq cr6,0x880f5e5c
	if (ctx.cr6.eq) goto loc_880F5E5C;
	// lwz r10,2264(r3)
	ctx.current_instruction = 0x880F5E38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2264);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.current_instruction = 0x880F5E40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880f5e5c
	if (!ctx.cr6.eq) goto loc_880F5E5C;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x880F5E4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mulli r10,r11,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// subf r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_880F5E5C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880f5e68
	if (ctx.cr6.eq) goto loc_880F5E68;
	// addi r7,r4,-272
	ctx.r7.s64 = ctx.r4.s64 + -272;
loc_880F5E68:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880f5e9c
	if (ctx.cr6.eq) goto loc_880F5E9C;
	// lwz r10,2264(r3)
	ctx.current_instruction = 0x880F5E70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2264);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r8
	ctx.current_instruction = 0x880F5E78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x880f5e9c
	if (!ctx.cr6.eq) goto loc_880F5E9C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880f5e9c
	if (ctx.cr6.eq) goto loc_880F5E9C;
	// lwz r10,720(r3)
	ctx.current_instruction = 0x880F5E8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// mulli r9,r10,276
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(276));
	// subf r10,r9,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r9,r10,-272
	ctx.r9.s64 = ctx.r10.s64 + -272;
loc_880F5E9C:
	// lwz r10,8(r11)
	ctx.current_instruction = 0x880F5E9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r9)
	ctx.current_instruction = 0x880F5EA0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880f5eb4
	if (!ctx.cr6.eq) goto loc_880F5EB4;
	// lwz r6,4(r7)
	ctx.current_instruction = 0x880F5EAC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x880f5eb8
	goto loc_880F5EB8;
loc_880F5EB4:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_880F5EB8:
	// lwz r11,12(r11)
	ctx.current_instruction = 0x880F5EB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880f5ecc
	if (!ctx.cr6.eq) goto loc_880F5ECC;
	// lwz r8,4(r4)
	ctx.current_instruction = 0x880F5EC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x880f5ed0
	goto loc_880F5ED0;
loc_880F5ECC:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_880F5ED0:
	// lwz r11,4(r4)
	ctx.current_instruction = 0x880F5ED0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r7)
	ctx.current_instruction = 0x880F5ED4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880f5ee8
	if (!ctx.cr6.eq) goto loc_880F5EE8;
	// lwz r9,12(r7)
	ctx.current_instruction = 0x880F5EE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// b 0x880f5eec
	goto loc_880F5EEC;
loc_880F5EE8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_880F5EEC:
	// lwz r10,8(r4)
	ctx.current_instruction = 0x880F5EEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880f5f00
	if (!ctx.cr6.eq) goto loc_880F5F00;
	// lwz r11,12(r4)
	ctx.current_instruction = 0x880F5EF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// b 0x880f5f04
	goto loc_880F5F04;
loc_880F5F00:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880F5F04:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// or r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 | ctx.r11.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F8A48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F8A48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F8A48) {
			switch (rex_dispatch_address) {
				case 0x880F8A50:
				case 0x880F8A68:
				case 0x880F8A78:
				case 0x880F8A88:
				case 0x880F8AA8:
				case 0x880F8AB4:
				case 0x880F8ACC:
				case 0x880F8AD8:
				case 0x880F8AF0:
				case 0x880F8AFC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F8A48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F8A50: goto loc_880F8A50;
		case 0x880F8A68: goto loc_880F8A68;
		case 0x880F8A78: goto loc_880F8A78;
		case 0x880F8A88: goto loc_880F8A88;
		case 0x880F8AA8: goto loc_880F8AA8;
		case 0x880F8AB4: goto loc_880F8AB4;
		case 0x880F8ACC: goto loc_880F8ACC;
		case 0x880F8AD8: goto loc_880F8AD8;
		case 0x880F8AF0: goto loc_880F8AF0;
		case 0x880F8AFC: goto loc_880F8AFC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880F8A50;
	__savegprlr_28(ctx, base);
loc_880F8A50:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880F8A50;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.current_instruction = 0x880F8A58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f8a68
	if (ctx.cr6.eq) goto loc_880F8A68;
	// bl 0x8813c578
	ctx.lr = 0x880F8A68;
	sub_8813C578(ctx, base);
loc_880F8A68:
	// lwz r3,60(r31)
	ctx.current_instruction = 0x880F8A68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f8a78
	if (ctx.cr6.eq) goto loc_880F8A78;
	// bl 0x8813c578
	ctx.lr = 0x880F8A78;
	sub_8813C578(ctx, base);
loc_880F8A78:
	// lwz r3,64(r31)
	ctx.current_instruction = 0x880F8A78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f8a88
	if (ctx.cr6.eq) goto loc_880F8A88;
	// bl 0x8813c578
	ctx.lr = 0x880F8A88;
	sub_8813C578(ctx, base);
loc_880F8A88:
	// lwz r30,56(r31)
	ctx.current_instruction = 0x880F8A88;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880f8ab8
	if (ctx.cr6.eq) goto loc_880F8AB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813c578
	ctx.lr = 0x880F8AA8;
	sub_8813C578(ctx, base);
loc_880F8AA8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x880F8AB4;
	sub_88050358(ctx, base);
loc_880F8AB4:
	// stw r29,56(r31)
	ctx.current_instruction = 0x880F8AB4;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_880F8AB8:
	// lwz r30,60(r31)
	ctx.current_instruction = 0x880F8AB8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880f8adc
	if (ctx.cr6.eq) goto loc_880F8ADC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813c578
	ctx.lr = 0x880F8ACC;
	sub_8813C578(ctx, base);
loc_880F8ACC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x880F8AD8;
	sub_88050358(ctx, base);
loc_880F8AD8:
	// stw r29,60(r31)
	ctx.current_instruction = 0x880F8AD8;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
loc_880F8ADC:
	// lwz r30,64(r31)
	ctx.current_instruction = 0x880F8ADC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880f8b00
	if (ctx.cr6.eq) goto loc_880F8B00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813c578
	ctx.lr = 0x880F8AF0;
	sub_8813C578(ctx, base);
loc_880F8AF0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x880F8AFC;
	sub_88050358(ctx, base);
loc_880F8AFC:
	// stw r29,64(r31)
	ctx.current_instruction = 0x880F8AFC;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_880F8B00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F9918) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F9918;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F9918) {
			switch (rex_dispatch_address) {
				case 0x880F9920:
				case 0x880F9938:
				case 0x880F9984:
				case 0x880F99A8:
				case 0x880F99FC:
				case 0x880F9A14:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F9918;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F9920: goto loc_880F9920;
		case 0x880F9938: goto loc_880F9938;
		case 0x880F9984: goto loc_880F9984;
		case 0x880F99A8: goto loc_880F99A8;
		case 0x880F99FC: goto loc_880F99FC;
		case 0x880F9A14: goto loc_880F9A14;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880F9920;
	__savegprlr_26(ctx, base);
loc_880F9920:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880F9920;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x8813c958
	ctx.lr = 0x880F9938;
	sub_8813C958(ctx, base);
loc_880F9938:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880F993C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,72(r31)
	ctx.current_instruction = 0x880F9944;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,40(r31)
	ctx.current_instruction = 0x880F9950;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r29,48(r31)
	ctx.current_instruction = 0x880F9958;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,56(r31)
	ctx.current_instruction = 0x880F995C;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// stw r9,68(r31)
	ctx.current_instruction = 0x880F9964;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x880f9974
	if (!ctx.cr6.gt) goto loc_880F9974;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_880F9974:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050340
	ctx.lr = 0x880F9984;
	sub_88050340(ctx, base);
loc_880F9984:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x880F9984;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,56(r31)
	ctx.current_instruction = 0x880F9988;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x880f99a0
	if (!ctx.cr6.gt) goto loc_880F99A0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_880F99A0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050340
	ctx.lr = 0x880F99A8;
	sub_88050340(ctx, base);
loc_880F99A8:
	// lwz r11,56(r31)
	ctx.current_instruction = 0x880F99A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r3,48(r31)
	ctx.current_instruction = 0x880F99AC;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880f9a00
	if (ctx.cr6.eq) goto loc_880F9A00;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f99e8
	if (ctx.cr6.eq) goto loc_880F99E8;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880F99C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,36(r31)
	ctx.current_instruction = 0x880F99C4;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,64(r31)
	ctx.current_instruction = 0x880F99CC;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r29,52(r31)
	ctx.current_instruction = 0x880F99D0;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,60(r31)
	ctx.current_instruction = 0x880F99DC;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880F99E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880f9a00
	if (ctx.cr6.eq) goto loc_880F9A00;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x88050358
	ctx.lr = 0x880F99FC;
	sub_88050358(ctx, base);
loc_880F99FC:
	// stw r29,56(r31)
	ctx.current_instruction = 0x880F99FC;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_880F9A00:
	// lwz r3,48(r31)
	ctx.current_instruction = 0x880F9A00;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f9a18
	if (ctx.cr6.eq) goto loc_880F9A18;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050358
	ctx.lr = 0x880F9A14;
	sub_88050358(ctx, base);
loc_880F9A14:
	// stw r29,48(r31)
	ctx.current_instruction = 0x880F9A14;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_880F9A18:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r26)
	ctx.current_instruction = 0x880F9A20;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FCB80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FCB80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FCB80) {
			switch (rex_dispatch_address) {
				case 0x880FCB88:
				case 0x880FCDA0:
				case 0x880FCDCC:
				case 0x880FCE0C:
				case 0x880FCE34:
				case 0x880FCEF0:
				case 0x880FCF24:
				case 0x880FCF78:
				case 0x880FCFA0:
				case 0x880FCFD8:
				case 0x880FD0B0:
				case 0x880FD104:
				case 0x880FD1D0:
				case 0x880FD224:
				case 0x880FD300:
				case 0x880FD354:
				case 0x880FD564:
				case 0x880FD580:
				case 0x880FD630:
				case 0x880FD75C:
				case 0x880FD778:
				case 0x880FD858:
				case 0x880FD874:
				case 0x880FD954:
				case 0x880FD970:
				case 0x880FDA88:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FCB80;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FCB88: goto loc_880FCB88;
		case 0x880FCDA0: goto loc_880FCDA0;
		case 0x880FCDCC: goto loc_880FCDCC;
		case 0x880FCE0C: goto loc_880FCE0C;
		case 0x880FCE34: goto loc_880FCE34;
		case 0x880FCEF0: goto loc_880FCEF0;
		case 0x880FCF24: goto loc_880FCF24;
		case 0x880FCF78: goto loc_880FCF78;
		case 0x880FCFA0: goto loc_880FCFA0;
		case 0x880FCFD8: goto loc_880FCFD8;
		case 0x880FD0B0: goto loc_880FD0B0;
		case 0x880FD104: goto loc_880FD104;
		case 0x880FD1D0: goto loc_880FD1D0;
		case 0x880FD224: goto loc_880FD224;
		case 0x880FD300: goto loc_880FD300;
		case 0x880FD354: goto loc_880FD354;
		case 0x880FD564: goto loc_880FD564;
		case 0x880FD580: goto loc_880FD580;
		case 0x880FD630: goto loc_880FD630;
		case 0x880FD75C: goto loc_880FD75C;
		case 0x880FD778: goto loc_880FD778;
		case 0x880FD858: goto loc_880FD858;
		case 0x880FD874: goto loc_880FD874;
		case 0x880FD954: goto loc_880FD954;
		case 0x880FD970: goto loc_880FD970;
		case 0x880FDA88: goto loc_880FDA88;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880FCB88;
	__savegprlr_14(ctx, base);
loc_880FCB88:
	// stwu r1,-432(r1)
	ctx.current_instruction = 0x880FCB88;
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,724(r3)
	ctx.current_instruction = 0x880FCB90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r25,7764(r3)
	ctx.current_instruction = 0x880FCB94;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,6960(r3)
	ctx.current_instruction = 0x880FCB9C;
	REX_STORE_U32(ctx.r3.u32 + 6960, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,6956(r3)
	ctx.current_instruction = 0x880FCBA4;
	REX_STORE_U32(ctx.r3.u32 + 6956, ctx.r24.u32);
	// stw r24,6952(r3)
	ctx.current_instruction = 0x880FCBA8;
	REX_STORE_U32(ctx.r3.u32 + 6952, ctx.r24.u32);
	// stw r24,6948(r3)
	ctx.current_instruction = 0x880FCBAC;
	REX_STORE_U32(ctx.r3.u32 + 6948, ctx.r24.u32);
	// stw r24,6944(r3)
	ctx.current_instruction = 0x880FCBB0;
	REX_STORE_U32(ctx.r3.u32 + 6944, ctx.r24.u32);
	// stw r24,6940(r3)
	ctx.current_instruction = 0x880FCBB4;
	REX_STORE_U32(ctx.r3.u32 + 6940, ctx.r24.u32);
	// stw r24,136(r1)
	ctx.current_instruction = 0x880FCBB8;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// stw r24,6936(r3)
	ctx.current_instruction = 0x880FCBBC;
	REX_STORE_U32(ctx.r3.u32 + 6936, ctx.r24.u32);
	// stw r24,6932(r3)
	ctx.current_instruction = 0x880FCBC0;
	REX_STORE_U32(ctx.r3.u32 + 6932, ctx.r24.u32);
	// stw r24,140(r1)
	ctx.current_instruction = 0x880FCBC4;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// ble cr6,0x880fda18
	if (!ctx.cr6.gt) goto loc_880FDA18;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// lis r9,-30681
	ctx.r9.s64 = -2010710016;
	// lis r8,-30681
	ctx.r8.s64 = -2010710016;
	// lis r7,-30681
	ctx.r7.s64 = -2010710016;
	// lis r6,-30681
	ctx.r6.s64 = -2010710016;
	// lis r5,-30681
	ctx.r5.s64 = -2010710016;
	// lis r4,-30681
	ctx.r4.s64 = -2010710016;
	// lis r3,-30681
	ctx.r3.s64 = -2010710016;
	// lis r30,-30681
	ctx.r30.s64 = -2010710016;
	// lis r29,-30681
	ctx.r29.s64 = -2010710016;
	// lis r28,-30681
	ctx.r28.s64 = -2010710016;
	// addi r11,r11,26024
	ctx.r11.s64 = ctx.r11.s64 + 26024;
	// addi r10,r10,25704
	ctx.r10.s64 = ctx.r10.s64 + 25704;
	// addi r9,r9,25384
	ctx.r9.s64 = ctx.r9.s64 + 25384;
	// stw r11,156(r1)
	ctx.current_instruction = 0x880FCC08;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r8,r8,25064
	ctx.r8.s64 = ctx.r8.s64 + 25064;
	// stw r10,164(r1)
	ctx.current_instruction = 0x880FCC10;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,152(r1)
	ctx.current_instruction = 0x880FCC14;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// addi r22,r7,27840
	ctx.r22.s64 = ctx.r7.s64 + 27840;
	// stw r8,160(r1)
	ctx.current_instruction = 0x880FCC1C;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r21,r6,27256
	ctx.r21.s64 = ctx.r6.s64 + 27256;
	// addi r20,r5,26672
	ctx.r20.s64 = ctx.r5.s64 + 26672;
	// addi r19,r4,26088
	ctx.r19.s64 = ctx.r4.s64 + 26088;
	// addi r18,r3,30224
	ctx.r18.s64 = ctx.r3.s64 + 30224;
	// addi r17,r30,29624
	ctx.r17.s64 = ctx.r30.s64 + 29624;
	// addi r16,r29,29024
	ctx.r16.s64 = ctx.r29.s64 + 29024;
	// addi r15,r28,28424
	ctx.r15.s64 = ctx.r28.s64 + 28424;
loc_880FCC3C:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FCC3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880fda08
	if (!ctx.cr6.gt) goto loc_880FDA08;
loc_880FCC4C:
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880FCC50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FCC54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// li r28,0
	ctx.r28.s64 = 0;
	// mullw r8,r9,r24
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// add r7,r11,r23
	ctx.r7.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r6,r25,68
	ctx.r6.s64 = ctx.r25.s64 + 68;
	// rlwinm r14,r7,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r9,r14,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r14,128(r1)
	ctx.current_instruction = 0x880FCC80;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// addi r5,r25,74
	ctx.r5.s64 = ctx.r25.s64 + 74;
	// add r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r25,56
	ctx.r7.s64 = ctx.r25.s64 + 56;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
loc_880FCC98:
	// lwz r8,0(r9)
	ctx.current_instruction = 0x880FCC98;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lbzx r4,r5,r11
	ctx.current_instruction = 0x880FCC9C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r8,0(r10)
	ctx.current_instruction = 0x880FCCA4;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// beq cr6,0x880fccb0
	if (ctx.cr6.eq) goto loc_880FCCB0;
	// stbx r28,r7,r11
	ctx.current_instruction = 0x880FCCAC;
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r28.u8);
loc_880FCCB0:
	// lbzx r8,r7,r11
	ctx.current_instruction = 0x880FCCB0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x880fcccc
	if (!ctx.cr6.eq) goto loc_880FCCCC;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r4,128(r8)
	ctx.current_instruction = 0x880FCCC4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 128);
	// b 0x880fccf0
	goto loc_880FCCF0;
loc_880FCCCC:
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x880fcce0
	if (!ctx.cr6.eq) goto loc_880FCCE0;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r4,134(r8)
	ctx.current_instruction = 0x880FCCD8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 134);
	// b 0x880fccf0
	goto loc_880FCCF0;
loc_880FCCE0:
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x880fcd04
	if (!ctx.cr6.eq) goto loc_880FCD04;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r4,140(r8)
	ctx.current_instruction = 0x880FCCEC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 140);
loc_880FCCF0:
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// stw r3,0(r9)
	ctx.current_instruction = 0x880FCCF8;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// subfe r8,r8,r3
	temp.u8 = (~ctx.r8.u32 + ctx.r3.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,0(r10)
	ctx.current_instruction = 0x880FCD00;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_880FCD04:
	// lwz r8,0(r10)
	ctx.current_instruction = 0x880FCD04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880fcd14
	if (!ctx.cr6.eq) goto loc_880FCD14;
	// stbx r28,r7,r11
	ctx.current_instruction = 0x880FCD10;
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r28.u8);
loc_880FCD14:
	// rlwinm r4,r27,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r8,r11,r6
	ctx.current_instruction = 0x880FCD18;
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r27,r4,r8
	ctx.r27.u64 = ctx.r4.u64 | ctx.r8.u64;
	// bne cr6,0x880fcd2c
	if (!ctx.cr6.eq) goto loc_880FCD2C;
	// stbx r28,r7,r11
	ctx.current_instruction = 0x880FCD28;
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r28.u8);
loc_880FCD2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x880fcc98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880FCC98;
	// lwz r11,0(r25)
	ctx.current_instruction = 0x880FCD3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// stb r28,147(r25)
	ctx.current_instruction = 0x880FCD44;
	REX_STORE_U8(ctx.r25.u32 + 147, ctx.r28.u8);
	// rlwimi r11,r10,26,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stb r27,146(r25)
	ctx.current_instruction = 0x880FCD4C;
	REX_STORE_U8(ctx.r25.u32 + 146, ctx.r27.u8);
	// lwz r30,140(r1)
	ctx.current_instruction = 0x880FCD50;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,0(r25)
	ctx.current_instruction = 0x880FCD54;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r8,6792(r31)
	ctx.current_instruction = 0x880FCD58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lbzx r11,r8,r30
	ctx.current_instruction = 0x880FCD5C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880fceb0
	if (!ctx.cr6.eq) goto loc_880FCEB0;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FCD68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r30,r24,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r23,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FCD74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fc8e8
	ctx.lr = 0x880FCDA0;
	sub_880FC8E8(ctx, base);
loc_880FCDA0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r11,2324(r31)
	ctx.current_instruction = 0x880FCDA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r14,r3,5,0,26
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fc8e8
	ctx.lr = 0x880FCDCC;
	sub_880FC8E8(ctx, base);
loc_880FCDCC:
	// lwz r8,720(r31)
	ctx.current_instruction = 0x880FCDCC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FCDD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r28,r10
	ctx.r6.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r14,r9,r14
	ctx.r14.u64 = ctx.r9.u64 | ctx.r14.u64;
	// bl 0x880fc8e8
	ctx.lr = 0x880FCE0C;
	sub_880FC8E8(ctx, base);
loc_880FCE0C:
	// lwz r11,2324(r31)
	ctx.current_instruction = 0x880FCE0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r30,r8,r14
	ctx.r30.u64 = ctx.r8.u64 | ctx.r14.u64;
	// bl 0x880fc8e8
	ctx.lr = 0x880FCE34;
	sub_880FC8E8(ctx, base);
loc_880FCE34:
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,128(r1)
	ctx.current_instruction = 0x880FCE38;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r28,0
	ctx.r28.s64 = 0;
	// or r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 | ctx.r30.u64;
loc_880FCE44:
	// stb r30,147(r25)
	ctx.current_instruction = 0x880FCE44;
	REX_STORE_U8(ctx.r25.u32 + 147, ctx.r30.u8);
	// or r27,r27,r30
	ctx.r27.u64 = ctx.r27.u64 | ctx.r30.u64;
loc_880FCE4C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880fce68
	if (!ctx.cr6.eq) goto loc_880FCE68;
loc_880FCE54:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x880FCE54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880fd9d4
	if (!ctx.cr6.eq) goto loc_880FD9D4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_880FCE68:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x880FCE68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r10,88(r25)
	ctx.current_instruction = 0x880FCE6C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 88);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// clrlwi r8,r11,1
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// rlwinm r29,r9,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stw r8,0(r25)
	ctx.current_instruction = 0x880FCE7C;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880fd68c
	if (!ctx.cr6.eq) goto loc_880FD68C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880fd4e8
	if (!ctx.cr6.eq) goto loc_880FD4E8;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880FCE90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880fcea8
	if (!ctx.cr6.eq) goto loc_880FCEA8;
	// lwz r11,144(r1)
	ctx.current_instruction = 0x880FCE9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fd4e8
	if (!ctx.cr6.eq) goto loc_880FD4E8;
loc_880FCEA8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x880fd4ec
	goto loc_880FD4EC;
loc_880FCEB0:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x880fcf38
	if (!ctx.cr6.eq) goto loc_880FCF38;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FCEB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r29,r24,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r23,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FCEC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fc8e8
	ctx.lr = 0x880FCEF0;
	sub_880FC8E8(ctx, base);
loc_880FCEF0:
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,720(r31)
	ctx.current_instruction = 0x880FCEF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,128(r1)
	ctx.current_instruction = 0x880FCEFC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FCF08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880fc8e8
	ctx.lr = 0x880FCF24;
	sub_880FC8E8(ctx, base);
loc_880FCF24:
	// lwz r11,128(r1)
	ctx.current_instruction = 0x880FCF24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r7,r3,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r28,0
	ctx.r28.s64 = 0;
	// or r30,r7,r11
	ctx.r30.u64 = ctx.r7.u64 | ctx.r11.u64;
	// b 0x880fce44
	goto loc_880FCE44;
loc_880FCF38:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x880fcfb4
	if (!ctx.cr6.eq) goto loc_880FCFB4;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FCF40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r28,r24,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r23,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FCF4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r9,r11,r28
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r6,r29,r10
	ctx.r6.u64 = ctx.r29.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fc8e8
	ctx.lr = 0x880FCF78;
	sub_880FC8E8(ctx, base);
loc_880FCF78:
	// lwz r11,2324(r31)
	ctx.current_instruction = 0x880FCF78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,128(r1)
	ctx.current_instruction = 0x880FCF88;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fc8e8
	ctx.lr = 0x880FCFA0;
	sub_880FC8E8(ctx, base);
loc_880FCFA0:
	// lwz r11,128(r1)
	ctx.current_instruction = 0x880FCFA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// li r28,0
	ctx.r28.s64 = 0;
	// or r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 | ctx.r11.u64;
	// b 0x880fce44
	goto loc_880FCE44;
loc_880FCFB4:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880FCFB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880fcfe0
	if (ctx.cr6.eq) goto loc_880FCFE0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r5,r24,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r23,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fc8e8
	ctx.lr = 0x880FCFD8;
	sub_880FC8E8(ctx, base);
loc_880FCFD8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x880fce4c
	goto loc_880FCE4C;
loc_880FCFE0:
	// lwz r11,2324(r31)
	ctx.current_instruction = 0x880FCFE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,116(r25)
	ctx.current_instruction = 0x880FCFE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 116);
	// add r26,r29,r11
	ctx.r26.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r28,144(r1)
	ctx.current_instruction = 0x880FCFF0;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,0(r26)
	ctx.current_instruction = 0x880FCFF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// beq cr6,0x880fd018
	if (ctx.cr6.eq) goto loc_880FD018;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// rlwimi r11,r10,2,16,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFF000F);
	// stw r11,0(r26)
	ctx.current_instruction = 0x880FD00C;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// sth r28,0(r26)
	ctx.current_instruction = 0x880FD010;
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r28.u16);
	// b 0x880fd45c
	goto loc_880FD45C;
loc_880FD018:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,0(r26)
	ctx.current_instruction = 0x880FD01C;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r10,92(r25)
	ctx.current_instruction = 0x880FD020;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 92);
	// srawi r10,r10,28
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 28;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880fd040
	if (!ctx.cr6.eq) goto loc_880FD040;
	// rlwinm r11,r11,0,28,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF000F;
	// stw r11,0(r26)
	ctx.current_instruction = 0x880FD034;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// sth r28,0(r26)
	ctx.current_instruction = 0x880FD038;
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r28.u16);
	// b 0x880fd45c
	goto loc_880FD45C;
loc_880FD040:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x880fd178
	if (ctx.cr6.eq) goto loc_880FD178;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x880fd178
	if (ctx.cr6.eq) goto loc_880FD178;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x880fd45c
	if (!ctx.cr6.eq) goto loc_880FD45C;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880FD058;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880fd0c4
	if (!ctx.cr6.eq) goto loc_880FD0C4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x880fd084
	if (ctx.cr6.eq) goto loc_880FD084;
	// lwz r11,2264(r31)
	ctx.current_instruction = 0x880FD06C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x880FD074;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880fd088
	if (ctx.cr6.eq) goto loc_880FD088;
loc_880FD084:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880FD088:
	// stw r11,84(r1)
	ctx.current_instruction = 0x880FD088;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,2460(r31)
	ctx.current_instruction = 0x880FD094;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r7,2456(r31)
	ctx.current_instruction = 0x880FD09C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880FD0B0;
	sub_88243CB0(ctx, base);
loc_880FD0B0:
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880FD0B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r10,220(r1)
	ctx.current_instruction = 0x880FD0B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,116(r1)
	ctx.current_instruction = 0x880FD0B8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	ctx.current_instruction = 0x880FD0BC;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x880fd104
	goto loc_880FD104;
loc_880FD0C4:
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// lwz r8,724(r31)
	ctx.current_instruction = 0x880FD0C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r7,720(r31)
	ctx.current_instruction = 0x880FD0D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,2460(r31)
	ctx.current_instruction = 0x880FD0D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r5,92(r1)
	ctx.current_instruction = 0x880FD0E0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r4,100(r1)
	ctx.current_instruction = 0x880FD0E4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r3,84(r1)
	ctx.current_instruction = 0x880FD0EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r9,2456(r31)
	ctx.current_instruction = 0x880FD0F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810ab28
	ctx.lr = 0x880FD104;
	sub_8810AB28(ctx, base);
loc_880FD104:
	// lwz r10,2456(r31)
	ctx.current_instruction = 0x880FD104;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,116(r1)
	ctx.current_instruction = 0x880FD10C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,2604(r31)
	ctx.current_instruction = 0x880FD110;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// lwz r7,2612(r31)
	ctx.current_instruction = 0x880FD114;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// lwz r6,120(r1)
	ctx.current_instruction = 0x880FD118;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lhzx r5,r9,r10
	ctx.current_instruction = 0x880FD11C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// subf r10,r8,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r8.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 & ctx.r7.u64;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// sth r8,0(r26)
	ctx.current_instruction = 0x880FD134;
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r8.u16);
	// lwz r10,2460(r31)
	ctx.current_instruction = 0x880FD138;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// lwz r11,2608(r31)
	ctx.current_instruction = 0x880FD13C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r4,0(r26)
	ctx.current_instruction = 0x880FD140;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r5,2616(r31)
	ctx.current_instruction = 0x880FD144;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r7,r9,r10
	ctx.current_instruction = 0x880FD14C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// and r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 & ctx.r8.u64;
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwimi r8,r4,0,28,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r8.u64 & 0xFFF0);
	// stw r8,0(r26)
	ctx.current_instruction = 0x880FD170;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// b 0x880fd45c
	goto loc_880FD45C;
loc_880FD178:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880FD178;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880fd1e4
	if (!ctx.cr6.eq) goto loc_880FD1E4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x880fd1a4
	if (ctx.cr6.eq) goto loc_880FD1A4;
	// lwz r11,2264(r31)
	ctx.current_instruction = 0x880FD18C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x880FD194;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880fd1a8
	if (ctx.cr6.eq) goto loc_880FD1A8;
loc_880FD1A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880FD1A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,2468(r31)
	ctx.current_instruction = 0x880FD1AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,2464(r31)
	ctx.current_instruction = 0x880FD1B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880FD1BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880FD1D0;
	sub_88243CB0(ctx, base);
loc_880FD1D0:
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880FD1D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r10,220(r1)
	ctx.current_instruction = 0x880FD1D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,116(r1)
	ctx.current_instruction = 0x880FD1D8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	ctx.current_instruction = 0x880FD1DC;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x880fd224
	goto loc_880FD224;
loc_880FD1E4:
	// cntlzw r10,r24
	ctx.r10.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// lwz r8,724(r31)
	ctx.current_instruction = 0x880FD1E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r7,720(r31)
	ctx.current_instruction = 0x880FD1F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r10,2468(r31)
	ctx.current_instruction = 0x880FD1F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// stw r4,92(r1)
	ctx.current_instruction = 0x880FD200;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r3,100(r1)
	ctx.current_instruction = 0x880FD204;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r9,2464(r31)
	ctx.current_instruction = 0x880FD210;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880FD218;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810ab28
	ctx.lr = 0x880FD224;
	sub_8810AB28(ctx, base);
loc_880FD224:
	// lwz r10,2464(r31)
	ctx.current_instruction = 0x880FD224;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,116(r1)
	ctx.current_instruction = 0x880FD22C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// lwz r11,2604(r31)
	ctx.current_instruction = 0x880FD234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// lwz r7,2612(r31)
	ctx.current_instruction = 0x880FD238;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// lwz r6,120(r1)
	ctx.current_instruction = 0x880FD23C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lhzx r5,r30,r10
	ctx.current_instruction = 0x880FD240;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// subf r10,r9,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 & ctx.r7.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// sth r9,0(r26)
	ctx.current_instruction = 0x880FD258;
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r9.u16);
	// lwz r11,2608(r31)
	ctx.current_instruction = 0x880FD25C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r7,0(r26)
	ctx.current_instruction = 0x880FD260;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,2616(r31)
	ctx.current_instruction = 0x880FD264;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,2468(r31)
	ctx.current_instruction = 0x880FD26C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r10,r30,r5
	ctx.current_instruction = 0x880FD274;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r5.u32);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// and r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ctx.r9.u64;
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwimi r9,r7,0,28,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r9.u64 & 0xFFF0);
	// stw r9,0(r26)
	ctx.current_instruction = 0x880FD294;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lwz r7,92(r25)
	ctx.current_instruction = 0x880FD298;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 92);
	// rlwinm r6,r7,0,0,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880fd45c
	if (!ctx.cr6.eq) goto loc_880FD45C;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880FD2A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880fd314
	if (!ctx.cr6.eq) goto loc_880FD314;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x880fd2d4
	if (ctx.cr6.eq) goto loc_880FD2D4;
	// lwz r11,2264(r31)
	ctx.current_instruction = 0x880FD2BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x880FD2C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880fd2d8
	if (ctx.cr6.eq) goto loc_880FD2D8;
loc_880FD2D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880FD2D8:
	// stw r11,84(r1)
	ctx.current_instruction = 0x880FD2D8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,2460(r31)
	ctx.current_instruction = 0x880FD2E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r7,2456(r31)
	ctx.current_instruction = 0x880FD2EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880FD300;
	sub_88243CB0(ctx, base);
loc_880FD300:
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880FD300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r10,220(r1)
	ctx.current_instruction = 0x880FD304;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,116(r1)
	ctx.current_instruction = 0x880FD308;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	ctx.current_instruction = 0x880FD30C;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x880fd354
	goto loc_880FD354;
loc_880FD314:
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// lwz r8,724(r31)
	ctx.current_instruction = 0x880FD318;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r7,720(r31)
	ctx.current_instruction = 0x880FD320;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,2460(r31)
	ctx.current_instruction = 0x880FD328;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// stw r5,84(r1)
	ctx.current_instruction = 0x880FD330;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,100(r1)
	ctx.current_instruction = 0x880FD334;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r9,92(r1)
	ctx.current_instruction = 0x880FD340;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r9,2456(r31)
	ctx.current_instruction = 0x880FD348;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810ab28
	ctx.lr = 0x880FD354;
	sub_8810AB28(ctx, base);
loc_880FD354:
	// lwz r11,112(r1)
	ctx.current_instruction = 0x880FD354;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,2456(r31)
	ctx.current_instruction = 0x880FD358;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r7,116(r1)
	ctx.current_instruction = 0x880FD360;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,2604(r31)
	ctx.current_instruction = 0x880FD364;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// stw r9,112(r1)
	ctx.current_instruction = 0x880FD368;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r6,2612(r31)
	ctx.current_instruction = 0x880FD36C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r8,r30,r8
	ctx.current_instruction = 0x880FD374;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r8.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r4,2460(r31)
	ctx.current_instruction = 0x880FD380;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// rlwinm r3,r6,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lwz r6,120(r1)
	ctx.current_instruction = 0x880FD388;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// std r29,128(r1)
	ctx.current_instruction = 0x880FD390;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// lwz r10,2608(r31)
	ctx.current_instruction = 0x880FD394;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r28,2616(r31)
	ctx.current_instruction = 0x880FD39C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// rlwinm r29,r10,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// std r31,144(r1)
	ctx.current_instruction = 0x880FD3A4;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r31.u64);
	// and r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 & ctx.r3.u64;
	// lwz r31,2204(r31)
	ctx.current_instruction = 0x880FD3AC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 2204);
	// rlwinm r28,r28,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r5,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r5.u64;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// ld r31,144(r1)
	ctx.current_instruction = 0x880FD3BC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// rlwimi r11,r9,0,16,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// stw r11,112(r1)
	ctx.current_instruction = 0x880FD3C4;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhzx r7,r30,r4
	ctx.current_instruction = 0x880FD3C8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r4.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// and r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 & ctx.r28.u64;
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r29.u64;
	// ld r29,128(r1)
	ctx.current_instruction = 0x880FD3E4;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// rlwimi r10,r11,0,28,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r10.u64 & 0xFFF0);
	// stw r10,112(r1)
	ctx.current_instruction = 0x880FD3EC;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bne cr6,0x880fd408
	if (!ctx.cr6.eq) goto loc_880FD408;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwimi r11,r10,0,16,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwimi r10,r11,0,28,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r10.u64 & 0xFFF0);
	// stw r10,112(r1)
	ctx.current_instruction = 0x880FD404;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_880FD408:
	// lwz r11,7856(r31)
	ctx.current_instruction = 0x880FD408;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7856);
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// sthx r10,r29,r11
	ctx.current_instruction = 0x880FD410;
	REX_STORE_U16(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u16);
	// lwz r11,7856(r31)
	ctx.current_instruction = 0x880FD414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7856);
	// lwz r8,112(r1)
	ctx.current_instruction = 0x880FD418;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwzx r7,r29,r11
	ctx.current_instruction = 0x880FD41C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwimi r8,r7,0,28,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r8.u64 & 0xFFF0);
	// stwx r8,r29,r11
	ctx.current_instruction = 0x880FD424;
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r11,112(r1)
	ctx.current_instruction = 0x880FD428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r6,r11,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x880fd450
	if (!ctx.cr6.eq) goto loc_880FD450;
	// rlwinm r11,r11,0,16,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fd450
	if (!ctx.cr6.eq) goto loc_880FD450;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,144(r1)
	ctx.current_instruction = 0x880FD448;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// b 0x880fd45c
	goto loc_880FD45C;
loc_880FD450:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,144(r1)
	ctx.current_instruction = 0x880FD458;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_880FD45C:
	// lwz r11,2204(r31)
	ctx.current_instruction = 0x880FD45C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2204);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880fd484
	if (!ctx.cr6.eq) goto loc_880FD484;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x880FD468;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// srawi r10,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 17;
	// sth r10,0(r26)
	ctx.current_instruction = 0x880FD470;
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r10.u16);
	// lwz r8,0(r26)
	ctx.current_instruction = 0x880FD474;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// rlwimi r7,r8,0,28,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r7.u64 & 0xFFF0);
	// stw r7,0(r26)
	ctx.current_instruction = 0x880FD480;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
loc_880FD484:
	// lwz r11,0(r26)
	ctx.current_instruction = 0x880FD484;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,0(r26)
	ctx.current_instruction = 0x880FD494;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880fd4e0
	if (!ctx.cr6.eq) goto loc_880FD4E0;
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880fd4e0
	if (!ctx.cr6.eq) goto loc_880FD4E0;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880fd4e0
	if (!ctx.cr6.eq) goto loc_880FD4E0;
	// lwz r11,92(r25)
	ctx.current_instruction = 0x880FD4B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 92);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880fd4d8
	if (!ctx.cr6.eq) goto loc_880FD4D8;
	// lwz r11,144(r1)
	ctx.current_instruction = 0x880FD4CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fd4e0
	if (!ctx.cr6.eq) goto loc_880FD4E0;
loc_880FD4D8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x880fce54
	goto loc_880FCE54;
loc_880FD4E0:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x880fce68
	goto loc_880FCE68;
loc_880FD4E8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880FD4EC:
	// lwz r10,0(r26)
	ctx.current_instruction = 0x880FD4EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r8,r10,0,29,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7) | (ctx.r8.u64 & 0x8);
	// stw r8,0(r26)
	ctx.current_instruction = 0x880FD4FC;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x880FD500;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880fd524
	if (!ctx.cr6.gt) goto loc_880FD524;
	// lwz r10,112(r1)
	ctx.current_instruction = 0x880FD50C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwimi r8,r10,0,29,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7) | (ctx.r8.u64 & 0x8);
	// stw r8,112(r1)
	ctx.current_instruction = 0x880FD520;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
loc_880FD524:
	// beq cr6,0x880fd548
	if (ctx.cr6.eq) goto loc_880FD548;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880FD528;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880fd548
	if (!ctx.cr6.eq) goto loc_880FD548;
	// lwz r11,92(r25)
	ctx.current_instruction = 0x880FD534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 92);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880fd5d4
	if (ctx.cr6.eq) goto loc_880FD5D4;
loc_880FD548:
	// lwz r11,31548(r31)
	ctx.current_instruction = 0x880FD548;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31548);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,7192(r31)
	ctx.current_instruction = 0x880FD550;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// li r4,8
	ctx.r4.s64 = 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fd57c
	if (ctx.cr6.eq) goto loc_880FD57C;
	// bl 0x880f9550
	ctx.lr = 0x880FD564;
	sub_880F9550(ctx, base);
loc_880FD564:
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r15,4
	ctx.r5.s64 = ctx.r15.s64 + 4;
	// addi r4,r16,4
	ctx.r4.s64 = ctx.r16.s64 + 4;
	// addi r3,r17,4
	ctx.r3.s64 = ctx.r17.s64 + 4;
	// addi r28,r18,4
	ctx.r28.s64 = ctx.r18.s64 + 4;
	// b 0x880fd594
	goto loc_880FD594;
loc_880FD57C:
	// bl 0x880f94f8
	ctx.lr = 0x880FD580;
	sub_880F94F8(ctx, base);
loc_880FD580:
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r19,4
	ctx.r5.s64 = ctx.r19.s64 + 4;
	// addi r4,r20,4
	ctx.r4.s64 = ctx.r20.s64 + 4;
	// addi r3,r21,4
	ctx.r3.s64 = ctx.r21.s64 + 4;
	// addi r28,r22,4
	ctx.r28.s64 = ctx.r22.s64 + 4;
loc_880FD594:
	// lwzx r11,r6,r5
	ctx.current_instruction = 0x880FD594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwz r7,6932(r31)
	ctx.current_instruction = 0x880FD598;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6932);
	// lwz r8,6936(r31)
	ctx.current_instruction = 0x880FD59C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6936);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,6940(r31)
	ctx.current_instruction = 0x880FD5A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6940);
	// lwz r10,6944(r31)
	ctx.current_instruction = 0x880FD5A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6944);
	// stw r11,6932(r31)
	ctx.current_instruction = 0x880FD5AC;
	REX_STORE_U32(ctx.r31.u32 + 6932, ctx.r11.u32);
	// lwzx r11,r6,r4
	ctx.current_instruction = 0x880FD5B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,6936(r31)
	ctx.current_instruction = 0x880FD5B8;
	REX_STORE_U32(ctx.r31.u32 + 6936, ctx.r8.u32);
	// lwzx r11,r6,r3
	ctx.current_instruction = 0x880FD5BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,6940(r31)
	ctx.current_instruction = 0x880FD5C4;
	REX_STORE_U32(ctx.r31.u32 + 6940, ctx.r7.u32);
	// lwzx r11,r6,r28
	ctx.current_instruction = 0x880FD5C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6944(r31)
	ctx.current_instruction = 0x880FD5D0;
	REX_STORE_U32(ctx.r31.u32 + 6944, ctx.r6.u32);
loc_880FD5D4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880fd600
	if (!ctx.cr6.eq) goto loc_880FD600;
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x880FD5DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fd9d4
	if (ctx.cr6.eq) goto loc_880FD9D4;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880FD5E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880fd9d4
	if (!ctx.cr6.eq) goto loc_880FD9D4;
	// lwz r11,144(r1)
	ctx.current_instruction = 0x880FD5F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fd9d4
	if (ctx.cr6.eq) goto loc_880FD9D4;
loc_880FD600:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880FD600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880fd684
	if (!ctx.cr6.eq) goto loc_880FD684;
	// lwz r11,92(r25)
	ctx.current_instruction = 0x880FD60C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 92);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880fd684
	if (!ctx.cr6.eq) goto loc_880FD684;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,7192(r31)
	ctx.current_instruction = 0x880FD624;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x880f94f8
	ctx.lr = 0x880FD630;
	sub_880F94F8(ctx, base);
loc_880FD630:
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r19,4
	ctx.r5.s64 = ctx.r19.s64 + 4;
	// lwz r7,6932(r31)
	ctx.current_instruction = 0x880FD638;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6932);
	// addi r4,r20,4
	ctx.r4.s64 = ctx.r20.s64 + 4;
	// lwz r8,6936(r31)
	ctx.current_instruction = 0x880FD640;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6936);
	// addi r3,r21,4
	ctx.r3.s64 = ctx.r21.s64 + 4;
	// lwz r9,6940(r31)
	ctx.current_instruction = 0x880FD648;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6940);
	// addi r28,r22,4
	ctx.r28.s64 = ctx.r22.s64 + 4;
	// lwz r10,6944(r31)
	ctx.current_instruction = 0x880FD650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6944);
	// lwzx r11,r6,r5
	ctx.current_instruction = 0x880FD654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,6932(r31)
	ctx.current_instruction = 0x880FD65C;
	REX_STORE_U32(ctx.r31.u32 + 6932, ctx.r11.u32);
	// lwzx r11,r6,r4
	ctx.current_instruction = 0x880FD660;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,6936(r31)
	ctx.current_instruction = 0x880FD668;
	REX_STORE_U32(ctx.r31.u32 + 6936, ctx.r8.u32);
	// lwzx r11,r6,r3
	ctx.current_instruction = 0x880FD66C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,6940(r31)
	ctx.current_instruction = 0x880FD674;
	REX_STORE_U32(ctx.r31.u32 + 6940, ctx.r7.u32);
	// lwzx r11,r6,r28
	ctx.current_instruction = 0x880FD678;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6944(r31)
	ctx.current_instruction = 0x880FD680;
	REX_STORE_U32(ctx.r31.u32 + 6944, ctx.r6.u32);
loc_880FD684:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x880fd9d4
	if (ctx.cr6.eq) goto loc_880FD9D4;
loc_880FD68C:
	// lwz r11,160(r1)
	ctx.current_instruction = 0x880FD68C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,6948(r31)
	ctx.current_instruction = 0x880FD690;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6948);
	// lwz r7,152(r1)
	ctx.current_instruction = 0x880FD694;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,6952(r31)
	ctx.current_instruction = 0x880FD698;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6952);
	// lwz r6,164(r1)
	ctx.current_instruction = 0x880FD69C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lbzx r11,r27,r11
	ctx.current_instruction = 0x880FD6A0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lwz r9,6956(r31)
	ctx.current_instruction = 0x880FD6A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6956);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,156(r1)
	ctx.current_instruction = 0x880FD6AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,6960(r31)
	ctx.current_instruction = 0x880FD6B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6960);
	// stw r5,6948(r31)
	ctx.current_instruction = 0x880FD6B4;
	REX_STORE_U32(ctx.r31.u32 + 6948, ctx.r5.u32);
	// lbzx r11,r27,r7
	ctx.current_instruction = 0x880FD6B8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r7.u32);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r3,6952(r31)
	ctx.current_instruction = 0x880FD6C0;
	REX_STORE_U32(ctx.r31.u32 + 6952, ctx.r3.u32);
	// lbzx r11,r27,r6
	ctx.current_instruction = 0x880FD6C4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r6.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,6956(r31)
	ctx.current_instruction = 0x880FD6CC;
	REX_STORE_U32(ctx.r31.u32 + 6956, ctx.r11.u32);
	// lbzx r11,r27,r4
	ctx.current_instruction = 0x880FD6D0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r4.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6960(r31)
	ctx.current_instruction = 0x880FD6D8;
	REX_STORE_U32(ctx.r31.u32 + 6960, ctx.r10.u32);
	// lbz r9,88(r25)
	ctx.current_instruction = 0x880FD6DC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + 88);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880fd7e0
	if (!ctx.cr6.eq) goto loc_880FD7E0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r1,176
	ctx.r28.s64 = ctx.r1.s64 + 176;
loc_880FD6F4:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FD6F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r8,r29,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FD700;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r7,0(r28)
	ctx.current_instruction = 0x880FD708;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r6,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 5;
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwzx r3,r11,r10
	ctx.current_instruction = 0x880FD72C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r3,r7,3,28,28
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x8) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF7);
	// stwx r3,r11,r10
	ctx.current_instruction = 0x880FD734;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// beq cr6,0x880fd7cc
	if (ctx.cr6.eq) goto loc_880FD7CC;
	// lwz r10,31548(r31)
	ctx.current_instruction = 0x880FD73C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 31548);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,7192(r31)
	ctx.current_instruction = 0x880FD744;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FD74C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x880fd774
	if (ctx.cr6.eq) goto loc_880FD774;
	// bl 0x880f9550
	ctx.lr = 0x880FD75C;
	sub_880F9550(ctx, base);
loc_880FD75C:
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r15,4
	ctx.r5.s64 = ctx.r15.s64 + 4;
	// addi r4,r16,4
	ctx.r4.s64 = ctx.r16.s64 + 4;
	// addi r3,r17,4
	ctx.r3.s64 = ctx.r17.s64 + 4;
	// addi r27,r18,4
	ctx.r27.s64 = ctx.r18.s64 + 4;
	// b 0x880fd78c
	goto loc_880FD78C;
loc_880FD774:
	// bl 0x880f94f8
	ctx.lr = 0x880FD778;
	sub_880F94F8(ctx, base);
loc_880FD778:
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r19,4
	ctx.r5.s64 = ctx.r19.s64 + 4;
	// addi r4,r20,4
	ctx.r4.s64 = ctx.r20.s64 + 4;
	// addi r3,r21,4
	ctx.r3.s64 = ctx.r21.s64 + 4;
	// addi r27,r22,4
	ctx.r27.s64 = ctx.r22.s64 + 4;
loc_880FD78C:
	// lwzx r11,r6,r5
	ctx.current_instruction = 0x880FD78C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwz r7,6932(r31)
	ctx.current_instruction = 0x880FD790;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6932);
	// lwz r8,6936(r31)
	ctx.current_instruction = 0x880FD794;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6936);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,6940(r31)
	ctx.current_instruction = 0x880FD79C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6940);
	// lwz r10,6944(r31)
	ctx.current_instruction = 0x880FD7A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6944);
	// stw r11,6932(r31)
	ctx.current_instruction = 0x880FD7A4;
	REX_STORE_U32(ctx.r31.u32 + 6932, ctx.r11.u32);
	// lwzx r11,r6,r4
	ctx.current_instruction = 0x880FD7A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,6936(r31)
	ctx.current_instruction = 0x880FD7B0;
	REX_STORE_U32(ctx.r31.u32 + 6936, ctx.r8.u32);
	// lwzx r11,r6,r3
	ctx.current_instruction = 0x880FD7B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,6940(r31)
	ctx.current_instruction = 0x880FD7BC;
	REX_STORE_U32(ctx.r31.u32 + 6940, ctx.r7.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x880FD7C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6944(r31)
	ctx.current_instruction = 0x880FD7C8;
	REX_STORE_U32(ctx.r31.u32 + 6944, ctx.r6.u32);
loc_880FD7CC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x880fd6f4
	if (ctx.cr6.lt) goto loc_880FD6F4;
	// b 0x880fd9d4
	goto loc_880FD9D4;
loc_880FD7E0:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880fd8dc
	if (!ctx.cr6.eq) goto loc_880FD8DC;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r1,176
	ctx.r28.s64 = ctx.r1.s64 + 176;
loc_880FD7F0:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FD7F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r8,r29,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FD7FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r7,0(r28)
	ctx.current_instruction = 0x880FD804;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r6,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 5;
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwzx r3,r11,r10
	ctx.current_instruction = 0x880FD828;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r3,r7,3,28,28
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x8) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF7);
	// stwx r3,r11,r10
	ctx.current_instruction = 0x880FD830;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// beq cr6,0x880fd8c8
	if (ctx.cr6.eq) goto loc_880FD8C8;
	// lwz r10,31548(r31)
	ctx.current_instruction = 0x880FD838;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 31548);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,7192(r31)
	ctx.current_instruction = 0x880FD840;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FD848;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x880fd870
	if (ctx.cr6.eq) goto loc_880FD870;
	// bl 0x880f9550
	ctx.lr = 0x880FD858;
	sub_880F9550(ctx, base);
loc_880FD858:
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r15,4
	ctx.r5.s64 = ctx.r15.s64 + 4;
	// addi r4,r16,4
	ctx.r4.s64 = ctx.r16.s64 + 4;
	// addi r3,r17,4
	ctx.r3.s64 = ctx.r17.s64 + 4;
	// addi r27,r18,4
	ctx.r27.s64 = ctx.r18.s64 + 4;
	// b 0x880fd888
	goto loc_880FD888;
loc_880FD870:
	// bl 0x880f94f8
	ctx.lr = 0x880FD874;
	sub_880F94F8(ctx, base);
loc_880FD874:
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r19,4
	ctx.r5.s64 = ctx.r19.s64 + 4;
	// addi r4,r20,4
	ctx.r4.s64 = ctx.r20.s64 + 4;
	// addi r3,r21,4
	ctx.r3.s64 = ctx.r21.s64 + 4;
	// addi r27,r22,4
	ctx.r27.s64 = ctx.r22.s64 + 4;
loc_880FD888:
	// lwzx r11,r6,r5
	ctx.current_instruction = 0x880FD888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwz r7,6932(r31)
	ctx.current_instruction = 0x880FD88C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6932);
	// lwz r8,6936(r31)
	ctx.current_instruction = 0x880FD890;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6936);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,6940(r31)
	ctx.current_instruction = 0x880FD898;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6940);
	// lwz r10,6944(r31)
	ctx.current_instruction = 0x880FD89C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6944);
	// stw r11,6932(r31)
	ctx.current_instruction = 0x880FD8A0;
	REX_STORE_U32(ctx.r31.u32 + 6932, ctx.r11.u32);
	// lwzx r11,r6,r4
	ctx.current_instruction = 0x880FD8A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,6936(r31)
	ctx.current_instruction = 0x880FD8AC;
	REX_STORE_U32(ctx.r31.u32 + 6936, ctx.r8.u32);
	// lwzx r11,r6,r3
	ctx.current_instruction = 0x880FD8B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,6940(r31)
	ctx.current_instruction = 0x880FD8B8;
	REX_STORE_U32(ctx.r31.u32 + 6940, ctx.r7.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x880FD8BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6944(r31)
	ctx.current_instruction = 0x880FD8C4;
	REX_STORE_U32(ctx.r31.u32 + 6944, ctx.r6.u32);
loc_880FD8C8:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x880fd7f0
	if (ctx.cr6.lt) goto loc_880FD7F0;
	// b 0x880fd9d4
	goto loc_880FD9D4;
loc_880FD8DC:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x880fd9d4
	if (!ctx.cr6.eq) goto loc_880FD9D4;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r1,176
	ctx.r28.s64 = ctx.r1.s64 + 176;
loc_880FD8EC:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FD8EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r8,r29,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FD8F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r7,0(r28)
	ctx.current_instruction = 0x880FD900;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r6,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 5;
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwzx r3,r11,r10
	ctx.current_instruction = 0x880FD924;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r3,r7,3,28,28
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x8) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF7);
	// stwx r3,r11,r10
	ctx.current_instruction = 0x880FD92C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// beq cr6,0x880fd9c4
	if (ctx.cr6.eq) goto loc_880FD9C4;
	// lwz r10,31548(r31)
	ctx.current_instruction = 0x880FD934;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 31548);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,7192(r31)
	ctx.current_instruction = 0x880FD93C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FD944;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x880fd96c
	if (ctx.cr6.eq) goto loc_880FD96C;
	// bl 0x880f9550
	ctx.lr = 0x880FD954;
	sub_880F9550(ctx, base);
loc_880FD954:
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r15,4
	ctx.r5.s64 = ctx.r15.s64 + 4;
	// addi r4,r16,4
	ctx.r4.s64 = ctx.r16.s64 + 4;
	// addi r3,r17,4
	ctx.r3.s64 = ctx.r17.s64 + 4;
	// addi r27,r18,4
	ctx.r27.s64 = ctx.r18.s64 + 4;
	// b 0x880fd984
	goto loc_880FD984;
loc_880FD96C:
	// bl 0x880f94f8
	ctx.lr = 0x880FD970;
	sub_880F94F8(ctx, base);
loc_880FD970:
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r19,4
	ctx.r5.s64 = ctx.r19.s64 + 4;
	// addi r4,r20,4
	ctx.r4.s64 = ctx.r20.s64 + 4;
	// addi r3,r21,4
	ctx.r3.s64 = ctx.r21.s64 + 4;
	// addi r27,r22,4
	ctx.r27.s64 = ctx.r22.s64 + 4;
loc_880FD984:
	// lwzx r11,r6,r5
	ctx.current_instruction = 0x880FD984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwz r7,6932(r31)
	ctx.current_instruction = 0x880FD988;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6932);
	// lwz r8,6936(r31)
	ctx.current_instruction = 0x880FD98C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6936);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,6940(r31)
	ctx.current_instruction = 0x880FD994;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6940);
	// lwz r10,6944(r31)
	ctx.current_instruction = 0x880FD998;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6944);
	// stw r11,6932(r31)
	ctx.current_instruction = 0x880FD99C;
	REX_STORE_U32(ctx.r31.u32 + 6932, ctx.r11.u32);
	// lwzx r11,r6,r4
	ctx.current_instruction = 0x880FD9A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,6936(r31)
	ctx.current_instruction = 0x880FD9A8;
	REX_STORE_U32(ctx.r31.u32 + 6936, ctx.r8.u32);
	// lwzx r11,r6,r3
	ctx.current_instruction = 0x880FD9AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,6940(r31)
	ctx.current_instruction = 0x880FD9B4;
	REX_STORE_U32(ctx.r31.u32 + 6940, ctx.r7.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x880FD9B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6944(r31)
	ctx.current_instruction = 0x880FD9C0;
	REX_STORE_U32(ctx.r31.u32 + 6944, ctx.r6.u32);
loc_880FD9C4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x880fd8ec
	if (ctx.cr6.lt) goto loc_880FD8EC;
loc_880FD9D4:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x880FD9D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r10,140(r1)
	ctx.current_instruction = 0x880FD9DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r25,r25,276
	ctx.r25.s64 = ctx.r25.s64 + 276;
	// lwz r9,136(r1)
	ctx.current_instruction = 0x880FD9E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r8,720(r31)
	ctx.current_instruction = 0x880FD9EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,140(r1)
	ctx.current_instruction = 0x880FD9F8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// cmpw cr6,r23,r8
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r8.s32, ctx.xer);
	// stw r6,136(r1)
	ctx.current_instruction = 0x880FDA00;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// blt cr6,0x880fcc4c
	if (ctx.cr6.lt) goto loc_880FCC4C;
loc_880FDA08:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880FDA08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880fcc3c
	if (ctx.cr6.lt) goto loc_880FCC3C;
loc_880FDA18:
	// lwz r10,136(r1)
	ctx.current_instruction = 0x880FDA18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,8(r31)
	ctx.current_instruction = 0x880FDA1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,19472(r31)
	ctx.current_instruction = 0x880FDA24;
	REX_STORE_U32(ctx.r31.u32 + 19472, ctx.r10.u32);
	// bne cr6,0x880fda38
	if (!ctx.cr6.eq) goto loc_880FDA38;
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x880FDA2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x880fda70
	if (ctx.cr6.gt) goto loc_880FDA70;
loc_880FDA38:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880FDA38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880fda70
	if (ctx.cr6.eq) goto loc_880FDA70;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880fda70
	if (ctx.cr6.eq) goto loc_880FDA70;
	// lwz r11,2208(r31)
	ctx.current_instruction = 0x880FDA4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fda70
	if (!ctx.cr6.eq) goto loc_880FDA70;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880FDA58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,8236(r31)
	ctx.current_instruction = 0x880FDA68;
	REX_STORE_U32(ctx.r31.u32 + 8236, ctx.r8.u32);
	// b 0x880fda78
	goto loc_880FDA78;
loc_880FDA70:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8236(r31)
	ctx.current_instruction = 0x880FDA74;
	REX_STORE_U32(ctx.r31.u32 + 8236, ctx.r11.u32);
loc_880FDA78:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1416(r31)
	ctx.current_instruction = 0x880FDA7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// lwz r3,7192(r31)
	ctx.current_instruction = 0x880FDA80;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// bl 0x880f95a8
	ctx.lr = 0x880FDA88;
	sub_880F95A8(ctx, base);
loc_880FDA88:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881247E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881247E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881247E8) {
			switch (rex_dispatch_address) {
				case 0x881247F0:
				case 0x88124864:
				case 0x88124878:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881247E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881247F0: goto loc_881247F0;
		case 0x88124864: goto loc_88124864;
		case 0x88124878: goto loc_88124878;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881247F0;
	__savegprlr_28(ctx, base);
loc_881247F0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881247F0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x881247F8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrldi r29,r4,32
	ctx.r29.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88124804;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_88124808:
	// lwz r9,44(r28)
	ctx.current_instruction = 0x88124808;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,16(r9)
	ctx.current_instruction = 0x88124818;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,8(r8)
	ctx.current_instruction = 0x8812481C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88124834
	if (ctx.cr6.eq) goto loc_88124834;
	// lwz r10,0(r9)
	ctx.current_instruction = 0x88124828;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.current_instruction = 0x8812482C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.current_instruction = 0x88124830;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_88124834:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r9,40(r31)
	ctx.current_instruction = 0x88124838;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x881248a0
	if (!ctx.cr6.lt) goto loc_881248A0;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x8812484C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88124858;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88124864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88124864:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881248a0
	if (ctx.cr6.lt) goto loc_881248A0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x88124870;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x88124050
	ctx.lr = 0x88124878;
	sub_88124050(ctx, base);
loc_88124878:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881248a0
	if (ctx.cr6.lt) goto loc_881248A0;
	// lwz r10,120(r31)
	ctx.current_instruction = 0x88124880;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r9,116(r31)
	ctx.current_instruction = 0x88124884;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// ld r11,40(r31)
	ctx.current_instruction = 0x88124888;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,120(r31)
	ctx.current_instruction = 0x88124894;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// cmpld cr6,r30,r9
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x88124808
	if (ctx.cr6.lt) goto loc_88124808;
loc_881248A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125C48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88125C48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88125C48) {
			switch (rex_dispatch_address) {
				case 0x88125C50:
				case 0x88125C6C:
				case 0x88125C8C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125C48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125C50: goto loc_88125C50;
		case 0x88125C6C: goto loc_88125C6C;
		case 0x88125C8C: goto loc_88125C8C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88125C50;
	__savegprlr_27(ctx, base);
loc_88125C50:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88125C50;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r4,8992(r11)
	ctx.current_instruction = 0x88125C64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8992);
	// bl 0x880cb398
	ctx.lr = 0x88125C6C;
	sub_880CB398(ctx, base);
loc_88125C6C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125d3c
	if (ctx.cr6.lt) goto loc_88125D3C;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88125C74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88125d34
	if (ctx.cr6.eq) goto loc_88125D34;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r4,9000(r11)
	ctx.current_instruction = 0x88125C84;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 9000);
	// bl 0x880cb150
	ctx.lr = 0x88125C8C;
	sub_880CB150(ctx, base);
loc_88125C8C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88125d34
	if (!ctx.cr6.eq) goto loc_88125D34;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// stw r3,44(r31)
	ctx.current_instruction = 0x88125C98;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// lis r9,-30702
	ctx.r9.s64 = -2012086272;
	// addi r11,r11,19624
	ctx.r11.s64 = ctx.r11.s64 + 19624;
	// addi r10,r10,21992
	ctx.r10.s64 = ctx.r10.s64 + 21992;
	// addi r9,r9,22256
	ctx.r9.s64 = ctx.r9.s64 + 22256;
	// stw r11,0(r31)
	ctx.current_instruction = 0x88125CB0;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-30702
	ctx.r8.s64 = -2012086272;
	// stw r10,4(r31)
	ctx.current_instruction = 0x88125CB8;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lis r7,-30702
	ctx.r7.s64 = -2012086272;
	// stw r9,8(r31)
	ctx.current_instruction = 0x88125CC0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lis r6,-30702
	ctx.r6.s64 = -2012086272;
	// lis r5,-30702
	ctx.r5.s64 = -2012086272;
	// lis r4,-30702
	ctx.r4.s64 = -2012086272;
	// lis r29,-30702
	ctx.r29.s64 = -2012086272;
	// lis r28,-30702
	ctx.r28.s64 = -2012086272;
	// lis r27,-30702
	ctx.r27.s64 = -2012086272;
	// addi r8,r8,23008
	ctx.r8.s64 = ctx.r8.s64 + 23008;
	// addi r7,r7,23016
	ctx.r7.s64 = ctx.r7.s64 + 23016;
	// addi r6,r6,23336
	ctx.r6.s64 = ctx.r6.s64 + 23336;
	// stw r8,12(r31)
	ctx.current_instruction = 0x88125CE8;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r5,r5,22264
	ctx.r5.s64 = ctx.r5.s64 + 22264;
	// stw r7,16(r31)
	ctx.current_instruction = 0x88125CF0;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// addi r4,r4,22432
	ctx.r4.s64 = ctx.r4.s64 + 22432;
	// stw r6,20(r31)
	ctx.current_instruction = 0x88125CF8;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// addi r11,r29,19936
	ctx.r11.s64 = ctx.r29.s64 + 19936;
	// stw r5,24(r31)
	ctx.current_instruction = 0x88125D00;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// addi r10,r28,22792
	ctx.r10.s64 = ctx.r28.s64 + 22792;
	// stw r4,28(r31)
	ctx.current_instruction = 0x88125D08;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// addi r9,r27,22120
	ctx.r9.s64 = ctx.r27.s64 + 22120;
	// stw r11,32(r31)
	ctx.current_instruction = 0x88125D10;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	ctx.current_instruction = 0x88125D14;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	ctx.current_instruction = 0x88125D18;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.current_instruction = 0x88125D1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x88125d3c
	if (!ctx.cr6.eq) goto loc_88125D3C;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88125D34:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
loc_88125D3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881292A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881292A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881292A0;
	ctx.current_instruction = 0x881292A0;
	PPCRegister temp{};
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f12,6732(r11)
	ctx.current_instruction = 0x881292A4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x881292b8
	if (!ctx.cr6.gt) goto loc_881292B8;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// b 0x881292bc
	goto loc_881292BC;
loc_881292B8:
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_881292BC:
	// fcmpu cr6,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// ble cr6,0x881292cc
	if (!ctx.cr6.gt) goto loc_881292CC;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// b 0x881292d0
	goto loc_881292D0;
loc_881292CC:
	// fneg f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_881292D0:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x881292f0
	if (!ctx.cr6.gt) goto loc_881292F0;
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x881292e8
	if (!ctx.cr6.gt) goto loc_881292E8;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x881292fc
	goto loc_881292FC;
loc_881292E8:
	// fneg f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// b 0x881292fc
	goto loc_881292FC;
loc_881292F0:
	// fcmpu cr6,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bgt cr6,0x881292fc
	if (ctx.cr6.gt) goto loc_881292FC;
	// fneg f2,f2
	ctx.f2.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_881292FC:
	// lfs f0,132(r3)
	ctx.current_instruction = 0x881292FC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x88129328
	if (ctx.cr6.lt) goto loc_88129328;
	// lfs f0,140(r3)
	ctx.current_instruction = 0x88129308;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f12,144(r3)
	ctx.current_instruction = 0x88129310;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r3)
	ctx.current_instruction = 0x88129314;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f9,f10,f13,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// fdivs f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f2.f64));
	// b 0x88129358
	goto loc_88129358;
loc_88129328:
	// lfs f1,108(r3)
	ctx.current_instruction = 0x88129328;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,112(r3)
	ctx.current_instruction = 0x8812932C;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x88129348
	if (ctx.cr6.gt) goto loc_88129348;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_88129348:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,12432(r11)
	ctx.current_instruction = 0x8812934C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12432);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_88129358:
	// lfs f0,112(r3)
	ctx.current_instruction = 0x88129358;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x88129370
	if (ctx.cr6.gt) goto loc_88129370;
	// lfs f13,116(r3)
	ctx.current_instruction = 0x88129364;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,120(r3)
	ctx.current_instruction = 0x88129368;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// b 0x88129378
	goto loc_88129378;
loc_88129370:
	// lfs f13,124(r3)
	ctx.current_instruction = 0x88129370;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,128(r3)
	ctx.current_instruction = 0x88129374;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
loc_88129378:
	// fmuls f12,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f10,f11,f0,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f10,112(r3)
	ctx.current_instruction = 0x88129380;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fmuls f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// lfs f0,104(r3)
	ctx.current_instruction = 0x8812938C;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x881293a0
	if (!ctx.cr6.gt) goto loc_881293A0;
	// fdivs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// stfs f0,112(r3)
	ctx.current_instruction = 0x8812939C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
loc_881293A0:
	// lfs f1,112(r3)
	ctx.current_instruction = 0x881293A0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812C388) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8812C388);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812C388;
	ctx.current_instruction = 0x8812C388;
	// xoris r10,r10,43894
	ctx.r10.u64 = ctx.r10.u64 ^ 2876637184;
	// xori r10,r10,14558
	ctx.r10.u64 = ctx.r10.u64 ^ 14558;
	// b 0x8812c100
	sub_8812C100(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812C9E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812C9E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812C9E8) {
			switch (rex_dispatch_address) {
				case 0x8812C9F0:
				case 0x8812CC50:
				case 0x8812CC7C:
				case 0x8812CDD8:
				case 0x8812CE2C:
				case 0x8812CE44:
				case 0x8812CE6C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812C9E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812C9F0: goto loc_8812C9F0;
		case 0x8812CC50: goto loc_8812CC50;
		case 0x8812CC7C: goto loc_8812CC7C;
		case 0x8812CDD8: goto loc_8812CDD8;
		case 0x8812CE2C: goto loc_8812CE2C;
		case 0x8812CE44: goto loc_8812CE44;
		case 0x8812CE6C: goto loc_8812CE6C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8812C9F0;
	__savegprlr_14(ctx, base);
loc_8812C9F0:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x8812C9F0;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r3)
	ctx.current_instruction = 0x8812C9F4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r3,276(r1)
	ctx.current_instruction = 0x8812CA00;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// lhz r29,34(r25)
	ctx.current_instruction = 0x8812CA10;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// mr r14,r20
	ctx.r14.u64 = ctx.r20.u64;
	// lwz r26,256(r25)
	ctx.current_instruction = 0x8812CA18;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// lwz r11,228(r25)
	ctx.current_instruction = 0x8812CA1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 228);
	// mullw r23,r26,r29
	ctx.r23.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812ca94
	if (!ctx.cr6.eq) goto loc_8812CA94;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8812ca88
	if (!ctx.cr6.gt) goto loc_8812CA88;
	// mulli r8,r4,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// li r17,1
	ctx.r17.s64 = 1;
loc_8812CA40:
	// lwz r10,320(r25)
	ctx.current_instruction = 0x8812CA40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// lwz r7,256(r25)
	ctx.current_instruction = 0x8812CA48;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// lwz r10,424(r6)
	ctx.current_instruction = 0x8812CA5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 424);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,8(r10)
	ctx.current_instruction = 0x8812CA68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// sth r4,0(r9)
	ctx.current_instruction = 0x8812CA6C;
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r4.u16);
	// lwz r7,12(r10)
	ctx.current_instruction = 0x8812CA70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// sth r20,0(r7)
	ctx.current_instruction = 0x8812CA74;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r20.u16);
	// sth r17,0(r10)
	ctx.current_instruction = 0x8812CA78;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r17.u16);
	// lhz r6,34(r25)
	ctx.current_instruction = 0x8812CA7C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8812ca40
	if (ctx.cr6.lt) goto loc_8812CA40;
loc_8812CA88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8812CA94:
	// lwz r10,176(r25)
	ctx.current_instruction = 0x8812CA94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 176);
	// li r17,1
	ctx.r17.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8812cb28
	if (!ctx.cr6.eq) goto loc_8812CB28;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8812cabc
	if (!ctx.cr6.eq) goto loc_8812CABC;
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// mr r14,r17
	ctx.r14.u64 = ctx.r17.u64;
	// add r18,r17,r17
	ctx.r18.u64 = ctx.r17.u64 + ctx.r17.u64;
	// b 0x8812cb4c
	goto loc_8812CB4C;
loc_8812CABC:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8812cad4
	if (!ctx.cr6.eq) goto loc_8812CAD4;
	// li r14,2
	ctx.r14.s64 = 2;
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// add r18,r14,r17
	ctx.r18.u64 = ctx.r14.u64 + ctx.r17.u64;
	// b 0x8812cb4c
	goto loc_8812CB4C;
loc_8812CAD4:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8812caf0
	if (!ctx.cr6.gt) goto loc_8812CAF0;
loc_8812CAE0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8812cae0
	if (ctx.cr6.gt) goto loc_8812CAE0;
loc_8812CAF0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8812cb18
	if (!ctx.cr6.gt) goto loc_8812CB18;
loc_8812CB08:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8812cb08
	if (ctx.cr6.gt) goto loc_8812CB08;
loc_8812CB18:
	// addi r14,r11,1
	ctx.r14.s64 = ctx.r11.s64 + 1;
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// add r18,r14,r20
	ctx.r18.u64 = ctx.r14.u64 + ctx.r20.u64;
	// b 0x8812cb4c
	goto loc_8812CB4C;
loc_8812CB28:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8812cb48
	if (!ctx.cr6.gt) goto loc_8812CB48;
loc_8812CB38:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8812cb38
	if (ctx.cr6.gt) goto loc_8812CB38;
loc_8812CB48:
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
loc_8812CB4C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8812cbfc
	if (!ctx.cr6.gt) goto loc_8812CBFC;
	// lwz r28,320(r25)
	ctx.current_instruction = 0x8812CB54;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// mulli r27,r16,28
	ctx.r27.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(28));
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_8812CB60:
	// mulli r11,r30,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lwz r11,424(r11)
	ctx.current_instruction = 0x8812CB74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhzx r7,r11,r27
	ctx.current_instruction = 0x8812CB7C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x8812cbc4
	if (ctx.cr6.lt) goto loc_8812CBC4;
	// lwz r7,8(r31)
	ctx.current_instruction = 0x8812CB8C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8812CB98:
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhzx r24,r7,r11
	ctx.current_instruction = 0x8812CB9C;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r9,r24,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r24.u64;
	// lhz r6,2(r6)
	ctx.current_instruction = 0x8812CBB0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// blt cr6,0x8812cb98
	if (ctx.cr6.lt) goto loc_8812CB98;
loc_8812CBC4:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8812cbe0
	if (!ctx.cr6.lt) goto loc_8812CBE0;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x8812CBCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r10,r11
	ctx.current_instruction = 0x8812CBD4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// subf r23,r6,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r6.u64;
loc_8812CBE0:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8812cb60
	if (ctx.cr6.lt) goto loc_8812CB60;
loc_8812CBFC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8812cfec
	if (!ctx.cr6.gt) goto loc_8812CFEC;
	// addi r21,r22,224
	ctx.r21.s64 = ctx.r22.s64 + 224;
loc_8812CC08:
	// stw r20,84(r1)
	ctx.current_instruction = 0x8812CC08;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// rotlwi r11,r26,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// stw r20,80(r1)
	ctx.current_instruction = 0x8812CC10;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// add r10,r29,r18
	ctx.r10.u64 = ctx.r29.u64 + ctx.r18.u64;
	// lwz r9,228(r25)
	ctx.current_instruction = 0x8812CC18;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 228);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// divw r7,r26,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r26.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r26.s32 / ctx.r9.s32 : 0);
	// andc r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// bl 0x88139190
	ctx.lr = 0x8812CC50;
	sub_88139190(ctx, base);
loc_8812CC50:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812d030
	if (ctx.cr6.lt) goto loc_8812D030;
	// lhz r11,34(r25)
	ctx.current_instruction = 0x8812CC58;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// lwz r10,256(r25)
	ctx.current_instruction = 0x8812CC5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r23,r9
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8812cc9c
	if (!ctx.cr6.eq) goto loc_8812CC9C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812CC7C;
	sub_8812C528(ctx, base);
loc_8812CC7C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812d030
	if (ctx.cr6.lt) goto loc_8812D030;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8812CC84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812cc98
	if (ctx.cr6.eq) goto loc_8812CC98;
	// stw r17,128(r22)
	ctx.current_instruction = 0x8812CC90;
	REX_STORE_U32(ctx.r22.u32 + 128, ctx.r17.u32);
	// b 0x8812cc9c
	goto loc_8812CC9C;
loc_8812CC98:
	// stw r20,128(r22)
	ctx.current_instruction = 0x8812CC98;
	REX_STORE_U32(ctx.r22.u32 + 128, ctx.r20.u32);
loc_8812CC9C:
	// lhz r5,34(r25)
	ctx.current_instruction = 0x8812CC9C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// lwz r11,256(r25)
	ctx.current_instruction = 0x8812CCA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// lwz r6,320(r25)
	ctx.current_instruction = 0x8812CCA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// extsh r22,r11
	ctx.r22.s64 = ctx.r11.s16;
	// ble cr6,0x8812ccf8
	if (!ctx.cr6.gt) goto loc_8812CCF8;
	// mulli r8,r16,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(28));
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// addi r11,r6,424
	ctx.r11.s64 = ctx.r6.s64 + 424;
loc_8812CCC0:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8812CCC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r7,r22
	ctx.r7.s64 = ctx.r22.s16;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,12(r4)
	ctx.current_instruction = 0x8812CCCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lhz r10,0(r10)
	ctx.current_instruction = 0x8812CCD0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x8812cce4
	if (!ctx.cr6.gt) goto loc_8812CCE4;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
loc_8812CCE4:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8812ccc0
	if (ctx.cr6.lt) goto loc_8812CCC0;
loc_8812CCF8:
	// lwz r11,276(r1)
	ctx.current_instruction = 0x8812CCF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,128(r11)
	ctx.current_instruction = 0x8812CCFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8812cd68
	if (!ctx.cr6.eq) goto loc_8812CD68;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8812CD08;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8812cd6c
	if (!ctx.cr6.gt) goto loc_8812CD6C;
	// mulli r8,r16,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(28));
	// extsh r7,r22
	ctx.r7.s64 = ctx.r22.s16;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// addi r11,r6,424
	ctx.r11.s64 = ctx.r6.s64 + 424;
loc_8812CD24:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8812CD24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,12(r10)
	ctx.current_instruction = 0x8812CD2C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r4,0(r6)
	ctx.current_instruction = 0x8812CD30;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8812cd48
	if (!ctx.cr6.eq) goto loc_8812CD48;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r17,84(r1)
	ctx.current_instruction = 0x8812CD44;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
loc_8812CD48:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8812cd24
	if (ctx.cr6.lt) goto loc_8812CD24;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bgt cr6,0x8812cd70
	if (ctx.cr6.gt) goto loc_8812CD70;
	// b 0x8812cd6c
	goto loc_8812CD6C;
loc_8812CD68:
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
loc_8812CD6C:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_8812CD70:
	// rotlwi r11,r23,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// divw r10,r23,r24
	ctx.r10.u64 = uint32_t((ctx.r24.s32 && !(ctx.r23.s32 == INT32_MIN && ctx.r24.s32 == -1)) ? ctx.r23.s32 / ctx.r24.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// extsh r8,r27
	ctx.r8.s64 = ctx.r27.s16;
	// andc r7,r24,r9
	ctx.r7.u64 = ctx.r24.u64 & ~ctx.r9.u64;
	// twllei r24,0
	if (ctx.r24.s32 == 0 || ctx.r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne cr6,0x8812cd9c
	if (!ctx.cr6.eq) goto loc_8812CD9C;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_8812CD9C:
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8812ce0c
	if (!ctx.cr6.eq) goto loc_8812CE0C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r24,24
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 24, ctx.xer);
	// li r31,24
	ctx.r31.s64 = 24;
	// bgt cr6,0x8812cdbc
	if (ctx.cr6.gt) goto loc_8812CDBC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8812CDBC:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8812ce0c
	if (ctx.cr6.eq) goto loc_8812CE0C;
loc_8812CDC8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812CDD8;
	sub_8812C528(ctx, base);
loc_8812CDD8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812d030
	if (ctx.cr6.lt) goto loc_8812D030;
	// lwz r10,88(r1)
	ctx.current_instruction = 0x8812CDE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r30,r31,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r31.u64;
	// li r31,24
	ctx.r31.s64 = 24;
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 24, ctx.xer);
	// or r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 | ctx.r28.u64;
	// bgt cr6,0x8812cdfc
	if (ctx.cr6.gt) goto loc_8812CDFC;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8812CDFC:
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// sld r28,r11,r10
	ctx.r28.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r10.u8 & 0x7F));
	// bne cr6,0x8812cdc8
	if (!ctx.cr6.eq) goto loc_8812CDC8;
loc_8812CE0C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8812cedc
	if (!ctx.cr6.eq) goto loc_8812CEDC;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bne cr6,0x8812ce3c
	if (!ctx.cr6.eq) goto loc_8812CE3C;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812CE2C;
	sub_8812C528(ctx, base);
loc_8812CE2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812d030
	if (ctx.cr6.lt) goto loc_8812D030;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812CE34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8812ce80
	goto loc_8812CE80;
loc_8812CE3C:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812CE44;
	sub_8812C528(ctx, base);
loc_8812CE44:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812d030
	if (ctx.cr6.lt) goto loc_8812D030;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812CE4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r15,16
	ctx.r10.u64 = ctx.r15.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8812ce80
	if (ctx.cr6.lt) goto loc_8812CE80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8812c528
	ctx.lr = 0x8812CE6C;
	sub_8812C528(ctx, base);
loc_8812CE6C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812d030
	if (ctx.cr6.lt) goto loc_8812D030;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812CE74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x8812CE7C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8812CE80:
	// lwz r10,176(r25)
	ctx.current_instruction = 0x8812CE80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8812ceb0
	if (!ctx.cr6.eq) goto loc_8812CEB0;
	// lwz r9,256(r25)
	ctx.current_instruction = 0x8812CE8C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// slw r8,r17,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r11.u8 & 0x3F));
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// andc r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x8812ced8
	goto loc_8812CED8;
loc_8812CEB0:
	// lwz r10,256(r25)
	ctx.current_instruction = 0x8812CEB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,228(r25)
	ctx.current_instruction = 0x8812CEB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 228);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r7,r10,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mullw r5,r7,r9
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// andc r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// extsh r27,r5
	ctx.r27.s64 = ctx.r5.s16;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_8812CED8:
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
loc_8812CEDC:
	// lwz r11,236(r25)
	ctx.current_instruction = 0x8812CEDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 236);
	// extsh r6,r27
	ctx.r6.s64 = ctx.r27.s16;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8812cfdc
	if (ctx.cr6.lt) goto loc_8812CFDC;
	// lwz r26,256(r25)
	ctx.current_instruction = 0x8812CEEC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x8812cfdc
	if (ctx.cr6.gt) goto loc_8812CFDC;
	// lhz r10,34(r25)
	ctx.current_instruction = 0x8812CEF8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r11,320(r25)
	ctx.current_instruction = 0x8812CF00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8812cfdc
	if (ctx.cr6.eq) goto loc_8812CFDC;
	// mulli r4,r16,28
	ctx.r4.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(28));
	// addi r7,r11,424
	ctx.r7.s64 = ctx.r11.s64 + 424;
loc_8812CF14:
	// lwz r11,0(r7)
	ctx.current_instruction = 0x8812CF14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x8812CF1C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.current_instruction = 0x8812CF20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8812CF28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x8812cfdc
	if (ctx.cr6.gt) goto loc_8812CFDC;
	// lhz r31,0(r10)
	ctx.current_instruction = 0x8812CF34;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r30,r22
	ctx.r30.s64 = ctx.r22.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8812cfa4
	if (!ctx.cr6.eq) goto loc_8812CFA4;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// extsw r31,r24
	ctx.r31.s64 = ctx.r24.s32;
	// sld r31,r17,r31
	ctx.r31.u64 = ctx.r31.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r31.u8 & 0x7F));
	// and r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 & ctx.r28.u64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x8812cfa4
	if (ctx.cr6.eq) goto loc_8812CFA4;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bge cr6,0x8812cfdc
	if (!ctx.cr6.lt) goto loc_8812CFDC;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r23,r6,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// sthx r27,r31,r8
	ctx.current_instruction = 0x8812CF70;
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r27.u16);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x8812CF74;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r8,0(r11)
	ctx.current_instruction = 0x8812CF7C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lhz r11,0(r10)
	ctx.current_instruction = 0x8812CF80;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// sth r11,0(r10)
	ctx.current_instruction = 0x8812CF8C;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// blt 0x8812cfdc
	if (ctx.cr0.lt) goto loc_8812CFDC;
	// lwz r26,256(r25)
	ctx.current_instruction = 0x8812CF94;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x8812cfdc
	if (ctx.cr6.gt) goto loc_8812CFDC;
loc_8812CFA4:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lhz r29,34(r25)
	ctx.current_instruction = 0x8812CFA8;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// addi r7,r7,1776
	ctx.r7.s64 = ctx.r7.s64 + 1776;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8812cf14
	if (ctx.cr6.lt) goto loc_8812CF14;
	// cmpw cr6,r23,r19
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x8812cfdc
	if (!ctx.cr6.lt) goto loc_8812CFDC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8812cfec
	if (!ctx.cr6.gt) goto loc_8812CFEC;
	// lwz r22,276(r1)
	ctx.current_instruction = 0x8812CFD4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// b 0x8812cc08
	goto loc_8812CC08;
loc_8812CFDC:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8812CFEC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8812d030
	if (!ctx.cr6.gt) goto loc_8812D030;
	// mulli r8,r16,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(28));
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8812CFFC:
	// lwz r9,320(r25)
	ctx.current_instruction = 0x8812CFFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 320);
	// mulli r10,r11,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lwz r10,424(r10)
	ctx.current_instruction = 0x8812D010;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 424);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,12(r6)
	ctx.current_instruction = 0x8812D01C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// sth r20,0(r5)
	ctx.current_instruction = 0x8812D020;
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r20.u16);
	// lhz r4,34(r25)
	ctx.current_instruction = 0x8812D024;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r25.u32 + 34);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8812cffc
	if (ctx.cr6.lt) goto loc_8812CFFC;
loc_8812D030:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813FAE0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813FAE0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813FAE0) {
			switch (rex_dispatch_address) {
				case 0x8813FAE8:
				case 0x8813FB00:
				case 0x8813FB24:
				case 0x8813FB40:
				case 0x8813FB5C:
				case 0x8813FB64:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813FAE0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813FAE8: goto loc_8813FAE8;
		case 0x8813FB00: goto loc_8813FB00;
		case 0x8813FB24: goto loc_8813FB24;
		case 0x8813FB40: goto loc_8813FB40;
		case 0x8813FB5C: goto loc_8813FB5C;
		case 0x8813FB64: goto loc_8813FB64;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8813FAE8;
	__savegprlr_29(ctx, base);
loc_8813FAE8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8813FAE8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.current_instruction = 0x8813FAEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x8813FAF4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,68(r11)
	ctx.current_instruction = 0x8813FAF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x88151cf8
	ctx.lr = 0x8813FB00;
	sub_88151CF8(ctx, base);
loc_8813FB00:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813FB00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r11)
	ctx.current_instruction = 0x8813FB04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8813fb28
	if (ctx.cr6.eq) goto loc_8813FB28;
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r3,4228(r11)
	ctx.current_instruction = 0x8813FB1C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4228);
	// bl 0x880cb318
	ctx.lr = 0x8813FB24;
	sub_880CB318(ctx, base);
loc_8813FB24:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813FB24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8813FB28:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,84(r11)
	ctx.current_instruction = 0x8813FB2C;
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r30.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813FB30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,4228(r11)
	ctx.current_instruction = 0x8813FB34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4228);
	// lwz r4,4232(r11)
	ctx.current_instruction = 0x8813FB38;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4232);
	// bl 0x880caeb0
	ctx.lr = 0x8813FB40;
	sub_880CAEB0(ctx, base);
loc_8813FB40:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813FB40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8813fb5c
	if (ctx.cr6.eq) goto loc_8813FB5C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4228(r11)
	ctx.current_instruction = 0x8813FB50;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4228);
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x880cb318
	ctx.lr = 0x8813FB5C;
	sub_880CB318(ctx, base);
loc_8813FB5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8813f6e8
	ctx.lr = 0x8813FB64;
	sub_8813F6E8(ctx, base);
loc_8813FB64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8813fb88
	if (ctx.cr6.lt) goto loc_8813FB88;
	// stw r30,0(r31)
	ctx.current_instruction = 0x8813FB6C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	ctx.current_instruction = 0x8813FB70;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	ctx.current_instruction = 0x8813FB74;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	ctx.current_instruction = 0x8813FB78;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	ctx.current_instruction = 0x8813FB7C;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	ctx.current_instruction = 0x8813FB80;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,32(r31)
	ctx.current_instruction = 0x8813FB84;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8813FB88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88141198) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88141198;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88141198) {
			switch (rex_dispatch_address) {
				case 0x881411B4:
				case 0x881411BC:
				case 0x881411C4:
				case 0x881411CC:
				case 0x881411D4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88141198;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881411B4: goto loc_881411B4;
		case 0x881411BC: goto loc_881411BC;
		case 0x881411C4: goto loc_881411C4;
		case 0x881411CC: goto loc_881411CC;
		case 0x881411D4: goto loc_881411D4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8814119C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881411A0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881411A4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.current_instruction = 0x881411AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x88125f38
	ctx.lr = 0x881411B4;
	sub_88125F38(ctx, base);
loc_881411B4:
	// lwz r3,52(r31)
	ctx.current_instruction = 0x881411B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x88125f38
	ctx.lr = 0x881411BC;
	sub_88125F38(ctx, base);
loc_881411BC:
	// lwz r3,36(r31)
	ctx.current_instruction = 0x881411BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88125f38
	ctx.lr = 0x881411C4;
	sub_88125F38(ctx, base);
loc_881411C4:
	// lwz r3,40(r31)
	ctx.current_instruction = 0x881411C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x88125f38
	ctx.lr = 0x881411CC;
	sub_88125F38(ctx, base);
loc_881411CC:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x881411CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88125f38
	ctx.lr = 0x881411D4;
	sub_88125F38(ctx, base);
loc_881411D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881411D8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881411E0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88141E20) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88141E20);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88141E20;
	ctx.current_instruction = 0x88141E20;
	// lwz r10,120(r3)
	ctx.current_instruction = 0x88141E20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,40(r4)
	ctx.current_instruction = 0x88141E24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88141e3c
	if (!ctx.cr6.eq) goto loc_88141E3C;
	// lwz r10,32(r4)
	ctx.current_instruction = 0x88141E30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_88141E3C:
	// lwz r10,0(r4)
	ctx.current_instruction = 0x88141E3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x88141e98
	if (!ctx.cr6.eq) goto loc_88141E98;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,16
	ctx.r8.s64 = 16;
	// sth r9,28(r4)
	ctx.current_instruction = 0x88141E50;
	REX_STORE_U16(ctx.r4.u32 + 28, ctx.r9.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,30(r4)
	ctx.current_instruction = 0x88141E58;
	REX_STORE_U16(ctx.r4.u32 + 30, ctx.r8.u16);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r10,0
	ctx.r10.s64 = 0;
loc_88141E64:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhzx r7,r9,r11
	ctx.current_instruction = 0x88141E70;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sthx r3,r9,r11
	ctx.current_instruction = 0x88141E84;
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u16);
	// lwz r9,0(r4)
	ctx.current_instruction = 0x88141E88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88141e64
	if (ctx.cr6.lt) goto loc_88141E64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88141E98:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,8
	ctx.r8.s64 = 8;
	// sth r9,28(r4)
	ctx.current_instruction = 0x88141EA0;
	REX_STORE_U16(ctx.r4.u32 + 28, ctx.r9.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,30(r4)
	ctx.current_instruction = 0x88141EA8;
	REX_STORE_U16(ctx.r4.u32 + 30, ctx.r8.u16);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r10,0
	ctx.r10.s64 = 0;
loc_88141EB4:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhzx r7,r9,r11
	ctx.current_instruction = 0x88141EC0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// sthx r5,r9,r11
	ctx.current_instruction = 0x88141ED0;
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u16);
	// lwz r3,0(r4)
	ctx.current_instruction = 0x88141ED4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x88141eb4
	if (ctx.cr6.lt) goto loc_88141EB4;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88143AE0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88143AE0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88143AE0;
	ctx.current_instruction = 0x88143AE0;
	// std r30,-16(r1)
	ctx.current_instruction = 0x88143AE0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x88143AE4;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r4)
	ctx.current_instruction = 0x88143AE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r31,0(r6)
	ctx.current_instruction = 0x88143AEC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,0(r7)
	ctx.current_instruction = 0x88143AF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// lwz r8,0(r8)
	ctx.current_instruction = 0x88143AF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// bge cr6,0x88143b5c
	if (!ctx.cr6.lt) goto loc_88143B5C;
	// subf r11,r10,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r10.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r9,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88143B18:
	// lwz r11,0(r9)
	ctx.current_instruction = 0x88143B18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x88143b2c
	if (!ctx.cr6.lt) goto loc_88143B2C;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// b 0x88143b38
	goto loc_88143B38;
loc_88143B2C:
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x88143b38
	if (!ctx.cr6.gt) goto loc_88143B38;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_88143B38:
	// sth r11,0(r3)
	ctx.current_instruction = 0x88143B38;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhz r8,0(r31)
	ctx.current_instruction = 0x88143B40;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// sth r11,0(r31)
	ctx.current_instruction = 0x88143B54;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bdnz 0x88143b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88143B18;
loc_88143B5C:
	// stw r10,0(r4)
	ctx.current_instruction = 0x88143B5C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r31,0(r6)
	ctx.current_instruction = 0x88143B60;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stw r3,0(r7)
	ctx.current_instruction = 0x88143B64;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88143B68;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88143B6C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88144E68) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88144E68);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88144E68;
	ctx.current_instruction = 0x88144E68;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,24608
	ctx.r5.s64 = ctx.r11.s64 + 24608;
loc_88144E78:
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
loc_88144E80:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x88144ea0
	if (!ctx.cr6.eq) goto loc_88144EA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7F;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x88144e80
	if (ctx.cr6.lt) goto loc_88144E80;
loc_88144EA0:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
loc_88144EB0:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// and r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88144ed0
	if (!ctx.cr6.eq) goto loc_88144ED0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7F;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x88144eb0
	if (ctx.cr6.lt) goto loc_88144EB0;
loc_88144ED0:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r6,r5
	ctx.current_instruction = 0x88144EE8;
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r7.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// blt cr6,0x88144e78
	if (ctx.cr6.lt) goto loc_88144E78;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88147530) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88147530;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88147530) {
			switch (rex_dispatch_address) {
				case 0x88147538:
				case 0x88147540:
				case 0x88147558:
				case 0x881475A8:
				case 0x88147628:
				case 0x88147638:
				case 0x88147C10:
				case 0x881482A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88147530;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88147538: goto loc_88147538;
		case 0x88147540: goto loc_88147540;
		case 0x88147558: goto loc_88147558;
		case 0x881475A8: goto loc_881475A8;
		case 0x88147628: goto loc_88147628;
		case 0x88147638: goto loc_88147638;
		case 0x88147C10: goto loc_88147C10;
		case 0x881482A8: goto loc_881482A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x88147538;
	__savegprlr_16(ctx, base);
loc_88147538:
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x881ef288
	ctx.lr = 0x88147540;
	__savefpr_28(ctx, base);
loc_88147540:
	// stwu r1,-368(r1)
	ctx.current_instruction = 0x88147540;
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,296(r3)
	ctx.current_instruction = 0x88147548;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x8812dca8
	ctx.lr = 0x88147558;
	sub_8812DCA8(ctx, base);
loc_88147558:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,156(r18)
	ctx.current_instruction = 0x8814755C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,40(r28)
	ctx.current_instruction = 0x88147560;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r19,0(r18)
	ctx.current_instruction = 0x88147568;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r22,144(r18)
	ctx.current_instruction = 0x88147570;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r18.u32 + 144);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r21,12(r18)
	ctx.current_instruction = 0x88147578;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r18.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,6708(r11)
	ctx.current_instruction = 0x88147580;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// lwz r17,20(r18)
	ctx.current_instruction = 0x88147584;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// fdivs f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f31,f28,f1
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// bne cr6,0x8814763c
	if (!ctx.cr6.eq) goto loc_8814763C;
	// lwz r11,264(r28)
	ctx.current_instruction = 0x88147594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x881475A8;
	sub_88052D90(ctx, base);
loc_881475A8:
	// lwz r10,264(r28)
	ctx.current_instruction = 0x881475A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// lwz r9,268(r28)
	ctx.current_instruction = 0x881475AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 268);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88147604
	if (!ctx.cr6.lt) goto loc_88147604;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r19,-4
	ctx.r9.s64 = ctx.r19.s64 + -4;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// subf r7,r22,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r22.u64;
loc_881475C8:
	// lwzu r8,4(r9)
	ctx.current_instruction = 0x881475C8;
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lfsx f0,r7,r11
	ctx.current_instruction = 0x881475CC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,80(r1)
	ctx.current_instruction = 0x881475D8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x881475DC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,0(r11)
	ctx.current_instruction = 0x881475F0;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r6,268(r28)
	ctx.current_instruction = 0x881475F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 268);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881475c8
	if (ctx.cr6.lt) goto loc_881475C8;
loc_88147604:
	// lhz r11,118(r18)
	ctx.current_instruction = 0x88147604;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 118);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,268(r28)
	ctx.current_instruction = 0x8814760C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 268);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88147628;
	sub_88052D90(ctx, base);
loc_88147628:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x881ef2d4
	ctx.lr = 0x88147638;
	__restfpr_28(ctx, base);
loc_88147638:
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_8814763C:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r6,264(r28)
	ctx.current_instruction = 0x88147640;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// lfs f0,292(r28)
	ctx.current_instruction = 0x88147648;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,15470
	ctx.r9.s64 = 1013841920;
	// ori r30,r10,26125
	ctx.r30.u64 = ctx.r10.u64 | 26125;
	// ori r31,r9,62303
	ctx.r31.u64 = ctx.r9.u64 | 62303;
	// lfs f29,7872(r11)
	ctx.current_instruction = 0x88147658;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7872);
	ctx.f29.f64 = double(temp.f32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// fmuls f30,f0,f29
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// blt cr6,0x881477e0
	if (ctx.cr6.lt) goto loc_881477E0;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r7,r6,-3
	ctx.r7.s64 = ctx.r6.s64 + -3;
	// addi r10,r22,-4
	ctx.r10.s64 = ctx.r22.s64 + -4;
loc_88147674:
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88147674;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r5,0(r11)
	ctx.current_instruction = 0x8814767C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r9,r30
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	ctx.current_instruction = 0x8814768C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	ctx.current_instruction = 0x8814769C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r5,264(r28)
	ctx.current_instruction = 0x881476A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// lfsx f0,r4,r25
	ctx.current_instruction = 0x881476AC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// std r3,80(r1)
	ctx.current_instruction = 0x881476B0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x881476B4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,4(r10)
	ctx.current_instruction = 0x881476CC;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r5,0(r11)
	ctx.current_instruction = 0x881476D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.current_instruction = 0x881476D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r3,r4,r30
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	ctx.current_instruction = 0x881476E4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	ctx.current_instruction = 0x881476F4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,264(r28)
	ctx.current_instruction = 0x881476F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// lfsx f7,r3,r25
	ctx.current_instruction = 0x88147704;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	ctx.f7.f64 = double(temp.f32);
	// std r9,88(r1)
	ctx.current_instruction = 0x88147708;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f6,88(r1)
	ctx.current_instruction = 0x8814770C;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmuls f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,8(r10)
	ctx.current_instruction = 0x88147724;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r5,0(r11)
	ctx.current_instruction = 0x88147728;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.current_instruction = 0x8814772C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r3,r4,r30
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	ctx.current_instruction = 0x8814773C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	ctx.current_instruction = 0x8814774C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,264(r28)
	ctx.current_instruction = 0x88147750;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// lfsx f0,r3,r25
	ctx.current_instruction = 0x8814775C;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// std r9,96(r1)
	ctx.current_instruction = 0x88147760;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.current_instruction = 0x88147764;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,12(r10)
	ctx.current_instruction = 0x8814777C;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r5,0(r11)
	ctx.current_instruction = 0x88147780;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.current_instruction = 0x88147784;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r3,r4,r30
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	ctx.current_instruction = 0x88147794;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,0(r11)
	ctx.current_instruction = 0x881477A0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// lwz r4,264(r28)
	ctx.current_instruction = 0x881477A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r3,r25
	ctx.current_instruction = 0x881477B0;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	ctx.f7.f64 = double(temp.f32);
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// std r9,104(r1)
	ctx.current_instruction = 0x881477B8;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f6,104(r1)
	ctx.current_instruction = 0x881477BC;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmuls f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsu f1,16(r10)
	ctx.current_instruction = 0x881477D8;
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x88147674
	if (ctx.cr6.lt) goto loc_88147674;
loc_881477E0:
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88147860
	if (!ctx.cr6.lt) goto loc_88147860;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r29,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r29.u64;
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + ctx.r22.u64;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88147804:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88147804;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.current_instruction = 0x88147808;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r6,r10,r30
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	ctx.current_instruction = 0x88147818;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r10,0(r11)
	ctx.current_instruction = 0x88147828;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,264(r28)
	ctx.current_instruction = 0x8814782C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lfsx f12,r8,r25
	ctx.current_instruction = 0x88147838;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	ctx.f12.f64 = double(temp.f32);
	// std r3,104(r1)
	ctx.current_instruction = 0x8814783C;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f0,104(r1)
	ctx.current_instruction = 0x88147840;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfsu f8,4(r9)
	ctx.current_instruction = 0x88147858;
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x88147804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88147804;
loc_88147860:
	// lwz r26,404(r28)
	ctx.current_instruction = 0x88147860;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r28.u32 + 404);
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x88147bb0
	if (!ctx.cr6.lt) goto loc_88147BB0;
	// subf r11,r29,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x88147ae8
	if (ctx.cr6.lt) goto loc_88147AE8;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r27,r26,-3
	ctx.r27.s64 = ctx.r26.s64 + -3;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r29,2
	ctx.r7.s64 = ctx.r29.s64 + 2;
	// addi r8,r19,-4
	ctx.r8.s64 = ctx.r19.s64 + -4;
	// add r10,r6,r22
	ctx.r10.u64 = ctx.r6.u64 + ctx.r22.u64;
	// subf r3,r22,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r22.u64;
loc_881478A8:
	// lwz r6,4(r11)
	ctx.current_instruction = 0x881478A8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r20,0(r11)
	ctx.current_instruction = 0x881478AC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r5,r6,r30
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	ctx.current_instruction = 0x881478BC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	ctx.current_instruction = 0x881478C8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// subf r6,r20,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r20.u64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,104(r1)
	ctx.current_instruction = 0x881478D4;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.current_instruction = 0x881478D8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r6,308(r28)
	ctx.current_instruction = 0x881478E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r5,4(r6)
	ctx.current_instruction = 0x881478EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// blt cr6,0x88147904
	if (ctx.cr6.lt) goto loc_88147904;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_88147904:
	// lwz r6,4(r8)
	ctx.current_instruction = 0x88147904;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f13,4(r4)
	ctx.current_instruction = 0x88147908;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r20,r7,-1
	ctx.r20.s64 = ctx.r7.s64 + -1;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,96(r1)
	ctx.current_instruction = 0x88147914;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f12,96(r1)
	ctx.current_instruction = 0x88147918;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,-4(r10)
	ctx.current_instruction = 0x88147930;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r16,0(r11)
	ctx.current_instruction = 0x88147934;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.current_instruction = 0x88147938;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r6,r30
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	ctx.current_instruction = 0x88147944;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	ctx.current_instruction = 0x88147954;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// subf r5,r16,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r16.u64;
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// std r6,88(r1)
	ctx.current_instruction = 0x88147960;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f6,88(r1)
	ctx.current_instruction = 0x88147964;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r6,308(r28)
	ctx.current_instruction = 0x88147968;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,4(r5)
	ctx.current_instruction = 0x88147974;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r20,r6
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r6.s32, ctx.xer);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f0,f4,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// blt cr6,0x88147990
	if (ctx.cr6.lt) goto loc_88147990;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_88147990:
	// lwz r6,8(r8)
	ctx.current_instruction = 0x88147990;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lfsx f13,r3,r10
	ctx.current_instruction = 0x88147994;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	ctx.current_instruction = 0x8814799C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x881479A0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,0(r10)
	ctx.current_instruction = 0x881479B8;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r20,0(r11)
	ctx.current_instruction = 0x881479BC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.current_instruction = 0x881479C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r6,r30
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	ctx.current_instruction = 0x881479CC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	ctx.current_instruction = 0x881479DC;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// subf r5,r20,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r20.u64;
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// std r6,112(r1)
	ctx.current_instruction = 0x881479E8;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f6,112(r1)
	ctx.current_instruction = 0x881479EC;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r6,308(r28)
	ctx.current_instruction = 0x881479F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,4(r5)
	ctx.current_instruction = 0x881479FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f0,f4,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// blt cr6,0x88147a18
	if (ctx.cr6.lt) goto loc_88147A18;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_88147A18:
	// lwz r6,12(r8)
	ctx.current_instruction = 0x88147A18;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lfs f13,12(r4)
	ctx.current_instruction = 0x88147A1C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r20,r7,1
	ctx.r20.s64 = ctx.r7.s64 + 1;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,120(r1)
	ctx.current_instruction = 0x88147A28;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f12,120(r1)
	ctx.current_instruction = 0x88147A2C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,4(r10)
	ctx.current_instruction = 0x88147A44;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r16,0(r11)
	ctx.current_instruction = 0x88147A48;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.current_instruction = 0x88147A4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r6,r30
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	ctx.current_instruction = 0x88147A5C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r5,r16,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r16.u64;
	// stw r6,0(r11)
	ctx.current_instruction = 0x88147A6C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// std r6,128(r1)
	ctx.current_instruction = 0x88147A74;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f6,128(r1)
	ctx.current_instruction = 0x88147A78;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r6,308(r28)
	ctx.current_instruction = 0x88147A7C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,4(r5)
	ctx.current_instruction = 0x88147A88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r20,r6
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r6.s32, ctx.xer);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f0,f4,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// blt cr6,0x88147aa4
	if (ctx.cr6.lt) goto loc_88147AA4;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_88147AA4:
	// lwzu r6,16(r8)
	ctx.current_instruction = 0x88147AA4;
	ea = 16 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// lfsu f13,16(r4)
	ctx.current_instruction = 0x88147AA8;
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// std r6,136(r1)
	ctx.current_instruction = 0x88147AB8;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lfd f12,136(r1)
	ctx.current_instruction = 0x88147ABC;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,8(r10)
	ctx.current_instruction = 0x88147ADC;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x881478a8
	if (ctx.cr6.lt) goto loc_881478A8;
loc_88147AE8:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x88147bb0
	if (!ctx.cr6.lt) goto loc_88147BB0;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r29,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r29.u64;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// rlwinm r8,r23,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 + ctx.r22.u64;
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
	// subf r5,r22,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r22.u64;
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
loc_88147B1C:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88147B1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88147B20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r3,r10,r30
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// stw r9,4(r11)
	ctx.current_instruction = 0x88147B30;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r4,r4,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r10,0(r11)
	ctx.current_instruction = 0x88147B40;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,136(r1)
	ctx.current_instruction = 0x88147B48;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lwz r10,308(r28)
	ctx.current_instruction = 0x88147B4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfd f0,136(r1)
	ctx.current_instruction = 0x88147B54;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r9,4(r10)
	ctx.current_instruction = 0x88147B58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// blt cr6,0x88147b78
	if (ctx.cr6.lt) goto loc_88147B78;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_88147B78:
	// lwzu r10,4(r6)
	ctx.current_instruction = 0x88147B78;
	ea = 4 + ctx.r6.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// lfsx f13,r5,r7
	ctx.current_instruction = 0x88147B7C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,128(r1)
	ctx.current_instruction = 0x88147B88;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f12,128(r1)
	ctx.current_instruction = 0x88147B8C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,0(r7)
	ctx.current_instruction = 0x88147BA4;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x88147b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88147B1C;
loc_88147BB0:
	// lwz r11,268(r28)
	ctx.current_instruction = 0x88147BB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 268);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881480d0
	if (!ctx.cr6.lt) goto loc_881480D0;
	// li r20,0
	ctx.r20.s64 = 0;
	// add r21,r21,r23
	ctx.r21.u64 = ctx.r21.u64 + ctx.r23.u64;
	// rlwinm r26,r23,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_88147BC8:
	// lwz r10,308(r28)
	ctx.current_instruction = 0x88147BC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r8,4(r9)
	ctx.current_instruction = 0x88147BD0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88147be4
	if (ctx.cr6.lt) goto loc_88147BE4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_88147BE4:
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x88147BE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// blt cr6,0x88147bfc
	if (ctx.cr6.lt) goto loc_88147BFC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_88147BFC:
	// lbz r9,0(r21)
	ctx.current_instruction = 0x88147BFC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x88147e1c
	if (!ctx.cr6.eq) goto loc_88147E1C;
	// lwzx r3,r20,r17
	ctx.current_instruction = 0x88147C08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r17.u32);
	// bl 0x8812dca8
	ctx.lr = 0x88147C10;
	sub_8812DCA8(ctx, base);
loc_88147C10:
	// lwz r11,16(r18)
	ctx.current_instruction = 0x88147C10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// lfsx f0,r11,r20
	ctx.current_instruction = 0x88147C18;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// bge cr6,0x88147e14
	if (!ctx.cr6.lt) goto loc_88147E14;
	// subf r11,r29,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x88147d9c
	if (ctx.cr6.lt) goto loc_88147D9C;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r6,r27,-3
	ctx.r6.s64 = ctx.r27.s64 + -3;
	// add r10,r8,r22
	ctx.r10.u64 = ctx.r8.u64 + ctx.r22.u64;
	// subf r5,r22,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r22.u64;
loc_88147C5C:
	// lwz r8,4(r11)
	ctx.current_instruction = 0x88147C5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88147C64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r3,r8,r30
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r7,r3,r31
	ctx.r7.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// stw r7,4(r11)
	ctx.current_instruction = 0x88147C78;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// stw r8,0(r11)
	ctx.current_instruction = 0x88147C88;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,136(r1)
	ctx.current_instruction = 0x88147C90;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lfs f13,4(r9)
	ctx.current_instruction = 0x88147C94;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,136(r1)
	ctx.current_instruction = 0x88147C98;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,-4(r10)
	ctx.current_instruction = 0x88147CAC;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88147CB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.current_instruction = 0x88147CB4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r3,r30
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// stw r7,4(r11)
	ctx.current_instruction = 0x88147CC4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// stw r8,0(r11)
	ctx.current_instruction = 0x88147CD4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lfsx f7,r5,r10
	ctx.current_instruction = 0x88147CD8;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,128(r1)
	ctx.current_instruction = 0x88147CE0;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f6,128(r1)
	ctx.current_instruction = 0x88147CE4;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,0(r10)
	ctx.current_instruction = 0x88147CF8;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88147CFC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.current_instruction = 0x88147D00;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r3,r30
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// stw r7,4(r11)
	ctx.current_instruction = 0x88147D10;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	ctx.current_instruction = 0x88147D1C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lfs f1,12(r9)
	ctx.current_instruction = 0x88147D20;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,120(r1)
	ctx.current_instruction = 0x88147D2C;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f13,120(r1)
	ctx.current_instruction = 0x88147D30;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,4(r10)
	ctx.current_instruction = 0x88147D44;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88147D48;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.current_instruction = 0x88147D4C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r3,r30
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// stw r7,4(r11)
	ctx.current_instruction = 0x88147D5C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	ctx.current_instruction = 0x88147D68;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lfsu f13,16(r9)
	ctx.current_instruction = 0x88147D6C;
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	ctx.current_instruction = 0x88147D78;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f8,112(r1)
	ctx.current_instruction = 0x88147D7C;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,8(r10)
	ctx.current_instruction = 0x88147D90;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x88147c5c
	if (ctx.cr6.lt) goto loc_88147C5C;
loc_88147D9C:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x88147e14
	if (!ctx.cr6.lt) goto loc_88147E14;
	// subf r9,r29,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r29.u64;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,540
	ctx.r10.s64 = ctx.r28.s64 + 540;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// subf r7,r22,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r22.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_88147DC0:
	// lwz r9,4(r10)
	ctx.current_instruction = 0x88147DC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.current_instruction = 0x88147DC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r5,r9,r30
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r10)
	ctx.current_instruction = 0x88147DD4;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r10)
	ctx.current_instruction = 0x88147DE4;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,104(r1)
	ctx.current_instruction = 0x88147DEC;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfsx f13,r11,r7
	ctx.current_instruction = 0x88147DF0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,104(r1)
	ctx.current_instruction = 0x88147DF4;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,0(r11)
	ctx.current_instruction = 0x88147E08;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88147dc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88147DC0;
loc_88147E14:
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// b 0x881480c4
	goto loc_881480C4;
loc_88147E1C:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x88147e28
	if (!ctx.cr6.lt) goto loc_88147E28;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_88147E28:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x881480c4
	if (!ctx.cr6.lt) goto loc_881480C4;
	// subf r11,r29,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x88148020
	if (ctx.cr6.lt) goto loc_88148020;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r5,r27,-3
	ctx.r5.s64 = ctx.r27.s64 + -3;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r10,r7,r22
	ctx.r10.u64 = ctx.r7.u64 + ctx.r22.u64;
	// subf r4,r22,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r22.u64;
loc_88147E6C:
	// lwz r7,4(r11)
	ctx.current_instruction = 0x88147E6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r3,0(r11)
	ctx.current_instruction = 0x88147E74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// srawi r7,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r11)
	ctx.current_instruction = 0x88147E8C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	ctx.current_instruction = 0x88147E98;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// subf r3,r3,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r3.u64;
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// std r7,96(r1)
	ctx.current_instruction = 0x88147EA4;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfs f0,4(r8)
	ctx.current_instruction = 0x88147EA8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,4(r9)
	ctx.current_instruction = 0x88147EAC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r3,88(r1)
	ctx.current_instruction = 0x88147EB4;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f13,96(r1)
	ctx.current_instruction = 0x88147EB8;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfd f12,88(r1)
	ctx.current_instruction = 0x88147EC4;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmadds f7,f9,f30,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f30.f64, ctx.f8.f64)));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,-4(r10)
	ctx.current_instruction = 0x88147EDC;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r7,4(r11)
	ctx.current_instruction = 0x88147EE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// add r7,r6,r31
	ctx.r7.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lwz r3,0(r11)
	ctx.current_instruction = 0x88147EEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,4(r11)
	ctx.current_instruction = 0x88147EF0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	ctx.current_instruction = 0x88147F00;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
	// lwz r3,8(r9)
	ctx.current_instruction = 0x88147F08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// lfsx f4,r4,r10
	ctx.current_instruction = 0x88147F14;
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// std r6,144(r1)
	ctx.current_instruction = 0x88147F18;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// lfd f2,144(r1)
	ctx.current_instruction = 0x88147F1C;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// std r7,80(r1)
	ctx.current_instruction = 0x88147F20;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f3,80(r1)
	ctx.current_instruction = 0x88147F24;
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// fcfid f0,f2
	ctx.f0.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// fmadds f11,f13,f30,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f30.f64, ctx.f12.f64)));
	// fmuls f10,f11,f4
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,0(r10)
	ctx.current_instruction = 0x88147F44;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r3,4(r11)
	ctx.current_instruction = 0x88147F48;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r3,r30
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lwz r3,0(r11)
	ctx.current_instruction = 0x88147F54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r7,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r11)
	ctx.current_instruction = 0x88147F5C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
	// stw r7,0(r11)
	ctx.current_instruction = 0x88147F6C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,12(r9)
	ctx.current_instruction = 0x88147F70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfs f8,12(r8)
	ctx.current_instruction = 0x88147F7C;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// std r3,152(r1)
	ctx.current_instruction = 0x88147F80;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// std r6,160(r1)
	ctx.current_instruction = 0x88147F84;
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// lfd f7,152(r1)
	ctx.current_instruction = 0x88147F88;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f6,160(r1)
	ctx.current_instruction = 0x88147F8C;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmadds f1,f2,f30,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f30.f64, ctx.f3.f64)));
	// fmuls f0,f1,f8
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,4(r10)
	ctx.current_instruction = 0x88147FAC;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r3,4(r11)
	ctx.current_instruction = 0x88147FB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,0(r11)
	ctx.current_instruction = 0x88147FB4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r7,r3,r30
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// srawi r7,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r11)
	ctx.current_instruction = 0x88147FC4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r3,r23,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r23.u64;
	// stw r7,0(r11)
	ctx.current_instruction = 0x88147FD4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// std r7,168(r1)
	ctx.current_instruction = 0x88147FDC;
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// lwzu r7,16(r9)
	ctx.current_instruction = 0x88147FE0;
	ea = 16 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfd f12,168(r1)
	ctx.current_instruction = 0x88147FE8;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// std r6,176(r1)
	ctx.current_instruction = 0x88147FEC;
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// lfd f9,176(r1)
	ctx.current_instruction = 0x88147FF0;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfsu f0,16(r8)
	ctx.current_instruction = 0x88147FFC;
	ea = 16 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmadds f6,f10,f30,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f30.f64, ctx.f7.f64)));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f4,8(r10)
	ctx.current_instruction = 0x88148014;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x88147e6c
	if (ctx.cr6.lt) goto loc_88147E6C;
loc_88148020:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x881480c4
	if (!ctx.cr6.lt) goto loc_881480C4;
	// subf r9,r29,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r29.u64;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r19
	ctx.r8.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r10,r28,540
	ctx.r10.s64 = ctx.r28.s64 + 540;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r7,r22
	ctx.r11.u64 = ctx.r7.u64 + ctx.r22.u64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// subf r6,r22,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r22.u64;
	// add r24,r9,r24
	ctx.r24.u64 = ctx.r9.u64 + ctx.r24.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_88148054:
	// lwz r9,4(r10)
	ctx.current_instruction = 0x88148054;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,0(r10)
	ctx.current_instruction = 0x88148058;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r4,r9,r30
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// stw r3,4(r10)
	ctx.current_instruction = 0x88148064;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// srawi r7,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r9,0(r10)
	ctx.current_instruction = 0x88148074;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,184(r1)
	ctx.current_instruction = 0x88148080;
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lwzu r9,4(r8)
	ctx.current_instruction = 0x88148084;
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r5,192(r1)
	ctx.current_instruction = 0x8814808C;
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// lfd f13,184(r1)
	ctx.current_instruction = 0x88148090;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfsx f0,r6,r11
	ctx.current_instruction = 0x88148098;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfd f12,192(r1)
	ctx.current_instruction = 0x881480A0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmadds f7,f9,f30,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f30.f64, ctx.f8.f64)));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,0(r11)
	ctx.current_instruction = 0x881480B8;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88148054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88148054;
loc_881480C4:
	// lwz r11,268(r28)
	ctx.current_instruction = 0x881480C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 268);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88147bc8
	if (ctx.cr6.lt) goto loc_88147BC8;
loc_881480D0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r10,118(r18)
	ctx.current_instruction = 0x881480D4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r18.u32 + 118);
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// lfs f0,-4(r9)
	ctx.current_instruction = 0x881480E4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bge cr6,0x88148298
	if (!ctx.cr6.lt) goto loc_88148298;
	// subf r11,r29,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x88148230
	if (ctx.cr6.lt) goto loc_88148230;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r7,r6,-3
	ctx.r7.s64 = ctx.r6.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_88148114:
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88148114;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r5,0(r11)
	ctx.current_instruction = 0x8814811C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r9,r30
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	ctx.current_instruction = 0x88148130;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	ctx.current_instruction = 0x88148140;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r5,192(r1)
	ctx.current_instruction = 0x88148148;
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// lfd f13,192(r1)
	ctx.current_instruction = 0x8814814C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r10)
	ctx.current_instruction = 0x8814815C;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r4,4(r11)
	ctx.current_instruction = 0x88148160;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.current_instruction = 0x88148164;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r9,r4,r30
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	ctx.current_instruction = 0x88148174;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r3,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r3.u64;
	// stw r9,0(r11)
	ctx.current_instruction = 0x88148184;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,184(r1)
	ctx.current_instruction = 0x8814818C;
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lfd f9,184(r1)
	ctx.current_instruction = 0x88148190;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,8(r10)
	ctx.current_instruction = 0x881481A0;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r5,0(r11)
	ctx.current_instruction = 0x881481A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.current_instruction = 0x881481A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r4,r3,r30
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	ctx.current_instruction = 0x881481B8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	ctx.current_instruction = 0x881481C8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r5,176(r1)
	ctx.current_instruction = 0x881481D0;
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lfd f5,176(r1)
	ctx.current_instruction = 0x881481D4;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,12(r10)
	ctx.current_instruction = 0x881481E4;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x881481E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.current_instruction = 0x881481EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r3,r30
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	ctx.current_instruction = 0x881481FC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r4,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r4.u64;
	// stw r9,0(r11)
	ctx.current_instruction = 0x8814820C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,168(r1)
	ctx.current_instruction = 0x88148214;
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lfd f1,168(r1)
	ctx.current_instruction = 0x88148218;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsu f11,16(r10)
	ctx.current_instruction = 0x88148228;
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x88148114
	if (ctx.cr6.lt) goto loc_88148114;
loc_88148230:
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88148298
	if (!ctx.cr6.lt) goto loc_88148298;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r29,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r29.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88148250:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88148250;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.current_instruction = 0x88148254;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r6,r10,r30
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	ctx.current_instruction = 0x88148264;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r10,0(r11)
	ctx.current_instruction = 0x88148274;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,192(r1)
	ctx.current_instruction = 0x8814827C;
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r3.u64);
	// lfd f13,192(r1)
	ctx.current_instruction = 0x88148280;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r9)
	ctx.current_instruction = 0x88148290;
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x88148250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88148250;
loc_88148298:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x881ef2d4
	ctx.lr = 0x881482A8;
	__restfpr_28(ctx, base);
loc_881482A8:
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8816FA58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816FA58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816FA58) {
			switch (rex_dispatch_address) {
				case 0x8816FA60:
				case 0x8816FACC:
				case 0x8816FB14:
				case 0x8816FB8C:
				case 0x8816FBD4:
				case 0x8816FC24:
				case 0x8816FC58:
				case 0x8816FCBC:
				case 0x8816FD04:
				case 0x8816FD70:
				case 0x8816FDB8:
				case 0x8816FE08:
				case 0x8816FE3C:
				case 0x8816FEA0:
				case 0x8816FEE8:
				case 0x8816FF38:
				case 0x8816FF6C:
				case 0x8816FFD0:
				case 0x88170018:
				case 0x88170084:
				case 0x881700CC:
				case 0x88170134:
				case 0x8817017C:
				case 0x881701CC:
				case 0x88170200:
				case 0x88170264:
				case 0x881702AC:
				case 0x88170318:
				case 0x88170360:
				case 0x88170400:
				case 0x88170448:
				case 0x881704B0:
				case 0x881704F8:
				case 0x88170564:
				case 0x881705AC:
				case 0x88170618:
				case 0x88170660:
				case 0x881706C8:
				case 0x88170710:
				case 0x8817077C:
				case 0x881707C4:
				case 0x8817082C:
				case 0x88170874:
				case 0x881708DC:
				case 0x88170924:
				case 0x88170990:
				case 0x881709D8:
				case 0x88170A40:
				case 0x88170A88:
				case 0x88170AF4:
				case 0x88170B3C:
				case 0x88170BA8:
				case 0x88170BF0:
				case 0x88170C5C:
				case 0x88170CA4:
				case 0x88170D10:
				case 0x88170D44:
				case 0x88170DB0:
				case 0x88170DF8:
				case 0x88170E64:
				case 0x88170EAC:
				case 0x88170ED4:
				case 0x88170EE0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816FA58;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816FA60: goto loc_8816FA60;
		case 0x8816FACC: goto loc_8816FACC;
		case 0x8816FB14: goto loc_8816FB14;
		case 0x8816FB8C: goto loc_8816FB8C;
		case 0x8816FBD4: goto loc_8816FBD4;
		case 0x8816FC24: goto loc_8816FC24;
		case 0x8816FC58: goto loc_8816FC58;
		case 0x8816FCBC: goto loc_8816FCBC;
		case 0x8816FD04: goto loc_8816FD04;
		case 0x8816FD70: goto loc_8816FD70;
		case 0x8816FDB8: goto loc_8816FDB8;
		case 0x8816FE08: goto loc_8816FE08;
		case 0x8816FE3C: goto loc_8816FE3C;
		case 0x8816FEA0: goto loc_8816FEA0;
		case 0x8816FEE8: goto loc_8816FEE8;
		case 0x8816FF38: goto loc_8816FF38;
		case 0x8816FF6C: goto loc_8816FF6C;
		case 0x8816FFD0: goto loc_8816FFD0;
		case 0x88170018: goto loc_88170018;
		case 0x88170084: goto loc_88170084;
		case 0x881700CC: goto loc_881700CC;
		case 0x88170134: goto loc_88170134;
		case 0x8817017C: goto loc_8817017C;
		case 0x881701CC: goto loc_881701CC;
		case 0x88170200: goto loc_88170200;
		case 0x88170264: goto loc_88170264;
		case 0x881702AC: goto loc_881702AC;
		case 0x88170318: goto loc_88170318;
		case 0x88170360: goto loc_88170360;
		case 0x88170400: goto loc_88170400;
		case 0x88170448: goto loc_88170448;
		case 0x881704B0: goto loc_881704B0;
		case 0x881704F8: goto loc_881704F8;
		case 0x88170564: goto loc_88170564;
		case 0x881705AC: goto loc_881705AC;
		case 0x88170618: goto loc_88170618;
		case 0x88170660: goto loc_88170660;
		case 0x881706C8: goto loc_881706C8;
		case 0x88170710: goto loc_88170710;
		case 0x8817077C: goto loc_8817077C;
		case 0x881707C4: goto loc_881707C4;
		case 0x8817082C: goto loc_8817082C;
		case 0x88170874: goto loc_88170874;
		case 0x881708DC: goto loc_881708DC;
		case 0x88170924: goto loc_88170924;
		case 0x88170990: goto loc_88170990;
		case 0x881709D8: goto loc_881709D8;
		case 0x88170A40: goto loc_88170A40;
		case 0x88170A88: goto loc_88170A88;
		case 0x88170AF4: goto loc_88170AF4;
		case 0x88170B3C: goto loc_88170B3C;
		case 0x88170BA8: goto loc_88170BA8;
		case 0x88170BF0: goto loc_88170BF0;
		case 0x88170C5C: goto loc_88170C5C;
		case 0x88170CA4: goto loc_88170CA4;
		case 0x88170D10: goto loc_88170D10;
		case 0x88170D44: goto loc_88170D44;
		case 0x88170DB0: goto loc_88170DB0;
		case 0x88170DF8: goto loc_88170DF8;
		case 0x88170E64: goto loc_88170E64;
		case 0x88170EAC: goto loc_88170EAC;
		case 0x88170ED4: goto loc_88170ED4;
		case 0x88170EE0: goto loc_88170EE0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8816FA60;
	__savegprlr_28(ctx, base);
loc_8816FA60:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8816FA60;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x8816FA64;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,24
	ctx.r30.s64 = 24;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FA74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x8816fadc
	if (!ctx.cr6.lt) goto loc_8816FADC;
loc_8816FA84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816fadc
	if (ctx.cr6.eq) goto loc_8816FADC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816FA90;
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
	ctx.current_instruction = 0x8816FAB4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816FABC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816facc
	if (!ctx.cr0.lt) goto loc_8816FACC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FACC;
	sub_88156678(ctx, base);
loc_8816FACC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FACC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816fa84
	if (ctx.cr6.gt) goto loc_8816FA84;
loc_8816FADC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816FAE0;
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
	ctx.current_instruction = 0x8816FAF8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816FB04;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816fb14
	if (!ctx.cr0.lt) goto loc_8816FB14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FB14;
	sub_88156678(ctx, base);
loc_8816FB14:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8816fb28
	if (ctx.cr6.eq) goto loc_8816FB28;
loc_8816FB1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8816FB28:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8816FB28;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FB34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8816fb9c
	if (!ctx.cr6.lt) goto loc_8816FB9C;
loc_8816FB44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816fb9c
	if (ctx.cr6.eq) goto loc_8816FB9C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816FB50;
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
	ctx.current_instruction = 0x8816FB74;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816FB7C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816fb8c
	if (!ctx.cr0.lt) goto loc_8816FB8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FB8C;
	sub_88156678(ctx, base);
loc_8816FB8C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FB8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816fb44
	if (ctx.cr6.gt) goto loc_8816FB44;
loc_8816FB9C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816FBA0;
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
	ctx.current_instruction = 0x8816FBB8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816FBC4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816fbd4
	if (!ctx.cr0.lt) goto loc_8816FBD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FBD4;
	sub_88156678(ctx, base);
loc_8816FBD4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8816FBDC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FBE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8816fc34
	if (!ctx.cr6.lt) goto loc_8816FC34;
loc_8816FBF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816fc34
	if (ctx.cr6.eq) goto loc_8816FC34;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816FBFC;
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
	ctx.current_instruction = 0x8816FC10;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816FC14;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816fc24
	if (!ctx.cr0.lt) goto loc_8816FC24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FC24;
	sub_88156678(ctx, base);
loc_8816FC24:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FC24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816fbf4
	if (ctx.cr6.gt) goto loc_8816FBF4;
loc_8816FC34:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816FC34;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816FC44;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816FC48;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816fc58
	if (!ctx.cr0.lt) goto loc_8816FC58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FC58;
	sub_88156678(ctx, base);
loc_8816FC58:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8816FC58;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,24
	ctx.r30.s64 = 24;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FC64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x8816fccc
	if (!ctx.cr6.lt) goto loc_8816FCCC;
loc_8816FC74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816fccc
	if (ctx.cr6.eq) goto loc_8816FCCC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816FC80;
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
	ctx.current_instruction = 0x8816FCA4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816FCAC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816fcbc
	if (!ctx.cr0.lt) goto loc_8816FCBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FCBC;
	sub_88156678(ctx, base);
loc_8816FCBC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FCBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816fc74
	if (ctx.cr6.gt) goto loc_8816FC74;
loc_8816FCCC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816FCD0;
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
	ctx.current_instruction = 0x8816FCE8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816FCF4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816fd04
	if (!ctx.cr0.lt) goto loc_8816FD04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FD04;
	sub_88156678(ctx, base);
loc_8816FD04:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8816FD0C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FD18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8816fd80
	if (!ctx.cr6.lt) goto loc_8816FD80;
loc_8816FD28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816fd80
	if (ctx.cr6.eq) goto loc_8816FD80;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816FD34;
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
	ctx.current_instruction = 0x8816FD58;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816FD60;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816fd70
	if (!ctx.cr0.lt) goto loc_8816FD70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FD70;
	sub_88156678(ctx, base);
loc_8816FD70:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FD70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816fd28
	if (ctx.cr6.gt) goto loc_8816FD28;
loc_8816FD80:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816FD84;
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
	ctx.current_instruction = 0x8816FD9C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816FDA8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816fdb8
	if (!ctx.cr0.lt) goto loc_8816FDB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FDB8;
	sub_88156678(ctx, base);
loc_8816FDB8:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8816FDC0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,4
	ctx.r30.s64 = 4;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FDC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8816fe18
	if (!ctx.cr6.lt) goto loc_8816FE18;
loc_8816FDD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816fe18
	if (ctx.cr6.eq) goto loc_8816FE18;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816FDE0;
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
	ctx.current_instruction = 0x8816FDF4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816FDF8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816fe08
	if (!ctx.cr0.lt) goto loc_8816FE08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FE08;
	sub_88156678(ctx, base);
loc_8816FE08:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FE08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816fdd8
	if (ctx.cr6.gt) goto loc_8816FDD8;
loc_8816FE18:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816FE18;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816FE28;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816FE2C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816fe3c
	if (!ctx.cr0.lt) goto loc_8816FE3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FE3C;
	sub_88156678(ctx, base);
loc_8816FE3C:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8816FE3C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FE48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816feb0
	if (!ctx.cr6.lt) goto loc_8816FEB0;
loc_8816FE58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816feb0
	if (ctx.cr6.eq) goto loc_8816FEB0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816FE64;
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
	ctx.current_instruction = 0x8816FE88;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816FE90;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816fea0
	if (!ctx.cr0.lt) goto loc_8816FEA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FEA0;
	sub_88156678(ctx, base);
loc_8816FEA0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FEA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816fe58
	if (ctx.cr6.gt) goto loc_8816FE58;
loc_8816FEB0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816FEB4;
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
	ctx.current_instruction = 0x8816FECC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816FED8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816fee8
	if (!ctx.cr0.lt) goto loc_8816FEE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FEE8;
	sub_88156678(ctx, base);
loc_8816FEE8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8816FEF0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,8
	ctx.r30.s64 = 8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FEF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8816ff48
	if (!ctx.cr6.lt) goto loc_8816FF48;
loc_8816FF08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816ff48
	if (ctx.cr6.eq) goto loc_8816FF48;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816FF10;
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
	ctx.current_instruction = 0x8816FF24;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816FF28;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816ff38
	if (!ctx.cr0.lt) goto loc_8816FF38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FF38;
	sub_88156678(ctx, base);
loc_8816FF38:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FF38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816ff08
	if (ctx.cr6.gt) goto loc_8816FF08;
loc_8816FF48:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816FF48;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816FF58;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816FF5C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816ff6c
	if (!ctx.cr0.lt) goto loc_8816FF6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FF6C;
	sub_88156678(ctx, base);
loc_8816FF6C:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8816FF6C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FF78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816ffe0
	if (!ctx.cr6.lt) goto loc_8816FFE0;
loc_8816FF88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816ffe0
	if (ctx.cr6.eq) goto loc_8816FFE0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816FF94;
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
	ctx.current_instruction = 0x8816FFB8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816FFC0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816ffd0
	if (!ctx.cr0.lt) goto loc_8816FFD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816FFD0;
	sub_88156678(ctx, base);
loc_8816FFD0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816FFD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816ff88
	if (ctx.cr6.gt) goto loc_8816FF88;
loc_8816FFE0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816FFE4;
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
	ctx.current_instruction = 0x8816FFFC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170008;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170018
	if (!ctx.cr0.lt) goto loc_88170018;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170018;
	sub_88156678(ctx, base);
loc_88170018:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170020;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817002C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x88170094
	if (!ctx.cr6.lt) goto loc_88170094;
loc_8817003C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170094
	if (ctx.cr6.eq) goto loc_88170094;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170048;
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
	ctx.current_instruction = 0x8817006C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170074;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170084
	if (!ctx.cr0.lt) goto loc_88170084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170084;
	sub_88156678(ctx, base);
loc_88170084:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170084;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8817003c
	if (ctx.cr6.gt) goto loc_8817003C;
loc_88170094:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170098;
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
	ctx.current_instruction = 0x881700B0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881700BC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881700cc
	if (!ctx.cr0.lt) goto loc_881700CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881700CC;
	sub_88156678(ctx, base);
loc_881700CC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881700D4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881700DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88170144
	if (!ctx.cr6.lt) goto loc_88170144;
loc_881700EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170144
	if (ctx.cr6.eq) goto loc_88170144;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881700F8;
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
	ctx.current_instruction = 0x8817011C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170124;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170134
	if (!ctx.cr0.lt) goto loc_88170134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170134;
	sub_88156678(ctx, base);
loc_88170134:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170134;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881700ec
	if (ctx.cr6.gt) goto loc_881700EC;
loc_88170144:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170148;
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
	ctx.current_instruction = 0x88170160;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8817016C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8817017c
	if (!ctx.cr0.lt) goto loc_8817017C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8817017C;
	sub_88156678(ctx, base);
loc_8817017C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170184;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817018C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881701dc
	if (!ctx.cr6.lt) goto loc_881701DC;
loc_8817019C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881701dc
	if (ctx.cr6.eq) goto loc_881701DC;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881701A4;
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
	ctx.current_instruction = 0x881701B8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881701BC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x881701cc
	if (!ctx.cr0.lt) goto loc_881701CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881701CC;
	sub_88156678(ctx, base);
loc_881701CC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881701CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8817019c
	if (ctx.cr6.gt) goto loc_8817019C;
loc_881701DC:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881701DC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x881701EC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x881701F0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x88170200
	if (!ctx.cr0.lt) goto loc_88170200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170200;
	sub_88156678(ctx, base);
loc_88170200:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170200;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817020C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88170274
	if (!ctx.cr6.lt) goto loc_88170274;
loc_8817021C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170274
	if (ctx.cr6.eq) goto loc_88170274;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170228;
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
	ctx.current_instruction = 0x8817024C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170254;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170264
	if (!ctx.cr0.lt) goto loc_88170264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170264;
	sub_88156678(ctx, base);
loc_88170264:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170264;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8817021c
	if (ctx.cr6.gt) goto loc_8817021C;
loc_88170274:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170278;
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
	ctx.current_instruction = 0x88170290;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8817029C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881702ac
	if (!ctx.cr0.lt) goto loc_881702AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881702AC;
	sub_88156678(ctx, base);
loc_881702AC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881702B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,16
	ctx.r30.s64 = 16;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881702C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x88170328
	if (!ctx.cr6.lt) goto loc_88170328;
loc_881702D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170328
	if (ctx.cr6.eq) goto loc_88170328;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881702DC;
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
	ctx.current_instruction = 0x88170300;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170308;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170318
	if (!ctx.cr0.lt) goto loc_88170318;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170318;
	sub_88156678(ctx, base);
loc_88170318:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170318;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881702d0
	if (ctx.cr6.gt) goto loc_881702D0;
loc_88170328:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8817032C;
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
	ctx.current_instruction = 0x88170344;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170350;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170360
	if (!ctx.cr0.lt) goto loc_88170360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170360;
	sub_88156678(ctx, base);
loc_88170360:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8816fb1c
	if (ctx.cr6.eq) goto loc_8816FB1C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,3628(r28)
	ctx.current_instruction = 0x88170370;
	REX_STORE_U32(ctx.r28.u32 + 3628, ctx.r30.u32);
	// stw r10,3688(r28)
	ctx.current_instruction = 0x88170374;
	REX_STORE_U32(ctx.r28.u32 + 3688, ctx.r10.u32);
loc_88170378:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8817039c
	if (ctx.cr6.eq) goto loc_8817039C;
	// lwz r10,3688(r28)
	ctx.current_instruction = 0x88170380;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 3688);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,3688(r28)
	ctx.current_instruction = 0x88170390;
	REX_STORE_U32(ctx.r28.u32 + 3688, ctx.r10.u32);
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x88170378
	if (ctx.cr6.lt) goto loc_88170378;
loc_8817039C:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8817039C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881703A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88170410
	if (!ctx.cr6.lt) goto loc_88170410;
loc_881703B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170410
	if (ctx.cr6.eq) goto loc_88170410;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881703C4;
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
	ctx.current_instruction = 0x881703E8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881703F0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170400
	if (!ctx.cr0.lt) goto loc_88170400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170400;
	sub_88156678(ctx, base);
loc_88170400:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170400;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881703b8
	if (ctx.cr6.gt) goto loc_881703B8;
loc_88170410:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170414;
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
	ctx.current_instruction = 0x8817042C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170438;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170448
	if (!ctx.cr0.lt) goto loc_88170448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170448;
	sub_88156678(ctx, base);
loc_88170448:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170450;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170458;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881704c0
	if (!ctx.cr6.lt) goto loc_881704C0;
loc_88170468:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881704c0
	if (ctx.cr6.eq) goto loc_881704C0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170474;
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
	ctx.current_instruction = 0x88170498;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881704A0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881704b0
	if (!ctx.cr0.lt) goto loc_881704B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881704B0;
	sub_88156678(ctx, base);
loc_881704B0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881704B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88170468
	if (ctx.cr6.gt) goto loc_88170468;
loc_881704C0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881704C4;
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
	ctx.current_instruction = 0x881704DC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881704E8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881704f8
	if (!ctx.cr0.lt) goto loc_881704F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881704F8;
	sub_88156678(ctx, base);
loc_881704F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170500;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817050C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88170574
	if (!ctx.cr6.lt) goto loc_88170574;
loc_8817051C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170574
	if (ctx.cr6.eq) goto loc_88170574;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170528;
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
	ctx.current_instruction = 0x8817054C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170554;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170564
	if (!ctx.cr0.lt) goto loc_88170564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170564;
	sub_88156678(ctx, base);
loc_88170564:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170564;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8817051c
	if (ctx.cr6.gt) goto loc_8817051C;
loc_88170574:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170578;
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
	ctx.current_instruction = 0x88170590;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8817059C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881705ac
	if (!ctx.cr0.lt) goto loc_881705AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881705AC;
	sub_88156678(ctx, base);
loc_881705AC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881705B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,13
	ctx.r30.s64 = 13;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881705C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bge cr6,0x88170628
	if (!ctx.cr6.lt) goto loc_88170628;
loc_881705D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170628
	if (ctx.cr6.eq) goto loc_88170628;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881705DC;
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
	ctx.current_instruction = 0x88170600;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170608;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170618
	if (!ctx.cr0.lt) goto loc_88170618;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170618;
	sub_88156678(ctx, base);
loc_88170618:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170618;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881705d0
	if (ctx.cr6.gt) goto loc_881705D0;
loc_88170628:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8817062C;
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
	ctx.current_instruction = 0x88170644;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170650;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170660
	if (!ctx.cr0.lt) goto loc_88170660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170660;
	sub_88156678(ctx, base);
loc_88170660:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170660;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,156(r28)
	ctx.current_instruction = 0x88170668;
	REX_STORE_U32(ctx.r28.u32 + 156, ctx.r29.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881706d8
	if (!ctx.cr6.lt) goto loc_881706D8;
loc_88170680:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881706d8
	if (ctx.cr6.eq) goto loc_881706D8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8817068C;
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
	ctx.current_instruction = 0x881706B0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881706B8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881706c8
	if (!ctx.cr0.lt) goto loc_881706C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881706C8;
	sub_88156678(ctx, base);
loc_881706C8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881706C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88170680
	if (ctx.cr6.gt) goto loc_88170680;
loc_881706D8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881706DC;
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
	ctx.current_instruction = 0x881706F4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170700;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170710
	if (!ctx.cr0.lt) goto loc_88170710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170710;
	sub_88156678(ctx, base);
loc_88170710:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170718;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,13
	ctx.r30.s64 = 13;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170724;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bge cr6,0x8817078c
	if (!ctx.cr6.lt) goto loc_8817078C;
loc_88170734:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817078c
	if (ctx.cr6.eq) goto loc_8817078C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170740;
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
	ctx.current_instruction = 0x88170764;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8817076C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8817077c
	if (!ctx.cr0.lt) goto loc_8817077C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8817077C;
	sub_88156678(ctx, base);
loc_8817077C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817077C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88170734
	if (ctx.cr6.gt) goto loc_88170734;
loc_8817078C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170790;
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
	ctx.current_instruction = 0x881707A8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881707B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881707c4
	if (!ctx.cr0.lt) goto loc_881707C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881707C4;
	sub_88156678(ctx, base);
loc_881707C4:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881707C4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,160(r28)
	ctx.current_instruction = 0x881707CC;
	REX_STORE_U32(ctx.r28.u32 + 160, ctx.r30.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881707D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8817083c
	if (!ctx.cr6.lt) goto loc_8817083C;
loc_881707E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8817083c
	if (ctx.cr6.eq) goto loc_8817083C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881707F0;
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
	ctx.current_instruction = 0x88170814;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8817081C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8817082c
	if (!ctx.cr0.lt) goto loc_8817082C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8817082C;
	sub_88156678(ctx, base);
loc_8817082C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8817082C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881707e4
	if (ctx.cr6.gt) goto loc_881707E4;
loc_8817083C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170840;
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
	ctx.current_instruction = 0x88170858;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170864;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170874
	if (!ctx.cr0.lt) goto loc_88170874;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170874;
	sub_88156678(ctx, base);
loc_88170874:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8817087C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170884;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881708ec
	if (!ctx.cr6.lt) goto loc_881708EC;
loc_88170894:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881708ec
	if (ctx.cr6.eq) goto loc_881708EC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881708A0;
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
	ctx.current_instruction = 0x881708C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881708CC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881708dc
	if (!ctx.cr0.lt) goto loc_881708DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881708DC;
	sub_88156678(ctx, base);
loc_881708DC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881708DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88170894
	if (ctx.cr6.gt) goto loc_88170894;
loc_881708EC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881708F0;
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
	ctx.current_instruction = 0x88170908;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170914;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170924
	if (!ctx.cr0.lt) goto loc_88170924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170924;
	sub_88156678(ctx, base);
loc_88170924:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x8817092C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170938;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881709a0
	if (!ctx.cr6.lt) goto loc_881709A0;
loc_88170948:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881709a0
	if (ctx.cr6.eq) goto loc_881709A0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170954;
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
	ctx.current_instruction = 0x88170978;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170980;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170990
	if (!ctx.cr0.lt) goto loc_88170990;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170990;
	sub_88156678(ctx, base);
loc_88170990:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170990;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88170948
	if (ctx.cr6.gt) goto loc_88170948;
loc_881709A0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881709A4;
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
	ctx.current_instruction = 0x881709BC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881709C8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881709d8
	if (!ctx.cr0.lt) goto loc_881709D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881709D8;
	sub_88156678(ctx, base);
loc_881709D8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x881709E0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881709E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88170a50
	if (!ctx.cr6.lt) goto loc_88170A50;
loc_881709F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170a50
	if (ctx.cr6.eq) goto loc_88170A50;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170A04;
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
	ctx.current_instruction = 0x88170A28;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170A30;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170a40
	if (!ctx.cr0.lt) goto loc_88170A40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170A40;
	sub_88156678(ctx, base);
loc_88170A40:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170A40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881709f8
	if (ctx.cr6.gt) goto loc_881709F8;
loc_88170A50:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170A54;
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
	ctx.current_instruction = 0x88170A6C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170A78;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170a88
	if (!ctx.cr0.lt) goto loc_88170A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170A88;
	sub_88156678(ctx, base);
loc_88170A88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170A90;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170A9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88170b04
	if (!ctx.cr6.lt) goto loc_88170B04;
loc_88170AAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170b04
	if (ctx.cr6.eq) goto loc_88170B04;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170AB8;
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
	ctx.current_instruction = 0x88170ADC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170AE4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170af4
	if (!ctx.cr0.lt) goto loc_88170AF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170AF4;
	sub_88156678(ctx, base);
loc_88170AF4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170AF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88170aac
	if (ctx.cr6.gt) goto loc_88170AAC;
loc_88170B04:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170B08;
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
	ctx.current_instruction = 0x88170B20;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170B2C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170b3c
	if (!ctx.cr0.lt) goto loc_88170B3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170B3C;
	sub_88156678(ctx, base);
loc_88170B3C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8816fb1c
	if (!ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170B44;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170B50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88170bb8
	if (!ctx.cr6.lt) goto loc_88170BB8;
loc_88170B60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170bb8
	if (ctx.cr6.eq) goto loc_88170BB8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170B6C;
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
	ctx.current_instruction = 0x88170B90;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170B98;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170ba8
	if (!ctx.cr0.lt) goto loc_88170BA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170BA8;
	sub_88156678(ctx, base);
loc_88170BA8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170BA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88170b60
	if (ctx.cr6.gt) goto loc_88170B60;
loc_88170BB8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170BBC;
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
	ctx.current_instruction = 0x88170BD4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170BE0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170bf0
	if (!ctx.cr0.lt) goto loc_88170BF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170BF0;
	sub_88156678(ctx, base);
loc_88170BF0:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8816fb1c
	if (ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170BF8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170C04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88170c6c
	if (!ctx.cr6.lt) goto loc_88170C6C;
loc_88170C14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170c6c
	if (ctx.cr6.eq) goto loc_88170C6C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170C20;
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
	ctx.current_instruction = 0x88170C44;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170C4C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170c5c
	if (!ctx.cr0.lt) goto loc_88170C5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170C5C;
	sub_88156678(ctx, base);
loc_88170C5C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170C5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88170c14
	if (ctx.cr6.gt) goto loc_88170C14;
loc_88170C6C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170C70;
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
	ctx.current_instruction = 0x88170C88;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170C94;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170ca4
	if (!ctx.cr0.lt) goto loc_88170CA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170CA4;
	sub_88156678(ctx, base);
loc_88170CA4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8816fb1c
	if (ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170CAC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170CB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88170d20
	if (!ctx.cr6.lt) goto loc_88170D20;
loc_88170CC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170d20
	if (ctx.cr6.eq) goto loc_88170D20;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170CD4;
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
	ctx.current_instruction = 0x88170CF8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170D00;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170d10
	if (!ctx.cr0.lt) goto loc_88170D10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170D10;
	sub_88156678(ctx, base);
loc_88170D10:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170D10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88170cc8
	if (ctx.cr6.gt) goto loc_88170CC8;
loc_88170D20:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88170D20;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x88170D30;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x88170D34;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x88170d44
	if (!ctx.cr0.lt) goto loc_88170D44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170D44;
	sub_88156678(ctx, base);
loc_88170D44:
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170D44;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,3692(r28)
	ctx.current_instruction = 0x88170D50;
	REX_STORE_U32(ctx.r28.u32 + 3692, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170D58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88170dc0
	if (!ctx.cr6.lt) goto loc_88170DC0;
loc_88170D68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170dc0
	if (ctx.cr6.eq) goto loc_88170DC0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170D74;
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
	ctx.current_instruction = 0x88170D98;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170DA0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170db0
	if (!ctx.cr0.lt) goto loc_88170DB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170DB0;
	sub_88156678(ctx, base);
loc_88170DB0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170DB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88170d68
	if (ctx.cr6.gt) goto loc_88170D68;
loc_88170DC0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170DC4;
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
	ctx.current_instruction = 0x88170DDC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170DE8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170df8
	if (!ctx.cr0.lt) goto loc_88170DF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170DF8;
	sub_88156678(ctx, base);
loc_88170DF8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8816fb1c
	if (ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88170E00;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170E0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88170e74
	if (!ctx.cr6.lt) goto loc_88170E74;
loc_88170E1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88170e74
	if (ctx.cr6.eq) goto loc_88170E74;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88170E28;
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
	ctx.current_instruction = 0x88170E4C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88170E54;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88170e64
	if (!ctx.cr0.lt) goto loc_88170E64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170E64;
	sub_88156678(ctx, base);
loc_88170E64:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88170E64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88170e1c
	if (ctx.cr6.gt) goto loc_88170E1C;
loc_88170E74:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88170E78;
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
	ctx.current_instruction = 0x88170E90;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88170E9C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88170eac
	if (!ctx.cr0.lt) goto loc_88170EAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88170EAC;
	sub_88156678(ctx, base);
loc_88170EAC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8816fb1c
	if (ctx.cr6.eq) goto loc_8816FB1C;
	// lwz r3,84(r28)
	ctx.current_instruction = 0x88170EB4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.current_instruction = 0x88170EBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88170ed0
	if (ctx.cr6.eq) goto loc_88170ED0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_88170ED0:
	// bl 0x88156500
	ctx.lr = 0x88170ED4;
	sub_88156500(ctx, base);
loc_88170ED4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88167a68
	ctx.lr = 0x88170EE0;
	sub_88167A68(ctx, base);
loc_88170EE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A64B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A64B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A64B0) {
			switch (rex_dispatch_address) {
				case 0x881A64B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A64B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881A64B8: goto loc_881A64B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881A64B8;
	__savegprlr_18(ctx, base);
loc_881A64B8:
	// lwz r27,136(r3)
	ctx.current_instruction = 0x881A64B8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r28,3972(r3)
	ctx.current_instruction = 0x881A64C0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 3972);
	// mullw r30,r27,r5
	ctx.r30.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r5.s32);
	// lwz r26,288(r3)
	ctx.current_instruction = 0x881A64C8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// addi r31,r11,11304
	ctx.r31.s64 = ctx.r11.s64 + 11304;
	// add r11,r30,r4
	ctx.r11.u64 = ctx.r30.u64 + ctx.r4.u64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r30,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r29,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r11,r23
	ctx.r21.u64 = ctx.r11.u64 + ctx.r23.u64;
	// subf r22,r11,r23
	ctx.r22.u64 = ctx.r23.u64 - ctx.r11.u64;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x881a6520
	if (!ctx.cr6.eq) goto loc_881A6520;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// li r28,15
	ctx.r28.s64 = 15;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_881A6514:
	// stbu r28,1(r30)
	ctx.current_instruction = 0x881A6514;
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// bdnz 0x881a6514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A6514;
	// b 0x881a659c
	goto loc_881A659C;
loc_881A6520:
	// li r28,6
	ctx.r28.s64 = 6;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// subf r27,r7,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r29,r7,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r7.u64;
	// li r24,15
	ctx.r24.s64 = 15;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// li r25,-49
	ctx.r25.s64 = -49;
	// li r26,63
	ctx.r26.s64 = 63;
loc_881A6540:
	// lbz r28,0(r30)
	ctx.current_instruction = 0x881A6540;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x881a6558
	if (!ctx.cr6.eq) goto loc_881A6558;
	// stbx r24,r29,r30
	ctx.current_instruction = 0x881A6550;
	REX_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r24.u8);
	// b 0x881a6594
	goto loc_881A6594;
loc_881A6558:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x881a6568
	if (!ctx.cr6.eq) goto loc_881A6568;
	// stbx r25,r29,r30
	ctx.current_instruction = 0x881A6560;
	REX_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r25.u8);
	// b 0x881a6594
	goto loc_881A6594;
loc_881A6568:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x881a6578
	if (!ctx.cr6.eq) goto loc_881A6578;
	// stbx r26,r29,r30
	ctx.current_instruction = 0x881A6570;
	REX_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r26.u8);
	// b 0x881a6594
	goto loc_881A6594;
loc_881A6578:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x881a6594
	if (!ctx.cr6.eq) goto loc_881A6594;
	// lbzx r28,r27,r30
	ctx.current_instruction = 0x881A6580;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r30.u32);
	// addi r20,r31,1024
	ctx.r20.s64 = ctx.r31.s64 + 1024;
	// rotlwi r28,r28,2
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// lwzx r28,r28,r20
	ctx.current_instruction = 0x881A658C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r20.u32);
	// stbx r28,r29,r30
	ctx.current_instruction = 0x881A6590;
	REX_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u8);
loc_881A6594:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bdnz 0x881a6540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A6540;
loc_881A659C:
	// lwz r20,100(r1)
	ctx.current_instruction = 0x881A659C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,108(r1)
	ctx.current_instruction = 0x881A65A0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x881a6634
	if (ctx.cr6.eq) goto loc_881A6634;
	// lbz r29,1(r11)
	ctx.current_instruction = 0x881A65AC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// lbz r30,0(r11)
	ctx.current_instruction = 0x881A65B4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// rlwinm r29,r29,0,30,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r29,1(r11)
	ctx.current_instruction = 0x881A65C4;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r29.u8);
	// beq cr6,0x881a6608
	if (ctx.cr6.eq) goto loc_881A6608;
	// lbz r28,2(r11)
	ctx.current_instruction = 0x881A65CC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r30,r30,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF0;
	// lbz r27,4(r11)
	ctx.current_instruction = 0x881A65D4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r26,5(r11)
	ctx.current_instruction = 0x881A65D8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// stb r30,0(r11)
	ctx.current_instruction = 0x881A65E4;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// extsb r26,r26
	ctx.r26.s64 = ctx.r26.s8;
	// rlwinm r28,r28,0,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r27,r27,0,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r26,r26,0,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFF0;
	// stb r28,2(r11)
	ctx.current_instruction = 0x881A65F8;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r28.u8);
	// stb r27,4(r11)
	ctx.current_instruction = 0x881A65FC;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r27.u8);
	// stb r26,5(r11)
	ctx.current_instruction = 0x881A6600;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r26.u8);
	// b 0x881a6680
	goto loc_881A6680;
loc_881A6608:
	// lbz r28,4(r11)
	ctx.current_instruction = 0x881A6608;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r30,r30,0,30,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// lbz r27,5(r11)
	ctx.current_instruction = 0x881A6610;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// stb r30,0(r11)
	ctx.current_instruction = 0x881A6618;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// rlwinm r28,r28,0,30,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// rlwinm r27,r27,0,30,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r28,4(r11)
	ctx.current_instruction = 0x881A6628;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r28.u8);
	// stb r27,5(r11)
	ctx.current_instruction = 0x881A662C;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r27.u8);
	// b 0x881a6680
	goto loc_881A6680;
loc_881A6634:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x881a6680
	if (ctx.cr6.eq) goto loc_881A6680;
	// lwz r30,3400(r3)
	ctx.current_instruction = 0x881A663C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3400);
	// lbzx r29,r30,r11
	ctx.current_instruction = 0x881A6640;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// rlwinm r29,r29,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r29,r30,r11
	ctx.current_instruction = 0x881A664C;
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u8);
	// lbz r29,4(r11)
	ctx.current_instruction = 0x881A6650;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,5(r11)
	ctx.current_instruction = 0x881A6654;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,2(r11)
	ctx.current_instruction = 0x881A6658;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// rlwinm r30,r30,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r29,r29,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r28,0,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r30,2(r11)
	ctx.current_instruction = 0x881A6674;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r29,4(r11)
	ctx.current_instruction = 0x881A6678;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r29.u8);
	// stb r28,5(r11)
	ctx.current_instruction = 0x881A667C;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r28.u8);
loc_881A6680:
	// lwz r30,288(r3)
	ctx.current_instruction = 0x881A6680;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x881a6d48
	if (ctx.cr6.eq) goto loc_881A6D48;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x881a66a4
	if (!ctx.cr6.eq) goto loc_881A66A4;
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881A6694;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x881A6698;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x881a6d48
	if (ctx.cr6.eq) goto loc_881A6D48;
loc_881A66A4:
	// lwz r25,84(r1)
	ctx.current_instruction = 0x881A66A4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x881a6740
	if (!ctx.cr6.eq) goto loc_881A6740;
	// lwz r30,1776(r3)
	ctx.current_instruction = 0x881A66B0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r6,r30
	ctx.current_instruction = 0x881A66B8;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r30.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// beq cr6,0x881a6740
	if (ctx.cr6.eq) goto loc_881A6740;
	// lwz r29,1776(r3)
	ctx.current_instruction = 0x881A66C4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r30,r22,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r29,r6
	ctx.current_instruction = 0x881A66CC;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// lhzx r29,r30,r29
	ctx.current_instruction = 0x881A66D0;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881a6740
	if (!ctx.cr6.eq) goto loc_881A6740;
	// lwz r29,1780(r3)
	ctx.current_instruction = 0x881A66DC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// lhzx r30,r29,r30
	ctx.current_instruction = 0x881A66E0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r30.u32);
	// lhzx r6,r29,r6
	ctx.current_instruction = 0x881A66E4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881a6740
	if (!ctx.cr6.eq) goto loc_881A6740;
	// lbz r6,2(r8)
	ctx.current_instruction = 0x881A66F0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// addi r27,r31,768
	ctx.r27.s64 = ctx.r31.s64 + 768;
	// lbz r30,0(r7)
	ctx.current_instruction = 0x881A66F8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r26,r31,512
	ctx.r26.s64 = ctx.r31.s64 + 512;
	// extsb r28,r6
	ctx.r28.s64 = ctx.r6.s8;
	// lbz r6,2(r25)
	ctx.current_instruction = 0x881A6704;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r25.u32 + 2);
	// extsb r24,r30
	ctx.r24.s64 = ctx.r30.s8;
	// lbz r29,0(r10)
	ctx.current_instruction = 0x881A670C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,0(r11)
	ctx.current_instruction = 0x881A6714;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r28,r24,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r30,r28,r29
	ctx.r30.u64 = ctx.r28.u64 + ctx.r29.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r27
	ctx.current_instruction = 0x881A672C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// lwzx r30,r30,r26
	ctx.current_instruction = 0x881A6730;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// or r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 | ctx.r30.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & ctx.r18.u64;
	// stb r6,0(r11)
	ctx.current_instruction = 0x881A673C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_881A6740:
	// lwz r24,92(r1)
	ctx.current_instruction = 0x881A6740;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881a67dc
	if (!ctx.cr6.eq) goto loc_881A67DC;
	// lwz r30,1776(r3)
	ctx.current_instruction = 0x881A674C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r6,r30
	ctx.current_instruction = 0x881A6754;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r30.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// beq cr6,0x881a67dc
	if (ctx.cr6.eq) goto loc_881A67DC;
	// lwz r30,1776(r3)
	ctx.current_instruction = 0x881A6760;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lhz r29,-2(r30)
	ctx.current_instruction = 0x881A6768;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r30.u32 + -2);
	// lhz r30,0(r30)
	ctx.current_instruction = 0x881A676C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881a67dc
	if (!ctx.cr6.eq) goto loc_881A67DC;
	// lwz r30,1780(r3)
	ctx.current_instruction = 0x881A6778;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// lhz r30,-2(r6)
	ctx.current_instruction = 0x881A6780;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x881A6784;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881a67dc
	if (!ctx.cr6.eq) goto loc_881A67DC;
	// lbz r6,1(r9)
	ctx.current_instruction = 0x881A6790;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addi r27,r31,256
	ctx.r27.s64 = ctx.r31.s64 + 256;
	// lbz r30,0(r7)
	ctx.current_instruction = 0x881A6798;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r24)
	ctx.current_instruction = 0x881A67A0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// extsb r26,r30
	ctx.r26.s64 = ctx.r30.s8;
	// lbz r30,0(r10)
	ctx.current_instruction = 0x881A67A8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,0(r11)
	ctx.current_instruction = 0x881A67B0;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r6,r26,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r27
	ctx.current_instruction = 0x881A67C8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwzx r6,r6,r31
	ctx.current_instruction = 0x881A67CC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & ctx.r18.u64;
	// stb r6,0(r11)
	ctx.current_instruction = 0x881A67D8;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_881A67DC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x881a6888
	if (!ctx.cr6.eq) goto loc_881A6888;
	// lwz r30,1776(r3)
	ctx.current_instruction = 0x881A67E4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lhz r30,2(r30)
	ctx.current_instruction = 0x881A67F0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// beq cr6,0x881a6888
	if (ctx.cr6.eq) goto loc_881A6888;
	// lwz r30,1776(r3)
	ctx.current_instruction = 0x881A67FC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r29,r22,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r30,r6
	ctx.r28.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lhz r28,2(r28)
	ctx.current_instruction = 0x881A680C;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// lhz r30,2(r30)
	ctx.current_instruction = 0x881A6810;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881a6888
	if (!ctx.cr6.eq) goto loc_881A6888;
	// lwz r30,1780(r3)
	ctx.current_instruction = 0x881A681C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lhz r6,2(r6)
	ctx.current_instruction = 0x881A6828;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r30,2(r29)
	ctx.current_instruction = 0x881A682C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881a6888
	if (!ctx.cr6.eq) goto loc_881A6888;
	// lbz r6,1(r7)
	ctx.current_instruction = 0x881A6838;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r27,r31,512
	ctx.r27.s64 = ctx.r31.s64 + 512;
	// lbz r30,3(r8)
	ctx.current_instruction = 0x881A6840;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// addi r26,r31,768
	ctx.r26.s64 = ctx.r31.s64 + 768;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r10)
	ctx.current_instruction = 0x881A684C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r22,r30
	ctx.r22.s64 = ctx.r30.s8;
	// lbz r30,3(r25)
	ctx.current_instruction = 0x881A6854;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r25.u32 + 3);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,1(r11)
	ctx.current_instruction = 0x881A685C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r27
	ctx.current_instruction = 0x881A6874;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwzx r6,r6,r26
	ctx.current_instruction = 0x881A6878;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & ctx.r18.u64;
	// stb r6,1(r11)
	ctx.current_instruction = 0x881A6884;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_881A6888:
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881A6888;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r26,r23,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// lhz r6,2(r6)
	ctx.current_instruction = 0x881A6894;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x881a691c
	if (ctx.cr6.eq) goto loc_881A691C;
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881A68A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// lhz r30,2(r6)
	ctx.current_instruction = 0x881A68A8;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x881A68AC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881a691c
	if (!ctx.cr6.eq) goto loc_881A691C;
	// lwz r6,1780(r3)
	ctx.current_instruction = 0x881A68B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + ctx.r26.u64;
	// lhz r30,2(r6)
	ctx.current_instruction = 0x881A68C0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x881A68C4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881a691c
	if (!ctx.cr6.eq) goto loc_881A691C;
	// lbz r6,1(r7)
	ctx.current_instruction = 0x881A68D0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r27,r31,256
	ctx.r27.s64 = ctx.r31.s64 + 256;
	// lbz r30,0(r7)
	ctx.current_instruction = 0x881A68D8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r10)
	ctx.current_instruction = 0x881A68E0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r23,r30
	ctx.r23.s64 = ctx.r30.s8;
	// lbz r30,0(r10)
	ctx.current_instruction = 0x881A68E8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r22,1(r11)
	ctx.current_instruction = 0x881A68F0;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r23,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r31
	ctx.current_instruction = 0x881A6908;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwzx r6,r6,r27
	ctx.current_instruction = 0x881A690C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 & ctx.r22.u64;
	// stb r6,1(r11)
	ctx.current_instruction = 0x881A6918;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_881A691C:
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881A691C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r27,r21,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r27,r6
	ctx.current_instruction = 0x881A6924;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r6.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x881a69a8
	if (ctx.cr6.eq) goto loc_881A69A8;
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881A6930;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// lhzx r30,r6,r26
	ctx.current_instruction = 0x881A6934;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// lhzx r6,r6,r27
	ctx.current_instruction = 0x881A6938;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r27.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881a69a8
	if (!ctx.cr6.eq) goto loc_881A69A8;
	// lwz r6,1780(r3)
	ctx.current_instruction = 0x881A6944;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// lhzx r30,r6,r26
	ctx.current_instruction = 0x881A6948;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// lhzx r6,r6,r27
	ctx.current_instruction = 0x881A694C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r27.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881a69a8
	if (!ctx.cr6.eq) goto loc_881A69A8;
	// lbz r6,2(r7)
	ctx.current_instruction = 0x881A6958;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// addi r23,r31,512
	ctx.r23.s64 = ctx.r31.s64 + 512;
	// lbz r30,0(r7)
	ctx.current_instruction = 0x881A6960;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r22,r31,768
	ctx.r22.s64 = ctx.r31.s64 + 768;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,2(r10)
	ctx.current_instruction = 0x881A696C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r21,r30
	ctx.r21.s64 = ctx.r30.s8;
	// lbz r30,0(r10)
	ctx.current_instruction = 0x881A6974;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,2(r11)
	ctx.current_instruction = 0x881A697C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r21,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r23
	ctx.current_instruction = 0x881A6994;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// lwzx r6,r6,r22
	ctx.current_instruction = 0x881A6998;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & ctx.r18.u64;
	// stb r6,2(r11)
	ctx.current_instruction = 0x881A69A4;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_881A69A8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881a6a3c
	if (!ctx.cr6.eq) goto loc_881A6A3C;
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881A69B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// lhzx r6,r27,r6
	ctx.current_instruction = 0x881A69B4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r6.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x881a6a3c
	if (ctx.cr6.eq) goto loc_881A6A3C;
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881A69C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 + ctx.r6.u64;
	// lhz r30,-2(r6)
	ctx.current_instruction = 0x881A69C8;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x881A69CC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881a6a3c
	if (!ctx.cr6.eq) goto loc_881A6A3C;
	// lwz r6,1780(r3)
	ctx.current_instruction = 0x881A69D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lhz r30,-2(r6)
	ctx.current_instruction = 0x881A69E0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x881A69E4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881a6a3c
	if (!ctx.cr6.eq) goto loc_881A6A3C;
	// lbz r6,2(r7)
	ctx.current_instruction = 0x881A69F0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// addi r23,r31,256
	ctx.r23.s64 = ctx.r31.s64 + 256;
	// lbz r30,3(r9)
	ctx.current_instruction = 0x881A69F8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,2(r10)
	ctx.current_instruction = 0x881A6A00;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r22,r30
	ctx.r22.s64 = ctx.r30.s8;
	// lbz r30,3(r24)
	ctx.current_instruction = 0x881A6A08;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r24.u32 + 3);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r21,2(r11)
	ctx.current_instruction = 0x881A6A10;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r31
	ctx.current_instruction = 0x881A6A28;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwzx r6,r6,r23
	ctx.current_instruction = 0x881A6A2C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 & ctx.r21.u64;
	// stb r6,2(r11)
	ctx.current_instruction = 0x881A6A38;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_881A6A3C:
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881A6A3C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 + ctx.r6.u64;
	// lhz r6,2(r6)
	ctx.current_instruction = 0x881A6A44;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x881a6ad8
	if (ctx.cr6.eq) goto loc_881A6AD8;
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881A6A50;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r30,r6,r26
	ctx.r30.u64 = ctx.r6.u64 + ctx.r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lhz r30,2(r30)
	ctx.current_instruction = 0x881A6A5C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r6,2(r6)
	ctx.current_instruction = 0x881A6A60;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881a6ad8
	if (!ctx.cr6.eq) goto loc_881A6AD8;
	// lwz r6,1780(r3)
	ctx.current_instruction = 0x881A6A6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r30,r6,r26
	ctx.r30.u64 = ctx.r6.u64 + ctx.r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lhz r30,2(r30)
	ctx.current_instruction = 0x881A6A78;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r6,2(r6)
	ctx.current_instruction = 0x881A6A7C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881a6ad8
	if (!ctx.cr6.eq) goto loc_881A6AD8;
	// lbz r6,3(r7)
	ctx.current_instruction = 0x881A6A88;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// addi r26,r31,512
	ctx.r26.s64 = ctx.r31.s64 + 512;
	// lbz r30,1(r7)
	ctx.current_instruction = 0x881A6A90;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r23,r31,768
	ctx.r23.s64 = ctx.r31.s64 + 768;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,3(r10)
	ctx.current_instruction = 0x881A6A9C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r22,r30
	ctx.r22.s64 = ctx.r30.s8;
	// lbz r30,1(r10)
	ctx.current_instruction = 0x881A6AA4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r21,3(r11)
	ctx.current_instruction = 0x881A6AAC;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r26
	ctx.current_instruction = 0x881A6AC4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lwzx r6,r6,r23
	ctx.current_instruction = 0x881A6AC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 & ctx.r21.u64;
	// stb r6,3(r11)
	ctx.current_instruction = 0x881A6AD4;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
loc_881A6AD8:
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881A6AD8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 + ctx.r6.u64;
	// lhz r6,2(r6)
	ctx.current_instruction = 0x881A6AE0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x881a6b68
	if (ctx.cr6.eq) goto loc_881A6B68;
	// lwz r6,1776(r3)
	ctx.current_instruction = 0x881A6AEC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 + ctx.r6.u64;
	// lhz r30,2(r6)
	ctx.current_instruction = 0x881A6AF4;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x881A6AF8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881a6b68
	if (!ctx.cr6.eq) goto loc_881A6B68;
	// lwz r6,1780(r3)
	ctx.current_instruction = 0x881A6B04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lhz r30,2(r6)
	ctx.current_instruction = 0x881A6B0C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x881A6B10;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881a6b68
	if (!ctx.cr6.eq) goto loc_881A6B68;
	// lbz r6,3(r7)
	ctx.current_instruction = 0x881A6B1C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// addi r27,r31,256
	ctx.r27.s64 = ctx.r31.s64 + 256;
	// lbz r30,1(r7)
	ctx.current_instruction = 0x881A6B24;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,3(r10)
	ctx.current_instruction = 0x881A6B2C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r26,r30
	ctx.r26.s64 = ctx.r30.s8;
	// lbz r30,1(r10)
	ctx.current_instruction = 0x881A6B34;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r23,3(r11)
	ctx.current_instruction = 0x881A6B3C;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r6,r26,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r31
	ctx.current_instruction = 0x881A6B54;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwzx r6,r6,r27
	ctx.current_instruction = 0x881A6B58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 & ctx.r23.u64;
	// stb r6,3(r11)
	ctx.current_instruction = 0x881A6B64;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
loc_881A6B68:
	// lwz r6,136(r3)
	ctx.current_instruction = 0x881A6B68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mullw r5,r6,r5
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r29,r5,r4
	ctx.r29.u64 = ctx.r5.u64 + ctx.r4.u64;
	// bne cr6,0x881a6c64
	if (!ctx.cr6.eq) goto loc_881A6C64;
	// lwz r4,1784(r3)
	ctx.current_instruction = 0x881A6B7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r4
	ctx.current_instruction = 0x881A6B84;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x881a6c64
	if (ctx.cr6.eq) goto loc_881A6C64;
	// subf r6,r6,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r6.u64;
	// lwz r4,1784(r3)
	ctx.current_instruction = 0x881A6B94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r4,r5
	ctx.current_instruction = 0x881A6B9C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// lhzx r4,r4,r6
	ctx.current_instruction = 0x881A6BA0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x881a6c64
	if (!ctx.cr6.eq) goto loc_881A6C64;
	// lwz r4,1788(r3)
	ctx.current_instruction = 0x881A6BAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1788);
	// lhzx r6,r4,r6
	ctx.current_instruction = 0x881A6BB0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// lhzx r5,r4,r5
	ctx.current_instruction = 0x881A6BB4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x881a6c64
	if (!ctx.cr6.eq) goto loc_881A6C64;
	// lbz r6,4(r8)
	ctx.current_instruction = 0x881A6BC0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// addi r28,r31,512
	ctx.r28.s64 = ctx.r31.s64 + 512;
	// lbz r4,4(r7)
	ctx.current_instruction = 0x881A6BC8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// addi r27,r31,768
	ctx.r27.s64 = ctx.r31.s64 + 768;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r5,4(r25)
	ctx.current_instruction = 0x881A6BD4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lbz r30,4(r10)
	ctx.current_instruction = 0x881A6BDC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r26,4(r11)
	ctx.current_instruction = 0x881A6BE4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r23,5(r11)
	ctx.current_instruction = 0x881A6BEC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r4,r30
	ctx.r5.u64 = ctx.r4.u64 + ctx.r30.u64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r30,r31,512
	ctx.r30.s64 = ctx.r31.s64 + 512;
	// addi r26,r31,768
	ctx.r26.s64 = ctx.r31.s64 + 768;
	// lwzx r4,r4,r27
	ctx.current_instruction = 0x881A6C0C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// lwzx r6,r6,r28
	ctx.current_instruction = 0x881A6C10;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// and r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stb r6,4(r11)
	ctx.current_instruction = 0x881A6C1C;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lbz r5,5(r7)
	ctx.current_instruction = 0x881A6C20;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// lbz r6,5(r25)
	ctx.current_instruction = 0x881A6C24;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r25.u32 + 5);
	// lbz r4,5(r10)
	ctx.current_instruction = 0x881A6C28;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,5(r8)
	ctx.current_instruction = 0x881A6C2C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 5);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r5,r26
	ctx.current_instruction = 0x881A6C50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// lwzx r6,r4,r30
	ctx.current_instruction = 0x881A6C54;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// and r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 & ctx.r23.u64;
	// stb r4,5(r11)
	ctx.current_instruction = 0x881A6C60;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
loc_881A6C64:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881a6d48
	if (!ctx.cr6.eq) goto loc_881A6D48;
	// lwz r6,1784(r3)
	ctx.current_instruction = 0x881A6C6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// rlwinm r8,r29,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r8,r6
	ctx.current_instruction = 0x881A6C74;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,16384
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16384, ctx.xer);
	// beq cr6,0x881a6d48
	if (ctx.cr6.eq) goto loc_881A6D48;
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lhz r5,-2(r6)
	ctx.current_instruction = 0x881A6C88;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r4,0(r6)
	ctx.current_instruction = 0x881A6C8C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x881a6d48
	if (!ctx.cr6.eq) goto loc_881A6D48;
	// lwz r6,1788(r3)
	ctx.current_instruction = 0x881A6C98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1788);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lhz r6,-2(r8)
	ctx.current_instruction = 0x881A6CA0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r5,0(r8)
	ctx.current_instruction = 0x881A6CA4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x881a6d48
	if (!ctx.cr6.eq) goto loc_881A6D48;
	// lbz r8,4(r7)
	ctx.current_instruction = 0x881A6CB0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// lbz r6,4(r9)
	ctx.current_instruction = 0x881A6CB8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r4,4(r10)
	ctx.current_instruction = 0x881A6CC4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// lbz r6,4(r24)
	ctx.current_instruction = 0x881A6CCC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r24.u32 + 4);
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r29,4(r11)
	ctx.current_instruction = 0x881A6CD4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r28,5(r11)
	ctx.current_instruction = 0x881A6CDC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r31
	ctx.current_instruction = 0x881A6CF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r6,r6,r3
	ctx.current_instruction = 0x881A6CF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// or r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 | ctx.r6.u64;
	// and r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 & ctx.r29.u64;
	// stb r8,4(r11)
	ctx.current_instruction = 0x881A6D00;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r3,5(r9)
	ctx.current_instruction = 0x881A6D04;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r5,5(r7)
	ctx.current_instruction = 0x881A6D08;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// lbz r7,5(r10)
	ctx.current_instruction = 0x881A6D10;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// lbz r10,5(r24)
	ctx.current_instruction = 0x881A6D18;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 5);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r31
	ctx.current_instruction = 0x881A6D34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r9,r3,r30
	ctx.current_instruction = 0x881A6D38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r6,r7,r28
	ctx.r6.u64 = ctx.r7.u64 & ctx.r28.u64;
	// stb r6,5(r11)
	ctx.current_instruction = 0x881A6D44;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
loc_881A6D48:
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B7B10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B7B10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B7B10) {
			switch (rex_dispatch_address) {
				case 0x881B7B18:
				case 0x881B7CAC:
				case 0x881B7CC4:
				case 0x881B7CCC:
				case 0x881B7D78:
				case 0x881B7DE8:
				case 0x881B7FC8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B7B10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B7B18: goto loc_881B7B18;
		case 0x881B7CAC: goto loc_881B7CAC;
		case 0x881B7CC4: goto loc_881B7CC4;
		case 0x881B7CCC: goto loc_881B7CCC;
		case 0x881B7D78: goto loc_881B7D78;
		case 0x881B7DE8: goto loc_881B7DE8;
		case 0x881B7FC8: goto loc_881B7FC8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881B7B18;
	__savegprlr_25(ctx, base);
loc_881B7B18:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881B7B18;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1764(r3)
	ctx.current_instruction = 0x881B7B1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1764);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r27,16
	ctx.r27.s64 = 16;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r30,4(r11)
	ctx.current_instruction = 0x881B7B38;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r5,1764(r3)
	ctx.current_instruction = 0x881B7B40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 1764);
	// li r9,32
	ctx.r9.s64 = 32;
	// std r30,8(r5)
	ctx.current_instruction = 0x881B7B48;
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r30.u64);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r5,1764(r31)
	ctx.current_instruction = 0x881B7B50;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// li r8,48
	ctx.r8.s64 = 48;
	// stvx128 v63,r5,r27
	ea = (ctx.r5.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r5,1764(r31)
	ctx.current_instruction = 0x881B7B60;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// li r7,64
	ctx.r7.s64 = 64;
	// stvx128 v63,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,1764(r31)
	ctx.current_instruction = 0x881B7B6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// li r3,80
	ctx.r3.s64 = 80;
	// stvx128 v63,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,1764(r31)
	ctx.current_instruction = 0x881B7B78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// li r11,96
	ctx.r11.s64 = 96;
	// stvx128 v63,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,112
	ctx.r7.s64 = 112;
	// lwz r5,1764(r31)
	ctx.current_instruction = 0x881B7B88;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// stvx128 v63,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,1764(r31)
	ctx.current_instruction = 0x881B7B90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// stvx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,1764(r31)
	ctx.current_instruction = 0x881B7B98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// stvx128 v63,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,1764(r31)
	ctx.current_instruction = 0x881B7BA0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbz r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~31;
	memset((void*)REX_RAW_ADDR(ea), 0, 32);
	// lwz r7,0(r28)
	ctx.current_instruction = 0x881B7BAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r5,r7,0,27,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881b7c40
	if (ctx.cr6.eq) goto loc_881B7C40;
	// lwz r9,1800(r31)
	ctx.current_instruction = 0x881B7BBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1800);
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// lwz r11,228(r1)
	ctx.current_instruction = 0x881B7BC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// beq cr6,0x881b7c0c
	if (ctx.cr6.eq) goto loc_881B7C0C;
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
loc_881B7BDC:
	// sth r30,16(r11)
	ctx.current_instruction = 0x881B7BDC;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r30.u16);
	// lhzx r9,r11,r10
	ctx.current_instruction = 0x881B7BE0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r9,0(r11)
	ctx.current_instruction = 0x881B7BE4;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x881b7bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7BDC;
	// lwz r11,1800(r31)
	ctx.current_instruction = 0x881B7BF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b7c04
	if (ctx.cr6.eq) goto loc_881B7C04;
	// lwz r7,1824(r31)
	ctx.current_instruction = 0x881B7BFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// b 0x881b7c90
	goto loc_881B7C90;
loc_881B7C04:
	// lwz r7,1808(r31)
	ctx.current_instruction = 0x881B7C04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1808);
	// b 0x881b7c90
	goto loc_881B7C90;
loc_881B7C0C:
	// addi r11,r6,18
	ctx.r11.s64 = ctx.r6.s64 + 18;
loc_881B7C10:
	// lhzx r9,r11,r10
	ctx.current_instruction = 0x881B7C10;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r30,-16(r11)
	ctx.current_instruction = 0x881B7C14;
	REX_STORE_U16(ctx.r11.u32 + -16, ctx.r30.u16);
	// sth r9,0(r11)
	ctx.current_instruction = 0x881B7C18;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x881b7c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7C10;
	// lwz r11,1800(r31)
	ctx.current_instruction = 0x881B7C24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b7c38
	if (ctx.cr6.eq) goto loc_881B7C38;
	// lwz r7,1820(r31)
	ctx.current_instruction = 0x881B7C30;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// b 0x881b7c90
	goto loc_881B7C90;
loc_881B7C38:
	// lwz r7,1812(r31)
	ctx.current_instruction = 0x881B7C38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1812);
	// b 0x881b7c90
	goto loc_881B7C90;
loc_881B7C40:
	// sth r30,28(r6)
	ctx.current_instruction = 0x881B7C40;
	REX_STORE_U16(ctx.r6.u32 + 28, ctx.r30.u16);
	// sth r30,6(r6)
	ctx.current_instruction = 0x881B7C44;
	REX_STORE_U16(ctx.r6.u32 + 6, ctx.r30.u16);
	// sth r30,10(r6)
	ctx.current_instruction = 0x881B7C48;
	REX_STORE_U16(ctx.r6.u32 + 10, ctx.r30.u16);
	// sth r30,26(r6)
	ctx.current_instruction = 0x881B7C4C;
	REX_STORE_U16(ctx.r6.u32 + 26, ctx.r30.u16);
	// sth r30,22(r6)
	ctx.current_instruction = 0x881B7C50;
	REX_STORE_U16(ctx.r6.u32 + 22, ctx.r30.u16);
	// sth r30,8(r6)
	ctx.current_instruction = 0x881B7C54;
	REX_STORE_U16(ctx.r6.u32 + 8, ctx.r30.u16);
	// sth r30,2(r6)
	ctx.current_instruction = 0x881B7C58;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r30.u16);
	// sth r30,18(r6)
	ctx.current_instruction = 0x881B7C5C;
	REX_STORE_U16(ctx.r6.u32 + 18, ctx.r30.u16);
	// sth r30,4(r6)
	ctx.current_instruction = 0x881B7C60;
	REX_STORE_U16(ctx.r6.u32 + 4, ctx.r30.u16);
	// sth r30,20(r6)
	ctx.current_instruction = 0x881B7C64;
	REX_STORE_U16(ctx.r6.u32 + 20, ctx.r30.u16);
	// sth r30,24(r6)
	ctx.current_instruction = 0x881B7C68;
	REX_STORE_U16(ctx.r6.u32 + 24, ctx.r30.u16);
	// sth r30,12(r6)
	ctx.current_instruction = 0x881B7C6C;
	REX_STORE_U16(ctx.r6.u32 + 12, ctx.r30.u16);
	// sth r30,14(r6)
	ctx.current_instruction = 0x881B7C70;
	REX_STORE_U16(ctx.r6.u32 + 14, ctx.r30.u16);
	// sth r30,30(r6)
	ctx.current_instruction = 0x881B7C74;
	REX_STORE_U16(ctx.r6.u32 + 30, ctx.r30.u16);
	// lwz r11,1800(r31)
	ctx.current_instruction = 0x881B7C78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b7c8c
	if (ctx.cr6.eq) goto loc_881B7C8C;
	// lwz r7,1816(r31)
	ctx.current_instruction = 0x881B7C84;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// b 0x881b7c90
	goto loc_881B7C90;
loc_881B7C8C:
	// lwz r7,1804(r31)
	ctx.current_instruction = 0x881B7C8C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1804);
loc_881B7C90:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x881B7C90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x881b7cb0
	if (ctx.cr6.lt) goto loc_881B7CB0;
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lbz r5,14(r11)
	ctx.current_instruction = 0x881B7CA4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// bl 0x881c5de0
	ctx.lr = 0x881B7CAC;
	sub_881C5DE0(ctx, base);
loc_881B7CAC:
	// b 0x881b7ccc
	goto loc_881B7CCC;
loc_881B7CB0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lbz r5,14(r11)
	ctx.current_instruction = 0x881B7CB8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// beq cr6,0x881b7cc8
	if (ctx.cr6.eq) goto loc_881B7CC8;
	// bl 0x881c5de0
	ctx.lr = 0x881B7CC4;
	sub_881C5DE0(ctx, base);
loc_881B7CC4:
	// b 0x881b7ccc
	goto loc_881B7CCC;
loc_881B7CC8:
	// bl 0x8816e7a8
	ctx.lr = 0x881B7CCC;
	sub_8816E7A8(ctx, base);
loc_881B7CCC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881b7fcc
	if (!ctx.cr6.eq) goto loc_881B7FCC;
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x881B7CD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b7fb0
	if (ctx.cr6.eq) goto loc_881B7FB0;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881B7CF0:
	// lwz r7,1764(r31)
	ctx.current_instruction = 0x881B7CF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwz r6,1888(r31)
	ctx.current_instruction = 0x881B7CF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// lwzx r5,r11,r7
	ctx.current_instruction = 0x881B7D00;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// sthx r5,r6,r10
	ctx.current_instruction = 0x881B7D04;
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r5.u16);
	// lwz r6,1888(r31)
	ctx.current_instruction = 0x881B7D08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// lwz r7,1764(r31)
	ctx.current_instruction = 0x881B7D0C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,4(r3)
	ctx.current_instruction = 0x881B7D14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// sth r7,2(r6)
	ctx.current_instruction = 0x881B7D24;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r7.u16);
	// lwz r6,1888(r31)
	ctx.current_instruction = 0x881B7D28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// lwz r7,1764(r31)
	ctx.current_instruction = 0x881B7D2C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r7,-4(r4)
	ctx.current_instruction = 0x881B7D38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,-2(r3)
	ctx.current_instruction = 0x881B7D40;
	REX_STORE_U16(ctx.r3.u32 + -2, ctx.r6.u16);
	// lwz r5,1764(r31)
	ctx.current_instruction = 0x881B7D44;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lwz r4,1888(r31)
	ctx.current_instruction = 0x881B7D48;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// lwzx r3,r9,r5
	ctx.current_instruction = 0x881B7D4C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sthx r9,r4,r8
	ctx.current_instruction = 0x881B7D54;
	REX_STORE_U16(ctx.r4.u32 + ctx.r8.u32, ctx.r9.u16);
	// bdnz 0x881b7cf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7CF0;
	// lwz r11,3216(r31)
	ctx.current_instruction = 0x881B7D5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3216);
	// li r6,255
	ctx.r6.s64 = 255;
	// lwz r3,1888(r31)
	ctx.current_instruction = 0x881B7D64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B7D78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B7D78:
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x881B7D78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881b7df4
	if (ctx.cr6.eq) goto loc_881B7DF4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x881b7df4
	if (ctx.cr6.eq) goto loc_881B7DF4;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x881B7D8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881b7df4
	if (!ctx.cr6.eq) goto loc_881B7DF4;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
loc_881B7DA4:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// li r8,128
	ctx.r8.s64 = 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B7DB4:
	// stbu r8,1(r11)
	ctx.current_instruction = 0x881B7DB4;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x881b7db4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7DB4;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// bne 0x881b7da4
	if (!ctx.cr0.eq) goto loc_881B7DA4;
	// lwz r11,3184(r31)
	ctx.current_instruction = 0x881B7DC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3184);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r7,264(r31)
	ctx.current_instruction = 0x881B7DD4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,1888(r31)
	ctx.current_instruction = 0x881B7DDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B7DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B7DE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881B7DF4:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bge cr6,0x881b7e2c
	if (!ctx.cr6.lt) goto loc_881B7E2C;
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// lwz r9,236(r1)
	ctx.current_instruction = 0x881B7E00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// lwz r8,136(r31)
	ctx.current_instruction = 0x881B7E08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r7,r11,754
	ctx.r7.s64 = ctx.r11.s64 + 754;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r6,r31
	ctx.current_instruction = 0x881B7E24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// b 0x881b7e50
	goto loc_881B7E50;
loc_881B7E2C:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881B7E2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x881b7e44
	if (!ctx.cr6.eq) goto loc_881B7E44;
	// lwz r11,3028(r31)
	ctx.current_instruction = 0x881B7E3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// b 0x881b7e48
	goto loc_881B7E48;
loc_881B7E44:
	// lwz r11,3036(r31)
	ctx.current_instruction = 0x881B7E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
loc_881B7E48:
	// lwz r9,236(r1)
	ctx.current_instruction = 0x881B7E48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_881B7E50:
	// li r7,8
	ctx.r7.s64 = 8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,1888(r31)
	ctx.current_instruction = 0x881B7E58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881B7E68:
	// lhzu r7,2(r9)
	ctx.current_instruction = 0x881B7E68;
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x881B7E6C;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881b7e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7E68;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,1888(r31)
	ctx.current_instruction = 0x881B7E78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// li r8,8
	ctx.r8.s64 = 8;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r6,14
	ctx.r6.s64 = ctx.r6.s64 + 14;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881B7E90:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881B7E90;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r7)
	ctx.current_instruction = 0x881B7E94;
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x881b7e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7E90;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,1888(r31)
	ctx.current_instruction = 0x881B7EA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r7,30
	ctx.r7.s64 = ctx.r7.s64 + 30;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881B7EB8:
	// lhzu r9,2(r7)
	ctx.current_instruction = 0x881B7EB8;
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ctx.current_instruction = 0x881B7EBC;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881b7eb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7EB8;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1888(r31)
	ctx.current_instruction = 0x881B7EC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r8,46
	ctx.r7.s64 = ctx.r8.s64 + 46;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881B7EE8:
	// lhzu r8,2(r7)
	ctx.current_instruction = 0x881B7EE8;
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881B7EEC;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881b7ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7EE8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,1888(r31)
	ctx.current_instruction = 0x881B7EF8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r7,62
	ctx.r7.s64 = ctx.r7.s64 + 62;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881B7F10:
	// lhzu r9,2(r7)
	ctx.current_instruction = 0x881B7F10;
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ctx.current_instruction = 0x881B7F14;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881b7f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7F10;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,1888(r31)
	ctx.current_instruction = 0x881B7F20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r8,78
	ctx.r7.s64 = ctx.r8.s64 + 78;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881B7F40:
	// lhzu r8,2(r7)
	ctx.current_instruction = 0x881B7F40;
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881B7F44;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881b7f40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7F40;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1888(r31)
	ctx.current_instruction = 0x881B7F50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// li r9,8
	ctx.r9.s64 = 8;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r8,94
	ctx.r7.s64 = ctx.r8.s64 + 94;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881B7F70:
	// lhzu r8,2(r7)
	ctx.current_instruction = 0x881B7F70;
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881B7F74;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881b7f70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7F70;
	// mulli r8,r10,14
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// lwz r9,1888(r31)
	ctx.current_instruction = 0x881B7F80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1888);
	// li r10,8
	ctx.r10.s64 = 8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,110
	ctx.r9.s64 = ctx.r9.s64 + 110;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B7F98:
	// lhzu r10,2(r9)
	ctx.current_instruction = 0x881B7F98;
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r10,2(r11)
	ctx.current_instruction = 0x881B7F9C;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x881b7f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B7F98;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881B7FB0:
	// lwz r11,3196(r31)
	ctx.current_instruction = 0x881B7FB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3196);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,1764(r31)
	ctx.current_instruction = 0x881B7FBC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B7FC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B7FC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881B7FCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CC1C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881CC1C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CC1C0;
	ctx.current_instruction = 0x881CC1C0;
	uint32_t ea{};
	// mr r12,r9
	ctx.r12.u64 = ctx.r9.u64;
	// lvx v8,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx v28,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v29,-1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// rldicr r2,r7,32,31
	ctx.r2.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// vupkhsh v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16))));
	// li r6,80
	ctx.r6.s64 = 80;
	// vupklsh v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx v9,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r2,r8,r2
	ctx.r2.u64 = ctx.r8.u64 + ctx.r2.u64;
	// lvx v18,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx v19,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r12
	ctx.r5.u64 = ctx.r12.u64;
	// li r12,64
	ctx.r12.s64 = 64;
	// lvx v1,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v2,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,112
	ctx.r7.s64 = 112;
	// lvx v3,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16))));
	// lvx v5,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// lvx v6,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// lvx v4,r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v15.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16))));
	// vupkhsh v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16))));
	// vcfsx v10,v10,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vupkhsh v14,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16))));
	// vcfsx v11,v11,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vcfsx v12,v12,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx v7,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v13,v13,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vupklsh v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vcfsx v15,v15,0
	simde_mm_store_ps(ctx.v15.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v15.u32)));
	// vupkhsh v17,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16))));
	// vcfsx v14,v14,0
	simde_mm_store_ps(ctx.v14.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v14.u32)));
	// vupklsh v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcfsx v16,v16,0
	simde_mm_store_ps(ctx.v16.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vupklsh v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vupklsh v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vcfsx v0,v0,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vupklsh v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vcfsx v17,v17,0
	simde_mm_store_ps(ctx.v17.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v17.u32)));
	// vupklsh v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vcfsx v1,v1,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vupklsh v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vcfsx v2,v2,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vcfsx v3,v3,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vspltish v30,0
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x0)));
	// vcfsx v4,v4,0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vcfsx v5,v5,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vcfsx v6,v6,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vcfsx v7,v7,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmulfp128 v10,v10,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v11,v11,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v12,v12,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v13,v13,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v14,v14,v8
	simde_mm_store_ps(ctx.v14.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v14.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v15,v15,v8
	simde_mm_store_ps(ctx.v15.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v15.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v16,v16,v8
	simde_mm_store_ps(ctx.v16.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v16.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v17,v17,v8
	simde_mm_store_ps(ctx.v17.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v17.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v0,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v1,v1,v8
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v2,v2,v8
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v3,v3,v8
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v4,v4,v8
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v5,v5,v8
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v6,v6,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v7,v7,v8
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vctsxs v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vctsxs v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vctsxs v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v12.f32)));
	// vctsxs v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v13.f32)));
	// vctsxs v14,v14,0
	simde_mm_store_si128((simde__m128i*)ctx.v14.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v14.f32)));
	// vctsxs v15,v15,0
	simde_mm_store_si128((simde__m128i*)ctx.v15.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v15.f32)));
	// vctsxs v16,v16,0
	simde_mm_store_si128((simde__m128i*)ctx.v16.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v16.f32)));
	// vctsxs v3,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vspltish v31,4
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x4)));
	// vctsxs v4,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vctsxs v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// vctsxs v1,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vctsxs v17,v17,0
	simde_mm_store_si128((simde__m128i*)ctx.v17.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v17.f32)));
	// vctsxs v7,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vctsxs v2,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vctsxs v5,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vctsxs v6,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vpkswss v23,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s32), simde_mm_load_si128((simde__m128i*)ctx.v13.s32)));
	// vpkswss v24,v14,v4
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.s32), simde_mm_load_si128((simde__m128i*)ctx.v14.s32)));
	// vpkswss v20,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s32), simde_mm_load_si128((simde__m128i*)ctx.v10.s32)));
	// vpkswss v21,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.s32), simde_mm_load_si128((simde__m128i*)ctx.v11.s32)));
	// vsrah v13,v23,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v27,v17,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.s32), simde_mm_load_si128((simde__m128i*)ctx.v17.s32)));
	// vsrah v14,v24,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v22,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s32), simde_mm_load_si128((simde__m128i*)ctx.v12.s32)));
	// vsrah v10,v20,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v25,v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.s32), simde_mm_load_si128((simde__m128i*)ctx.v15.s32)));
	// vsrah v11,v21,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v26,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.s32), simde_mm_load_si128((simde__m128i*)ctx.v16.s32)));
	// vcmpequh v4,v30,v24
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsrah v17,v27,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v22,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v25,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v26,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_set1_epi16(short(0x1)));
	// vcmpequh v3,v30,v23
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vsel v13,v18,v19,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vsel v14,v18,v19,v14
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vsel v10,v18,v19,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vcmpequh v0,v30,v20
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsel v11,v18,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vcmpequh v1,v30,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vcmpequh v7,v30,v27
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vsel v17,v18,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vcmpequh v5,v30,v25
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vcmpequh v6,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vcmpequh v2,v30,v22
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vsel v12,v18,v19,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vsel v15,v18,v19,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vsel v16,v18,v19,v16
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8))));
	// vsel v13,v13,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v14,v14,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v10,v10,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v11,v11,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v17,v17,v30,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v17.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v12,v12,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v15,v15,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vsel v16,v16,v30,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8))));
	// vspltish v30,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x2)));
	// vaddshs v2,v24,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v8,v23,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// vand v10,v10,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// vaddshs v5,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v27,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vslh v24,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v4,v22,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vslh v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v7,v25,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vslh v25,v1,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v3,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vslh v1,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vaddshs v1,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubuhm v9,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v10,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v14,v69,v69
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_load_si128((simde__m128i*)ctx.v69.u8));
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v11,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor128 v15,v72,v72
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_load_si128((simde__m128i*)ctx.v72.u8));
	// vaddshs v1,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
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
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
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
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v27,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubuhm v6,v6,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
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
	// vslh v27,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vaddshs v26,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
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
	// vsubuhm v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v2,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vaddshs v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v6,v6,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vslh v24,v4,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v2,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v4,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
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
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubuhm v3,v24,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
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
	// vaddshs v25,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
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
	// vmrglw v31,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vperm v5,v24,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vmrghw v30,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v23.u32), simde_mm_load_si128((simde__m128i*)ctx.v22.u32)));
	// vperm v8,v25,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v6,v27,v31,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v3,v27,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vspltish v27,3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_set1_epi16(short(0x3)));
	// vperm v4,v25,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vaddshs v13,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vspltish v25,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_set1_epi16(short(0x1)));
	// vperm v7,v26,v30,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v2,v26,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vslh v10,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v1,v24,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vspltish v26,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v9,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v17,8
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v20,v6,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v21,6
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_set1_epi16(short(0x6)));
	// vslh v18,v1,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v2,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v29,v17,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubuhm v11,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
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
	// vslh v17,v6,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
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
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vslh v19,v8,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v9,v12,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v17,v17,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v19,v8,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v3,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v23,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v17,v9,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
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
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v2,v2,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vaddshs v6,v6,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsubuhm v7,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsubuhm v2,v2,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsrah v22,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v5,v5,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v6,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vsubuhm v2,v2,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsubuhm v2,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// rldicl r3,r2,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r2.u64, 32) & 0xFFFFFFFF;
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// clrldi r2,r2,32
	ctx.r2.u64 = ctx.r2.u64 & 0xFFFFFFFF;
	// vadduhm v10,v10,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vaddshs v11,v11,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubuhm v7,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v15,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsrah v24,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v15,v15,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v30,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
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
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v27,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v15,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// stvx v26,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v30,v30,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
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
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lvx v14,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v24,v14
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v15,v15,v14
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vpkshus v24,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v26,v26,v14
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// rldicr r5,r2,1,62
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r2.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// vaddshs v27,v27,v14
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// rldicr r7,r2,2,61
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r2.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// vaddshs v28,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// add r6,r5,r2
	ctx.r6.u64 = ctx.r5.u64 + ctx.r2.u64;
	// vpkshus v15,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v29,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vpkshus v26,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v30,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vpkshus v27,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vaddshs v31,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// stvewx v24,r0,r3
	ctx.current_instruction = 0x881CC794;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v28,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// stvewx v24,r0,r4
	ctx.current_instruction = 0x881CC79C;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v29,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// add r8,r7,r2
	ctx.r8.u64 = ctx.r7.u64 + ctx.r2.u64;
	// vpkshus v30,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// vpkshus v31,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// stvewx v15,r2,r3
	ctx.current_instruction = 0x881CC7B4;
	ea = (ctx.r2.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v15.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stvewx v15,r2,r4
	ctx.current_instruction = 0x881CC7BC;
	ea = (ctx.r2.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v15.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r5,r3
	ctx.current_instruction = 0x881CC7C0;
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r5,r4
	ctx.current_instruction = 0x881CC7C4;
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r6,r3
	ctx.current_instruction = 0x881CC7C8;
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r6,r4
	ctx.current_instruction = 0x881CC7CC;
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r7,r3
	ctx.current_instruction = 0x881CC7D0;
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r7,r4
	ctx.current_instruction = 0x881CC7D4;
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r8,r3
	ctx.current_instruction = 0x881CC7D8;
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r8,r4
	ctx.current_instruction = 0x881CC7DC;
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r9,r3
	ctx.current_instruction = 0x881CC7E0;
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r9,r4
	ctx.current_instruction = 0x881CC7E4;
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r10,r3
	ctx.current_instruction = 0x881CC7E8;
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r10,r4
	ctx.current_instruction = 0x881CC7EC;
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__savevmx_22) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED20);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED20;
	ctx.current_instruction = 0x881EED20;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_31) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED68);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED68;
	ctx.current_instruction = 0x881EED68;
	uint32_t ea{};
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__savevmx_73) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEDBC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEDBC;
	ctx.current_instruction = 0x881EEDBC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_97) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE7C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE7C;
	ctx.current_instruction = 0x881EEE7C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_22) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEFB8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEFB8;
	ctx.current_instruction = 0x881EEFB8;
	uint32_t ea{};
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_87) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF0C4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF0C4;
	ctx.current_instruction = 0x881EF0C4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_106) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF15C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF15C;
	ctx.current_instruction = 0x881EF15C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_881EFEA0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EFEA0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EFEA0;
	ctx.current_instruction = 0x881EFEA0;
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.current_instruction = 0x881EFEA0;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	ctx.current_instruction = 0x881EFEA4;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stfd f0,-24(r1)
	ctx.current_instruction = 0x881EFEB4;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f0.u64);
	// addi r11,r11,16104
	ctx.r11.s64 = ctx.r11.s64 + 16104;
	// lfd f30,8624(r10)
	ctx.current_instruction = 0x881EFEBC;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 8624);
	// lfd f11,8(r11)
	ctx.current_instruction = 0x881EFEC0;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f12,32(r11)
	ctx.current_instruction = 0x881EFEC4;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfd f10,40(r11)
	ctx.current_instruction = 0x881EFEC8;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fmul f13,f11,f0
	ctx.f13.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lfd f9,48(r11)
	ctx.current_instruction = 0x881EFED0;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f8,112(r11)
	ctx.current_instruction = 0x881EFED4;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f7,104(r11)
	ctx.current_instruction = 0x881EFED8;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f6,96(r11)
	ctx.current_instruction = 0x881EFEDC;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f5,88(r11)
	ctx.current_instruction = 0x881EFEE0;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// lfd f4,80(r11)
	ctx.current_instruction = 0x881EFEE4;
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// lfd f3,72(r11)
	ctx.current_instruction = 0x881EFEE8;
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f2,64(r11)
	ctx.current_instruction = 0x881EFEEC;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f31,56(r11)
	ctx.current_instruction = 0x881EFEF0;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// fctid f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f13,28(r11)
	ctx.current_instruction = 0x881EFEF8;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f1,f13,f12
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fcfid f13,f11
	ctx.f13.f64 = double(ctx.f11.s64);
	// fnmsub f11,f10,f13,f0
	ctx.f11.f64 = -std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f0.f64);
	// fctidz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-32(r1)
	ctx.current_instruction = 0x881EFF0C;
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f10.u64);
	// ld r9,-32(r1)
	ctx.current_instruction = 0x881EFF10;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// clrldi r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 & 0x1;
	// fnmsub f9,f9,f13,f11
	ctx.f9.f64 = -std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f11.f64);
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// fmul f13,f9,f9
	ctx.f13.f64 = ctx.f9.f64 * ctx.f9.f64;
	// fmadd f11,f8,f13,f7
	ctx.f11.f64 = std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f7.f64);
	// fmadd f10,f11,f13,f6
	ctx.f10.f64 = std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f6.f64);
	// fmadd f8,f10,f13,f5
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f5.f64);
	// fmadd f7,f8,f13,f4
	ctx.f7.f64 = std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f4.f64);
	// fmadd f6,f7,f13,f3
	ctx.f6.f64 = std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64);
	// fmadd f5,f6,f13,f2
	ctx.f5.f64 = std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f2.f64);
	// fmadd f4,f5,f13,f31
	ctx.f4.f64 = std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f31.f64);
	// fmadd f3,f4,f13,f30
	ctx.f3.f64 = std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f30.f64);
	// fmul f13,f3,f9
	ctx.f13.f64 = ctx.f3.f64 * ctx.f9.f64;
	// beq cr6,0x881eff50
	if (ctx.cr6.eq) goto loc_881EFF50;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_881EFF50:
	// ld r10,-24(r1)
	ctx.current_instruction = 0x881EFF50;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// fmul f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// beq cr6,0x881eff74
	if (ctx.cr6.eq) goto loc_881EFF74;
	// lfd f13,16(r11)
	ctx.current_instruction = 0x881EFF60;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// fsub f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 - ctx.f13.f64;
	// lfd f0,16680(r11)
	ctx.current_instruction = 0x881EFF6C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16680);
	// fsel f1,f13,f0,f12
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
loc_881EFF74:
	// lfd f30,-16(r1)
	ctx.current_instruction = 0x881EFF74;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.current_instruction = 0x881EFF78;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1FB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F1FB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F1FB0) {
			switch (rex_dispatch_address) {
				case 0x881F1FB8:
				case 0x881F2020:
				case 0x881F202C:
				case 0x881F2060:
				case 0x881F2088:
				case 0x881F20CC:
				case 0x881F20F8:
				case 0x881F2104:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1FB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F1FB8: goto loc_881F1FB8;
		case 0x881F2020: goto loc_881F2020;
		case 0x881F202C: goto loc_881F202C;
		case 0x881F2060: goto loc_881F2060;
		case 0x881F2088: goto loc_881F2088;
		case 0x881F20CC: goto loc_881F20CC;
		case 0x881F20F8: goto loc_881F20F8;
		case 0x881F2104: goto loc_881F2104;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881F1FB8;
	__savegprlr_28(ctx, base);
loc_881F1FB8:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x881F1FB8;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881f1fe0
	if (ctx.cr6.eq) goto loc_881F1FE0;
	// lwz r11,0(r5)
	ctx.current_instruction = 0x881F1FCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,84(r1)
	ctx.current_instruction = 0x881F1FD0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r11,80(r1)
	ctx.current_instruction = 0x881F1FD4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r30,80(r1)
	ctx.current_instruction = 0x881F1FD8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x881f1fe4
	goto loc_881F1FE4;
loc_881F1FE0:
	// extsw r30,r4
	ctx.r30.s64 = ctx.r4.s32;
loc_881F1FE4:
	// lis r31,-30680
	ctx.r31.s64 = -2010644480;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x881f2070
	if (ctx.cr6.lt) goto loc_881F2070;
	// beq cr6,0x881f203c
	if (ctx.cr6.eq) goto loc_881F203C;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x881f203c
	if (!ctx.cr6.lt) goto loc_881F203C;
	// lwz r11,15376(r31)
	ctx.current_instruction = 0x881F1FFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.current_instruction = 0x881F2014;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881F2020;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881F2020:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x881f2030
	if (!ctx.cr0.lt) goto loc_881F2030;
loc_881F2028:
	// bl 0x881ed488
	ctx.lr = 0x881F202C;
	sub_881ED488(ctx, base);
loc_881F202C:
	// b 0x881f2114
	goto loc_881F2114;
loc_881F2030:
	// ld r11,136(r1)
	ctx.current_instruction = 0x881F2030;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
loc_881F2034:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x881f2074
	goto loc_881F2074;
loc_881F203C:
	// lwz r11,15376(r31)
	ctx.current_instruction = 0x881F203C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.current_instruction = 0x881F2054;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881F2060;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881F2060:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881f2028
	if (ctx.cr0.lt) goto loc_881F2028;
	// ld r11,80(r1)
	ctx.current_instruction = 0x881F2068;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x881f2034
	goto loc_881F2034;
loc_881F2070:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881F2074:
	// std r11,80(r1)
	ctx.current_instruction = 0x881F2074;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x881f208c
	if (!ctx.cr6.lt) goto loc_881F208C;
	// li r3,131
	ctx.r3.s64 = 131;
loc_881F2084:
	// bl 0x881ed470
	ctx.lr = 0x881F2088;
	sub_881ED470(ctx, base);
loc_881F2088:
	// b 0x881f2114
	goto loc_881F2114;
loc_881F208C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x881f20a8
	if (!ctx.cr6.eq) goto loc_881F20A8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881F2094;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f20a8
	if (ctx.cr0.eq) goto loc_881F20A8;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x881f2084
	goto loc_881F2084;
loc_881F20A8:
	// lwz r11,15376(r31)
	ctx.current_instruction = 0x881F20A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15376);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.current_instruction = 0x881F20C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881F20CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881F20CC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881f2100
	if (ctx.cr0.lt) goto loc_881F2100;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881f20e4
	if (ctx.cr6.eq) goto loc_881F20E4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881F20DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	ctx.current_instruction = 0x881F20E0;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_881F20E4:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881F20E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x881f20f8
	if (!ctx.cr6.eq) goto loc_881F20F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x881e9018
	ctx.lr = 0x881F20F8;
	sub_881E9018(ctx, base);
loc_881F20F8:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x881F20F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x881f2118
	goto loc_881F2118;
loc_881F2100:
	// bl 0x881ed488
	ctx.lr = 0x881F2104;
	sub_881ED488(ctx, base);
loc_881F2104:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881f2114
	if (ctx.cr6.eq) goto loc_881F2114;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	ctx.current_instruction = 0x881F2110;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_881F2114:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_881F2118:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882060B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882060B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882060B8) {
			switch (rex_dispatch_address) {
				case 0x882060C0:
				case 0x88206308:
				case 0x8820633C:
				case 0x8820634C:
				case 0x88206358:
				case 0x882064A0:
				case 0x882065DC:
				case 0x8820669C:
				case 0x88206728:
				case 0x88206740:
				case 0x8820685C:
				case 0x882068A4:
				case 0x88206918:
				case 0x88206960:
				case 0x882069EC:
				case 0x88206A78:
				case 0x88206A90:
				case 0x88206AF8:
				case 0x88206BE0:
				case 0x88206C28:
				case 0x88206CB4:
				case 0x88206CFC:
				case 0x88206D68:
				case 0x88206DB0:
				case 0x882075A4:
				case 0x88207630:
				case 0x88207650:
				case 0x882076B0:
				case 0x88207730:
				case 0x88207778:
				case 0x88207828:
				case 0x88207870:
				case 0x882078A0:
				case 0x88207928:
				case 0x88207B5C:
				case 0x88207B74:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882060B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882060C0: goto loc_882060C0;
		case 0x88206308: goto loc_88206308;
		case 0x8820633C: goto loc_8820633C;
		case 0x8820634C: goto loc_8820634C;
		case 0x88206358: goto loc_88206358;
		case 0x882064A0: goto loc_882064A0;
		case 0x882065DC: goto loc_882065DC;
		case 0x8820669C: goto loc_8820669C;
		case 0x88206728: goto loc_88206728;
		case 0x88206740: goto loc_88206740;
		case 0x8820685C: goto loc_8820685C;
		case 0x882068A4: goto loc_882068A4;
		case 0x88206918: goto loc_88206918;
		case 0x88206960: goto loc_88206960;
		case 0x882069EC: goto loc_882069EC;
		case 0x88206A78: goto loc_88206A78;
		case 0x88206A90: goto loc_88206A90;
		case 0x88206AF8: goto loc_88206AF8;
		case 0x88206BE0: goto loc_88206BE0;
		case 0x88206C28: goto loc_88206C28;
		case 0x88206CB4: goto loc_88206CB4;
		case 0x88206CFC: goto loc_88206CFC;
		case 0x88206D68: goto loc_88206D68;
		case 0x88206DB0: goto loc_88206DB0;
		case 0x882075A4: goto loc_882075A4;
		case 0x88207630: goto loc_88207630;
		case 0x88207650: goto loc_88207650;
		case 0x882076B0: goto loc_882076B0;
		case 0x88207730: goto loc_88207730;
		case 0x88207778: goto loc_88207778;
		case 0x88207828: goto loc_88207828;
		case 0x88207870: goto loc_88207870;
		case 0x882078A0: goto loc_882078A0;
		case 0x88207928: goto loc_88207928;
		case 0x88207B5C: goto loc_88207B5C;
		case 0x88207B74: goto loc_88207B74;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x882060C0;
	__savegprlr_14(ctx, base);
loc_882060C0:
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x882060C0;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,52(r4)
	ctx.current_instruction = 0x882060C4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lwz r10,348(r4)
	ctx.current_instruction = 0x882060CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 348);
	// li r17,0
	ctx.r17.s64 = 0;
	// lhz r9,50(r4)
	ctx.current_instruction = 0x882060D4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,380(r1)
	ctx.current_instruction = 0x882060DC;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r27,r9,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r23,272(r3)
	ctx.current_instruction = 0x882060E8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// stw r3,340(r1)
	ctx.current_instruction = 0x882060EC;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r5,356(r1)
	ctx.current_instruction = 0x882060F4;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r6,364(r1)
	ctx.current_instruction = 0x88206100;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r8,116(r1)
	ctx.current_instruction = 0x88206108;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r10,112(r1)
	ctx.current_instruction = 0x88206110;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r27,100(r1)
	ctx.current_instruction = 0x88206114;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bne cr6,0x8820614c
	if (!ctx.cr6.eq) goto loc_8820614C;
	// lwz r11,22264(r28)
	ctx.current_instruction = 0x8820611C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 22264);
	// stw r11,20(r5)
	ctx.current_instruction = 0x88206120;
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// lwz r10,22276(r28)
	ctx.current_instruction = 0x88206124;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 22276);
	// stw r10,24(r5)
	ctx.current_instruction = 0x88206128;
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// lwz r9,22268(r28)
	ctx.current_instruction = 0x8820612C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 22268);
	// stw r9,28(r5)
	ctx.current_instruction = 0x88206130;
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r9.u32);
	// lwz r8,22280(r28)
	ctx.current_instruction = 0x88206134;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 22280);
	// stw r8,32(r5)
	ctx.current_instruction = 0x88206138;
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r8.u32);
	// stw r17,0(r5)
	ctx.current_instruction = 0x8820613C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r17.u32);
	// stw r17,4(r5)
	ctx.current_instruction = 0x88206140;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r17.u32);
	// sth r17,16(r5)
	ctx.current_instruction = 0x88206144;
	REX_STORE_U16(ctx.r5.u32 + 16, ctx.r17.u16);
	// b 0x882061a4
	goto loc_882061A4;
loc_8820614C:
	// addi r10,r26,92
	ctx.r10.s64 = ctx.r26.s64 + 92;
	// mullw r11,r27,r7
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r6,r9,r7
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r5,0(r8)
	ctx.current_instruction = 0x88206168;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r5,20(r21)
	ctx.current_instruction = 0x8820616C;
	REX_STORE_U32(ctx.r21.u32 + 20, ctx.r5.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,1,16,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lwz r4,4(r8)
	ctx.current_instruction = 0x88206180;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,24(r21)
	ctx.current_instruction = 0x88206184;
	REX_STORE_U32(ctx.r21.u32 + 24, ctx.r4.u32);
	// lwz r9,8(r8)
	ctx.current_instruction = 0x88206188;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,28(r21)
	ctx.current_instruction = 0x8820618C;
	REX_STORE_U32(ctx.r21.u32 + 28, ctx.r9.u32);
	// lwz r4,12(r8)
	ctx.current_instruction = 0x88206190;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r4,32(r21)
	ctx.current_instruction = 0x88206194;
	REX_STORE_U32(ctx.r21.u32 + 32, ctx.r4.u32);
	// stw r6,0(r21)
	ctx.current_instruction = 0x88206198;
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r6.u32);
	// stw r11,4(r21)
	ctx.current_instruction = 0x8820619C;
	REX_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// sth r5,16(r21)
	ctx.current_instruction = 0x882061A0;
	REX_STORE_U16(ctx.r21.u32 + 16, ctx.r5.u16);
loc_882061A4:
	// sth r17,18(r21)
	ctx.current_instruction = 0x882061A4;
	REX_STORE_U16(ctx.r21.u32 + 18, ctx.r17.u16);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r25.u32, ctx.xer);
	// stw r7,80(r1)
	ctx.current_instruction = 0x882061B0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bge cr6,0x88207ce8
	if (!ctx.cr6.lt) goto loc_88207CE8;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,25536
	ctx.r8.s64 = ctx.r11.s64 + 25536;
	// addi r22,r10,26488
	ctx.r22.s64 = ctx.r10.s64 + 26488;
	// ori r20,r9,32768
	ctx.r20.u64 = ctx.r9.u64 | 32768;
	// stw r8,104(r1)
	ctx.current_instruction = 0x882061D0;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r18,2
	ctx.r18.s64 = 131072;
	// stw r22,88(r1)
	ctx.current_instruction = 0x882061D8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
loc_882061DC:
	// addi r11,r24,264
	ctx.r11.s64 = ctx.r24.s64 + 264;
	// sth r17,18(r21)
	ctx.current_instruction = 0x882061E0;
	REX_STORE_U16(ctx.r21.u32 + 18, ctx.r17.u16);
	// stw r11,304(r24)
	ctx.current_instruction = 0x882061E4;
	REX_STORE_U32(ctx.r24.u32 + 304, ctx.r11.u32);
	// lwz r11,21940(r28)
	ctx.current_instruction = 0x882061E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x882063f8
	if (ctx.cr6.eq) goto loc_882063F8;
	// lwz r11,1304(r24)
	ctx.current_instruction = 0x882061F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 1304);
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x882061FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x882063f8
	if (ctx.cr6.eq) goto loc_882063F8;
	// lwz r11,84(r28)
	ctx.current_instruction = 0x88206208;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// ld r10,104(r24)
	ctx.current_instruction = 0x8820620C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r24.u32 + 104);
	// std r10,0(r11)
	ctx.current_instruction = 0x88206210;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,84(r28)
	ctx.current_instruction = 0x88206214;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,112(r24)
	ctx.current_instruction = 0x88206218;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 112);
	// stw r8,8(r9)
	ctx.current_instruction = 0x8820621C;
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,116(r24)
	ctx.current_instruction = 0x88206220;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 116);
	// lwz r6,84(r28)
	ctx.current_instruction = 0x88206224;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r7,12(r6)
	ctx.current_instruction = 0x88206228;
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r7.u32);
	// lwz r5,84(r28)
	ctx.current_instruction = 0x8820622C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r4,120(r24)
	ctx.current_instruction = 0x88206230;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 120);
	// stw r4,16(r5)
	ctx.current_instruction = 0x88206234;
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r4.u32);
	// lwz r3,84(r28)
	ctx.current_instruction = 0x88206238;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,124(r24)
	ctx.current_instruction = 0x8820623C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 124);
	// stw r11,20(r3)
	ctx.current_instruction = 0x88206240;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.current_instruction = 0x88206244;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,128(r24)
	ctx.current_instruction = 0x88206248;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 128);
	// stw r9,24(r10)
	ctx.current_instruction = 0x8820624C;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,84(r28)
	ctx.current_instruction = 0x88206250;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,132(r24)
	ctx.current_instruction = 0x88206254;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 132);
	// stw r7,28(r8)
	ctx.current_instruction = 0x88206258;
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
	// lwz r6,84(r28)
	ctx.current_instruction = 0x8820625C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,136(r24)
	ctx.current_instruction = 0x88206260;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + 136);
	// stw r5,32(r6)
	ctx.current_instruction = 0x88206264;
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.current_instruction = 0x88206268;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r3,140(r24)
	ctx.current_instruction = 0x8820626C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 140);
	// stw r3,36(r4)
	ctx.current_instruction = 0x88206270;
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r3.u32);
	// lwz r11,84(r28)
	ctx.current_instruction = 0x88206274;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r10,144(r24)
	ctx.current_instruction = 0x88206278;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 144);
	// stw r10,40(r11)
	ctx.current_instruction = 0x8820627C;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r9,84(r28)
	ctx.current_instruction = 0x88206280;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,148(r24)
	ctx.current_instruction = 0x88206284;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 148);
	// stw r8,44(r9)
	ctx.current_instruction = 0x88206288;
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r8.u32);
	// lwz r7,84(r28)
	ctx.current_instruction = 0x8820628C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,152(r24)
	ctx.current_instruction = 0x88206290;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 152);
	// stw r6,48(r7)
	ctx.current_instruction = 0x88206294;
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r6.u32);
	// lwz r31,84(r28)
	ctx.current_instruction = 0x88206298;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,28(r31)
	ctx.current_instruction = 0x8820629C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8820633c
	if (ctx.cr6.eq) goto loc_8820633C;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882062A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88206318
	if (!ctx.cr6.lt) goto loc_88206318;
loc_882062C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88206318
	if (ctx.cr6.eq) goto loc_88206318;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x882062CC;
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
	ctx.current_instruction = 0x882062F0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x882062F8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88206308
	if (!ctx.cr0.lt) goto loc_88206308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88206308;
	sub_88156678(ctx, base);
loc_88206308:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88206308;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x882062c0
	if (ctx.cr6.gt) goto loc_882062C0;
loc_88206318:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88206318;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x88206328;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8820632C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8820633c
	if (!ctx.cr0.lt) goto loc_8820633C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8820633C;
	sub_88156678(ctx, base);
loc_8820633C:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x8820633C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x88156500
	ctx.lr = 0x8820634C;
	sub_88156500(ctx, base);
loc_8820634C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881adb80
	ctx.lr = 0x88206358;
	sub_881ADB80(ctx, base);
loc_88206358:
	// lwz r10,84(r28)
	ctx.current_instruction = 0x88206358;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ld r8,0(r10)
	ctx.current_instruction = 0x88206364;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,104(r24)
	ctx.current_instruction = 0x88206368;
	REX_STORE_U64(ctx.r24.u32 + 104, ctx.r8.u64);
	// lwz r7,84(r28)
	ctx.current_instruction = 0x8820636C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,8(r7)
	ctx.current_instruction = 0x88206370;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r6,112(r24)
	ctx.current_instruction = 0x88206374;
	REX_STORE_U32(ctx.r24.u32 + 112, ctx.r6.u32);
	// lwz r5,84(r28)
	ctx.current_instruction = 0x88206378;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r4,12(r5)
	ctx.current_instruction = 0x8820637C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r4,116(r24)
	ctx.current_instruction = 0x88206380;
	REX_STORE_U32(ctx.r24.u32 + 116, ctx.r4.u32);
	// lwz r11,84(r28)
	ctx.current_instruction = 0x88206384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88206388;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,120(r24)
	ctx.current_instruction = 0x8820638C;
	REX_STORE_U32(ctx.r24.u32 + 120, ctx.r10.u32);
	// lwz r8,84(r28)
	ctx.current_instruction = 0x88206390;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,20(r8)
	ctx.current_instruction = 0x88206394;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// stw r7,124(r24)
	ctx.current_instruction = 0x88206398;
	REX_STORE_U32(ctx.r24.u32 + 124, ctx.r7.u32);
	// lwz r6,84(r28)
	ctx.current_instruction = 0x8820639C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,24(r6)
	ctx.current_instruction = 0x882063A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// stw r5,128(r24)
	ctx.current_instruction = 0x882063A4;
	REX_STORE_U32(ctx.r24.u32 + 128, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.current_instruction = 0x882063A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,28(r4)
	ctx.current_instruction = 0x882063AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,132(r24)
	ctx.current_instruction = 0x882063B0;
	REX_STORE_U32(ctx.r24.u32 + 132, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.current_instruction = 0x882063B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,32(r10)
	ctx.current_instruction = 0x882063B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r8,136(r24)
	ctx.current_instruction = 0x882063BC;
	REX_STORE_U32(ctx.r24.u32 + 136, ctx.r8.u32);
	// lwz r7,84(r28)
	ctx.current_instruction = 0x882063C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,36(r7)
	ctx.current_instruction = 0x882063C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// stw r6,140(r24)
	ctx.current_instruction = 0x882063C8;
	REX_STORE_U32(ctx.r24.u32 + 140, ctx.r6.u32);
	// lwz r5,84(r28)
	ctx.current_instruction = 0x882063CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r4,40(r5)
	ctx.current_instruction = 0x882063D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// stw r4,144(r24)
	ctx.current_instruction = 0x882063D4;
	REX_STORE_U32(ctx.r24.u32 + 144, ctx.r4.u32);
	// lwz r11,84(r28)
	ctx.current_instruction = 0x882063D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r10,44(r11)
	ctx.current_instruction = 0x882063DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,148(r24)
	ctx.current_instruction = 0x882063E0;
	REX_STORE_U32(ctx.r24.u32 + 148, ctx.r10.u32);
	// lwz r8,84(r28)
	ctx.current_instruction = 0x882063E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,48(r8)
	ctx.current_instruction = 0x882063E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// stw r7,152(r24)
	ctx.current_instruction = 0x882063EC;
	REX_STORE_U32(ctx.r24.u32 + 152, ctx.r7.u32);
	// stb r9,1251(r24)
	ctx.current_instruction = 0x882063F0;
	REX_STORE_U8(ctx.r24.u32 + 1251, ctx.r9.u8);
	// bne cr6,0x88207dd8
	if (!ctx.cr6.eq) goto loc_88207DD8;
loc_882063F8:
	// lwz r11,3988(r28)
	ctx.current_instruction = 0x882063F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88206538
	if (ctx.cr6.eq) goto loc_88206538;
	// lwz r11,84(r28)
	ctx.current_instruction = 0x88206404;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// ld r10,104(r24)
	ctx.current_instruction = 0x8820640C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r24.u32 + 104);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r10,0(r11)
	ctx.current_instruction = 0x88206414;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,112(r24)
	ctx.current_instruction = 0x88206418;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 112);
	// lwz r8,84(r28)
	ctx.current_instruction = 0x8820641C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r9,8(r8)
	ctx.current_instruction = 0x88206420;
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r7,84(r28)
	ctx.current_instruction = 0x88206424;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,116(r24)
	ctx.current_instruction = 0x88206428;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 116);
	// stw r6,12(r7)
	ctx.current_instruction = 0x8820642C;
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r5,84(r28)
	ctx.current_instruction = 0x88206430;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,120(r24)
	ctx.current_instruction = 0x88206434;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 120);
	// stw r11,16(r5)
	ctx.current_instruction = 0x88206438;
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.current_instruction = 0x8820643C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,124(r24)
	ctx.current_instruction = 0x88206440;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 124);
	// stw r9,20(r10)
	ctx.current_instruction = 0x88206444;
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r8,84(r28)
	ctx.current_instruction = 0x88206448;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,128(r24)
	ctx.current_instruction = 0x8820644C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 128);
	// stw r7,24(r8)
	ctx.current_instruction = 0x88206450;
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,84(r28)
	ctx.current_instruction = 0x88206454;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,132(r24)
	ctx.current_instruction = 0x88206458;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + 132);
	// stw r5,28(r6)
	ctx.current_instruction = 0x8820645C;
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r5.u32);
	// lwz r11,136(r24)
	ctx.current_instruction = 0x88206460;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 136);
	// lwz r10,84(r28)
	ctx.current_instruction = 0x88206464;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r11,32(r10)
	ctx.current_instruction = 0x88206468;
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r9,84(r28)
	ctx.current_instruction = 0x8820646C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,140(r24)
	ctx.current_instruction = 0x88206470;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 140);
	// stw r8,36(r9)
	ctx.current_instruction = 0x88206474;
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
	// lwz r7,84(r28)
	ctx.current_instruction = 0x88206478;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,144(r24)
	ctx.current_instruction = 0x8820647C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 144);
	// stw r6,40(r7)
	ctx.current_instruction = 0x88206480;
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r6.u32);
	// lwz r5,84(r28)
	ctx.current_instruction = 0x88206484;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,148(r24)
	ctx.current_instruction = 0x88206488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 148);
	// stw r11,44(r5)
	ctx.current_instruction = 0x8820648C;
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.current_instruction = 0x88206490;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,152(r24)
	ctx.current_instruction = 0x88206494;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 152);
	// stw r9,48(r10)
	ctx.current_instruction = 0x88206498;
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// bl 0x881adf70
	ctx.lr = 0x882064A0;
	sub_881ADF70(ctx, base);
loc_882064A0:
	// lwz r8,84(r28)
	ctx.current_instruction = 0x882064A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ld r7,0(r8)
	ctx.current_instruction = 0x882064A8;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,104(r24)
	ctx.current_instruction = 0x882064AC;
	REX_STORE_U64(ctx.r24.u32 + 104, ctx.r7.u64);
	// lwz r6,84(r28)
	ctx.current_instruction = 0x882064B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,8(r6)
	ctx.current_instruction = 0x882064B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,112(r24)
	ctx.current_instruction = 0x882064B8;
	REX_STORE_U32(ctx.r24.u32 + 112, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.current_instruction = 0x882064BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,12(r4)
	ctx.current_instruction = 0x882064C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,116(r24)
	ctx.current_instruction = 0x882064C4;
	REX_STORE_U32(ctx.r24.u32 + 116, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.current_instruction = 0x882064C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,16(r10)
	ctx.current_instruction = 0x882064CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,120(r24)
	ctx.current_instruction = 0x882064D0;
	REX_STORE_U32(ctx.r24.u32 + 120, ctx.r9.u32);
	// lwz r8,84(r28)
	ctx.current_instruction = 0x882064D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,20(r8)
	ctx.current_instruction = 0x882064D8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// stw r7,124(r24)
	ctx.current_instruction = 0x882064DC;
	REX_STORE_U32(ctx.r24.u32 + 124, ctx.r7.u32);
	// lwz r6,84(r28)
	ctx.current_instruction = 0x882064E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,24(r6)
	ctx.current_instruction = 0x882064E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// stw r5,128(r24)
	ctx.current_instruction = 0x882064E8;
	REX_STORE_U32(ctx.r24.u32 + 128, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.current_instruction = 0x882064EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,28(r4)
	ctx.current_instruction = 0x882064F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,132(r24)
	ctx.current_instruction = 0x882064F4;
	REX_STORE_U32(ctx.r24.u32 + 132, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.current_instruction = 0x882064F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,32(r10)
	ctx.current_instruction = 0x882064FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,136(r24)
	ctx.current_instruction = 0x88206500;
	REX_STORE_U32(ctx.r24.u32 + 136, ctx.r9.u32);
	// lwz r8,84(r28)
	ctx.current_instruction = 0x88206504;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r7,36(r8)
	ctx.current_instruction = 0x88206508;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// stw r7,140(r24)
	ctx.current_instruction = 0x8820650C;
	REX_STORE_U32(ctx.r24.u32 + 140, ctx.r7.u32);
	// lwz r6,84(r28)
	ctx.current_instruction = 0x88206510;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r5,40(r6)
	ctx.current_instruction = 0x88206514;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// stw r5,144(r24)
	ctx.current_instruction = 0x88206518;
	REX_STORE_U32(ctx.r24.u32 + 144, ctx.r5.u32);
	// lwz r4,84(r28)
	ctx.current_instruction = 0x8820651C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,44(r4)
	ctx.current_instruction = 0x88206520;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,148(r24)
	ctx.current_instruction = 0x88206524;
	REX_STORE_U32(ctx.r24.u32 + 148, ctx.r11.u32);
	// lwz r10,84(r28)
	ctx.current_instruction = 0x88206528;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r9,48(r10)
	ctx.current_instruction = 0x8820652C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,152(r24)
	ctx.current_instruction = 0x88206530;
	REX_STORE_U32(ctx.r24.u32 + 152, ctx.r9.u32);
	// bne cr6,0x88207dd8
	if (!ctx.cr6.eq) goto loc_88207DD8;
loc_88206538:
	// lwz r10,1304(r24)
	ctx.current_instruction = 0x88206538;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 1304);
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r19
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r19.u64);
	// stw r17,84(r1)
	ctx.current_instruction = 0x88206544;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// lwzx r7,r10,r9
	ctx.current_instruction = 0x88206550;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// addi r19,r11,-1
	ctx.r19.s64 = ctx.r11.s64 + -1;
	// stw r19,92(r1)
	ctx.current_instruction = 0x88206560;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// beq cr6,0x88207ca0
	if (ctx.cr6.eq) goto loc_88207CA0;
	// b 0x88206574
	goto loc_88206574;
loc_8820656C:
	// lwz r19,92(r1)
	ctx.current_instruction = 0x8820656C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r17,84(r1)
	ctx.current_instruction = 0x88206570;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88206574:
	// lwz r11,0(r24)
	ctx.current_instruction = 0x88206574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r28,3
	ctx.r28.s64 = 3;
	// li r10,128
	ctx.r10.s64 = 128;
	// lwz r9,12(r11)
	ctx.current_instruction = 0x88206580;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// dcbt r10,r9
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,0(r23)
	ctx.current_instruction = 0x8820658C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lbz r6,24(r24)
	ctx.current_instruction = 0x88206590;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r24.u32 + 24);
	// rlwimi r7,r8,17,27,28
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x18) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFE7);
	// rlwimi r7,r8,17,14,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x30000) | (ctx.r7.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwimi r7,r8,17,3,3
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x10000000) | (ctx.r7.u64 & 0xFFFFFFFFEFFFFFFF);
	// stb r6,4(r23)
	ctx.current_instruction = 0x882065A0;
	REX_STORE_U8(ctx.r23.u32 + 4, ctx.r6.u8);
	// stw r7,0(r23)
	ctx.current_instruction = 0x882065A4;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r7.u32);
	// lbz r5,26(r24)
	ctx.current_instruction = 0x882065A8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r24.u32 + 26);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x882065e8
	if (!ctx.cr6.eq) goto loc_882065E8;
	// lwz r3,0(r24)
	ctx.current_instruction = 0x882065B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// ld r10,0(r3)
	ctx.current_instruction = 0x882065B8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x882065BC;
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
	ctx.current_instruction = 0x882065CC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x882065D0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x882065dc
	if (!ctx.cr0.lt) goto loc_882065DC;
	// bl 0x88156678
	ctx.lr = 0x882065DC;
	sub_88156678(ctx, base);
loc_882065DC:
	// lwz r11,0(r23)
	ctx.current_instruction = 0x882065DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwimi r11,r31,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r23)
	ctx.current_instruction = 0x882065E4;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_882065E8:
	// lwz r11,0(r23)
	ctx.current_instruction = 0x882065E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// rlwinm r11,r11,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r11,0(r23)
	ctx.current_instruction = 0x882065F8;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8820661c
	if (!ctx.cr6.eq) goto loc_8820661C;
	// rlwinm r11,r11,0,24,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r23)
	ctx.current_instruction = 0x88206614;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x882067d0
	goto loc_882067D0;
loc_8820661C:
	// lwz r11,1388(r24)
	ctx.current_instruction = 0x8820661C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 1388);
	// lwz r31,0(r24)
	ctx.current_instruction = 0x88206620;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88206634
	if (!ctx.cr6.eq) goto loc_88206634;
	// stw r28,20(r31)
	ctx.current_instruction = 0x8820662C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// b 0x8820676c
	goto loc_8820676C;
loc_88206634:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x88206634;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x88206638;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	ctx.current_instruction = 0x88206640;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.current_instruction = 0x88206650;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88206720
	if (ctx.cr6.lt) goto loc_88206720;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88206660;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x88206670;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88206678;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88206718
	if (!ctx.cr6.lt) goto loc_88206718;
loc_88206680:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88206680;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88206684;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x882066ac
	if (ctx.cr6.lt) goto loc_882066AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x8820669C;
	sub_88156440(ctx, base);
loc_8820669C:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88206680
	if (ctx.cr6.eq) goto loc_88206680;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88206758
	goto loc_88206758;
loc_882066AC:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x882066AC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x882066B4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x882066BC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.current_instruction = 0x882066C0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.current_instruction = 0x882066C8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x882066CC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882066D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x882066D8;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x882066E0;
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
	ctx.current_instruction = 0x882066FC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x88206714;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_88206718:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88206758
	goto loc_88206758;
loc_88206720:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88206728;
	sub_88156500(ctx, base);
loc_88206728:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88206728;
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
	ctx.lr = 0x88206740;
	sub_88156500(ctx, base);
loc_88206740:
	// add r10,r30,r20
	ctx.r10.u64 = ctx.r30.u64 + ctx.r20.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x88206748;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88206728
	if (ctx.cr6.lt) goto loc_88206728;
loc_88206758:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88207cdc
	if (ctx.cr6.lt) goto loc_88207CDC;
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// bgt cr6,0x88207cdc
	if (ctx.cr6.gt) goto loc_88207CDC;
loc_8820676C:
	// lwz r10,1392(r24)
	ctx.current_instruction = 0x8820676C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 1392);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88206784
	if (!ctx.cr6.eq) goto loc_88206784;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x88206784
	if (!ctx.cr6.eq) goto loc_88206784;
	// li r11,14
	ctx.r11.s64 = 14;
loc_88206784:
	// lwz r10,104(r1)
	ctx.current_instruction = 0x88206784;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,0(r23)
	ctx.current_instruction = 0x88206788;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r6,r9,0,24,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// lbzx r5,r11,r10
	ctx.current_instruction = 0x88206790;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r6,r6,0,16,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// rlwinm r11,r5,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// clrlwi r3,r5,29
	ctx.r3.u64 = ctx.r5.u32 & 0x7;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// srawi r8,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r5,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 5;
	// or r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r7,r5,31
	ctx.r7.u64 = ctx.r5.u32 & 0x1;
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r10,0(r23)
	ctx.current_instruction = 0x882067CC;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
loc_882067D0:
	// lwz r11,0(r23)
	ctx.current_instruction = 0x882067D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bne cr6,0x88207b44
	if (!ctx.cr6.eq) goto loc_88207B44;
	// lbz r11,33(r24)
	ctx.current_instruction = 0x882067E0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 33);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r10,0(r23)
	ctx.current_instruction = 0x882067E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// rlwimi r10,r11,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// rlwinm r9,r10,0,15,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r9,0(r23)
	ctx.current_instruction = 0x882067FC;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// lwz r31,0(r24)
	ctx.current_instruction = 0x88206800;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88206804;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8820686c
	if (!ctx.cr6.lt) goto loc_8820686C;
loc_88206814:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8820686c
	if (ctx.cr6.eq) goto loc_8820686C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88206820;
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
	ctx.current_instruction = 0x88206844;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8820684C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8820685c
	if (!ctx.cr0.lt) goto loc_8820685C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8820685C;
	sub_88156678(ctx, base);
loc_8820685C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8820685C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88206814
	if (ctx.cr6.gt) goto loc_88206814;
loc_8820686C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88206870;
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
	ctx.current_instruction = 0x88206888;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88206894;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x882068a4
	if (!ctx.cr0.lt) goto loc_882068A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x882068A4;
	sub_88156678(ctx, base);
loc_882068A4:
	// lwz r11,0(r23)
	ctx.current_instruction = 0x882068A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwimi r11,r10,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// stw r11,0(r23)
	ctx.current_instruction = 0x882068B8;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r31,0(r24)
	ctx.current_instruction = 0x882068BC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882068C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88206928
	if (!ctx.cr6.lt) goto loc_88206928;
loc_882068D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88206928
	if (ctx.cr6.eq) goto loc_88206928;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x882068DC;
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
	ctx.current_instruction = 0x88206900;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88206908;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88206918
	if (!ctx.cr0.lt) goto loc_88206918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88206918;
	sub_88156678(ctx, base);
loc_88206918:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88206918;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x882068d0
	if (ctx.cr6.gt) goto loc_882068D0;
loc_88206928:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8820692C;
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
	ctx.current_instruction = 0x88206944;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88206950;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88206960
	if (!ctx.cr0.lt) goto loc_88206960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88206960;
	sub_88156678(ctx, base);
loc_88206960:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x88206b4c
	if (ctx.cr6.eq) goto loc_88206B4C;
	// lwz r11,1236(r24)
	ctx.current_instruction = 0x88206968;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 1236);
	// lwz r31,0(r24)
	ctx.current_instruction = 0x8820696C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88206984
	if (!ctx.cr6.eq) goto loc_88206984;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// stw r28,20(r31)
	ctx.current_instruction = 0x8820697C;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// b 0x88206aa8
	goto loc_88206AA8;
loc_88206984:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x88206984;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x88206988;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r11)
	ctx.current_instruction = 0x88206990;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r29
	ctx.current_instruction = 0x882069A0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r29.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88206a70
	if (ctx.cr6.lt) goto loc_88206A70;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x882069B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x882069C0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x882069C8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88206a68
	if (!ctx.cr6.lt) goto loc_88206A68;
loc_882069D0:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x882069D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x882069D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x882069fc
	if (ctx.cr6.lt) goto loc_882069FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x882069EC;
	sub_88156440(ctx, base);
loc_882069EC:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x882069d0
	if (ctx.cr6.eq) goto loc_882069D0;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88206aa8
	goto loc_88206AA8;
loc_882069FC:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x882069FC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x88206A04;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x88206A0C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.current_instruction = 0x88206A10;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.current_instruction = 0x88206A18;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x88206A1C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88206A24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88206A28;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x88206A30;
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
	ctx.current_instruction = 0x88206A4C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x88206A64;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_88206A68:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88206aa8
	goto loc_88206AA8;
loc_88206A70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88206A78;
	sub_88156500(ctx, base);
loc_88206A78:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88206A78;
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
	ctx.lr = 0x88206A90;
	sub_88156500(ctx, base);
loc_88206A90:
	// add r10,r30,r20
	ctx.r10.u64 = ctx.r30.u64 + ctx.r20.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x88206A98;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88206a78
	if (ctx.cr6.lt) goto loc_88206A78;
loc_88206AA8:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x88206dcc
	if (ctx.cr6.lt) goto loc_88206DCC;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bgt cr6,0x88206dcc
	if (ctx.cr6.gt) goto loc_88206DCC;
loc_88206ABC:
	// lwz r3,0(r24)
	ctx.current_instruction = 0x88206ABC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,20(r3)
	ctx.current_instruction = 0x88206AC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88206dcc
	if (!ctx.cr6.eq) goto loc_88206DCC;
	// lwz r9,1264(r24)
	ctx.current_instruction = 0x88206ACC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 1264);
	// ld r8,0(r3)
	ctx.current_instruction = 0x88206AD0;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r7,8(r3)
	ctx.current_instruction = 0x88206AD4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r6,r8,1,62
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r31,r9,r10
	ctx.current_instruction = 0x88206AE0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rldicl r30,r8,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0x1;
	// std r6,0(r3)
	ctx.current_instruction = 0x88206AE8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r6.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88206AEC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88206af8
	if (!ctx.cr0.lt) goto loc_88206AF8;
	// bl 0x88156678
	ctx.lr = 0x88206AF8;
	sub_88156678(ctx, base);
loc_88206AF8:
	// lwz r11,0(r23)
	ctx.current_instruction = 0x88206AF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// stb r31,5(r23)
	ctx.current_instruction = 0x88206B00;
	REX_STORE_U8(ctx.r23.u32 + 5, ctx.r31.u8);
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r23)
	ctx.current_instruction = 0x88206B08;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lbz r8,27(r24)
	ctx.current_instruction = 0x88206B0C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + 27);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88206dcc
	if (ctx.cr6.eq) goto loc_88206DCC;
	// lbz r11,1245(r24)
	ctx.current_instruction = 0x88206B18;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 1245);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88206b70
	if (ctx.cr6.eq) goto loc_88206B70;
	// lwz r10,0(r23)
	ctx.current_instruction = 0x88206B24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r9,r10,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88206b54
	if (ctx.cr6.eq) goto loc_88206B54;
	// lbz r11,1246(r24)
	ctx.current_instruction = 0x88206B38;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r23)
	ctx.current_instruction = 0x88206B44;
	REX_STORE_U8(ctx.r23.u32 + 4, ctx.r10.u8);
	// b 0x88206dcc
	goto loc_88206DCC;
loc_88206B4C:
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// b 0x88206abc
	goto loc_88206ABC;
loc_88206B54:
	// lbz r10,1244(r24)
	ctx.current_instruction = 0x88206B54;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 1244);
	// lbz r11,1249(r24)
	ctx.current_instruction = 0x88206B58;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,4(r23)
	ctx.current_instruction = 0x88206B68;
	REX_STORE_U8(ctx.r23.u32 + 4, ctx.r9.u8);
	// b 0x88206dcc
	goto loc_88206DCC;
loc_88206B70:
	// lwz r31,0(r24)
	ctx.current_instruction = 0x88206B70;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// lbz r11,1250(r24)
	ctx.current_instruction = 0x88206B78;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 1250);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88206B80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x88206c60
	if (ctx.cr6.eq) goto loc_88206C60;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88206bf0
	if (!ctx.cr6.lt) goto loc_88206BF0;
loc_88206B98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88206bf0
	if (ctx.cr6.eq) goto loc_88206BF0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88206BA4;
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
	ctx.current_instruction = 0x88206BC8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88206BD0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88206be0
	if (!ctx.cr0.lt) goto loc_88206BE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88206BE0;
	sub_88156678(ctx, base);
loc_88206BE0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88206BE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88206b98
	if (ctx.cr6.gt) goto loc_88206B98;
loc_88206BF0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88206BF4;
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
	ctx.current_instruction = 0x88206C0C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88206C18;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88206c28
	if (!ctx.cr0.lt) goto loc_88206C28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88206C28;
	sub_88156678(ctx, base);
loc_88206C28:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88206c44
	if (ctx.cr6.eq) goto loc_88206C44;
	// lbz r11,1246(r24)
	ctx.current_instruction = 0x88206C30;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r23)
	ctx.current_instruction = 0x88206C3C;
	REX_STORE_U8(ctx.r23.u32 + 4, ctx.r11.u8);
	// b 0x88206dcc
	goto loc_88206DCC;
loc_88206C44:
	// lbz r10,1244(r24)
	ctx.current_instruction = 0x88206C44;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 1244);
	// lbz r11,1249(r24)
	ctx.current_instruction = 0x88206C48;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r23)
	ctx.current_instruction = 0x88206C58;
	REX_STORE_U8(ctx.r23.u32 + 4, ctx.r11.u8);
	// b 0x88206dcc
	goto loc_88206DCC;
loc_88206C60:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x88206cc4
	if (!ctx.cr6.lt) goto loc_88206CC4;
loc_88206C6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88206cc4
	if (ctx.cr6.eq) goto loc_88206CC4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88206C78;
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
	ctx.current_instruction = 0x88206C9C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88206CA4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88206cb4
	if (!ctx.cr0.lt) goto loc_88206CB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88206CB4;
	sub_88156678(ctx, base);
loc_88206CB4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88206CB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88206c6c
	if (ctx.cr6.gt) goto loc_88206C6C;
loc_88206CC4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88206CC8;
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
	ctx.current_instruction = 0x88206CE0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88206CEC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88206cfc
	if (!ctx.cr0.lt) goto loc_88206CFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88206CFC;
	sub_88156678(ctx, base);
loc_88206CFC:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x88206db8
	if (!ctx.cr6.eq) goto loc_88206DB8;
	// lwz r31,0(r24)
	ctx.current_instruction = 0x88206D04;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r30,5
	ctx.r30.s64 = 5;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88206D10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x88206d78
	if (!ctx.cr6.lt) goto loc_88206D78;
loc_88206D20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88206d78
	if (ctx.cr6.eq) goto loc_88206D78;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88206D2C;
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
	ctx.current_instruction = 0x88206D50;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88206D58;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88206d68
	if (!ctx.cr0.lt) goto loc_88206D68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88206D68;
	sub_88156678(ctx, base);
loc_88206D68:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88206D68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88206d20
	if (ctx.cr6.gt) goto loc_88206D20;
loc_88206D78:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88206D7C;
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
	ctx.current_instruction = 0x88206D94;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88206DA0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88206db0
	if (!ctx.cr0.lt) goto loc_88206DB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88206DB0;
	sub_88156678(ctx, base);
loc_88206DB0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x88206dc0
	goto loc_88206DC0;
loc_88206DB8:
	// lbz r11,1244(r24)
	ctx.current_instruction = 0x88206DB8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 1244);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_88206DC0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,4(r23)
	ctx.current_instruction = 0x88206DC8;
	REX_STORE_U8(ctx.r23.u32 + 4, ctx.r11.u8);
loc_88206DCC:
	// lbz r11,4(r23)
	ctx.current_instruction = 0x88206DCC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 4);
	// lbz r14,5(r23)
	ctx.current_instruction = 0x88206DD0;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r23.u32 + 5);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// std r16,120(r1)
	ctx.current_instruction = 0x88206DD8;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r16.u64);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,388(r24)
	ctx.current_instruction = 0x88206DE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 388);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r14,96(r1)
	ctx.current_instruction = 0x88206DE8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,108(r1)
	ctx.current_instruction = 0x88206DF0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// b 0x88206e08
	goto loc_88206E08;
loc_88206DF8:
	// lwz r22,88(r1)
	ctx.current_instruction = 0x88206DF8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r19,92(r1)
	ctx.current_instruction = 0x88206DFC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r17,84(r1)
	ctx.current_instruction = 0x88206E00;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,108(r1)
	ctx.current_instruction = 0x88206E04;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_88206E08:
	// lhz r11,50(r24)
	ctx.current_instruction = 0x88206E08;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 50);
	// srawi. r10,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r16.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x88206E10;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne 0x88206ee0
	if (!ctx.cr0.eq) goto loc_88206EE0;
	// addi r15,r24,416
	ctx.r15.s64 = ctx.r24.s64 + 416;
	// beq cr6,0x88206e40
	if (ctx.cr6.eq) goto loc_88206E40;
	// lwz r10,-24(r23)
	ctx.current_instruction = 0x88206E34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + -24);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// rlwinm r4,r7,15,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
loc_88206E40:
	// clrlwi r5,r16,31
	ctx.r5.u64 = ctx.r16.u32 & 0x1;
	// neg r10,r19
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r19.u64);
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88206e70
	if (ctx.cr6.eq) goto loc_88206E70;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r9,r23
	ctx.r7.u64 = ctx.r23.u64 - ctx.r9.u64;
	// lwz r3,0(r7)
	ctx.current_instruction = 0x88206E64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// not r10,r3
	ctx.r10.u64 = ~ctx.r3.u64;
	// rlwinm r9,r10,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
loc_88206E70:
	// srawi r10,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r16.s32 >> 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x88206eb0
	if (ctx.cr6.eq) goto loc_88206EB0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88206eb0
	if (ctx.cr6.eq) goto loc_88206EB0;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + ctx.r23.u64;
	// lwz r7,-24(r9)
	ctx.current_instruction = 0x88206EA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + -24);
	// not r9,r7
	ctx.r9.u64 = ~ctx.r7.u64;
	// rlwinm r31,r9,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1;
loc_88206EB0:
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,432(r24)
	ctx.current_instruction = 0x88206EB4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 432);
	// rlwinm r7,r17,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r26,1224(r24)
	ctx.current_instruction = 0x88206EBC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r24.u32 + 1224);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r20,119
	ctx.r20.s64 = 119;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r19,r10,r6
	ctx.r19.u64 = ctx.r10.u64 + ctx.r6.u64;
	// b 0x88206f78
	goto loc_88206F78;
loc_88206EE0:
	// lwz r26,1228(r24)
	ctx.current_instruction = 0x88206EE0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r24.u32 + 1228);
	// neg r3,r19
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r19.u64);
	// addi r15,r24,404
	ctx.r15.s64 = ctx.r24.s64 + 404;
	// li r20,119
	ctx.r20.s64 = 119;
	// beq cr6,0x88206f00
	if (ctx.cr6.eq) goto loc_88206F00;
	// lwz r11,-24(r23)
	ctx.current_instruction = 0x88206EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -24);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r4,r10,15,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
loc_88206F00:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88206f28
	if (ctx.cr6.eq) goto loc_88206F28;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r10.u64;
	// lwz r7,0(r9)
	ctx.current_instruction = 0x88206F18;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r5,r7,15,17,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x7FFF;
	// andc r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 & ~ctx.r5.u64;
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
loc_88206F28:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88206f58
	if (ctx.cr6.eq) goto loc_88206F58;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88206f58
	if (ctx.cr6.eq) goto loc_88206F58;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r10.u64;
	// lwz r7,0(r9)
	ctx.current_instruction = 0x88206F4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// not r5,r7
	ctx.r5.u64 = ~ctx.r7.u64;
	// rlwinm r31,r5,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0x1;
loc_88206F58:
	// addi r10,r16,105
	ctx.r10.s64 = ctx.r16.s64 + 105;
	// mullw r11,r8,r6
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 + ctx.r17.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r9,r9,r24
	ctx.current_instruction = 0x88206F70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// add r19,r9,r10
	ctx.r19.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_88206F78:
	// lwz r10,0(r23)
	ctx.current_instruction = 0x88206F78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r21,16(r30)
	ctx.current_instruction = 0x88206F80;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r17,r10,29,30,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x3;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r19,-16
	ctx.r28.s64 = ctx.r19.s64 + -16;
	// subf r29,r9,r19
	ctx.r29.u64 = ctx.r19.u64 - ctx.r9.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x882071b4
	if (ctx.cr6.eq) goto loc_882071B4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x882071a8
	if (ctx.cr6.eq) goto loc_882071A8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x88206fbc
	if (ctx.cr6.eq) goto loc_88206FBC;
	// lhz r11,-32(r29)
	ctx.current_instruction = 0x88206FB0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + -32);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// b 0x88206fc0
	goto loc_88206FC0;
loc_88206FBC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_88206FC0:
	// lhz r11,0(r29)
	ctx.current_instruction = 0x88206FC0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r10,0(r28)
	ctx.current_instruction = 0x88206FC4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lbz r9,27(r24)
	ctx.current_instruction = 0x88206FC8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + 27);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88207180
	if (ctx.cr6.eq) goto loc_88207180;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x882070d4
	if (ctx.cr6.eq) goto loc_882070D4;
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// beq cr6,0x882070d4
	if (ctx.cr6.eq) goto loc_882070D4;
	// cmpwi cr6,r16,5
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 5, ctx.xer);
	// beq cr6,0x882070d4
	if (ctx.cr6.eq) goto loc_882070D4;
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// bne cr6,0x8820706c
	if (!ctx.cr6.eq) goto loc_8820706C;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r11,4(r23)
	ctx.current_instruction = 0x88207000;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 4);
	// lwz r10,388(r24)
	ctx.current_instruction = 0x88207004;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 388);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r9,r3,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,4(r9)
	ctx.current_instruction = 0x88207024;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r3,16(r4)
	ctx.current_instruction = 0x8820702C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r3,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r9,r22
	ctx.current_instruction = 0x88207040;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// lwz r11,16(r4)
	ctx.current_instruction = 0x88207044;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r11,r6
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r10,r7
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r3,r9
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r4,r7,r18
	ctx.r4.u64 = ctx.r7.u64 + ctx.r18.u64;
	// add r3,r6,r18
	ctx.r3.u64 = ctx.r6.u64 + ctx.r18.u64;
	// srawi r7,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 18;
	// srawi r6,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 18;
	// b 0x88207180
	goto loc_88207180;
loc_8820706C:
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 2, ctx.xer);
	// bne cr6,0x88207180
	if (!ctx.cr6.eq) goto loc_88207180;
	// lbz r11,4(r23)
	ctx.current_instruction = 0x88207074;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 4);
	// lbz r10,-20(r23)
	ctx.current_instruction = 0x88207078;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + -20);
	// rotlwi r4,r11,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r9,388(r24)
	ctx.current_instruction = 0x88207080;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 388);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,16(r10)
	ctx.current_instruction = 0x882070A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r3,r4,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// lwz r11,16(r9)
	ctx.current_instruction = 0x882070A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lwzx r9,r3,r22
	ctx.current_instruction = 0x882070B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// mullw r5,r9,r11
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r4,r5,r7
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r4,r18
	ctx.r11.u64 = ctx.r4.u64 + ctx.r18.u64;
	// add r10,r3,r18
	ctx.r10.u64 = ctx.r3.u64 + ctx.r18.u64;
	// srawi r7,r11,18
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 18;
	// srawi r5,r10,18
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 18;
	// b 0x88207180
	goto loc_88207180;
loc_882070D4:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,4(r23)
	ctx.current_instruction = 0x882070D8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 4);
	// lwz r11,388(r24)
	ctx.current_instruction = 0x882070DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 388);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r9,-20(r23)
	ctx.current_instruction = 0x882070E4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r23.u32 + -20);
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r3,r3,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r4,r9,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lbz r10,-20(r3)
	ctx.current_instruction = 0x88207108;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + -20);
	// lbz r9,4(r3)
	ctx.current_instruction = 0x8820710C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rotlwi r3,r9,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r30,16(r30)
	ctx.current_instruction = 0x8820711C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r30,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFC;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r4,16(r4)
	ctx.current_instruction = 0x88207140;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwzx r3,r3,r22
	ctx.current_instruction = 0x88207144;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// lwz r11,16(r10)
	ctx.current_instruction = 0x88207148;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,16(r9)
	ctx.current_instruction = 0x8820714C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mullw r9,r3,r4
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r4,r3,r11
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r10,r5
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r4,r6
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r3,r11
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r6,r10,r18
	ctx.r6.u64 = ctx.r10.u64 + ctx.r18.u64;
	// add r5,r9,r18
	ctx.r5.u64 = ctx.r9.u64 + ctx.r18.u64;
	// add r4,r7,r18
	ctx.r4.u64 = ctx.r7.u64 + ctx.r18.u64;
	// srawi r7,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 18;
	// srawi r6,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 18;
	// srawi r5,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 18;
loc_88207180:
	// subf r11,r5,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// xor r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// subf r4,r9,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x882071bc
	if (ctx.cr6.lt) goto loc_882071BC;
loc_882071A8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r27,8
	ctx.r27.s64 = 8;
	// b 0x882071c4
	goto loc_882071C4;
loc_882071B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x882074f8
	if (ctx.cr6.eq) goto loc_882074F8;
loc_882071BC:
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_882071C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x882074f8
	if (ctx.cr6.eq) goto loc_882074F8;
	// lbz r11,27(r24)
	ctx.current_instruction = 0x882071CC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 27);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x882074f8
	if (ctx.cr6.eq) goto loc_882074F8;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x88207358
	if (!ctx.cr6.eq) goto loc_88207358;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x88207220
	if (ctx.cr6.eq) goto loc_88207220;
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 2, ctx.xer);
	// beq cr6,0x88207220
	if (ctx.cr6.eq) goto loc_88207220;
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// beq cr6,0x88207220
	if (ctx.cr6.eq) goto loc_88207220;
	// cmpwi cr6,r16,5
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 5, ctx.xer);
	// beq cr6,0x88207220
	if (ctx.cr6.eq) goto loc_88207220;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r1,126
	ctx.r10.s64 = ctx.r1.s64 + 126;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88207210:
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x88207210;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x88207214;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88207210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88207210;
	// b 0x882074f4
	goto loc_882074F4;
loc_88207220:
	// lbz r11,-20(r23)
	ctx.current_instruction = 0x88207220;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + -20);
	// li r8,3
	ctx.r8.s64 = 3;
	// lbz r3,4(r23)
	ctx.current_instruction = 0x88207228;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + 4);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r9,388(r24)
	ctx.current_instruction = 0x88207234;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 388);
	// rotlwi r6,r3,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lhz r4,0(r30)
	ctx.current_instruction = 0x8820723C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r10,-20(r23)
	ctx.current_instruction = 0x88207244;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + -20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r6,r3,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// addi r31,r1,130
	ctx.r31.s64 = ctx.r1.s64 + 130;
	// lwzx r9,r6,r22
	ctx.current_instruction = 0x88207270;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// addi r8,r1,122
	ctx.r8.s64 = ctx.r1.s64 + 122;
	// lwz r11,16(r7)
	ctx.current_instruction = 0x88207278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// addi r29,r1,132
	ctx.r29.s64 = ctx.r1.s64 + 132;
	// lwz r3,16(r3)
	ctx.current_instruction = 0x88207280;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// subf r7,r30,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r30.u64;
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// rlwinm r3,r3,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// subf r6,r30,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r5,r30,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r30.u64;
	// lwzx r3,r3,r22
	ctx.current_instruction = 0x8820729C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r3,r4,r18
	ctx.r3.u64 = ctx.r4.u64 + ctx.r18.u64;
	// srawi r4,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 18;
	// sth r4,128(r1)
	ctx.current_instruction = 0x882072AC;
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r4.u16);
loc_882072B0:
	// lhz r4,-4(r11)
	ctx.current_instruction = 0x882072B0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r3,-2(r11)
	ctx.current_instruction = 0x882072B4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	ctx.current_instruction = 0x882072B8;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,2(r11)
	ctx.current_instruction = 0x882072C0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r29,4(r11)
	ctx.current_instruction = 0x882072C8;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// mullw r31,r31,r10
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// mullw r30,r30,r10
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r29,r29,r10
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// mullw r31,r31,r9
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r18
	ctx.r4.u64 = ctx.r4.u64 + ctx.r18.u64;
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// mullw r29,r9,r29
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r31,r31,r18
	ctx.r31.u64 = ctx.r31.u64 + ctx.r18.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r30,r30,r18
	ctx.r30.u64 = ctx.r30.u64 + ctx.r18.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r8)
	ctx.current_instruction = 0x88207318;
	REX_STORE_U16(ctx.r8.u32 + 8, ctx.r4.u16);
	// add r29,r29,r18
	ctx.r29.u64 = ctx.r29.u64 + ctx.r18.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r4,r29
	ctx.r4.s64 = ctx.r29.s16;
	// sthx r31,r7,r11
	ctx.current_instruction = 0x88207338;
	REX_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r31.u16);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r30,r6,r11
	ctx.current_instruction = 0x88207340;
	REX_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r30.u16);
	// sthx r4,r5,r11
	ctx.current_instruction = 0x88207344;
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r3,10(r8)
	ctx.current_instruction = 0x8820734C;
	ea = 10 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x882072b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882072B0;
	// b 0x882074ec
	goto loc_882074EC;
loc_88207358:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x88207398
	if (ctx.cr6.eq) goto loc_88207398;
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// beq cr6,0x88207398
	if (ctx.cr6.eq) goto loc_88207398;
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// beq cr6,0x88207398
	if (ctx.cr6.eq) goto loc_88207398;
	// cmpwi cr6,r16,5
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 5, ctx.xer);
	// beq cr6,0x88207398
	if (ctx.cr6.eq) goto loc_88207398;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r1,126
	ctx.r10.s64 = ctx.r1.s64 + 126;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88207388:
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x88207388;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x8820738C;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88207388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88207388;
	// b 0x882074f4
	goto loc_882074F4;
loc_88207398:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r7,50(r24)
	ctx.current_instruction = 0x8820739C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r24.u32 + 50);
	// lbz r9,4(r23)
	ctx.current_instruction = 0x882073A0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r23.u32 + 4);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,388(r24)
	ctx.current_instruction = 0x882073AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 388);
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r4,0(r30)
	ctx.current_instruction = 0x882073B4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r3,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r3.u64;
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r11,4(r3)
	ctx.current_instruction = 0x882073D4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r4,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r4.u64;
	// rlwinm r8,r5,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// lwz r5,16(r3)
	ctx.current_instruction = 0x882073FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r3,r5,2,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// addi r5,r1,130
	ctx.r5.s64 = ctx.r1.s64 + 130;
	// lbz r9,4(r9)
	ctx.current_instruction = 0x88207410;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// addi r10,r1,122
	ctx.r10.s64 = ctx.r1.s64 + 122;
	// lwzx r8,r8,r22
	ctx.current_instruction = 0x88207418;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// lwz r4,16(r4)
	ctx.current_instruction = 0x8820741C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// addi r31,r1,132
	ctx.r31.s64 = ctx.r1.s64 + 132;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r3,r3,r22
	ctx.current_instruction = 0x88207428;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r3,r11
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r4,r7,r18
	ctx.r4.u64 = ctx.r7.u64 + ctx.r18.u64;
	// subf r7,r30,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r30.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// subf r6,r30,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r30.u64;
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// sth r3,128(r1)
	ctx.current_instruction = 0x88207448;
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r3.u16);
	// subf r5,r30,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r30.u64;
loc_88207450:
	// lhz r4,-4(r11)
	ctx.current_instruction = 0x88207450;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// mullw r3,r8,r9
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lhz r31,-2(r11)
	ctx.current_instruction = 0x88207458;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r30,4(r11)
	ctx.current_instruction = 0x8820745C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r29,0(r11)
	ctx.current_instruction = 0x88207460;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r28,2(r11)
	ctx.current_instruction = 0x88207464;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r31,r31,r3
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// mullw r29,r29,r3
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r28,r3
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// add r4,r4,r18
	ctx.r4.u64 = ctx.r4.u64 + ctx.r18.u64;
	// add r31,r31,r18
	ctx.r31.u64 = ctx.r31.u64 + ctx.r18.u64;
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// add r29,r29,r18
	ctx.r29.u64 = ctx.r29.u64 + ctx.r18.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + ctx.r18.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// sth r4,8(r10)
	ctx.current_instruction = 0x882074AC;
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r4.u16);
	// add r30,r30,r18
	ctx.r30.u64 = ctx.r30.u64 + ctx.r18.u64;
	// srawi r29,r29,18
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3FFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 18;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// sthx r29,r7,r11
	ctx.current_instruction = 0x882074CC;
	REX_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r29.u16);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sthx r3,r6,r11
	ctx.current_instruction = 0x882074D4;
	REX_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r3.u16);
	// sthx r4,r5,r11
	ctx.current_instruction = 0x882074D8;
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r31,10(r10)
	ctx.current_instruction = 0x882074E0;
	ea = 10 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r31.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88207450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88207450;
	// lwz r14,96(r1)
	ctx.current_instruction = 0x882074E8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_882074EC:
	// lhz r11,128(r1)
	ctx.current_instruction = 0x882074EC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 128);
	// sth r11,144(r1)
	ctx.current_instruction = 0x882074F0;
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
loc_882074F4:
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
loc_882074F8:
	// lwz r10,356(r1)
	ctx.current_instruction = 0x882074F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// lwz r11,28(r10)
	ctx.current_instruction = 0x88207500;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r29,r11,-128
	ctx.r29.s64 = ctx.r11.s64 + -128;
	// stw r29,28(r10)
	ctx.current_instruction = 0x88207508;
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r29.u32);
	// dcbzl r0,r29
	ea = (ctx.r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// dcbt r0,r29
	// dcbt r0,r30
	// dcbt r0,r19
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,0(r24)
	ctx.current_instruction = 0x88207520;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8820753c
	if (!ctx.cr6.eq) goto loc_8820753C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,20(r31)
	ctx.current_instruction = 0x88207534;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x88207668
	goto loc_88207668;
loc_8820753C:
	// lbz r4,8(r26)
	ctx.current_instruction = 0x8820753C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r26.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x88207540;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r27,0(r26)
	ctx.current_instruction = 0x88207548;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r27
	ctx.current_instruction = 0x88207558;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r27.u32);
	// extsh r28,r6
	ctx.r28.s64 = ctx.r6.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x88207628
	if (ctx.cr6.lt) goto loc_88207628;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88207568;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r28,28
	ctx.r9.u64 = ctx.r28.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x88207578;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88207580;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88207620
	if (!ctx.cr6.lt) goto loc_88207620;
loc_88207588:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88207588;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8820758C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x882075b4
	if (ctx.cr6.lt) goto loc_882075B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x882075A4;
	sub_88156440(ctx, base);
loc_882075A4:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88207588
	if (ctx.cr6.eq) goto loc_88207588;
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x88207668
	goto loc_88207668;
loc_882075B4:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x882075B4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x882075BC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x882075C4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x882075C8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x882075D0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x882075D4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882075DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x882075E0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x882075E8;
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
	ctx.current_instruction = 0x88207604;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x8820761C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
loc_88207620:
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// b 0x88207668
	goto loc_88207668;
loc_88207628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88207630;
	sub_88156500(ctx, base);
loc_88207630:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
loc_88207638:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88207638;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x88156500
	ctx.lr = 0x88207650;
	sub_88156500(ctx, base);
loc_88207650:
	// add r10,r28,r26
	ctx.r10.u64 = ctx.r28.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.current_instruction = 0x88207658;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x88207638
	if (ctx.cr6.lt) goto loc_88207638;
loc_88207668:
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x88207790
	if (ctx.cr6.eq) goto loc_88207790;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x882078b4
	if (ctx.cr6.eq) goto loc_882078B4;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// bne cr6,0x882076c8
	if (!ctx.cr6.eq) goto loc_882076C8;
	// ld r10,0(r31)
	ctx.current_instruction = 0x88207688;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x8820768C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	ctx.current_instruction = 0x8820769C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	ctx.current_instruction = 0x882076A0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x882076b0
	if (!ctx.cr0.lt) goto loc_882076B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x882076B0;
	sub_88156678(ctx, base);
loc_882076B0:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x88207878
	goto loc_88207878;
loc_882076C8:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// bne cr6,0x88207878
	if (!ctx.cr6.eq) goto loc_88207878;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882076D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88207740
	if (!ctx.cr6.lt) goto loc_88207740;
loc_882076E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88207740
	if (ctx.cr6.eq) goto loc_88207740;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x882076F4;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88207718;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88207720;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88207730
	if (!ctx.cr0.lt) goto loc_88207730;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88207730;
	sub_88156678(ctx, base);
loc_88207730:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88207730;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x882076e8
	if (ctx.cr6.gt) goto loc_882076E8;
loc_88207740:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88207744;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x8820775C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88207768;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88207778
	if (!ctx.cr0.lt) goto loc_88207778;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88207778;
	sub_88156678(ctx, base);
loc_88207778:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x88207878
	goto loc_88207878;
loc_88207790:
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// bgt cr6,0x882077a4
	if (ctx.cr6.gt) goto loc_882077A4;
	// srawi r11,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// b 0x882077a8
	goto loc_882077A8;
loc_882077A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_882077A8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x882077A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x882077c8
	if (!ctx.cr6.gt) goto loc_882077C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x88207874
	goto loc_88207874;
loc_882077C8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x882077d8
	if (!ctx.cr6.eq) goto loc_882077D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x88207874
	goto loc_88207874;
loc_882077D8:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88207838
	if (!ctx.cr6.gt) goto loc_88207838;
loc_882077E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88207838
	if (ctx.cr6.eq) goto loc_88207838;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x882077EC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	ctx.current_instruction = 0x88207810;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88207818;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88207828
	if (!ctx.cr0.lt) goto loc_88207828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88207828;
	sub_88156678(ctx, base);
loc_88207828:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88207828;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x882077e0
	if (ctx.cr6.gt) goto loc_882077E0;
loc_88207838:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8820783C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x88207854;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88207860;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88207870
	if (!ctx.cr0.lt) goto loc_88207870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88207870;
	sub_88156678(ctx, base);
loc_88207870:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_88207874:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
loc_88207878:
	// ld r10,0(r31)
	ctx.current_instruction = 0x88207878;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x8820787C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,0(r31)
	ctx.current_instruction = 0x88207888;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// rldicl r27,r10,1,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r31)
	ctx.current_instruction = 0x88207890;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x882078a0
	if (!ctx.cr0.lt) goto loc_882078A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x882078A0;
	sub_88156678(ctx, base);
loc_882078A0:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r28
	ctx.r10.s64 = ctx.r28.s16;
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// extsh r25,r8
	ctx.r25.s64 = ctx.r8.s16;
loc_882078B4:
	// sth r25,0(r29)
	ctx.current_instruction = 0x882078B4;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r25.u16);
	// lwz r11,0(r24)
	ctx.current_instruction = 0x882078B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x882078BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88207cdc
	if (!ctx.cr6.eq) goto loc_88207CDC;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x882078dc
	if (!ctx.cr6.eq) goto loc_882078DC;
	// lwz r6,1268(r24)
	ctx.current_instruction = 0x882078D0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 1268);
	// li r22,0
	ctx.r22.s64 = 0;
	// b 0x8820790c
	goto loc_8820790C;
loc_882078DC:
	// addi r11,r22,317
	ctx.r11.s64 = ctx.r22.s64 + 317;
	// lbz r10,1252(r24)
	ctx.current_instruction = 0x882078E0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 1252);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r6,r9,r24
	ctx.current_instruction = 0x882078EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// beq cr6,0x8820790c
	if (ctx.cr6.eq) goto loc_8820790C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8820790c
	if (ctx.cr6.eq) goto loc_8820790C;
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 8, ctx.xer);
	// li r22,8
	ctx.r22.s64 = 8;
	// bne cr6,0x8820790c
	if (!ctx.cr6.eq) goto loc_8820790C;
	// li r22,1
	ctx.r22.s64 = 1;
loc_8820790C:
	// clrlwi r31,r14,31
	ctx.r31.u64 = ctx.r14.u32 & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x88207930
	if (ctx.cr6.eq) goto loc_88207930;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r15)
	ctx.current_instruction = 0x8820791C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x882153a8
	ctx.lr = 0x88207928;
	sub_882153A8(ctx, base);
loc_88207928:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88207cdc
	if (ctx.cr6.lt) goto loc_88207CDC;
loc_88207930:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x882079f0
	if (ctx.cr6.eq) goto loc_882079F0;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x882079e0
	if (ctx.cr6.eq) goto loc_882079E0;
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 8, ctx.xer);
	// beq cr6,0x8820795c
	if (ctx.cr6.eq) goto loc_8820795C;
	// lhz r11,0(r29)
	ctx.current_instruction = 0x88207948;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r10,0(r30)
	ctx.current_instruction = 0x8820794C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,0(r29)
	ctx.current_instruction = 0x88207954;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// b 0x882079f0
	goto loc_882079F0;
loc_8820795C:
	// lhz r10,0(r30)
	ctx.current_instruction = 0x8820795C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r9,0(r29)
	ctx.current_instruction = 0x88207960;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r4,16(r29)
	ctx.current_instruction = 0x88207964;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r5,32(r29)
	ctx.current_instruction = 0x8820796C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 32);
	// lhz r6,48(r29)
	ctx.current_instruction = 0x88207970;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 48);
	// sth r9,0(r29)
	ctx.current_instruction = 0x88207974;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// lhz r7,64(r29)
	ctx.current_instruction = 0x88207978;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 64);
	// lhz r8,80(r29)
	ctx.current_instruction = 0x8820797C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 80);
	// lhz r3,96(r29)
	ctx.current_instruction = 0x88207980;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 96);
	// lhz r28,112(r29)
	ctx.current_instruction = 0x88207984;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r29.u32 + 112);
	// lhz r11,2(r30)
	ctx.current_instruction = 0x88207988;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r4,16(r29)
	ctx.current_instruction = 0x88207990;
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r4.u16);
	// lhz r11,4(r30)
	ctx.current_instruction = 0x88207994;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sth r5,32(r29)
	ctx.current_instruction = 0x8820799C;
	REX_STORE_U16(ctx.r29.u32 + 32, ctx.r5.u16);
	// lhz r11,6(r30)
	ctx.current_instruction = 0x882079A0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 6);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// sth r11,48(r29)
	ctx.current_instruction = 0x882079A8;
	REX_STORE_U16(ctx.r29.u32 + 48, ctx.r11.u16);
	// lhz r11,8(r30)
	ctx.current_instruction = 0x882079AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 8);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// sth r4,64(r29)
	ctx.current_instruction = 0x882079B4;
	REX_STORE_U16(ctx.r29.u32 + 64, ctx.r4.u16);
	// lhz r11,10(r30)
	ctx.current_instruction = 0x882079B8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 10);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sth r8,80(r29)
	ctx.current_instruction = 0x882079C0;
	REX_STORE_U16(ctx.r29.u32 + 80, ctx.r8.u16);
	// lhz r11,12(r30)
	ctx.current_instruction = 0x882079C4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 12);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r5,96(r29)
	ctx.current_instruction = 0x882079CC;
	REX_STORE_U16(ctx.r29.u32 + 96, ctx.r5.u16);
	// lhz r11,14(r30)
	ctx.current_instruction = 0x882079D0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 14);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r11,112(r29)
	ctx.current_instruction = 0x882079D8;
	REX_STORE_U16(ctx.r29.u32 + 112, ctx.r11.u16);
	// b 0x882079f0
	goto loc_882079F0;
loc_882079E0:
	// lvx128 v0,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_882079F0:
	// lbz r11,1252(r24)
	ctx.current_instruction = 0x882079F0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 1252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88207a4c
	if (ctx.cr6.eq) goto loc_88207A4C;
	// lhz r11,0(r29)
	ctx.current_instruction = 0x882079FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r11,0(r19)
	ctx.current_instruction = 0x88207A04;
	REX_STORE_U16(ctx.r19.u32 + 0, ctx.r11.u16);
	// lhz r9,16(r29)
	ctx.current_instruction = 0x88207A08;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// sth r9,2(r19)
	ctx.current_instruction = 0x88207A0C;
	REX_STORE_U16(ctx.r19.u32 + 2, ctx.r9.u16);
	// lhz r8,32(r29)
	ctx.current_instruction = 0x88207A10;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 32);
	// sth r8,4(r19)
	ctx.current_instruction = 0x88207A14;
	REX_STORE_U16(ctx.r19.u32 + 4, ctx.r8.u16);
	// lhz r7,48(r29)
	ctx.current_instruction = 0x88207A18;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 48);
	// sth r7,6(r19)
	ctx.current_instruction = 0x88207A1C;
	REX_STORE_U16(ctx.r19.u32 + 6, ctx.r7.u16);
	// lhz r6,64(r29)
	ctx.current_instruction = 0x88207A20;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 64);
	// sth r6,8(r19)
	ctx.current_instruction = 0x88207A24;
	REX_STORE_U16(ctx.r19.u32 + 8, ctx.r6.u16);
	// lhz r5,80(r29)
	ctx.current_instruction = 0x88207A28;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 80);
	// sth r5,10(r19)
	ctx.current_instruction = 0x88207A2C;
	REX_STORE_U16(ctx.r19.u32 + 10, ctx.r5.u16);
	// lhz r4,96(r29)
	ctx.current_instruction = 0x88207A30;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 96);
	// sth r4,12(r19)
	ctx.current_instruction = 0x88207A34;
	REX_STORE_U16(ctx.r19.u32 + 12, ctx.r4.u16);
	// lhz r3,112(r29)
	ctx.current_instruction = 0x88207A38;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 112);
	// sth r3,14(r19)
	ctx.current_instruction = 0x88207A3C;
	REX_STORE_U16(ctx.r19.u32 + 14, ctx.r3.u16);
	// lvx128 v63,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r19,r10
	ea = (ctx.r19.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x88207a94
	goto loc_88207A94;
loc_88207A4C:
	// lvx128 v62,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r11,0(r29)
	ctx.current_instruction = 0x88207A54;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// sth r11,16(r19)
	ctx.current_instruction = 0x88207A58;
	REX_STORE_U16(ctx.r19.u32 + 16, ctx.r11.u16);
	// lhz r10,16(r29)
	ctx.current_instruction = 0x88207A5C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// sth r10,18(r19)
	ctx.current_instruction = 0x88207A60;
	REX_STORE_U16(ctx.r19.u32 + 18, ctx.r10.u16);
	// lhz r9,32(r29)
	ctx.current_instruction = 0x88207A64;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 32);
	// sth r9,20(r19)
	ctx.current_instruction = 0x88207A68;
	REX_STORE_U16(ctx.r19.u32 + 20, ctx.r9.u16);
	// lhz r8,48(r29)
	ctx.current_instruction = 0x88207A6C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 48);
	// sth r8,22(r19)
	ctx.current_instruction = 0x88207A70;
	REX_STORE_U16(ctx.r19.u32 + 22, ctx.r8.u16);
	// lhz r7,64(r29)
	ctx.current_instruction = 0x88207A74;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 64);
	// sth r7,24(r19)
	ctx.current_instruction = 0x88207A78;
	REX_STORE_U16(ctx.r19.u32 + 24, ctx.r7.u16);
	// lhz r6,80(r29)
	ctx.current_instruction = 0x88207A7C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 80);
	// sth r6,26(r19)
	ctx.current_instruction = 0x88207A80;
	REX_STORE_U16(ctx.r19.u32 + 26, ctx.r6.u16);
	// lhz r5,96(r29)
	ctx.current_instruction = 0x88207A84;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 96);
	// sth r5,28(r19)
	ctx.current_instruction = 0x88207A88;
	REX_STORE_U16(ctx.r19.u32 + 28, ctx.r5.u16);
	// lhz r4,112(r29)
	ctx.current_instruction = 0x88207A8C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 112);
	// sth r4,30(r19)
	ctx.current_instruction = 0x88207A90;
	REX_STORE_U16(ctx.r19.u32 + 30, ctx.r4.u16);
loc_88207A94:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// ld r10,120(r1)
	ctx.current_instruction = 0x88207A98;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// add r9,r16,r23
	ctx.r9.u64 = ctx.r16.u64 + ctx.r23.u64;
	// ori r8,r11,128
	ctx.r8.u64 = ctx.r11.u64 | 128;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// srawi r14,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 1;
	// stb r7,8(r9)
	ctx.current_instruction = 0x88207AB4;
	REX_STORE_U8(ctx.r9.u32 + 8, ctx.r7.u8);
	// std r6,120(r1)
	ctx.current_instruction = 0x88207AB8;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// cmpwi cr6,r16,6
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 6, ctx.xer);
	// stw r14,96(r1)
	ctx.current_instruction = 0x88207AC0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// blt cr6,0x88206df8
	if (ctx.cr6.lt) goto loc_88206DF8;
	// lwz r6,356(r1)
	ctx.current_instruction = 0x88207AC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r23)
	ctx.current_instruction = 0x88207AD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// ld r7,120(r1)
	ctx.current_instruction = 0x88207AD4;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// rlwinm r4,r11,30,23,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1C0;
	// lwz r10,1312(r24)
	ctx.current_instruction = 0x88207AE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 1312);
	// rldicl r9,r7,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lhz r5,16(r6)
	ctx.current_instruction = 0x88207AE8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 16);
	// lhz r11,18(r6)
	ctx.current_instruction = 0x88207AEC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 18);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r5,32(r6)
	ctx.current_instruction = 0x88207AF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r31,4(r6)
	ctx.current_instruction = 0x88207AFC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r7,r7,15,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFFFF0000;
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r11,0(r5)
	ctx.current_instruction = 0x88207B0C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r6)
	ctx.current_instruction = 0x88207B10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,32(r6)
	ctx.current_instruction = 0x88207B18;
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r7.u32);
	// lbz r5,5(r23)
	ctx.current_instruction = 0x88207B1C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r23.u32 + 5);
	// lbz r11,4(r23)
	ctx.current_instruction = 0x88207B20;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 4);
	// or r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rldicr r5,r11,8,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rldicr r7,r11,48,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFF000000000000;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stdx r5,r31,r10
	ctx.current_instruction = 0x88207B3C;
	REX_STORE_U64(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u64);
	// b 0x88207b84
	goto loc_88207B84;
loc_88207B44:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r6,80(r1)
	ctx.current_instruction = 0x88207B48;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x882059e0
	ctx.lr = 0x88207B5C;
	sub_882059E0(ctx, base);
loc_88207B5C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88207dd8
	if (!ctx.cr6.eq) goto loc_88207DD8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88202940
	ctx.lr = 0x88207B74;
	sub_88202940(ctx, base);
loc_88207B74:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88207dd8
	if (!ctx.cr6.eq) goto loc_88207DD8;
	// lwz r6,356(r1)
	ctx.current_instruction = 0x88207B7C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// li r8,0
	ctx.r8.s64 = 0;
loc_88207B84:
	// lwz r11,340(r1)
	ctx.current_instruction = 0x88207B84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r10,14836(r11)
	ctx.current_instruction = 0x88207B88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88207c3c
	if (!ctx.cr6.gt) goto loc_88207C3C;
	// lwz r11,136(r11)
	ctx.current_instruction = 0x88207B94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88207B98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,84(r1)
	ctx.current_instruction = 0x88207BA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r5,r11,r9
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r4,0(r23)
	ctx.current_instruction = 0x88207BA8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r4,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x700;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r9,1024
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1024, ctx.xer);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,376(r24)
	ctx.current_instruction = 0x88207BC0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 376);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x88207bfc
	if (!ctx.cr6.eq) goto loc_88207BFC;
	// stwx r8,r10,r7
	ctx.current_instruction = 0x88207BD4;
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r9,376(r24)
	ctx.current_instruction = 0x88207BD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 376);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r5)
	ctx.current_instruction = 0x88207BE0;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r4,376(r24)
	ctx.current_instruction = 0x88207BE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 376);
	// stwx r8,r11,r4
	ctx.current_instruction = 0x88207BE8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r10,376(r24)
	ctx.current_instruction = 0x88207BEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 376);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	ctx.current_instruction = 0x88207BF4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x88207c3c
	goto loc_88207C3C;
loc_88207BFC:
	// lwz r5,112(r1)
	ctx.current_instruction = 0x88207BFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r4,r10,r5
	ctx.current_instruction = 0x88207C08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stwx r4,r10,r7
	ctx.current_instruction = 0x88207C0C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r7,376(r24)
	ctx.current_instruction = 0x88207C10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 376);
	// lwz r8,4(r8)
	ctx.current_instruction = 0x88207C14;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r8,4(r7)
	ctx.current_instruction = 0x88207C1C;
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwzx r10,r11,r5
	ctx.current_instruction = 0x88207C20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r4,376(r24)
	ctx.current_instruction = 0x88207C24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 376);
	// stwx r10,r11,r4
	ctx.current_instruction = 0x88207C28;
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r10,376(r24)
	ctx.current_instruction = 0x88207C2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 376);
	// lwz r9,4(r9)
	ctx.current_instruction = 0x88207C30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r8)
	ctx.current_instruction = 0x88207C38;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
loc_88207C3C:
	// lwz r11,4(r6)
	ctx.current_instruction = 0x88207C3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// addi r23,r23,24
	ctx.r23.s64 = ctx.r23.s64 + 24;
	// lhz r9,18(r6)
	ctx.current_instruction = 0x88207C44;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 18);
	// lwz r10,0(r6)
	ctx.current_instruction = 0x88207C48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,84(r1)
	ctx.current_instruction = 0x88207C50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// stw r11,4(r6)
	ctx.current_instruction = 0x88207C5C;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r5,100(r1)
	ctx.current_instruction = 0x88207C60;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r22,88(r1)
	ctx.current_instruction = 0x88207C6C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r21,356(r1)
	ctx.current_instruction = 0x88207C74;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r8,84(r1)
	ctx.current_instruction = 0x88207C78;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// stw r4,0(r6)
	ctx.current_instruction = 0x88207C80;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// ori r20,r11,32768
	ctx.r20.u64 = ctx.r11.u64 | 32768;
	// sth r10,18(r6)
	ctx.current_instruction = 0x88207C88;
	REX_STORE_U16(ctx.r6.u32 + 18, ctx.r10.u16);
	// blt cr6,0x8820656c
	if (ctx.cr6.lt) goto loc_8820656C;
	// lwz r25,380(r1)
	ctx.current_instruction = 0x88207C90;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rotlwi r27,r5,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r26,364(r1)
	ctx.current_instruction = 0x88207C98;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r28,340(r1)
	ctx.current_instruction = 0x88207C9C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_88207CA0:
	// lhz r9,16(r21)
	ctx.current_instruction = 0x88207CA0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r21.u32 + 16);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r21)
	ctx.current_instruction = 0x88207CA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x88207CAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r7,16(r21)
	ctx.current_instruction = 0x88207CBC;
	REX_STORE_U16(ctx.r21.u32 + 16, ctx.r7.u16);
	// stw r6,0(r21)
	ctx.current_instruction = 0x88207CC0;
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r6.u32);
	// stw r8,80(r1)
	ctx.current_instruction = 0x88207CC4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x88207ce8
	if (!ctx.cr6.lt) goto loc_88207CE8;
	// rotlwi r19,r8,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r17,0
	ctx.r17.s64 = 0;
	// b 0x882061dc
	goto loc_882061DC;
loc_88207CDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88207CE8:
	// addi r11,r26,93
	ctx.r11.s64 = ctx.r26.s64 + 93;
	// lwz r10,20(r21)
	ctx.current_instruction = 0x88207CEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r9,116(r1)
	ctx.current_instruction = 0x88207CF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r10,0(r11)
	ctx.current_instruction = 0x88207D00;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,24(r21)
	ctx.current_instruction = 0x88207D04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + 24);
	// stw r8,4(r11)
	ctx.current_instruction = 0x88207D08;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,28(r21)
	ctx.current_instruction = 0x88207D0C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 28);
	// stw r7,8(r11)
	ctx.current_instruction = 0x88207D10;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,32(r21)
	ctx.current_instruction = 0x88207D14;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r21.u32 + 32);
	// stw r6,12(r11)
	ctx.current_instruction = 0x88207D18;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// bne cr6,0x88207dd8
	if (!ctx.cr6.eq) goto loc_88207DD8;
	// lwz r11,32(r21)
	ctx.current_instruction = 0x88207D20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,22280(r28)
	ctx.current_instruction = 0x88207D28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 22280);
	// li r8,-1
	ctx.r8.s64 = -1;
	// ori r7,r10,45236
	ctx.r7.u64 = ctx.r10.u64 | 45236;
	// subf r6,r9,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// stwx r5,r28,r7
	ctx.current_instruction = 0x88207D3C;
	REX_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r4,32(r21)
	ctx.current_instruction = 0x88207D40;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 32);
	// stw r8,0(r4)
	ctx.current_instruction = 0x88207D44;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwz r11,84(r28)
	ctx.current_instruction = 0x88207D48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// ld r10,104(r24)
	ctx.current_instruction = 0x88207D4C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r24.u32 + 104);
	// std r10,0(r11)
	ctx.current_instruction = 0x88207D50;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,84(r28)
	ctx.current_instruction = 0x88207D54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,112(r24)
	ctx.current_instruction = 0x88207D58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 112);
	// stw r8,8(r9)
	ctx.current_instruction = 0x88207D5C;
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,84(r28)
	ctx.current_instruction = 0x88207D60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,116(r24)
	ctx.current_instruction = 0x88207D64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 116);
	// stw r6,12(r7)
	ctx.current_instruction = 0x88207D68;
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r5,120(r24)
	ctx.current_instruction = 0x88207D6C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + 120);
	// lwz r4,84(r28)
	ctx.current_instruction = 0x88207D70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r5,16(r4)
	ctx.current_instruction = 0x88207D74;
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r5.u32);
	// lwz r10,84(r28)
	ctx.current_instruction = 0x88207D78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r11,124(r24)
	ctx.current_instruction = 0x88207D7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 124);
	// stw r11,20(r10)
	ctx.current_instruction = 0x88207D80;
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r9,128(r24)
	ctx.current_instruction = 0x88207D84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 128);
	// lwz r8,84(r28)
	ctx.current_instruction = 0x88207D88;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r9,24(r8)
	ctx.current_instruction = 0x88207D8C;
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,84(r28)
	ctx.current_instruction = 0x88207D90;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,132(r24)
	ctx.current_instruction = 0x88207D94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 132);
	// stw r6,28(r7)
	ctx.current_instruction = 0x88207D98;
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r6.u32);
	// lwz r5,136(r24)
	ctx.current_instruction = 0x88207D9C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + 136);
	// lwz r4,84(r28)
	ctx.current_instruction = 0x88207DA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// stw r5,32(r4)
	ctx.current_instruction = 0x88207DA4;
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r5.u32);
	// lwz r11,84(r28)
	ctx.current_instruction = 0x88207DA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r10,140(r24)
	ctx.current_instruction = 0x88207DAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 140);
	// stw r10,36(r11)
	ctx.current_instruction = 0x88207DB0;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r9,84(r28)
	ctx.current_instruction = 0x88207DB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r8,144(r24)
	ctx.current_instruction = 0x88207DB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 144);
	// stw r8,40(r9)
	ctx.current_instruction = 0x88207DBC;
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// lwz r7,84(r28)
	ctx.current_instruction = 0x88207DC0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r6,148(r24)
	ctx.current_instruction = 0x88207DC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 148);
	// stw r6,44(r7)
	ctx.current_instruction = 0x88207DC8;
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r6.u32);
	// lwz r5,84(r28)
	ctx.current_instruction = 0x88207DCC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r4,152(r24)
	ctx.current_instruction = 0x88207DD0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 152);
	// stw r4,48(r5)
	ctx.current_instruction = 0x88207DD4;
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r4.u32);
loc_88207DD8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

