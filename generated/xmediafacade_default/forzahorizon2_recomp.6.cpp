#include "forzahorizon2_funcs.6.h"

DEFINE_REX_FUNC(sub_88050088) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050088);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050088;
	ctx.current_instruction = 0x88050088;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,24(r11)
	ctx.current_instruction = 0x88050090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_15) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050814);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050814;
	ctx.current_instruction = 0x88050814;
	// std r15,-144(r1)
	ctx.current_instruction = 0x88050814;
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r15.u64);
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

DEFINE_REX_FUNC(sub_8805234C) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805234C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805234C;
	ctx.current_instruction = 0x8805234C;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88052540) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88052540);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052540;
	ctx.current_instruction = 0x88052540;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,3584
	ctx.r9.s64 = ctx.r10.s64 + 3584;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_88052550:
	// lwz r8,0(r10)
	ctx.current_instruction = 0x88052550;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x88052574
	if (ctx.cr6.eq) goto loc_88052574;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// blt cr6,0x88052550
	if (ctx.cr6.lt) goto loc_88052550;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88052574:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.current_instruction = 0x8805257C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88054C28) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88054C28);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88054C28;
	ctx.current_instruction = 0x88054C28;
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x88054c4c
	goto loc_88054C4C;
loc_88054C38:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,0(r4)
	ctx.current_instruction = 0x88054C3C;
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	ctx.current_instruction = 0x88054C44;
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_88054C4C:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x88054c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_88054C38;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x88054c7c
	if (ctx.cr0.eq) goto loc_88054C7C;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x88054ca0
	if (!ctx.cr0.eq) goto loc_88054CA0;
loc_88054C68:
	// lwz r7,0(r4)
	ctx.current_instruction = 0x88054C68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	ctx.current_instruction = 0x88054C70;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz+ 0x88054c68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054C68;
loc_88054C7C:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_88054C88:
	// lbz r0,0(r4)
	ctx.current_instruction = 0x88054C88;
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	ctx.current_instruction = 0x88054C90;
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz+ 0x88054c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054C88;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88054CA0:
	// lbz r7,3(r4)
	ctx.current_instruction = 0x88054CA0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r8,2(r4)
	ctx.current_instruction = 0x88054CA4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,1(r4)
	ctx.current_instruction = 0x88054CAC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,0(r4)
	ctx.current_instruction = 0x88054CB4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	ctx.current_instruction = 0x88054CC0;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x88054ca0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054CA0;
	// b 0x88054c7c
	goto loc_88054C7C;
}

DEFINE_REX_FUNC(sub_88058178) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88058178;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88058178) {
			switch (rex_dispatch_address) {
				case 0x88058180:
				case 0x880581A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88058178;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88058180: goto loc_88058180;
		case 0x880581A8: goto loc_880581A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88058180;
	__savegprlr_27(ctx, base);
loc_88058180:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88058180;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x880581A8;
	sub_88052D90(ctx, base);
loc_880581A8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x88058208
	if (ctx.cr6.lt) goto loc_88058208;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// bgt cr6,0x88058208
	if (ctx.cr6.gt) goto loc_88058208;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// sth r11,2(r31)
	ctx.current_instruction = 0x880581C0;
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// beq cr6,0x88058208
	if (ctx.cr6.eq) goto loc_88058208;
	// stw r28,4(r31)
	ctx.current_instruction = 0x880581C8;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// bgt cr6,0x88058218
	if (ctx.cr6.gt) goto loc_88058218;
	// beq cr6,0x88058220
	if (ctx.cr6.eq) goto loc_88058220;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// beq cr6,0x880581e8
	if (ctx.cr6.eq) goto loc_880581E8;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// bne cr6,0x88058208
	if (!ctx.cr6.eq) goto loc_88058208;
loc_880581E8:
	// rlwinm r10,r29,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
	// sth r29,14(r31)
	ctx.current_instruction = 0x880581EC;
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r29.u16);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// sth r8,0(r31)
	ctx.current_instruction = 0x880581FC;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// sth r7,12(r31)
	ctx.current_instruction = 0x88058200;
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r7.u16);
	// b 0x88058238
	goto loc_88058238;
loc_88058208:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88058218:
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// bne cr6,0x88058208
	if (!ctx.cr6.eq) goto loc_88058208;
loc_88058220:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,32
	ctx.r9.s64 = 32;
	// rlwinm r8,r11,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// sth r10,0(r31)
	ctx.current_instruction = 0x8805822C;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// sth r9,14(r31)
	ctx.current_instruction = 0x88058230;
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r9.u16);
	// sth r8,12(r31)
	ctx.current_instruction = 0x88058234;
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r8.u16);
loc_88058238:
	// lhz r11,12(r31)
	ctx.current_instruction = 0x88058238;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// stw r10,8(r31)
	ctx.current_instruction = 0x88058244;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805A7C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805A7C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805A7C0) {
			switch (rex_dispatch_address) {
				case 0x8805A7C8:
				case 0x8805A7F4:
				case 0x8805A834:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A7C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805A7C8: goto loc_8805A7C8;
		case 0x8805A7F4: goto loc_8805A7F4;
		case 0x8805A834: goto loc_8805A834;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8805A7C8;
	__savegprlr_29(ctx, base);
loc_8805A7C8:
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805A7CC;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	ctx.current_instruction = 0x8805A7D4;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,672
	ctx.r3.s64 = ctx.r3.s64 + 672;
	// lwz r11,672(r30)
	ctx.current_instruction = 0x8805A7DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805a814
	if (ctx.cr6.eq) goto loc_8805A814;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x88065bb0
	ctx.lr = 0x8805A7F4;
	sub_88065BB0(ctx, base);
loc_8805A7F4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8805a808
	goto loc_8805A808;
loc_8805A808:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,672(r30)
	ctx.current_instruction = 0x8805A80C;
	REX_STORE_U32(ctx.r30.u32 + 672, ctx.r29.u32);
	// b 0x8805a818
	goto loc_8805A818;
loc_8805A814:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8805A818:
	// lwz r3,52(r30)
	ctx.current_instruction = 0x8805A818;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805a838
	if (ctx.cr6.eq) goto loc_8805A838;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805A824;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8805A828;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A834:
	// stw r29,52(r30)
	ctx.current_instruction = 0x8805A834;
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
loc_8805A838:
	// stw r29,676(r30)
	ctx.current_instruction = 0x8805A838;
	REX_STORE_U32(ctx.r30.u32 + 676, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,668(r30)
	ctx.current_instruction = 0x8805A840;
	REX_STORE_U32(ctx.r30.u32 + 668, ctx.r29.u32);
	// stw r29,664(r30)
	ctx.current_instruction = 0x8805A844;
	REX_STORE_U32(ctx.r30.u32 + 664, ctx.r29.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805BC60) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805BC60);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BC60;
	ctx.current_instruction = 0x8805BC60;
	// lwz r10,328(r3)
	ctx.current_instruction = 0x8805BC60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,328(r3)
	ctx.current_instruction = 0x8805BC70;
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r10,324(r11)
	ctx.current_instruction = 0x8805BC7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,324(r11)
	ctx.current_instruction = 0x8805BC84;
	REX_STORE_U32(ctx.r11.u32 + 324, ctx.r10.u32);
	// lwz r10,320(r11)
	ctx.current_instruction = 0x8805BC88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,320(r11)
	ctx.current_instruction = 0x8805BC90;
	REX_STORE_U32(ctx.r11.u32 + 320, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805BF60) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805BF60);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BF60;
	ctx.current_instruction = 0x8805BF60;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,48(r10)
	ctx.current_instruction = 0x8805BF6C;
	REX_STORE_U64(ctx.r10.u32 + 48, ctx.r11.u64);
	// stw r11,44(r10)
	ctx.current_instruction = 0x8805BF70;
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805C0D0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805C0D0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C0D0;
	ctx.current_instruction = 0x8805C0D0;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// b 0x88050358
	sub_88050358(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805C340) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805C340;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805C340) {
			switch (rex_dispatch_address) {
				case 0x8805C358:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C340;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805C358: goto loc_8805C358;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805C344;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805C348;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805C34C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88061fb8
	ctx.lr = 0x8805C358;
	sub_88061FB8(ctx, base);
loc_8805C358:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,9296
	ctx.r9.s64 = ctx.r10.s64 + 9296;
	// stw r11,44(r31)
	ctx.current_instruction = 0x8805C364;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	ctx.current_instruction = 0x8805C36C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,48(r31)
	ctx.current_instruction = 0x8805C370;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	ctx.current_instruction = 0x8805C374;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	ctx.current_instruction = 0x8805C378;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805C380;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805C388;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805DDC0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805DDC0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805DDC0;
	ctx.current_instruction = 0x8805DDC0;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x8805DDC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,2792(r11)
	ctx.current_instruction = 0x8805DDC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2792);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805E058) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805E058);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805E058;
	ctx.current_instruction = 0x8805E058;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x8805E058;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,31104(r11)
	ctx.current_instruction = 0x8805E05C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31104);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805FC40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805FC40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805FC40) {
			switch (rex_dispatch_address) {
				case 0x8805FC48:
				case 0x8805FD54:
				case 0x8805FE50:
				case 0x8805FE80:
				case 0x8805FF88:
				case 0x8805FFE8:
				case 0x8805FFF8:
				case 0x88060018:
				case 0x88060048:
				case 0x88060078:
				case 0x88060120:
				case 0x88060178:
				case 0x88060238:
				case 0x8806024C:
				case 0x88060278:
				case 0x880602A4:
				case 0x880602C4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805FC40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805FC48: goto loc_8805FC48;
		case 0x8805FD54: goto loc_8805FD54;
		case 0x8805FE50: goto loc_8805FE50;
		case 0x8805FE80: goto loc_8805FE80;
		case 0x8805FF88: goto loc_8805FF88;
		case 0x8805FFE8: goto loc_8805FFE8;
		case 0x8805FFF8: goto loc_8805FFF8;
		case 0x88060018: goto loc_88060018;
		case 0x88060048: goto loc_88060048;
		case 0x88060078: goto loc_88060078;
		case 0x88060120: goto loc_88060120;
		case 0x88060178: goto loc_88060178;
		case 0x88060238: goto loc_88060238;
		case 0x8806024C: goto loc_8806024C;
		case 0x88060278: goto loc_88060278;
		case 0x880602A4: goto loc_880602A4;
		case 0x880602C4: goto loc_880602C4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8805FC48;
	__savegprlr_14(ctx, base);
loc_8805FC48:
	// stfd f29,-176(r1)
	ctx.current_instruction = 0x8805FC48;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	ctx.current_instruction = 0x8805FC4C;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	ctx.current_instruction = 0x8805FC50;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-496(r1)
	ctx.current_instruction = 0x8805FC54;
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,756(r1)
	ctx.current_instruction = 0x8805FC58;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,532(r1)
	ctx.current_instruction = 0x8805FC64;
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// std r10,568(r1)
	ctx.current_instruction = 0x8805FC7C;
	REX_STORE_U64(ctx.r1.u32 + 568, ctx.r10.u64);
	// lfd f0,1488(r11)
	ctx.current_instruction = 0x8805FC80;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// stw r6,540(r1)
	ctx.current_instruction = 0x8805FC84;
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r6.u32);
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// stw r22,60(r3)
	ctx.current_instruction = 0x8805FC90;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r22.u32);
	// beq cr6,0x8805fca0
	if (ctx.cr6.eq) goto loc_8805FCA0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8805fcac
	if (!ctx.cr6.eq) goto loc_8805FCAC;
loc_8805FCA0:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8805fcac
	if (ctx.cr6.gt) goto loc_8805FCAC;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_8805FCAC:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8805fccc
	if (ctx.cr6.eq) goto loc_8805FCCC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x880602dc
	if (ctx.cr6.eq) goto loc_880602DC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x880602dc
	if (ctx.cr6.eq) goto loc_880602DC;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x880602dc
	if (ctx.cr6.eq) goto loc_880602DC;
loc_8805FCCC:
	// lwz r28,604(r1)
	ctx.current_instruction = 0x8805FCCC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r23,596(r1)
	ctx.current_instruction = 0x8805FCD4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// stw r27,36(r31)
	ctx.current_instruction = 0x8805FCD8;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r25,40(r31)
	ctx.current_instruction = 0x8805FCDC;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// beq cr6,0x8805fcfc
	if (ctx.cr6.eq) goto loc_8805FCFC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8805fcfc
	if (ctx.cr6.eq) goto loc_8805FCFC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x8805fd0c
	if (!ctx.cr6.eq) goto loc_8805FD0C;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8805fd0c
	if (!ctx.cr6.gt) goto loc_8805FD0C;
loc_8805FCFC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x880602dc
	if (ctx.cr6.eq) goto loc_880602DC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x880602dc
	if (ctx.cr6.eq) goto loc_880602DC;
loc_8805FD0C:
	// lwz r26,732(r1)
	ctx.current_instruction = 0x8805FD0C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// stw r28,44(r31)
	ctx.current_instruction = 0x8805FD10;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8805fd20
	if (!ctx.cr6.eq) goto loc_8805FD20;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_8805FD20:
	// lwz r24,740(r1)
	ctx.current_instruction = 0x8805FD20;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8805fd30
	if (!ctx.cr6.eq) goto loc_8805FD30;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_8805FD30:
	// lwz r20,612(r1)
	ctx.current_instruction = 0x8805FD30;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfd f29,544(r31)
	ctx.current_instruction = 0x8805FD38;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 544, ctx.f29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,80(r31)
	ctx.current_instruction = 0x8805FD40;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r29,88(r31)
	ctx.current_instruction = 0x8805FD44;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r29,264(r31)
	ctx.current_instruction = 0x8805FD48;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
	// stw r20,444(r31)
	ctx.current_instruction = 0x8805FD4C;
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r20.u32);
	// bl 0x8805f9f8
	ctx.lr = 0x8805FD54;
	sub_8805F9F8(ctx, base);
loc_8805FD54:
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x8805FD58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r10,22067
	ctx.r9.u64 = ctx.r10.u64 | 22067;
	// stw r29,272(r1)
	ctx.current_instruction = 0x8805FD60;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8805fdd8
	if (ctx.cr6.eq) goto loc_8805FDD8;
	// lis r10,30573
	ctx.r10.s64 = 2003632128;
	// ori r9,r10,30259
	ctx.r9.u64 = ctx.r10.u64 | 30259;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8805fdd8
	if (ctx.cr6.eq) goto loc_8805FDD8;
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// ori r9,r10,22081
	ctx.r9.u64 = ctx.r10.u64 | 22081;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8805fdc4
	if (ctx.cr6.eq) goto loc_8805FDC4;
	// lis r10,30573
	ctx.r10.s64 = 2003632128;
	// ori r9,r10,30305
	ctx.r9.u64 = ctx.r10.u64 | 30305;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8805fdc4
	if (ctx.cr6.eq) goto loc_8805FDC4;
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// ori r9,r10,22098
	ctx.r9.u64 = ctx.r10.u64 | 22098;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8805fdbc
	if (ctx.cr6.eq) goto loc_8805FDBC;
	// lis r10,30573
	ctx.r10.s64 = 2003632128;
	// ori r9,r10,30322
	ctx.r9.u64 = ctx.r10.u64 | 30322;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x880602dc
	if (!ctx.cr6.eq) goto loc_880602DC;
loc_8805FDBC:
	// li r21,7
	ctx.r21.s64 = 7;
	// b 0x8805fddc
	goto loc_8805FDDC;
loc_8805FDC4:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x8805FDC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r21,r11,7
	ctx.r21.s64 = ctx.r11.s64 + 7;
	// b 0x8805fddc
	goto loc_8805FDDC;
loc_8805FDD8:
	// li r21,6
	ctx.r21.s64 = 6;
loc_8805FDDC:
	// lwz r11,284(r31)
	ctx.current_instruction = 0x8805FDDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r19,748(r1)
	ctx.current_instruction = 0x8805FDE0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// stw r21,276(r1)
	ctx.current_instruction = 0x8805FDE4;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// sth r29,462(r31)
	ctx.current_instruction = 0x8805FDEC;
	REX_STORE_U16(ctx.r31.u32 + 462, ctx.r29.u16);
	// stw r29,484(r31)
	ctx.current_instruction = 0x8805FDF0;
	REX_STORE_U32(ctx.r31.u32 + 484, ctx.r29.u32);
	// stw r29,480(r31)
	ctx.current_instruction = 0x8805FDF4;
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r29.u32);
	// stw r29,464(r31)
	ctx.current_instruction = 0x8805FDF8;
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r29.u32);
	// stw r29,456(r31)
	ctx.current_instruction = 0x8805FDFC;
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r29.u32);
	// sth r29,460(r31)
	ctx.current_instruction = 0x8805FE00;
	REX_STORE_U16(ctx.r31.u32 + 460, ctx.r29.u16);
	// stw r29,448(r31)
	ctx.current_instruction = 0x8805FE04;
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r29.u32);
	// stw r29,468(r31)
	ctx.current_instruction = 0x8805FE08;
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r29.u32);
	// stw r29,452(r31)
	ctx.current_instruction = 0x8805FE0C;
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r29.u32);
	// stw r29,472(r31)
	ctx.current_instruction = 0x8805FE10;
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r29.u32);
	// stw r29,476(r31)
	ctx.current_instruction = 0x8805FE14;
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r29.u32);
	// stw r29,500(r31)
	ctx.current_instruction = 0x8805FE18;
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r29.u32);
	// bne cr6,0x8805fe2c
	if (!ctx.cr6.eq) goto loc_8805FE2C;
	// lwz r11,328(r31)
	ctx.current_instruction = 0x8805FE20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805fe58
	if (ctx.cr6.eq) goto loc_8805FE58;
loc_8805FE2C:
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r7,r1,540
	ctx.r7.s64 = ctx.r1.s64 + 540;
	// addi r6,r1,532
	ctx.r6.s64 = ctx.r1.s64 + 532;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805db98
	ctx.lr = 0x8805FE50;
	sub_8805DB98(ctx, base);
loc_8805FE50:
	// lwz r25,540(r1)
	ctx.current_instruction = 0x8805FE50;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r27,532(r1)
	ctx.current_instruction = 0x8805FE54;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
loc_8805FE58:
	// li r18,1
	ctx.r18.s64 = 1;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8805fe6c
	if (!ctx.cr6.eq) goto loc_8805FE6C;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8805fe70
	if (ctx.cr6.eq) goto loc_8805FE70;
loc_8805FE6C:
	// stw r18,512(r31)
	ctx.current_instruction = 0x8805FE6C;
	REX_STORE_U32(ctx.r31.u32 + 512, ctx.r18.u32);
loc_8805FE70:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// li r3,31568
	ctx.r3.s64 = 31568;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050340
	ctx.lr = 0x8805FE80;
	sub_88050340(ctx, base);
loc_8805FE80:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805ff9c
	if (ctx.cr6.eq) goto loc_8805FF9C;
	// lwz r11,284(r31)
	ctx.current_instruction = 0x8805FE88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r11,r31,288
	ctx.r11.s64 = ctx.r31.s64 + 288;
	// beq cr6,0x8805fe9c
	if (ctx.cr6.eq) goto loc_8805FE9C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8805FE9C:
	// lwz r20,588(r1)
	ctx.current_instruction = 0x8805FE9C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// addi r9,r27,15
	ctx.r9.s64 = ctx.r27.s64 + 15;
	// lwz r10,716(r1)
	ctx.current_instruction = 0x8805FEA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r6,r9,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r19,268(r1)
	ctx.current_instruction = 0x8805FEB0;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r19.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stw r24,260(r1)
	ctx.current_instruction = 0x8805FEB8;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r24.u32);
	// stw r26,252(r1)
	ctx.current_instruction = 0x8805FEBC;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r26.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r20,284(r1)
	ctx.current_instruction = 0x8805FEC4;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r20.u32);
	// addi r8,r25,15
	ctx.r8.s64 = ctx.r25.s64 + 15;
	// stw r22,244(r1)
	ctx.current_instruction = 0x8805FECC;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r22.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r6,312(r1)
	ctx.current_instruction = 0x8805FED4;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r6.u32);
	// rlwinm r26,r8,0,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,236(r1)
	ctx.current_instruction = 0x8805FEDC;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// stw r9,204(r1)
	ctx.current_instruction = 0x8805FEE4;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r29,304(r1)
	ctx.current_instruction = 0x8805FEEC;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// std r31,296(r1)
	ctx.current_instruction = 0x8805FEF4;
	REX_STORE_U64(ctx.r1.u32 + 296, ctx.r31.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r10,708(r1)
	ctx.current_instruction = 0x8805FEFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r30,700(r1)
	ctx.current_instruction = 0x8805FF04;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r24,684(r1)
	ctx.current_instruction = 0x8805FF08;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r22,676(r1)
	ctx.current_instruction = 0x8805FF0C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r21,668(r1)
	ctx.current_instruction = 0x8805FF10;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r19,660(r1)
	ctx.current_instruction = 0x8805FF14;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r18,652(r1)
	ctx.current_instruction = 0x8805FF18;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r17,644(r1)
	ctx.current_instruction = 0x8805FF1C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r16,628(r1)
	ctx.current_instruction = 0x8805FF20;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r15,620(r1)
	ctx.current_instruction = 0x8805FF24;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r14,580(r1)
	ctx.current_instruction = 0x8805FF28;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r20,612(r1)
	ctx.current_instruction = 0x8805FF2C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// ld r31,568(r1)
	ctx.current_instruction = 0x8805FF30;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 568);
	// lwz r9,284(r1)
	ctx.current_instruction = 0x8805FF34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r29,308(r1)
	ctx.current_instruction = 0x8805FF38;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// stw r26,316(r1)
	ctx.current_instruction = 0x8805FF3C;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r26.u32);
	// stw r10,228(r1)
	ctx.current_instruction = 0x8805FF40;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stw r11,220(r1)
	ctx.current_instruction = 0x8805FF44;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stw r30,212(r1)
	ctx.current_instruction = 0x8805FF48;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r24,196(r1)
	ctx.current_instruction = 0x8805FF4C;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r22,188(r1)
	ctx.current_instruction = 0x8805FF50;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r22.u32);
	// stw r21,180(r1)
	ctx.current_instruction = 0x8805FF54;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// stw r19,172(r1)
	ctx.current_instruction = 0x8805FF58;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// stw r18,164(r1)
	ctx.current_instruction = 0x8805FF5C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// stw r17,156(r1)
	ctx.current_instruction = 0x8805FF60;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r17.u32);
	// stw r16,148(r1)
	ctx.current_instruction = 0x8805FF64;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// stw r15,140(r1)
	ctx.current_instruction = 0x8805FF68;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// stw r20,132(r1)
	ctx.current_instruction = 0x8805FF6C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// stw r28,124(r1)
	ctx.current_instruction = 0x8805FF70;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r23,116(r1)
	ctx.current_instruction = 0x8805FF74;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r14,108(r1)
	ctx.current_instruction = 0x8805FF78;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// stw r9,100(r1)
	ctx.current_instruction = 0x8805FF7C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// std r31,88(r1)
	ctx.current_instruction = 0x8805FF80;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// bl 0x880747f0
	ctx.lr = 0x8805FF88;
	sub_880747F0(ctx, base);
loc_8805FF88:
	// lwz r21,276(r1)
	ctx.current_instruction = 0x8805FF88;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r19,748(r1)
	ctx.current_instruction = 0x8805FF90;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// ld r31,296(r1)
	ctx.current_instruction = 0x8805FF94;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 296);
	// b 0x8805ffa0
	goto loc_8805FFA0;
loc_8805FF9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8805FFA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	ctx.current_instruction = 0x8805FFA4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq cr6,0x880602bc
	if (ctx.cr6.eq) goto loc_880602BC;
	// lwz r11,272(r1)
	ctx.current_instruction = 0x8805FFAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880602bc
	if (!ctx.cr6.eq) goto loc_880602BC;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8805FFB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805ffd8
	if (ctx.cr6.eq) goto loc_8805FFD8;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8805FFC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8805ffd8
	if (!ctx.cr6.eq) goto loc_8805FFD8;
	// stw r18,8(r3)
	ctx.current_instruction = 0x8805FFD0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// stw r18,12(r3)
	ctx.current_instruction = 0x8805FFD4;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r18.u32);
loc_8805FFD8:
	// lwz r5,496(r31)
	ctx.current_instruction = 0x8805FFD8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 496);
	// lwz r4,508(r31)
	ctx.current_instruction = 0x8805FFDC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805FFE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8806e088
	ctx.lr = 0x8805FFE8;
	sub_8806E088(ctx, base);
loc_8805FFE8:
	// lwz r5,524(r31)
	ctx.current_instruction = 0x8805FFE8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// lwz r4,504(r31)
	ctx.current_instruction = 0x8805FFEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805FFF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8806e098
	ctx.lr = 0x8805FFF8;
	sub_8806E098(ctx, base);
loc_8805FFF8:
	// stw r27,28(r31)
	ctx.current_instruction = 0x8805FFF8;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r25,32(r31)
	ctx.current_instruction = 0x88060000;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// stw r29,56(r31)
	ctx.current_instruction = 0x88060008;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,276(r1)
	ctx.current_instruction = 0x88060010;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// bl 0x8805d9d8
	ctx.lr = 0x88060018;
	sub_8805D9D8(ctx, base);
loc_88060018:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88060034
	if (ctx.cr6.eq) goto loc_88060034;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x88060020;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stw r8,96(r31)
	ctx.current_instruction = 0x88060030;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_88060034:
	// lwz r11,96(r31)
	ctx.current_instruction = 0x88060034;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88060048
	if (ctx.cr6.eq) goto loc_88060048;
	// lwz r3,12(r31)
	ctx.current_instruction = 0x88060040;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x88071528
	ctx.lr = 0x88060048;
	sub_88071528(ctx, base);
loc_88060048:
	// cmpwi cr6,r21,8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 8, ctx.xer);
	// beq cr6,0x88060058
	if (ctx.cr6.eq) goto loc_88060058;
	// cmpwi cr6,r21,7
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 7, ctx.xer);
	// bne cr6,0x88060084
	if (!ctx.cr6.eq) goto loc_88060084;
loc_88060058:
	// li r11,72
	ctx.r11.s64 = 72;
	// li r10,176
	ctx.r10.s64 = 176;
	// stw r11,84(r31)
	ctx.current_instruction = 0x88060060;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// stw r10,88(r31)
	ctx.current_instruction = 0x88060068;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// li r3,176
	ctx.r3.s64 = 176;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050340
	ctx.lr = 0x88060078;
	sub_88050340(ctx, base);
loc_88060078:
	// stw r3,72(r31)
	ctx.current_instruction = 0x88060078;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880602dc
	if (ctx.cr6.eq) goto loc_880602DC;
loc_88060084:
	// lwz r11,692(r1)
	ctx.current_instruction = 0x88060084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// addi r10,r25,15
	ctx.r10.s64 = ctx.r25.s64 + 15;
	// lwz r8,636(r1)
	ctx.current_instruction = 0x8806008C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,24(r31)
	ctx.current_instruction = 0x88060094;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r11,r27,15
	ctx.r11.s64 = ctx.r27.s64 + 15;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// beq cr6,0x880600f4
	if (ctx.cr6.eq) goto loc_880600F4;
	// rlwinm r7,r10,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r9,r6,32768
	ctx.r9.u64 = ctx.r6.u64 | 32768;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x880600c8
	if (!ctx.cr6.lt) goto loc_880600C8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_880600C8:
	// lwz r4,0(r8)
	ctx.current_instruction = 0x880600C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880600e0
	if (!ctx.cr6.gt) goto loc_880600E0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r8)
	ctx.current_instruction = 0x880600D8;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// b 0x88060118
	goto loc_88060118;
loc_880600E0:
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880600ec
	if (!ctx.cr6.lt) goto loc_880600EC;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_880600EC:
	// stw r4,0(r8)
	ctx.current_instruction = 0x880600EC;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// b 0x88060118
	goto loc_88060118;
loc_880600F4:
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x88060114
	if (!ctx.cr6.lt) goto loc_88060114;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
loc_88060114:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_88060118:
	// lwz r3,12(r31)
	ctx.current_instruction = 0x88060118;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8806c360
	ctx.lr = 0x88060120;
	sub_8806C360(ctx, base);
loc_88060120:
	// mullw r11,r27,r25
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r25.s32);
	// lwz r10,96(r31)
	ctx.current_instruction = 0x88060124;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,264(r31)
	ctx.current_instruction = 0x88060128;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,272(r31)
	ctx.current_instruction = 0x88060134;
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// beq cr6,0x88060144
	if (ctx.cr6.eq) goto loc_88060144;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x88060168
	goto loc_88060168;
loc_88060144:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88060144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,2124(r11)
	ctx.current_instruction = 0x88060148;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 2124);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8806015c
	if (!ctx.cr6.lt) goto loc_8806015C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x88060168
	goto loc_88060168;
loc_8806015C:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// ble cr6,0x88060168
	if (!ctx.cr6.gt) goto loc_88060168;
	// li r30,7
	ctx.r30.s64 = 7;
loc_88060168:
	// stw r30,264(r31)
	ctx.current_instruction = 0x88060168;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// clrlwi r4,r30,29
	ctx.r4.u64 = ctx.r30.u32 & 0x7;
	// lwz r3,12(r31)
	ctx.current_instruction = 0x88060170;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8806d378
	ctx.lr = 0x88060178;
	sub_8806D378(ctx, base);
loc_88060178:
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 4, ctx.xer);
	// blt cr6,0x8806018c
	if (ctx.cr6.lt) goto loc_8806018C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r11,552(r31)
	ctx.current_instruction = 0x88060184;
	REX_STORE_U8(ctx.r31.u32 + 552, ctx.r11.u8);
	// b 0x88060190
	goto loc_88060190;
loc_8806018C:
	// stb r29,552(r31)
	ctx.current_instruction = 0x8806018C;
	REX_STORE_U8(ctx.r31.u32 + 552, ctx.r29.u8);
loc_88060190:
	// cmpwi cr6,r21,8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 8, ctx.xer);
	// beq cr6,0x880601b0
	if (ctx.cr6.eq) goto loc_880601B0;
	// cmpwi cr6,r21,6
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 6, ctx.xer);
	// beq cr6,0x880601b0
	if (ctx.cr6.eq) goto loc_880601B0;
	// cmpwi cr6,r21,7
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 7, ctx.xer);
	// beq cr6,0x880601b0
	if (ctx.cr6.eq) goto loc_880601B0;
	// stw r29,580(r31)
	ctx.current_instruction = 0x880601A8;
	REX_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// b 0x88060238
	goto loc_88060238;
loc_880601B0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880601c8
	if (!ctx.cr6.gt) goto loc_880601C8;
	// addic. r11,r30,2
	ctx.xer.ca = ctx.r30.u32 > 4294967293;
	ctx.r11.s64 = ctx.r30.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x880601c8
	if (!ctx.cr0.gt) goto loc_880601C8;
	// stw r11,580(r31)
	ctx.current_instruction = 0x880601C0;
	REX_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// b 0x880601cc
	goto loc_880601CC;
loc_880601C8:
	// stw r29,580(r31)
	ctx.current_instruction = 0x880601C8;
	REX_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
loc_880601CC:
	// lwz r9,12(r31)
	ctx.current_instruction = 0x880601CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r11,31536(r9)
	ctx.current_instruction = 0x880601D0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 31536);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x88060238
	if (!ctx.cr6.gt) goto loc_88060238;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880601e8
	if (!ctx.cr6.gt) goto loc_880601E8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_880601E8:
	// lwz r10,580(r31)
	ctx.current_instruction = 0x880601E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 580);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8806021c
	if (!ctx.cr6.lt) goto loc_8806021C;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// ble cr6,0x88060218
	if (!ctx.cr6.gt) goto loc_88060218;
	// subfic r10,r30,17
	ctx.xer.ca = ctx.r30.u32 <= 17;
	ctx.r10.u64 = static_cast<uint64_t>(17) - ctx.r30.u64;
	// li r11,18
	ctx.r11.s64 = 18;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x88060214
	if (!ctx.cr6.lt) goto loc_88060214;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_88060214:
	// stb r10,31536(r9)
	ctx.current_instruction = 0x88060214;
	REX_STORE_U8(ctx.r9.u32 + 31536, ctx.r10.u8);
loc_88060218:
	// stw r11,580(r31)
	ctx.current_instruction = 0x88060218;
	REX_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
loc_8806021C:
	// lwz r10,12(r31)
	ctx.current_instruction = 0x8806021C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lbz r7,31536(r10)
	ctx.current_instruction = 0x8806022C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 31536);
	// lwz r3,31552(r10)
	ctx.current_instruction = 0x88060230;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 31552);
	// bl 0x880bf400
	ctx.lr = 0x88060238;
	sub_880BF400(ctx, base);
loc_88060238:
	// stw r29,280(r1)
	ctx.current_instruction = 0x88060238;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805d980
	ctx.lr = 0x8806024C;
	sub_8805D980(ctx, base);
loc_8806024C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88060268
	if (ctx.cr6.eq) goto loc_88060268;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88060254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88060268
	if (ctx.cr6.eq) goto loc_88060268;
	// lwz r10,280(r1)
	ctx.current_instruction = 0x88060260;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r10,31540(r11)
	ctx.current_instruction = 0x88060264;
	REX_STORE_U32(ctx.r11.u32 + 31540, ctx.r10.u32);
loc_88060268:
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r5,580(r31)
	ctx.current_instruction = 0x8806026C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 580);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805fab0
	ctx.lr = 0x88060278;
	sub_8805FAB0(ctx, base);
loc_88060278:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x88060278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880602dc
	if (!ctx.cr6.eq) goto loc_880602DC;
	// lwz r3,12(r31)
	ctx.current_instruction = 0x88060284;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880602dc
	if (ctx.cr6.eq) goto loc_880602DC;
	// lwz r11,272(r1)
	ctx.current_instruction = 0x88060290;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880602dc
	if (!ctx.cr6.eq) goto loc_880602DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8806e3d8
	ctx.lr = 0x880602A4;
	sub_8806E3D8(ctx, base);
loc_880602A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f29,-176(r1)
	ctx.current_instruction = 0x880602AC;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.current_instruction = 0x880602B0;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.current_instruction = 0x880602B4;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880602BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805f9f8
	ctx.lr = 0x880602C4;
	sub_8805F9F8(ctx, base);
loc_880602C4:
	// lwz r3,272(r1)
	ctx.current_instruction = 0x880602C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f29,-176(r1)
	ctx.current_instruction = 0x880602CC;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.current_instruction = 0x880602D0;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.current_instruction = 0x880602D4;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880602DC:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f29,-176(r1)
	ctx.current_instruction = 0x880602E4;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.current_instruction = 0x880602E8;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.current_instruction = 0x880602EC;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88074338) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88074338;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88074338) {
			switch (rex_dispatch_address) {
				case 0x88074340:
				case 0x880743E8:
				case 0x88074420:
				case 0x880744C8:
				case 0x88074504:
				case 0x8807450C:
				case 0x88074534:
				case 0x8807454C:
				case 0x88074574:
				case 0x88074580:
				case 0x88074598:
				case 0x880745A8:
				case 0x880745C0:
				case 0x880745D0:
				case 0x88074608:
				case 0x88074614:
				case 0x88074630:
				case 0x88074654:
				case 0x88074668:
				case 0x880746DC:
				case 0x880746E4:
				case 0x880746F0:
				case 0x88074714:
				case 0x88074720:
				case 0x88074760:
				case 0x8807478C:
				case 0x880747DC:
				case 0x880747E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88074338;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88074340: goto loc_88074340;
		case 0x880743E8: goto loc_880743E8;
		case 0x88074420: goto loc_88074420;
		case 0x880744C8: goto loc_880744C8;
		case 0x88074504: goto loc_88074504;
		case 0x8807450C: goto loc_8807450C;
		case 0x88074534: goto loc_88074534;
		case 0x8807454C: goto loc_8807454C;
		case 0x88074574: goto loc_88074574;
		case 0x88074580: goto loc_88074580;
		case 0x88074598: goto loc_88074598;
		case 0x880745A8: goto loc_880745A8;
		case 0x880745C0: goto loc_880745C0;
		case 0x880745D0: goto loc_880745D0;
		case 0x88074608: goto loc_88074608;
		case 0x88074614: goto loc_88074614;
		case 0x88074630: goto loc_88074630;
		case 0x88074654: goto loc_88074654;
		case 0x88074668: goto loc_88074668;
		case 0x880746DC: goto loc_880746DC;
		case 0x880746E4: goto loc_880746E4;
		case 0x880746F0: goto loc_880746F0;
		case 0x88074714: goto loc_88074714;
		case 0x88074720: goto loc_88074720;
		case 0x88074760: goto loc_88074760;
		case 0x8807478C: goto loc_8807478C;
		case 0x880747DC: goto loc_880747DC;
		case 0x880747E8: goto loc_880747E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88074340;
	__savegprlr_28(ctx, base);
loc_88074340:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88074340;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28568(r3)
	ctx.current_instruction = 0x88074344;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28568);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880743e8
	if (ctx.cr6.eq) goto loc_880743E8;
	// lwz r11,7868(r3)
	ctx.current_instruction = 0x88074360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88074364;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88074368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x8807437c
	if (!ctx.cr6.eq) goto loc_8807437C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8807438c
	goto loc_8807438C;
loc_8807437C:
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_8807438C:
	// li r5,504
	ctx.r5.s64 = 504;
	// stw r30,28616(r31)
	ctx.current_instruction = 0x88074390;
	REX_STORE_U32(ctx.r31.u32 + 28616, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,28584(r31)
	ctx.current_instruction = 0x88074398;
	REX_STORE_U32(ctx.r31.u32 + 28584, ctx.r30.u32);
	// addi r3,r31,28676
	ctx.r3.s64 = ctx.r31.s64 + 28676;
	// stw r30,28580(r31)
	ctx.current_instruction = 0x880743A0;
	REX_STORE_U32(ctx.r31.u32 + 28580, ctx.r30.u32);
	// stw r30,28576(r31)
	ctx.current_instruction = 0x880743A4;
	REX_STORE_U32(ctx.r31.u32 + 28576, ctx.r30.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r30,28572(r31)
	ctx.current_instruction = 0x880743AC;
	REX_STORE_U32(ctx.r31.u32 + 28572, ctx.r30.u32);
	// stw r30,28608(r31)
	ctx.current_instruction = 0x880743B0;
	REX_STORE_U32(ctx.r31.u32 + 28608, ctx.r30.u32);
	// stw r30,28612(r31)
	ctx.current_instruction = 0x880743B4;
	REX_STORE_U32(ctx.r31.u32 + 28612, ctx.r30.u32);
	// stw r30,28604(r31)
	ctx.current_instruction = 0x880743B8;
	REX_STORE_U32(ctx.r31.u32 + 28604, ctx.r30.u32);
	// stw r30,28632(r31)
	ctx.current_instruction = 0x880743BC;
	REX_STORE_U32(ctx.r31.u32 + 28632, ctx.r30.u32);
	// stw r30,28628(r31)
	ctx.current_instruction = 0x880743C0;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r30.u32);
	// stw r30,28624(r31)
	ctx.current_instruction = 0x880743C4;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r30.u32);
	// stw r30,28636(r31)
	ctx.current_instruction = 0x880743C8;
	REX_STORE_U32(ctx.r31.u32 + 28636, ctx.r30.u32);
	// stw r30,28620(r31)
	ctx.current_instruction = 0x880743CC;
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r30.u32);
	// stw r30,30172(r31)
	ctx.current_instruction = 0x880743D0;
	REX_STORE_U32(ctx.r31.u32 + 30172, ctx.r30.u32);
	// stw r30,30164(r31)
	ctx.current_instruction = 0x880743D4;
	REX_STORE_U32(ctx.r31.u32 + 30164, ctx.r30.u32);
	// stw r30,30156(r31)
	ctx.current_instruction = 0x880743D8;
	REX_STORE_U32(ctx.r31.u32 + 30156, ctx.r30.u32);
	// stw r30,30148(r31)
	ctx.current_instruction = 0x880743DC;
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r30.u32);
	// stw r30,30180(r31)
	ctx.current_instruction = 0x880743E0;
	REX_STORE_U32(ctx.r31.u32 + 30180, ctx.r30.u32);
	// bl 0x88052d90
	ctx.lr = 0x880743E8;
	sub_88052D90(ctx, base);
loc_880743E8:
	// lwz r11,28560(r31)
	ctx.current_instruction = 0x880743E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880743f8
	if (ctx.cr6.eq) goto loc_880743F8;
	// stw r30,30200(r31)
	ctx.current_instruction = 0x880743F4;
	REX_STORE_U32(ctx.r31.u32 + 30200, ctx.r30.u32);
loc_880743F8:
	// lwz r11,1584(r31)
	ctx.current_instruction = 0x880743F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88074418
	if (ctx.cr6.eq) goto loc_88074418;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x88074404;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x88074418
	if (ctx.cr6.eq) goto loc_88074418;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88074420
	if (!ctx.cr6.eq) goto loc_88074420;
loc_88074418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5168
	ctx.lr = 0x88074420;
	sub_880F5168(ctx, base);
loc_88074420:
	// lwz r11,6784(r31)
	ctx.current_instruction = 0x88074420;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6784);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880744b0
	if (ctx.cr6.eq) goto loc_880744B0;
	// lwz r11,2588(r31)
	ctx.current_instruction = 0x88074430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,12208
	ctx.r7.s64 = ctx.r10.s64 + 12208;
	// addi r6,r9,12192
	ctx.r6.s64 = ctx.r9.s64 + 12192;
	// lwzx r5,r8,r7
	ctx.current_instruction = 0x88074448;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r5,2596(r31)
	ctx.current_instruction = 0x88074454;
	REX_STORE_U32(ctx.r31.u32 + 2596, ctx.r5.u32);
	// slw r9,r30,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r3.u8 & 0x3F));
	// srawi r7,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
	// lwzx r4,r8,r6
	ctx.current_instruction = 0x88074460;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stw r9,2604(r31)
	ctx.current_instruction = 0x88074464;
	REX_STORE_U32(ctx.r31.u32 + 2604, ctx.r9.u32);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r7,6892(r31)
	ctx.current_instruction = 0x8807446C;
	REX_STORE_U32(ctx.r31.u32 + 6892, ctx.r7.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r4,2600(r31)
	ctx.current_instruction = 0x88074474;
	REX_STORE_U32(ctx.r31.u32 + 2600, ctx.r4.u32);
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,2608(r31)
	ctx.current_instruction = 0x88074480;
	REX_STORE_U32(ctx.r31.u32 + 2608, ctx.r8.u32);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// srawi r5,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r6,6896(r31)
	ctx.current_instruction = 0x88074494;
	REX_STORE_U32(ctx.r31.u32 + 6896, ctx.r6.u32);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stw r5,6900(r31)
	ctx.current_instruction = 0x8807449C;
	REX_STORE_U32(ctx.r31.u32 + 6900, ctx.r5.u32);
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// stw r4,2612(r31)
	ctx.current_instruction = 0x880744A4;
	REX_STORE_U32(ctx.r31.u32 + 2612, ctx.r4.u32);
	// stw r3,2616(r31)
	ctx.current_instruction = 0x880744A8;
	REX_STORE_U32(ctx.r31.u32 + 2616, ctx.r3.u32);
	// stw r11,6904(r31)
	ctx.current_instruction = 0x880744AC;
	REX_STORE_U32(ctx.r31.u32 + 6904, ctx.r11.u32);
loc_880744B0:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880744B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x880744cc
	if (ctx.cr6.eq) goto loc_880744CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880738e0
	ctx.lr = 0x880744C8;
	sub_880738E0(ctx, base);
loc_880744C8:
	// b 0x880745d0
	goto loc_880745D0;
loc_880744CC:
	// lwz r11,2272(r31)
	ctx.current_instruction = 0x880744CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880744dc
	if (ctx.cr6.eq) goto loc_880744DC;
	// stw r29,2304(r31)
	ctx.current_instruction = 0x880744D8;
	REX_STORE_U32(ctx.r31.u32 + 2304, ctx.r29.u32);
loc_880744DC:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x880744DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88074538
	if (ctx.cr6.eq) goto loc_88074538;
	// lwz r11,28136(r31)
	ctx.current_instruction = 0x880744E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88074538
	if (!ctx.cr6.eq) goto loc_88074538;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880744F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28144(r31)
	ctx.current_instruction = 0x880744FC;
	REX_STORE_U32(ctx.r31.u32 + 28144, ctx.r11.u32);
	// bl 0x88061460
	ctx.lr = 0x88074504;
	sub_88061460(ctx, base);
loc_88074504:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88074504;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6b40
	ctx.lr = 0x8807450C;
	sub_880E6B40(ctx, base);
loc_8807450C:
	// lwz r10,7868(r31)
	ctx.current_instruction = 0x8807450C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,16(r10)
	ctx.current_instruction = 0x88074518;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x8807451C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subfic r8,r9,39
	ctx.xer.ca = ctx.r9.u32 <= 39;
	ctx.r8.u64 = static_cast<uint64_t>(39) - ctx.r9.u64;
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,2792(r31)
	ctx.current_instruction = 0x8807452C;
	REX_STORE_U32(ctx.r31.u32 + 2792, ctx.r7.u32);
	// bl 0x88061460
	ctx.lr = 0x88074534;
	sub_88061460(ctx, base);
loc_88074534:
	// b 0x880745d0
	goto loc_880745D0;
loc_88074538:
	// lwz r11,1276(r31)
	ctx.current_instruction = 0x88074538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807454c
	if (ctx.cr6.eq) goto loc_8807454C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88070278
	ctx.lr = 0x8807454C;
	sub_88070278(ctx, base);
loc_8807454C:
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x8807454C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880745ac
	if (ctx.cr6.eq) goto loc_880745AC;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x88074558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88074584
	if (ctx.cr6.eq) goto loc_88074584;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x88074564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28140(r31)
	ctx.current_instruction = 0x8807456C;
	REX_STORE_U32(ctx.r31.u32 + 28140, ctx.r11.u32);
	// bl 0x88061460
	ctx.lr = 0x88074574;
	sub_88061460(ctx, base);
loc_88074574:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88061460
	ctx.lr = 0x88074580;
	sub_88061460(ctx, base);
loc_88074580:
	// b 0x880745d0
	goto loc_880745D0;
loc_88074584:
	// lwz r11,8236(r31)
	ctx.current_instruction = 0x88074584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880745a0
	if (ctx.cr6.eq) goto loc_880745A0;
	// bl 0x88061460
	ctx.lr = 0x88074598;
	sub_88061460(ctx, base);
loc_88074598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880745A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88061460
	ctx.lr = 0x880745A8;
	sub_88061460(ctx, base);
loc_880745A8:
	// b 0x880745d0
	goto loc_880745D0;
loc_880745AC:
	// lwz r11,8236(r31)
	ctx.current_instruction = 0x880745AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880745c8
	if (ctx.cr6.eq) goto loc_880745C8;
	// bl 0x88071708
	ctx.lr = 0x880745C0;
	sub_88071708(ctx, base);
loc_880745C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880745C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88073d70
	ctx.lr = 0x880745D0;
	sub_88073D70(ctx, base);
loc_880745D0:
	// lwz r11,1584(r31)
	ctx.current_instruction = 0x880745D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1584);
	// stw r30,1544(r31)
	ctx.current_instruction = 0x880745D4;
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88074634
	if (ctx.cr6.eq) goto loc_88074634;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880745E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880745f4
	if (ctx.cr6.eq) goto loc_880745F4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88074634
	if (!ctx.cr6.eq) goto loc_88074634;
loc_880745F4:
	// lwz r11,748(r31)
	ctx.current_instruction = 0x880745F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 748);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880745FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x88074608;
	sub_880E6960(ctx, base);
loc_88074608:
	// lwz r4,7868(r31)
	ctx.current_instruction = 0x88074608;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r3,7192(r31)
	ctx.current_instruction = 0x8807460C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// bl 0x880f9828
	ctx.lr = 0x88074614;
	sub_880F9828(ctx, base);
loc_88074614:
	// lwz r10,2176(r31)
	ctx.current_instruction = 0x88074614;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88074784
	if (ctx.cr6.eq) goto loc_88074784;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,2180(r31)
	ctx.current_instruction = 0x88074624;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2180);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88074628;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88074630;
	sub_880E6960(ctx, base);
loc_88074630:
	// b 0x88074784
	goto loc_88074784;
loc_88074634:
	// lwz r11,1604(r31)
	ctx.current_instruction = 0x88074634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88074668
	if (ctx.cr6.eq) goto loc_88074668;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88074640;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x88074658
	if (!ctx.cr6.eq) goto loc_88074658;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881084e8
	ctx.lr = 0x88074654;
	sub_881084E8(ctx, base);
loc_88074654:
	// b 0x88074668
	goto loc_88074668;
loc_88074658:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x88074668
	if (!ctx.cr6.eq) goto loc_88074668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881085d0
	ctx.lr = 0x88074668;
	sub_881085D0(ctx, base);
loc_88074668:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x88074668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880746a8
	if (ctx.cr6.eq) goto loc_880746A8;
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x88074674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88074678;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8807467C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x88074690
	if (!ctx.cr6.eq) goto loc_88074690;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x880746a0
	goto loc_880746A0;
loc_88074690:
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_880746A0:
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// stw r11,30188(r31)
	ctx.current_instruction = 0x880746A4;
	REX_STORE_U32(ctx.r31.u32 + 30188, ctx.r11.u32);
loc_880746A8:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880746A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880746f4
	if (ctx.cr6.eq) goto loc_880746F4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880746f4
	if (ctx.cr6.eq) goto loc_880746F4;
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x880746BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880746e8
	if (ctx.cr6.eq) goto loc_880746E8;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x880746C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880746e0
	if (ctx.cr6.eq) goto loc_880746E0;
	// bl 0x88061460
	ctx.lr = 0x880746DC;
	sub_88061460(ctx, base);
loc_880746DC:
	// b 0x88074720
	goto loc_88074720;
loc_880746E0:
	// bl 0x88061460
	ctx.lr = 0x880746E4;
	sub_88061460(ctx, base);
loc_880746E4:
	// b 0x88074720
	goto loc_88074720;
loc_880746E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88100390
	ctx.lr = 0x880746F0;
	sub_88100390(ctx, base);
loc_880746F0:
	// b 0x88074720
	goto loc_88074720;
loc_880746F4:
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x880746F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88074718
	if (ctx.cr6.eq) goto loc_88074718;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x88074704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88074718
	if (!ctx.cr6.eq) goto loc_88074718;
	// bl 0x88061460
	ctx.lr = 0x88074714;
	sub_88061460(ctx, base);
loc_88074714:
	// b 0x88074720
	goto loc_88074720;
loc_88074718:
	// lwz r4,3404(r31)
	ctx.current_instruction = 0x88074718;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3404);
	// bl 0x880c5778
	ctx.lr = 0x88074720;
	sub_880C5778(ctx, base);
loc_88074720:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x88074720;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88074738
	if (!ctx.cr6.eq) goto loc_88074738;
	// lwz r11,6736(r31)
	ctx.current_instruction = 0x8807472C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880747e8
	if (ctx.cr6.eq) goto loc_880747E8;
loc_88074738:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88074738;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x88074760
	if (ctx.cr6.eq) goto loc_88074760;
	// lwz r11,2176(r31)
	ctx.current_instruction = 0x88074744;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88074760
	if (ctx.cr6.eq) goto loc_88074760;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,2180(r31)
	ctx.current_instruction = 0x88074754;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2180);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88074758;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88074760;
	sub_880E6960(ctx, base);
loc_88074760:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x88074760;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88074778
	if (ctx.cr6.eq) goto loc_88074778;
	// lwz r11,28136(r31)
	ctx.current_instruction = 0x8807476C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// b 0x88074780
	goto loc_88074780;
loc_88074778:
	// lwz r11,2824(r31)
	ctx.current_instruction = 0x88074778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_88074780:
	// bne cr6,0x8807478c
	if (!ctx.cr6.eq) goto loc_8807478C;
loc_88074784:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88074784;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6b40
	ctx.lr = 0x8807478C;
	sub_880E6B40(ctx, base);
loc_8807478C:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807478C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880747d4
	if (ctx.cr6.eq) goto loc_880747D4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880747d4
	if (ctx.cr6.eq) goto loc_880747D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880747b0
	if (ctx.cr6.eq) goto loc_880747B0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880747e8
	if (!ctx.cr6.eq) goto loc_880747E8;
loc_880747B0:
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x880747B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880747e8
	if (ctx.cr6.eq) goto loc_880747E8;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x880747BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880747e8
	if (ctx.cr6.eq) goto loc_880747E8;
	// lwz r11,28136(r31)
	ctx.current_instruction = 0x880747C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880747e8
	if (!ctx.cr6.eq) goto loc_880747E8;
loc_880747D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f4020
	ctx.lr = 0x880747DC;
	sub_880F4020(ctx, base);
loc_880747DC:
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x880747E8;
	sub_880F40C0(ctx, base);
loc_880747E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88085588) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88085588;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88085588) {
			switch (rex_dispatch_address) {
				case 0x88085590:
				case 0x880855D8:
				case 0x8808561C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88085588;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88085590: goto loc_88085590;
		case 0x880855D8: goto loc_880855D8;
		case 0x8808561C: goto loc_8808561C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88085590;
	__savegprlr_28(ctx, base);
loc_88085590:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88085590;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,60(r3)
	ctx.current_instruction = 0x88085598;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,14
	ctx.r8.s64 = 14;
	// stb r11,0(r4)
	ctx.current_instruction = 0x880855A4;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// stb r11,1(r4)
	ctx.current_instruction = 0x880855A8;
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
	// addic r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stb r9,2(r4)
	ctx.current_instruction = 0x880855B0;
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r9.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r8,3(r4)
	ctx.current_instruction = 0x880855B8;
	REX_STORE_U8(ctx.r4.u32 + 3, ctx.r8.u8);
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// and r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 & ctx.r7.u64;
	// bl 0x8805dd90
	ctx.lr = 0x880855D8;
	sub_8805DD90(ctx, base);
loc_880855D8:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x880855D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r30)
	ctx.current_instruction = 0x880855DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880855E4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x880855fc
	if (!ctx.cr6.gt) goto loc_880855FC;
loc_880855F0:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880855FC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8808563c
	if (ctx.cr6.eq) goto loc_8808563C;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,30
	ctx.r6.s64 = 30;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88084e80
	ctx.lr = 0x8808561C;
	sub_88084E80(ctx, base);
loc_8808561C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880855f0
	if (!ctx.cr6.eq) goto loc_880855F0;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88085624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88085628;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r30)
	ctx.current_instruction = 0x8808562C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x880855f0
	if (ctx.cr6.gt) goto loc_880855F0;
loc_8808563C:
	// stw r11,0(r28)
	ctx.current_instruction = 0x8808563C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808E518) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8808E518;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8808E518) {
			switch (rex_dispatch_address) {
				case 0x8808E520:
				case 0x8808E64C:
				case 0x8808E664:
				case 0x8808E69C:
				case 0x8808E6B4:
				case 0x8808E714:
				case 0x8808E72C:
				case 0x8808E764:
				case 0x8808E77C:
				case 0x8808E7FC:
				case 0x8808E814:
				case 0x8808E84C:
				case 0x8808E864:
				case 0x8808E8C4:
				case 0x8808E8DC:
				case 0x8808E914:
				case 0x8808E92C:
				case 0x8808E994:
				case 0x8808E9AC:
				case 0x8808E9E4:
				case 0x8808E9FC:
				case 0x8808EA5C:
				case 0x8808EA74:
				case 0x8808EAAC:
				case 0x8808EAC4:
				case 0x8808EB98:
				case 0x8808EBB4:
				case 0x8808ECA8:
				case 0x8808ECC4:
				case 0x8808EDC4:
				case 0x8808EDE0:
				case 0x8808EED4:
				case 0x8808EEF0:
				case 0x8808EFF0:
				case 0x8808F00C:
				case 0x8808F0F0:
				case 0x8808F10C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8808E518;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8808E520: goto loc_8808E520;
		case 0x8808E64C: goto loc_8808E64C;
		case 0x8808E664: goto loc_8808E664;
		case 0x8808E69C: goto loc_8808E69C;
		case 0x8808E6B4: goto loc_8808E6B4;
		case 0x8808E714: goto loc_8808E714;
		case 0x8808E72C: goto loc_8808E72C;
		case 0x8808E764: goto loc_8808E764;
		case 0x8808E77C: goto loc_8808E77C;
		case 0x8808E7FC: goto loc_8808E7FC;
		case 0x8808E814: goto loc_8808E814;
		case 0x8808E84C: goto loc_8808E84C;
		case 0x8808E864: goto loc_8808E864;
		case 0x8808E8C4: goto loc_8808E8C4;
		case 0x8808E8DC: goto loc_8808E8DC;
		case 0x8808E914: goto loc_8808E914;
		case 0x8808E92C: goto loc_8808E92C;
		case 0x8808E994: goto loc_8808E994;
		case 0x8808E9AC: goto loc_8808E9AC;
		case 0x8808E9E4: goto loc_8808E9E4;
		case 0x8808E9FC: goto loc_8808E9FC;
		case 0x8808EA5C: goto loc_8808EA5C;
		case 0x8808EA74: goto loc_8808EA74;
		case 0x8808EAAC: goto loc_8808EAAC;
		case 0x8808EAC4: goto loc_8808EAC4;
		case 0x8808EB98: goto loc_8808EB98;
		case 0x8808EBB4: goto loc_8808EBB4;
		case 0x8808ECA8: goto loc_8808ECA8;
		case 0x8808ECC4: goto loc_8808ECC4;
		case 0x8808EDC4: goto loc_8808EDC4;
		case 0x8808EDE0: goto loc_8808EDE0;
		case 0x8808EED4: goto loc_8808EED4;
		case 0x8808EEF0: goto loc_8808EEF0;
		case 0x8808EFF0: goto loc_8808EFF0;
		case 0x8808F00C: goto loc_8808F00C;
		case 0x8808F0F0: goto loc_8808F0F0;
		case 0x8808F10C: goto loc_8808F10C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8808E520;
	__savegprlr_14(ctx, base);
loc_8808E520:
	// stwu r1,-384(r1)
	ctx.current_instruction = 0x8808E520;
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,596(r1)
	ctx.current_instruction = 0x8808E524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// lwz r10,484(r1)
	ctx.current_instruction = 0x8808E52C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,436(r1)
	ctx.current_instruction = 0x8808E538;
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r7.u32);
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// stw r17,104(r1)
	ctx.current_instruction = 0x8808E540;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// stw r17,96(r1)
	ctx.current_instruction = 0x8808E548;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// lwz r9,12(r11)
	ctx.current_instruction = 0x8808E54C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r27,0(r11)
	ctx.current_instruction = 0x8808E554;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,100(r1)
	ctx.current_instruction = 0x8808E560;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// beq cr6,0x8808e574
	if (ctx.cr6.eq) goto loc_8808E574;
	// li r15,-3
	ctx.r15.s64 = -3;
	// li r10,-2
	ctx.r10.s64 = -2;
	// b 0x8808e57c
	goto loc_8808E57C;
loc_8808E574:
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_8808E57C:
	// lwz r11,500(r1)
	ctx.current_instruction = 0x8808E57C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808e598
	if (ctx.cr6.eq) goto loc_8808E598;
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r16,-2
	ctx.r16.s64 = -2;
	// stw r11,108(r1)
	ctx.current_instruction = 0x8808E590;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x8808e5a0
	goto loc_8808E5A0;
loc_8808E598:
	// stw r17,108(r1)
	ctx.current_instruction = 0x8808E598;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
loc_8808E5A0:
	// lwz r9,492(r1)
	ctx.current_instruction = 0x8808E5A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r11,3
	ctx.r11.s64 = 3;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8808e5bc
	if (ctx.cr6.eq) goto loc_8808E5BC;
	// stw r11,116(r1)
	ctx.current_instruction = 0x8808E5B0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r23,2
	ctx.r23.s64 = 2;
	// b 0x8808e5c4
	goto loc_8808E5C4;
loc_8808E5BC:
	// stw r17,116(r1)
	ctx.current_instruction = 0x8808E5BC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
loc_8808E5C4:
	// lwz r9,508(r1)
	ctx.current_instruction = 0x8808E5C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8808e5dc
	if (ctx.cr6.eq) goto loc_8808E5DC;
	// stw r11,112(r1)
	ctx.current_instruction = 0x8808E5D0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r17,2
	ctx.r17.s64 = 2;
	// b 0x8808e5e0
	goto loc_8808E5E0;
loc_8808E5DC:
	// stw r17,112(r1)
	ctx.current_instruction = 0x8808E5DC;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
loc_8808E5E0:
	// lwz r11,580(r1)
	ctx.current_instruction = 0x8808E5E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r22,572(r1)
	ctx.current_instruction = 0x8808E5E8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r25,564(r1)
	ctx.current_instruction = 0x8808E5EC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r30,524(r1)
	ctx.current_instruction = 0x8808E5F0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// stw r11,176(r1)
	ctx.current_instruction = 0x8808E5F4;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bge cr6,0x8808e7a8
	if (!ctx.cr6.lt) goto loc_8808E7A8;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r10,r22
	ctx.r26.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8808E608:
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bge cr6,0x8808e6d0
	if (!ctx.cr6.lt) goto loc_8808E6D0;
loc_8808E614:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808E614;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808e668
	if (ctx.cr6.eq) goto loc_8808E668;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808E62C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r8,r28,r25
	ctx.r8.u64 = ctx.r28.u64 + ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808E64C;
	sub_8810B7F8(ctx, base);
loc_8808E64C:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8808E664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E664:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8808E668:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808E668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808e6b8
	if (ctx.cr6.eq) goto loc_8808E6B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808E67C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r8,r28,r25
	ctx.r8.u64 = ctx.r28.u64 + ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808E69C;
	sub_8810B7F8(ctx, base);
loc_8808E69C:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x8808E6B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E6B4:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8808E6B8:
	// add r11,r24,r28
	ctx.r11.u64 = ctx.r24.u64 + ctx.r28.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r28,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r28.s64 = ctx.r28.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwx r29,r9,r10
	ctx.current_instruction = 0x8808E6C8;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// blt 0x8808e614
	if (ctx.cr0.lt) goto loc_8808E614;
loc_8808E6D0:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// blt cr6,0x8808e79c
	if (ctx.cr6.lt) goto loc_8808E79C;
loc_8808E6DC:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808E6DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808e730
	if (ctx.cr6.eq) goto loc_8808E730;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808E6F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r8,r28,r25
	ctx.r8.u64 = ctx.r28.u64 + ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808E714;
	sub_8810B7F8(ctx, base);
loc_8808E714:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8808E72C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E72C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8808E730:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808E730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808e780
	if (ctx.cr6.eq) goto loc_8808E780;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808E744;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r8,r28,r25
	ctx.r8.u64 = ctx.r28.u64 + ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808E764;
	sub_8810B7F8(ctx, base);
loc_8808E764:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x8808E77C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E77C:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8808E780:
	// add r11,r24,r28
	ctx.r11.u64 = ctx.r24.u64 + ctx.r28.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r17
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r17.s32, ctx.xer);
	// stwx r29,r9,r10
	ctx.current_instruction = 0x8808E794;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// ble cr6,0x8808e6dc
	if (!ctx.cr6.gt) goto loc_8808E6DC;
loc_8808E79C:
	// addic. r24,r24,5
	ctx.xer.ca = ctx.r24.u32 > 4294967290;
	ctx.r24.s64 = ctx.r24.s64 + 5;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// blt 0x8808e608
	if (ctx.cr0.lt) goto loc_8808E608;
loc_8808E7A8:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bge cr6,0x8808e878
	if (!ctx.cr6.lt) goto loc_8808E878;
	// rlwinm r10,r16,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// add r28,r16,r25
	ctx.r28.u64 = ctx.r16.u64 + ctx.r25.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r26,r16
	ctx.r26.s64 = static_cast<int64_t>(-ctx.r16.u64);
loc_8808E7C4:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808E7C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808e818
	if (ctx.cr6.eq) goto loc_8808E818;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808E7DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808E7FC;
	sub_8810B7F8(ctx, base);
loc_8808E7FC:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8808E814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E814:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8808E818:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808E818;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808e868
	if (ctx.cr6.eq) goto loc_8808E868;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808E82C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808E84C;
	sub_8810B7F8(ctx, base);
loc_8808E84C:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x8808E864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E864:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8808E868:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwu r29,4(r24)
	ctx.current_instruction = 0x8808E86C;
	ea = 4 + ctx.r24.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r24.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x8808e7c4
	if (!ctx.cr0.eq) goto loc_8808E7C4;
loc_8808E878:
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// blt cr6,0x8808e940
	if (ctx.cr6.lt) goto loc_8808E940;
	// addi r28,r25,1
	ctx.r28.s64 = ctx.r25.s64 + 1;
	// addi r24,r1,176
	ctx.r24.s64 = ctx.r1.s64 + 176;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
loc_8808E88C:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808E88C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808e8e0
	if (ctx.cr6.eq) goto loc_8808E8E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808E8A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808E8C4;
	sub_8810B7F8(ctx, base);
loc_8808E8C4:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8808E8DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E8DC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8808E8E0:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808E8E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808e930
	if (ctx.cr6.eq) goto loc_8808E930;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808E8F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808E914;
	sub_8810B7F8(ctx, base);
loc_8808E914:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x8808E92C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E92C:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8808E930:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwu r29,4(r24)
	ctx.current_instruction = 0x8808E934;
	ea = 4 + ctx.r24.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r24.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x8808e88c
	if (!ctx.cr0.eq) goto loc_8808E88C;
loc_8808E940:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// blt cr6,0x8808eaf4
	if (ctx.cr6.lt) goto loc_8808EAF4;
	// addi r26,r22,1
	ctx.r26.s64 = ctx.r22.s64 + 1;
	// li r24,5
	ctx.r24.s64 = 5;
loc_8808E950:
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bge cr6,0x8808ea18
	if (!ctx.cr6.lt) goto loc_8808EA18;
loc_8808E95C:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808E95C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808e9b0
	if (ctx.cr6.eq) goto loc_8808E9B0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808E974;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r8,r28,r25
	ctx.r8.u64 = ctx.r28.u64 + ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808E994;
	sub_8810B7F8(ctx, base);
loc_8808E994:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8808E9AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E9AC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8808E9B0:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808E9B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808ea00
	if (ctx.cr6.eq) goto loc_8808EA00;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808E9C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r8,r28,r25
	ctx.r8.u64 = ctx.r28.u64 + ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808E9E4;
	sub_8810B7F8(ctx, base);
loc_8808E9E4:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x8808E9FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E9FC:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8808EA00:
	// add r11,r24,r28
	ctx.r11.u64 = ctx.r24.u64 + ctx.r28.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r28,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r28.s64 = ctx.r28.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwx r29,r9,r10
	ctx.current_instruction = 0x8808EA10;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// blt 0x8808e95c
	if (ctx.cr0.lt) goto loc_8808E95C;
loc_8808EA18:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// blt cr6,0x8808eae4
	if (ctx.cr6.lt) goto loc_8808EAE4;
loc_8808EA24:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808EA24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808ea78
	if (ctx.cr6.eq) goto loc_8808EA78;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808EA3C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r8,r28,r25
	ctx.r8.u64 = ctx.r28.u64 + ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808EA5C;
	sub_8810B7F8(ctx, base);
loc_8808EA5C:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8808EA74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808EA74:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8808EA78:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808EA78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808eac8
	if (ctx.cr6.eq) goto loc_8808EAC8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808EA8C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r8,r28,r25
	ctx.r8.u64 = ctx.r28.u64 + ctx.r25.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808EAAC;
	sub_8810B7F8(ctx, base);
loc_8808EAAC:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x8808EAC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808EAC4:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8808EAC8:
	// add r11,r24,r28
	ctx.r11.u64 = ctx.r24.u64 + ctx.r28.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r17
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r17.s32, ctx.xer);
	// stwx r29,r9,r10
	ctx.current_instruction = 0x8808EADC;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// ble cr6,0x8808ea24
	if (!ctx.cr6.gt) goto loc_8808EA24;
loc_8808EAE4:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,5
	ctx.r24.s64 = ctx.r24.s64 + 5;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bne 0x8808e950
	if (!ctx.cr0.eq) goto loc_8808E950;
loc_8808EAF4:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r21,588(r1)
	ctx.current_instruction = 0x8808EAF8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r19,556(r1)
	ctx.current_instruction = 0x8808EAFC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// lwz r23,548(r1)
	ctx.current_instruction = 0x8808EB04;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// li r22,16
	ctx.r22.s64 = 16;
	// lwz r20,476(r1)
	ctx.current_instruction = 0x8808EB0C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r28,r11,6848
	ctx.r28.s64 = ctx.r11.s64 + 6848;
	// bge cr6,0x8808ed54
	if (!ctx.cr6.lt) goto loc_8808ED54;
	// rlwinm r11,r15,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r25,r15,r11
	ctx.r25.u64 = ctx.r11.u64 - ctx.r15.u64;
loc_8808EB24:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x8808EB24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r10,436(r1)
	ctx.current_instruction = 0x8808EB28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r29,108(r1)
	ctx.current_instruction = 0x8808EB2C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x8808ec34
	if (!ctx.cr6.lt) goto loc_8808EC34;
	// add r11,r27,r19
	ctx.r11.u64 = ctx.r27.u64 + ctx.r19.u64;
	// lwz r18,100(r1)
	ctx.current_instruction = 0x8808EB44;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r24,r10,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8808EB54:
	// lwz r6,2488(r31)
	ctx.current_instruction = 0x8808EB54;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// add r5,r25,r29
	ctx.r5.u64 = ctx.r25.u64 + ctx.r29.u64;
	// addi r11,r28,1712
	ctx.r11.s64 = ctx.r28.s64 + 1712;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808EB60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// rlwinm r17,r5,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808EB68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808EB70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808EB78;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r17,r17,r11
	ctx.current_instruction = 0x8808EB90;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8808EB98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808EB98:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x8808EBB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808EBB4:
	// add r10,r29,r23
	ctx.r10.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r9,r17,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lwzx r5,r9,r7
	ctx.current_instruction = 0x8808EBCC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bgt cr6,0x8808ec0c
	if (ctx.cr6.gt) goto loc_8808EC0C;
	// cmpwi cr6,r24,158
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 158, ctx.xer);
	// bgt cr6,0x8808ec0c
	if (ctx.cr6.gt) goto loc_8808EC0C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r28
	ctx.current_instruction = 0x8808EBEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r7,r10,r28
	ctx.current_instruction = 0x8808EBF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r21
	ctx.current_instruction = 0x8808EBFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r10,r5,r21
	ctx.current_instruction = 0x8808EC00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8808ec14
	goto loc_8808EC14;
loc_8808EC0C:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x8808EC0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808EC14:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x8808ec2c
	if (!ctx.cr6.lt) goto loc_8808EC2C;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// stw r29,104(r1)
	ctx.current_instruction = 0x8808EC24;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r27,96(r1)
	ctx.current_instruction = 0x8808EC28;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
loc_8808EC2C:
	// addic. r29,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r29.s64 = ctx.r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8808eb54
	if (ctx.cr0.lt) goto loc_8808EB54;
loc_8808EC34:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x8808EC34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r17,112(r1)
	ctx.current_instruction = 0x8808EC3C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,436(r1)
	ctx.current_instruction = 0x8808EC40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// subf r26,r11,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blt cr6,0x8808ed48
	if (ctx.cr6.lt) goto loc_8808ED48;
	// add r11,r27,r19
	ctx.r11.u64 = ctx.r27.u64 + ctx.r19.u64;
	// lwz r18,100(r1)
	ctx.current_instruction = 0x8808EC54;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r24,r10,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8808EC64:
	// lwz r6,2488(r31)
	ctx.current_instruction = 0x8808EC64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// add r5,r25,r29
	ctx.r5.u64 = ctx.r25.u64 + ctx.r29.u64;
	// addi r11,r28,1712
	ctx.r11.s64 = ctx.r28.s64 + 1712;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808EC70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// rlwinm r16,r5,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808EC78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808EC80;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808EC88;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r16,r16,r11
	ctx.current_instruction = 0x8808ECA0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8808ECA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808ECA8:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x8808ECC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808ECC4:
	// add r10,r29,r23
	ctx.r10.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lwzx r5,r9,r7
	ctx.current_instruction = 0x8808ECDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bgt cr6,0x8808ed1c
	if (ctx.cr6.gt) goto loc_8808ED1C;
	// cmpwi cr6,r24,158
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 158, ctx.xer);
	// bgt cr6,0x8808ed1c
	if (ctx.cr6.gt) goto loc_8808ED1C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r28
	ctx.current_instruction = 0x8808ECFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r7,r10,r28
	ctx.current_instruction = 0x8808ED00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r21
	ctx.current_instruction = 0x8808ED0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r10,r5,r21
	ctx.current_instruction = 0x8808ED10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8808ed24
	goto loc_8808ED24;
loc_8808ED1C:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x8808ED1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808ED24:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x8808ed3c
	if (!ctx.cr6.lt) goto loc_8808ED3C;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// stw r29,104(r1)
	ctx.current_instruction = 0x8808ED34;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r27,96(r1)
	ctx.current_instruction = 0x8808ED38;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
loc_8808ED3C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x8808ec64
	if (!ctx.cr6.gt) goto loc_8808EC64;
loc_8808ED48:
	// addic. r25,r25,7
	ctx.xer.ca = ctx.r25.u32 > 4294967288;
	ctx.r25.s64 = ctx.r25.s64 + 7;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// blt 0x8808eb24
	if (ctx.cr0.lt) goto loc_8808EB24;
loc_8808ED54:
	// lwz r29,108(r1)
	ctx.current_instruction = 0x8808ED54;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,436(r1)
	ctx.current_instruction = 0x8808ED58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x8808ee70
	if (!ctx.cr6.lt) goto loc_8808EE70;
	// srawi r9,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r19.s32 >> 31;
	// lwz r25,100(r1)
	ctx.current_instruction = 0x8808ED6C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// addi r11,r28,1712
	ctx.r11.s64 = ctx.r28.s64 + 1712;
	// xor r8,r19,r9
	ctx.r8.u64 = ctx.r19.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subf r26,r9,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r18,0
	ctx.r18.s64 = 0;
loc_8808ED90:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808ED90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r17,0(r27)
	ctx.current_instruction = 0x8808ED9C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808EDA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808EDAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808EDB4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808EDB8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808EDC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808EDC4:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x8808EDE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808EDE0:
	// add r10,r29,r23
	ctx.r10.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r9,r17,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lwzx r5,r9,r7
	ctx.current_instruction = 0x8808EDF8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bgt cr6,0x8808ee38
	if (ctx.cr6.gt) goto loc_8808EE38;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x8808ee38
	if (ctx.cr6.gt) goto loc_8808EE38;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r28
	ctx.current_instruction = 0x8808EE18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r7,r10,r28
	ctx.current_instruction = 0x8808EE1C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r21
	ctx.current_instruction = 0x8808EE28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r11,r5,r21
	ctx.current_instruction = 0x8808EE2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808ee40
	goto loc_8808EE40;
loc_8808EE38:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x8808EE38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808EE40:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x8808ee58
	if (!ctx.cr6.lt) goto loc_8808EE58;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// stw r29,104(r1)
	ctx.current_instruction = 0x8808EE50;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r18,96(r1)
	ctx.current_instruction = 0x8808EE54;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
loc_8808EE58:
	// addi r11,r28,1712
	ctx.r11.s64 = ctx.r28.s64 + 1712;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8808ed90
	if (ctx.cr6.lt) goto loc_8808ED90;
loc_8808EE70:
	// lwz r15,112(r1)
	ctx.current_instruction = 0x8808EE70;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r18,100(r1)
	ctx.current_instruction = 0x8808EE78;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r16,104(r1)
	ctx.current_instruction = 0x8808EE7C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// lwz r17,436(r1)
	ctx.current_instruction = 0x8808EE84;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// blt cr6,0x8808ef7c
	if (ctx.cr6.lt) goto loc_8808EF7C;
	// srawi r10,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r19.s32 >> 31;
	// addi r11,r28,1712
	ctx.r11.s64 = ctx.r28.s64 + 1712;
	// xor r9,r19,r10
	ctx.r9.u64 = ctx.r19.u64 ^ ctx.r10.u64;
	// addi r27,r11,100
	ctx.r27.s64 = ctx.r11.s64 + 100;
	// subf r26,r10,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8808EEA0:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808EEA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r25,0(r27)
	ctx.current_instruction = 0x8808EEAC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808EEB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808EEBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808EEC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808EEC8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808EED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808EED4:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x8808EEF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808EEF0:
	// add r10,r29,r23
	ctx.r10.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lwzx r5,r9,r7
	ctx.current_instruction = 0x8808EF08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bgt cr6,0x8808ef48
	if (ctx.cr6.gt) goto loc_8808EF48;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x8808ef48
	if (ctx.cr6.gt) goto loc_8808EF48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r28
	ctx.current_instruction = 0x8808EF28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r7,r10,r28
	ctx.current_instruction = 0x8808EF2C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r21
	ctx.current_instruction = 0x8808EF38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r11,r5,r21
	ctx.current_instruction = 0x8808EF3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808ef50
	goto loc_8808EF50;
loc_8808EF48:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x8808EF48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808EF50:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x8808ef6c
	if (!ctx.cr6.lt) goto loc_8808EF6C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
	// stw r10,96(r1)
	ctx.current_instruction = 0x8808EF68;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_8808EF6C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r29,r15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x8808eea0
	if (!ctx.cr6.gt) goto loc_8808EEA0;
loc_8808EF7C:
	// lwz r11,116(r1)
	ctx.current_instruction = 0x8808EF7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8808f1a8
	if (ctx.cr6.lt) goto loc_8808F1A8;
	// li r26,7
	ctx.r26.s64 = 7;
loc_8808EF90:
	// lwz r29,108(r1)
	ctx.current_instruction = 0x8808EF90;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8808f090
	if (!ctx.cr6.lt) goto loc_8808F090;
	// add r11,r27,r19
	ctx.r11.u64 = ctx.r27.u64 + ctx.r19.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r25,r10,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8808EFAC:
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808EFAC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// add r9,r26,r29
	ctx.r9.u64 = ctx.r26.u64 + ctx.r29.u64;
	// lwz r5,2488(r31)
	ctx.current_instruction = 0x8808EFB4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// addi r11,r28,1712
	ctx.r11.s64 = ctx.r28.s64 + 1712;
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808EFC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808EFC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808EFD0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r15,r15,r11
	ctx.current_instruction = 0x8808EFE8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8808EFF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808EFF0:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x8808F00C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808F00C:
	// add r10,r29,r23
	ctx.r10.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r9,r15,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lwzx r5,r9,r7
	ctx.current_instruction = 0x8808F024;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bgt cr6,0x8808f064
	if (ctx.cr6.gt) goto loc_8808F064;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x8808f064
	if (ctx.cr6.gt) goto loc_8808F064;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r28
	ctx.current_instruction = 0x8808F044;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r7,r10,r28
	ctx.current_instruction = 0x8808F048;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r21
	ctx.current_instruction = 0x8808F054;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r11,r5,r21
	ctx.current_instruction = 0x8808F058;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808f06c
	goto loc_8808F06C;
loc_8808F064:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x8808F064;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808F06C:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x8808f084
	if (!ctx.cr6.lt) goto loc_8808F084;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// stw r27,96(r1)
	ctx.current_instruction = 0x8808F07C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_8808F084:
	// addic. r29,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r29.s64 = ctx.r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8808efac
	if (ctx.cr0.lt) goto loc_8808EFAC;
	// lwz r15,112(r1)
	ctx.current_instruction = 0x8808F08C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8808F090:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// blt cr6,0x8808f194
	if (ctx.cr6.lt) goto loc_8808F194;
	// add r11,r27,r19
	ctx.r11.u64 = ctx.r27.u64 + ctx.r19.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r25,r10,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8808F0AC:
	// lwz r6,2488(r31)
	ctx.current_instruction = 0x8808F0AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// add r5,r26,r29
	ctx.r5.u64 = ctx.r26.u64 + ctx.r29.u64;
	// addi r11,r28,1712
	ctx.r11.s64 = ctx.r28.s64 + 1712;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808F0B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// rlwinm r15,r5,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808F0C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808F0C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r22,84(r1)
	ctx.current_instruction = 0x8808F0D0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwzx r15,r15,r11
	ctx.current_instruction = 0x8808F0E8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8808F0F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808F0F0:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bctrl 
	ctx.lr = 0x8808F10C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808F10C:
	// add r10,r29,r23
	ctx.r10.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r9,r15,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lwzx r5,r9,r7
	ctx.current_instruction = 0x8808F124;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// bgt cr6,0x8808f164
	if (ctx.cr6.gt) goto loc_8808F164;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x8808f164
	if (ctx.cr6.gt) goto loc_8808F164;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r28
	ctx.current_instruction = 0x8808F144;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r7,r10,r28
	ctx.current_instruction = 0x8808F148;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r21
	ctx.current_instruction = 0x8808F154;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// lwzx r11,r5,r21
	ctx.current_instruction = 0x8808F158;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808f16c
	goto loc_8808F16C;
loc_8808F164:
	// lwz r11,20(r21)
	ctx.current_instruction = 0x8808F164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808F16C:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x8808f184
	if (!ctx.cr6.lt) goto loc_8808F184;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// stw r27,96(r1)
	ctx.current_instruction = 0x8808F17C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_8808F184:
	// lwz r15,112(r1)
	ctx.current_instruction = 0x8808F184;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x8808f0ac
	if (!ctx.cr6.gt) goto loc_8808F0AC;
loc_8808F194:
	// lwz r11,116(r1)
	ctx.current_instruction = 0x8808F194;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,7
	ctx.r26.s64 = ctx.r26.s64 + 7;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8808ef90
	if (!ctx.cr6.gt) goto loc_8808EF90;
loc_8808F1A8:
	// lwz r11,604(r1)
	ctx.current_instruction = 0x8808F1A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r10,612(r1)
	ctx.current_instruction = 0x8808F1AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r9,96(r1)
	ctx.current_instruction = 0x8808F1B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,620(r1)
	ctx.current_instruction = 0x8808F1B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// stw r16,0(r11)
	ctx.current_instruction = 0x8808F1B8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// stw r9,0(r10)
	ctx.current_instruction = 0x8808F1BC;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r20,0(r8)
	ctx.current_instruction = 0x8808F1C0;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r20.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C18F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C18F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C18F8) {
			switch (rex_dispatch_address) {
				case 0x880C1900:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C18F8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C1900: goto loc_880C1900;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880C1900;
	__savegprlr_27(ctx, base);
loc_880C1900:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x880c1a8c
	if (ctx.cr6.gt) goto loc_880C1A8C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880c198c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880C198C;
	// bdzf 4*cr6+eq,0x880c19c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880C19C8;
	// bdzf 4*cr6+eq,0x880c19f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880C19F0;
	// bdzf 4*cr6+eq,0x880c1a00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880C1A00;
	// bne cr6,0x880c1a38
	if (!ctx.cr6.eq) goto loc_880C1A38;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x880C192C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r4,-1280
	ctx.r29.s64 = ctx.r4.s64 + -1280;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c1940
	if (!ctx.cr6.eq) goto loc_880C1940;
	// lwz r29,17536(r3)
	ctx.current_instruction = 0x880C193C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 17536);
loc_880C1940:
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880C1940;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c1960
	if (ctx.cr6.eq) goto loc_880C1960;
	// lwz r11,19452(r3)
	ctx.current_instruction = 0x880C194C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19452);
	// subfic r7,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r7.u64 = static_cast<uint64_t>(256) - ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x880c1964
	goto loc_880C1964;
loc_880C1960:
	// lwz r30,17536(r3)
	ctx.current_instruction = 0x880C1960;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 17536);
loc_880C1964:
	// lwz r11,108(r1)
	ctx.current_instruction = 0x880C1964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c1984
	if (ctx.cr6.eq) goto loc_880C1984;
	// lwz r11,19452(r3)
	ctx.current_instruction = 0x880C1970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19452);
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// b 0x880c1a98
	goto loc_880C1A98;
loc_880C1984:
	// lwz r11,17536(r3)
	ctx.current_instruction = 0x880C1984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 17536);
	// b 0x880c1a98
	goto loc_880C1A98;
loc_880C198C:
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880C198C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r4,-256
	ctx.r29.s64 = ctx.r4.s64 + -256;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c19bc
	if (ctx.cr6.eq) goto loc_880C19BC;
	// lwz r11,19452(r3)
	ctx.current_instruction = 0x880C199C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19452);
	// subfic r7,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r7.u64 = static_cast<uint64_t>(256) - ctx.r11.u64;
	// subfic r11,r11,128
	ctx.xer.ca = ctx.r11.u32 <= 128;
	ctx.r11.u64 = static_cast<uint64_t>(128) - ctx.r11.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r7,r4
	ctx.r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x880c1a98
	goto loc_880C1A98;
loc_880C19BC:
	// lwz r30,17536(r3)
	ctx.current_instruction = 0x880C19BC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 17536);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x880c1a98
	goto loc_880C1A98;
loc_880C19C8:
	// lwz r11,92(r1)
	ctx.current_instruction = 0x880C19C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r4,-1280
	ctx.r29.s64 = ctx.r4.s64 + -1280;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c19dc
	if (!ctx.cr6.eq) goto loc_880C19DC;
	// lwz r29,17536(r3)
	ctx.current_instruction = 0x880C19D8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 17536);
loc_880C19DC:
	// addi r30,r4,-512
	ctx.r30.s64 = ctx.r4.s64 + -512;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c1984
	if (ctx.cr6.eq) goto loc_880C1984;
	// addi r11,r4,-1792
	ctx.r11.s64 = ctx.r4.s64 + -1792;
	// b 0x880c1a98
	goto loc_880C1A98;
loc_880C19F0:
	// addi r29,r4,-256
	ctx.r29.s64 = ctx.r4.s64 + -256;
	// addi r30,r4,-512
	ctx.r30.s64 = ctx.r4.s64 + -512;
	// addi r11,r4,-768
	ctx.r11.s64 = ctx.r4.s64 + -768;
	// b 0x880c1a98
	goto loc_880C1A98;
loc_880C1A00:
	// lwz r11,92(r1)
	ctx.current_instruction = 0x880C1A00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r4,-1536
	ctx.r29.s64 = ctx.r4.s64 + -1536;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c1a14
	if (!ctx.cr6.eq) goto loc_880C1A14;
	// lwz r29,17540(r3)
	ctx.current_instruction = 0x880C1A10;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 17540);
loc_880C1A14:
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880C1A14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c1a68
	if (ctx.cr6.eq) goto loc_880C1A68;
	// lwz r11,19452(r3)
	ctx.current_instruction = 0x880C1A20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19452);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r7,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r7.u64;
	// b 0x880c1a6c
	goto loc_880C1A6C;
loc_880C1A30:
	// lwz r11,17540(r3)
	ctx.current_instruction = 0x880C1A30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 17540);
	// b 0x880c1a98
	goto loc_880C1A98;
loc_880C1A38:
	// lwz r11,92(r1)
	ctx.current_instruction = 0x880C1A38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r4,-1536
	ctx.r29.s64 = ctx.r4.s64 + -1536;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c1a4c
	if (!ctx.cr6.eq) goto loc_880C1A4C;
	// lwz r29,17540(r3)
	ctx.current_instruction = 0x880C1A48;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 17540);
loc_880C1A4C:
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880C1A4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c1a68
	if (ctx.cr6.eq) goto loc_880C1A68;
	// lwz r11,19452(r3)
	ctx.current_instruction = 0x880C1A58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19452);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r7,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r7.u64;
	// b 0x880c1a6c
	goto loc_880C1A6C;
loc_880C1A68:
	// lwz r30,17540(r3)
	ctx.current_instruction = 0x880C1A68;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 17540);
loc_880C1A6C:
	// lwz r11,108(r1)
	ctx.current_instruction = 0x880C1A6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c1a30
	if (ctx.cr6.eq) goto loc_880C1A30;
	// lwz r11,19452(r3)
	ctx.current_instruction = 0x880C1A78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 19452);
	// addi r11,r11,768
	ctx.r11.s64 = ctx.r11.s64 + 768;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// b 0x880c1a98
	goto loc_880C1A98;
loc_880C1A8C:
	// lwz r29,-64(r1)
	ctx.current_instruction = 0x880C1A8C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r30,-64(r1)
	ctx.current_instruction = 0x880C1A90;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r11,-64(r1)
	ctx.current_instruction = 0x880C1A94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
loc_880C1A98:
	// lhz r11,0(r11)
	ctx.current_instruction = 0x880C1A98;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,0(r30)
	ctx.current_instruction = 0x880C1A9C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r3,0(r29)
	ctx.current_instruction = 0x880C1AA0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r3,r3,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 31;
	// srawi r31,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 31;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// xor r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r31.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r31,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.current_instruction = 0x880C1AD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// addi r11,r6,7
	ctx.r11.s64 = ctx.r6.s64 + 7;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// bgt cr6,0x880c1bcc
	if (ctx.cr6.gt) goto loc_880C1BCC;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,7
	ctx.r11.s64 = 7;
	// stwx r31,r30,r28
	ctx.current_instruction = 0x880C1AF4;
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r31.u32);
	// lhz r28,0(r29)
	ctx.current_instruction = 0x880C1AF8;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r30,0(r4)
	ctx.current_instruction = 0x880C1B00;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// subf r30,r28,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r28.u64;
	// sth r30,0(r5)
	ctx.current_instruction = 0x880C1B08;
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r30.u16);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// stwx r31,r6,r10
	ctx.current_instruction = 0x880C1B10;
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u32);
	// subf r29,r4,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r4.u64;
	// stwx r31,r6,r3
	ctx.current_instruction = 0x880C1B18;
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r31.u32);
loc_880C1B1C:
	// lhz r31,0(r11)
	ctx.current_instruction = 0x880C1B1C;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r28,r7,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// lhzx r4,r29,r11
	ctx.current_instruction = 0x880C1B24;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r4,r4,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r4.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// sth r4,2(r5)
	ctx.current_instruction = 0x880C1B38;
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r4.u16);
	// lwzx r4,r6,r10
	ctx.current_instruction = 0x880C1B3C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addic r30,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r30.s64 = ctx.r31.s64 + -1;
	// subfe r31,r30,r31
	temp.u8 = (~ctx.r30.u32 + ctx.r31.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r30.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// stwx r4,r6,r10
	ctx.current_instruction = 0x880C1B4C;
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r30,0(r9)
	ctx.current_instruction = 0x880C1B50;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lhzu r4,2(r5)
	ctx.current_instruction = 0x880C1B54;
	ea = 2 + ctx.r5.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// srawi r31,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 31;
	// xor r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r31.u64;
	// subf r4,r31,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r31.u64;
	// srawi r31,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 1;
	// mullw r31,r31,r28
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r28.s32);
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// stw r4,0(r9)
	ctx.current_instruction = 0x880C1B78;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwzx r31,r6,r3
	ctx.current_instruction = 0x880C1B7C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lhz r4,0(r11)
	ctx.current_instruction = 0x880C1B80;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addic r30,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r30.s64 = ctx.r4.s64 + -1;
	// subfe r4,r30,r4
	temp.u8 = (~ctx.r30.u32 + ctx.r4.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r30.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// stwx r4,r6,r3
	ctx.current_instruction = 0x880C1B90;
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r31,0(r8)
	ctx.current_instruction = 0x880C1B94;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r4,0(r11)
	ctx.current_instruction = 0x880C1B98;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// srawi r30,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r4.s32 >> 31;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// xor r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// subf r4,r30,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r30.u64;
	// srawi r30,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r4.s32 >> 1;
	// mullw r30,r30,r28
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// stw r4,0(r8)
	ctx.current_instruction = 0x880C1BC0;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// bdnz 0x880c1b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C1B1C;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880C1BCC:
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r5,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r5.u64;
	// li r11,7
	ctx.r11.s64 = 7;
	// stwx r7,r27,r28
	ctx.current_instruction = 0x880C1BD8;
	REX_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r7.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// lhz r28,0(r4)
	ctx.current_instruction = 0x880C1BE4;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lhz r30,0(r30)
	ctx.current_instruction = 0x880C1BEC;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// subf r30,r30,r28
	ctx.r30.u64 = ctx.r28.u64 - ctx.r30.u64;
	// sth r30,0(r5)
	ctx.current_instruction = 0x880C1BF4;
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r30.u16);
	// stwx r31,r6,r10
	ctx.current_instruction = 0x880C1BF8;
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u32);
	// stwx r31,r6,r3
	ctx.current_instruction = 0x880C1BFC;
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r31.u32);
loc_880C1C00:
	// add r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r31,0(r11)
	ctx.current_instruction = 0x880C1C04;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r28,r7,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lhzx r5,r5,r29
	ctx.current_instruction = 0x880C1C10;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r29.u32);
	// subf r5,r5,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r5.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// sthx r5,r4,r11
	ctx.current_instruction = 0x880C1C1C;
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r5.u16);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addic r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwzx r31,r6,r10
	ctx.current_instruction = 0x880C1C28;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// subfe r5,r5,r30
	temp.u8 = (~ctx.r5.u32 + ctx.r30.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stwx r5,r6,r10
	ctx.current_instruction = 0x880C1C34;
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r5.u32);
	// lhzx r5,r4,r11
	ctx.current_instruction = 0x880C1C38;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// srawi r31,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r5.s32 >> 31;
	// lwz r30,0(r9)
	ctx.current_instruction = 0x880C1C44;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// xor r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r31.u64;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r31.u64;
	// srawi r31,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r5.s32 >> 1;
	// mullw r31,r31,r28
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r28.s32);
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// stw r5,0(r9)
	ctx.current_instruction = 0x880C1C60;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x880C1C64;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addic r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// subfe r5,r31,r5
	temp.u8 = (~ctx.r31.u32 + ctx.r5.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r31.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzx r31,r6,r3
	ctx.current_instruction = 0x880C1C70;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stwx r5,r6,r3
	ctx.current_instruction = 0x880C1C78;
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r31,0(r8)
	ctx.current_instruction = 0x880C1C7C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x880C1C80;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// srawi r30,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 31;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// xor r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r30.u64;
	// subf r5,r30,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r30.u64;
	// srawi r30,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 1;
	// mullw r30,r30,r28
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stw r5,0(r8)
	ctx.current_instruction = 0x880C1CA8;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// bdnz 0x880c1c00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C1C00;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C90F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C90F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C90F0) {
			switch (rex_dispatch_address) {
				case 0x880C90F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C90F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x880C90F8: goto loc_880C90F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880C90F8;
	__savegprlr_14(ctx, base);
loc_880C90F8:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,13680
	ctx.r11.s64 = ctx.r11.s64 + 13680;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// stw r8,-168(r1)
	ctx.current_instruction = 0x880C9108;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lis r9,-24416
	ctx.r9.s64 = -1600126976;
	// stw r11,-164(r1)
	ctx.current_instruction = 0x880C9110;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// li r6,51
	ctx.r6.s64 = 51;
	// ori r9,r9,41121
	ctx.r9.u64 = ctx.r9.u64 | 41121;
	// addi r7,r10,22816
	ctx.r7.s64 = ctx.r10.s64 + 22816;
loc_880C9120:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,-172(r1)
	ctx.current_instruction = 0x880C9124;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// stw r10,-176(r1)
	ctx.current_instruction = 0x880C9128;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
loc_880C912C:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x880C9130;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r7,259
	ctx.r4.s64 = ctx.r7.s64 + 259;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r24,r8,r4
	ctx.r24.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_880C9144:
	// rlwinm r4,r10,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// rlwinm r3,r10,0,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// mulhw r5,r4,r9
	ctx.r5.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mulhw r31,r3,r9
	ctx.r31.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// add r29,r31,r3
	ctx.r29.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r30,r5,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// divw r28,r4,r6
	ctx.r28.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// add r31,r5,r30
	ctx.r31.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// mulli r31,r31,51
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(51));
	// subf r30,r31,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r31.u64;
	// addi r31,r5,-1
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// subfc r4,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r30.u64;
	// eqv r27,r30,r11
	ctx.r27.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// eqv r26,r30,r11
	ctx.r26.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// rlwinm r27,r27,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// rlwinm r4,r31,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF8;
	// addze r25,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r25.s64 = temp.s64;
	// subfc r30,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r30.u64 = ctx.r11.u64 - ctx.r30.u64;
	// rlwinm r31,r31,0,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFC;
	// rlwinm r30,r26,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addze r27,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r30,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 5;
	// clrlwi r29,r27,31
	ctx.r29.u64 = ctx.r27.u32 & 0x1;
	// rlwinm r27,r30,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mulhw r27,r4,r9
	ctx.r27.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// mulli r30,r30,51
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(51));
	// subf r23,r30,r3
	ctx.r23.u64 = ctx.r3.u64 - ctx.r30.u64;
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// subfc r22,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r22.u64 = ctx.r11.u64 - ctx.r23.u64;
	// eqv r23,r23,r11
	ctx.r23.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// add r27,r27,r4
	ctx.r27.u64 = ctx.r27.u64 + ctx.r4.u64;
	// rlwinm r23,r23,1,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x1;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addze r23,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r30,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 5;
	// divw r3,r3,r6
	ctx.r3.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// rlwinm r27,r30,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r20,r8,r10
	ctx.r20.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// clrlwi r30,r23,31
	ctx.r30.u64 = ctx.r23.u32 & 0x1;
	// mulli r27,r27,51
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(51));
	// subf r23,r27,r4
	ctx.r23.u64 = ctx.r4.u64 - ctx.r27.u64;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subfc r30,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r30.u64 = ctx.r11.u64 - ctx.r23.u64;
	// eqv r22,r23,r11
	ctx.r22.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r22,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0x1;
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addze r22,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r22.s64 = temp.s64;
	// subfc r21,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r21.u64 = ctx.r11.u64 - ctx.r23.u64;
	// eqv r23,r23,r11
	ctx.r23.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// mulhw r3,r31,r9
	ctx.r3.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// clrlwi r30,r25,31
	ctx.r30.u64 = ctx.r25.u32 & 0x1;
	// rlwinm r25,r23,1,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// divw r28,r4,r6
	ctx.r28.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// addze r25,r25
	temp.s64 = ctx.r25.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r25.u32;
	ctx.r25.s64 = temp.s64;
	// stbx r30,r26,r7
	ctx.current_instruction = 0x880C9244;
	REX_STORE_U8(ctx.r26.u32 + ctx.r7.u32, ctx.r30.u8);
	// srawi r4,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 5;
	// addi r19,r7,256
	ctx.r19.s64 = ctx.r7.s64 + 256;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r30,r5,0,24,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF8;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r8,r10
	ctx.r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r21,r7,512
	ctx.r21.s64 = ctx.r7.s64 + 512;
	// rlwinm r27,r27,1,24,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFE;
	// mulli r3,r4,51
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(51));
	// stbx r27,r20,r19
	ctx.current_instruction = 0x880C9270;
	REX_STORE_U8(ctx.r20.u32 + ctx.r19.u32, ctx.r27.u8);
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// mulhw r4,r30,r9
	ctx.r4.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stbx r29,r23,r21
	ctx.current_instruction = 0x880C927C;
	REX_STORE_U8(ctx.r23.u32 + ctx.r21.u32, ctx.r29.u8);
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// add r27,r4,r30
	ctx.r27.u64 = ctx.r4.u64 + ctx.r30.u64;
	// subfc r29,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r29.u64 = ctx.r11.u64 - ctx.r3.u64;
	// std r24,-160(r1)
	ctx.current_instruction = 0x880C928C;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r24.u64);
	// eqv r3,r3,r11
	ctx.r3.u64 = ~(ctx.r3.u64 ^ ctx.r11.u64);
	// clrlwi r4,r25,31
	ctx.r4.u64 = ctx.r25.u32 & 0x1;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r29,r4,r28
	ctx.r29.u64 = ctx.r4.u64 + ctx.r28.u64;
	// addze r25,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r25.s64 = temp.s64;
	// srawi r4,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 5;
	// rlwinm r26,r29,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r4,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r3,r5,0,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFC;
	// add r27,r4,r27
	ctx.r27.u64 = ctx.r4.u64 + ctx.r27.u64;
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mulli r27,r27,51
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(51));
	// subf r27,r27,r30
	ctx.r27.u64 = ctx.r30.u64 - ctx.r27.u64;
	// mulhw r4,r3,r9
	ctx.r4.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// subfc r23,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r23.u64 = ctx.r11.u64 - ctx.r27.u64;
	// eqv r21,r27,r11
	ctx.r21.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// eqv r20,r27,r11
	ctx.r20.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// rlwinm r23,r21,1,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0x1;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addze r23,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r23.s64 = temp.s64;
	// subfc r29,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r29.u64 = ctx.r11.u64 - ctx.r27.u64;
	// divw r31,r31,r6
	ctx.r31.u64 = uint32_t((ctx.r6.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r31.s32 / ctx.r6.s32 : 0);
	// rlwinm r29,r20,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0x1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addze r21,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r21.s64 = temp.s64;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// divw r27,r30,r6
	ctx.r27.u64 = uint32_t((ctx.r6.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r30.s32 / ctx.r6.s32 : 0);
	// rlwinm r29,r4,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// clrlwi r30,r23,31
	ctx.r30.u64 = ctx.r23.u32 & 0x1;
	// add r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 + ctx.r29.u64;
	// clrlwi r4,r25,31
	ctx.r4.u64 = ctx.r25.u32 & 0x1;
	// mulli r29,r29,51
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(51));
	// add r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r29,r29,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r29.u64;
	// rlwinm r25,r31,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF8;
	// subfc r23,r29,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r29.u32;
	ctx.r23.u64 = ctx.r11.u64 - ctx.r29.u64;
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
	// eqv r29,r29,r11
	ctx.r29.u64 = ~(ctx.r29.u64 ^ ctx.r11.u64);
	// mulhw r31,r4,r9
	ctx.r31.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r29,r29,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// addze r23,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// add r20,r30,r27
	ctx.r20.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rlwinm r30,r31,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// clrlwi r29,r22,31
	ctx.r29.u64 = ctx.r22.u32 & 0x1;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mulli r31,r31,51
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(51));
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r8,r10
	ctx.r28.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r22,r7,1
	ctx.r22.s64 = ctx.r7.s64 + 1;
	// subf r30,r31,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r31.u64;
	// addi r31,r26,10
	ctx.r31.s64 = ctx.r26.s64 + 10;
	// add r17,r8,r10
	ctx.r17.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r16,r7,257
	ctx.r16.s64 = ctx.r7.s64 + 257;
	// subfc r26,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r26.u64 = ctx.r11.u64 - ctx.r30.u64;
	// stbx r29,r28,r22
	ctx.current_instruction = 0x880C9378;
	REX_STORE_U8(ctx.r28.u32 + ctx.r22.u32, ctx.r29.u8);
	// eqv r24,r30,r11
	ctx.r24.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// add r19,r8,r10
	ctx.r19.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r18,r7,513
	ctx.r18.s64 = ctx.r7.s64 + 513;
	// rlwinm r25,r25,1,24,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFE;
	// rlwinm r29,r24,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x1;
	// rlwinm r5,r5,0,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFC;
	// stbx r25,r17,r16
	ctx.current_instruction = 0x880C9394;
	REX_STORE_U8(ctx.r17.u32 + ctx.r16.u32, ctx.r25.u8);
	// add r15,r8,r10
	ctx.r15.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r14,r7,2
	ctx.r14.s64 = ctx.r7.s64 + 2;
	// stbx r31,r19,r18
	ctx.current_instruction = 0x880C93A0;
	REX_STORE_U8(ctx.r19.u32 + ctx.r18.u32, ctx.r31.u8);
	// eqv r28,r30,r11
	ctx.r28.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// addze r25,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r25.s64 = temp.s64;
	// mulhw r31,r5,r9
	ctx.r31.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stbx r20,r15,r14
	ctx.current_instruction = 0x880C93B0;
	REX_STORE_U8(ctx.r15.u32 + ctx.r14.u32, ctx.r20.u8);
	// clrlwi r26,r21,31
	ctx.r26.u64 = ctx.r21.u32 & 0x1;
	// subfc r30,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r30.u64 = ctx.r11.u64 - ctx.r30.u64;
	// divw r29,r4,r6
	ctx.r29.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// rlwinm r30,r28,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// addze r28,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r28.s64 = temp.s64;
	// ld r24,-160(r1)
	ctx.current_instruction = 0x880C93D0;
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// srawi r30,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 5;
	// clrlwi r31,r28,31
	ctx.r31.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r28,r30,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r30,r30,51
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(51));
	// subf r27,r30,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r30.u64;
	// add r28,r4,r28
	ctx.r28.u64 = ctx.r4.u64 + ctx.r28.u64;
	// subfc r26,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r26.u64 = ctx.r11.u64 - ctx.r27.u64;
	// eqv r27,r27,r11
	ctx.r27.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// rlwinm r30,r31,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r27,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addze r27,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r27.s64 = temp.s64;
	// divw r4,r5,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// clrlwi r5,r27,31
	ctx.r5.u64 = ctx.r27.u32 & 0x1;
	// divw r30,r3,r6
	ctx.r30.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// clrlwi r3,r23,31
	ctx.r3.u64 = ctx.r23.u32 & 0x1;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r28,r5,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r30,r25,31
	ctx.r30.u64 = ctx.r25.u32 & 0x1;
	// addi r27,r27,10
	ctx.r27.s64 = ctx.r27.s64 + 10;
	// addi r22,r7,514
	ctx.r22.s64 = ctx.r7.s64 + 514;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r3,r3,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stbx r3,r24,r10
	ctx.current_instruction = 0x880C9460;
	REX_STORE_U8(ctx.r24.u32 + ctx.r10.u32, ctx.r3.u8);
	// add r25,r8,r10
	ctx.r25.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stbx r27,r4,r22
	ctx.current_instruction = 0x880C9468;
	REX_STORE_U8(ctx.r4.u32 + ctx.r22.u32, ctx.r27.u8);
	// add r23,r8,r10
	ctx.r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r28,r7,258
	ctx.r28.s64 = ctx.r7.s64 + 258;
	// addi r29,r7,3
	ctx.r29.s64 = ctx.r7.s64 + 3;
	// addi r31,r31,10
	ctx.r31.s64 = ctx.r31.s64 + 10;
	// addi r21,r7,515
	ctx.r21.s64 = ctx.r7.s64 + 515;
	// rlwinm r5,r5,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// stbx r5,r26,r28
	ctx.current_instruction = 0x880C948C;
	REX_STORE_U8(ctx.r26.u32 + ctx.r28.u32, ctx.r5.u8);
	// stbx r3,r25,r29
	ctx.current_instruction = 0x880C9490;
	REX_STORE_U8(ctx.r25.u32 + ctx.r29.u32, ctx.r3.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r4,r23,r21
	ctx.current_instruction = 0x880C9498;
	REX_STORE_U8(ctx.r23.u32 + ctx.r21.u32, ctx.r4.u8);
	// bdnz 0x880c9144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C9144;
	// lwz r11,-176(r1)
	ctx.current_instruction = 0x880C94A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// addi r8,r8,3072
	ctx.r8.s64 = ctx.r8.s64 + 3072;
	// lwz r5,-172(r1)
	ctx.current_instruction = 0x880C94A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// stw r10,-176(r1)
	ctx.current_instruction = 0x880C94B4;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r11,-172(r1)
	ctx.current_instruction = 0x880C94B8;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// bne 0x880c912c
	if (!ctx.cr0.eq) goto loc_880C912C;
	// lwz r10,-168(r1)
	ctx.current_instruction = 0x880C94C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r5,-164(r1)
	ctx.current_instruction = 0x880C94C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// addi r8,r10,768
	ctx.r8.s64 = ctx.r10.s64 + 768;
	// addi r4,r5,64
	ctx.r4.s64 = ctx.r5.s64 + 64;
	// stw r8,-168(r1)
	ctx.current_instruction = 0x880C94D0;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x880c9120
	if (ctx.cr6.lt) goto loc_880C9120;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D0C70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D0C70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D0C70) {
			switch (rex_dispatch_address) {
				case 0x880D0C78:
				case 0x880D0CC4:
				case 0x880D0D34:
				case 0x880D0D90:
				case 0x880D0DD8:
				case 0x880D0E18:
				case 0x880D0E7C:
				case 0x880D0EC0:
				case 0x880D0F18:
				case 0x880D0FE8:
				case 0x880D1120:
				case 0x880D117C:
				case 0x880D11C4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D0C70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D0C78: goto loc_880D0C78;
		case 0x880D0CC4: goto loc_880D0CC4;
		case 0x880D0D34: goto loc_880D0D34;
		case 0x880D0D90: goto loc_880D0D90;
		case 0x880D0DD8: goto loc_880D0DD8;
		case 0x880D0E18: goto loc_880D0E18;
		case 0x880D0E7C: goto loc_880D0E7C;
		case 0x880D0EC0: goto loc_880D0EC0;
		case 0x880D0F18: goto loc_880D0F18;
		case 0x880D0FE8: goto loc_880D0FE8;
		case 0x880D1120: goto loc_880D1120;
		case 0x880D117C: goto loc_880D117C;
		case 0x880D11C4: goto loc_880D11C4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880D0C78;
	__savegprlr_25(ctx, base);
loc_880D0C78:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880D0C78;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r26,80(r1)
	ctx.current_instruction = 0x880D0C88;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bne cr6,0x880d0ca0
	if (!ctx.cr6.eq) goto loc_880D0CA0;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D0CA0:
	// ld r11,0(r31)
	ctx.current_instruction = 0x880D0CA0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,428(r31)
	ctx.current_instruction = 0x880D0CA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// addi r30,r31,496
	ctx.r30.s64 = ctx.r31.s64 + 496;
	// bl 0x8805adc8
	ctx.lr = 0x880D0CC4;
	sub_8805ADC8(ctx, base);
loc_880D0CC4:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x880d0cd8
	if (ctx.cr6.eq) goto loc_880D0CD8;
loc_880D0CCC:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D0CD8:
	// lwz r10,4(r29)
	ctx.current_instruction = 0x880D0CD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D0CDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r10,0(r30)
	ctx.current_instruction = 0x880D0CE0;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x880D0CE4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// stb r7,4(r30)
	ctx.current_instruction = 0x880D0CEC;
	REX_STORE_U8(ctx.r30.u32 + 4, ctx.r7.u8);
	// lbz r6,1(r11)
	ctx.current_instruction = 0x880D0CF0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r6,5(r30)
	ctx.current_instruction = 0x880D0CF4;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r6.u8);
	// lbz r11,29(r29)
	ctx.current_instruction = 0x880D0CF8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 29);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x880d0db8
	if (ctx.cr6.eq) goto loc_880D0DB8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x880d0d70
	if (ctx.cr6.eq) goto loc_880D0D70;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x880d0dec
	if (!ctx.cr6.eq) goto loc_880D0DEC;
	// lwz r10,4(r29)
	ctx.current_instruction = 0x880D0D14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r11,0(r31)
	ctx.current_instruction = 0x880D0D1C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x8805adc8
	ctx.lr = 0x880D0D34;
	sub_8805ADC8(ctx, base);
loc_880D0D34:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D0D3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,3(r11)
	ctx.current_instruction = 0x880D0D40;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.current_instruction = 0x880D0D44;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880D0D4C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880D0D50;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,8(r30)
	ctx.current_instruction = 0x880D0D68;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// b 0x880d0dec
	goto loc_880D0DEC;
loc_880D0D70:
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880D0D70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D0D78;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x8805adc8
	ctx.lr = 0x880D0D90;
	sub_8805ADC8(ctx, base);
loc_880D0D90:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D0D98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880D0D9C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880D0DA0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,8(r30)
	ctx.current_instruction = 0x880D0DB0;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// b 0x880d0dec
	goto loc_880D0DEC;
loc_880D0DB8:
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880D0DB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D0DC0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x8805adc8
	ctx.lr = 0x880D0DD8;
	sub_8805ADC8(ctx, base);
loc_880D0DD8:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D0DE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880D0DE4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,8(r30)
	ctx.current_instruction = 0x880D0DE8;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_880D0DEC:
	// lbz r11,28(r29)
	ctx.current_instruction = 0x880D0DEC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 28);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r29)
	ctx.current_instruction = 0x880D0DF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D0E00;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrldi r28,r11,32
	ctx.r28.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880D0E18;
	sub_8805ADC8(ctx, base);
loc_880D0E18:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D0E20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D0E28;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,16(r30)
	ctx.current_instruction = 0x880D0E2C;
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r9,20(r30)
	ctx.current_instruction = 0x880D0E38;
	REX_STORE_U8(ctx.r30.u32 + 20, ctx.r9.u8);
	// bne cr6,0x880d0eec
	if (!ctx.cr6.eq) goto loc_880D0EEC;
	// stw r26,12(r30)
	ctx.current_instruction = 0x880D0E40;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x880D0E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r10,29(r30)
	ctx.current_instruction = 0x880D0E50;
	REX_STORE_U8(ctx.r30.u32 + 29, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r26,8(r30)
	ctx.current_instruction = 0x880D0E58;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r30)
	ctx.current_instruction = 0x880D0E60;
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880D0E64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D0E6C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8805adc8
	ctx.lr = 0x880D0E7C;
	sub_8805ADC8(ctx, base);
loc_880D0E7C:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D0E84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880D0E88;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,36(r30)
	ctx.current_instruction = 0x880D0E8C;
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// lwz r9,24(r29)
	ctx.current_instruction = 0x880D0E90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d0ee4
	if (ctx.cr6.eq) goto loc_880D0EE4;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880D0E9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D0EA4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x8805adc8
	ctx.lr = 0x880D0EC0;
	sub_8805ADC8(ctx, base);
loc_880D0EC0:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D0EC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880D0ECC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880D0ED0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r25,r8,16
	ctx.r25.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x880d10b4
	goto loc_880D10B4;
loc_880D0EE4:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// b 0x880d10b4
	goto loc_880D10B4;
loc_880D0EEC:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x880d10b4
	if (ctx.cr6.lt) goto loc_880D10B4;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880D0EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D0EFC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8805adc8
	ctx.lr = 0x880D0F18;
	sub_8805ADC8(ctx, base);
loc_880D0F18:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D0F20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,3(r11)
	ctx.current_instruction = 0x880D0F24;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.current_instruction = 0x880D0F28;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880D0F30;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D0F34;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,12(r30)
	ctx.current_instruction = 0x880D0F4C;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// lbz r4,7(r11)
	ctx.current_instruction = 0x880D0F50;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r8,6(r11)
	ctx.current_instruction = 0x880D0F58;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,5(r11)
	ctx.current_instruction = 0x880D0F5C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,4(r11)
	ctx.current_instruction = 0x880D0F64;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r26,29(r30)
	ctx.current_instruction = 0x880D0F68;
	REX_STORE_U8(ctx.r30.u32 + 29, ctx.r26.u8);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,16(r30)
	ctx.current_instruction = 0x880D0F7C;
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r9,552(r31)
	ctx.current_instruction = 0x880D0F80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d10b4
	if (ctx.cr6.eq) goto loc_880D10B4;
	// lbz r10,4(r30)
	ctx.current_instruction = 0x880D0F8C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
loc_880D0F98:
	// lhz r8,0(r11)
	ctx.current_instruction = 0x880D0F98;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880d0fb4
	if (ctx.cr6.eq) goto loc_880D0FB4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x880d0f98
	if (ctx.cr6.lt) goto loc_880D0F98;
loc_880D0FB4:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// beq cr6,0x880d1284
	if (ctx.cr6.eq) goto loc_880D1284;
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880D0FBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r9,20(r30)
	ctx.current_instruction = 0x880D0FC4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D0FCC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r28,r9,-8
	ctx.r28.s64 = ctx.r9.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,9
	ctx.r4.s64 = ctx.r11.s64 + 9;
	// bl 0x8805adc8
	ctx.lr = 0x880D0FE8;
	sub_8805ADC8(ctx, base);
loc_880D0FE8:
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x880D0FF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,248
	ctx.r8.s64 = 248;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_880D1004:
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhzx r11,r11,r31
	ctx.current_instruction = 0x880D100C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x880d1040
	if (!ctx.cr6.eq) goto loc_880D1040;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x880d0ccc
	if (ctx.cr6.lt) goto loc_880D0CCC;
	// lbz r11,1(r10)
	ctx.current_instruction = 0x880D1020;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// lbz r9,0(r10)
	ctx.current_instruction = 0x880D1028;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// stw r10,80(r1)
	ctx.current_instruction = 0x880D1034;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
loc_880D1040:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880d0ccc
	if (ctx.cr6.lt) goto loc_880D0CCC;
	// lwz r11,4(r7)
	ctx.current_instruction = 0x880D104C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d1070
	if (!ctx.cr6.eq) goto loc_880D1070;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,280
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 280, ctx.xer);
	// stw r10,80(r1)
	ctx.current_instruction = 0x880D1064;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x880d1004
	if (ctx.cr6.lt) goto loc_880D1004;
	// b 0x880d10b4
	goto loc_880D10B4;
loc_880D1070:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// ble cr6,0x880d1088
	if (!ctx.cr6.gt) goto loc_880D1088;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D1088:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880d10b0
	if (ctx.cr6.eq) goto loc_880D10B0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_880D1094:
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbzx r7,r11,r10
	ctx.current_instruction = 0x880D1098;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rldicr r8,r8,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880d1094
	if (ctx.cr6.lt) goto loc_880D1094;
loc_880D10B0:
	// std r8,600(r31)
	ctx.current_instruction = 0x880D10B0;
	REX_STORE_U64(ctx.r31.u32 + 600, ctx.r8.u64);
loc_880D10B4:
	// lbz r10,28(r29)
	ctx.current_instruction = 0x880D10B4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 28);
	// lbz r11,20(r30)
	ctx.current_instruction = 0x880D10B8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,2(r30)
	ctx.current_instruction = 0x880D10C8;
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lwz r10,24(r29)
	ctx.current_instruction = 0x880D10CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d11d8
	if (ctx.cr6.eq) goto loc_880D11D8;
	// lbz r10,62(r29)
	ctx.current_instruction = 0x880D10D8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 62);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x880d11a0
	if (ctx.cr6.eq) goto loc_880D11A0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x880d1158
	if (ctx.cr6.eq) goto loc_880D1158;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x880d10fc
	if (ctx.cr6.eq) goto loc_880D10FC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x880d1214
	goto loc_880D1214;
loc_880D10FC:
	// lwz r9,4(r29)
	ctx.current_instruction = 0x880D10FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrldi r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFF;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D1104;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880D1120;
	sub_8805ADC8(ctx, base);
loc_880D1120:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D1128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,3(r11)
	ctx.current_instruction = 0x880D112C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.current_instruction = 0x880D1130;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880D1138;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880D113C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880d1214
	goto loc_880D1214;
loc_880D1158:
	// lwz r9,4(r29)
	ctx.current_instruction = 0x880D1158;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrldi r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFF;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D1160;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880D117C;
	sub_8805ADC8(ctx, base);
loc_880D117C:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D1184;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880D1188;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880D118C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x880d1214
	goto loc_880D1214;
loc_880D11A0:
	// lwz r9,4(r29)
	ctx.current_instruction = 0x880D11A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrldi r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFF;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D11A8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880D11C4;
	sub_8805ADC8(ctx, base);
loc_880D11C4:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x880d0ccc
	if (!ctx.cr6.eq) goto loc_880D0CCC;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D11CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880D11D0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x880d1214
	goto loc_880D1214;
loc_880D11D8:
	// lwz r10,36(r29)
	ctx.current_instruction = 0x880D11D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r7,4(r29)
	ctx.current_instruction = 0x880D11DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d11fc
	if (ctx.cr6.eq) goto loc_880D11FC;
	// lwz r9,52(r29)
	ctx.current_instruction = 0x880D11E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r6,r9,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// b 0x880d1210
	goto loc_880D1210;
loc_880D11FC:
	// lwz r10,20(r31)
	ctx.current_instruction = 0x880D11FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,52(r29)
	ctx.current_instruction = 0x880D1204;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// subf r5,r9,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_880D1210:
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
loc_880D1214:
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880d1224
	if (!ctx.cr6.eq) goto loc_880D1224;
	// clrlwi r25,r11,16
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFF;
loc_880D1224:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r10,2(r30)
	ctx.current_instruction = 0x880D1228;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// sth r11,22(r30)
	ctx.current_instruction = 0x880D122C;
	REX_STORE_U16(ctx.r30.u32 + 22, ctx.r11.u16);
	// lbz r9,63(r29)
	ctx.current_instruction = 0x880D1230;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 63);
	// sth r25,26(r30)
	ctx.current_instruction = 0x880D1234;
	REX_STORE_U16(ctx.r30.u32 + 26, ctx.r25.u16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,2(r30)
	ctx.current_instruction = 0x880D1240;
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,4(r29)
	ctx.current_instruction = 0x880D1248;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	ctx.current_instruction = 0x880D1250;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.current_instruction = 0x880D1254;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x880d1284
	if (ctx.cr6.gt) goto loc_880D1284;
	// bne cr6,0x880d1278
	if (!ctx.cr6.eq) goto loc_880D1278;
	// lwz r11,68(r29)
	ctx.current_instruction = 0x880D1264;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r10,540(r31)
	ctx.current_instruction = 0x880D1268;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 540);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880d1284
	if (ctx.cr6.lt) goto loc_880D1284;
loc_880D1278:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D1284:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DCDA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DCDA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DCDA8) {
			switch (rex_dispatch_address) {
				case 0x880DCDB0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DCDA8;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880DCDB0: goto loc_880DCDB0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x880DCDB0;
	__savegprlr_17(ctx, base);
loc_880DCDB0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x880dcf98
	if (!ctx.cr6.gt) goto loc_880DCF98;
	// addi r10,r5,14
	ctx.r10.s64 = ctx.r5.s64 + 14;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
loc_880DCDCC:
	// lbz r8,-14(r10)
	ctx.current_instruction = 0x880DCDCC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + -14);
	// lbz r9,-14(r11)
	ctx.current_instruction = 0x880DCDD0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -14);
	// lbz r5,-13(r10)
	ctx.current_instruction = 0x880DCDD4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -13);
	// lbz r7,-13(r11)
	ctx.current_instruction = 0x880DCDD8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -13);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lbz r8,-12(r11)
	ctx.current_instruction = 0x880DCDE0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -12);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lbz r5,-12(r10)
	ctx.current_instruction = 0x880DCDE8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -12);
	// srawi r31,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 31;
	// lbz r28,-11(r10)
	ctx.current_instruction = 0x880DCDF0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -11);
	// srawi r29,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 31;
	// lbz r30,-11(r11)
	ctx.current_instruction = 0x880DCDF8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -11);
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// lbz r26,-10(r10)
	ctx.current_instruction = 0x880DCE00;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + -10);
	// xor r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// lbz r27,-10(r11)
	ctx.current_instruction = 0x880DCE08;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + -10);
	// xor r8,r7,r29
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r29.u64;
	// lbz r24,-9(r10)
	ctx.current_instruction = 0x880DCE10;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + -9);
	// srawi r25,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r5.s32 >> 31;
	// lbz r7,-9(r11)
	ctx.current_instruction = 0x880DCE18;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -9);
	// subf r30,r28,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r28.u64;
	// lbz r28,-8(r11)
	ctx.current_instruction = 0x880DCE20;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -8);
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// lbz r29,-8(r10)
	ctx.current_instruction = 0x880DCE28;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -8);
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r31.u64;
	// lbz r31,-7(r11)
	ctx.current_instruction = 0x880DCE30;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -7);
	// xor r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r25.u64;
	// lbz r23,-7(r10)
	ctx.current_instruction = 0x880DCE38;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + -7);
	// srawi r22,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r30.s32 >> 31;
	// lbz r21,-6(r11)
	ctx.current_instruction = 0x880DCE40;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r20,-6(r10)
	ctx.current_instruction = 0x880DCE48;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -6);
	// subf r27,r26,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r26.u64;
	// lbz r26,-5(r11)
	ctx.current_instruction = 0x880DCE50;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// subf r8,r25,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r25.u64;
	// lbz r5,-5(r10)
	ctx.current_instruction = 0x880DCE58;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -5);
	// xor r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r22.u64;
	// lbz r25,-4(r11)
	ctx.current_instruction = 0x880DCE60;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// srawi r19,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r27.s32 >> 31;
	// lbz r18,-4(r10)
	ctx.current_instruction = 0x880DCE68;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + -4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r17,-3(r11)
	ctx.current_instruction = 0x880DCE70;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// subf r7,r24,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r24.u64;
	// lbz r24,-3(r10)
	ctx.current_instruction = 0x880DCE78;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// subf r8,r22,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r22.u64;
	// xor r30,r27,r19
	ctx.r30.u64 = ctx.r27.u64 ^ ctx.r19.u64;
	// srawi r27,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 31;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r29,r29,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r29.u64;
	// subf r8,r19,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r19.u64;
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// srawi r30,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 31;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r31,r23,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r23.u64;
	// subf r8,r27,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r27.u64;
	// xor r7,r29,r30
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r30.u64;
	// srawi r29,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 31;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r28,r20,r21
	ctx.r28.u64 = ctx.r21.u64 - ctx.r20.u64;
	// subf r8,r30,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r30.u64;
	// xor r7,r31,r29
	ctx.r7.u64 = ctx.r31.u64 ^ ctx.r29.u64;
	// srawi r31,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r28.s32 >> 31;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r5,r5,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r5.u64;
	// subf r8,r29,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r29.u64;
	// xor r7,r28,r31
	ctx.r7.u64 = ctx.r28.u64 ^ ctx.r31.u64;
	// srawi r30,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 31;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r29,r18,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r18.u64;
	// subf r8,r31,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r31.u64;
	// xor r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r30.u64;
	// srawi r7,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 31;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r8,r30,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r30.u64;
	// xor r31,r29,r7
	ctx.r31.u64 = ctx.r29.u64 ^ ctx.r7.u64;
	// subf r5,r24,r17
	ctx.r5.u64 = ctx.r17.u64 - ctx.r24.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r8,r7,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r7.u64;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// xor r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// subf r8,r7,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lbz r31,-2(r11)
	ctx.current_instruction = 0x880DCF14;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-2(r10)
	ctx.current_instruction = 0x880DCF18;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r5,-1(r11)
	ctx.current_instruction = 0x880DCF20;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// subf r8,r7,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r7.u64;
	// lbz r7,-1(r10)
	ctx.current_instruction = 0x880DCF28;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r31,1(r11)
	ctx.current_instruction = 0x880DCF2C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r30,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 31;
	// lbz r29,1(r10)
	ctx.current_instruction = 0x880DCF34;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// subf r5,r7,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880DCF3C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// xor r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r30.u64;
	// lbz r28,0(r11)
	ctx.current_instruction = 0x880DCF44;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r27,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r5.s32 >> 31;
	// subf r31,r29,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r29.u64;
	// subf r8,r30,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r30.u64;
	// xor r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r27.u64;
	// srawi r30,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 31;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// subf r8,r27,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r27.u64;
	// xor r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 ^ ctx.r30.u64;
	// srawi r31,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r7.s32 >> 31;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r8,r30,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r30.u64;
	// xor r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r31.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r8,r31,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r31.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// bdnz 0x880dcdcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DCDCC;
loc_880DCF98:
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E2860) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E2860);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E2860;
	ctx.current_instruction = 0x880E2860;
	uint32_t ea{};
	// lis r10,-30679
	ctx.r10.s64 = -2010578944;
	// lwz r11,-23224(r10)
	ctx.current_instruction = 0x880E2864;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -23224);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-23224(r10)
	ctx.current_instruction = 0x880E286C;
	REX_STORE_U32(ctx.r10.u32 + -23224, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lis r11,-30679
	ctx.r11.s64 = -2010578944;
	// lis r8,-30679
	ctx.r8.s64 = -2010578944;
	// addi r10,r11,-25272
	ctx.r10.s64 = ctx.r11.s64 + -25272;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// addi r9,r10,1024
	ctx.r9.s64 = ctx.r10.s64 + 1024;
	// li r10,-1024
	ctx.r10.s64 = -1024;
	// stw r9,-25280(r8)
	ctx.current_instruction = 0x880E2890;
	REX_STORE_U32(ctx.r8.u32 + -25280, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x880e28a0
	goto loc_880E28A0;
loc_880E289C:
	// lwz r9,-25280(r8)
	ctx.current_instruction = 0x880E289C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -25280);
loc_880E28A0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x880e28b0
	if (!ctx.cr6.lt) goto loc_880E28B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x880e28c0
	goto loc_880E28C0;
loc_880E28B0:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// li r11,255
	ctx.r11.s64 = 255;
	// bgt cr6,0x880e28c0
	if (ctx.cr6.gt) goto loc_880E28C0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880E28C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r9,r10
	ctx.current_instruction = 0x880E28C4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x880e289c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E289C;
	// lis r11,-30679
	ctx.r11.s64 = -2010578944;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// addi r9,r11,-27328
	ctx.r9.s64 = ctx.r11.s64 + -27328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880E28E8:
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// li r10,127
	ctx.r10.s64 = 127;
	// bgt cr6,0x880e28f8
	if (ctx.cr6.gt) goto loc_880E28F8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_880E28F8:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthu r10,2(r9)
	ctx.current_instruction = 0x880E2900;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x880e28e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E28E8;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lfd f11,14688(r9)
	ctx.current_instruction = 0x880E291C;
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r9.u32 + 14688);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lfd f13,14680(r11)
	ctx.current_instruction = 0x880E2928;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 14680);
	// lis r4,-30679
	ctx.r4.s64 = -2010578944;
	// lfd f12,14672(r10)
	ctx.current_instruction = 0x880E2930;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 14672);
	// li r9,8
	ctx.r9.s64 = 8;
	// lfd f10,14664(r8)
	ctx.current_instruction = 0x880E2938;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r8.u32 + 14664);
	// addi r11,r4,-27840
	ctx.r11.s64 = ctx.r4.s64 + -27840;
	// lfd f9,14656(r7)
	ctx.current_instruction = 0x880E2940;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r7.u32 + 14656);
	// addi r10,r1,-72
	ctx.r10.s64 = ctx.r1.s64 + -72;
	// lfd f8,14648(r6)
	ctx.current_instruction = 0x880E2948;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r6.u32 + 14648);
	// lfd f7,14640(r5)
	ctx.current_instruction = 0x880E294C;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r5.u32 + 14640);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stfd f13,-64(r1)
	ctx.current_instruction = 0x880E2954;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f13.u64);
	// stfd f12,-56(r1)
	ctx.current_instruction = 0x880E2958;
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stfd f11,-48(r1)
	ctx.current_instruction = 0x880E2960;
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f11.u64);
	// stfd f10,-40(r1)
	ctx.current_instruction = 0x880E2964;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f10.u64);
	// stfd f13,-32(r1)
	ctx.current_instruction = 0x880E2968;
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f13.u64);
	// stfd f9,-24(r1)
	ctx.current_instruction = 0x880E296C;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f9.u64);
	// stfd f8,-16(r1)
	ctx.current_instruction = 0x880E2970;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// stfd f7,-8(r1)
	ctx.current_instruction = 0x880E2974;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f7.u64);
loc_880E2978:
	// lfdu f0,8(r10)
	ctx.current_instruction = 0x880E2978;
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r10.u32;
	ctx.f0.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfd f6,8(r11)
	ctx.current_instruction = 0x880E2980;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.f6.u64);
	// fmul f5,f0,f12
	ctx.f5.f64 = ctx.f0.f64 * ctx.f12.f64;
	// stfd f5,16(r11)
	ctx.current_instruction = 0x880E2988;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.f5.u64);
	// fmul f4,f0,f11
	ctx.f4.f64 = ctx.f0.f64 * ctx.f11.f64;
	// stfd f4,24(r11)
	ctx.current_instruction = 0x880E2990;
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.f4.u64);
	// fmul f3,f0,f10
	ctx.f3.f64 = ctx.f0.f64 * ctx.f10.f64;
	// stfd f3,32(r11)
	ctx.current_instruction = 0x880E2998;
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.f3.u64);
	// fmul f2,f0,f9
	ctx.f2.f64 = ctx.f0.f64 * ctx.f9.f64;
	// stfd f6,40(r11)
	ctx.current_instruction = 0x880E29A0;
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.f6.u64);
	// fmul f1,f0,f8
	ctx.f1.f64 = ctx.f0.f64 * ctx.f8.f64;
	// stfd f2,48(r11)
	ctx.current_instruction = 0x880E29A8;
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.f2.u64);
	// stfd f1,56(r11)
	ctx.current_instruction = 0x880E29AC;
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.f1.u64);
	// fmul f0,f0,f7
	ctx.f0.f64 = ctx.f0.f64 * ctx.f7.f64;
	// stfdu f0,64(r11)
	ctx.current_instruction = 0x880E29B4;
	ea = 64 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.f0.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x880e2978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E2978;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E4858) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E4858);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E4858;
	ctx.current_instruction = 0x880E4858;
	// lwz r9,768(r3)
	ctx.current_instruction = 0x880E4858;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// lwz r11,1396(r3)
	ctx.current_instruction = 0x880E485C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1396);
	// lwz r10,1624(r3)
	ctx.current_instruction = 0x880E4860;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r8,64(r9)
	ctx.current_instruction = 0x880E4868;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// stw r8,20(r3)
	ctx.current_instruction = 0x880E486C;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,88(r9)
	ctx.current_instruction = 0x880E4874;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,24(r3)
	ctx.current_instruction = 0x880E487C;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r6,112(r9)
	ctx.current_instruction = 0x880E4880;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// stw r6,28(r3)
	ctx.current_instruction = 0x880E4884;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// stw r11,784(r3)
	ctx.current_instruction = 0x880E4888;
	REX_STORE_U32(ctx.r3.u32 + 784, ctx.r11.u32);
	// blt cr6,0x880e48bc
	if (ctx.cr6.lt) goto loc_880E48BC;
	// lwz r9,4420(r3)
	ctx.current_instruction = 0x880E4890;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4420);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4412(r3)
	ctx.current_instruction = 0x880E489C;
	REX_STORE_U32(ctx.r3.u32 + 4412, ctx.r10.u32);
	// blt cr6,0x880e48bc
	if (ctx.cr6.lt) goto loc_880E48BC;
	// lwz r9,5388(r3)
	ctx.current_instruction = 0x880E48A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 5388);
	// lwz r10,6356(r3)
	ctx.current_instruction = 0x880E48A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6356);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,5380(r3)
	ctx.current_instruction = 0x880E48B4;
	REX_STORE_U32(ctx.r3.u32 + 5380, ctx.r9.u32);
	// stw r7,6348(r3)
	ctx.current_instruction = 0x880E48B8;
	REX_STORE_U32(ctx.r3.u32 + 6348, ctx.r7.u32);
loc_880E48BC:
	// lwz r11,24(r3)
	ctx.current_instruction = 0x880E48BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,28(r3)
	ctx.current_instruction = 0x880E48C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r8,20184(r3)
	ctx.current_instruction = 0x880E48C4;
	REX_STORE_U32(ctx.r3.u32 + 20184, ctx.r8.u32);
	// stw r11,20188(r3)
	ctx.current_instruction = 0x880E48C8;
	REX_STORE_U32(ctx.r3.u32 + 20188, ctx.r11.u32);
	// stw r10,20192(r3)
	ctx.current_instruction = 0x880E48CC;
	REX_STORE_U32(ctx.r3.u32 + 20192, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E61C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E61C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E61C8) {
			switch (rex_dispatch_address) {
				case 0x880E61D0:
				case 0x880E61F0:
				case 0x880E643C:
				case 0x880E6458:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E61C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E61D0: goto loc_880E61D0;
		case 0x880E61F0: goto loc_880E61F0;
		case 0x880E643C: goto loc_880E643C;
		case 0x880E6458: goto loc_880E6458;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x880E61D0;
	__savegprlr_18(ctx, base);
loc_880E61D0:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x880E61D0;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x88050340
	ctx.lr = 0x880E61F0;
	sub_88050340(ctx, base);
loc_880E61F0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880e6458
	if (ctx.cr6.eq) goto loc_880E6458;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x880e6448
	if (!ctx.cr6.gt) goto loc_880E6448;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// addi r24,r23,-3
	ctx.r24.s64 = ctx.r23.s64 + -3;
	// addi r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 1;
	// subfic r20,r3,-1
	ctx.xer.ca = ctx.r3.u32 <= 4294967295;
	ctx.r20.u64 = static_cast<uint64_t>(-1) - ctx.r3.u64;
	// li r21,12
	ctx.r21.s64 = 12;
	// li r25,8
	ctx.r25.s64 = 8;
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r31,r11,17272
	ctx.r31.s64 = ctx.r11.s64 + 17272;
loc_880E6228:
	// lbz r11,-1(r27)
	ctx.current_instruction = 0x880E6228;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + -1);
	// addi r3,r27,-1
	ctx.r3.s64 = ctx.r27.s64 + -1;
	// addi r22,r27,1
	ctx.r22.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// stb r11,0(r29)
	ctx.current_instruction = 0x880E6238;
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// lbz r10,0(r27)
	ctx.current_instruction = 0x880E623C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// stb r10,1(r29)
	ctx.current_instruction = 0x880E6240;
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r10.u8);
	// lbz r9,1(r27)
	ctx.current_instruction = 0x880E6244;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 1);
	// stb r9,2(r29)
	ctx.current_instruction = 0x880E6248;
	REX_STORE_U8(ctx.r29.u32 + 2, ctx.r9.u8);
	// bge cr6,0x880e6270
	if (!ctx.cr6.lt) goto loc_880E6270;
	// subf r9,r24,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r24.u64;
	// add r11,r24,r29
	ctx.r11.u64 = ctx.r24.u64 + ctx.r29.u64;
	// add r10,r20,r27
	ctx.r10.u64 = ctx.r20.u64 + ctx.r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880E6260:
	// lbzx r9,r10,r11
	ctx.current_instruction = 0x880E6260;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,0(r11)
	ctx.current_instruction = 0x880E6264;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880e6260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E6260;
loc_880E6270:
	// li r6,3
	ctx.r6.s64 = 3;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// ble cr6,0x880e6430
	if (!ctx.cr6.gt) goto loc_880E6430;
	// addi r11,r24,-3
	ctx.r11.s64 = ctx.r24.s64 + -3;
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// add r28,r20,r27
	ctx.r28.u64 = ctx.r20.u64 + ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880E628C:
	// add r30,r6,r29
	ctx.r30.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lbzx r9,r4,r6
	ctx.current_instruction = 0x880E6290;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// lbzx r5,r28,r30
	ctx.current_instruction = 0x880E6298;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// subf r8,r9,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r9.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// srawi r18,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r8.s32 >> 31;
	// rotlwi r11,r5,11
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 11);
	// xor r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r18.u64;
	// subf r8,r18,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r18.u64;
	// cmpwi cr6,r8,20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 20, ctx.xer);
	// bge cr6,0x880e62dc
	if (!ctx.cr6.lt) goto loc_880E62DC;
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r21,r10
	ctx.current_instruction = 0x880E62C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// lwzx r8,r8,r31
	ctx.current_instruction = 0x880E62C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
loc_880E62DC:
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbz r8,1(r9)
	ctx.current_instruction = 0x880E62E0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r18,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r9.s32 >> 31;
	// xor r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r18.u64;
	// subf r9,r18,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r18.u64;
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// bge cr6,0x880e631c
	if (!ctx.cr6.lt) goto loc_880E631C;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r31,-16
	ctx.r18.s64 = ctx.r31.s64 + -16;
	// lwzx r9,r9,r31
	ctx.current_instruction = 0x880E6304;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r18,r25,r18
	ctx.current_instruction = 0x880E6308;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r18.u32);
	// mullw r9,r18,r9
	ctx.r9.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_880E631C:
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbz r8,2(r9)
	ctx.current_instruction = 0x880E6320;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r18,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r9.s32 >> 31;
	// xor r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r18.u64;
	// subf r9,r18,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r18.u64;
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// bge cr6,0x880e635c
	if (!ctx.cr6.lt) goto loc_880E635C;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r31,-16
	ctx.r18.s64 = ctx.r31.s64 + -16;
	// lwzx r9,r9,r31
	ctx.current_instruction = 0x880E6344;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r18,r26,r18
	ctx.current_instruction = 0x880E6348;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r18.u32);
	// mullw r9,r18,r9
	ctx.r9.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_880E635C:
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbz r8,4(r9)
	ctx.current_instruction = 0x880E6360;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r18,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r9.s32 >> 31;
	// xor r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r18.u64;
	// subf r9,r18,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r18.u64;
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// bge cr6,0x880e639c
	if (!ctx.cr6.lt) goto loc_880E639C;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r31,-16
	ctx.r18.s64 = ctx.r31.s64 + -16;
	// lwzx r9,r9,r31
	ctx.current_instruction = 0x880E6384;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r18,r26,r18
	ctx.current_instruction = 0x880E6388;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r18.u32);
	// mullw r9,r18,r9
	ctx.r9.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_880E639C:
	// lbzx r8,r22,r6
	ctx.current_instruction = 0x880E639C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r6.u32);
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// bge cr6,0x880e63d8
	if (!ctx.cr6.lt) goto loc_880E63D8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r31,-16
	ctx.r7.s64 = ctx.r31.s64 + -16;
	// lwzx r9,r9,r31
	ctx.current_instruction = 0x880E63C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r7,r25,r7
	ctx.current_instruction = 0x880E63C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r7.u32);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_880E63D8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880e6424
	if (!ctx.cr6.gt) goto loc_880E6424;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw. r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge 0x880e640c
	if (!ctx.cr0.lt) goto loc_880E640C;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r30)
	ctx.current_instruction = 0x880E6404;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x880e6428
	goto loc_880E6428;
loc_880E640C:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x880e6418
	if (!ctx.cr6.gt) goto loc_880E6418;
	// li r11,255
	ctx.r11.s64 = 255;
loc_880E6418:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r30)
	ctx.current_instruction = 0x880E641C;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x880e6428
	goto loc_880E6428;
loc_880E6424:
	// stb r5,0(r30)
	ctx.current_instruction = 0x880E6424;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r5.u8);
loc_880E6428:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz 0x880e628c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880E628C;
loc_880E6430:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x880E643C;
	sub_880547A0(ctx, base);
loc_880E643C:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// bne 0x880e6228
	if (!ctx.cr0.eq) goto loc_880E6228;
loc_880E6448:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880E6458;
	sub_88050358(ctx, base);
loc_880E6458:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EC478) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880EC478);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EC478;
	ctx.current_instruction = 0x880EC478;
	// lwz r9,1460(r3)
	ctx.current_instruction = 0x880EC478;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1460);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,1464(r3)
	ctx.current_instruction = 0x880EC480;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1464);
	// li r6,0
	ctx.r6.s64 = 0;
loc_880EC488:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r4
	ctx.current_instruction = 0x880EC48C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ec4c4
	if (ctx.cr6.eq) goto loc_880EC4C4;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// bge cr6,0x880ec4b4
	if (!ctx.cr6.lt) goto loc_880EC4B4;
	// subf r3,r8,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r8.u64;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// sthx r10,r11,r5
	ctx.current_instruction = 0x880EC4AC;
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u16);
	// b 0x880ec4c8
	goto loc_880EC4C8;
loc_880EC4B4:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// sthx r3,r11,r5
	ctx.current_instruction = 0x880EC4BC;
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u16);
	// b 0x880ec4c8
	goto loc_880EC4C8;
loc_880EC4C4:
	// sthx r6,r11,r5
	ctx.current_instruction = 0x880EC4C4;
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u16);
loc_880EC4C8:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x880ec488
	if (ctx.cr6.lt) goto loc_880EC488;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880ED418) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880ED418;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880ED418) {
			switch (rex_dispatch_address) {
				case 0x880ED420:
				case 0x880ED4D0:
				case 0x880ED50C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880ED418;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880ED420: goto loc_880ED420;
		case 0x880ED4D0: goto loc_880ED4D0;
		case 0x880ED50C: goto loc_880ED50C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880ED420;
	__savegprlr_14(ctx, base);
loc_880ED420:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x880ED420;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r1)
	ctx.current_instruction = 0x880ED424;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r10,27940(r3)
	ctx.current_instruction = 0x880ED42C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 27940);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwz r4,31532(r3)
	ctx.current_instruction = 0x880ED438;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 31532);
	// stw r8,364(r1)
	ctx.current_instruction = 0x880ED43C;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// stw r24,128(r1)
	ctx.current_instruction = 0x880ED450;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// stw r24,136(r1)
	ctx.current_instruction = 0x880ED458;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// lwz r3,36(r11)
	ctx.current_instruction = 0x880ED45C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r16,44(r11)
	ctx.current_instruction = 0x880ED464;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r15,20(r11)
	ctx.current_instruction = 0x880ED46C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r22,24(r11)
	ctx.current_instruction = 0x880ED474;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwz r14,28(r11)
	ctx.current_instruction = 0x880ED47C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// lwz r21,32(r11)
	ctx.current_instruction = 0x880ED484;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r3,140(r1)
	ctx.current_instruction = 0x880ED48C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// beq cr6,0x880ed514
	if (ctx.cr6.eq) goto loc_880ED514;
	// lwz r28,412(r1)
	ctx.current_instruction = 0x880ED494;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x880ed514
	if (ctx.cr6.lt) goto loc_880ED514;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bgt cr6,0x880ed514
	if (ctx.cr6.gt) goto loc_880ED514;
	// lwz r27,404(r1)
	ctx.current_instruction = 0x880ED4A8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r26,396(r1)
	ctx.current_instruction = 0x880ED4B0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r24,132(r1)
	ctx.current_instruction = 0x880ED4BC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r24,132(r1)
	ctx.current_instruction = 0x880ED4C4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ecb80
	ctx.lr = 0x880ED4D0;
	sub_880ECB80(ctx, base);
loc_880ED4D0:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// lwz r4,31532(r31)
	ctx.current_instruction = 0x880ED4D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 31532);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r25,108(r1)
	ctx.current_instruction = 0x880ED4E0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r24,116(r1)
	ctx.current_instruction = 0x880ED4E8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// std r24,96(r1)
	ctx.current_instruction = 0x880ED4F0;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r24.u64);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r24,88(r1)
	ctx.current_instruction = 0x880ED4F8;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r24.u64);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880ED500;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ecc18
	ctx.lr = 0x880ED50C;
	sub_880ECC18(ctx, base);
loc_880ED50C:
	// lwz r27,364(r1)
	ctx.current_instruction = 0x880ED50C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r3,140(r1)
	ctx.current_instruction = 0x880ED510;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_880ED514:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// sth r24,0(r19)
	ctx.current_instruction = 0x880ED518;
	REX_STORE_U16(ctx.r19.u32 + 0, ctx.r24.u16);
	// ble cr6,0x880ed57c
	if (!ctx.cr6.gt) goto loc_880ED57C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_880ED524:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x880ED524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r17
	ctx.current_instruction = 0x880ED52C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r17.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmplw cr6,r8,r21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x880ed550
	if (!ctx.cr6.lt) goto loc_880ED550;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// b 0x880ed574
	goto loc_880ED574;
loc_880ED550:
	// lhz r11,0(r19)
	ctx.current_instruction = 0x880ED550;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r19.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r9,r23
	ctx.current_instruction = 0x880ED560;
	REX_STORE_U16(ctx.r9.u32 + ctx.r23.u32, ctx.r29.u16);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lhz r11,0(r19)
	ctx.current_instruction = 0x880ED568;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r19.u32 + 0);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// sth r7,0(r19)
	ctx.current_instruction = 0x880ED570;
	REX_STORE_U16(ctx.r19.u32 + 0, ctx.r7.u16);
loc_880ED574:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bdnz 0x880ed524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880ED524;
loc_880ED57C:
	// lhz r11,0(r19)
	ctx.current_instruction = 0x880ED57C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r19.u32 + 0);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880ed648
	if (!ctx.cr6.gt) goto loc_880ED648;
	// lis r10,-30679
	ctx.r10.s64 = -2010578944;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r8,r10,-27328
	ctx.r8.s64 = ctx.r10.s64 + -27328;
loc_880ED5A4:
	// lhz r10,2(r11)
	ctx.current_instruction = 0x880ED5A4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r10,r20
	ctx.r9.u64 = ctx.r10.u64 + ctx.r20.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r18
	ctx.current_instruction = 0x880ED5B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r18.u32);
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r4,r17
	ctx.current_instruction = 0x880ED5BC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r17.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r4,r10,r14
	ctx.r4.u64 = ctx.r10.u64 + ctx.r14.u64;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x880ed5e8
	if (ctx.cr6.gt) goto loc_880ED5E8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x880ed5e0
	if (ctx.cr6.lt) goto loc_880ED5E0;
	// sth r5,0(r11)
	ctx.current_instruction = 0x880ED5D8;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// b 0x880ed62c
	goto loc_880ED62C;
loc_880ED5E0:
	// sth r6,0(r11)
	ctx.current_instruction = 0x880ED5E0;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// b 0x880ed62c
	goto loc_880ED62C;
loc_880ED5E8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x880ed60c
	if (ctx.cr6.lt) goto loc_880ED60C;
	// add r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 + ctx.r15.u64;
	// mullw r4,r10,r16
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r16.s32);
	// srawi r10,r4,14
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 14;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r4,r8
	ctx.current_instruction = 0x880ED600;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// sth r10,0(r11)
	ctx.current_instruction = 0x880ED604;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x880ed62c
	goto loc_880ED62C;
loc_880ED60C:
	// subf r10,r10,r15
	ctx.r10.u64 = ctx.r15.u64 - ctx.r10.u64;
	// mullw r4,r10,r16
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r16.s32);
	// srawi r10,r4,14
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 14;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r4,r8
	ctx.current_instruction = 0x880ED61C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// neg r10,r4
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// sth r10,0(r11)
	ctx.current_instruction = 0x880ED628;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_880ED62C:
	// lhz r10,0(r19)
	ctx.current_instruction = 0x880ED62C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r19.u32 + 0);
	// addi r20,r9,1
	ctx.r20.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880ed5a4
	if (ctx.cr6.lt) goto loc_880ED5A4;
loc_880ED648:
	// stw r24,0(r27)
	ctx.current_instruction = 0x880ED648;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// lhz r11,0(r19)
	ctx.current_instruction = 0x880ED64C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r19.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F3DE0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F3DE0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F3DE0) {
			switch (rex_dispatch_address) {
				case 0x880F3DE8:
				case 0x880F3EB0:
				case 0x880F3F20:
				case 0x880F3F94:
				case 0x880F4014:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F3DE0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F3DE8: goto loc_880F3DE8;
		case 0x880F3EB0: goto loc_880F3EB0;
		case 0x880F3F20: goto loc_880F3F20;
		case 0x880F3F94: goto loc_880F3F94;
		case 0x880F4014: goto loc_880F4014;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880F3DE8;
	__savegprlr_25(ctx, base);
loc_880F3DE8:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x880F3DE8;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2572(r3)
	ctx.current_instruction = 0x880F3DEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2572);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,180(r4)
	ctx.current_instruction = 0x880F3DF4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 180);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r28,188(r4)
	ctx.current_instruction = 0x880F3DFC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f3e54
	if (ctx.cr6.eq) goto loc_880F3E54;
	// lwz r11,27988(r3)
	ctx.current_instruction = 0x880F3E08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f3e40
	if (ctx.cr6.eq) goto loc_880F3E40;
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x880F3E14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f3e40
	if (!ctx.cr6.eq) goto loc_880F3E40;
	// lwz r11,824(r3)
	ctx.current_instruction = 0x880F3E20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 824);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3e54
	if (!ctx.cr6.gt) goto loc_880F3E54;
	// lwz r10,828(r3)
	ctx.current_instruction = 0x880F3E30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 828);
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 1;
	// srawi r28,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 1;
	// b 0x880f3e54
	goto loc_880F3E54;
loc_880F3E40:
	// lwz r11,824(r31)
	ctx.current_instruction = 0x880F3E40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 824);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880f3e54
	if (!ctx.cr6.gt) goto loc_880F3E54;
	// lwz r28,828(r31)
	ctx.current_instruction = 0x880F3E4C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 828);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_880F3E54:
	// lwz r11,4(r30)
	ctx.current_instruction = 0x880F3E54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,1624(r31)
	ctx.current_instruction = 0x880F3E5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,27988(r31)
	ctx.current_instruction = 0x880F3E64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r27,8188(r31)
	ctx.current_instruction = 0x880F3E6C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8188);
	// subf r6,r10,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x880F3E74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r10,1356(r31)
	ctx.current_instruction = 0x880F3E7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1356);
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r9,816(r31)
	ctx.current_instruction = 0x880F3E84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 816);
	// rlwinm r26,r8,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r6,200(r30)
	ctx.current_instruction = 0x880F3E8C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 200);
	// rlwinm r8,r4,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lwz r4,176(r30)
	ctx.current_instruction = 0x880F3E94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 176);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r3,20184(r31)
	ctx.current_instruction = 0x880F3E9C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20184);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880F3EA0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// stw r26,92(r1)
	ctx.current_instruction = 0x880F3EA8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bctrl 
	ctx.lr = 0x880F3EB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F3EB0:
	// lwz r3,836(r31)
	ctx.current_instruction = 0x880F3EB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 836);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880f3f20
	if (ctx.cr6.eq) goto loc_880F3F20;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x880F3EBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,1624(r31)
	ctx.current_instruction = 0x880F3EC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,27988(r31)
	ctx.current_instruction = 0x880F3ECC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cntlzw r4,r11
	ctx.r4.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r27,1384(r31)
	ctx.current_instruction = 0x880F3ED4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// subf r3,r10,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r11,1368(r31)
	ctx.current_instruction = 0x880F3EDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1368);
	// cntlzw r9,r8
	ctx.r9.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r26,8192(r31)
	ctx.current_instruction = 0x880F3EE4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 8192);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r10,820(r31)
	ctx.current_instruction = 0x880F3EEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 820);
	// rlwinm r25,r9,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r7,204(r30)
	ctx.current_instruction = 0x880F3EF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r5,184(r30)
	ctx.current_instruction = 0x880F3EFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 184);
	// rlwinm r8,r4,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lwz r4,20192(r31)
	ctx.current_instruction = 0x880F3F04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20192);
	// lwz r3,20188(r31)
	ctx.current_instruction = 0x880F3F08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20188);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// stw r25,100(r1)
	ctx.current_instruction = 0x880F3F10;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r27,92(r1)
	ctx.current_instruction = 0x880F3F14;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880F3F18;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x880F3F20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F3F20:
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x880F3F20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f4014
	if (ctx.cr6.eq) goto loc_880F4014;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x880F3F2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f4014
	if (!ctx.cr6.eq) goto loc_880F4014;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x880F3F38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,1624(r31)
	ctx.current_instruction = 0x880F3F40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r29,1380(r31)
	ctx.current_instruction = 0x880F3F4C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,20184(r31)
	ctx.current_instruction = 0x880F3F54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20184);
	// subf r4,r10,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r11,8188(r31)
	ctx.current_instruction = 0x880F3F5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8188);
	// srawi r6,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 1;
	// lwz r10,1356(r31)
	ctx.current_instruction = 0x880F3F64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1356);
	// cntlzw r26,r4
	ctx.r26.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r9,816(r31)
	ctx.current_instruction = 0x880F3F6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 816);
	// add r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r6,200(r30)
	ctx.current_instruction = 0x880F3F74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 200);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r4,176(r30)
	ctx.current_instruction = 0x880F3F7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 176);
	// rlwinm r8,r26,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x1;
	// stw r29,84(r1)
	ctx.current_instruction = 0x880F3F84;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r27,92(r1)
	ctx.current_instruction = 0x880F3F88;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880F3F94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F3F94:
	// lwz r10,836(r31)
	ctx.current_instruction = 0x880F3F94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f4014
	if (ctx.cr6.eq) goto loc_880F4014;
	// lwz r11,4(r30)
	ctx.current_instruction = 0x880F3FA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,1624(r31)
	ctx.current_instruction = 0x880F3FA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,27988(r31)
	ctx.current_instruction = 0x880F3FB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// lwz r7,1384(r31)
	ctx.current_instruction = 0x880F3FB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// cntlzw r29,r11
	ctx.r29.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r4,r10,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r27,1368(r31)
	ctx.current_instruction = 0x880F3FC0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 1368);
	// lwz r26,8192(r31)
	ctx.current_instruction = 0x880F3FC4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 8192);
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r5,20192(r31)
	ctx.current_instruction = 0x880F3FCC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20192);
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// lwz r3,20188(r31)
	ctx.current_instruction = 0x880F3FD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20188);
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r7,204(r30)
	ctx.current_instruction = 0x880F3FE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r10,820(r31)
	ctx.current_instruction = 0x880F3FE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 820);
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r5,184(r30)
	ctx.current_instruction = 0x880F3FF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 184);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r25,100(r1)
	ctx.current_instruction = 0x880F3FF8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// rlwinm r8,r29,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// stw r28,92(r1)
	ctx.current_instruction = 0x880F4000;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// stw r27,84(r1)
	ctx.current_instruction = 0x880F400C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bctrl 
	ctx.lr = 0x880F4014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F4014:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F94A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F94A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F94A0;
	ctx.current_instruction = 0x880F94A0;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x880F94A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
loc_880F94B4:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x880F94B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,52(r10)
	ctx.current_instruction = 0x880F94B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x880f94d4
	if (!ctx.cr6.eq) goto loc_880F94D4;
	// lwz r8,72(r10)
	ctx.current_instruction = 0x880F94C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r7,8(r8)
	ctx.current_instruction = 0x880F94C8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880f94dc
	if (ctx.cr6.eq) goto loc_880F94DC;
loc_880F94D4:
	// lwz r8,40(r10)
	ctx.current_instruction = 0x880F94D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// stw r8,64(r10)
	ctx.current_instruction = 0x880F94D8;
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r8.u32);
loc_880F94DC:
	// lwz r10,12(r3)
	ctx.current_instruction = 0x880F94DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880f94b4
	if (ctx.cr6.lt) goto loc_880F94B4;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F9C98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F9C98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F9C98) {
			switch (rex_dispatch_address) {
				case 0x880F9CA0:
				case 0x880F9CE8:
				case 0x880F9D00:
				case 0x880F9D0C:
				case 0x880F9D18:
				case 0x880F9D44:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F9C98;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F9CA0: goto loc_880F9CA0;
		case 0x880F9CE8: goto loc_880F9CE8;
		case 0x880F9D00: goto loc_880F9D00;
		case 0x880F9D0C: goto loc_880F9D0C;
		case 0x880F9D18: goto loc_880F9D18;
		case 0x880F9D44: goto loc_880F9D44;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880F9CA0;
	__savegprlr_26(ctx, base);
loc_880F9CA0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880F9CA0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x880F9CA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,9356
	ctx.r10.s64 = 613154816;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// ori r30,r10,32768
	ctx.r30.u64 = ctx.r10.u64 | 32768;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880f9d30
	if (!ctx.cr6.gt) goto loc_880F9D30;
	// addi r28,r3,40
	ctx.r28.s64 = ctx.r3.s64 + 40;
loc_880F9CC8:
	// lwz r31,0(r28)
	ctx.current_instruction = 0x880F9CC8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880f9d1c
	if (ctx.cr6.eq) goto loc_880F9D1C;
	// lwz r3,56(r31)
	ctx.current_instruction = 0x880F9CD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f9cec
	if (ctx.cr6.eq) goto loc_880F9CEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x880F9CE8;
	sub_88050358(ctx, base);
loc_880F9CE8:
	// stw r29,56(r31)
	ctx.current_instruction = 0x880F9CE8;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_880F9CEC:
	// lwz r3,48(r31)
	ctx.current_instruction = 0x880F9CEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f9d04
	if (ctx.cr6.eq) goto loc_880F9D04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x880F9D00;
	sub_88050358(ctx, base);
loc_880F9D00:
	// stw r29,48(r31)
	ctx.current_instruction = 0x880F9D00;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_880F9D04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813cb18
	ctx.lr = 0x880F9D0C;
	sub_8813CB18(ctx, base);
loc_880F9D0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x880F9D18;
	sub_88050358(ctx, base);
loc_880F9D18:
	// stw r29,0(r28)
	ctx.current_instruction = 0x880F9D18;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_880F9D1C:
	// lwz r11,12(r27)
	ctx.current_instruction = 0x880F9D1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880f9cc8
	if (ctx.cr6.lt) goto loc_880F9CC8;
loc_880F9D30:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x880F9D30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880f9d48
	if (ctx.cr6.eq) goto loc_880F9D48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x880F9D44;
	sub_88050358(ctx, base);
loc_880F9D44:
	// stw r29,84(r27)
	ctx.current_instruction = 0x880F9D44;
	REX_STORE_U32(ctx.r27.u32 + 84, ctx.r29.u32);
loc_880F9D48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FC0C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FC0C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FC0C0) {
			switch (rex_dispatch_address) {
				case 0x880FC0C8:
				case 0x880FC0F4:
				case 0x880FC11C:
				case 0x880FC138:
				case 0x880FC178:
				case 0x880FC190:
				case 0x880FC1A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FC0C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FC0C8: goto loc_880FC0C8;
		case 0x880FC0F4: goto loc_880FC0F4;
		case 0x880FC11C: goto loc_880FC11C;
		case 0x880FC138: goto loc_880FC138;
		case 0x880FC178: goto loc_880FC178;
		case 0x880FC190: goto loc_880FC190;
		case 0x880FC1A0: goto loc_880FC1A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880FC0C8;
	__savegprlr_24(ctx, base);
loc_880FC0C8:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880FC0C8;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r24,r11,32768
	ctx.r24.u64 = ctx.r11.u64 | 32768;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,14720
	ctx.r3.s64 = 14720;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x88050340
	ctx.lr = 0x880FC0F4;
	sub_88050340(ctx, base);
loc_880FC0F4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fc150
	if (ctx.cr6.eq) goto loc_880FC150;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,14608(r3)
	ctx.current_instruction = 0x880FC108;
	REX_STORE_U32(ctx.r3.u32 + 14608, ctx.r11.u32);
	// stw r25,14600(r3)
	ctx.current_instruction = 0x880FC10C;
	REX_STORE_U32(ctx.r3.u32 + 14600, ctx.r25.u32);
	// stw r25,14596(r3)
	ctx.current_instruction = 0x880FC110;
	REX_STORE_U32(ctx.r3.u32 + 14596, ctx.r25.u32);
	// stw r11,14604(r3)
	ctx.current_instruction = 0x880FC114;
	REX_STORE_U32(ctx.r3.u32 + 14604, ctx.r11.u32);
	// bl 0x880ca638
	ctx.lr = 0x880FC11C;
	sub_880CA638(ctx, base);
loc_880FC11C:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8813d1b8
	ctx.lr = 0x880FC138;
	sub_8813D1B8(ctx, base);
loc_880FC138:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x880FC138;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fc164
	if (!ctx.cr6.eq) goto loc_880FC164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880FC150:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	ctx.current_instruction = 0x880FC158;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880FC164:
	// lwz r3,0(r31)
	ctx.current_instruction = 0x880FC164;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fc17c
	if (ctx.cr6.eq) goto loc_880FC17C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC178;
	sub_88050358(ctx, base);
loc_880FC178:
	// stw r25,0(r31)
	ctx.current_instruction = 0x880FC178;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_880FC17C:
	// lwz r3,4(r31)
	ctx.current_instruction = 0x880FC17C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fc194
	if (ctx.cr6.eq) goto loc_880FC194;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC190;
	sub_88050358(ctx, base);
loc_880FC190:
	// stw r25,4(r31)
	ctx.current_instruction = 0x880FC190;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
loc_880FC194:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC1A0;
	sub_88050358(ctx, base);
loc_880FC1A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88100390) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88100390;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88100390) {
			switch (rex_dispatch_address) {
				case 0x88100398:
				case 0x8810044C:
				case 0x881004A8:
				case 0x881004DC:
				case 0x881004F8:
				case 0x88100528:
				case 0x88100530:
				case 0x88100554:
				case 0x88100598:
				case 0x88100648:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88100390;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88100398: goto loc_88100398;
		case 0x8810044C: goto loc_8810044C;
		case 0x881004A8: goto loc_881004A8;
		case 0x881004DC: goto loc_881004DC;
		case 0x881004F8: goto loc_881004F8;
		case 0x88100528: goto loc_88100528;
		case 0x88100530: goto loc_88100530;
		case 0x88100554: goto loc_88100554;
		case 0x88100598: goto loc_88100598;
		case 0x88100648: goto loc_88100648;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88100398;
	__savegprlr_14(ctx, base);
loc_88100398:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x88100398;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,7868(r3)
	ctx.current_instruction = 0x8810039C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,7764(r3)
	ctx.current_instruction = 0x881003A4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// li r15,0
	ctx.r15.s64 = 0;
	// lwz r27,3404(r3)
	ctx.current_instruction = 0x881003AC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 3404);
	// lwz r26,3408(r3)
	ctx.current_instruction = 0x881003B0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 3408);
	// lwz r25,3412(r3)
	ctx.current_instruction = 0x881003B4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 3412);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x881003B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r24,3416(r3)
	ctx.current_instruction = 0x881003BC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 3416);
	// lwz r23,3420(r3)
	ctx.current_instruction = 0x881003C0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 3420);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// lwz r22,3424(r3)
	ctx.current_instruction = 0x881003C8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 3424);
	// lwz r21,3428(r3)
	ctx.current_instruction = 0x881003CC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 3428);
	// lwz r20,3432(r3)
	ctx.current_instruction = 0x881003D0;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 3432);
	// lwz r19,3436(r3)
	ctx.current_instruction = 0x881003D4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 3436);
	// lwz r18,3440(r3)
	ctx.current_instruction = 0x881003D8;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 3440);
	// lwz r17,3104(r3)
	ctx.current_instruction = 0x881003DC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 3104);
	// lwz r16,3108(r3)
	ctx.current_instruction = 0x881003E0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r3.u32 + 3108);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881003E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x881003f8
	if (!ctx.cr6.eq) goto loc_881003F8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,144(r1)
	ctx.current_instruction = 0x881003F0;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// b 0x8810040c
	goto loc_8810040C;
loc_881003F8:
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r7,144(r1)
	ctx.current_instruction = 0x88100408;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
loc_8810040C:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8810040C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88100660
	if (!ctx.cr6.gt) goto loc_88100660;
	// li r14,0
	ctx.r14.s64 = 0;
loc_88100420:
	// lwz r11,2272(r31)
	ctx.current_instruction = 0x88100420;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881004b0
	if (ctx.cr6.eq) goto loc_881004B0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881004b0
	if (ctx.cr6.eq) goto loc_881004B0;
	// lwz r11,2264(r31)
	ctx.current_instruction = 0x88100434;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// lwzx r10,r11,r14
	ctx.current_instruction = 0x88100438;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r14.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881004b0
	if (ctx.cr6.eq) goto loc_881004B0;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88100444;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6b40
	ctx.lr = 0x8810044C;
	sub_880E6B40(ctx, base);
loc_8810044C:
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x8810044C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,2288(r31)
	ctx.current_instruction = 0x88100454;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2288);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,2276(r31)
	ctx.current_instruction = 0x8810045C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2276);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,16(r11)
	ctx.current_instruction = 0x88100464;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subfic r6,r7,39
	ctx.xer.ca = ctx.r7.u32 <= 39;
	ctx.r6.u64 = static_cast<uint64_t>(39) - ctx.r7.u64;
	// rlwinm r10,r6,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88100470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r15,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r15.u64;
	// stwx r11,r8,r9
	ctx.current_instruction = 0x8810047C;
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r9,7868(r31)
	ctx.current_instruction = 0x88100480;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r11,2288(r31)
	ctx.current_instruction = 0x88100484;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2288);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r10,4(r9)
	ctx.current_instruction = 0x8810048C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,16(r9)
	ctx.current_instruction = 0x88100490;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// subfic r6,r7,39
	ctx.xer.ca = ctx.r7.u32 <= 39;
	ctx.r6.u64 = static_cast<uint64_t>(39) - ctx.r7.u64;
	// stw r8,2288(r31)
	ctx.current_instruction = 0x88100498;
	REX_STORE_U32(ctx.r31.u32 + 2288, ctx.r8.u32);
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// add r15,r11,r10
	ctx.r15.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880fa2c0
	ctx.lr = 0x881004A8;
	sub_880FA2C0(ctx, base);
loc_881004A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,1544(r31)
	ctx.current_instruction = 0x881004AC;
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r5.u32);
loc_881004B0:
	// lwz r11,2260(r31)
	ctx.current_instruction = 0x881004B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881004f8
	if (ctx.cr6.eq) goto loc_881004F8;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x881004BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881004f8
	if (ctx.cr6.eq) goto loc_881004F8;
	// lwz r11,6772(r31)
	ctx.current_instruction = 0x881004C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881004ec
	if (ctx.cr6.eq) goto loc_881004EC;
	// bl 0x881ee8e8
	ctx.lr = 0x881004DC;
	sub_881EE8E8(ctx, base);
loc_881004DC:
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_881004EC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fa390
	ctx.lr = 0x881004F8;
	sub_880FA390(ctx, base);
loc_881004F8:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x881004F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x881005dc
	if (!ctx.cr6.gt) goto loc_881005DC;
loc_88100508:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x88100508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8810052c
	if (ctx.cr6.eq) goto loc_8810052C;
	// bl 0x880daef0
	ctx.lr = 0x88100528;
	sub_880DAEF0(ctx, base);
loc_88100528:
	// b 0x88100530
	goto loc_88100530;
loc_8810052C:
	// bl 0x880fac68
	ctx.lr = 0x88100530;
	sub_880FAC68(ctx, base);
loc_88100530:
	// lwz r11,1536(r31)
	ctx.current_instruction = 0x88100530;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88100554
	if (ctx.cr6.eq) goto loc_88100554;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8810053C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,10,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x88071ae8
	ctx.lr = 0x88100554;
	sub_88071AE8(ctx, base);
loc_88100554:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r18,124(r1)
	ctx.current_instruction = 0x88100558;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r17,132(r1)
	ctx.current_instruction = 0x88100560;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r22,116(r1)
	ctx.current_instruction = 0x88100568;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r19,108(r1)
	ctx.current_instruction = 0x88100570;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r16,140(r1)
	ctx.current_instruction = 0x88100578;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r16.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r23,100(r1)
	ctx.current_instruction = 0x88100580;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r20,92(r1)
	ctx.current_instruction = 0x88100588;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,84(r1)
	ctx.current_instruction = 0x88100590;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x880ffbe8
	ctx.lr = 0x88100598;
	sub_880FFBE8(ctx, base);
loc_88100598:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88100598;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,276
	ctx.r29.s64 = ctx.r29.s64 + 276;
	// addi r27,r27,1536
	ctx.r27.s64 = ctx.r27.s64 + 1536;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// addi r25,r25,768
	ctx.r25.s64 = ctx.r25.s64 + 768;
	// addi r24,r24,768
	ctx.r24.s64 = ctx.r24.s64 + 768;
	// addi r23,r23,768
	ctx.r23.s64 = ctx.r23.s64 + 768;
	// addi r22,r22,768
	ctx.r22.s64 = ctx.r22.s64 + 768;
	// addi r21,r21,12
	ctx.r21.s64 = ctx.r21.s64 + 12;
	// addi r20,r20,12
	ctx.r20.s64 = ctx.r20.s64 + 12;
	// addi r19,r19,12
	ctx.r19.s64 = ctx.r19.s64 + 12;
	// addi r18,r18,12
	ctx.r18.s64 = ctx.r18.s64 + 12;
	// addi r17,r17,1536
	ctx.r17.s64 = ctx.r17.s64 + 1536;
	// addi r16,r16,48
	ctx.r16.s64 = ctx.r16.s64 + 48;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88100508
	if (ctx.cr6.lt) goto loc_88100508;
loc_881005DC:
	// lwz r11,2272(r31)
	ctx.current_instruction = 0x881005DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881005f4
	if (ctx.cr6.eq) goto loc_881005F4;
	// lwz r11,2288(r31)
	ctx.current_instruction = 0x881005E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2288);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2280(r31)
	ctx.current_instruction = 0x881005F0;
	REX_STORE_U32(ctx.r31.u32 + 2280, ctx.r11.u32);
loc_881005F4:
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x881005F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x881005F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881005FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x88100610
	if (!ctx.cr6.eq) goto loc_88100610;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x88100620
	goto loc_88100620;
loc_88100610:
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r30,r10,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_88100620:
	// lwz r11,144(r1)
	ctx.current_instruction = 0x88100620;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,6732(r31)
	ctx.current_instruction = 0x88100624;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6732);
	// subf r5,r11,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r11.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8810063c
	if (!ctx.cr6.gt) goto loc_8810063C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6736(r31)
	ctx.current_instruction = 0x88100638;
	REX_STORE_U32(ctx.r31.u32 + 6736, ctx.r11.u32);
loc_8810063C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c00e8
	ctx.lr = 0x88100648;
	sub_880C00E8(ctx, base);
loc_88100648:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88100648;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r30,144(r1)
	ctx.current_instruction = 0x88100650;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r14,r14,4
	ctx.r14.s64 = ctx.r14.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88100420
	if (ctx.cr6.lt) goto loc_88100420;
loc_88100660:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88108F98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88108F98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88108F98) {
			switch (rex_dispatch_address) {
				case 0x88108FA0:
				case 0x88109020:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88108F98;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88108FA0: goto loc_88108FA0;
		case 0x88109020: goto loc_88109020;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88108FA0;
	__savegprlr_28(ctx, base);
loc_88108FA0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88108FA0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,19888(r3)
	ctx.current_instruction = 0x88108FA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 19888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,29684(r3)
	ctx.current_instruction = 0x88108FAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 29684);
	// mulli r10,r9,1216
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1216));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// ble cr6,0x8810903c
	if (!ctx.cr6.gt) goto loc_8810903C;
	// addi r30,r31,19628
	ctx.r30.s64 = ctx.r31.s64 + 19628;
	// li r28,511
	ctx.r28.s64 = 511;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88108FCC:
	// lwz r11,19884(r31)
	ctx.current_instruction = 0x88108FCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19884);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bge cr6,0x8810900c
	if (!ctx.cr6.lt) goto loc_8810900C;
	// addi r10,r11,953
	ctx.r10.s64 = ctx.r11.s64 + 953;
	// addi r7,r11,4394
	ctx.r7.s64 = ctx.r11.s64 + 4394;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r9,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r9.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88109000:
	// stwu r11,4(r10)
	ctx.current_instruction = 0x88109000;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x88109000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88109000;
loc_8810900C:
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r28,19884(r31)
	ctx.current_instruction = 0x88109010;
	REX_STORE_U32(ctx.r31.u32 + 19884, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88052d90
	ctx.lr = 0x88109020;
	sub_88052D90(ctx, base);
loc_88109020:
	// rotlwi r9,r29,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// stw r29,19888(r31)
	ctx.current_instruction = 0x88109024;
	REX_STORE_U32(ctx.r31.u32 + 19888, ctx.r29.u32);
	// mulli r11,r9,1216
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1216));
	// lwz r10,29684(r31)
	ctx.current_instruction = 0x8810902C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 29684);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bgt cr6,0x88108fcc
	if (ctx.cr6.gt) goto loc_88108FCC;
loc_8810903C:
	// lwz r11,19888(r31)
	ctx.current_instruction = 0x8810903C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19888);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,19888(r31)
	ctx.current_instruction = 0x88109044;
	REX_STORE_U32(ctx.r31.u32 + 19888, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810AB28) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810AB28;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810AB28) {
			switch (rex_dispatch_address) {
				case 0x8810AB30:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810AB28;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x8810AB30: goto loc_8810AB30;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x8810AB30;
	__savegprlr_23(ctx, base);
loc_8810AB30:
	// mullw r11,r5,r7
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// lwz r31,100(r1)
	ctx.current_instruction = 0x8810AB34;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r27,92(r1)
	ctx.current_instruction = 0x8810AB38;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r25,r4,5,0,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r24,r5,5,0,26
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8810adc4
	if (!ctx.cr6.eq) goto loc_8810ADC4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8810ab78
	if (ctx.cr6.eq) goto loc_8810AB78;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r31,r9
	ctx.current_instruction = 0x8810AB64;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// lhzx r31,r31,r10
	ctx.current_instruction = 0x8810AB68;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r28,r31
	ctx.r28.s64 = ctx.r31.s16;
	// b 0x8810abd8
	goto loc_8810ABD8;
loc_8810AB78:
	// lwz r31,720(r3)
	ctx.current_instruction = 0x8810AB78;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x8810abd0
	if (!ctx.cr6.eq) goto loc_8810ABD0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8810abd0
	if (!ctx.cr6.gt) goto loc_8810ABD0;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// lwz r5,84(r1)
	ctx.current_instruction = 0x8810AB90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8810AB98:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r9
	ctx.current_instruction = 0x8810AB9C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// stw r4,0(r5)
	ctx.current_instruction = 0x8810ABA4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// lhzx r3,r11,r10
	ctx.current_instruction = 0x8810ABA8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
loc_8810ABB0:
	// stw r11,0(r27)
	ctx.current_instruction = 0x8810ABB0;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.current_instruction = 0x8810ABB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x8810ade0
	if (!ctx.cr6.eq) goto loc_8810ADE0;
	// stw r26,0(r27)
	ctx.current_instruction = 0x8810ABC0;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,0(r5)
	ctx.current_instruction = 0x8810ABC8;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8810ABD0:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8810ABD8:
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r31,r9
	ctx.current_instruction = 0x8810ABE8;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// lhzx r23,r31,r10
	ctx.current_instruction = 0x8810ABEC;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// extsh r29,r23
	ctx.r29.s64 = ctx.r23.s16;
	// blt cr6,0x8810ac58
	if (ctx.cr6.lt) goto loc_8810AC58;
	// beq cr6,0x8810ac2c
	if (ctx.cr6.eq) goto loc_8810AC2C;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x8810ac9c
	if (!ctx.cr6.lt) goto loc_8810AC9C;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// subfc r3,r5,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r4.u64 - ctx.r5.u64;
	// eqv r5,r5,r4
	ctx.r5.u64 = ~(ctx.r5.u64 ^ ctx.r4.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r5,r5,1,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x2;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8810ac9c
	goto loc_8810AC9C;
loc_8810AC2C:
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// subfc r3,r5,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r4.u64 - ctx.r5.u64;
	// eqv r5,r5,r4
	ctx.r5.u64 = ~(ctx.r5.u64 ^ ctx.r4.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r5,r3,31
	ctx.r5.u64 = ctx.r3.u32 & 0x1;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8810ac9c
	goto loc_8810AC9C;
loc_8810AC58:
	// lwz r3,2172(r3)
	ctx.current_instruction = 0x8810AC58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2172);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8810ac6c
	if (!ctx.cr6.eq) goto loc_8810AC6C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8810ac98
	if (ctx.cr6.eq) goto loc_8810AC98;
loc_8810AC6C:
	// xor r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8810ac8c
	if (ctx.cr6.eq) goto loc_8810AC8C;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// blt cr6,0x8810ac90
	if (ctx.cr6.lt) goto loc_8810AC90;
loc_8810AC8C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8810AC90:
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
loc_8810AC98:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8810AC9C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r31,-16384
	ctx.r5.s64 = ctx.r31.s64 + -16384;
	// addi r4,r30,-16384
	ctx.r4.s64 = ctx.r30.s64 + -16384;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r5,r4
	ctx.r5.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lhzx r4,r11,r9
	ctx.current_instruction = 0x8810ACB0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// lhzx r3,r11,r10
	ctx.current_instruction = 0x8810ACB8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// addi r10,r11,-16384
	ctx.r10.s64 = ctx.r11.s64 + -16384;
	// cntlzw r3,r10
	ctx.r3.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8810ad00
	if (!ctx.cr6.gt) goto loc_8810AD00;
	// lwz r5,84(r1)
	ctx.current_instruction = 0x8810ACE4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	ctx.current_instruction = 0x8810ACF0;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r26,0(r27)
	ctx.current_instruction = 0x8810ACF4;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// stw r26,0(r5)
	ctx.current_instruction = 0x8810ACF8;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8810AD00:
	// bne cr6,0x8810ad3c
	if (!ctx.cr6.eq) goto loc_8810AD3C;
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16384, ctx.xer);
	// bne cr6,0x8810ad18
	if (!ctx.cr6.eq) goto loc_8810AD18;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x8810ad3c
	goto loc_8810AD3C;
loc_8810AD18:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x8810ad2c
	if (!ctx.cr6.eq) goto loc_8810AD2C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8810ad3c
	goto loc_8810AD3C;
loc_8810AD2C:
	// cmpwi cr6,r30,16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16384, ctx.xer);
	// bne cr6,0x8810ad3c
	if (!ctx.cr6.eq) goto loc_8810AD3C;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8810AD3C:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8810ad5c
	if (!ctx.cr6.gt) goto loc_8810AD5C;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x8810ad78
	if (ctx.cr6.gt) goto loc_8810AD78;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x8810ad74
	if (ctx.cr6.gt) goto loc_8810AD74;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8810ad78
	goto loc_8810AD78;
loc_8810AD5C:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8810ad6c
	if (!ctx.cr6.gt) goto loc_8810AD6C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8810ad78
	goto loc_8810AD78;
loc_8810AD6C:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8810ad78
	if (!ctx.cr6.gt) goto loc_8810AD78;
loc_8810AD74:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8810AD78:
	// lwz r5,84(r1)
	ctx.current_instruction = 0x8810AD78;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// stw r11,0(r5)
	ctx.current_instruction = 0x8810AD80;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ble cr6,0x8810ada0
	if (!ctx.cr6.gt) goto loc_8810ADA0;
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x8810adbc
	if (ctx.cr6.gt) goto loc_8810ADBC;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8810ada8
	if (!ctx.cr6.gt) goto loc_8810ADA8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8810abb0
	goto loc_8810ABB0;
loc_8810ADA0:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8810adb0
	if (!ctx.cr6.gt) goto loc_8810ADB0;
loc_8810ADA8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8810abb0
	goto loc_8810ABB0;
loc_8810ADB0:
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bgt cr6,0x8810abb0
	if (ctx.cr6.gt) goto loc_8810ABB0;
loc_8810ADBC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8810abb0
	goto loc_8810ABB0;
loc_8810ADC4:
	// lwz r5,84(r1)
	ctx.current_instruction = 0x8810ADC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x8810ab98
	if (ctx.cr6.gt) goto loc_8810AB98;
	// lwz r27,92(r1)
	ctx.current_instruction = 0x8810ADD0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,0(r27)
	ctx.current_instruction = 0x8810ADD8;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// stw r26,0(r5)
	ctx.current_instruction = 0x8810ADDC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
loc_8810ADE0:
	// lwz r9,0(r5)
	ctx.current_instruction = 0x8810ADE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x8810ADE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,-60
	ctx.r6.s64 = -60;
	// add r11,r9,r25
	ctx.r11.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r4,r10,r24
	ctx.r4.u64 = ctx.r10.u64 + ctx.r24.u64;
	// beq cr6,0x8810ae00
	if (ctx.cr6.eq) goto loc_8810AE00;
	// li r6,-28
	ctx.r6.s64 = -28;
loc_8810AE00:
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8810ae24
	if (!ctx.cr6.lt) goto loc_8810AE24;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x8810ae34
	goto loc_8810AE34;
loc_8810AE24:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8810ae38
	if (!ctx.cr6.gt) goto loc_8810AE38;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8810AE34:
	// stw r11,0(r5)
	ctx.current_instruction = 0x8810AE34;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8810AE38:
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8810ae58
	if (!ctx.cr6.lt) goto loc_8810AE58;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8810AE40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r10,0(r27)
	ctx.current_instruction = 0x8810AE50;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8810AE58:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8810ae70
	if (!ctx.cr6.gt) goto loc_8810AE70;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8810AE60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r27)
	ctx.current_instruction = 0x8810AE6C;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_8810AE70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810F4A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8810F4A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810F4A0;
	ctx.current_instruction = 0x8810F4A0;
	// srawi r11,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 31;
	// lwz r10,1572(r3)
	ctx.current_instruction = 0x8810F4A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1572);
	// xor r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// beq cr6,0x8810f524
	if (ctx.cr6.eq) goto loc_8810F524;
	// lwz r8,96(r7)
	ctx.current_instruction = 0x8810F4B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x8810f524
	if (ctx.cr6.gt) goto loc_8810F524;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8810f4dc
	if (!ctx.cr6.eq) goto loc_8810F4DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
loc_8810F4DC:
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8810f504
	if (ctx.cr6.lt) goto loc_8810F504;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x8810F4F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 9;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8810F504:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8810f55c
	if (ctx.cr6.eq) goto loc_8810F55C;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x8810F514;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8810F524:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8810f540
	if (ctx.cr6.lt) goto loc_8810F540;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8810F534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 9;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8810F540:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8810f55c
	if (ctx.cr6.eq) goto loc_8810F55C;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8810F550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8810F55C:
	// lwz r3,4(r5)
	ctx.current_instruction = 0x8810F55C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88111788) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88111788;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88111788) {
			switch (rex_dispatch_address) {
				case 0x88111790:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88111788;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88111790: goto loc_88111790;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88111790;
	__savegprlr_24(ctx, base);
loc_88111790:
	// lwz r11,116(r3)
	ctx.current_instruction = 0x88111790;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// lwz r6,96(r3)
	ctx.current_instruction = 0x88111798;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,120(r3)
	ctx.current_instruction = 0x8811179C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,132(r3)
	ctx.current_instruction = 0x881117A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r31,4(r11)
	ctx.current_instruction = 0x881117AC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r30,r10,r4
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r9,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 1;
	// rlwinm r8,r31,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// divw r29,r8,r6
	ctx.r29.u64 = uint32_t((ctx.r6.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r8.s32 / ctx.r6.s32 : 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r28,r10,r6
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// rotlwi r9,r28,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r8,r29,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// mullw r27,r10,r4
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// andc r26,r6,r11
	ctx.r26.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// andc r25,r31,r9
	ctx.r25.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r30.s64 = temp.s64;
	// twlgei r26,-1
	if (ctx.r26.s32 == -1 || ctx.r26.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r31,r28,r31
	ctx.r31.u64 = uint32_t((ctx.r31.s32 && !(ctx.r28.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r28.s32 / ctx.r31.s32 : 0);
	// twlgei r25,-1
	if (ctx.r25.s32 == -1 || ctx.r25.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// and r6,r8,r29
	ctx.r6.u64 = ctx.r8.u64 & ctx.r29.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// bge cr6,0x881119a4
	if (!ctx.cr6.lt) goto loc_881119A4;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_88111830:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8811192c
	if (!ctx.cr6.gt) goto loc_8811192C;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_88111840:
	// srawi r8,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
	// clrlwi r5,r9,25
	ctx.r5.u64 = ctx.r9.u32 & 0x7F;
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// subfic r7,r5,128
	ctx.xer.ca = ctx.r5.u32 <= 128;
	ctx.r7.u64 = static_cast<uint64_t>(128) - ctx.r5.u64;
	// addi r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 1;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrlwi r28,r9,25
	ctx.r28.u64 = ctx.r9.u32 & 0x7F;
	// lhzx r29,r29,r11
	ctx.current_instruction = 0x88111868;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// clrlwi r27,r9,24
	ctx.r27.u64 = ctx.r9.u32 & 0xFF;
	// lhzx r8,r8,r11
	ctx.current_instruction = 0x88111870;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// mullw r7,r29,r7
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r5,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 7;
	// srawi r8,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
	// sth r5,6(r10)
	ctx.current_instruction = 0x88111888;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r5.u16);
	// subfic r5,r28,128
	ctx.xer.ca = ctx.r28.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r28.u64;
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r25,r8,1,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFF8;
	// addi r29,r7,3
	ctx.r29.s64 = ctx.r7.s64 + 3;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r7,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r24,r7,4
	ctx.r24.s64 = ctx.r7.s64 + 4;
	// lhzx r8,r29,r11
	ctx.current_instruction = 0x881118B4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// lhzx r26,r26,r11
	ctx.current_instruction = 0x881118BC;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// mullw r5,r26,r5
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r5.s32);
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r28,r24,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	// addi r29,r7,2
	ctx.r29.s64 = ctx.r7.s64 + 2;
	// sth r5,10(r10)
	ctx.current_instruction = 0x881118D4;
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r5.u16);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// subfic r8,r27,256
	ctx.xer.ca = ctx.r27.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r27.u64;
	// lhzx r26,r25,r11
	ctx.current_instruction = 0x881118E0;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// lhzx r5,r28,r11
	ctx.current_instruction = 0x881118E4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r25,r7,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r7,r26,r8
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// mullw r5,r5,r27
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// sth r5,4(r10)
	ctx.current_instruction = 0x88111900;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r5.u16);
	// lhzx r5,r25,r11
	ctx.current_instruction = 0x88111904;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// lhzx r7,r29,r11
	ctx.current_instruction = 0x88111908;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// mullw r7,r5,r27
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r7,8(r10)
	ctx.current_instruction = 0x88111920;
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r7.u16);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x88111840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88111840;
loc_8811192C:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x88111998
	if (!ctx.cr6.lt) goto loc_88111998;
	// subf r8,r31,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8811193C:
	// srawi r7,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 6;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi r9,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 6;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r7,1
	ctx.r29.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// lhzx r5,r5,r11
	ctx.current_instruction = 0x88111968;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r28,r9,1,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFF8;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// sth r5,6(r10)
	ctx.current_instruction = 0x88111978;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r5.u16);
	// lhzx r5,r29,r11
	ctx.current_instruction = 0x8811197C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// sth r5,10(r10)
	ctx.current_instruction = 0x88111980;
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r5.u16);
	// lhzx r8,r28,r11
	ctx.current_instruction = 0x88111984;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// sth r8,4(r10)
	ctx.current_instruction = 0x88111988;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// lhzx r7,r7,r11
	ctx.current_instruction = 0x8811198C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// sthu r7,8(r10)
	ctx.current_instruction = 0x88111990;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8811193c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811193C;
loc_88111998:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bne 0x88111830
	if (!ctx.cr0.eq) goto loc_88111830;
loc_881119A4:
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811AD10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811AD10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811AD10) {
			switch (rex_dispatch_address) {
				case 0x8811AD18:
				case 0x8811AD64:
				case 0x8811AD9C:
				case 0x8811ADBC:
				case 0x8811ADDC:
				case 0x8811ADFC:
				case 0x8811AE1C:
				case 0x8811AE50:
				case 0x8811AF1C:
				case 0x8811AF38:
				case 0x8811AF64:
				case 0x8811AFD0:
				case 0x8811AFEC:
				case 0x8811B018:
				case 0x8811B084:
				case 0x8811B0A0:
				case 0x8811B0CC:
				case 0x8811B138:
				case 0x8811B154:
				case 0x8811B180:
				case 0x8811B1EC:
				case 0x8811B208:
				case 0x8811B234:
				case 0x8811B2B4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811AD10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811AD18: goto loc_8811AD18;
		case 0x8811AD64: goto loc_8811AD64;
		case 0x8811AD9C: goto loc_8811AD9C;
		case 0x8811ADBC: goto loc_8811ADBC;
		case 0x8811ADDC: goto loc_8811ADDC;
		case 0x8811ADFC: goto loc_8811ADFC;
		case 0x8811AE1C: goto loc_8811AE1C;
		case 0x8811AE50: goto loc_8811AE50;
		case 0x8811AF1C: goto loc_8811AF1C;
		case 0x8811AF38: goto loc_8811AF38;
		case 0x8811AF64: goto loc_8811AF64;
		case 0x8811AFD0: goto loc_8811AFD0;
		case 0x8811AFEC: goto loc_8811AFEC;
		case 0x8811B018: goto loc_8811B018;
		case 0x8811B084: goto loc_8811B084;
		case 0x8811B0A0: goto loc_8811B0A0;
		case 0x8811B0CC: goto loc_8811B0CC;
		case 0x8811B138: goto loc_8811B138;
		case 0x8811B154: goto loc_8811B154;
		case 0x8811B180: goto loc_8811B180;
		case 0x8811B1EC: goto loc_8811B1EC;
		case 0x8811B208: goto loc_8811B208;
		case 0x8811B234: goto loc_8811B234;
		case 0x8811B2B4: goto loc_8811B2B4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8811AD18;
	__savegprlr_22(ctx, base);
loc_8811AD18:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x8811AD18;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,28(r3)
	ctx.current_instruction = 0x8811AD1C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	ctx.current_instruction = 0x8811AD28;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r22,r4,-24
	ctx.r22.s64 = ctx.r4.s64 + -24;
	// stw r31,96(r1)
	ctx.current_instruction = 0x8811AD30;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,92(r1)
	ctx.current_instruction = 0x8811AD34;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,0(r28)
	ctx.current_instruction = 0x8811AD3C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r22,100(r1)
	ctx.current_instruction = 0x8811AD40;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// sth r31,80(r1)
	ctx.current_instruction = 0x8811AD44;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// sth r31,82(r1)
	ctx.current_instruction = 0x8811AD48;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// sth r31,84(r1)
	ctx.current_instruction = 0x8811AD4C;
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// sth r31,86(r1)
	ctx.current_instruction = 0x8811AD50;
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// sth r31,88(r1)
	ctx.current_instruction = 0x8811AD54;
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// lwz r11,12(r3)
	ctx.current_instruction = 0x8811AD58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8811AD64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811AD64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// cmplwi cr6,r22,10
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 10, ctx.xer);
	// bge cr6,0x8811ad84
	if (!ctx.cr6.lt) goto loc_8811AD84;
loc_8811AD74:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8811AD84:
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88119210
	ctx.lr = 0x8811AD9C;
	sub_88119210(ctx, base);
loc_8811AD9C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88119210
	ctx.lr = 0x8811ADBC;
	sub_88119210(ctx, base);
loc_8811ADBC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88119210
	ctx.lr = 0x8811ADDC;
	sub_88119210(ctx, base);
loc_8811ADDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88119210
	ctx.lr = 0x8811ADFC;
	sub_88119210(ctx, base);
loc_8811ADFC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88119210
	ctx.lr = 0x8811AE1C;
	sub_88119210(ctx, base);
loc_8811AE1C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// lwz r11,4(r28)
	ctx.current_instruction = 0x8811AE24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r26,10
	ctx.r26.s64 = 10;
	// lhz r10,56(r11)
	ctx.current_instruction = 0x8811AE2C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8811ad74
	if (ctx.cr6.gt) goto loc_8811AD74;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r3,224(r28)
	ctx.current_instruction = 0x8811AE40;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 224);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811AE50;
	sub_880CB2C0(ctx, base);
loc_8811AE50:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811AE5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8811AE6C:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x8811AE6C;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8811ae6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811AE6C;
	// lwz r10,4(r28)
	ctx.current_instruction = 0x8811AE74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,92(r1)
	ctx.current_instruction = 0x8811AE78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r11,80(r1)
	ctx.current_instruction = 0x8811AE7C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r29,82(r1)
	ctx.current_instruction = 0x8811AE80;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r27,84(r1)
	ctx.current_instruction = 0x8811AE88;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// rlwinm r7,r29,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r25,86(r1)
	ctx.current_instruction = 0x8811AE90;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// stw r9,76(r10)
	ctx.current_instruction = 0x8811AE94;
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r9.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwinm r6,r27,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r23,88(r1)
	ctx.current_instruction = 0x8811AEA0;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// rlwinm r4,r25,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r23,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r5,92(r1)
	ctx.current_instruction = 0x8811AEB0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r8,0(r5)
	ctx.current_instruction = 0x8811AEB4;
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r8.u16);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811AEB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r7,2(r11)
	ctx.current_instruction = 0x8811AEBC;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8811AEC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r6,4(r10)
	ctx.current_instruction = 0x8811AEC4;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// lwz r8,92(r1)
	ctx.current_instruction = 0x8811AEC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r4,6(r8)
	ctx.current_instruction = 0x8811AECC;
	REX_STORE_U16(ctx.r8.u32 + 6, ctx.r4.u16);
	// lwz r7,92(r1)
	ctx.current_instruction = 0x8811AED0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r9,8(r7)
	ctx.current_instruction = 0x8811AED4;
	REX_STORE_U16(ctx.r7.u32 + 8, ctx.r9.u16);
	// lwz r6,92(r1)
	ctx.current_instruction = 0x8811AED8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,12(r6)
	ctx.current_instruction = 0x8811AEDC;
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r31.u32);
	// lwz r5,92(r1)
	ctx.current_instruction = 0x8811AEE0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,16(r5)
	ctx.current_instruction = 0x8811AEE4;
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r31.u32);
	// lwz r4,92(r1)
	ctx.current_instruction = 0x8811AEE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,20(r4)
	ctx.current_instruction = 0x8811AEEC;
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r31.u32);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811AEF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,24(r11)
	ctx.current_instruction = 0x8811AEF4;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8811AEF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,28(r10)
	ctx.current_instruction = 0x8811AEFC;
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r31.u32);
	// beq cr6,0x8811afac
	if (ctx.cr6.eq) goto loc_8811AFAC;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811AF04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.current_instruction = 0x8811AF10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 224);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// bl 0x880cb2c0
	ctx.lr = 0x8811AF1C;
	sub_880CB2C0(ctx, base);
loc_8811AF1C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811AF24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r11)
	ctx.current_instruction = 0x8811AF30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x88052d90
	ctx.lr = 0x8811AF38;
	sub_88052D90(ctx, base);
loc_8811AF38:
	// addi r31,r30,10
	ctx.r31.s64 = ctx.r30.s64 + 10;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8811ad74
	if (ctx.cr6.gt) goto loc_8811AD74;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811AF44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,12(r11)
	ctx.current_instruction = 0x8811AF5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x881198a8
	ctx.lr = 0x8811AF64;
	sub_881198A8(ctx, base);
loc_8811AF64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// lwz r11,76(r28)
	ctx.current_instruction = 0x8811AF6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 76);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811afac
	if (ctx.cr6.eq) goto loc_8811AFAC;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8811AF7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,12(r10)
	ctx.current_instruction = 0x8811AF88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// ble cr6,0x8811afac
	if (!ctx.cr6.gt) goto loc_8811AFAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8811AF98:
	// lbz r10,2(r11)
	ctx.current_instruction = 0x8811AF98;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x8811AF9C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	ctx.current_instruction = 0x8811AFA0;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ctx.current_instruction = 0x8811AFA4;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8811af98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811AF98;
loc_8811AFAC:
	// clrlwi r31,r29,16
	ctx.r31.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8811b060
	if (ctx.cr6.eq) goto loc_8811B060;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811AFB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.current_instruction = 0x8811AFC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 224);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// bl 0x880cb2c0
	ctx.lr = 0x8811AFD0;
	sub_880CB2C0(ctx, base);
loc_8811AFD0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811AFD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r11)
	ctx.current_instruction = 0x8811AFE4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x88052d90
	ctx.lr = 0x8811AFEC;
	sub_88052D90(ctx, base);
loc_8811AFEC:
	// add r30,r26,r31
	ctx.r30.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8811ad74
	if (ctx.cr6.gt) goto loc_8811AD74;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811AFF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,16(r11)
	ctx.current_instruction = 0x8811B010;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x881198a8
	ctx.lr = 0x8811B018;
	sub_881198A8(ctx, base);
loc_8811B018:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// lwz r11,76(r28)
	ctx.current_instruction = 0x8811B020;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 76);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811b060
	if (ctx.cr6.eq) goto loc_8811B060;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8811B030;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,16(r10)
	ctx.current_instruction = 0x8811B03C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// ble cr6,0x8811b060
	if (!ctx.cr6.gt) goto loc_8811B060;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8811B04C:
	// lbz r10,2(r11)
	ctx.current_instruction = 0x8811B04C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x8811B050;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	ctx.current_instruction = 0x8811B054;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ctx.current_instruction = 0x8811B058;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8811b04c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811B04C;
loc_8811B060:
	// clrlwi r31,r27,16
	ctx.r31.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8811b114
	if (ctx.cr6.eq) goto loc_8811B114;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811B06C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.current_instruction = 0x8811B078;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 224);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// bl 0x880cb2c0
	ctx.lr = 0x8811B084;
	sub_880CB2C0(ctx, base);
loc_8811B084:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811B08C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r11)
	ctx.current_instruction = 0x8811B098;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x88052d90
	ctx.lr = 0x8811B0A0;
	sub_88052D90(ctx, base);
loc_8811B0A0:
	// add r30,r26,r31
	ctx.r30.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8811ad74
	if (ctx.cr6.gt) goto loc_8811AD74;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811B0AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,20(r11)
	ctx.current_instruction = 0x8811B0C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x881198a8
	ctx.lr = 0x8811B0CC;
	sub_881198A8(ctx, base);
loc_8811B0CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// lwz r11,76(r28)
	ctx.current_instruction = 0x8811B0D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 76);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811b114
	if (ctx.cr6.eq) goto loc_8811B114;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8811B0E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,20(r10)
	ctx.current_instruction = 0x8811B0F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// ble cr6,0x8811b114
	if (!ctx.cr6.gt) goto loc_8811B114;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8811B100:
	// lbz r10,2(r11)
	ctx.current_instruction = 0x8811B100;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x8811B104;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	ctx.current_instruction = 0x8811B108;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ctx.current_instruction = 0x8811B10C;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8811b100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811B100;
loc_8811B114:
	// clrlwi r31,r25,16
	ctx.r31.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8811b1c8
	if (ctx.cr6.eq) goto loc_8811B1C8;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811B120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.current_instruction = 0x8811B12C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 224);
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// bl 0x880cb2c0
	ctx.lr = 0x8811B138;
	sub_880CB2C0(ctx, base);
loc_8811B138:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811B140;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,24(r11)
	ctx.current_instruction = 0x8811B14C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x88052d90
	ctx.lr = 0x8811B154;
	sub_88052D90(ctx, base);
loc_8811B154:
	// add r30,r26,r31
	ctx.r30.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8811ad74
	if (ctx.cr6.gt) goto loc_8811AD74;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811B160;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,24(r11)
	ctx.current_instruction = 0x8811B178;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x881198a8
	ctx.lr = 0x8811B180;
	sub_881198A8(ctx, base);
loc_8811B180:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// lwz r11,76(r28)
	ctx.current_instruction = 0x8811B188;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 76);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811b1c8
	if (ctx.cr6.eq) goto loc_8811B1C8;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8811B198;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,24(r10)
	ctx.current_instruction = 0x8811B1A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// ble cr6,0x8811b1c8
	if (!ctx.cr6.gt) goto loc_8811B1C8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8811B1B4:
	// lbz r10,2(r11)
	ctx.current_instruction = 0x8811B1B4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x8811B1B8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	ctx.current_instruction = 0x8811B1BC;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ctx.current_instruction = 0x8811B1C0;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8811b1b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811B1B4;
loc_8811B1C8:
	// clrlwi r31,r23,16
	ctx.r31.u64 = ctx.r23.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8811b27c
	if (ctx.cr6.eq) goto loc_8811B27C;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811B1D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r28)
	ctx.current_instruction = 0x8811B1E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 224);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// bl 0x880cb2c0
	ctx.lr = 0x8811B1EC;
	sub_880CB2C0(ctx, base);
loc_8811B1EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811B1F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r11)
	ctx.current_instruction = 0x8811B200;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x88052d90
	ctx.lr = 0x8811B208;
	sub_88052D90(ctx, base);
loc_8811B208:
	// add r30,r26,r31
	ctx.r30.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8811ad74
	if (ctx.cr6.gt) goto loc_8811AD74;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811B214;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,28(r11)
	ctx.current_instruction = 0x8811B22C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x881198a8
	ctx.lr = 0x8811B234;
	sub_881198A8(ctx, base);
loc_8811B234:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// lwz r11,76(r28)
	ctx.current_instruction = 0x8811B23C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 76);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8811b27c
	if (ctx.cr6.eq) goto loc_8811B27C;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8811B24C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r31,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,28(r10)
	ctx.current_instruction = 0x8811B258;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// ble cr6,0x8811b27c
	if (!ctx.cr6.gt) goto loc_8811B27C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8811B268:
	// lbz r10,2(r11)
	ctx.current_instruction = 0x8811B268;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x8811B26C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	ctx.current_instruction = 0x8811B270;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ctx.current_instruction = 0x8811B274;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8811b268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811B268;
loc_8811B27C:
	// lwz r11,4(r28)
	ctx.current_instruction = 0x8811B27C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lhz r10,56(r11)
	ctx.current_instruction = 0x8811B280;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 56);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,56(r11)
	ctx.current_instruction = 0x8811B288;
	REX_STORE_U16(ctx.r11.u32 + 56, ctx.r9.u16);
	// lwz r7,96(r1)
	ctx.current_instruction = 0x8811B28C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r6,r7,r22
	ctx.r6.u64 = ctx.r22.u64 - ctx.r7.u64;
	// subf. r31,r26,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8811b2cc
	if (ctx.cr0.eq) goto loc_8811B2CC;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8811B29C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811B2A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811B2B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811B2B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811b2cc
	if (ctx.cr6.lt) goto loc_8811B2CC;
	// ld r11,8(r28)
	ctx.current_instruction = 0x8811B2BC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 8);
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r28)
	ctx.current_instruction = 0x8811B2C8;
	REX_STORE_U64(ctx.r28.u32 + 8, ctx.r11.u64);
loc_8811B2CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125E70) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88125E70);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125E70;
	ctx.current_instruction = 0x88125E70;
	// lis r4,8356
	ctx.r4.s64 = 547618816;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// b 0x88050358
	sub_88050358(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125F54) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88125F54);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125F54;
	ctx.current_instruction = 0x88125F54;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881265A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881265A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881265A0) {
			switch (rex_dispatch_address) {
				case 0x881265A8:
				case 0x881265F8:
				case 0x88126610:
				case 0x88126620:
				case 0x88126638:
				case 0x88126648:
				case 0x88126660:
				case 0x8812666C:
				case 0x88126684:
				case 0x88126690:
				case 0x881266A8:
				case 0x881267CC:
				case 0x881267F4:
				case 0x8812680C:
				case 0x88126824:
				case 0x88126838:
				case 0x88126840:
				case 0x88126858:
				case 0x88126870:
				case 0x88126888:
				case 0x881268A0:
				case 0x881268CC:
				case 0x881268EC:
				case 0x8812690C:
				case 0x88126920:
				case 0x88126938:
				case 0x88126950:
				case 0x88126974:
				case 0x8812698C:
				case 0x881269A4:
				case 0x881269BC:
				case 0x88126A70:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881265A0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881265A8: goto loc_881265A8;
		case 0x881265F8: goto loc_881265F8;
		case 0x88126610: goto loc_88126610;
		case 0x88126620: goto loc_88126620;
		case 0x88126638: goto loc_88126638;
		case 0x88126648: goto loc_88126648;
		case 0x88126660: goto loc_88126660;
		case 0x8812666C: goto loc_8812666C;
		case 0x88126684: goto loc_88126684;
		case 0x88126690: goto loc_88126690;
		case 0x881266A8: goto loc_881266A8;
		case 0x881267CC: goto loc_881267CC;
		case 0x881267F4: goto loc_881267F4;
		case 0x8812680C: goto loc_8812680C;
		case 0x88126824: goto loc_88126824;
		case 0x88126838: goto loc_88126838;
		case 0x88126840: goto loc_88126840;
		case 0x88126858: goto loc_88126858;
		case 0x88126870: goto loc_88126870;
		case 0x88126888: goto loc_88126888;
		case 0x881268A0: goto loc_881268A0;
		case 0x881268CC: goto loc_881268CC;
		case 0x881268EC: goto loc_881268EC;
		case 0x8812690C: goto loc_8812690C;
		case 0x88126920: goto loc_88126920;
		case 0x88126938: goto loc_88126938;
		case 0x88126950: goto loc_88126950;
		case 0x88126974: goto loc_88126974;
		case 0x8812698C: goto loc_8812698C;
		case 0x881269A4: goto loc_881269A4;
		case 0x881269BC: goto loc_881269BC;
		case 0x88126A70: goto loc_88126A70;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881265A8;
	__savegprlr_28(ctx, base);
loc_881265A8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881265A8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,110(r3)
	ctx.current_instruction = 0x881265AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// li r9,-1
	ctx.r9.s64 = -1;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addi r30,r3,664
	ctx.r30.s64 = ctx.r3.s64 + 664;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r3,720(r31)
	ctx.current_instruction = 0x881265E8;
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	ctx.current_instruction = 0x881265F0;
	REX_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x88140300
	ctx.lr = 0x881265F8;
	sub_88140300(ctx, base);
loc_881265F8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88126a84
	if (ctx.cr6.lt) goto loc_88126A84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88140488
	ctx.lr = 0x88126610;
	sub_88140488(ctx, base);
loc_88126610:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88126610;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r30,r11,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88125e60
	ctx.lr = 0x88126620;
	sub_88125E60(ctx, base);
loc_88126620:
	// stw r3,356(r31)
	ctx.current_instruction = 0x88126620;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126a7c
	if (ctx.cr6.eq) goto loc_88126A7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88126638;
	sub_88052D90(ctx, base);
loc_88126638:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88126638;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r29,r11,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88125e60
	ctx.lr = 0x88126648;
	sub_88125E60(ctx, base);
loc_88126648:
	// stw r3,360(r31)
	ctx.current_instruction = 0x88126648;
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126a7c
	if (ctx.cr6.eq) goto loc_88126A7C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88126660;
	sub_88052D90(ctx, base);
loc_88126660:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88125e80
	ctx.lr = 0x8812666C;
	sub_88125E80(ctx, base);
loc_8812666C:
	// stw r3,364(r31)
	ctx.current_instruction = 0x8812666C;
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126a7c
	if (ctx.cr6.eq) goto loc_88126A7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88126684;
	sub_88052D90(ctx, base);
loc_88126684:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88125e80
	ctx.lr = 0x88126690;
	sub_88125E80(ctx, base);
loc_88126690:
	// stw r3,368(r31)
	ctx.current_instruction = 0x88126690;
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126a7c
	if (ctx.cr6.eq) goto loc_88126A7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x881266A8;
	sub_88052D90(ctx, base);
loc_881266A8:
	// lwz r7,448(r31)
	ctx.current_instruction = 0x881266A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r30,4
	ctx.r30.s64 = 4;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88126760
	if (ctx.cr6.eq) goto loc_88126760;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881266C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x88126704
	if (!ctx.cr6.gt) goto loc_88126704;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881266E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
loc_881266F4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x881266f4
	if (ctx.cr6.gt) goto loc_881266F4;
loc_88126704:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88126708:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x88126708
	if (ctx.cr6.gt) goto loc_88126708;
	// lwz r10,456(r31)
	ctx.current_instruction = 0x88126718;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x88126744
	if (ctx.cr6.lt) goto loc_88126744;
loc_88126730:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88126744:
	// slw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r10,34(r31)
	ctx.current_instruction = 0x88126748;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// mulld r8,r9,r10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r10.u64);
	// rldicr r6,r8,2,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// cmpd cr6,r6,r28
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r28.s64, ctx.xer);
	// bgt cr6,0x88126730
	if (ctx.cr6.gt) goto loc_88126730;
loc_88126760:
	// lwz r11,460(r31)
	ctx.current_instruction = 0x88126760;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88126768;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x8812678c
	if (ctx.cr6.eq) goto loc_8812678C;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,456(r31)
	ctx.current_instruction = 0x88126778;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// sraw r11,r6,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// b 0x881267b8
	goto loc_881267B8;
loc_8812678C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881267ac
	if (ctx.cr6.eq) goto loc_881267AC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,456(r31)
	ctx.current_instruction = 0x88126798;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// slw r11,r6,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// b 0x881267b8
	goto loc_881267B8;
loc_881267AC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
loc_881267B8:
	// lhz r10,34(r31)
	ctx.current_instruction = 0x881267B8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,32
	ctx.r4.s64 = 32;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e80
	ctx.lr = 0x881267CC;
	sub_88125E80(ctx, base);
loc_881267CC:
	// stw r3,324(r31)
	ctx.current_instruction = 0x881267CC;
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126a7c
	if (ctx.cr6.eq) goto loc_88126A7C;
	// lwz r11,460(r31)
	ctx.current_instruction = 0x881267D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88126800
	if (ctx.cr6.eq) goto loc_88126800;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881267E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e80
	ctx.lr = 0x881267F4;
	sub_88125E80(ctx, base);
loc_881267F4:
	// stw r3,328(r31)
	ctx.current_instruction = 0x881267F4;
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126a7c
	if (ctx.cr6.eq) goto loc_88126A7C;
loc_88126800:
	// lwz r11,244(r31)
	ctx.current_instruction = 0x88126800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x8812680C;
	sub_88125E60(ctx, base);
loc_8812680C:
	// stw r3,340(r31)
	ctx.current_instruction = 0x8812680C;
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126a7c
	if (ctx.cr6.eq) goto loc_88126A7C;
	// lwz r11,244(r31)
	ctx.current_instruction = 0x88126818;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// mulli r3,r11,116
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// bl 0x88125e60
	ctx.lr = 0x88126824;
	sub_88125E60(ctx, base);
loc_88126824:
	// stw r3,344(r31)
	ctx.current_instruction = 0x88126824;
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126a7c
	if (ctx.cr6.eq) goto loc_88126A7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812d038
	ctx.lr = 0x88126838;
	sub_8812D038(ctx, base);
loc_88126838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88129700
	ctx.lr = 0x88126840;
	sub_88129700(ctx, base);
loc_88126840:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88126a84
	if (ctx.cr6.lt) goto loc_88126A84;
	// lwz r11,244(r31)
	ctx.current_instruction = 0x8812684C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x88126858;
	sub_88125E60(ctx, base);
loc_88126858:
	// stw r3,352(r31)
	ctx.current_instruction = 0x88126858;
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126a7c
	if (ctx.cr6.eq) goto loc_88126A7C;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88126864;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mulli r3,r11,112
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// bl 0x88125e60
	ctx.lr = 0x88126870;
	sub_88125E60(ctx, base);
loc_88126870:
	// stw r3,332(r31)
	ctx.current_instruction = 0x88126870;
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126a7c
	if (ctx.cr6.eq) goto loc_88126A7C;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x8812687C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mulli r3,r11,112
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// bl 0x88125e60
	ctx.lr = 0x88126888;
	sub_88125E60(ctx, base);
loc_88126888:
	// stw r3,336(r31)
	ctx.current_instruction = 0x88126888;
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88126a7c
	if (ctx.cr6.eq) goto loc_88126A7C;
	// lwz r11,244(r31)
	ctx.current_instruction = 0x88126894;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x881268A0;
	sub_88125E60(ctx, base);
loc_881268A0:
	// stw r3,412(r31)
	ctx.current_instruction = 0x881268A0;
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881268bc
	if (!ctx.cr6.eq) goto loc_881268BC;
loc_881268AC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881268BC:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x881268BC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.current_instruction = 0x881268C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x88125e60
	ctx.lr = 0x881268CC;
	sub_88125E60(ctx, base);
loc_881268CC:
	// stw r3,416(r31)
	ctx.current_instruction = 0x881268CC;
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881268ac
	if (ctx.cr6.eq) goto loc_881268AC;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x881268D8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.current_instruction = 0x881268DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x881268EC;
	sub_88125E60(ctx, base);
loc_881268EC:
	// stw r3,424(r31)
	ctx.current_instruction = 0x881268EC;
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881268ac
	if (ctx.cr6.eq) goto loc_881268AC;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x881268F8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.current_instruction = 0x881268FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x8812690C;
	sub_88125E60(ctx, base);
loc_8812690C:
	// stw r3,420(r31)
	ctx.current_instruction = 0x8812690C;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881268ac
	if (ctx.cr6.eq) goto loc_881268AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88129c60
	ctx.lr = 0x88126920;
	sub_88129C60(ctx, base);
loc_88126920:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88126a84
	if (ctx.cr6.lt) goto loc_88126A84;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x8812692C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x88125e60
	ctx.lr = 0x88126938;
	sub_88125E60(ctx, base);
loc_88126938:
	// stw r3,552(r31)
	ctx.current_instruction = 0x88126938;
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881268ac
	if (ctx.cr6.eq) goto loc_881268AC;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88126944;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x88125e60
	ctx.lr = 0x88126950;
	sub_88125E60(ctx, base);
loc_88126950:
	// stw r3,556(r31)
	ctx.current_instruction = 0x88126950;
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881268ac
	if (ctx.cr6.eq) goto loc_881268AC;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x8812695C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x88126998
	if (!ctx.cr6.gt) goto loc_88126998;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88126968;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x88125e60
	ctx.lr = 0x88126974;
	sub_88125E60(ctx, base);
loc_88126974:
	// stw r3,560(r31)
	ctx.current_instruction = 0x88126974;
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881268ac
	if (ctx.cr6.eq) goto loc_881268AC;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88126980;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x88125e60
	ctx.lr = 0x8812698C;
	sub_88125E60(ctx, base);
loc_8812698C:
	// stw r3,564(r31)
	ctx.current_instruction = 0x8812698C;
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881268ac
	if (ctx.cr6.eq) goto loc_881268AC;
loc_88126998:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88126998;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x88125e60
	ctx.lr = 0x881269A4;
	sub_88125E60(ctx, base);
loc_881269A4:
	// stw r3,584(r31)
	ctx.current_instruction = 0x881269A4;
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881268ac
	if (ctx.cr6.eq) goto loc_881268AC;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x881269B0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x88125e60
	ctx.lr = 0x881269BC;
	sub_88125E60(ctx, base);
loc_881269BC:
	// stw r3,740(r31)
	ctx.current_instruction = 0x881269BC;
	REX_STORE_U32(ctx.r31.u32 + 740, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881268ac
	if (ctx.cr6.eq) goto loc_881268AC;
	// lwz r11,280(r31)
	ctx.current_instruction = 0x881269C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88126a84
	if (!ctx.cr6.eq) goto loc_88126A84;
	// lwz r11,436(r31)
	ctx.current_instruction = 0x881269D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88126a84
	if (!ctx.cr6.eq) goto loc_88126A84;
	// lwz r11,448(r31)
	ctx.current_instruction = 0x881269E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88126a5c
	if (ctx.cr6.eq) goto loc_88126A5C;
	// lwz r8,256(r31)
	ctx.current_instruction = 0x881269EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x88126a10
	if (!ctx.cr6.gt) goto loc_88126A10;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_88126A00:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x88126a00
	if (ctx.cr6.gt) goto loc_88126A00;
loc_88126A10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_88126A14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x88126a14
	if (ctx.cr6.gt) goto loc_88126A14;
	// lwz r10,456(r31)
	ctx.current_instruction = 0x88126A24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x88126730
	if (!ctx.cr6.lt) goto loc_88126730;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lhz r10,34(r31)
	ctx.current_instruction = 0x88126A40;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// sld r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r11.u8 & 0x7F));
	// mulld r7,r8,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r10.u64);
	// rldicr r6,r7,2,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// cmpd cr6,r6,r28
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r28.s64, ctx.xer);
	// bgt cr6,0x88126730
	if (ctx.cr6.gt) goto loc_88126730;
loc_88126A5C:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88126A5C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r10,256(r31)
	ctx.current_instruction = 0x88126A60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x88126A70;
	sub_88125E60(ctx, base);
loc_88126A70:
	// stw r3,436(r31)
	ctx.current_instruction = 0x88126A70;
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88126a84
	if (!ctx.cr6.eq) goto loc_88126A84;
loc_88126A7C:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
loc_88126A84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88138E48) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88138E48);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88138E48;
	ctx.current_instruction = 0x88138E48;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88138E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,588(r11)
	ctx.current_instruction = 0x88138E4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 588);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-29368
	ctx.r8.s64 = ctx.r10.s64 + -29368;
	// stw r9,516(r3)
	ctx.current_instruction = 0x88138E64;
	REX_STORE_U32(ctx.r3.u32 + 516, ctx.r9.u32);
	// stw r8,484(r11)
	ctx.current_instruction = 0x88138E68;
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881392F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881392F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881392F0) {
			switch (rex_dispatch_address) {
				case 0x881392F8:
				case 0x88139378:
				case 0x88139398:
				case 0x88139460:
				case 0x881394AC:
				case 0x881396F8:
				case 0x88139754:
				case 0x881397BC:
				case 0x88139830:
				case 0x881398C0:
				case 0x881398E0:
				case 0x88139940:
				case 0x881399BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881392F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881392F8: goto loc_881392F8;
		case 0x88139378: goto loc_88139378;
		case 0x88139398: goto loc_88139398;
		case 0x88139460: goto loc_88139460;
		case 0x881394AC: goto loc_881394AC;
		case 0x881396F8: goto loc_881396F8;
		case 0x88139754: goto loc_88139754;
		case 0x881397BC: goto loc_881397BC;
		case 0x88139830: goto loc_88139830;
		case 0x881398C0: goto loc_881398C0;
		case 0x881398E0: goto loc_881398E0;
		case 0x88139940: goto loc_88139940;
		case 0x881399BC: goto loc_881399BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x881392F8;
	__savegprlr_17(ctx, base);
loc_881392F8:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x881392F8;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.current_instruction = 0x881392FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r30,24(r4)
	ctx.current_instruction = 0x88139304;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r24,0(r3)
	ctx.current_instruction = 0x8813930C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r28,260(r3)
	ctx.current_instruction = 0x88139314;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r31,r3,224
	ctx.r31.s64 = ctx.r3.s64 + 224;
	// lwz r29,264(r3)
	ctx.current_instruction = 0x8813931C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// li r26,23
	ctx.r26.s64 = 23;
	// lwz r25,256(r3)
	ctx.current_instruction = 0x88139324;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// lwz r27,252(r3)
	ctx.current_instruction = 0x8813932C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lwz r23,272(r3)
	ctx.current_instruction = 0x88139334;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r22,268(r3)
	ctx.current_instruction = 0x88139338;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// bgt cr6,0x881399f4
	if (ctx.cr6.gt) goto loc_881399F4;
	// li r18,1
	ctx.r18.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881393b8
	if (ctx.cr6.eq) goto loc_881393B8;
	// bdz 0x881399f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_881399F4;
	// bdz 0x881399f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_881399F4;
	// bdz 0x881399f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_881399F4;
	// bdz 0x88139368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88139368;
	// bdz 0x88139734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88139734;
	// b 0x8813991c
	goto loc_8813991C;
loc_88139368:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c528
	ctx.lr = 0x88139378;
	sub_8812C528(ctx, base);
loc_88139378:
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88139384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x881363c0
	ctx.lr = 0x88139398;
	sub_881363C0(ctx, base);
loc_88139398:
	// stw r17,56(r21)
	ctx.current_instruction = 0x88139398;
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r17.u32);
	// li r26,23
	ctx.r26.s64 = 23;
	// lwz r28,36(r31)
	ctx.current_instruction = 0x881393A0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r29,40(r31)
	ctx.current_instruction = 0x881393A4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r25,32(r31)
	ctx.current_instruction = 0x881393A8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r27,28(r31)
	ctx.current_instruction = 0x881393AC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r23,48(r31)
	ctx.current_instruction = 0x881393B0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r22,44(r31)
	ctx.current_instruction = 0x881393B4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
loc_881393B8:
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 23, ctx.xer);
	// bge cr6,0x881394dc
	if (!ctx.cr6.lt) goto loc_881394DC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x881393f8
	if (ctx.cr6.eq) goto loc_881393F8;
	// subfic r11,r29,32
	ctx.xer.ca = ctx.r29.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r29.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x881393d8
	if (ctx.cr6.lt) goto loc_881393D8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881393D8:
	// subf r23,r11,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r11.u64;
	// slw r9,r28,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// slw r10,r18,r23
	ctx.r10.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r23.u8 & 0x3F));
	// srw r8,r22,r23
	ctx.r8.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r23.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// or r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r22,r7,r22
	ctx.r22.u64 = ctx.r7.u64 & ctx.r22.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_881393F8:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// lwz r10,84(r31)
	ctx.current_instruction = 0x881393FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r9,r11,5216
	ctx.r9.s64 = ctx.r11.s64 + 5216;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88139440
	if (!ctx.cr6.eq) goto loc_88139440;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// bgt cr6,0x8813947c
	if (ctx.cr6.gt) goto loc_8813947C;
loc_88139414:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8813947c
	if (ctx.cr6.eq) goto loc_8813947C;
	// lbz r11,0(r27)
	ctx.current_instruction = 0x8813941C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// or r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// ble cr6,0x88139414
	if (!ctx.cr6.gt) goto loc_88139414;
	// b 0x8813947c
	goto loc_8813947C;
loc_88139440:
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// bgt cr6,0x8813947c
	if (ctx.cr6.gt) goto loc_8813947C;
loc_88139448:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8813947c
	if (ctx.cr6.eq) goto loc_8813947C;
	// lwz r11,84(r31)
	ctx.current_instruction = 0x88139450;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lbz r3,0(r27)
	ctx.current_instruction = 0x88139454;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88139460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88139460:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// rlwimi r3,r28,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// ble cr6,0x88139448
	if (!ctx.cr6.gt) goto loc_88139448;
loc_8813947C:
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 23, ctx.xer);
	// bge cr6,0x881394dc
	if (!ctx.cr6.lt) goto loc_881394DC;
	// stw r28,36(r31)
	ctx.current_instruction = 0x88139484;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r29,40(r31)
	ctx.current_instruction = 0x8813948C;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,32(r31)
	ctx.current_instruction = 0x88139494;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,28(r31)
	ctx.current_instruction = 0x8813949C;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r23,48(r31)
	ctx.current_instruction = 0x881394A0;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// stw r22,44(r31)
	ctx.current_instruction = 0x881394A4;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r22.u32);
	// bl 0x8812c398
	ctx.lr = 0x881394AC;
	sub_8812C398(ctx, base);
loc_881394AC:
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r29,40(r31)
	ctx.current_instruction = 0x881394B8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r28,36(r31)
	ctx.current_instruction = 0x881394BC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r25,32(r31)
	ctx.current_instruction = 0x881394C0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 23, ctx.xer);
	// lwz r27,28(r31)
	ctx.current_instruction = 0x881394C8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r23,48(r31)
	ctx.current_instruction = 0x881394CC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r22,44(r31)
	ctx.current_instruction = 0x881394D0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bge cr6,0x881394dc
	if (!ctx.cr6.lt) goto loc_881394DC;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_881394DC:
	// subf r11,r26,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r26.u64;
	// subfic r10,r26,32
	ctx.xer.ca = ctx.r26.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r26.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r28,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r8.u8 & 0x3F));
	// slw r8,r7,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r8,3,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x6;
	// lhzux r11,r30,r6
	ctx.current_instruction = 0x881394F4;
	ea = ctx.r30.u32 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r5,r11,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r9,r8,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x3;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x88139514;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x88139534;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x88139554;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x88139574;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x88139594;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x881395B4;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x881395D4;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x881395F4;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x88139614;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x88139634;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x88139654;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ctx.current_instruction = 0x88139674;
	ea = ctx.r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r10
	ctx.current_instruction = 0x88139690;
	ea = ctx.r30.u32 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// rlwinm r9,r11,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881396a8
	if (!ctx.cr6.eq) goto loc_881396A8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_881396A8:
	// rlwinm r4,r11,22,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1F;
	// clrlwi r26,r11,22
	ctx.r26.u64 = ctx.r11.u32 & 0x3FF;
	// stw r4,80(r1)
	ctx.current_instruction = 0x881396B0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r26,1020
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1020, ctx.xer);
	// blt cr6,0x881396cc
	if (ctx.cr6.lt) goto loc_881396CC;
	// clrlwi r11,r26,30
	ctx.r11.u64 = ctx.r26.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r26,r10,r30
	ctx.current_instruction = 0x881396C8;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
loc_881396CC:
	// slw r30,r8,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// stw r28,36(r31)
	ctx.current_instruction = 0x881396D0;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r29,40(r31)
	ctx.current_instruction = 0x881396D4;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// stw r25,32(r31)
	ctx.current_instruction = 0x881396DC;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r27,28(r31)
	ctx.current_instruction = 0x881396E0;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r23,48(r31)
	ctx.current_instruction = 0x881396E4;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// stw r22,44(r31)
	ctx.current_instruction = 0x881396E8;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r22.u32);
	// bge cr6,0x8813970c
	if (!ctx.cr6.lt) goto loc_8813970C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c818
	ctx.lr = 0x881396F8;
	sub_8812C818(ctx, base);
loc_881396F8:
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,40(r31)
	ctx.current_instruction = 0x88139704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// b 0x88139710
	goto loc_88139710;
loc_8813970C:
	// subf r11,r4,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r4.u64;
loc_88139710:
	// stw r11,40(r31)
	ctx.current_instruction = 0x88139710;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x88139774
	if (!ctx.cr6.eq) goto loc_88139774;
	// lwz r11,60(r24)
	ctx.current_instruction = 0x8813971C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,56(r21)
	ctx.current_instruction = 0x88139728;
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r11.u32);
	// ble cr6,0x88139734
	if (!ctx.cr6.gt) goto loc_88139734;
	// stw r17,24(r24)
	ctx.current_instruction = 0x88139730;
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r17.u32);
loc_88139734:
	// lwz r11,60(r24)
	ctx.current_instruction = 0x88139734;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x88139810
	if (ctx.cr6.gt) goto loc_88139810;
	// lwz r11,52(r24)
	ctx.current_instruction = 0x88139740;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8812c528
	ctx.lr = 0x88139754;
	sub_8812C528(ctx, base);
loc_88139754:
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88139760;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,20(r24)
	ctx.current_instruction = 0x88139768;
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// stw r10,56(r21)
	ctx.current_instruction = 0x8813976C;
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r10.u32);
	// b 0x8813991c
	goto loc_8813991C;
loc_88139774:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x881397a8
	if (!ctx.cr6.eq) goto loc_881397A8;
	// stw r17,20(r24)
	ctx.current_instruction = 0x8813977C;
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r17.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lhz r11,202(r24)
	ctx.current_instruction = 0x88139784;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r9,36(r19)
	ctx.current_instruction = 0x8813978C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r19.u32 + 36);
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stw r6,16(r24)
	ctx.current_instruction = 0x8813979C;
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r6.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_881397A8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881397d0
	if (!ctx.cr6.lt) goto loc_881397D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c818
	ctx.lr = 0x881397BC;
	sub_8812C818(ctx, base);
loc_881397BC:
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,40(r31)
	ctx.current_instruction = 0x881397C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// b 0x881397d4
	goto loc_881397D4;
loc_881397D0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_881397D4:
	// stw r11,40(r31)
	ctx.current_instruction = 0x881397D4;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r10,r26,-2
	ctx.r10.s64 = ctx.r26.s64 + -2;
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r9,28(r19)
	ctx.current_instruction = 0x881397E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r19.u32 + 28);
	// lhzx r5,r9,r8
	ctx.current_instruction = 0x881397EC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// stw r5,16(r24)
	ctx.current_instruction = 0x881397F0;
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r5.u32);
	// lwz r4,32(r19)
	ctx.current_instruction = 0x881397F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r19.u32 + 32);
	// lhzx r3,r4,r8
	ctx.current_instruction = 0x881397F8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// stw r7,24(r24)
	ctx.current_instruction = 0x881397FC;
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r7.u32);
	// stw r3,20(r24)
	ctx.current_instruction = 0x88139800;
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r3.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_88139810:
	// lwz r11,24(r24)
	ctx.current_instruction = 0x88139810;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881398cc
	if (!ctx.cr6.eq) goto loc_881398CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// bl 0x88139018
	ctx.lr = 0x88139830;
	sub_88139018(ctx, base);
loc_88139830:
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r17,20(r24)
	ctx.current_instruction = 0x88139840;
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r17.u32);
	// stw r11,24(r24)
	ctx.current_instruction = 0x88139844;
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88139848;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881398b4
	if (ctx.cr6.eq) goto loc_881398B4;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,24(r24)
	ctx.current_instruction = 0x88139860;
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// stw r10,20(r24)
	ctx.current_instruction = 0x88139868;
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8813986C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881398b4
	if (ctx.cr6.eq) goto loc_881398B4;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
loc_88139880:
	// lwz r11,24(r24)
	ctx.current_instruction = 0x88139880;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,20(r24)
	ctx.current_instruction = 0x88139888;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// slw r10,r18,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,24(r24)
	ctx.current_instruction = 0x88139898;
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r9.u32);
	// stw r10,20(r24)
	ctx.current_instruction = 0x8813989C;
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r10.u32);
	// srw r7,r8,r30
	ctx.r7.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r30.u8 & 0x3F));
	// lwz r6,80(r1)
	ctx.current_instruction = 0x881398A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x88139880
	if (!ctx.cr6.eq) goto loc_88139880;
loc_881398B4:
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812c818
	ctx.lr = 0x881398C0;
	sub_8812C818(ctx, base);
loc_881398C0:
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
loc_881398CC:
	// lwz r11,24(r24)
	ctx.current_instruction = 0x881398CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8812c528
	ctx.lr = 0x881398E0;
	sub_8812C528(ctx, base);
loc_881398E0:
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881398EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,20(r24)
	ctx.current_instruction = 0x881398F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r24)
	ctx.current_instruction = 0x88139904;
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x88139908;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,24(r24)
	ctx.current_instruction = 0x88139914;
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r6.u32);
	// stw r9,56(r21)
	ctx.current_instruction = 0x88139918;
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r9.u32);
loc_8813991C:
	// lwz r11,60(r24)
	ctx.current_instruction = 0x8813991C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x881399a8
	if (ctx.cr6.gt) goto loc_881399A8;
	// lwz r11,248(r24)
	ctx.current_instruction = 0x88139928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 248);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8812c528
	ctx.lr = 0x88139940;
	sub_8812C528(ctx, base);
loc_88139940:
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8813994C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r21)
	ctx.current_instruction = 0x88139954;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r11,248(r9)
	ctx.current_instruction = 0x88139960;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 248);
	// stw r8,24(r24)
	ctx.current_instruction = 0x88139964;
	REX_STORE_U32(ctx.r24.u32 + 24, ctx.r8.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// subfic r5,r6,32
	ctx.xer.ca = ctx.r6.u32 <= 32;
	ctx.r5.u64 = static_cast<uint64_t>(32) - ctx.r6.u64;
	// srw r4,r10,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88139978;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r4,r5,1
	ctx.r4.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// stw r4,16(r24)
	ctx.current_instruction = 0x88139998;
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r4.u32);
	// stw r17,56(r21)
	ctx.current_instruction = 0x8813999C;
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r17.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_881399A8:
	// lhz r11,312(r21)
	ctx.current_instruction = 0x881399A8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 312);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x881382b0
	ctx.lr = 0x881399BC;
	sub_881382B0(ctx, base);
loc_881399BC:
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881399f4
	if (ctx.cr6.lt) goto loc_881399F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881399C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,16(r24)
	ctx.current_instruction = 0x881399D0;
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881399f0
	if (!ctx.cr6.eq) goto loc_881399F0;
	// lhz r11,314(r21)
	ctx.current_instruction = 0x881399DC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 314);
	// lwz r10,20(r24)
	ctx.current_instruction = 0x881399E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,20(r24)
	ctx.current_instruction = 0x881399EC;
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r10.u32);
loc_881399F0:
	// stw r17,56(r21)
	ctx.current_instruction = 0x881399F0;
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r17.u32);
loc_881399F4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A248) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8814A248);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A248;
	ctx.current_instruction = 0x8814A248;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x88149158
	sub_88149158(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A2C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814A2C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814A2C8) {
			switch (rex_dispatch_address) {
				case 0x8814A2D0:
				case 0x8814A304:
				case 0x8814A320:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A2C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814A2D0: goto loc_8814A2D0;
		case 0x8814A304: goto loc_8814A304;
		case 0x8814A320: goto loc_8814A320;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814A2D0;
	__savegprlr_28(ctx, base);
loc_8814A2D0:
	// stwu r1,-1152(r1)
	ctx.current_instruction = 0x8814A2D0;
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
	// bl 0x88149950
	ctx.lr = 0x8814A304;
	sub_88149950(ctx, base);
loc_8814A304:
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
	// bl 0x88149d20
	ctx.lr = 0x8814A320;
	sub_88149D20(ctx, base);
loc_8814A320:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A528) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814A528;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814A528) {
			switch (rex_dispatch_address) {
				case 0x8814A530:
				case 0x8814A564:
				case 0x8814A580:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A528;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814A530: goto loc_8814A530;
		case 0x8814A564: goto loc_8814A564;
		case 0x8814A580: goto loc_8814A580;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814A530;
	__savegprlr_28(ctx, base);
loc_8814A530:
	// stwu r1,-1152(r1)
	ctx.current_instruction = 0x8814A530;
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
	// bl 0x88149950
	ctx.lr = 0x8814A564;
	sub_88149950(ctx, base);
loc_8814A564:
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
	// bl 0x8814a0e0
	ctx.lr = 0x8814A580;
	sub_8814A0E0(ctx, base);
loc_8814A580:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814B8F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814B8F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814B8F8) {
			switch (rex_dispatch_address) {
				case 0x8814B900:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814B8F8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814B900: goto loc_8814B900;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8814B900;
	__savegprlr_27(ctx, base);
loc_8814B900:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v55,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vperm128 v4,v63,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v59,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v57,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r28,r27,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v6,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r6,r4
	ctx.r30.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vperm128 v2,v62,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v60,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r29,r3
	ctx.r9.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lvsl v3,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v52,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v51,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v56,v58,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v61,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r28,r5
	ctx.r8.u64 = ctx.r28.u64 + ctx.r5.u64;
	// lvsl v4,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v2,v53,v52,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v49,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v50,v51,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v47,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v9,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v47,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v3,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v46,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v2,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vslh v30,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r29,r6,r5
	ctx.r29.u64 = ctx.r6.u64 + ctx.r5.u64;
	// vslh v29,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r28,r10,r30
	ctx.r28.u64 = ctx.r10.u64 + ctx.r30.u64;
	// vadduhm v28,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// vslh v26,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// vadduhm v25,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v24,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v21,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v30,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v20,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v19,v28,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v18,v26,v8
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v17,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v16,v24,v7
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v15,v23,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v19,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v14,v21,v6
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v0,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v17,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v12,v18,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v15,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v11,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v14,v27
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// stvx128 v0,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x8814baf0
	if (!ctx.cr6.gt) goto loc_8814BAF0;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8814BAB0:
	// lbz r8,0(r11)
	ctx.current_instruction = 0x8814BAB0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r30,r11,r4
	ctx.current_instruction = 0x8814BAB4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbzx r29,r31,r11
	ctx.current_instruction = 0x8814BABC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r3,r30,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r30,r3
	ctx.r8.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r3,r8,r29
	ctx.r3.u64 = ctx.r8.u64 + ctx.r29.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// sth r8,0(r9)
	ctx.current_instruction = 0x8814BADC;
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// sthx r7,r10,r9
	ctx.current_instruction = 0x8814BAE4;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u16);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// bdnz 0x8814bab0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8814BAB0;
loc_8814BAF0:
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881515A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881515A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881515A8) {
			switch (rex_dispatch_address) {
				case 0x881515B0:
				case 0x881516D4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881515A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881515B0: goto loc_881515B0;
		case 0x881516D4: goto loc_881516D4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881515B0;
	__savegprlr_27(ctx, base);
loc_881515B0:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x881515B0;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881515cc
	if (!ctx.cr6.eq) goto loc_881515CC;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881515CC:
	// lwz r7,24688(r11)
	ctx.current_instruction = 0x881515CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24688);
	// lwz r10,712(r7)
	ctx.current_instruction = 0x881515D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881515e8
	if (ctx.cr6.eq) goto loc_881515E8;
loc_881515DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881515E8:
	// lwz r10,22036(r11)
	ctx.current_instruction = 0x881515E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22036);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881515dc
	if (ctx.cr6.eq) goto loc_881515DC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,22032(r11)
	ctx.current_instruction = 0x881515FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22032);
	// lwz r8,20680(r11)
	ctx.current_instruction = 0x88151600;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20680);
	// li r6,3
	ctx.r6.s64 = 3;
	// ori r3,r10,45384
	ctx.r3.u64 = ctx.r10.u64 | 45384;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8815160C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r6,92(r1)
	ctx.current_instruction = 0x88151610;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,80(r1)
	ctx.current_instruction = 0x88151618;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwzx r10,r11,r3
	ctx.current_instruction = 0x8815161C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r10,88(r1)
	ctx.current_instruction = 0x88151620;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x88151664
	if (ctx.cr6.eq) goto loc_88151664;
	// lwz r10,20684(r11)
	ctx.current_instruction = 0x88151628;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20684);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88151664
	if (ctx.cr6.eq) goto loc_88151664;
	// lwz r10,21780(r11)
	ctx.current_instruction = 0x88151634;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21780);
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// lwz r9,21776(r11)
	ctx.current_instruction = 0x8815163C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 21776);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r6,17880
	ctx.r3.s64 = ctx.r6.s64 + 17880;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r3
	ctx.current_instruction = 0x88151658;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r6,96(r1)
	ctx.current_instruction = 0x8815165C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// b 0x8815166c
	goto loc_8815166C;
loc_88151664:
	// lwz r10,288(r11)
	ctx.current_instruction = 0x88151664;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// stw r10,96(r1)
	ctx.current_instruction = 0x88151668;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_8815166C:
	// lwz r10,21864(r11)
	ctx.current_instruction = 0x8815166C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21864);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,21540(r11)
	ctx.current_instruction = 0x88151674;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 21540);
	// lwz r8,21544(r11)
	ctx.current_instruction = 0x88151678;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 21544);
	// lwz r6,21868(r11)
	ctx.current_instruction = 0x8815167C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 21868);
	// lwz r31,21680(r11)
	ctx.current_instruction = 0x88151680;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 21680);
	// lwz r30,3484(r11)
	ctx.current_instruction = 0x88151684;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 3484);
	// lwz r29,3488(r11)
	ctx.current_instruction = 0x88151688;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 3488);
	// lwz r28,21572(r11)
	ctx.current_instruction = 0x8815168C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 21572);
	// lwz r27,21576(r11)
	ctx.current_instruction = 0x88151690;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 21576);
	// lwz r11,22140(r11)
	ctx.current_instruction = 0x88151694;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22140);
	// stw r10,100(r1)
	ctx.current_instruction = 0x88151698;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r4,116(r1)
	ctx.current_instruction = 0x8815169C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r9,104(r1)
	ctx.current_instruction = 0x881516A0;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r5,120(r1)
	ctx.current_instruction = 0x881516A4;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r8,108(r1)
	ctx.current_instruction = 0x881516A8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r6,112(r1)
	ctx.current_instruction = 0x881516AC;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r31,124(r1)
	ctx.current_instruction = 0x881516B0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r30,128(r1)
	ctx.current_instruction = 0x881516B4;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r29,132(r1)
	ctx.current_instruction = 0x881516B8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r28,136(r1)
	ctx.current_instruction = 0x881516BC;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r27,140(r1)
	ctx.current_instruction = 0x881516C0;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r11,144(r1)
	ctx.current_instruction = 0x881516C4;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r10,192(r7)
	ctx.current_instruction = 0x881516C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881516D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881516D4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881586F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881586F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881586F8) {
			switch (rex_dispatch_address) {
				case 0x88158700:
				case 0x881587FC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881586F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88158700: goto loc_88158700;
		case 0x881587FC: goto loc_881587FC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88158700;
	__savegprlr_29(ctx, base);
loc_88158700:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88158700;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r30,3632(r3)
	ctx.current_instruction = 0x88158714;
	REX_STORE_U64(ctx.r3.u32 + 3632, ctx.r30.u64);
	// std r30,3640(r3)
	ctx.current_instruction = 0x88158718;
	REX_STORE_U64(ctx.r3.u32 + 3640, ctx.r30.u64);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// std r30,3656(r3)
	ctx.current_instruction = 0x88158720;
	REX_STORE_U64(ctx.r3.u32 + 3656, ctx.r30.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r30,3664(r3)
	ctx.current_instruction = 0x88158728;
	REX_STORE_U64(ctx.r3.u32 + 3664, ctx.r30.u64);
	// li r4,114
	ctx.r4.s64 = 114;
	// stw r30,3688(r3)
	ctx.current_instruction = 0x88158730;
	REX_STORE_U32(ctx.r3.u32 + 3688, ctx.r30.u32);
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r30,456(r31)
	ctx.current_instruction = 0x88158738;
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r30,400(r31)
	ctx.current_instruction = 0x8815873C;
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,396(r31)
	ctx.current_instruction = 0x88158740;
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,404(r31)
	ctx.current_instruction = 0x88158744;
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r30,3944(r31)
	ctx.current_instruction = 0x88158748;
	REX_STORE_U32(ctx.r31.u32 + 3944, ctx.r30.u32);
	// stw r30,3948(r31)
	ctx.current_instruction = 0x8815874C;
	REX_STORE_U32(ctx.r31.u32 + 3948, ctx.r30.u32);
	// stw r30,3952(r31)
	ctx.current_instruction = 0x88158750;
	REX_STORE_U32(ctx.r31.u32 + 3952, ctx.r30.u32);
	// stw r30,440(r31)
	ctx.current_instruction = 0x88158754;
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stw r30,436(r31)
	ctx.current_instruction = 0x88158758;
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,444(r31)
	ctx.current_instruction = 0x8815875C;
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// stw r30,3940(r31)
	ctx.current_instruction = 0x88158760;
	REX_STORE_U32(ctx.r31.u32 + 3940, ctx.r30.u32);
	// stw r30,4004(r31)
	ctx.current_instruction = 0x88158764;
	REX_STORE_U32(ctx.r31.u32 + 4004, ctx.r30.u32);
	// stw r30,448(r31)
	ctx.current_instruction = 0x88158768;
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,3956(r31)
	ctx.current_instruction = 0x8815876C;
	REX_STORE_U32(ctx.r31.u32 + 3956, ctx.r30.u32);
	// stw r30,15572(r31)
	ctx.current_instruction = 0x88158770;
	REX_STORE_U32(ctx.r31.u32 + 15572, ctx.r30.u32);
	// stw r30,15576(r31)
	ctx.current_instruction = 0x88158774;
	REX_STORE_U32(ctx.r31.u32 + 15576, ctx.r30.u32);
	// stw r30,3720(r31)
	ctx.current_instruction = 0x88158778;
	REX_STORE_U32(ctx.r31.u32 + 3720, ctx.r30.u32);
	// stw r30,3724(r31)
	ctx.current_instruction = 0x8815877C;
	REX_STORE_U32(ctx.r31.u32 + 3724, ctx.r30.u32);
	// stw r30,3728(r31)
	ctx.current_instruction = 0x88158780;
	REX_STORE_U32(ctx.r31.u32 + 3728, ctx.r30.u32);
	// stw r29,3732(r31)
	ctx.current_instruction = 0x88158784;
	REX_STORE_U32(ctx.r31.u32 + 3732, ctx.r29.u32);
	// stw r30,3736(r31)
	ctx.current_instruction = 0x88158788;
	REX_STORE_U32(ctx.r31.u32 + 3736, ctx.r30.u32);
	// stw r30,268(r31)
	ctx.current_instruction = 0x8815878C;
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,15832(r31)
	ctx.current_instruction = 0x88158790;
	REX_STORE_U32(ctx.r31.u32 + 15832, ctx.r30.u32);
	// stw r30,1896(r31)
	ctx.current_instruction = 0x88158794;
	REX_STORE_U32(ctx.r31.u32 + 1896, ctx.r30.u32);
	// stw r30,1900(r31)
	ctx.current_instruction = 0x88158798;
	REX_STORE_U32(ctx.r31.u32 + 1900, ctx.r30.u32);
	// stw r30,1904(r31)
	ctx.current_instruction = 0x8815879C;
	REX_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
	// stw r30,1908(r31)
	ctx.current_instruction = 0x881587A0;
	REX_STORE_U32(ctx.r31.u32 + 1908, ctx.r30.u32);
	// stw r30,1912(r31)
	ctx.current_instruction = 0x881587A4;
	REX_STORE_U32(ctx.r31.u32 + 1912, ctx.r30.u32);
	// stw r30,1916(r31)
	ctx.current_instruction = 0x881587A8;
	REX_STORE_U32(ctx.r31.u32 + 1916, ctx.r30.u32);
	// stw r30,272(r31)
	ctx.current_instruction = 0x881587AC;
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	ctx.current_instruction = 0x881587B0;
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,15612(r31)
	ctx.current_instruction = 0x881587B4;
	REX_STORE_U32(ctx.r31.u32 + 15612, ctx.r30.u32);
	// stw r30,15580(r31)
	ctx.current_instruction = 0x881587B8;
	REX_STORE_U32(ctx.r31.u32 + 15580, ctx.r30.u32);
	// stw r11,3700(r31)
	ctx.current_instruction = 0x881587BC;
	REX_STORE_U32(ctx.r31.u32 + 3700, ctx.r11.u32);
	// stw r30,2964(r31)
	ctx.current_instruction = 0x881587C0;
	REX_STORE_U32(ctx.r31.u32 + 2964, ctx.r30.u32);
	// stw r30,2968(r31)
	ctx.current_instruction = 0x881587C4;
	REX_STORE_U32(ctx.r31.u32 + 2968, ctx.r30.u32);
	// stw r30,2972(r31)
	ctx.current_instruction = 0x881587C8;
	REX_STORE_U32(ctx.r31.u32 + 2972, ctx.r30.u32);
	// std r30,2976(r31)
	ctx.current_instruction = 0x881587CC;
	REX_STORE_U64(ctx.r31.u32 + 2976, ctx.r30.u64);
	// stw r30,2984(r31)
	ctx.current_instruction = 0x881587D0;
	REX_STORE_U32(ctx.r31.u32 + 2984, ctx.r30.u32);
	// stw r30,1796(r31)
	ctx.current_instruction = 0x881587D4;
	REX_STORE_U32(ctx.r31.u32 + 1796, ctx.r30.u32);
	// stw r30,15584(r31)
	ctx.current_instruction = 0x881587D8;
	REX_STORE_U32(ctx.r31.u32 + 15584, ctx.r30.u32);
	// stw r30,15588(r31)
	ctx.current_instruction = 0x881587DC;
	REX_STORE_U32(ctx.r31.u32 + 15588, ctx.r30.u32);
	// stw r30,15592(r31)
	ctx.current_instruction = 0x881587E0;
	REX_STORE_U32(ctx.r31.u32 + 15592, ctx.r30.u32);
	// stw r10,15596(r31)
	ctx.current_instruction = 0x881587E4;
	REX_STORE_U32(ctx.r31.u32 + 15596, ctx.r10.u32);
	// stw r29,15600(r31)
	ctx.current_instruction = 0x881587E8;
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r29.u32);
	// stw r30,3380(r31)
	ctx.current_instruction = 0x881587EC;
	REX_STORE_U32(ctx.r31.u32 + 3380, ctx.r30.u32);
	// stw r30,3384(r31)
	ctx.current_instruction = 0x881587F0;
	REX_STORE_U32(ctx.r31.u32 + 3384, ctx.r30.u32);
	// stw r30,22244(r31)
	ctx.current_instruction = 0x881587F4;
	REX_STORE_U32(ctx.r31.u32 + 22244, ctx.r30.u32);
	// bl 0x8817d628
	ctx.lr = 0x881587FC;
	sub_8817D628(ctx, base);
loc_881587FC:
	// stw r3,22244(r31)
	ctx.current_instruction = 0x881587FC;
	REX_STORE_U32(ctx.r31.u32 + 22244, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88158818
	if (ctx.cr6.eq) goto loc_88158818;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x88158818
	if (ctx.cr6.eq) goto loc_88158818;
	// stw r29,22244(r31)
	ctx.current_instruction = 0x88158810;
	REX_STORE_U32(ctx.r31.u32 + 22244, ctx.r29.u32);
	// b 0x8815881c
	goto loc_8815881C;
loc_88158818:
	// stw r30,22244(r31)
	ctx.current_instruction = 0x88158818;
	REX_STORE_U32(ctx.r31.u32 + 22244, ctx.r30.u32);
loc_8815881C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,15568(r31)
	ctx.current_instruction = 0x88158820;
	REX_STORE_U32(ctx.r31.u32 + 15568, ctx.r30.u32);
	// stw r30,3388(r31)
	ctx.current_instruction = 0x88158824;
	REX_STORE_U32(ctx.r31.u32 + 3388, ctx.r30.u32);
	// stw r11,22260(r31)
	ctx.current_instruction = 0x88158828;
	REX_STORE_U32(ctx.r31.u32 + 22260, ctx.r11.u32);
	// stw r30,22032(r31)
	ctx.current_instruction = 0x8815882C;
	REX_STORE_U32(ctx.r31.u32 + 22032, ctx.r30.u32);
	// stw r30,22036(r31)
	ctx.current_instruction = 0x88158830;
	REX_STORE_U32(ctx.r31.u32 + 22036, ctx.r30.u32);
	// stw r30,22040(r31)
	ctx.current_instruction = 0x88158834;
	REX_STORE_U32(ctx.r31.u32 + 22040, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815E098) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815E098;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815E098) {
			switch (rex_dispatch_address) {
				case 0x8815E0A0:
				case 0x8815E0B8:
				case 0x8815E0F0:
				case 0x8815E108:
				case 0x8815E11C:
				case 0x8815E134:
				case 0x8815E148:
				case 0x8815E16C:
				case 0x8815E184:
				case 0x8815E190:
				case 0x8815E198:
				case 0x8815E1A0:
				case 0x8815E1D4:
				case 0x8815E1EC:
				case 0x8815E20C:
				case 0x8815E228:
				case 0x8815E250:
				case 0x8815E2E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815E098;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815E0A0: goto loc_8815E0A0;
		case 0x8815E0B8: goto loc_8815E0B8;
		case 0x8815E0F0: goto loc_8815E0F0;
		case 0x8815E108: goto loc_8815E108;
		case 0x8815E11C: goto loc_8815E11C;
		case 0x8815E134: goto loc_8815E134;
		case 0x8815E148: goto loc_8815E148;
		case 0x8815E16C: goto loc_8815E16C;
		case 0x8815E184: goto loc_8815E184;
		case 0x8815E190: goto loc_8815E190;
		case 0x8815E198: goto loc_8815E198;
		case 0x8815E1A0: goto loc_8815E1A0;
		case 0x8815E1D4: goto loc_8815E1D4;
		case 0x8815E1EC: goto loc_8815E1EC;
		case 0x8815E20C: goto loc_8815E20C;
		case 0x8815E228: goto loc_8815E228;
		case 0x8815E250: goto loc_8815E250;
		case 0x8815E2E0: goto loc_8815E2E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8815E0A0;
	__savegprlr_22(ctx, base);
loc_8815E0A0:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8815E0A0;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x88052e38
	ctx.lr = 0x8815E0B8;
	sub_88052E38(ctx, base);
loc_8815E0B8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e1a0
	if (ctx.cr6.eq) goto loc_8815E1A0;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8815E0D8:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x8815E0D8;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8815e0d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8815E0D8;
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c4640
	ctx.lr = 0x8815E0F0;
	sub_881C4640(ctx, base);
loc_8815E0F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e198
	if (ctx.cr6.eq) goto loc_8815E198;
	// addi r26,r29,16
	ctx.r26.s64 = ctx.r29.s64 + 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c4640
	ctx.lr = 0x8815E108;
	sub_881C4640(ctx, base);
loc_8815E108:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e190
	if (ctx.cr6.eq) goto loc_8815E190;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8815b9f8
	ctx.lr = 0x8815E11C;
	sub_8815B9F8(ctx, base);
loc_8815E11C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e134
	if (ctx.cr6.eq) goto loc_8815E134;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8815E134;
	sub_88052D90(ctx, base);
loc_8815E134:
	// stw r31,0(r29)
	ctx.current_instruction = 0x8815E134;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8815e188
	if (ctx.cr6.eq) goto loc_8815E188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882436a0
	ctx.lr = 0x8815E148;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_8815E148:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8815E148;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815e188
	if (ctx.cr6.eq) goto loc_8815E188;
	// lis r11,-30698
	ctx.r11.s64 = -2011824128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-11728
	ctx.r5.s64 = ctx.r11.s64 + -11728;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8815e360
	ctx.lr = 0x8815E16C;
	sub_8815E360(ctx, base);
loc_8815E16C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815e1ac
	if (!ctx.cr6.eq) goto loc_8815E1AC;
	// lwz r3,0(r29)
	ctx.current_instruction = 0x8815E174;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e188
	if (ctx.cr6.eq) goto loc_8815E188;
	// bl 0x8815ba70
	ctx.lr = 0x8815E184;
	sub_8815BA70(ctx, base);
loc_8815E184:
	// stw r23,0(r29)
	ctx.current_instruction = 0x8815E184;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
loc_8815E188:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c4560
	ctx.lr = 0x8815E190;
	sub_881C4560(ctx, base);
loc_8815E190:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c4560
	ctx.lr = 0x8815E198;
	sub_881C4560(ctx, base);
loc_8815E198:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88052278
	ctx.lr = 0x8815E1A0;
	sub_88052278(ctx, base);
loc_8815E1A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8815E1AC:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stw r30,36(r29)
	ctx.current_instruction = 0x8815E1B0;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r30.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r28,32(r29)
	ctx.current_instruction = 0x8815E1B8;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r28.u32);
	// ble cr6,0x8815e2c8
	if (!ctx.cr6.gt) goto loc_8815E2C8;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r25,r11,18168
	ctx.r25.s64 = ctx.r11.s64 + 18168;
loc_8815E1C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8815d000
	ctx.lr = 0x8815E1D4;
	sub_8815D000(ctx, base);
loc_8815E1D4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8815e2b8
	if (ctx.cr6.lt) goto loc_8815E2B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8815d000
	ctx.lr = 0x8815E1EC;
	sub_8815D000(ctx, base);
loc_8815E1EC:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8815e298
	if (ctx.cr6.lt) goto loc_8815E298;
	// lwz r11,36(r29)
	ctx.current_instruction = 0x8815E1F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,32(r29)
	ctx.current_instruction = 0x8815E200;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8815e510
	ctx.lr = 0x8815E20C;
	sub_8815E510(ctx, base);
loc_8815E20C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e278
	if (ctx.cr6.eq) goto loc_8815E278;
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815E218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8815e228
	if (ctx.cr6.lt) goto loc_8815E228;
	// bl 0x881ed228
	ctx.lr = 0x8815E228;
	sub_881ED228(ctx, base);
loc_8815E228:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815E228;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8815e240
	if (!ctx.cr6.lt) goto loc_8815E240;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8815E234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	ctx.current_instruction = 0x8815E23C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_8815E240:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815E240;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8815e250
	if (ctx.cr6.lt) goto loc_8815E250;
	// bl 0x881ed228
	ctx.lr = 0x8815E250;
	sub_881ED228(ctx, base);
loc_8815E250:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815E250;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8815e268
	if (!ctx.cr6.lt) goto loc_8815E268;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x8815E25C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r10,r11
	ctx.current_instruction = 0x8815E264;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r23.u32);
loc_8815E268:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x8815e1c8
	if (ctx.cr6.lt) goto loc_8815E1C8;
	// b 0x8815e2b8
	goto loc_8815E2B8;
loc_8815E278:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815E278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815e298
	if (ctx.cr6.eq) goto loc_8815E298;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r26)
	ctx.current_instruction = 0x8815E288;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r26)
	ctx.current_instruction = 0x8815E290;
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8815E294;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8815E298:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815E298;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815e2b8
	if (ctx.cr6.eq) goto loc_8815E2B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r27)
	ctx.current_instruction = 0x8815E2AC;
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x8815E2B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8815E2B4;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8815E2B8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8815e2c8
	if (!ctx.cr6.gt) goto loc_8815E2C8;
	// stw r23,28(r29)
	ctx.current_instruction = 0x8815E2C0;
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r23.u32);
	// b 0x8815e2d0
	goto loc_8815E2D0;
loc_8815E2C8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r29)
	ctx.current_instruction = 0x8815E2CC;
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_8815E2D0:
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x8815e2e4
	if (!ctx.cr6.lt) goto loc_8815E2E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815d398
	ctx.lr = 0x8815E2E0;
	sub_8815D398(ctx, base);
loc_8815E2E0:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8815E2E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881666E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881666E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881666E8) {
			switch (rex_dispatch_address) {
				case 0x881666F0:
				case 0x881669D8:
				case 0x88166A98:
				case 0x88166B48:
				case 0x88166B7C:
				case 0x88166B8C:
				case 0x88166BA8:
				case 0x88166BEC:
				case 0x88166CA0:
				case 0x88166CDC:
				case 0x88166CF0:
				case 0x88166D1C:
				case 0x88166EAC:
				case 0x88166F14:
				case 0x88166FA4:
				case 0x88166FF0:
				case 0x88167078:
				case 0x8816711C:
				case 0x881671A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881666E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881666F0: goto loc_881666F0;
		case 0x881669D8: goto loc_881669D8;
		case 0x88166A98: goto loc_88166A98;
		case 0x88166B48: goto loc_88166B48;
		case 0x88166B7C: goto loc_88166B7C;
		case 0x88166B8C: goto loc_88166B8C;
		case 0x88166BA8: goto loc_88166BA8;
		case 0x88166BEC: goto loc_88166BEC;
		case 0x88166CA0: goto loc_88166CA0;
		case 0x88166CDC: goto loc_88166CDC;
		case 0x88166CF0: goto loc_88166CF0;
		case 0x88166D1C: goto loc_88166D1C;
		case 0x88166EAC: goto loc_88166EAC;
		case 0x88166F14: goto loc_88166F14;
		case 0x88166FA4: goto loc_88166FA4;
		case 0x88166FF0: goto loc_88166FF0;
		case 0x88167078: goto loc_88167078;
		case 0x8816711C: goto loc_8816711C;
		case 0x881671A8: goto loc_881671A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881666F0;
	__savegprlr_14(ctx, base);
loc_881666F0:
	// stwu r1,-448(r1)
	ctx.current_instruction = 0x881666F0;
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.current_instruction = 0x881666F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// lwz r9,20688(r3)
	ctx.current_instruction = 0x881666FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20688);
	// addi r29,r1,160
	ctx.r29.s64 = ctx.r1.s64 + 160;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// lwz r6,208(r3)
	ctx.current_instruction = 0x88166708;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r11,3776(r3)
	ctx.current_instruction = 0x8816670C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// li r26,0
	ctx.r26.s64 = 0;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r4,144(r1)
	ctx.current_instruction = 0x88166718;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// lwz r30,144(r3)
	ctx.current_instruction = 0x8816671C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r7,220(r3)
	ctx.current_instruction = 0x88166720;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r8,224(r3)
	ctx.current_instruction = 0x88166724;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r28,228(r3)
	ctx.current_instruction = 0x88166728;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r27,232(r3)
	ctx.current_instruction = 0x8816672C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// lwz r5,3780(r3)
	ctx.current_instruction = 0x88166730;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// stw r26,152(r1)
	ctx.current_instruction = 0x88166734;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r28,156(r1)
	ctx.current_instruction = 0x88166738;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r9,r30
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,148(r1)
	ctx.current_instruction = 0x88166758;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r3,3784(r3)
	ctx.current_instruction = 0x88166760;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,132(r1)
	ctx.current_instruction = 0x88166768;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r23,r1,180
	ctx.r23.s64 = ctx.r1.s64 + 180;
	// stw r26,0(r29)
	ctx.current_instruction = 0x88166770;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r6,272(r31)
	ctx.current_instruction = 0x8816677C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stw r27,176(r1)
	ctx.current_instruction = 0x88166784;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// stw r11,168(r1)
	ctx.current_instruction = 0x8816678C;
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r7,164(r1)
	ctx.current_instruction = 0x88166794;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// stw r26,172(r1)
	ctx.current_instruction = 0x88166798;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r26,0(r23)
	ctx.current_instruction = 0x881667A4;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// lwz r28,1896(r31)
	ctx.current_instruction = 0x881667AC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r25,1900(r31)
	ctx.current_instruction = 0x881667B4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r11,128(r1)
	ctx.current_instruction = 0x881667BC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// stw r4,184(r1)
	ctx.current_instruction = 0x881667C4;
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r4.u32);
	// li r17,1
	ctx.r17.s64 = 1;
	// stw r27,196(r1)
	ctx.current_instruction = 0x881667CC;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r10,188(r1)
	ctx.current_instruction = 0x881667D4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// mr r16,r26
	ctx.r16.u64 = ctx.r26.u64;
	// stw r26,192(r1)
	ctx.current_instruction = 0x881667DC;
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// stw r26,0(r5)
	ctx.current_instruction = 0x881667E4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// lwz r9,136(r31)
	ctx.current_instruction = 0x881667E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r5,r1,276
	ctx.r5.s64 = ctx.r1.s64 + 276;
	// stw r11,204(r1)
	ctx.current_instruction = 0x881667F0;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// stw r8,208(r1)
	ctx.current_instruction = 0x881667F8;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,212(r1)
	ctx.current_instruction = 0x88166800;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r26,216(r1)
	ctx.current_instruction = 0x88166804;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// stw r26,0(r3)
	ctx.current_instruction = 0x88166808;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// lwz r24,20680(r31)
	ctx.current_instruction = 0x8816680C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// li r3,192
	ctx.r3.s64 = 192;
	// stw r28,116(r1)
	ctx.current_instruction = 0x88166814;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r25,120(r1)
	ctx.current_instruction = 0x88166818;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r8,124(r1)
	ctx.current_instruction = 0x8816681C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r17,140(r1)
	ctx.current_instruction = 0x88166820;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// stw r10,136(r1)
	ctx.current_instruction = 0x88166824;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// li r10,144
	ctx.r10.s64 = 144;
	// stw r6,224(r1)
	ctx.current_instruction = 0x8816682C;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// stw r28,228(r1)
	ctx.current_instruction = 0x88166830;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// addi r19,r9,1
	ctx.r19.s64 = ctx.r9.s64 + 1;
	// stw r3,232(r1)
	ctx.current_instruction = 0x88166838;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r26,236(r1)
	ctx.current_instruction = 0x88166840;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r26.u32);
	// stw r4,240(r1)
	ctx.current_instruction = 0x88166844;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r4.u32);
	// stw r11,244(r1)
	ctx.current_instruction = 0x88166848;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r25,248(r1)
	ctx.current_instruction = 0x8816684C;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r25.u32);
	// stw r10,252(r1)
	ctx.current_instruction = 0x88166850;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stw r26,256(r1)
	ctx.current_instruction = 0x88166854;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r26.u32);
	// stw r4,260(r1)
	ctx.current_instruction = 0x88166858;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r4.u32);
	// stw r26,264(r1)
	ctx.current_instruction = 0x8816685C;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r26.u32);
	// stw r26,268(r1)
	ctx.current_instruction = 0x88166860;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r26.u32);
	// stw r26,272(r1)
	ctx.current_instruction = 0x88166864;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r26.u32);
	// stw r26,0(r5)
	ctx.current_instruction = 0x88166868;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// stw r26,4(r5)
	ctx.current_instruction = 0x8816686C;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r26.u32);
	// beq cr6,0x881668a4
	if (ctx.cr6.eq) goto loc_881668A4;
	// lwz r11,20684(r31)
	ctx.current_instruction = 0x88166874;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881668a4
	if (ctx.cr6.eq) goto loc_881668A4;
	// lwz r11,21704(r31)
	ctx.current_instruction = 0x88166880;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881668a4
	if (!ctx.cr6.eq) goto loc_881668A4;
	// lwz r10,140(r31)
	ctx.current_instruction = 0x8816688C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,21972(r31)
	ctx.current_instruction = 0x88166890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,21968(r31)
	ctx.current_instruction = 0x8816689C;
	REX_STORE_U32(ctx.r31.u32 + 21968, ctx.r9.u32);
	// b 0x881668ac
	goto loc_881668AC;
loc_881668A4:
	// lwz r11,21972(r31)
	ctx.current_instruction = 0x881668A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// stw r11,21968(r31)
	ctx.current_instruction = 0x881668A8;
	REX_STORE_U32(ctx.r31.u32 + 21968, ctx.r11.u32);
loc_881668AC:
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x881668AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88166924
	if (ctx.cr6.eq) goto loc_88166924;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881668f4
	if (!ctx.cr6.gt) goto loc_881668F4;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_881668D4:
	// lwz r8,1776(r31)
	ctx.current_instruction = 0x881668D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r9,r10,r8
	ctx.current_instruction = 0x881668DC;
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r7,144(r31)
	ctx.current_instruction = 0x881668E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881668d4
	if (ctx.cr6.lt) goto loc_881668D4;
loc_881668F4:
	// lwz r11,144(r31)
	ctx.current_instruction = 0x881668F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88166924
	if (!ctx.cr6.gt) goto loc_88166924;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_88166908:
	// lwz r8,1784(r31)
	ctx.current_instruction = 0x88166908;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r9,r11,r8
	ctx.current_instruction = 0x88166910;
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r7,144(r31)
	ctx.current_instruction = 0x88166918;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88166908
	if (ctx.cr6.lt) goto loc_88166908;
loc_88166924:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88166924;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8816694c
	if (ctx.cr6.eq) goto loc_8816694C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8816694c
	if (!ctx.cr6.lt) goto loc_8816694C;
	// lwz r11,2948(r31)
	ctx.current_instruction = 0x88166938;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// lwz r10,2960(r31)
	ctx.current_instruction = 0x8816693C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2960);
	// stw r11,2916(r31)
	ctx.current_instruction = 0x88166940;
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r11.u32);
	// stw r10,2928(r31)
	ctx.current_instruction = 0x88166944;
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r10.u32);
	// b 0x881669c8
	goto loc_881669C8;
loc_8816694C:
	// lwz r11,2964(r31)
	ctx.current_instruction = 0x8816694C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2964);
	// lwz r10,2976(r31)
	ctx.current_instruction = 0x88166950;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2976);
	// addi r11,r11,735
	ctx.r11.s64 = ctx.r11.s64 + 735;
	// lwz r9,2980(r31)
	ctx.current_instruction = 0x88166958;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2980);
	// addi r8,r10,738
	ctx.r8.s64 = ctx.r10.s64 + 738;
	// lwz r10,2984(r31)
	ctx.current_instruction = 0x88166960;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2984);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,2092(r31)
	ctx.current_instruction = 0x88166968;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2092);
	// addi r4,r10,738
	ctx.r4.s64 = ctx.r10.s64 + 738;
	// addi r6,r9,738
	ctx.r6.s64 = ctx.r9.s64 + 738;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r31
	ctx.current_instruction = 0x8816697C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r9,r11,263
	ctx.r9.s64 = ctx.r11.s64 + 263;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,2924(r31)
	ctx.current_instruction = 0x88166994;
	REX_STORE_U32(ctx.r31.u32 + 2924, ctx.r10.u32);
	// stw r10,2920(r31)
	ctx.current_instruction = 0x88166998;
	REX_STORE_U32(ctx.r31.u32 + 2920, ctx.r10.u32);
	// stw r10,2916(r31)
	ctx.current_instruction = 0x8816699C;
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r10.u32);
	// lwzx r5,r5,r31
	ctx.current_instruction = 0x881669A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// stw r5,2928(r31)
	ctx.current_instruction = 0x881669A4;
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r5.u32);
	// lwzx r4,r3,r31
	ctx.current_instruction = 0x881669A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r4,2932(r31)
	ctx.current_instruction = 0x881669AC;
	REX_STORE_U32(ctx.r31.u32 + 2932, ctx.r4.u32);
	// lwzx r3,r8,r31
	ctx.current_instruction = 0x881669B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r3,2936(r31)
	ctx.current_instruction = 0x881669B4;
	REX_STORE_U32(ctx.r31.u32 + 2936, ctx.r3.u32);
	// lwzx r11,r7,r31
	ctx.current_instruction = 0x881669B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r11,2096(r31)
	ctx.current_instruction = 0x881669BC;
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r11.u32);
	// lwz r10,2108(r6)
	ctx.current_instruction = 0x881669C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 2108);
	// stw r10,2100(r31)
	ctx.current_instruction = 0x881669C4;
	REX_STORE_U32(ctx.r31.u32 + 2100, ctx.r10.u32);
loc_881669C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,248(r31)
	ctx.current_instruction = 0x881669CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// addi r15,r31,248
	ctx.r15.s64 = ctx.r31.s64 + 248;
	// bl 0x8815e728
	ctx.lr = 0x881669D8;
	sub_8815E728(ctx, base);
loc_881669D8:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x881669D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r26,112(r1)
	ctx.current_instruction = 0x881669E0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88167090
	if (!ctx.cr6.gt) goto loc_88167090;
	// li r14,128
	ctx.r14.s64 = 128;
loc_881669F0:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x881669F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// lwz r22,132(r1)
	ctx.current_instruction = 0x881669F8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r23,128(r1)
	ctx.current_instruction = 0x88166A00;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r24,136(r1)
	ctx.current_instruction = 0x88166A04;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r20,r7,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bne cr6,0x88166a30
	if (!ctx.cr6.eq) goto loc_88166A30;
	// lwz r11,1896(r31)
	ctx.current_instruction = 0x88166A1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// lwz r10,1900(r31)
	ctx.current_instruction = 0x88166A20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// stw r11,116(r1)
	ctx.current_instruction = 0x88166A24;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	ctx.current_instruction = 0x88166A28;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x88166a74
	goto loc_88166A74;
loc_88166A30:
	// lwz r11,14884(r31)
	ctx.current_instruction = 0x88166A30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88166a74
	if (ctx.cr6.eq) goto loc_88166A74;
	// lwz r11,14896(r31)
	ctx.current_instruction = 0x88166A3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14896);
	// lwz r8,1896(r31)
	ctx.current_instruction = 0x88166A40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// lwz r10,1900(r31)
	ctx.current_instruction = 0x88166A48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r7,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r6,120(r1)
	ctx.current_instruction = 0x88166A6C;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r5,116(r1)
	ctx.current_instruction = 0x88166A70;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
loc_88166A74:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88166A74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x88166a98
	if (!ctx.cr6.lt) goto loc_88166A98;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88166a98
	if (ctx.cr6.eq) goto loc_88166A98;
	// lwz r4,15532(r31)
	ctx.current_instruction = 0x88166A88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15532);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8816712c
	if (ctx.cr6.eq) goto loc_8816712C;
	// bl 0x881aea60
	ctx.lr = 0x88166A98;
	sub_881AEA60(ctx, base);
loc_88166A98:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r21,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r21.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,21940(r31)
	ctx.current_instruction = 0x88166AA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88166c7c
	if (ctx.cr6.eq) goto loc_88166C7C;
	// lwz r11,21704(r31)
	ctx.current_instruction = 0x88166AAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88166ad0
	if (!ctx.cr6.eq) goto loc_88166AD0;
	// lwz r11,112(r1)
	ctx.current_instruction = 0x88166AB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88166ad0
	if (!ctx.cr6.eq) goto loc_88166AD0;
	// lwz r11,21976(r31)
	ctx.current_instruction = 0x88166AC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21976(r31)
	ctx.current_instruction = 0x88166ACC;
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
loc_88166AD0:
	// lwz r11,112(r1)
	ctx.current_instruction = 0x88166AD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,21968(r31)
	ctx.current_instruction = 0x88166AD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.current_instruction = 0x88166ADC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88166c60
	if (ctx.cr6.eq) goto loc_88166C60;
	// lwz r11,21976(r31)
	ctx.current_instruction = 0x88166AE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// lwz r30,84(r31)
	ctx.current_instruction = 0x88166AEC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21976(r31)
	ctx.current_instruction = 0x88166AF4;
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// lwz r10,28(r30)
	ctx.current_instruction = 0x88166AF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88166b7c
	if (ctx.cr6.eq) goto loc_88166B7C;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x88166B04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88166b58
	if (!ctx.cr6.lt) goto loc_88166B58;
loc_88166B18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88166b58
	if (ctx.cr6.eq) goto loc_88166B58;
	// ld r9,0(r30)
	ctx.current_instruction = 0x88166B20;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// std r6,0(r30)
	ctx.current_instruction = 0x88166B34;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
	// stw r7,8(r30)
	ctx.current_instruction = 0x88166B38;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge 0x88166b48
	if (!ctx.cr0.lt) goto loc_88166B48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x88166B48;
	sub_88156678(ctx, base);
loc_88166B48:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x88166B48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88166b18
	if (ctx.cr6.gt) goto loc_88166B18;
loc_88166B58:
	// ld r11,0(r30)
	ctx.current_instruction = 0x88166B58;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r30)
	ctx.current_instruction = 0x88166B68;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
	// stw r8,8(r30)
	ctx.current_instruction = 0x88166B6C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// bge 0x88166b7c
	if (!ctx.cr0.lt) goto loc_88166B7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x88166B7C;
	sub_88156678(ctx, base);
loc_88166B7C:
	// lwz r11,8(r30)
	ctx.current_instruction = 0x88166B7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x88156500
	ctx.lr = 0x88166B8C;
	sub_88156500(ctx, base);
loc_88166B8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r1)
	ctx.current_instruction = 0x88166B90;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r25,288(r31)
	ctx.current_instruction = 0x88166B94;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r29,20680(r31)
	ctx.current_instruction = 0x88166B98;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// lwz r28,20684(r31)
	ctx.current_instruction = 0x88166B9C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// lwz r27,20688(r31)
	ctx.current_instruction = 0x88166BA0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// bl 0x881adb80
	ctx.lr = 0x88166BA8;
	sub_881ADB80(ctx, base);
loc_88166BA8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r17,1948(r31)
	ctx.current_instruction = 0x88166BAC;
	REX_STORE_U32(ctx.r31.u32 + 1948, ctx.r17.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88166c24
	if (ctx.cr6.eq) goto loc_88166C24;
	// stw r25,288(r31)
	ctx.current_instruction = 0x88166BB8;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r25.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,20680(r31)
	ctx.current_instruction = 0x88166BC0;
	REX_STORE_U32(ctx.r31.u32 + 20680, ctx.r29.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r28,20684(r31)
	ctx.current_instruction = 0x88166BC8;
	REX_STORE_U32(ctx.r31.u32 + 20684, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,20688(r31)
	ctx.current_instruction = 0x88166BD0;
	REX_STORE_U32(ctx.r31.u32 + 20688, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b310
	ctx.lr = 0x88166BEC;
	sub_8819B310(ctx, base);
loc_88166BEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88167138
	if (!ctx.cr6.eq) goto loc_88167138;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x88166c04
	if (ctx.cr6.eq) goto loc_88166C04;
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// bne cr6,0x88166c08
	if (!ctx.cr6.eq) goto loc_88166C08;
loc_88166C04:
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
loc_88166C08:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x88167090
	if (ctx.cr6.eq) goto loc_88167090;
	// lwz r11,21976(r31)
	ctx.current_instruction = 0x88166C10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,21976(r31)
	ctx.current_instruction = 0x88166C1C;
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// b 0x88167078
	goto loc_88167078;
loc_88166C24:
	// lwz r11,20680(r31)
	ctx.current_instruction = 0x88166C24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x88166e78
	if (!ctx.cr6.eq) goto loc_88166E78;
	// lwz r11,20684(r31)
	ctx.current_instruction = 0x88166C30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x88166e78
	if (!ctx.cr6.eq) goto loc_88166E78;
	// lwz r11,20688(r31)
	ctx.current_instruction = 0x88166C3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x88166e78
	if (!ctx.cr6.eq) goto loc_88166E78;
	// lwz r11,288(r31)
	ctx.current_instruction = 0x88166C48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88166c5c
	if (ctx.cr6.eq) goto loc_88166C5C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88166e78
	if (!ctx.cr6.eq) goto loc_88166E78;
loc_88166C5C:
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
loc_88166C60:
	// lwz r11,112(r1)
	ctx.current_instruction = 0x88166C60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,21968(r31)
	ctx.current_instruction = 0x88166C64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.current_instruction = 0x88166C6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88166c7c
	if (ctx.cr6.eq) goto loc_88166C7C;
	// stw r17,140(r1)
	ctx.current_instruction = 0x88166C78;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
loc_88166C7C:
	// lwz r11,3988(r31)
	ctx.current_instruction = 0x88166C7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88166ca8
	if (ctx.cr6.eq) goto loc_88166CA8;
	// lwz r11,288(r31)
	ctx.current_instruction = 0x88166C88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x88166ca8
	if (ctx.cr6.eq) goto loc_88166CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r1)
	ctx.current_instruction = 0x88166C98;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x881adf70
	ctx.lr = 0x88166CA0;
	sub_881ADF70(ctx, base);
loc_88166CA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881671b0
	if (!ctx.cr6.eq) goto loc_881671B0;
loc_88166CA8:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x88166CA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r14,3000(r31)
	ctx.current_instruction = 0x88166CB0;
	REX_STORE_U32(ctx.r31.u32 + 3000, ctx.r14.u32);
	// stw r14,2996(r31)
	ctx.current_instruction = 0x88166CB4;
	REX_STORE_U32(ctx.r31.u32 + 2996, ctx.r14.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r14,2992(r31)
	ctx.current_instruction = 0x88166CBC;
	REX_STORE_U32(ctx.r31.u32 + 2992, ctx.r14.u32);
	// ble cr6,0x88166fc0
	if (!ctx.cr6.gt) goto loc_88166FC0;
	// subf r28,r23,r24
	ctx.r28.u64 = ctx.r24.u64 - ctx.r23.u64;
loc_88166CC8:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88166CC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88166cfc
	if (!ctx.cr6.eq) goto loc_88166CFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8816d998
	ctx.lr = 0x88166CDC;
	sub_8816D998(ctx, base);
loc_88166CDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88166cfc
	if (ctx.cr6.eq) goto loc_88166CFC;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8816da28
	ctx.lr = 0x88166CF0;
	sub_8816DA28(ctx, base);
loc_88166CF0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881671b0
	if (!ctx.cr6.eq) goto loc_881671B0;
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
loc_88166CFC:
	// lwz r11,3108(r31)
	ctx.current_instruction = 0x88166CFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3108);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,112(r1)
	ctx.current_instruction = 0x88166D08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,124(r1)
	ctx.current_instruction = 0x88166D0C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88166D1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88166D1C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88166f78
	if (!ctx.cr6.eq) goto loc_88166F78;
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x88166D28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88166e00
	if (ctx.cr6.eq) goto loc_88166E00;
	// lwz r10,124(r1)
	ctx.current_instruction = 0x88166D38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,0(r10)
	ctx.current_instruction = 0x88166D3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88166e00
	if (!ctx.cr6.eq) goto loc_88166E00;
	// lwz r10,136(r31)
	ctx.current_instruction = 0x88166D4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,112(r1)
	ctx.current_instruction = 0x88166D54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,1784(r31)
	ctx.current_instruction = 0x88166D58;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// stw r9,3004(r31)
	ctx.current_instruction = 0x88166D60;
	REX_STORE_U32(ctx.r31.u32 + 3004, ctx.r9.u32);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r5,r7
	ctx.current_instruction = 0x88166D6C;
	REX_STORE_U16(ctx.r5.u32 + ctx.r7.u32, ctx.r26.u16);
	// lwz r4,136(r31)
	ctx.current_instruction = 0x88166D70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,1776(r31)
	ctx.current_instruction = 0x88166D74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r3,112(r1)
	ctx.current_instruction = 0x88166D78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r26,2(r8)
	ctx.current_instruction = 0x88166D94;
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r26.u16);
	// lwz r5,136(r31)
	ctx.current_instruction = 0x88166D98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r7,1776(r31)
	ctx.current_instruction = 0x88166D9C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r6,112(r1)
	ctx.current_instruction = 0x88166DA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r11,r4,r5
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r26,r11,r7
	ctx.current_instruction = 0x88166DB8;
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r26.u16);
	// lwz r10,1776(r31)
	ctx.current_instruction = 0x88166DBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r9,136(r31)
	ctx.current_instruction = 0x88166DC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r8,112(r1)
	ctx.current_instruction = 0x88166DC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r26,2(r5)
	ctx.current_instruction = 0x88166DDC;
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r26.u16);
	// lwz r4,1776(r31)
	ctx.current_instruction = 0x88166DE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r11,112(r1)
	ctx.current_instruction = 0x88166DE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,136(r31)
	ctx.current_instruction = 0x88166DE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r26,r8,r4
	ctx.current_instruction = 0x88166DFC;
	REX_STORE_U16(ctx.r8.u32 + ctx.r4.u32, ctx.r26.u16);
loc_88166E00:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88166e14
	if (ctx.cr6.eq) goto loc_88166E14;
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bgt cr6,0x88166e18
	if (ctx.cr6.gt) goto loc_88166E18;
loc_88166E14:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_88166E18:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88166e30
	if (ctx.cr6.eq) goto loc_88166E30;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x88166E20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88166e34
	if (ctx.cr6.gt) goto loc_88166E34;
loc_88166E30:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_88166E34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88166e58
	if (ctx.cr6.eq) goto loc_88166E58;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x88166e58
	if (ctx.cr6.eq) goto loc_88166E58;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x88166E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88166e5c
	if (ctx.cr6.gt) goto loc_88166E5C;
loc_88166E58:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_88166E5C:
	// lwz r11,20760(r31)
	ctx.current_instruction = 0x88166E5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88166edc
	if (ctx.cr6.eq) goto loc_88166EDC;
	// lwz r11,112(r1)
	ctx.current_instruction = 0x88166E68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x88166ee0
	goto loc_88166EE0;
loc_88166E78:
	// stw r25,288(r31)
	ctx.current_instruction = 0x88166E78;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r25.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r29,20680(r31)
	ctx.current_instruction = 0x88166E80;
	REX_STORE_U32(ctx.r31.u32 + 20680, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,20684(r31)
	ctx.current_instruction = 0x88166E88;
	REX_STORE_U32(ctx.r31.u32 + 20684, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,20688(r31)
	ctx.current_instruction = 0x88166E90;
	REX_STORE_U32(ctx.r31.u32 + 20688, ctx.r27.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b310
	ctx.lr = 0x88166EAC;
	sub_8819B310(ctx, base);
loc_88166EAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88167144
	if (!ctx.cr6.eq) goto loc_88167144;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x88166ec0
	if (!ctx.cr6.eq) goto loc_88166EC0;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
loc_88166EC0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x88167090
	if (ctx.cr6.eq) goto loc_88167090;
	// lwz r11,21976(r31)
	ctx.current_instruction = 0x88166EC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21976);
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,21976(r31)
	ctx.current_instruction = 0x88166ED4;
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// b 0x88167078
	goto loc_88167078;
loc_88166EDC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_88166EE0:
	// stw r11,100(r1)
	ctx.current_instruction = 0x88166EE0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// add r7,r28,r23
	ctx.r7.u64 = ctx.r28.u64 + ctx.r23.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88166EE8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r11,3104(r31)
	ctx.current_instruction = 0x88166EF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3104);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,92(r1)
	ctx.current_instruction = 0x88166EFC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r9,120(r1)
	ctx.current_instruction = 0x88166F00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,124(r1)
	ctx.current_instruction = 0x88166F04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r8,116(r1)
	ctx.current_instruction = 0x88166F08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88166F14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88166F14:
	// lwz r10,3004(r31)
	ctx.current_instruction = 0x88166F14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88166f30
	if (ctx.cr6.eq) goto loc_88166F30;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,3004(r31)
	ctx.current_instruction = 0x88166F2C;
	REX_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
loc_88166F30:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x88166f80
	if (!ctx.cr6.eq) goto loc_88166F80;
	// lwz r11,116(r1)
	ctx.current_instruction = 0x88166F38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,120(r1)
	ctx.current_instruction = 0x88166F40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// lwz r9,124(r1)
	ctx.current_instruction = 0x88166F48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r8,r11,192
	ctx.r8.s64 = ctx.r11.s64 + 192;
	// lwz r7,136(r31)
	ctx.current_instruction = 0x88166F50;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r6,r10,144
	ctx.r6.s64 = ctx.r10.s64 + 144;
	// addi r5,r9,24
	ctx.r5.s64 = ctx.r9.s64 + 24;
	// stw r8,116(r1)
	ctx.current_instruction = 0x88166F5C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r6,120(r1)
	ctx.current_instruction = 0x88166F60;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// stw r5,124(r1)
	ctx.current_instruction = 0x88166F68;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x88166cc8
	if (ctx.cr6.lt) goto loc_88166CC8;
	// b 0x88166fc0
	goto loc_88166FC0;
loc_88166F78:
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x88166f84
	goto loc_88166F84;
loc_88166F80:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_88166F84:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819b310
	ctx.lr = 0x88166FA4;
	sub_8819B310(ctx, base);
loc_88166FA4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88167150
	if (!ctx.cr6.eq) goto loc_88167150;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x88166fbc
	if (ctx.cr6.eq) goto loc_88166FBC;
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// bne cr6,0x88166fc0
	if (!ctx.cr6.eq) goto loc_88166FC0;
loc_88166FBC:
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_88166FC0:
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x88166FC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88166ff0
	if (ctx.cr6.eq) goto loc_88166FF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,140(r1)
	ctx.current_instruction = 0x88166FD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,136(r1)
	ctx.current_instruction = 0x88166FDC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r6,128(r1)
	ctx.current_instruction = 0x88166FE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,132(r1)
	ctx.current_instruction = 0x88166FE4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.current_instruction = 0x88166FE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x881c3e50
	ctx.lr = 0x88166FF0;
	sub_881C3E50(ctx, base);
loc_88166FF0:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x88166FF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r4,112(r1)
	ctx.current_instruction = 0x88166FF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r26,140(r1)
	ctx.current_instruction = 0x88166FFC;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x88167024
	if (!ctx.cr6.lt) goto loc_88167024;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lwz r10,21968(r31)
	ctx.current_instruction = 0x8816700C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.current_instruction = 0x88167014;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88167024
	if (ctx.cr6.eq) goto loc_88167024;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
loc_88167024:
	// lwz r10,128(r1)
	ctx.current_instruction = 0x88167024;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lwz r11,232(r31)
	ctx.current_instruction = 0x8816702C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r9,132(r1)
	ctx.current_instruction = 0x88167030;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,136(r1)
	ctx.current_instruction = 0x88167038;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,228(r31)
	ctx.current_instruction = 0x8816703C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,128(r1)
	ctx.current_instruction = 0x88167044;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,136(r1)
	ctx.current_instruction = 0x8816704C;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r5,132(r1)
	ctx.current_instruction = 0x88167050;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// beq cr6,0x88167078
	if (ctx.cr6.eq) goto loc_88167078;
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x88167058;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88167078
	if (ctx.cr6.eq) goto loc_88167078;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c3e50
	ctx.lr = 0x88167078;
	sub_881C3E50(ctx, base);
loc_88167078:
	// lwz r11,112(r1)
	ctx.current_instruction = 0x88167078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,140(r31)
	ctx.current_instruction = 0x8816707C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,112(r1)
	ctx.current_instruction = 0x88167084;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881669f0
	if (ctx.cr6.lt) goto loc_881669F0;
loc_88167090:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88167090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x88167098;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// blt cr6,0x8816715c
	if (ctx.cr6.lt) goto loc_8816715C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881671a8
	if (ctx.cr6.eq) goto loc_881671A8;
	// lwz r11,0(r15)
	ctx.current_instruction = 0x881670A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,140(r31)
	ctx.current_instruction = 0x881670B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r17,84(r1)
	ctx.current_instruction = 0x881670B8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881670C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,204(r31)
	ctx.current_instruction = 0x881670C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// stw r11,100(r1)
	ctx.current_instruction = 0x881670CC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// stw r10,92(r1)
	ctx.current_instruction = 0x881670D4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// lwz r29,20688(r31)
	ctx.current_instruction = 0x881670DC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881670E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mullw r6,r4,r29
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// lwz r25,3776(r31)
	ctx.current_instruction = 0x881670E8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// lwz r28,3784(r31)
	ctx.current_instruction = 0x881670EC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r30,3780(r31)
	ctx.current_instruction = 0x881670F0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r4,220(r31)
	ctx.current_instruction = 0x881670F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r10,136(r31)
	ctx.current_instruction = 0x881670F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r27,r5,r29
	ctx.r27.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r29,r11,r6
	ctx.r29.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 + ctx.r25.u64;
	// add r6,r29,r28
	ctx.r6.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x881a9968
	ctx.lr = 0x8816711C;
	sub_881A9968(ctx, base);
loc_8816711C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r26,15628(r31)
	ctx.current_instruction = 0x88167120;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r26.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8816712C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88167138:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88167144:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88167150:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8816715C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881671a8
	if (ctx.cr6.eq) goto loc_881671A8;
	// lwz r5,140(r31)
	ctx.current_instruction = 0x88167164;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8816716C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,3780(r31)
	ctx.current_instruction = 0x88167174;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,3784(r31)
	ctx.current_instruction = 0x8816717C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3776(r31)
	ctx.current_instruction = 0x88167184;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// stw r5,92(r1)
	ctx.current_instruction = 0x88167188;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r11,220(r31)
	ctx.current_instruction = 0x88167194;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r10,136(r31)
	ctx.current_instruction = 0x88167198;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r17,84(r1)
	ctx.current_instruction = 0x881671A0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// bl 0x881a53b8
	ctx.lr = 0x881671A8;
	sub_881A53B8(ctx, base);
loc_881671A8:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r26,15628(r31)
	ctx.current_instruction = 0x881671AC;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r26.u32);
loc_881671B0:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88184388) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88184388;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88184388) {
			switch (rex_dispatch_address) {
				case 0x88184390:
				case 0x88184414:
				case 0x88184450:
				case 0x88184478:
				case 0x881844C0:
				case 0x881844EC:
				case 0x8818450C:
				case 0x8818469C:
				case 0x881846B8:
				case 0x881846E4:
				case 0x88184704:
				case 0x88184840:
				case 0x88184854:
				case 0x88184890:
				case 0x8818489C:
				case 0x881848E4:
				case 0x8818491C:
				case 0x88184970:
				case 0x881849A8:
				case 0x881849E0:
				case 0x88184AB0:
				case 0x88184B24:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88184388;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88184390: goto loc_88184390;
		case 0x88184414: goto loc_88184414;
		case 0x88184450: goto loc_88184450;
		case 0x88184478: goto loc_88184478;
		case 0x881844C0: goto loc_881844C0;
		case 0x881844EC: goto loc_881844EC;
		case 0x8818450C: goto loc_8818450C;
		case 0x8818469C: goto loc_8818469C;
		case 0x881846B8: goto loc_881846B8;
		case 0x881846E4: goto loc_881846E4;
		case 0x88184704: goto loc_88184704;
		case 0x88184840: goto loc_88184840;
		case 0x88184854: goto loc_88184854;
		case 0x88184890: goto loc_88184890;
		case 0x8818489C: goto loc_8818489C;
		case 0x881848E4: goto loc_881848E4;
		case 0x8818491C: goto loc_8818491C;
		case 0x88184970: goto loc_88184970;
		case 0x881849A8: goto loc_881849A8;
		case 0x881849E0: goto loc_881849E0;
		case 0x88184AB0: goto loc_88184AB0;
		case 0x88184B24: goto loc_88184B24;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88184390;
	__savegprlr_14(ctx, base);
loc_88184390:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x88184390;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r8)
	ctx.current_instruction = 0x88184394;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r10,80(r3)
	ctx.current_instruction = 0x8818439C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r26,22024(r3)
	ctx.current_instruction = 0x881843A4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 22024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r22,22020(r3)
	ctx.current_instruction = 0x881843AC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 22020);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// stw r4,268(r1)
	ctx.current_instruction = 0x881843B4;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r5,276(r1)
	ctx.current_instruction = 0x881843BC;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// stw r21,22048(r3)
	ctx.current_instruction = 0x881843C4;
	REX_STORE_U32(ctx.r3.u32 + 22048, ctx.r21.u32);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881843CC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r24,32(r10)
	ctx.current_instruction = 0x881843D4;
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r24.u32);
	// mr r16,r21
	ctx.r16.u64 = ctx.r21.u64;
	// lwz r9,3732(r3)
	ctx.current_instruction = 0x881843DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3732);
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// stw r7,292(r1)
	ctx.current_instruction = 0x881843E4;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r21,22052(r3)
	ctx.current_instruction = 0x881843F0;
	REX_STORE_U32(ctx.r3.u32 + 22052, ctx.r21.u32);
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// bne cr6,0x8818441c
	if (!ctx.cr6.eq) goto loc_8818441C;
	// stw r21,84(r1)
	ctx.current_instruction = 0x881843FC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,22048(r3)
	ctx.current_instruction = 0x88184408;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 22048);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8814ff88
	ctx.lr = 0x88184414;
	sub_8814FF88(ctx, base);
loc_88184414:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88184ca8
	if (!ctx.cr6.eq) goto loc_88184CA8;
loc_8818441C:
	// lwz r4,268(r1)
	ctx.current_instruction = 0x8818441C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88184ca4
	if (ctx.cr6.eq) goto loc_88184CA4;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x88184ca4
	if (ctx.cr6.eq) goto loc_88184CA4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x88184ca4
	if (ctx.cr6.eq) goto loc_88184CA4;
	// lwz r3,276(r1)
	ctx.current_instruction = 0x88184438;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x8818445c
	if (!ctx.cr6.lt) goto loc_8818445C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x88184450;
	sub_880547A0(ctx, base);
loc_88184450:
	// lwz r3,276(r1)
	ctx.current_instruction = 0x88184450;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x88184454;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8818445C:
	// lwz r11,22028(r30)
	ctx.current_instruction = 0x8818445C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22028);
	// add r5,r31,r3
	ctx.r5.u64 = ctx.r31.u64 + ctx.r3.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88184490
	if (!ctx.cr6.gt) goto loc_88184490;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184228
	ctx.lr = 0x88184478;
	sub_88184228(ctx, base);
loc_88184478:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88184ca8
	if (!ctx.cr6.eq) goto loc_88184CA8;
	// lwz r26,22024(r30)
	ctx.current_instruction = 0x88184480;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 22024);
	// lwz r3,276(r1)
	ctx.current_instruction = 0x88184484;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x88184488;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r22,22020(r30)
	ctx.current_instruction = 0x8818448C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r30.u32 + 22020);
loc_88184490:
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x8818452c
	if (!ctx.cr6.lt) goto loc_8818452C;
loc_88184498:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88184498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88184554
	if (ctx.cr6.eq) goto loc_88184554;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,3376(r30)
	ctx.current_instruction = 0x881844A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 3376);
	// addi r7,r1,276
	ctx.r7.s64 = ctx.r1.s64 + 276;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88185458
	ctx.lr = 0x881844C0;
	sub_88185458(ctx, base);
loc_881844C0:
	// lwz r11,80(r30)
	ctx.current_instruction = 0x881844C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881844C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,24(r11)
	ctx.current_instruction = 0x881844C8;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r8,22028(r30)
	ctx.current_instruction = 0x881844CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 22028);
	// lwz r9,276(r1)
	ctx.current_instruction = 0x881844D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r5,r31,r9
	ctx.r5.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881844fc
	if (!ctx.cr6.gt) goto loc_881844FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184228
	ctx.lr = 0x881844EC;
	sub_88184228(ctx, base);
loc_881844EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88184ca8
	if (!ctx.cr6.eq) goto loc_88184CA8;
	// lwz r26,22024(r30)
	ctx.current_instruction = 0x881844F4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 22024);
	// lwz r22,22020(r30)
	ctx.current_instruction = 0x881844F8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r30.u32 + 22020);
loc_881844FC:
	// add r3,r31,r26
	ctx.r3.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lwz r5,276(r1)
	ctx.current_instruction = 0x88184500;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x88184504;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x880547a0
	ctx.lr = 0x8818450C;
	sub_880547A0(ctx, base);
loc_8818450C:
	// lwz r11,276(r1)
	ctx.current_instruction = 0x8818450C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,268(r1)
	ctx.current_instruction = 0x88184514;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r26.u32);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,276(r1)
	ctx.current_instruction = 0x88184520;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x88184498
	if (ctx.cr6.lt) goto loc_88184498;
loc_8818452C:
	// lbz r11,0(r4)
	ctx.current_instruction = 0x8818452C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88184554
	if (!ctx.cr6.eq) goto loc_88184554;
	// lbz r11,1(r4)
	ctx.current_instruction = 0x88184538;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88184554
	if (!ctx.cr6.eq) goto loc_88184554;
	// lbz r11,2(r4)
	ctx.current_instruction = 0x88184544;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x88184558
	if (ctx.cr6.eq) goto loc_88184558;
loc_88184554:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_88184558:
	// stw r11,21996(r30)
	ctx.current_instruction = 0x88184558;
	REX_STORE_U32(ctx.r30.u32 + 21996, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,22044(r30)
	ctx.current_instruction = 0x88184560;
	REX_STORE_U32(ctx.r30.u32 + 22044, ctx.r21.u32);
	// beq cr6,0x88184584
	if (ctx.cr6.eq) goto loc_88184584;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88184568;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r29)
	ctx.current_instruction = 0x8818456C;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,0(r14)
	ctx.current_instruction = 0x88184574;
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r4.u32);
	// stw r11,0(r15)
	ctx.current_instruction = 0x88184578;
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88184584:
	// li r20,3
	ctx.r20.s64 = 3;
	// li r18,2
	ctx.r18.s64 = 2;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x88184b4c
	if (ctx.cr6.lt) goto loc_88184B4C;
loc_88184594:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x88184b4c
	if (!ctx.cr6.eq) goto loc_88184B4C;
loc_8818459C:
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lbz r5,3(r4)
	ctx.current_instruction = 0x881845A0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// blt cr6,0x88184644
	if (ctx.cr6.lt) goto loc_88184644;
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881845B4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r9,6
	ctx.r9.s64 = 6;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// ble cr6,0x88184644
	if (!ctx.cr6.gt) goto loc_88184644;
loc_881845C8:
	// lhz r7,0(r11)
	ctx.current_instruction = 0x881845C8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// and r31,r10,r7
	ctx.r31.u64 = ctx.r10.u64 & ctx.r7.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x88184618
	if (!ctx.cr6.eq) goto loc_88184618;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881845f8
	if (!ctx.cr6.eq) goto loc_881845F8;
	// rlwinm r31,r7,0,16,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// beq cr6,0x88184630
	if (ctx.cr6.eq) goto loc_88184630;
loc_881845F8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88184618
	if (!ctx.cr6.eq) goto loc_88184618;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x88184618
	if (!ctx.cr6.eq) goto loc_88184618;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x88184638
	if (ctx.cr6.gt) goto loc_88184638;
loc_88184618:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x881845c8
	if (ctx.cr6.lt) goto loc_881845C8;
	// b 0x88184644
	goto loc_88184644;
loc_88184630:
	// addi r27,r11,-2
	ctx.r27.s64 = ctx.r11.s64 + -2;
	// b 0x8818463c
	goto loc_8818463C;
loc_88184638:
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
loc_8818463C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8818464c
	if (!ctx.cr6.eq) goto loc_8818464C;
loc_88184644:
	// add r27,r4,r3
	ctx.r27.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_8818464C:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r10,22000(r30)
	ctx.current_instruction = 0x88184650;
	REX_STORE_U32(ctx.r30.u32 + 22000, ctx.r10.u32);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x8818466c
	if (ctx.cr6.eq) goto loc_8818466C;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x8818466c
	if (ctx.cr6.eq) goto loc_8818466C;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x88184670
	if (!ctx.cr6.eq) goto loc_88184670;
loc_8818466C:
	// mr r16,r24
	ctx.r16.u64 = ctx.r24.u64;
loc_88184670:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x88184720
	if (!ctx.cr6.eq) goto loc_88184720;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x88184720
	if (!ctx.cr6.eq) goto loc_88184720;
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88184680;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x88184724
	if (!ctx.cr6.eq) goto loc_88184724;
	// subf r31,r4,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x8818469C;
	sub_880547A0(ctx, base);
loc_8818469C:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,276
	ctx.r7.s64 = ctx.r1.s64 + 276;
	// lwz r3,3376(r30)
	ctx.current_instruction = 0x881846A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 3376);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88185458
	ctx.lr = 0x881846B8;
	sub_88185458(ctx, base);
loc_881846B8:
	// lwz r11,80(r30)
	ctx.current_instruction = 0x881846B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881846BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,24(r11)
	ctx.current_instruction = 0x881846C0;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,22028(r30)
	ctx.current_instruction = 0x881846C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 22028);
	// lwz r8,276(r1)
	ctx.current_instruction = 0x881846C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r5,r31,r8
	ctx.r5.u64 = ctx.r31.u64 + ctx.r8.u64;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x881846f4
	if (!ctx.cr6.gt) goto loc_881846F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184228
	ctx.lr = 0x881846E4;
	sub_88184228(ctx, base);
loc_881846E4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88184ca8
	if (!ctx.cr6.eq) goto loc_88184CA8;
	// lwz r26,22024(r30)
	ctx.current_instruction = 0x881846EC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 22024);
	// lwz r22,22020(r30)
	ctx.current_instruction = 0x881846F0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r30.u32 + 22020);
loc_881846F4:
	// add r3,r31,r26
	ctx.r3.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lwz r5,276(r1)
	ctx.current_instruction = 0x881846F8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x881846FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x880547a0
	ctx.lr = 0x88184704;
	sub_880547A0(ctx, base);
loc_88184704:
	// lwz r11,276(r1)
	ctx.current_instruction = 0x88184704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,268(r1)
	ctx.current_instruction = 0x8818470C;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r26.u32);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r3,276(r1)
	ctx.current_instruction = 0x88184718;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// b 0x8818459c
	goto loc_8818459C;
loc_88184720:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88184720;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88184724:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881847dc
	if (ctx.cr6.eq) goto loc_881847DC;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x881847dc
	if (!ctx.cr6.eq) goto loc_881847DC;
	// subf r11,r28,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r28.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x88184778
	if (!ctx.cr6.gt) goto loc_88184778;
	// lbz r8,-1(r27)
	ctx.current_instruction = 0x88184740;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x88184778
	if (!ctx.cr6.eq) goto loc_88184778;
	// lbz r8,-2(r27)
	ctx.current_instruction = 0x8818474C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r27.u32 + -2);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88184778
	if (!ctx.cr6.eq) goto loc_88184778;
	// lbz r8,-3(r27)
	ctx.current_instruction = 0x88184758;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r27.u32 + -3);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x88184778
	if (!ctx.cr6.eq) goto loc_88184778;
	// stb r21,22016(r30)
	ctx.current_instruction = 0x88184764;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r21.u8);
	// stw r20,22004(r30)
	ctx.current_instruction = 0x88184768;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r20.u32);
	// stb r21,22017(r30)
	ctx.current_instruction = 0x8818476C;
	REX_STORE_U8(ctx.r30.u32 + 22017, ctx.r21.u8);
	// stb r24,22018(r30)
	ctx.current_instruction = 0x88184770;
	REX_STORE_U8(ctx.r30.u32 + 22018, ctx.r24.u8);
	// b 0x881847cc
	goto loc_881847CC;
loc_88184778:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x881847a8
	if (!ctx.cr6.gt) goto loc_881847A8;
	// lbz r8,-1(r27)
	ctx.current_instruction = 0x88184780;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x881847a8
	if (!ctx.cr6.eq) goto loc_881847A8;
	// lbz r8,-2(r27)
	ctx.current_instruction = 0x8818478C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r27.u32 + -2);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x881847a8
	if (!ctx.cr6.eq) goto loc_881847A8;
	// stb r21,22016(r30)
	ctx.current_instruction = 0x88184798;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r21.u8);
	// stw r18,22004(r30)
	ctx.current_instruction = 0x8818479C;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r18.u32);
	// stb r21,22017(r30)
	ctx.current_instruction = 0x881847A0;
	REX_STORE_U8(ctx.r30.u32 + 22017, ctx.r21.u8);
	// b 0x881847cc
	goto loc_881847CC;
loc_881847A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881847c8
	if (ctx.cr6.eq) goto loc_881847C8;
	// lbz r8,-1(r27)
	ctx.current_instruction = 0x881847B0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x881847c8
	if (!ctx.cr6.eq) goto loc_881847C8;
	// stb r21,22016(r30)
	ctx.current_instruction = 0x881847BC;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r21.u8);
	// stw r24,22004(r30)
	ctx.current_instruction = 0x881847C0;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r24.u32);
	// b 0x881847cc
	goto loc_881847CC;
loc_881847C8:
	// stw r21,22004(r30)
	ctx.current_instruction = 0x881847C8;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r21.u32);
loc_881847CC:
	// lwz r8,22004(r30)
	ctx.current_instruction = 0x881847CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_881847DC:
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x88184a04
	if (ctx.cr6.eq) goto loc_88184A04;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x88184a04
	if (ctx.cr6.eq) goto loc_88184A04;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x88184a04
	if (ctx.cr6.eq) goto loc_88184A04;
	// subf r5,r28,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r28.u64;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// bgt cr6,0x88184928
	if (ctx.cr6.gt) goto loc_88184928;
	// beq cr6,0x881848f0
	if (ctx.cr6.eq) goto loc_881848F0;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x881848b0
	if (ctx.cr6.gt) goto loc_881848B0;
	// beq cr6,0x88184870
	if (ctx.cr6.eq) goto loc_88184870;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x88184868
	if (ctx.cr6.eq) goto loc_88184868;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x881849fc
	if (!ctx.cr6.eq) goto loc_881849FC;
	// lwz r11,15536(r30)
	ctx.current_instruction = 0x88184820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15536);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,80(r30)
	ctx.current_instruction = 0x8818482C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x88156260
	ctx.lr = 0x88184840;
	sub_88156260(ctx, base);
loc_88184840:
	// lwz r9,3732(r30)
	ctx.current_instruction = 0x88184840;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3732);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88184c24
	if (!ctx.cr6.eq) goto loc_88184C24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88155378
	ctx.lr = 0x88184854;
	sub_88155378(ctx, base);
loc_88184854:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88184ca8
	if (!ctx.cr6.eq) goto loc_88184CA8;
	// lwz r3,276(r1)
	ctx.current_instruction = 0x8818485C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x88184860;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x88184b30
	goto loc_88184B30;
loc_88184868:
	// stw r24,3736(r30)
	ctx.current_instruction = 0x88184868;
	REX_STORE_U32(ctx.r30.u32 + 3736, ctx.r24.u32);
	// b 0x88184b30
	goto loc_88184B30;
loc_88184870:
	// lwz r11,15536(r30)
	ctx.current_instruction = 0x88184870;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15536);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,80(r30)
	ctx.current_instruction = 0x8818487C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x88156260
	ctx.lr = 0x88184890;
	sub_88156260(ctx, base);
loc_88184890:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815ad90
	ctx.lr = 0x8818489C;
	sub_8815AD90(ctx, base);
loc_8818489C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88184c10
	if (!ctx.cr6.eq) goto loc_88184C10;
	// lwz r3,276(r1)
	ctx.current_instruction = 0x881848A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x881848A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x88184b30
	goto loc_88184B30;
loc_881848B0:
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x881849fc
	if (!ctx.cr6.eq) goto loc_881849FC;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x881848cc
	if (!ctx.cr6.eq) goto loc_881848CC;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x881848d0
	if (ctx.cr6.eq) goto loc_881848D0;
loc_881848CC:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_881848D0:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184100
	ctx.lr = 0x881848E4;
	sub_88184100(ctx, base);
loc_881848E4:
	// lwz r3,276(r1)
	ctx.current_instruction = 0x881848E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x881848E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x88184b30
	goto loc_88184B30;
loc_881848F0:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x88184904
	if (!ctx.cr6.eq) goto loc_88184904;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x88184908
	if (ctx.cr6.eq) goto loc_88184908;
loc_88184904:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_88184908:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184100
	ctx.lr = 0x8818491C;
	sub_88184100(ctx, base);
loc_8818491C:
	// lwz r3,276(r1)
	ctx.current_instruction = 0x8818491C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x88184920;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x88184b30
	goto loc_88184B30;
loc_88184928:
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bgt cr6,0x881849ec
	if (ctx.cr6.gt) goto loc_881849EC;
	// beq cr6,0x881849b4
	if (ctx.cr6.eq) goto loc_881849B4;
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// beq cr6,0x8818497c
	if (ctx.cr6.eq) goto loc_8818497C;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// bne cr6,0x881849fc
	if (!ctx.cr6.eq) goto loc_881849FC;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x88184958
	if (!ctx.cr6.eq) goto loc_88184958;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x8818495c
	if (ctx.cr6.eq) goto loc_8818495C;
loc_88184958:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_8818495C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184100
	ctx.lr = 0x88184970;
	sub_88184100(ctx, base);
loc_88184970:
	// lwz r3,276(r1)
	ctx.current_instruction = 0x88184970;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x88184974;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x88184b30
	goto loc_88184B30;
loc_8818497C:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x88184990
	if (!ctx.cr6.eq) goto loc_88184990;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x88184994
	if (ctx.cr6.eq) goto loc_88184994;
loc_88184990:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_88184994:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184100
	ctx.lr = 0x881849A8;
	sub_88184100(ctx, base);
loc_881849A8:
	// lwz r3,276(r1)
	ctx.current_instruction = 0x881849A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x881849AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x88184b30
	goto loc_88184B30;
loc_881849B4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x881849c8
	if (!ctx.cr6.eq) goto loc_881849C8;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x881849cc
	if (ctx.cr6.eq) goto loc_881849CC;
loc_881849C8:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_881849CC:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184100
	ctx.lr = 0x881849E0;
	sub_88184100(ctx, base);
loc_881849E0:
	// lwz r3,276(r1)
	ctx.current_instruction = 0x881849E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x881849E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x88184b30
	goto loc_88184B30;
loc_881849EC:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x881849fc
	if (ctx.cr6.lt) goto loc_881849FC;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x88184b30
	if (!ctx.cr6.gt) goto loc_88184B30;
loc_881849FC:
	// mr r17,r24
	ctx.r17.u64 = ctx.r24.u64;
	// b 0x88184b30
	goto loc_88184B30;
loc_88184A04:
	// subf. r31,r28,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x88184a2c
	if (ctx.cr0.eq) goto loc_88184A2C;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88184A14:
	// lbz r7,0(r11)
	ctx.current_instruction = 0x88184A14;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x88184a2c
	if (!ctx.cr6.eq) goto loc_88184A2C;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne 0x88184a14
	if (!ctx.cr0.eq) goto loc_88184A14;
loc_88184A2C:
	// lwz r11,3732(r30)
	ctx.current_instruction = 0x88184A2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88184b08
	if (!ctx.cr6.eq) goto loc_88184B08;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bne cr6,0x88184a54
	if (!ctx.cr6.eq) goto loc_88184A54;
	// lwz r11,21948(r30)
	ctx.current_instruction = 0x88184A40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21948);
	// stw r31,21964(r30)
	ctx.current_instruction = 0x88184A44;
	REX_STORE_U32(ctx.r30.u32 + 21964, ctx.r31.u32);
	// stw r23,22052(r30)
	ctx.current_instruction = 0x88184A48;
	REX_STORE_U32(ctx.r30.u32 + 22052, ctx.r23.u32);
	// stw r24,22048(r30)
	ctx.current_instruction = 0x88184A4C;
	REX_STORE_U32(ctx.r30.u32 + 22048, ctx.r24.u32);
	// stw r11,21952(r30)
	ctx.current_instruction = 0x88184A50;
	REX_STORE_U32(ctx.r30.u32 + 21952, ctx.r11.u32);
loc_88184A54:
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x88184a6c
	if (!ctx.cr6.eq) goto loc_88184A6C;
	// lwz r11,21992(r30)
	ctx.current_instruction = 0x88184A5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21992);
	// stw r31,21960(r30)
	ctx.current_instruction = 0x88184A60;
	REX_STORE_U32(ctx.r30.u32 + 21960, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21992(r30)
	ctx.current_instruction = 0x88184A68;
	REX_STORE_U32(ctx.r30.u32 + 21992, ctx.r11.u32);
loc_88184A6C:
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x88184b08
	if (!ctx.cr6.eq) goto loc_88184B08;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// ble cr6,0x88184bb0
	if (!ctx.cr6.gt) goto loc_88184BB0;
	// lbz r11,0(r28)
	ctx.current_instruction = 0x88184A7C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r9,1(r28)
	ctx.current_instruction = 0x88184A84;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + 1);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r7,22048(r30)
	ctx.current_instruction = 0x88184A90;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 22048);
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88184AA4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// bl 0x8814ff88
	ctx.lr = 0x88184AB0;
	sub_8814FF88(ctx, base);
loc_88184AB0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88184afc
	if (ctx.cr6.eq) goto loc_88184AFC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x88184c1c
	if (!ctx.cr6.eq) goto loc_88184C1C;
	// lwz r11,22028(r30)
	ctx.current_instruction = 0x88184AC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22028);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88184ca8
	if (ctx.cr6.gt) goto loc_88184CA8;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88184AD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// mr r17,r24
	ctx.r17.u64 = ctx.r24.u64;
	// rlwinm r9,r10,31,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFF;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// stbx r9,r22,r23
	ctx.current_instruction = 0x88184AE4;
	REX_STORE_U8(ctx.r22.u32 + ctx.r23.u32, ctx.r9.u8);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// lbz r8,0(r29)
	ctx.current_instruction = 0x88184AEC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// stbx r7,r22,r11
	ctx.current_instruction = 0x88184AF4;
	REX_STORE_U8(ctx.r22.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
loc_88184AFC:
	// lwz r29,292(r1)
	ctx.current_instruction = 0x88184AFC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x88184B00;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r3,276(r1)
	ctx.current_instruction = 0x88184B04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_88184B08:
	// lwz r11,22028(r30)
	ctx.current_instruction = 0x88184B08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22028);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x88184b2c
	if (!ctx.cr6.lt) goto loc_88184B2C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r22,r23
	ctx.r3.u64 = ctx.r22.u64 + ctx.r23.u64;
	// bl 0x880547a0
	ctx.lr = 0x88184B24;
	sub_880547A0(ctx, base);
loc_88184B24:
	// lwz r3,276(r1)
	ctx.current_instruction = 0x88184B24;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.current_instruction = 0x88184B28;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
loc_88184B2C:
	// add r23,r31,r23
	ctx.r23.u64 = ctx.r31.u64 + ctx.r23.u64;
loc_88184B30:
	// subf r11,r27,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r27.u64;
	// stw r27,268(r1)
	ctx.current_instruction = 0x88184B34;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r27.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r3,276(r1)
	ctx.current_instruction = 0x88184B40;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x88184594
	if (!ctx.cr6.lt) goto loc_88184594;
loc_88184B4C:
	// lwz r11,22028(r30)
	ctx.current_instruction = 0x88184B4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22028);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x88184c24
	if (!ctx.cr6.lt) goto loc_88184C24;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88184B58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88184c8c
	if (ctx.cr6.eq) goto loc_88184C8C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x88184c8c
	if (!ctx.cr6.eq) goto loc_88184C8C;
	// add r11,r22,r23
	ctx.r11.u64 = ctx.r22.u64 + ctx.r23.u64;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// ble cr6,0x88184c30
	if (!ctx.cr6.gt) goto loc_88184C30;
	// lbz r9,-1(r11)
	ctx.current_instruction = 0x88184B78;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x88184c30
	if (!ctx.cr6.eq) goto loc_88184C30;
	// lbz r9,-2(r11)
	ctx.current_instruction = 0x88184B84;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88184c30
	if (!ctx.cr6.eq) goto loc_88184C30;
	// lbz r9,-3(r11)
	ctx.current_instruction = 0x88184B90;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88184c30
	if (!ctx.cr6.eq) goto loc_88184C30;
	// stb r21,22016(r30)
	ctx.current_instruction = 0x88184B9C;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r21.u8);
	// stw r20,22004(r30)
	ctx.current_instruction = 0x88184BA0;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r20.u32);
	// stb r21,22017(r30)
	ctx.current_instruction = 0x88184BA4;
	REX_STORE_U8(ctx.r30.u32 + 22017, ctx.r21.u8);
	// stb r24,22018(r30)
	ctx.current_instruction = 0x88184BA8;
	REX_STORE_U8(ctx.r30.u32 + 22018, ctx.r24.u8);
	// b 0x88184c84
	goto loc_88184C84;
loc_88184BB0:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x88184b08
	if (!ctx.cr6.eq) goto loc_88184B08;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// stw r24,22044(r30)
	ctx.current_instruction = 0x88184BBC;
	REX_STORE_U32(ctx.r30.u32 + 22044, ctx.r24.u32);
	// bne cr6,0x88184b08
	if (!ctx.cr6.eq) goto loc_88184B08;
	// lwz r11,22004(r30)
	ctx.current_instruction = 0x88184BC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x88184c24
	if (ctx.cr6.gt) goto loc_88184C24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88184bf4
	if (ctx.cr6.eq) goto loc_88184BF4;
	// addi r10,r30,22015
	ctx.r10.s64 = ctx.r30.s64 + 22015;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r30,22016
	ctx.r9.s64 = ctx.r30.s64 + 22016;
loc_88184BE4:
	// lbzx r8,r10,r11
	ctx.current_instruction = 0x88184BE4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	ctx.current_instruction = 0x88184BE8;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x88184be4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88184BE4;
loc_88184BF4:
	// lbz r10,0(r28)
	ctx.current_instruction = 0x88184BF4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// lwz r11,22004(r30)
	ctx.current_instruction = 0x88184BFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,22016(r30)
	ctx.current_instruction = 0x88184C04;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r10.u8);
	// stw r9,22004(r30)
	ctx.current_instruction = 0x88184C08;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r9.u32);
	// b 0x88184b08
	goto loc_88184B08;
loc_88184C10:
	// stw r24,3732(r30)
	ctx.current_instruction = 0x88184C10;
	REX_STORE_U32(ctx.r30.u32 + 3732, ctx.r24.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88184C1C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x88184ca8
	if (!ctx.cr6.eq) goto loc_88184CA8;
loc_88184C24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88184C30:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// ble cr6,0x88184c60
	if (!ctx.cr6.gt) goto loc_88184C60;
	// lbz r9,-1(r11)
	ctx.current_instruction = 0x88184C38;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88184c60
	if (!ctx.cr6.eq) goto loc_88184C60;
	// lbz r9,-2(r11)
	ctx.current_instruction = 0x88184C44;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88184c60
	if (!ctx.cr6.eq) goto loc_88184C60;
	// stb r21,22016(r30)
	ctx.current_instruction = 0x88184C50;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r21.u8);
	// stw r18,22004(r30)
	ctx.current_instruction = 0x88184C54;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r18.u32);
	// stb r21,22017(r30)
	ctx.current_instruction = 0x88184C58;
	REX_STORE_U8(ctx.r30.u32 + 22017, ctx.r21.u8);
	// b 0x88184c84
	goto loc_88184C84;
loc_88184C60:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x88184c80
	if (ctx.cr6.eq) goto loc_88184C80;
	// lbz r11,-1(r11)
	ctx.current_instruction = 0x88184C68;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88184c80
	if (!ctx.cr6.eq) goto loc_88184C80;
	// stb r21,22016(r30)
	ctx.current_instruction = 0x88184C74;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r21.u8);
	// stw r24,22004(r30)
	ctx.current_instruction = 0x88184C78;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r24.u32);
	// b 0x88184c84
	goto loc_88184C84;
loc_88184C80:
	// stw r21,22004(r30)
	ctx.current_instruction = 0x88184C80;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r21.u32);
loc_88184C84:
	// lwz r11,22004(r30)
	ctx.current_instruction = 0x88184C84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// subf r23,r11,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r11.u64;
loc_88184C8C:
	// stw r22,0(r14)
	ctx.current_instruction = 0x88184C8C;
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r22.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r23,0(r29)
	ctx.current_instruction = 0x88184C94;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r10,0(r15)
	ctx.current_instruction = 0x88184C98;
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88184CA4:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_88184CA8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8819D220) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8819D220);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8819D220;
	ctx.current_instruction = 0x8819D220;
	// lwz r9,136(r3)
	ctx.current_instruction = 0x8819D220;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// clrlwi r8,r5,31
	ctx.r8.u64 = ctx.r5.u32 & 0x1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mullw r7,r9,r5
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8819d268
	if (!ctx.cr6.eq) goto loc_8819D268;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8819d284
	if (ctx.cr6.eq) goto loc_8819D284;
	// srawi r8,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 1;
	// lwz r7,21968(r11)
	ctx.current_instruction = 0x8819D254;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 21968);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.current_instruction = 0x8819D25C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8819d284
	if (!ctx.cr6.eq) goto loc_8819D284;
loc_8819D268:
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r8,1776(r11)
	ctx.current_instruction = 0x8819D26C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1776);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r8
	ctx.current_instruction = 0x8819D274;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// bne cr6,0x8819d284
	if (!ctx.cr6.eq) goto loc_8819D284;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8819D284:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,1776(r11)
	ctx.current_instruction = 0x8819D28C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1776);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,-2(r11)
	ctx.current_instruction = 0x8819D298;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
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

DEFINE_REX_FUNC(sub_881A0640) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A0640;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A0640) {
			switch (rex_dispatch_address) {
				case 0x881A0648:
				case 0x881A074C:
				case 0x881A07F0:
				case 0x881A0838:
				case 0x881A0A10:
				case 0x881A0AD8:
				case 0x881A0B64:
				case 0x881A0B7C:
				case 0x881A0BF8:
				case 0x881A0C38:
				case 0x881A0C88:
				case 0x881A0CB8:
				case 0x881A0D24:
				case 0x881A0D54:
				case 0x881A0D9C:
				case 0x881A0DC0:
				case 0x881A0DE8:
				case 0x881A0E20:
				case 0x881A0E70:
				case 0x881A0EA0:
				case 0x881A0F0C:
				case 0x881A0F3C:
				case 0x881A0F84:
				case 0x881A0FA8:
				case 0x881A0FD0:
				case 0x881A1000:
				case 0x881A1088:
				case 0x881A1114:
				case 0x881A112C:
				case 0x881A1190:
				case 0x881A11B4:
				case 0x881A11E0:
				case 0x881A1204:
				case 0x881A1230:
				case 0x881A1254:
				case 0x881A1280:
				case 0x881A12A4:
				case 0x881A12F8:
				case 0x881A138C:
				case 0x881A13D8:
				case 0x881A15A4:
				case 0x881A166C:
				case 0x881A16F8:
				case 0x881A1710:
				case 0x881A1788:
				case 0x881A17C8:
				case 0x881A1818:
				case 0x881A1848:
				case 0x881A18B4:
				case 0x881A18E4:
				case 0x881A192C:
				case 0x881A1950:
				case 0x881A1978:
				case 0x881A19B0:
				case 0x881A1A00:
				case 0x881A1A30:
				case 0x881A1A9C:
				case 0x881A1ACC:
				case 0x881A1B14:
				case 0x881A1B38:
				case 0x881A1B60:
				case 0x881A1B90:
				case 0x881A1C18:
				case 0x881A1CA4:
				case 0x881A1CBC:
				case 0x881A1D20:
				case 0x881A1D44:
				case 0x881A1D70:
				case 0x881A1D94:
				case 0x881A1DC0:
				case 0x881A1DE4:
				case 0x881A1E10:
				case 0x881A1E34:
				case 0x881A1E88:
				case 0x881A1EFC:
				case 0x881A1F48:
				case 0x881A2114:
				case 0x881A21CC:
				case 0x881A2258:
				case 0x881A2270:
				case 0x881A22E8:
				case 0x881A2328:
				case 0x881A2378:
				case 0x881A23A8:
				case 0x881A2414:
				case 0x881A2444:
				case 0x881A248C:
				case 0x881A24B0:
				case 0x881A24D8:
				case 0x881A2510:
				case 0x881A2560:
				case 0x881A2590:
				case 0x881A25FC:
				case 0x881A262C:
				case 0x881A2674:
				case 0x881A2698:
				case 0x881A26C0:
				case 0x881A26F0:
				case 0x881A2778:
				case 0x881A2804:
				case 0x881A281C:
				case 0x881A2880:
				case 0x881A28A4:
				case 0x881A28D0:
				case 0x881A28F4:
				case 0x881A2920:
				case 0x881A2944:
				case 0x881A2970:
				case 0x881A2994:
				case 0x881A29E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A0640;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881A0648: goto loc_881A0648;
		case 0x881A074C: goto loc_881A074C;
		case 0x881A07F0: goto loc_881A07F0;
		case 0x881A0838: goto loc_881A0838;
		case 0x881A0A10: goto loc_881A0A10;
		case 0x881A0AD8: goto loc_881A0AD8;
		case 0x881A0B64: goto loc_881A0B64;
		case 0x881A0B7C: goto loc_881A0B7C;
		case 0x881A0BF8: goto loc_881A0BF8;
		case 0x881A0C38: goto loc_881A0C38;
		case 0x881A0C88: goto loc_881A0C88;
		case 0x881A0CB8: goto loc_881A0CB8;
		case 0x881A0D24: goto loc_881A0D24;
		case 0x881A0D54: goto loc_881A0D54;
		case 0x881A0D9C: goto loc_881A0D9C;
		case 0x881A0DC0: goto loc_881A0DC0;
		case 0x881A0DE8: goto loc_881A0DE8;
		case 0x881A0E20: goto loc_881A0E20;
		case 0x881A0E70: goto loc_881A0E70;
		case 0x881A0EA0: goto loc_881A0EA0;
		case 0x881A0F0C: goto loc_881A0F0C;
		case 0x881A0F3C: goto loc_881A0F3C;
		case 0x881A0F84: goto loc_881A0F84;
		case 0x881A0FA8: goto loc_881A0FA8;
		case 0x881A0FD0: goto loc_881A0FD0;
		case 0x881A1000: goto loc_881A1000;
		case 0x881A1088: goto loc_881A1088;
		case 0x881A1114: goto loc_881A1114;
		case 0x881A112C: goto loc_881A112C;
		case 0x881A1190: goto loc_881A1190;
		case 0x881A11B4: goto loc_881A11B4;
		case 0x881A11E0: goto loc_881A11E0;
		case 0x881A1204: goto loc_881A1204;
		case 0x881A1230: goto loc_881A1230;
		case 0x881A1254: goto loc_881A1254;
		case 0x881A1280: goto loc_881A1280;
		case 0x881A12A4: goto loc_881A12A4;
		case 0x881A12F8: goto loc_881A12F8;
		case 0x881A138C: goto loc_881A138C;
		case 0x881A13D8: goto loc_881A13D8;
		case 0x881A15A4: goto loc_881A15A4;
		case 0x881A166C: goto loc_881A166C;
		case 0x881A16F8: goto loc_881A16F8;
		case 0x881A1710: goto loc_881A1710;
		case 0x881A1788: goto loc_881A1788;
		case 0x881A17C8: goto loc_881A17C8;
		case 0x881A1818: goto loc_881A1818;
		case 0x881A1848: goto loc_881A1848;
		case 0x881A18B4: goto loc_881A18B4;
		case 0x881A18E4: goto loc_881A18E4;
		case 0x881A192C: goto loc_881A192C;
		case 0x881A1950: goto loc_881A1950;
		case 0x881A1978: goto loc_881A1978;
		case 0x881A19B0: goto loc_881A19B0;
		case 0x881A1A00: goto loc_881A1A00;
		case 0x881A1A30: goto loc_881A1A30;
		case 0x881A1A9C: goto loc_881A1A9C;
		case 0x881A1ACC: goto loc_881A1ACC;
		case 0x881A1B14: goto loc_881A1B14;
		case 0x881A1B38: goto loc_881A1B38;
		case 0x881A1B60: goto loc_881A1B60;
		case 0x881A1B90: goto loc_881A1B90;
		case 0x881A1C18: goto loc_881A1C18;
		case 0x881A1CA4: goto loc_881A1CA4;
		case 0x881A1CBC: goto loc_881A1CBC;
		case 0x881A1D20: goto loc_881A1D20;
		case 0x881A1D44: goto loc_881A1D44;
		case 0x881A1D70: goto loc_881A1D70;
		case 0x881A1D94: goto loc_881A1D94;
		case 0x881A1DC0: goto loc_881A1DC0;
		case 0x881A1DE4: goto loc_881A1DE4;
		case 0x881A1E10: goto loc_881A1E10;
		case 0x881A1E34: goto loc_881A1E34;
		case 0x881A1E88: goto loc_881A1E88;
		case 0x881A1EFC: goto loc_881A1EFC;
		case 0x881A1F48: goto loc_881A1F48;
		case 0x881A2114: goto loc_881A2114;
		case 0x881A21CC: goto loc_881A21CC;
		case 0x881A2258: goto loc_881A2258;
		case 0x881A2270: goto loc_881A2270;
		case 0x881A22E8: goto loc_881A22E8;
		case 0x881A2328: goto loc_881A2328;
		case 0x881A2378: goto loc_881A2378;
		case 0x881A23A8: goto loc_881A23A8;
		case 0x881A2414: goto loc_881A2414;
		case 0x881A2444: goto loc_881A2444;
		case 0x881A248C: goto loc_881A248C;
		case 0x881A24B0: goto loc_881A24B0;
		case 0x881A24D8: goto loc_881A24D8;
		case 0x881A2510: goto loc_881A2510;
		case 0x881A2560: goto loc_881A2560;
		case 0x881A2590: goto loc_881A2590;
		case 0x881A25FC: goto loc_881A25FC;
		case 0x881A262C: goto loc_881A262C;
		case 0x881A2674: goto loc_881A2674;
		case 0x881A2698: goto loc_881A2698;
		case 0x881A26C0: goto loc_881A26C0;
		case 0x881A26F0: goto loc_881A26F0;
		case 0x881A2778: goto loc_881A2778;
		case 0x881A2804: goto loc_881A2804;
		case 0x881A281C: goto loc_881A281C;
		case 0x881A2880: goto loc_881A2880;
		case 0x881A28A4: goto loc_881A28A4;
		case 0x881A28D0: goto loc_881A28D0;
		case 0x881A28F4: goto loc_881A28F4;
		case 0x881A2920: goto loc_881A2920;
		case 0x881A2944: goto loc_881A2944;
		case 0x881A2970: goto loc_881A2970;
		case 0x881A2994: goto loc_881A2994;
		case 0x881A29E8: goto loc_881A29E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881A0648;
	__savegprlr_14(ctx, base);
loc_881A0648:
	// stwu r1,-336(r1)
	ctx.current_instruction = 0x881A0648;
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.current_instruction = 0x881A064C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r9,404(r1)
	ctx.current_instruction = 0x881A0658;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r9.u32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r6,380(r1)
	ctx.current_instruction = 0x881A0660;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r7,388(r1)
	ctx.current_instruction = 0x881A0668;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r7.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r8,396(r1)
	ctx.current_instruction = 0x881A0670;
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r8.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r7,332(r3)
	ctx.current_instruction = 0x881A0678;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// lwz r8,6608(r3)
	ctx.current_instruction = 0x881A067C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 6608);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r4)
	ctx.current_instruction = 0x881A0688;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r4,364(r1)
	ctx.current_instruction = 0x881A068C;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// addi r14,r4,14
	ctx.r14.s64 = ctx.r4.s64 + 14;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addic r4,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r16,340(r31)
	ctx.current_instruction = 0x881A06A0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r26,1772(r31)
	ctx.current_instruction = 0x881A06A4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// subfe r25,r4,r7
	temp.u8 = (~ctx.r4.u32 + ctx.r7.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r25.u64 = ~ctx.r4.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r17,r10,12,30,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// stw r11,112(r1)
	ctx.current_instruction = 0x881A06B0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881a06c0
	if (ctx.cr6.eq) goto loc_881A06C0;
	// rlwinm r16,r10,8,29,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x7;
loc_881A06C0:
	// lwz r11,396(r31)
	ctx.current_instruction = 0x881A06C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a06f0
	if (ctx.cr6.eq) goto loc_881A06F0;
	// rlwinm r11,r10,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3;
	// addi r10,r11,735
	ctx.r10.s64 = ctx.r11.s64 + 735;
	// addi r9,r11,738
	ctx.r9.s64 = ctx.r11.s64 + 738;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r19,r10,r31
	ctx.r19.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r8,116(r1)
	ctx.current_instruction = 0x881A06E8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// b 0x881a06fc
	goto loc_881A06FC;
loc_881A06F0:
	// addi r11,r31,2916
	ctx.r11.s64 = ctx.r31.s64 + 2916;
	// addi r19,r31,2928
	ctx.r19.s64 = ctx.r31.s64 + 2928;
	// stw r11,116(r1)
	ctx.current_instruction = 0x881A06F8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_881A06FC:
	// lwz r11,356(r31)
	ctx.current_instruction = 0x881A06FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A0708;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// stw r11,132(r1)
	ctx.current_instruction = 0x881A0710;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bne cr6,0x881a0734
	if (!ctx.cr6.eq) goto loc_881A0734;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x881a0734
	if (!ctx.cr6.eq) goto loc_881A0734;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881a0734
	if (!ctx.cr6.eq) goto loc_881A0734;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,120(r1)
	ctx.current_instruction = 0x881A072C;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x881a0738
	goto loc_881A0738;
loc_881A0734:
	// stw r24,120(r1)
	ctx.current_instruction = 0x881A0734;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
loc_881A0738:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8819be08
	ctx.lr = 0x881A074C;
	sub_8819BE08(ctx, base);
loc_881A074C:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,26224
	ctx.r9.s64 = ctx.r11.s64 + 26224;
	// rlwinm r21,r28,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r29,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,136(r1)
	ctx.current_instruction = 0x881A0760;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r18,8
	ctx.r18.s64 = 8;
	// ori r15,r10,32768
	ctx.r15.u64 = ctx.r10.u64 | 32768;
loc_881A076C:
	// lbzx r27,r24,r14
	ctx.current_instruction = 0x881A076C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r14.u32);
	// srawi r11,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 1;
	// lwz r10,120(r1)
	ctx.current_instruction = 0x881A0774;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r23,r24,31
	ctx.r23.u64 = ctx.r24.u32 & 0x1;
	// cntlzw r9,r27
	ctx.r9.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// lwz r7,132(r1)
	ctx.current_instruction = 0x881A0780;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// add r30,r21,r23
	ctx.r30.u64 = ctx.r21.u64 + ctx.r23.u64;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// add r8,r11,r20
	ctx.r8.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r5,120(r1)
	ctx.current_instruction = 0x881A079C;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// beq cr6,0x881a0a2c
	if (ctx.cr6.eq) goto loc_881A0A2C;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r9,136(r31)
	ctx.current_instruction = 0x881A07A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,84(r1)
	ctx.current_instruction = 0x881A07AC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r5,464(r31)
	ctx.current_instruction = 0x881A07B8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r26,1772(r31)
	ctx.current_instruction = 0x881A07BC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r4,364(r1)
	ctx.current_instruction = 0x881A07C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// add r29,r11,r5
	ctx.r29.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8819c7b0
	ctx.lr = 0x881A07F0;
	sub_8819C7B0(ctx, base);
loc_881A07F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881a07fc
	if (ctx.cr6.eq) goto loc_881A07FC;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
loc_881A07FC:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,112(r1)
	ctx.current_instruction = 0x881A0800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,364(r1)
	ctx.current_instruction = 0x881A0804;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r9,124(r1)
	ctx.current_instruction = 0x881A0810;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r8,128(r1)
	ctx.current_instruction = 0x881A0818;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r26,100(r1)
	ctx.current_instruction = 0x881A0820;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x881A0828;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r18,108(r1)
	ctx.current_instruction = 0x881A082C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// stw r29,84(r1)
	ctx.current_instruction = 0x881A0830;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x881ba970
	ctx.lr = 0x881A0838;
	sub_881BA970(ctx, base);
loc_881A0838:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x881A0840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a09f0
	if (ctx.cr6.eq) goto loc_881A09F0;
	// rlwinm r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	// lwz r9,136(r31)
	ctx.current_instruction = 0x881A0854;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// addi r6,r11,754
	ctx.r6.s64 = ctx.r11.s64 + 754;
	// rlwinm r7,r30,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r26,-2
	ctx.r6.s64 = ctx.r26.s64 + -2;
	// lwzx r8,r10,r31
	ctx.current_instruction = 0x881A0878;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_881A0884:
	// lhzu r7,2(r6)
	ctx.current_instruction = 0x881A0884;
	ea = 2 + ctx.r6.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x881A0888;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a0884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0884;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r7,r10,r31
	ctx.current_instruction = 0x881A0894;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r26,14
	ctx.r5.s64 = ctx.r26.s64 + 14;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
loc_881A08B0:
	// lhzu r8,2(r5)
	ctx.current_instruction = 0x881A08B0;
	ea = 2 + ctx.r5.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r8,2(r7)
	ctx.current_instruction = 0x881A08B4;
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x881a08b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A08B0;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.current_instruction = 0x881A08C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r5,r26,30
	ctx.r5.s64 = ctx.r26.s64 + 30;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
loc_881A08E0:
	// lhzu r7,2(r5)
	ctx.current_instruction = 0x881A08E0;
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x881A08E4;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a08e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A08E0;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.current_instruction = 0x881A08F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r26,46
	ctx.r5.s64 = ctx.r26.s64 + 46;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_881A0914:
	// lhzu r7,2(r5)
	ctx.current_instruction = 0x881A0914;
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x881A0918;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a0914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0914;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r31
	ctx.current_instruction = 0x881A0924;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r5,r26,62
	ctx.r5.s64 = ctx.r26.s64 + 62;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
loc_881A0944:
	// lhzu r7,2(r5)
	ctx.current_instruction = 0x881A0944;
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x881A0948;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a0944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0944;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r31
	ctx.current_instruction = 0x881A0954;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r26,78
	ctx.r5.s64 = ctx.r26.s64 + 78;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_881A0978:
	// lhzu r7,2(r5)
	ctx.current_instruction = 0x881A0978;
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x881A097C;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a0978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A0978;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.current_instruction = 0x881A0988;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r26,94
	ctx.r5.s64 = ctx.r26.s64 + 94;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_881A09B0:
	// lhzu r7,2(r5)
	ctx.current_instruction = 0x881A09B0;
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ctx.current_instruction = 0x881A09B4;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a09b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A09B0;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r31
	ctx.current_instruction = 0x881A09C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r26,110
	ctx.r7.s64 = ctx.r26.s64 + 110;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_881A09E4:
	// lhzu r10,2(r7)
	ctx.current_instruction = 0x881A09E4;
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ctx.current_instruction = 0x881A09E8;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x881a09e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A09E4;
loc_881A09F0:
	// lwz r11,3184(r31)
	ctx.current_instruction = 0x881A09F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3184);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r7,264(r31)
	ctx.current_instruction = 0x881A09FC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r6,204(r31)
	ctx.current_instruction = 0x881A0A04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A0A10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A0A10:
	// lwz r10,364(r1)
	ctx.current_instruction = 0x881A0A10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r28,396(r1)
	ctx.current_instruction = 0x881A0A18;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// add r8,r24,r10
	ctx.r8.u64 = ctx.r24.u64 + ctx.r10.u64;
	// lwz r29,404(r1)
	ctx.current_instruction = 0x881A0A20;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// stb r9,8(r8)
	ctx.current_instruction = 0x881A0A24;
	REX_STORE_U8(ctx.r8.u32 + 8, ctx.r9.u8);
	// b 0x881a1314
	goto loc_881A1314;
loc_881A0A2C:
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A0A2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x881a1308
	if (ctx.cr6.eq) goto loc_881A1308;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A0A38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881a0bc4
	if (ctx.cr6.eq) goto loc_881A0BC4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x881a0bc4
	if (!ctx.cr6.eq) goto loc_881A0BC4;
	// lwz r11,2560(r31)
	ctx.current_instruction = 0x881A0A50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r30,84(r31)
	ctx.current_instruction = 0x881A0A54;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881a0a70
	if (!ctx.cr6.eq) goto loc_881A0A70;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r30)
	ctx.current_instruction = 0x881A0A68;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x881a0b94
	goto loc_881A0B94;
loc_881A0A70:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881A0A70;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.current_instruction = 0x881A0A74;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881A0A7C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881A0A8C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a0b5c
	if (ctx.cr6.lt) goto loc_881A0B5C;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x881A0A9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	ctx.current_instruction = 0x881A0AAC;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	ctx.current_instruction = 0x881A0AB4;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881a0b54
	if (!ctx.cr6.lt) goto loc_881A0B54;
loc_881A0ABC:
	// lwz r10,16(r30)
	ctx.current_instruction = 0x881A0ABC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881A0AC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881a0ae8
	if (ctx.cr6.lt) goto loc_881A0AE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x881A0AD8;
	sub_88156440(ctx, base);
loc_881A0AD8:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881a0abc
	if (ctx.cr6.eq) goto loc_881A0ABC;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a0b94
	goto loc_881A0B94;
loc_881A0AE8:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881A0AE8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881A0AF0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881A0AF8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881A0AFC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881A0B04;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881A0B08;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881A0B10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	ctx.current_instruction = 0x881A0B14;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r30)
	ctx.current_instruction = 0x881A0B1C;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r10,8(r30)
	ctx.current_instruction = 0x881A0B38;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
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
	// std r7,0(r30)
	ctx.current_instruction = 0x881A0B50;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
loc_881A0B54:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a0b94
	goto loc_881A0B94;
loc_881A0B5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881A0B64;
	sub_88156500(ctx, base);
loc_881A0B64:
	// ld r11,0(r30)
	ctx.current_instruction = 0x881A0B64;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x881A0B7C;
	sub_88156500(ctx, base);
loc_881A0B7C:
	// add r10,r29,r15
	ctx.r10.u64 = ctx.r29.u64 + ctx.r15.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881A0B84;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a0b64
	if (ctx.cr6.lt) goto loc_881A0B64;
loc_881A0B94:
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881A0B94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881A0B98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881a15ac
	if (!ctx.cr6.eq) goto loc_881A15AC;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bge cr6,0x881a15ac
	if (!ctx.cr6.lt) goto loc_881A15AC;
	// lwz r11,136(r1)
	ctx.current_instruction = 0x881A0BAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// lwzx r17,r10,r11
	ctx.current_instruction = 0x881A0BB8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A0BBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwzx r16,r10,r9
	ctx.current_instruction = 0x881A0BC0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_881A0BC4:
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// stb r16,8(r11)
	ctx.current_instruction = 0x881A0BCC;
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r16.u8);
	// bne cr6,0x881a0c14
	if (!ctx.cr6.eq) goto loc_881A0C14;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A0BD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A0BE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r26,1772(r31)
	ctx.current_instruction = 0x881A0BE4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A0BE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,1836(r31)
	ctx.current_instruction = 0x881A0BEC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A0BF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A0BF8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3200(r31)
	ctx.current_instruction = 0x881A0C00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,1944(r31)
	ctx.current_instruction = 0x881A0C08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x881a1298
	goto loc_881A1298;
loc_881A0C14:
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// bne cr6,0x881a0dfc
	if (!ctx.cr6.eq) goto loc_881A0DFC;
	// lwz r26,1768(r31)
	ctx.current_instruction = 0x881A0C1C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x881A0C38;
	sub_88052D90(ctx, base);
loc_881A0C38:
	// lwz r11,3408(r31)
	ctx.current_instruction = 0x881A0C38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a0cd8
	if (ctx.cr6.eq) goto loc_881A0CD8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x881a0cc8
	if (!ctx.cr6.eq) goto loc_881A0CC8;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A0C4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A0C50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881a0cc8
	if (!ctx.cr6.eq) goto loc_881A0CC8;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A0C60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A0C64;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A0C68;
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
	ctx.current_instruction = 0x881A0C78;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A0C7C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a0c88
	if (!ctx.cr0.lt) goto loc_881A0C88;
	// bl 0x88156678
	ctx.lr = 0x881A0C88;
	sub_88156678(ctx, base);
loc_881A0C88:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a0d68
	if (!ctx.cr6.eq) goto loc_881A0D68;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A0C90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A0C94;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A0C98;
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
	ctx.current_instruction = 0x881A0CA8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A0CAC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a0cb8
	if (!ctx.cr0.lt) goto loc_881A0CB8;
	// bl 0x88156678
	ctx.lr = 0x881A0CB8;
	sub_88156678(ctx, base);
loc_881A0CB8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a0d64
	if (!ctx.cr6.eq) goto loc_881A0D64;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a0d68
	goto loc_881A0D68;
loc_881A0CC8:
	// rlwinm r29,r17,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x2;
	// stbx r17,r24,r14
	ctx.current_instruction = 0x881A0CCC;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r17.u8);
	// clrlwi r28,r17,31
	ctx.r28.u64 = ctx.r17.u32 & 0x1;
	// b 0x881a0d74
	goto loc_881A0D74;
loc_881A0CD8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x881a0cfc
	if (ctx.cr6.eq) goto loc_881A0CFC;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A0CE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A0CE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// stbx r9,r24,r14
	ctx.current_instruction = 0x881A0CEC;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r9.u8);
	// rlwinm r29,r9,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x881a0d74
	goto loc_881A0D74;
loc_881A0CFC:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A0CFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A0D00;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A0D04;
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
	ctx.current_instruction = 0x881A0D14;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A0D18;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a0d24
	if (!ctx.cr0.lt) goto loc_881A0D24;
	// bl 0x88156678
	ctx.lr = 0x881A0D24;
	sub_88156678(ctx, base);
loc_881A0D24:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a0d68
	if (!ctx.cr6.eq) goto loc_881A0D68;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A0D2C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A0D30;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A0D34;
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
	ctx.current_instruction = 0x881A0D44;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A0D48;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a0d54
	if (!ctx.cr0.lt) goto loc_881A0D54;
	// bl 0x88156678
	ctx.lr = 0x881A0D54;
	sub_88156678(ctx, base);
loc_881A0D54:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a0d64
	if (!ctx.cr6.eq) goto loc_881A0D64;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a0d68
	goto loc_881A0D68;
loc_881A0D64:
	// li r29,0
	ctx.r29.s64 = 0;
loc_881A0D68:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stbx r10,r24,r14
	ctx.current_instruction = 0x881A0D70;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r10.u8);
loc_881A0D74:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881a0dc0
	if (ctx.cr6.eq) goto loc_881A0DC0;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A0D7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A0D88;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881A0D8C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A0D90;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A0D9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A0D9C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881A0DA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A0DB0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A0DC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A0DC0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881a12a4
	if (ctx.cr6.eq) goto loc_881A12A4;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A0DC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A0DD4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881A0DD8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A0DDC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A0DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A0DE8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881A0DF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x881a1290
	goto loc_881A1290;
loc_881A0DFC:
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 2, ctx.xer);
	// bne cr6,0x881a0fe4
	if (!ctx.cr6.eq) goto loc_881A0FE4;
	// lwz r26,1768(r31)
	ctx.current_instruction = 0x881A0E04;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x881A0E20;
	sub_88052D90(ctx, base);
loc_881A0E20:
	// lwz r11,3408(r31)
	ctx.current_instruction = 0x881A0E20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a0ec0
	if (ctx.cr6.eq) goto loc_881A0EC0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x881a0eb0
	if (!ctx.cr6.eq) goto loc_881A0EB0;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A0E34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A0E38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881a0eb0
	if (!ctx.cr6.eq) goto loc_881A0EB0;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A0E48;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A0E4C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A0E50;
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
	ctx.current_instruction = 0x881A0E60;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A0E64;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a0e70
	if (!ctx.cr0.lt) goto loc_881A0E70;
	// bl 0x88156678
	ctx.lr = 0x881A0E70;
	sub_88156678(ctx, base);
loc_881A0E70:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a0f50
	if (!ctx.cr6.eq) goto loc_881A0F50;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A0E78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A0E7C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A0E80;
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
	ctx.current_instruction = 0x881A0E90;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A0E94;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a0ea0
	if (!ctx.cr0.lt) goto loc_881A0EA0;
	// bl 0x88156678
	ctx.lr = 0x881A0EA0;
	sub_88156678(ctx, base);
loc_881A0EA0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a0f4c
	if (!ctx.cr6.eq) goto loc_881A0F4C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a0f50
	goto loc_881A0F50;
loc_881A0EB0:
	// rlwinm r29,r17,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x2;
	// stbx r17,r24,r14
	ctx.current_instruction = 0x881A0EB4;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r17.u8);
	// clrlwi r28,r17,31
	ctx.r28.u64 = ctx.r17.u32 & 0x1;
	// b 0x881a0f5c
	goto loc_881A0F5C;
loc_881A0EC0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x881a0ee4
	if (ctx.cr6.eq) goto loc_881A0EE4;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A0EC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A0ECC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// stbx r9,r24,r14
	ctx.current_instruction = 0x881A0ED4;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r9.u8);
	// rlwinm r29,r9,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x881a0f5c
	goto loc_881A0F5C;
loc_881A0EE4:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A0EE4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A0EE8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A0EEC;
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
	ctx.current_instruction = 0x881A0EFC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A0F00;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a0f0c
	if (!ctx.cr0.lt) goto loc_881A0F0C;
	// bl 0x88156678
	ctx.lr = 0x881A0F0C;
	sub_88156678(ctx, base);
loc_881A0F0C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a0f50
	if (!ctx.cr6.eq) goto loc_881A0F50;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A0F14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A0F18;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A0F1C;
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
	ctx.current_instruction = 0x881A0F2C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A0F30;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a0f3c
	if (!ctx.cr0.lt) goto loc_881A0F3C;
	// bl 0x88156678
	ctx.lr = 0x881A0F3C;
	sub_88156678(ctx, base);
loc_881A0F3C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a0f4c
	if (!ctx.cr6.eq) goto loc_881A0F4C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a0f50
	goto loc_881A0F50;
loc_881A0F4C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_881A0F50:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stbx r10,r24,r14
	ctx.current_instruction = 0x881A0F58;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r10.u8);
loc_881A0F5C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881a0fa8
	if (ctx.cr6.eq) goto loc_881A0FA8;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A0F64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A0F70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881A0F74;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A0F78;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A0F84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A0F84:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881A0F8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A0F98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A0FA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A0FA8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881a12a4
	if (ctx.cr6.eq) goto loc_881A12A4;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A0FB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A0FBC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881A0FC0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A0FC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A0FD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A0FD0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881A0FD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x881a1290
	goto loc_881A1290;
loc_881A0FE4:
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// bne cr6,0x881a12a4
	if (!ctx.cr6.eq) goto loc_881A12A4;
	// lwz r26,1768(r31)
	ctx.current_instruction = 0x881A0FEC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88052d90
	ctx.lr = 0x881A1000;
	sub_88052D90(ctx, base);
loc_881A1000:
	// lwz r11,2480(r31)
	ctx.current_instruction = 0x881A1000;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,84(r31)
	ctx.current_instruction = 0x881A1008;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bne cr6,0x881a1020
	if (!ctx.cr6.eq) goto loc_881A1020;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r30)
	ctx.current_instruction = 0x881A1018;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x881a1144
	goto loc_881A1144;
loc_881A1020:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881A1020;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.current_instruction = 0x881A1024;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881A102C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881A103C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a110c
	if (ctx.cr6.lt) goto loc_881A110C;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x881A104C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	ctx.current_instruction = 0x881A105C;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	ctx.current_instruction = 0x881A1064;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881a1104
	if (!ctx.cr6.lt) goto loc_881A1104;
loc_881A106C:
	// lwz r10,16(r30)
	ctx.current_instruction = 0x881A106C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881A1070;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881a1098
	if (ctx.cr6.lt) goto loc_881A1098;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x881A1088;
	sub_88156440(ctx, base);
loc_881A1088:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881a106c
	if (ctx.cr6.eq) goto loc_881A106C;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a1144
	goto loc_881A1144;
loc_881A1098:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881A1098;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x881A10A0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.current_instruction = 0x881A10A8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.current_instruction = 0x881A10AC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r11)
	ctx.current_instruction = 0x881A10B4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881A10B8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r6,r10,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881A10C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	ctx.current_instruction = 0x881A10C4;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881A10CC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r10,8(r30)
	ctx.current_instruction = 0x881A10E8;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
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
	// std r5,0(r30)
	ctx.current_instruction = 0x881A1100;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_881A1104:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a1144
	goto loc_881A1144;
loc_881A110C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881A1114;
	sub_88156500(ctx, base);
loc_881A1114:
	// ld r11,0(r30)
	ctx.current_instruction = 0x881A1114;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x881A112C;
	sub_88156500(ctx, base);
loc_881A112C:
	// add r10,r29,r15
	ctx.r10.u64 = ctx.r29.u64 + ctx.r15.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881A1134;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a1114
	if (ctx.cr6.lt) goto loc_881A1114;
loc_881A1144:
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881A1144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881A114C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881a15ac
	if (!ctx.cr6.eq) goto loc_881A15AC;
	// rlwinm r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// lwz r28,112(r1)
	ctx.current_instruction = 0x881A115C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,116(r1)
	ctx.current_instruction = 0x881A1160;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stbx r30,r24,r14
	ctx.current_instruction = 0x881A1164;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r30.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a11b4
	if (ctx.cr6.eq) goto loc_881A11B4;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A1170;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A117C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1190;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1190:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A1198;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A11A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A11B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A11B4:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a1204
	if (ctx.cr6.eq) goto loc_881A1204;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A11C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A11CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A11E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A11E0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A11E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A11F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1204:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a1254
	if (ctx.cr6.eq) goto loc_881A1254;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A1210;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A121C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1230:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A1238;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A1244;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1254:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a12a4
	if (ctx.cr6.eq) goto loc_881A12A4;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A1260;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A126C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1280:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A1288;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,3
	ctx.r6.s64 = 3;
loc_881A1290:
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A1290;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// li r4,8
	ctx.r4.s64 = 8;
loc_881A1298:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A12A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A12A4:
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// lwz r10,3200(r31)
	ctx.current_instruction = 0x881A12A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// addi r9,r11,11312
	ctx.r9.s64 = ctx.r11.s64 + 11312;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881a12d8
	if (!ctx.cr6.eq) goto loc_881A12D8;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r26,-2
	ctx.r10.s64 = ctx.r26.s64 + -2;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881A12C8:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x881A12C8;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x881A12D0;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881a12c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A12C8;
loc_881A12D8:
	// lwz r11,3184(r31)
	ctx.current_instruction = 0x881A12D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3184);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r7,264(r31)
	ctx.current_instruction = 0x881A12E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r6,204(r31)
	ctx.current_instruction = 0x881A12EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A12F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A12F8:
	// lwz r28,396(r1)
	ctx.current_instruction = 0x881A12F8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r29,404(r1)
	ctx.current_instruction = 0x881A1300;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// b 0x881a1314
	goto loc_881A1314;
loc_881A1308:
	// add r9,r24,r11
	ctx.r9.u64 = ctx.r24.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r9)
	ctx.current_instruction = 0x881A1310;
	REX_STORE_U8(ctx.r9.u32 + 8, ctx.r10.u8);
loc_881A1314:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x881a1324
	if (ctx.cr6.eq) goto loc_881A1324;
	// lwz r11,236(r31)
	ctx.current_instruction = 0x881A131C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// b 0x881a1328
	goto loc_881A1328;
loc_881A1324:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_881A1328:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// blt cr6,0x881a076c
	if (ctx.cr6.lt) goto loc_881A076C;
	// lwz r11,132(r1)
	ctx.current_instruction = 0x881A1338;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a15b8
	if (ctx.cr6.eq) goto loc_881A15B8;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881A1344;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r5,468(r31)
	ctx.current_instruction = 0x881A134C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwz r27,364(r1)
	ctx.current_instruction = 0x881A1358;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// bl 0x8819cb88
	ctx.lr = 0x881A138C;
	sub_8819CB88(ctx, base);
loc_881A138C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881a1398
	if (ctx.cr6.eq) goto loc_881A1398;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
loc_881A1398:
	// lwz r26,1772(r31)
	ctx.current_instruction = 0x881A1398;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r11,112(r1)
	ctx.current_instruction = 0x881A13A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lbz r6,4(r14)
	ctx.current_instruction = 0x881A13AC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r14.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A13B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,124(r1)
	ctx.current_instruction = 0x881A13B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r8,128(r1)
	ctx.current_instruction = 0x881A13BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,92(r1)
	ctx.current_instruction = 0x881A13C0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r18,108(r1)
	ctx.current_instruction = 0x881A13C4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// stw r27,84(r1)
	ctx.current_instruction = 0x881A13C8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r23,120(r1)
	ctx.current_instruction = 0x881A13CC;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r26,100(r1)
	ctx.current_instruction = 0x881A13D0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bl 0x881ba970
	ctx.lr = 0x881A13D8;
	sub_881BA970(ctx, base);
loc_881A13D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x881A13E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a1584
	if (ctx.cr6.eq) goto loc_881A1584;
	// lwz r10,3028(r31)
	ctx.current_instruction = 0x881A13F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,136(r31)
	ctx.current_instruction = 0x881A13F8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// addi r7,r26,-2
	ctx.r7.s64 = ctx.r26.s64 + -2;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881A1418:
	// lhzu r8,2(r7)
	ctx.current_instruction = 0x881A1418;
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A141C;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a1418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A1418;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,3028(r31)
	ctx.current_instruction = 0x881A1428;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r26,14
	ctx.r6.s64 = ctx.r26.s64 + 14;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_881A1444:
	// lhzu r9,2(r6)
	ctx.current_instruction = 0x881A1444;
	ea = 2 + ctx.r6.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r9,2(r8)
	ctx.current_instruction = 0x881A1448;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a1444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A1444;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3028(r31)
	ctx.current_instruction = 0x881A1454;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r26,30
	ctx.r6.s64 = ctx.r26.s64 + 30;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881A1474:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A1474;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A1478;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a1474
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A1474;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3028(r31)
	ctx.current_instruction = 0x881A1484;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r26,46
	ctx.r6.s64 = ctx.r26.s64 + 46;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_881A14A8:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A14A8;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A14AC;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a14a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A14A8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3028(r31)
	ctx.current_instruction = 0x881A14B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r26,62
	ctx.r6.s64 = ctx.r26.s64 + 62;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881A14D8:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A14D8;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A14DC;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a14d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A14D8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3028(r31)
	ctx.current_instruction = 0x881A14E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r26,78
	ctx.r6.s64 = ctx.r26.s64 + 78;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_881A150C:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A150C;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A1510;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a150c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A150C;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,3028(r31)
	ctx.current_instruction = 0x881A151C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r6,r26,94
	ctx.r6.s64 = ctx.r26.s64 + 94;
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
loc_881A1544:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A1544;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A1548;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a1544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A1544;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,3028(r31)
	ctx.current_instruction = 0x881A1554;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r26,110
	ctx.r7.s64 = ctx.r26.s64 + 110;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_881A1578:
	// lhzu r10,2(r7)
	ctx.current_instruction = 0x881A1578;
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ctx.current_instruction = 0x881A157C;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x881a1578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A1578;
loc_881A1584:
	// lwz r11,3184(r31)
	ctx.current_instruction = 0x881A1584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3184);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,380(r1)
	ctx.current_instruction = 0x881A158C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r7,264(r31)
	ctx.current_instruction = 0x881A1590;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881A1598;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A15A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A15A4:
	// stb r23,12(r27)
	ctx.current_instruction = 0x881A15A4;
	REX_STORE_U8(ctx.r27.u32 + 12, ctx.r23.u8);
	// b 0x881a1e9c
	goto loc_881A1E9C;
loc_881A15AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881A15B8:
	// lbz r11,4(r14)
	ctx.current_instruction = 0x881A15B8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r14.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a1e90
	if (ctx.cr6.eq) goto loc_881A1E90;
	// lwz r10,364(r1)
	ctx.current_instruction = 0x881A15C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,120(r1)
	ctx.current_instruction = 0x881A15CC;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lwz r11,0(r10)
	ctx.current_instruction = 0x881A15D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881a1758
	if (ctx.cr6.eq) goto loc_881A1758;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x881a1758
	if (!ctx.cr6.eq) goto loc_881A1758;
	// lwz r11,2560(r31)
	ctx.current_instruction = 0x881A15E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r30,84(r31)
	ctx.current_instruction = 0x881A15EC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881a1604
	if (!ctx.cr6.eq) goto loc_881A1604;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r30)
	ctx.current_instruction = 0x881A15FC;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x881a172c
	goto loc_881A172C;
loc_881A1604:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881A1604;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.current_instruction = 0x881A1608;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881A1610;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881A1620;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a16f0
	if (ctx.cr6.lt) goto loc_881A16F0;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x881A1630;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	ctx.current_instruction = 0x881A1640;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	ctx.current_instruction = 0x881A1648;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881a16e8
	if (!ctx.cr6.lt) goto loc_881A16E8;
loc_881A1650:
	// lwz r10,16(r30)
	ctx.current_instruction = 0x881A1650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881A1654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881a167c
	if (ctx.cr6.lt) goto loc_881A167C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x881A166C;
	sub_88156440(ctx, base);
loc_881A166C:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881a1650
	if (ctx.cr6.eq) goto loc_881A1650;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a1728
	goto loc_881A1728;
loc_881A167C:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881A167C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881A1684;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x881A168C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x881A1690;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x881A1698;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881A169C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881A16A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	ctx.current_instruction = 0x881A16A8;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881A16B0;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r10,8(r30)
	ctx.current_instruction = 0x881A16CC;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
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
	// std r5,0(r30)
	ctx.current_instruction = 0x881A16E4;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_881A16E8:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a1728
	goto loc_881A1728;
loc_881A16F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881A16F8;
	sub_88156500(ctx, base);
loc_881A16F8:
	// ld r11,0(r30)
	ctx.current_instruction = 0x881A16F8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x881A1710;
	sub_88156500(ctx, base);
loc_881A1710:
	// add r10,r29,r15
	ctx.r10.u64 = ctx.r29.u64 + ctx.r15.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881A1718;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a16f8
	if (ctx.cr6.lt) goto loc_881A16F8;
loc_881A1728:
	// lwz r10,364(r1)
	ctx.current_instruction = 0x881A1728;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
loc_881A172C:
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881A172C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,20(r11)
	ctx.current_instruction = 0x881A1730;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881a15ac
	if (!ctx.cr6.eq) goto loc_881A15AC;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bge cr6,0x881a15ac
	if (!ctx.cr6.lt) goto loc_881A15AC;
	// lwz r11,136(r1)
	ctx.current_instruction = 0x881A1744;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// lwzx r17,r9,r11
	ctx.current_instruction = 0x881A1750;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r16,r9,r8
	ctx.current_instruction = 0x881A1754;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_881A1758:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// stb r16,12(r10)
	ctx.current_instruction = 0x881A175C;
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r16.u8);
	// bne cr6,0x881a17a4
	if (!ctx.cr6.eq) goto loc_881A17A4;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A1764;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A1770;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r26,1772(r31)
	ctx.current_instruction = 0x881A1774;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A1778;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,1836(r31)
	ctx.current_instruction = 0x881A177C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1788:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3200(r31)
	ctx.current_instruction = 0x881A1790;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,1944(r31)
	ctx.current_instruction = 0x881A1798;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x881a1e28
	goto loc_881A1E28;
loc_881A17A4:
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// bne cr6,0x881a198c
	if (!ctx.cr6.eq) goto loc_881A198C;
	// lwz r26,1768(r31)
	ctx.current_instruction = 0x881A17AC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x881A17C8;
	sub_88052D90(ctx, base);
loc_881A17C8:
	// lwz r11,3408(r31)
	ctx.current_instruction = 0x881A17C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a1868
	if (ctx.cr6.eq) goto loc_881A1868;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x881a1858
	if (!ctx.cr6.eq) goto loc_881A1858;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A17DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A17E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881a1858
	if (!ctx.cr6.eq) goto loc_881A1858;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A17F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A17F4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A17F8;
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
	ctx.current_instruction = 0x881A1808;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A180C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a1818
	if (!ctx.cr0.lt) goto loc_881A1818;
	// bl 0x88156678
	ctx.lr = 0x881A1818;
	sub_88156678(ctx, base);
loc_881A1818:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a18f8
	if (!ctx.cr6.eq) goto loc_881A18F8;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A1820;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A1824;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A1828;
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
	ctx.current_instruction = 0x881A1838;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A183C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a1848
	if (!ctx.cr0.lt) goto loc_881A1848;
	// bl 0x88156678
	ctx.lr = 0x881A1848;
	sub_88156678(ctx, base);
loc_881A1848:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a18f4
	if (!ctx.cr6.eq) goto loc_881A18F4;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a18f8
	goto loc_881A18F8;
loc_881A1858:
	// rlwinm r29,r17,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x2;
	// stbx r17,r24,r14
	ctx.current_instruction = 0x881A185C;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r17.u8);
	// clrlwi r28,r17,31
	ctx.r28.u64 = ctx.r17.u32 & 0x1;
	// b 0x881a1904
	goto loc_881A1904;
loc_881A1868:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x881a188c
	if (ctx.cr6.eq) goto loc_881A188C;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A1870;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A1874;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// stbx r9,r24,r14
	ctx.current_instruction = 0x881A187C;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r9.u8);
	// rlwinm r29,r9,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x881a1904
	goto loc_881A1904;
loc_881A188C:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A188C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A1890;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A1894;
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
	ctx.current_instruction = 0x881A18A4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A18A8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a18b4
	if (!ctx.cr0.lt) goto loc_881A18B4;
	// bl 0x88156678
	ctx.lr = 0x881A18B4;
	sub_88156678(ctx, base);
loc_881A18B4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a18f8
	if (!ctx.cr6.eq) goto loc_881A18F8;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A18BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A18C0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A18C4;
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
	ctx.current_instruction = 0x881A18D4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A18D8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a18e4
	if (!ctx.cr0.lt) goto loc_881A18E4;
	// bl 0x88156678
	ctx.lr = 0x881A18E4;
	sub_88156678(ctx, base);
loc_881A18E4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a18f4
	if (!ctx.cr6.eq) goto loc_881A18F4;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a18f8
	goto loc_881A18F8;
loc_881A18F4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_881A18F8:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stbx r10,r24,r14
	ctx.current_instruction = 0x881A1900;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r10.u8);
loc_881A1904:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881a1950
	if (ctx.cr6.eq) goto loc_881A1950;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A190C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A1918;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881A191C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A1920;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A192C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A192C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881A1934;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A1940;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1950:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881a1e34
	if (ctx.cr6.eq) goto loc_881A1E34;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A1958;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A1964;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881A1968;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A196C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1978;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1978:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881A1980;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x881a1e20
	goto loc_881A1E20;
loc_881A198C:
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 2, ctx.xer);
	// bne cr6,0x881a1b74
	if (!ctx.cr6.eq) goto loc_881A1B74;
	// lwz r26,1768(r31)
	ctx.current_instruction = 0x881A1994;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x881A19B0;
	sub_88052D90(ctx, base);
loc_881A19B0:
	// lwz r11,3408(r31)
	ctx.current_instruction = 0x881A19B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a1a50
	if (ctx.cr6.eq) goto loc_881A1A50;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x881a1a40
	if (!ctx.cr6.eq) goto loc_881A1A40;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A19C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A19C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881a1a40
	if (!ctx.cr6.eq) goto loc_881A1A40;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A19D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A19DC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A19E0;
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
	ctx.current_instruction = 0x881A19F0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A19F4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a1a00
	if (!ctx.cr0.lt) goto loc_881A1A00;
	// bl 0x88156678
	ctx.lr = 0x881A1A00;
	sub_88156678(ctx, base);
loc_881A1A00:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a1ae0
	if (!ctx.cr6.eq) goto loc_881A1AE0;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A1A08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A1A0C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A1A10;
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
	ctx.current_instruction = 0x881A1A20;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A1A24;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a1a30
	if (!ctx.cr0.lt) goto loc_881A1A30;
	// bl 0x88156678
	ctx.lr = 0x881A1A30;
	sub_88156678(ctx, base);
loc_881A1A30:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a1adc
	if (!ctx.cr6.eq) goto loc_881A1ADC;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a1ae0
	goto loc_881A1AE0;
loc_881A1A40:
	// rlwinm r29,r17,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x2;
	// stbx r17,r24,r14
	ctx.current_instruction = 0x881A1A44;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r17.u8);
	// clrlwi r28,r17,31
	ctx.r28.u64 = ctx.r17.u32 & 0x1;
	// b 0x881a1aec
	goto loc_881A1AEC;
loc_881A1A50:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x881a1a74
	if (ctx.cr6.eq) goto loc_881A1A74;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A1A58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A1A5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// stbx r9,r24,r14
	ctx.current_instruction = 0x881A1A64;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r9.u8);
	// rlwinm r29,r9,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x881a1aec
	goto loc_881A1AEC;
loc_881A1A74:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A1A74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A1A78;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A1A7C;
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
	ctx.current_instruction = 0x881A1A8C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A1A90;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a1a9c
	if (!ctx.cr0.lt) goto loc_881A1A9C;
	// bl 0x88156678
	ctx.lr = 0x881A1A9C;
	sub_88156678(ctx, base);
loc_881A1A9C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a1ae0
	if (!ctx.cr6.eq) goto loc_881A1AE0;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A1AA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A1AA8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A1AAC;
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
	ctx.current_instruction = 0x881A1ABC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A1AC0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a1acc
	if (!ctx.cr0.lt) goto loc_881A1ACC;
	// bl 0x88156678
	ctx.lr = 0x881A1ACC;
	sub_88156678(ctx, base);
loc_881A1ACC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a1adc
	if (!ctx.cr6.eq) goto loc_881A1ADC;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a1ae0
	goto loc_881A1AE0;
loc_881A1ADC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_881A1AE0:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stbx r10,r24,r14
	ctx.current_instruction = 0x881A1AE8;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r10.u8);
loc_881A1AEC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881a1b38
	if (ctx.cr6.eq) goto loc_881A1B38;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A1AF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A1B00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881A1B04;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A1B08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1B14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881A1B1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A1B28;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1B38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1B38:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881a1e34
	if (ctx.cr6.eq) goto loc_881A1E34;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A1B40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A1B4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881A1B50;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A1B54;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1B60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1B60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881A1B68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x881a1e20
	goto loc_881A1E20;
loc_881A1B74:
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// bne cr6,0x881a1e34
	if (!ctx.cr6.eq) goto loc_881A1E34;
	// lwz r26,1768(r31)
	ctx.current_instruction = 0x881A1B7C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88052d90
	ctx.lr = 0x881A1B90;
	sub_88052D90(ctx, base);
loc_881A1B90:
	// lwz r11,2480(r31)
	ctx.current_instruction = 0x881A1B90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,84(r31)
	ctx.current_instruction = 0x881A1B98;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bne cr6,0x881a1bb0
	if (!ctx.cr6.eq) goto loc_881A1BB0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r30)
	ctx.current_instruction = 0x881A1BA8;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x881a1cd4
	goto loc_881A1CD4;
loc_881A1BB0:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881A1BB0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.current_instruction = 0x881A1BB4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881A1BBC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881A1BCC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a1c9c
	if (ctx.cr6.lt) goto loc_881A1C9C;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x881A1BDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	ctx.current_instruction = 0x881A1BEC;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	ctx.current_instruction = 0x881A1BF4;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881a1c94
	if (!ctx.cr6.lt) goto loc_881A1C94;
loc_881A1BFC:
	// lwz r10,16(r30)
	ctx.current_instruction = 0x881A1BFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881A1C00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881a1c28
	if (ctx.cr6.lt) goto loc_881A1C28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x881A1C18;
	sub_88156440(ctx, base);
loc_881A1C18:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881a1bfc
	if (ctx.cr6.eq) goto loc_881A1BFC;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a1cd4
	goto loc_881A1CD4;
loc_881A1C28:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881A1C28;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881A1C30;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x881A1C38;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x881A1C3C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x881A1C44;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881A1C48;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881A1C50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	ctx.current_instruction = 0x881A1C54;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881A1C5C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r10,8(r30)
	ctx.current_instruction = 0x881A1C78;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
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
	// std r5,0(r30)
	ctx.current_instruction = 0x881A1C90;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_881A1C94:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a1cd4
	goto loc_881A1CD4;
loc_881A1C9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881A1CA4;
	sub_88156500(ctx, base);
loc_881A1CA4:
	// ld r11,0(r30)
	ctx.current_instruction = 0x881A1CA4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x881A1CBC;
	sub_88156500(ctx, base);
loc_881A1CBC:
	// add r10,r29,r15
	ctx.r10.u64 = ctx.r29.u64 + ctx.r15.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881A1CC4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a1ca4
	if (ctx.cr6.lt) goto loc_881A1CA4;
loc_881A1CD4:
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881A1CD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881A1CDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881a15ac
	if (!ctx.cr6.eq) goto loc_881A15AC;
	// rlwinm r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// lwz r28,112(r1)
	ctx.current_instruction = 0x881A1CEC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,116(r1)
	ctx.current_instruction = 0x881A1CF0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stbx r30,r24,r14
	ctx.current_instruction = 0x881A1CF4;
	REX_STORE_U8(ctx.r24.u32 + ctx.r14.u32, ctx.r30.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a1d44
	if (ctx.cr6.eq) goto loc_881A1D44;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A1D00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A1D0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1D20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1D20:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A1D28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A1D34;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1D44:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a1d94
	if (ctx.cr6.eq) goto loc_881A1D94;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A1D50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A1D5C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1D70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A1D78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A1D84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1D94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1D94:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a1de4
	if (ctx.cr6.eq) goto loc_881A1DE4;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A1DA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A1DAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1DC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1DC0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A1DC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A1DD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1DE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1DE4:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a1e34
	if (ctx.cr6.eq) goto loc_881A1E34;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A1DF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A1DFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1E10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1E10:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A1E18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,3
	ctx.r6.s64 = 3;
loc_881A1E20:
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A1E20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// li r4,8
	ctx.r4.s64 = 8;
loc_881A1E28:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1E34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1E34:
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// lwz r10,3200(r31)
	ctx.current_instruction = 0x881A1E38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// addi r9,r11,11312
	ctx.r9.s64 = ctx.r11.s64 + 11312;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881a1e68
	if (!ctx.cr6.eq) goto loc_881A1E68;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r26,-2
	ctx.r10.s64 = ctx.r26.s64 + -2;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881A1E58:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x881A1E58;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x881A1E60;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881a1e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A1E58;
loc_881A1E68:
	// lwz r11,3184(r31)
	ctx.current_instruction = 0x881A1E68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3184);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,380(r1)
	ctx.current_instruction = 0x881A1E70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r7,264(r31)
	ctx.current_instruction = 0x881A1E74;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881A1E7C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A1E88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A1E88:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x881a1e9c
	goto loc_881A1E9C;
loc_881A1E90:
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A1E90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,12(r11)
	ctx.current_instruction = 0x881A1E98;
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
loc_881A1E9C:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x881A1E9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r27,r24,1
	ctx.r27.s64 = ctx.r24.s64 + 1;
	// lwz r10,364(r1)
	ctx.current_instruction = 0x881A1EA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a211c
	if (ctx.cr6.eq) goto loc_881A211C;
	// lwz r7,404(r1)
	ctx.current_instruction = 0x881A1EB0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881A1EB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r26,396(r1)
	ctx.current_instruction = 0x881A1EC0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r5,472(r31)
	ctx.current_instruction = 0x881A1ECC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 472);
	// lwz r25,364(r1)
	ctx.current_instruction = 0x881A1ED0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// add r29,r11,r5
	ctx.r29.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// bl 0x8819cb88
	ctx.lr = 0x881A1EFC;
	sub_8819CB88(ctx, base);
loc_881A1EFC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881a1f08
	if (ctx.cr6.eq) goto loc_881A1F08;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
loc_881A1F08:
	// stw r25,84(r1)
	ctx.current_instruction = 0x881A1F08;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,112(r1)
	ctx.current_instruction = 0x881A1F10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r30,1772(r31)
	ctx.current_instruction = 0x881A1F18;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r6,5(r14)
	ctx.current_instruction = 0x881A1F24;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r14.u32 + 5);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A1F28;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,124(r1)
	ctx.current_instruction = 0x881A1F2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r8,128(r1)
	ctx.current_instruction = 0x881A1F30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,92(r1)
	ctx.current_instruction = 0x881A1F34;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r18,108(r1)
	ctx.current_instruction = 0x881A1F38;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// stw r24,120(r1)
	ctx.current_instruction = 0x881A1F3C;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r30,100(r1)
	ctx.current_instruction = 0x881A1F40;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x881ba970
	ctx.lr = 0x881A1F48;
	sub_881BA970(ctx, base);
loc_881A1F48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x881A1F50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a20f4
	if (ctx.cr6.eq) goto loc_881A20F4;
	// lwz r10,3036(r31)
	ctx.current_instruction = 0x881A1F60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,136(r31)
	ctx.current_instruction = 0x881A1F68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// addi r7,r30,-2
	ctx.r7.s64 = ctx.r30.s64 + -2;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_881A1F88:
	// lhzu r8,2(r7)
	ctx.current_instruction = 0x881A1F88;
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A1F8C;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a1f88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A1F88;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,3036(r31)
	ctx.current_instruction = 0x881A1F98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,14
	ctx.r6.s64 = ctx.r30.s64 + 14;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_881A1FB4:
	// lhzu r9,2(r6)
	ctx.current_instruction = 0x881A1FB4;
	ea = 2 + ctx.r6.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r9,2(r8)
	ctx.current_instruction = 0x881A1FB8;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881a1fb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A1FB4;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3036(r31)
	ctx.current_instruction = 0x881A1FC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
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
loc_881A1FE4:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A1FE4;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A1FE8;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a1fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A1FE4;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3036(r31)
	ctx.current_instruction = 0x881A1FF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
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
loc_881A2018:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A2018;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A201C;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a2018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A2018;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3036(r31)
	ctx.current_instruction = 0x881A2028;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
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
loc_881A2048:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A2048;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A204C;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a2048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A2048;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3036(r31)
	ctx.current_instruction = 0x881A2058;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
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
loc_881A207C:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A207C;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A2080;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a207c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A207C;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,3036(r31)
	ctx.current_instruction = 0x881A208C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
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
loc_881A20B4:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x881A20B4;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x881A20B8;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881a20b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A20B4;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,3036(r31)
	ctx.current_instruction = 0x881A20C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
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
loc_881A20E8:
	// lhzu r10,2(r7)
	ctx.current_instruction = 0x881A20E8;
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ctx.current_instruction = 0x881A20EC;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x881a20e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A20E8;
loc_881A20F4:
	// lwz r11,3184(r31)
	ctx.current_instruction = 0x881A20F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3184);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,388(r1)
	ctx.current_instruction = 0x881A20FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r7,264(r31)
	ctx.current_instruction = 0x881A2100;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881A2108;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A2114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A2114:
	// stb r24,13(r25)
	ctx.current_instruction = 0x881A2114;
	REX_STORE_U8(ctx.r25.u32 + 13, ctx.r24.u8);
	// b 0x881a29f4
	goto loc_881A29F4;
loc_881A211C:
	// lbz r11,5(r14)
	ctx.current_instruction = 0x881A211C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r14.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881a29ec
	if (ctx.cr6.eq) goto loc_881A29EC;
	// lwz r11,0(r10)
	ctx.current_instruction = 0x881A2128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// stw r29,120(r1)
	ctx.current_instruction = 0x881A2134;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881a22b8
	if (ctx.cr6.eq) goto loc_881A22B8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x881a22b8
	if (!ctx.cr6.eq) goto loc_881A22B8;
	// lwz r11,2560(r31)
	ctx.current_instruction = 0x881A2148;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r30,84(r31)
	ctx.current_instruction = 0x881A214C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881a2164
	if (!ctx.cr6.eq) goto loc_881A2164;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r30)
	ctx.current_instruction = 0x881A215C;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x881a228c
	goto loc_881A228C;
loc_881A2164:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881A2164;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.current_instruction = 0x881A2168;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881A2170;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881A2180;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a2250
	if (ctx.cr6.lt) goto loc_881A2250;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x881A2190;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	ctx.current_instruction = 0x881A21A0;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	ctx.current_instruction = 0x881A21A8;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881a2248
	if (!ctx.cr6.lt) goto loc_881A2248;
loc_881A21B0:
	// lwz r10,16(r30)
	ctx.current_instruction = 0x881A21B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881A21B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881a21dc
	if (ctx.cr6.lt) goto loc_881A21DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x881A21CC;
	sub_88156440(ctx, base);
loc_881A21CC:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881a21b0
	if (ctx.cr6.eq) goto loc_881A21B0;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a2288
	goto loc_881A2288;
loc_881A21DC:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881A21DC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881A21E4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x881A21EC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x881A21F0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x881A21F8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881A21FC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881A2204;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	ctx.current_instruction = 0x881A2208;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881A2210;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r10,8(r30)
	ctx.current_instruction = 0x881A222C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
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
	// std r5,0(r30)
	ctx.current_instruction = 0x881A2244;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_881A2248:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a2288
	goto loc_881A2288;
loc_881A2250:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881A2258;
	sub_88156500(ctx, base);
loc_881A2258:
	// ld r11,0(r30)
	ctx.current_instruction = 0x881A2258;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x881A2270;
	sub_88156500(ctx, base);
loc_881A2270:
	// add r10,r29,r15
	ctx.r10.u64 = ctx.r29.u64 + ctx.r15.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881A2278;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a2258
	if (ctx.cr6.lt) goto loc_881A2258;
loc_881A2288:
	// lwz r10,364(r1)
	ctx.current_instruction = 0x881A2288;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
loc_881A228C:
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881A228C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,20(r11)
	ctx.current_instruction = 0x881A2290;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881a15ac
	if (!ctx.cr6.eq) goto loc_881A15AC;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bge cr6,0x881a15ac
	if (!ctx.cr6.lt) goto loc_881A15AC;
	// lwz r11,136(r1)
	ctx.current_instruction = 0x881A22A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// lwzx r17,r9,r11
	ctx.current_instruction = 0x881A22B0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r16,r9,r8
	ctx.current_instruction = 0x881A22B4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_881A22B8:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// stb r16,13(r10)
	ctx.current_instruction = 0x881A22BC;
	REX_STORE_U8(ctx.r10.u32 + 13, ctx.r16.u8);
	// bne cr6,0x881a2304
	if (!ctx.cr6.eq) goto loc_881A2304;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A22C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A22D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r26,1772(r31)
	ctx.current_instruction = 0x881A22D4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A22D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,1836(r31)
	ctx.current_instruction = 0x881A22DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A22E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A22E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3200(r31)
	ctx.current_instruction = 0x881A22F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,1944(r31)
	ctx.current_instruction = 0x881A22F8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x881a2988
	goto loc_881A2988;
loc_881A2304:
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// bne cr6,0x881a24ec
	if (!ctx.cr6.eq) goto loc_881A24EC;
	// lwz r26,1768(r31)
	ctx.current_instruction = 0x881A230C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x881A2328;
	sub_88052D90(ctx, base);
loc_881A2328:
	// lwz r11,3408(r31)
	ctx.current_instruction = 0x881A2328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a23c8
	if (ctx.cr6.eq) goto loc_881A23C8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x881a23b8
	if (!ctx.cr6.eq) goto loc_881A23B8;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A233C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A2340;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881a23b8
	if (!ctx.cr6.eq) goto loc_881A23B8;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A2350;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A2354;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A2358;
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
	ctx.current_instruction = 0x881A2368;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A236C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a2378
	if (!ctx.cr0.lt) goto loc_881A2378;
	// bl 0x88156678
	ctx.lr = 0x881A2378;
	sub_88156678(ctx, base);
loc_881A2378:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a2458
	if (!ctx.cr6.eq) goto loc_881A2458;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A2380;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A2384;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A2388;
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
	ctx.current_instruction = 0x881A2398;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A239C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a23a8
	if (!ctx.cr0.lt) goto loc_881A23A8;
	// bl 0x88156678
	ctx.lr = 0x881A23A8;
	sub_88156678(ctx, base);
loc_881A23A8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a2454
	if (!ctx.cr6.eq) goto loc_881A2454;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a2458
	goto loc_881A2458;
loc_881A23B8:
	// rlwinm r29,r17,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x2;
	// stbx r17,r27,r14
	ctx.current_instruction = 0x881A23BC;
	REX_STORE_U8(ctx.r27.u32 + ctx.r14.u32, ctx.r17.u8);
	// clrlwi r28,r17,31
	ctx.r28.u64 = ctx.r17.u32 & 0x1;
	// b 0x881a2464
	goto loc_881A2464;
loc_881A23C8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x881a23ec
	if (ctx.cr6.eq) goto loc_881A23EC;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A23D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A23D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// stbx r9,r27,r14
	ctx.current_instruction = 0x881A23DC;
	REX_STORE_U8(ctx.r27.u32 + ctx.r14.u32, ctx.r9.u8);
	// rlwinm r29,r9,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x881a2464
	goto loc_881A2464;
loc_881A23EC:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A23EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A23F0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A23F4;
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
	ctx.current_instruction = 0x881A2404;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A2408;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a2414
	if (!ctx.cr0.lt) goto loc_881A2414;
	// bl 0x88156678
	ctx.lr = 0x881A2414;
	sub_88156678(ctx, base);
loc_881A2414:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a2458
	if (!ctx.cr6.eq) goto loc_881A2458;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A241C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A2420;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A2424;
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
	ctx.current_instruction = 0x881A2434;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A2438;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a2444
	if (!ctx.cr0.lt) goto loc_881A2444;
	// bl 0x88156678
	ctx.lr = 0x881A2444;
	sub_88156678(ctx, base);
loc_881A2444:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a2454
	if (!ctx.cr6.eq) goto loc_881A2454;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a2458
	goto loc_881A2458;
loc_881A2454:
	// li r29,0
	ctx.r29.s64 = 0;
loc_881A2458:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stbx r10,r27,r14
	ctx.current_instruction = 0x881A2460;
	REX_STORE_U8(ctx.r27.u32 + ctx.r14.u32, ctx.r10.u8);
loc_881A2464:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881a24b0
	if (ctx.cr6.eq) goto loc_881A24B0;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A246C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A2478;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881A247C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A2480;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A248C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A248C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881A2494;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A24A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A24B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A24B0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881a2994
	if (ctx.cr6.eq) goto loc_881A2994;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A24B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A24C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881A24C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A24CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A24D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A24D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881A24E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x881a2980
	goto loc_881A2980;
loc_881A24EC:
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 2, ctx.xer);
	// bne cr6,0x881a26d4
	if (!ctx.cr6.eq) goto loc_881A26D4;
	// lwz r26,1768(r31)
	ctx.current_instruction = 0x881A24F4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x881A2510;
	sub_88052D90(ctx, base);
loc_881A2510:
	// lwz r11,3408(r31)
	ctx.current_instruction = 0x881A2510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a25b0
	if (ctx.cr6.eq) goto loc_881A25B0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x881a25a0
	if (!ctx.cr6.eq) goto loc_881A25A0;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A2524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A2528;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881a25a0
	if (!ctx.cr6.eq) goto loc_881A25A0;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A2538;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A253C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A2540;
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
	ctx.current_instruction = 0x881A2550;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A2554;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a2560
	if (!ctx.cr0.lt) goto loc_881A2560;
	// bl 0x88156678
	ctx.lr = 0x881A2560;
	sub_88156678(ctx, base);
loc_881A2560:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a2640
	if (!ctx.cr6.eq) goto loc_881A2640;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A2568;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A256C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A2570;
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
	ctx.current_instruction = 0x881A2580;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A2584;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a2590
	if (!ctx.cr0.lt) goto loc_881A2590;
	// bl 0x88156678
	ctx.lr = 0x881A2590;
	sub_88156678(ctx, base);
loc_881A2590:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a263c
	if (!ctx.cr6.eq) goto loc_881A263C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a2640
	goto loc_881A2640;
loc_881A25A0:
	// rlwinm r29,r17,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x2;
	// stbx r17,r27,r14
	ctx.current_instruction = 0x881A25A4;
	REX_STORE_U8(ctx.r27.u32 + ctx.r14.u32, ctx.r17.u8);
	// clrlwi r28,r17,31
	ctx.r28.u64 = ctx.r17.u32 & 0x1;
	// b 0x881a264c
	goto loc_881A264C;
loc_881A25B0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x881a25d4
	if (ctx.cr6.eq) goto loc_881A25D4;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A25B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A25BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// stbx r9,r27,r14
	ctx.current_instruction = 0x881A25C4;
	REX_STORE_U8(ctx.r27.u32 + ctx.r14.u32, ctx.r9.u8);
	// rlwinm r29,r9,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x881a264c
	goto loc_881A264C;
loc_881A25D4:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A25D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A25D8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A25DC;
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
	ctx.current_instruction = 0x881A25EC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A25F0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a25fc
	if (!ctx.cr0.lt) goto loc_881A25FC;
	// bl 0x88156678
	ctx.lr = 0x881A25FC;
	sub_88156678(ctx, base);
loc_881A25FC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a2640
	if (!ctx.cr6.eq) goto loc_881A2640;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881A2604;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881A2608;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881A260C;
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
	ctx.current_instruction = 0x881A261C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881A2620;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881a262c
	if (!ctx.cr0.lt) goto loc_881A262C;
	// bl 0x88156678
	ctx.lr = 0x881A262C;
	sub_88156678(ctx, base);
loc_881A262C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881a263c
	if (!ctx.cr6.eq) goto loc_881A263C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x881a2640
	goto loc_881A2640;
loc_881A263C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_881A2640:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stbx r10,r27,r14
	ctx.current_instruction = 0x881A2648;
	REX_STORE_U8(ctx.r27.u32 + ctx.r14.u32, ctx.r10.u8);
loc_881A264C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881a2698
	if (ctx.cr6.eq) goto loc_881A2698;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A2654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A2660;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881A2664;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A2668;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A2674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A2674:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881A267C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A2688;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A2698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A2698:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881a2994
	if (ctx.cr6.eq) goto loc_881A2994;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A26A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.current_instruction = 0x881A26AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881A26B0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r4,116(r1)
	ctx.current_instruction = 0x881A26B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A26C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A26C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881A26C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x881a2980
	goto loc_881A2980;
loc_881A26D4:
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// bne cr6,0x881a2994
	if (!ctx.cr6.eq) goto loc_881A2994;
	// lwz r26,1768(r31)
	ctx.current_instruction = 0x881A26DC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88052d90
	ctx.lr = 0x881A26F0;
	sub_88052D90(ctx, base);
loc_881A26F0:
	// lwz r11,2480(r31)
	ctx.current_instruction = 0x881A26F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,84(r31)
	ctx.current_instruction = 0x881A26F8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bne cr6,0x881a2710
	if (!ctx.cr6.eq) goto loc_881A2710;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r30)
	ctx.current_instruction = 0x881A2708;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x881a2834
	goto loc_881A2834;
loc_881A2710:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881A2710;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.current_instruction = 0x881A2714;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881A271C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881A272C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a27fc
	if (ctx.cr6.lt) goto loc_881A27FC;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x881A273C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	ctx.current_instruction = 0x881A274C;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	ctx.current_instruction = 0x881A2754;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881a27f4
	if (!ctx.cr6.lt) goto loc_881A27F4;
loc_881A275C:
	// lwz r10,16(r30)
	ctx.current_instruction = 0x881A275C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881A2760;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881a2788
	if (ctx.cr6.lt) goto loc_881A2788;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x881A2778;
	sub_88156440(ctx, base);
loc_881A2778:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881a275c
	if (ctx.cr6.eq) goto loc_881A275C;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a2834
	goto loc_881A2834;
loc_881A2788:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x881A2788;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x881A2790;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x881A2798;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x881A279C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x881A27A4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881A27A8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881A27B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	ctx.current_instruction = 0x881A27B4;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881A27BC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r10,8(r30)
	ctx.current_instruction = 0x881A27D8;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
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
	// std r5,0(r30)
	ctx.current_instruction = 0x881A27F0;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_881A27F4:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881a2834
	goto loc_881A2834;
loc_881A27FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x881A2804;
	sub_88156500(ctx, base);
loc_881A2804:
	// ld r11,0(r30)
	ctx.current_instruction = 0x881A2804;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x88156500
	ctx.lr = 0x881A281C;
	sub_88156500(ctx, base);
loc_881A281C:
	// add r10,r29,r15
	ctx.r10.u64 = ctx.r29.u64 + ctx.r15.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881A2824;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881a2804
	if (ctx.cr6.lt) goto loc_881A2804;
loc_881A2834:
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881A2834;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881A283C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881a15ac
	if (!ctx.cr6.eq) goto loc_881A15AC;
	// rlwinm r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// lwz r28,112(r1)
	ctx.current_instruction = 0x881A284C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,116(r1)
	ctx.current_instruction = 0x881A2850;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stbx r30,r27,r14
	ctx.current_instruction = 0x881A2854;
	REX_STORE_U8(ctx.r27.u32 + ctx.r14.u32, ctx.r30.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881a28a4
	if (ctx.cr6.eq) goto loc_881A28A4;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A2860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A286C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A2880;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A2880:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A2888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A2894;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A28A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A28A4:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a28f4
	if (ctx.cr6.eq) goto loc_881A28F4;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A28B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A28BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A28D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A28D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A28D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A28E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A28F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A28F4:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a2944
	if (ctx.cr6.eq) goto loc_881A2944;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A2900;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A290C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A2920;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A2920:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A2928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A2934;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A2944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A2944:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881a2994
	if (ctx.cr6.eq) goto loc_881A2994;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881A2950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881A295C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A2970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A2970:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881a2a0c
	if (!ctx.cr6.eq) goto loc_881A2A0C;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881A2978;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,3
	ctx.r6.s64 = 3;
loc_881A2980:
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881A2980;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// li r4,8
	ctx.r4.s64 = 8;
loc_881A2988:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A2994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A2994:
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// lwz r10,3200(r31)
	ctx.current_instruction = 0x881A2998;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// addi r9,r11,11312
	ctx.r9.s64 = ctx.r11.s64 + 11312;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881a29c8
	if (!ctx.cr6.eq) goto loc_881A29C8;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r26,-2
	ctx.r10.s64 = ctx.r26.s64 + -2;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881A29B8:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x881A29B8;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x881A29C0;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881a29b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A29B8;
loc_881A29C8:
	// lwz r11,3184(r31)
	ctx.current_instruction = 0x881A29C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3184);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,388(r1)
	ctx.current_instruction = 0x881A29D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r7,264(r31)
	ctx.current_instruction = 0x881A29D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881A29DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881A29E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881A29E8:
	// b 0x881a29f4
	goto loc_881A29F4;
loc_881A29EC:
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,13(r10)
	ctx.current_instruction = 0x881A29F0;
	REX_STORE_U8(ctx.r10.u32 + 13, ctx.r9.u8);
loc_881A29F4:
	// lwz r11,364(r1)
	ctx.current_instruction = 0x881A29F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,120(r1)
	ctx.current_instruction = 0x881A29FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881A2A00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,0(r11)
	ctx.current_instruction = 0x881A2A08;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_881A2A0C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_90) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE44);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE44;
	ctx.current_instruction = 0x881EEE44;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_71) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF044);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF044;
	ctx.current_instruction = 0x881EF044;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_124) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF1EC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF1EC;
	ctx.current_instruction = 0x881EF1EC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savefpr_21) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF26C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF26C;
	ctx.current_instruction = 0x881EF26C;
	// stfd f21,-88(r12)
	ctx.current_instruction = 0x881EF26C;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(__restfpr_28) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF2D4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF2D4;
	ctx.current_instruction = 0x881EF2D4;
	// lfd f28,-32(r12)
	ctx.current_instruction = 0x881EF2D4;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_881EFE40) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EFE40);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EFE40;
	ctx.current_instruction = 0x881EFE40;
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_881EFE50:
	// lhzx r9,r10,r11
	ctx.current_instruction = 0x881EFE50;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r9,0(r11)
	ctx.current_instruction = 0x881EFE58;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x881efe6c
	if (ctx.cr0.eq) goto loc_881EFE6C;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x881efe50
	if (!ctx.cr0.eq) goto loc_881EFE50;
loc_881EFE6C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881EFE90:
	// sthu r9,2(r11)
	ctx.current_instruction = 0x881EFE90;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x881efe90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881EFE90;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F11E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F11E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F11E8) {
			switch (rex_dispatch_address) {
				case 0x881F1244:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F11E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F1244: goto loc_881F1244;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881F11E8;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	ctx.current_instruction = 0x881F11F0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// std r28,-24(r1)
	ctx.current_instruction = 0x881F11F4;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	ctx.current_instruction = 0x881F11FC;
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F1200;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r28,80(r31)
	ctx.current_instruction = 0x881F1208;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r11,24320
	ctx.r29.s64 = ctx.r11.s64 + 24320;
	// b 0x881f1230
	goto loc_881F1230;
loc_881F1230:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x881F1230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.current_instruction = 0x881F123C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x881ef720
	ctx.lr = 0x881F1244;
	sub_881EF720(ctx, base);
loc_881F1244:
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// lwz r27,164(r31)
	ctx.current_instruction = 0x881F1248;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r28,80(r31)
	ctx.current_instruction = 0x881F1250;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r10,24320
	ctx.r29.s64 = ctx.r10.s64 + 24320;
	// addi r10,r11,24324
	ctx.r10.s64 = ctx.r11.s64 + 24324;
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881F125C;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881F1260;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.current_instruction = 0x881F1264;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.current_instruction = 0x881F1268;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.current_instruction = 0x881F126C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F2248) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F2248;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F2248) {
			switch (rex_dispatch_address) {
				case 0x881F225C:
				case 0x881F2270:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F2248;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F225C: goto loc_881F225C;
		case 0x881F2270: goto loc_881F2270;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F224C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881F2250;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x88243990
	ctx.lr = 0x881F225C;
	__imp__NtFlushBuffersFile(ctx, base);
loc_881F225C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881f226c
	if (ctx.cr0.lt) goto loc_881F226C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881f2274
	goto loc_881F2274;
loc_881F226C:
	// bl 0x881ed488
	ctx.lr = 0x881F2270;
	sub_881ED488(ctx, base);
loc_881F2270:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881F2274:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F2278;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881FC020) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881FC020;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881FC020) {
			switch (rex_dispatch_address) {
				case 0x881FC028:
				case 0x881FC03C:
				case 0x881FC050:
				case 0x881FC074:
				case 0x881FC09C:
				case 0x881FC0C4:
				case 0x881FC0EC:
				case 0x881FC10C:
				case 0x881FC138:
				case 0x881FC164:
				case 0x881FC170:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881FC020;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881FC028: goto loc_881FC028;
		case 0x881FC03C: goto loc_881FC03C;
		case 0x881FC050: goto loc_881FC050;
		case 0x881FC074: goto loc_881FC074;
		case 0x881FC09C: goto loc_881FC09C;
		case 0x881FC0C4: goto loc_881FC0C4;
		case 0x881FC0EC: goto loc_881FC0EC;
		case 0x881FC10C: goto loc_881FC10C;
		case 0x881FC138: goto loc_881FC138;
		case 0x881FC164: goto loc_881FC164;
		case 0x881FC170: goto loc_881FC170;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881FC028;
	__savegprlr_28(ctx, base);
loc_881FC028:
	// stwu r1,-1664(r1)
	ctx.current_instruction = 0x881FC028;
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,15984
	ctx.r30.s64 = ctx.r3.s64 + 15984;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x882028a0
	ctx.lr = 0x881FC03C;
	sub_882028A0(ctx, base);
loc_881FC03C:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r28,r31,22432
	ctx.r28.s64 = ctx.r31.s64 + 22432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,24352(r11)
	ctx.current_instruction = 0x881FC048;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24352);
	// bl 0x881fc868
	ctx.lr = 0x881FC050;
	sub_881FC868(ctx, base);
loc_881FC050:
	// lhz r10,16036(r31)
	ctx.current_instruction = 0x881FC050;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 16036);
	// addi r29,r30,1408
	ctx.r29.s64 = ctx.r30.s64 + 1408;
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
	// bl 0x882060b8
	ctx.lr = 0x881FC074;
	sub_882060B8(ctx, base);
loc_881FC074:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc188
	if (!ctx.cr6.eq) goto loc_881FC188;
	// lhz r11,52(r30)
	ctx.current_instruction = 0x881FC07C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
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
	// bl 0x88242388
	ctx.lr = 0x881FC09C;
	sub_88242388(ctx, base);
loc_881FC09C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc188
	if (!ctx.cr6.eq) goto loc_881FC188;
	// lhz r11,52(r30)
	ctx.current_instruction = 0x881FC0A4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
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
	// bl 0x8822eb18
	ctx.lr = 0x881FC0C4;
	sub_8822EB18(ctx, base);
loc_881FC0C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc188
	if (!ctx.cr6.eq) goto loc_881FC188;
	// lhz r11,52(r30)
	ctx.current_instruction = 0x881FC0CC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
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
	// bl 0x88216ba8
	ctx.lr = 0x881FC0EC;
	sub_88216BA8(ctx, base);
loc_881FC0EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc188
	if (!ctx.cr6.eq) goto loc_881FC188;
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x881FC0F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881fc164
	if (ctx.cr6.eq) goto loc_881FC164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,272(r31)
	ctx.current_instruction = 0x881FC104;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x8822b460
	ctx.lr = 0x881FC10C;
	sub_8822B460(ctx, base);
loc_881FC10C:
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881FC10C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.current_instruction = 0x881FC110;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x881FC118;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3776(r31)
	ctx.current_instruction = 0x881FC124;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.current_instruction = 0x881FC12C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x8822b588
	ctx.lr = 0x881FC138;
	sub_8822B588(ctx, base);
loc_881FC138:
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881FC138;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r9,3784(r31)
	ctx.current_instruction = 0x881FC13C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x881FC144;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,3776(r31)
	ctx.current_instruction = 0x881FC150;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,220(r31)
	ctx.current_instruction = 0x881FC158;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x8822b588
	ctx.lr = 0x881FC164;
	sub_8822B588(ctx, base);
loc_881FC164:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881fcbb0
	ctx.lr = 0x881FC170;
	sub_881FCBB0(ctx, base);
loc_881FC170:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15624(r31)
	ctx.current_instruction = 0x881FC178;
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15628(r31)
	ctx.current_instruction = 0x881FC180;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r10.u32);
	// stw r11,15600(r31)
	ctx.current_instruction = 0x881FC184;
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r11.u32);
loc_881FC188:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88211E78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88211E78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88211E78) {
			switch (rex_dispatch_address) {
				case 0x88211F80:
				case 0x88211F8C:
				case 0x88211F94:
				case 0x88211F9C:
				case 0x88211FA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88211E78;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88211F80: goto loc_88211F80;
		case 0x88211F8C: goto loc_88211F8C;
		case 0x88211F94: goto loc_88211F94;
		case 0x88211F9C: goto loc_88211F9C;
		case 0x88211FA8: goto loc_88211FA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88211E7C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88211E80;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88211E84;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88211E88;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2964(r3)
	ctx.current_instruction = 0x88211E8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2964);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,2092(r3)
	ctx.current_instruction = 0x88211E94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2092);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r8,r11,735
	ctx.r8.s64 = ctx.r11.s64 + 735;
	// lwz r7,4016(r3)
	ctx.current_instruction = 0x88211EA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4016);
	// addi r6,r11,738
	ctx.r6.s64 = ctx.r11.s64 + 738;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,263
	ctx.r4.s64 = ctx.r10.s64 + 263;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r5,r31
	ctx.current_instruction = 0x88211EBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// stw r8,2916(r31)
	ctx.current_instruction = 0x88211ECC;
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r8.u32);
	// lwzx r5,r3,r31
	ctx.current_instruction = 0x88211ED0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// stw r5,2928(r31)
	ctx.current_instruction = 0x88211ED4;
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r5.u32);
	// lwzx r4,r10,r31
	ctx.current_instruction = 0x88211ED8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r4,2096(r31)
	ctx.current_instruction = 0x88211EDC;
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r4.u32);
	// lwz r3,2108(r6)
	ctx.current_instruction = 0x88211EE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 2108);
	// stw r3,2100(r31)
	ctx.current_instruction = 0x88211EE4;
	REX_STORE_U32(ctx.r31.u32 + 2100, ctx.r3.u32);
	// bne cr6,0x88211ef8
	if (!ctx.cr6.eq) goto loc_88211EF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,460(r31)
	ctx.current_instruction = 0x88211EF0;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// b 0x88211efc
	goto loc_88211EFC;
loc_88211EF8:
	// stw r9,460(r31)
	ctx.current_instruction = 0x88211EF8;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r9.u32);
loc_88211EFC:
	// lwz r11,14840(r31)
	ctx.current_instruction = 0x88211EFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14840);
	// lwz r10,3428(r31)
	ctx.current_instruction = 0x88211F00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3428);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// li r11,3
	ctx.r11.s64 = 3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88211f24
	if (ctx.cr6.eq) goto loc_88211F24;
	// stw r9,14848(r31)
	ctx.current_instruction = 0x88211F18;
	REX_STORE_U32(ctx.r31.u32 + 14848, ctx.r9.u32);
	// stw r11,14844(r31)
	ctx.current_instruction = 0x88211F1C;
	REX_STORE_U32(ctx.r31.u32 + 14844, ctx.r11.u32);
	// b 0x88211f2c
	goto loc_88211F2C;
loc_88211F24:
	// stw r9,14844(r31)
	ctx.current_instruction = 0x88211F24;
	REX_STORE_U32(ctx.r31.u32 + 14844, ctx.r9.u32);
	// stw r11,14848(r31)
	ctx.current_instruction = 0x88211F28;
	REX_STORE_U32(ctx.r31.u32 + 14848, ctx.r11.u32);
loc_88211F2C:
	// lwz r11,20688(r31)
	ctx.current_instruction = 0x88211F2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88211f40
	if (!ctx.cr6.eq) goto loc_88211F40;
	// lwz r11,22176(r31)
	ctx.current_instruction = 0x88211F38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22176);
	// b 0x88211f44
	goto loc_88211F44;
loc_88211F40:
	// lwz r11,22180(r31)
	ctx.current_instruction = 0x88211F40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22180);
loc_88211F44:
	// stw r11,22172(r31)
	ctx.current_instruction = 0x88211F44;
	REX_STORE_U32(ctx.r31.u32 + 22172, ctx.r11.u32);
	// lwz r11,21704(r31)
	ctx.current_instruction = 0x88211F48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88211f6c
	if (!ctx.cr6.eq) goto loc_88211F6C;
	// lwz r11,140(r31)
	ctx.current_instruction = 0x88211F54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,21972(r31)
	ctx.current_instruction = 0x88211F58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,21968(r31)
	ctx.current_instruction = 0x88211F64;
	REX_STORE_U32(ctx.r31.u32 + 21968, ctx.r10.u32);
	// b 0x88211f74
	goto loc_88211F74;
loc_88211F6C:
	// lwz r11,21972(r31)
	ctx.current_instruction = 0x88211F6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// stw r11,21968(r31)
	ctx.current_instruction = 0x88211F70;
	REX_STORE_U32(ctx.r31.u32 + 21968, ctx.r11.u32);
loc_88211F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,248(r31)
	ctx.current_instruction = 0x88211F78;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x8815e728
	ctx.lr = 0x88211F80;
	sub_8815E728(ctx, base);
loc_88211F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,248(r31)
	ctx.current_instruction = 0x88211F84;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x8819b878
	ctx.lr = 0x88211F8C;
	sub_8819B878(ctx, base);
loc_88211F8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88193d00
	ctx.lr = 0x88211F94;
	sub_88193D00(ctx, base);
loc_88211F94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88193e08
	ctx.lr = 0x88211F9C;
	sub_88193E08(ctx, base);
loc_88211F9C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881a3cc8
	ctx.lr = 0x88211FA8;
	sub_881A3CC8(ctx, base);
loc_88211FA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88211FAC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88211FB4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88211FB8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88218590) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88218590);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88218590;
	ctx.current_instruction = 0x88218590;
	uint32_t ea{};
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx v5,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vsldoi v6,v5,v5,8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 8));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r12,r4,4
	ctx.r12.s64 = ctx.r4.s64 + 4;
	// vspltish v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x3)));
	// lvx v7,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// vaddshs v28,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vspltish v14,5
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_set1_epi16(short(0x5)));
	// vsldoi v8,v7,v7,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), 8));
	// vsubuhm v29,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v8,v14
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v28
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vslh v9,v30,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v1,v1,v13
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v9,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v3,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v2,v2,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubuhm v4,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v3,v9,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vspltish v9,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x6)));
	// vaddshs v21,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubuhm v22,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v20,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v23,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v21,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v28,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vmrghh v30,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vmrghw v4,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v28.u32)));
	// vmrglw v6,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v28.u32)));
	// vspltish v30,8
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x8)));
	// vsldoi v5,v4,v4,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 8));
	// vsldoi v7,v6,v6,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), 8));
	// vsubuhm v3,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v6,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v1,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v28,v28,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v4,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v8,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v27,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsubuhm v29,v31,v28
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsrah v30,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v4,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v8,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubuhm v5,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vaddshs v4,v4,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v8,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vor128 v1,v69,v69
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v69.u8));
	// vaddshs v10,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v13,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v11,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v12,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v10,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v13,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v11,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v12,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm v10,v10,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm v13,v13,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm v11,v11,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm v12,v12,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// stvewx v10,r0,r4
	ctx.current_instruction = 0x882186D4;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v10,r0,r12
	ctx.current_instruction = 0x882186D8;
	ea = (ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r11,r4
	ctx.current_instruction = 0x882186DC;
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v13,r11,r12
	ctx.current_instruction = 0x882186E0;
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v11,r9,r4
	ctx.current_instruction = 0x882186E4;
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v11,r9,r12
	ctx.current_instruction = 0x882186E8;
	ea = (ctx.r9.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r10,r4
	ctx.current_instruction = 0x882186EC;
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v12,r10,r12
	ctx.current_instruction = 0x882186F0;
	ea = (ctx.r10.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821B4B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821B4B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821B4B8) {
			switch (rex_dispatch_address) {
				case 0x8821B4C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821B4B8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821B4C0: goto loc_8821B4C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8821B4C0;
	__savegprlr_27(ctx, base);
loc_8821B4C0:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r31,r3,r4
	ctx.r31.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,48
	ctx.r30.s64 = 48;
	// lvx128 v60,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,96
	ctx.r29.s64 = 96;
	// lvx128 v59,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,144
	ctx.r28.s64 = 144;
	// lvx128 v58,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvx128 v57,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v1,v61,v58,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v31,v60,v56,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v54,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v59,v55,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v12,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v29,v62,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v28,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v24,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v23,v27,v12
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v22,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v21,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v20,v28,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v19,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v18,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v16,v20,v12
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// stvx128 v19,r5,r30
	ea = (ctx.r5.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r5,r29
	ea = (ctx.r5.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r5,r28
	ea = (ctx.r5.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x8821b650
	if (!ctx.cr6.eq) goto loc_8821B650;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v52,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,192
	ctx.r30.s64 = 192;
	// lvx128 v51,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,240
	ctx.r29.s64 = 240;
	// lvx128 v50,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,288
	ctx.r28.s64 = 288;
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,336
	ctx.r27.s64 = 336;
	// lvx128 v48,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// lvx128 v47,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v46,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v47,v46,v1
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v0,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
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
	// vadduhm v27,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v26,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v12
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v23,v27,v12
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v22,v26,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v21,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v20,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v23,r5,r30
	ea = (ctx.r5.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v22,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// stvx128 v21,r5,r29
	ea = (ctx.r5.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r5,r28
	ea = (ctx.r5.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r5,r27
	ea = (ctx.r5.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8821B650:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// bne cr6,0x8821b6d0
	if (!ctx.cr6.eq) goto loc_8821B6D0;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r6,r5,16
	ctx.r6.s64 = ctx.r5.s64 + 16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8821b6d0
	if (!ctx.cr6.gt) goto loc_8821B6D0;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r31,r10,r4
	ctx.r31.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r9,r6,-48
	ctx.r9.s64 = ctx.r6.s64 + -48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8821B68C:
	// lbzx r5,r31,r11
	ctx.current_instruction = 0x8821B68C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.current_instruction = 0x8821B690;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lbzux r6,r7,r10
	ctx.current_instruction = 0x8821B69C;
	ea = ctx.r7.u32 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// rotlwi r4,r5,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sth r4,48(r9)
	ctx.current_instruction = 0x8821B6C4;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ctx.current_instruction = 0x8821B6C8;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8821b68c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821B68C;
loc_8821B6D0:
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821EED0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821EED0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821EED0) {
			switch (rex_dispatch_address) {
				case 0x8821EF18:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821EED0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821EF18: goto loc_8821EF18;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8821EED4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8821EED8;
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
	// bl 0x8821ec08
	ctx.lr = 0x8821EF18;
	sub_8821EC08(ctx, base);
loc_8821EF18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8821EF20;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821F9B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821F9B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821F9B0) {
			switch (rex_dispatch_address) {
				case 0x8821F9B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821F9B0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821F9B8: goto loc_8821F9B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8821F9B8;
	__savegprlr_28(ctx, base);
loc_8821F9B8:
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r30,1164(r6)
	ctx.current_instruction = 0x8821F9CC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
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
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// vspltish v27,7
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_set1_epi16(short(0x7)));
	// lvx128 v10,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vaddshs v3,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r28,-32
	ctx.r28.s64 = -32;
	// vspltish v7,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x1)));
	// li r29,-16
	ctx.r29.s64 = -16;
	// vsubshs v26,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x8821fb6c
	if (!ctx.cr6.eq) goto loc_8821FB6C;
	// lvx128 v60,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v62,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v58,v59,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x8821fd40
	if (!ctx.cr6.gt) goto loc_8821FD40;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8821FA84:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v2,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vor v10,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor v1,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v4,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v30,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v5,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v28,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglb v23,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v22,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v4,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// vslh v31,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vslh v15,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v28,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v31,v22,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vslh v25,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v2,v15
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsubshs v21,v1,v14
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v20,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vsubshs v19,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v18,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v17,v22,v3
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v16,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v15,v23,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v14,v21,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v2,v17,v15
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v1,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsrah v31,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v1,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v31,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x8821fa84
	if (ctx.cr6.lt) goto loc_8821FA84;
	// b 0x8821fd40
	goto loc_8821FD40;
loc_8821FB6C:
	// li r31,32
	ctx.r31.s64 = 32;
	// lvrx128 v52,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v4,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v2,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x8821fd40
	if (!ctx.cr6.gt) goto loc_8821FD40;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
loc_8821FBF0:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v29,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v28,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
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
	// vslh v31,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v43,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v4,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v22,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v4
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v15,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglb v19,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v31
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vslh v18,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v14,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v5,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v2,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v31,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// vslh v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
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
	// vsubshs v23,v30,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vadduhm v22,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v24,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v14,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v19,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v15,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v21,v29,v21
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v14,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v30,v22,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v29,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v23,v15
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v18,v21,v14
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsubshs v16,v28,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vsubshs v17,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v15,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v14,v30,v19
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v30,v29,v18
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v29,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v28,v15,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v25,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v23,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// stvx128 v25,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
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
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x8821fbf0
	if (ctx.cr6.lt) goto loc_8821FBF0;
loc_8821FD40:
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x8821fdf0
	if (!ctx.cr6.eq) goto loc_8821FDF0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8821fed8
	if (!ctx.cr6.gt) goto loc_8821FED8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8821FD74:
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v10,v41,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 14));
	// vsldoi128 v8,v10,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// vsldoi128 v10,v10,v41,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 10));
	// vsubshs v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v3,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v25,v31,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v22,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsubshs v21,v10,v24
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v19,v21,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v18,v20,v26
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsrah v16,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v40,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vor v5,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// stvewx128 v40,r0,r11
	ctx.current_instruction = 0x8821FDDC;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r9
	ctx.current_instruction = 0x8821FDE0;
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x8821fd74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821FD74;
	// b 0x8821fed8
	goto loc_8821FED8;
loc_8821FDF0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8821fed8
	if (!ctx.cr6.gt) goto loc_8821FED8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_8821FE08:
	// lvx128 v10,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v39,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v8,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v6,v10,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 14));
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// vsldoi128 v3,v10,v39,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 12));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v9,v9,v10,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v28,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v10,v10,v39,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 10));
	// vslh v25,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v25,v29
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v18,v24,v8
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v15,v23,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vslh v21,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v22,v6
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v6,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v1,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v29,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v8,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v23,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v28,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v24,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v21,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v19,v23,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v22,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v20,v24,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v16,v18,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v38,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vpkshus128 v37,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vor128 v5,v38,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvx128 v37,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x8821fe08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821FE08;
loc_8821FED8:
	// vand v13,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88248240) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88248240;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88248240) {
			switch (rex_dispatch_address) {
				case 0x88248248:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88248240;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88248248: goto loc_88248248;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88248248;
	__savegprlr_14(ctx, base);
loc_88248248:
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// stw r4,28(r1)
	ctx.current_instruction = 0x8824824C;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r9,68(r1)
	ctx.current_instruction = 0x88248250;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// srawi. r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// srawi r16,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r9.s32 >> 1;
	// stw r10,-188(r1)
	ctx.current_instruction = 0x88248260;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// stw r16,-196(r1)
	ctx.current_instruction = 0x88248268;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r16.u32);
	// ble 0x88248738
	if (!ctx.cr0.gt) goto loc_88248738;
	// subf r31,r10,r4
	ctx.r31.u64 = ctx.r4.u64 - ctx.r10.u64;
	// stw r5,-220(r1)
	ctx.current_instruction = 0x88248274;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r5.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r30,r10,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r29,r10,r16
	ctx.r29.u64 = ctx.r16.u64 - ctx.r10.u64;
	// stw r31,-180(r1)
	ctx.current_instruction = 0x88248288;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r31.u32);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,-184(r1)
	ctx.current_instruction = 0x88248298;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r31.u32);
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// stw r30,-176(r1)
	ctx.current_instruction = 0x882482A0;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// stw r29,-172(r1)
	ctx.current_instruction = 0x882482A4;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r29.u32);
	// stw r11,60(r1)
	ctx.current_instruction = 0x882482A8;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r11.u32);
loc_882482AC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88248708
	if (!ctx.cr6.gt) goto loc_88248708;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r16,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-208(r1)
	ctx.current_instruction = 0x882482D0;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// stw r9,-204(r1)
	ctx.current_instruction = 0x882482E8;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// addi r25,r4,1
	ctx.r25.s64 = ctx.r4.s64 + 1;
	// stw r11,-192(r1)
	ctx.current_instruction = 0x882482F0;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// addi r24,r4,3
	ctx.r24.s64 = ctx.r4.s64 + 3;
	// stw r10,-216(r1)
	ctx.current_instruction = 0x882482F8;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// addi r23,r4,2
	ctx.r23.s64 = ctx.r4.s64 + 2;
	// addi r22,r8,2
	ctx.r22.s64 = ctx.r8.s64 + 2;
	// addi r21,r5,2
	ctx.r21.s64 = ctx.r5.s64 + 2;
	// addi r20,r26,2
	ctx.r20.s64 = ctx.r26.s64 + 2;
loc_8824830C:
	// addi r9,r4,-5
	ctx.r9.s64 = ctx.r4.s64 + -5;
	// lbzx r10,r25,r3
	ctx.current_instruction = 0x88248310;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r3.u32);
	// addi r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 5;
	// lbz r31,1(r3)
	ctx.current_instruction = 0x88248318;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r19,0(r3)
	ctx.current_instruction = 0x8824831C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r29,r5,1
	ctx.r29.s64 = ctx.r5.s64 + 1;
	// addi r30,r8,1
	ctx.r30.s64 = ctx.r8.s64 + 1;
	// std r25,-168(r1)
	ctx.current_instruction = 0x88248328;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r25.u64);
	// addi r27,r8,3
	ctx.r27.s64 = ctx.r8.s64 + 3;
	// lwz r4,-216(r1)
	ctx.current_instruction = 0x88248330;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// addi r28,r5,3
	ctx.r28.s64 = ctx.r5.s64 + 3;
	// lbzx r9,r11,r9
	ctx.current_instruction = 0x88248338;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r18,r25,r3
	ctx.r18.u64 = ctx.r25.u64 + ctx.r3.u64;
	// add r17,r23,r3
	ctx.r17.u64 = ctx.r23.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r16,r24,r3
	ctx.r16.u64 = ctx.r24.u64 + ctx.r3.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r31,r29,r3
	ctx.r31.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r19,r5,r3
	ctx.r19.u64 = ctx.r5.u64 + ctx.r3.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r15,r30,r3
	ctx.r15.u64 = ctx.r30.u64 + ctx.r3.u64;
	// sth r10,0(r6)
	ctx.current_instruction = 0x88248364;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
	// add r14,r8,r3
	ctx.r14.u64 = ctx.r8.u64 + ctx.r3.u64;
	// sth r10,-224(r1)
	ctx.current_instruction = 0x8824836C;
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r10.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r9,3(r3)
	ctx.current_instruction = 0x88248374;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// add r25,r26,r6
	ctx.r25.u64 = ctx.r26.u64 + ctx.r6.u64;
	// sth r10,-224(r1)
	ctx.current_instruction = 0x8824837C;
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r10.u16);
	// lbzx r10,r24,r3
	ctx.current_instruction = 0x88248380;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r3.u32);
	// stw r9,-212(r1)
	ctx.current_instruction = 0x88248384;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r9.u32);
	// lbzx r9,r23,r3
	ctx.current_instruction = 0x88248388;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r3.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,2(r3)
	ctx.current_instruction = 0x88248390;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,-212(r1)
	ctx.current_instruction = 0x88248398;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// stw r9,-212(r1)
	ctx.current_instruction = 0x8824839C;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r9,-224(r1)
	ctx.current_instruction = 0x882483A8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -224);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r10,2(r6)
	ctx.current_instruction = 0x882483B4;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// lbzx r10,r8,r3
	ctx.current_instruction = 0x882483B8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// sth r9,-224(r1)
	ctx.current_instruction = 0x882483BC;
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r9.u16);
	// stw r10,-212(r1)
	ctx.current_instruction = 0x882483C0;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lbzx r9,r29,r3
	ctx.current_instruction = 0x882483C4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r3.u32);
	// lbzx r10,r5,r3
	ctx.current_instruction = 0x882483C8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,-224(r1)
	ctx.current_instruction = 0x882483D0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -224);
	// sth r9,-224(r1)
	ctx.current_instruction = 0x882483D4;
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r9.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,-224(r1)
	ctx.current_instruction = 0x882483DC;
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r9.u16);
	// lbzx r9,r30,r3
	ctx.current_instruction = 0x882483E0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,-212(r1)
	ctx.current_instruction = 0x882483E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// stw r9,-212(r1)
	ctx.current_instruction = 0x882483EC;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r9,-224(r1)
	ctx.current_instruction = 0x882483F8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -224);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r10,r26,r6
	ctx.current_instruction = 0x88248404;
	REX_STORE_U16(ctx.r26.u32 + ctx.r6.u32, ctx.r10.u16);
	// lbzx r10,r27,r3
	ctx.current_instruction = 0x88248408;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r3.u32);
	// sth r9,-224(r1)
	ctx.current_instruction = 0x8824840C;
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r9.u16);
	// stw r10,-212(r1)
	ctx.current_instruction = 0x88248410;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lbzx r9,r21,r3
	ctx.current_instruction = 0x88248414;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r3.u32);
	// lbzx r10,r22,r3
	ctx.current_instruction = 0x88248418;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r3.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,-224(r1)
	ctx.current_instruction = 0x88248420;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -224);
	// sth r9,-224(r1)
	ctx.current_instruction = 0x88248424;
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r9.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,-224(r1)
	ctx.current_instruction = 0x8824842C;
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r9.u16);
	// lbzx r9,r28,r3
	ctx.current_instruction = 0x88248430;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,-212(r1)
	ctx.current_instruction = 0x88248438;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// stw r9,-212(r1)
	ctx.current_instruction = 0x8824843C;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r9,-224(r1)
	ctx.current_instruction = 0x88248448;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -224);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r10,r20,r6
	ctx.current_instruction = 0x88248454;
	REX_STORE_U16(ctx.r20.u32 + ctx.r6.u32, ctx.r10.u16);
	// std r28,-160(r1)
	ctx.current_instruction = 0x88248458;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r28.u64);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r10,0(r7)
	ctx.current_instruction = 0x88248460;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// lbz r9,4(r3)
	ctx.current_instruction = 0x88248464;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// sth r10,-224(r1)
	ctx.current_instruction = 0x88248468;
	REX_STORE_U16(ctx.r1.u32 + -224, ctx.r10.u16);
	// lbzx r10,r11,r4
	ctx.current_instruction = 0x8824846C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r11,4(r18)
	ctx.current_instruction = 0x88248470;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,5(r3)
	ctx.current_instruction = 0x8824847C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// add r18,r28,r3
	ctx.r18.u64 = ctx.r28.u64 + ctx.r3.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// add r28,r22,r3
	ctx.r28.u64 = ctx.r22.u64 + ctx.r3.u64;
	// sth r10,4(r6)
	ctx.current_instruction = 0x88248490;
	REX_STORE_U16(ctx.r6.u32 + 4, ctx.r10.u16);
	// lbz r4,7(r3)
	ctx.current_instruction = 0x88248494;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r11,4(r17)
	ctx.current_instruction = 0x88248498;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r17.u32 + 4);
	// lbz r9,4(r16)
	ctx.current_instruction = 0x8824849C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r16.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r9,6(r3)
	ctx.current_instruction = 0x882484A8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// lwz r4,-204(r1)
	ctx.current_instruction = 0x882484AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// add r16,r27,r3
	ctx.r16.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r4,-200(r1)
	ctx.current_instruction = 0x882484B8;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r4.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r17,-208(r1)
	ctx.current_instruction = 0x882484C0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// add r9,r21,r3
	ctx.r9.u64 = ctx.r21.u64 + ctx.r3.u64;
	// sth r11,6(r6)
	ctx.current_instruction = 0x882484C8;
	REX_STORE_U16(ctx.r6.u32 + 6, ctx.r11.u16);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-212(r1)
	ctx.current_instruction = 0x882484D0;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r9.u32);
	// lbz r9,4(r15)
	ctx.current_instruction = 0x882484D4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r15.u32 + 4);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r4,4(r19)
	ctx.current_instruction = 0x882484DC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r19.u32 + 4);
	// add r15,r20,r6
	ctx.r15.u64 = ctx.r20.u64 + ctx.r6.u64;
	// lbz r11,4(r31)
	ctx.current_instruction = 0x882484E4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,4(r14)
	ctx.current_instruction = 0x882484F0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r14.u32 + 4);
	// add r31,r17,r3
	ctx.r31.u64 = ctx.r17.u64 + ctx.r3.u64;
	// lwz r17,-212(r1)
	ctx.current_instruction = 0x882484F8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r19,-224(r1)
	ctx.current_instruction = 0x88248500;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + -224);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// sth r11,4(r25)
	ctx.current_instruction = 0x8824850C;
	REX_STORE_U16(ctx.r25.u32 + 4, ctx.r11.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,4(r18)
	ctx.current_instruction = 0x88248514;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r18.u32 + 4);
	// lbz r4,4(r16)
	ctx.current_instruction = 0x88248518;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r16.u32 + 4);
	// clrlwi r18,r11,16
	ctx.r18.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r11,4(r17)
	ctx.current_instruction = 0x88248520;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r17.u32 + 4);
	// lbz r10,4(r28)
	ctx.current_instruction = 0x88248524;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r25,-168(r1)
	ctx.current_instruction = 0x88248530;
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r17,-200(r1)
	ctx.current_instruction = 0x88248538;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r17,r6
	ctx.r9.u64 = ctx.r17.u64 + ctx.r6.u64;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// add r18,r4,r18
	ctx.r18.u64 = ctx.r4.u64 + ctx.r18.u64;
	// sth r4,4(r15)
	ctx.current_instruction = 0x88248550;
	REX_STORE_U16(ctx.r15.u32 + 4, ctx.r4.u16);
	// clrlwi r4,r18,16
	ctx.r4.u64 = ctx.r18.u32 & 0xFFFF;
	// sth r4,2(r7)
	ctx.current_instruction = 0x88248558;
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r4.u16);
	// add r19,r4,r19
	ctx.r19.u64 = ctx.r4.u64 + ctx.r19.u64;
	// lwz r4,28(r1)
	ctx.current_instruction = 0x88248560;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lbz r16,5(r31)
	ctx.current_instruction = 0x88248564;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi r18,r19,16
	ctx.r18.u64 = ctx.r19.u32 & 0xFFFF;
	// lbzx r19,r11,r25
	ctx.current_instruction = 0x8824856C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// lbzx r17,r11,r4
	ctx.current_instruction = 0x88248570;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// add r19,r19,r17
	ctx.r19.u64 = ctx.r19.u64 + ctx.r17.u64;
	// add r19,r19,r16
	ctx.r19.u64 = ctx.r19.u64 + ctx.r16.u64;
	// lbz r17,4(r31)
	ctx.current_instruction = 0x8824857C;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// add r19,r19,r17
	ctx.r19.u64 = ctx.r19.u64 + ctx.r17.u64;
	// clrlwi r19,r19,16
	ctx.r19.u64 = ctx.r19.u32 & 0xFFFF;
	// sth r19,4(r9)
	ctx.current_instruction = 0x88248588;
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r19.u16);
	// lbz r15,7(r31)
	ctx.current_instruction = 0x8824858C;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// lbzx r17,r23,r11
	ctx.current_instruction = 0x88248590;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// lbzx r16,r24,r11
	ctx.current_instruction = 0x88248594;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// ld r28,-160(r1)
	ctx.current_instruction = 0x8824859C;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// add r16,r17,r16
	ctx.r16.u64 = ctx.r17.u64 + ctx.r16.u64;
	// lbz r17,6(r31)
	ctx.current_instruction = 0x882485A4;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// add r31,r16,r15
	ctx.r31.u64 = ctx.r16.u64 + ctx.r15.u64;
	// lwz r15,-192(r1)
	ctx.current_instruction = 0x882485AC;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// add r31,r31,r17
	ctx.r31.u64 = ctx.r31.u64 + ctx.r17.u64;
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// sth r31,6(r9)
	ctx.current_instruction = 0x882485B8;
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r31.u16);
	// add r9,r31,r19
	ctx.r9.u64 = ctx.r31.u64 + ctx.r19.u64;
	// lbzx r16,r5,r11
	ctx.current_instruction = 0x882485C0;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// lbzx r9,r29,r11
	ctx.current_instruction = 0x882485C8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r17,r30,r11
	ctx.current_instruction = 0x882485CC;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 + ctx.r16.u64;
	// lbzx r19,r8,r11
	ctx.current_instruction = 0x882485D4;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r9,r26,r10
	ctx.current_instruction = 0x882485E4;
	REX_STORE_U16(ctx.r26.u32 + ctx.r10.u32, ctx.r9.u16);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbzx r17,r28,r11
	ctx.current_instruction = 0x882485EC;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r19,r27,r11
	ctx.current_instruction = 0x882485F0;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// lbzx r9,r21,r11
	ctx.current_instruction = 0x882485F8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// lbzx r16,r22,r11
	ctx.current_instruction = 0x882485FC;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 + ctx.r16.u64;
	// lwz r16,-196(r1)
	ctx.current_instruction = 0x88248608;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r19,r9,r31
	ctx.r19.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sthx r9,r20,r10
	ctx.current_instruction = 0x8824861C;
	REX_STORE_U16(ctx.r20.u32 + ctx.r10.u32, ctx.r9.u16);
	// rlwinm r31,r16,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r19,16
	ctx.r9.u64 = ctx.r19.u32 & 0xFFFF;
	// add r19,r9,r18
	ctx.r19.u64 = ctx.r9.u64 + ctx.r18.u64;
	// sthx r9,r31,r7
	ctx.current_instruction = 0x8824862C;
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u16);
	// clrlwi r19,r19,16
	ctx.r19.u64 = ctx.r19.u32 & 0xFFFF;
	// lbz r18,1(r11)
	ctx.current_instruction = 0x88248634;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r31,r11,r4
	ctx.current_instruction = 0x88248638;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r9,r11,r25
	ctx.current_instruction = 0x8824863C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	// lbz r31,0(r11)
	ctx.current_instruction = 0x88248648;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// sthu r31,4(r10)
	ctx.current_instruction = 0x88248654;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r31.u16);
	ctx.r10.u32 = ea;
	// lbz r17,3(r11)
	ctx.current_instruction = 0x88248658;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbzx r18,r24,r11
	ctx.current_instruction = 0x8824865C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// lbzx r9,r23,r11
	ctx.current_instruction = 0x88248660;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
	// lbz r18,2(r11)
	ctx.current_instruction = 0x8824866C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	ctx.current_instruction = 0x88248678;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbzx r9,r29,r11
	ctx.current_instruction = 0x88248680;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r29,r5,r11
	ctx.current_instruction = 0x88248684;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lbzx r29,r30,r11
	ctx.current_instruction = 0x8824868C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// lbzx r30,r8,r11
	ctx.current_instruction = 0x88248694;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r9,r26,r10
	ctx.current_instruction = 0x882486A4;
	REX_STORE_U16(ctx.r26.u32 + ctx.r10.u32, ctx.r9.u16);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbzx r31,r27,r11
	ctx.current_instruction = 0x882486AC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbzx r29,r21,r11
	ctx.current_instruction = 0x882486B0;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lbzx r30,r28,r11
	ctx.current_instruction = 0x882486B8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r27,r22,r11
	ctx.current_instruction = 0x882486BC;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sthx r11,r20,r10
	ctx.current_instruction = 0x882486D4;
	REX_STORE_U16(ctx.r20.u32 + ctx.r10.u32, ctx.r11.u16);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// add r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 + ctx.r19.u64;
	// sthx r11,r15,r7
	ctx.current_instruction = 0x882486E0;
	REX_STORE_U16(ctx.r15.u32 + ctx.r7.u32, ctx.r11.u16);
	// lwz r11,60(r1)
	ctx.current_instruction = 0x882486E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sthu r9,2(r11)
	ctx.current_instruction = 0x882486F0;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// stw r11,60(r1)
	ctx.current_instruction = 0x882486F4;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r11.u32);
	// bdnz 0x8824830c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8824830C;
	// lwz r9,68(r1)
	ctx.current_instruction = 0x882486FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r10,-188(r1)
	ctx.current_instruction = 0x88248700;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r5,-220(r1)
	ctx.current_instruction = 0x88248704;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
loc_88248708:
	// lwz r8,-184(r1)
	ctx.current_instruction = 0x88248708;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r31,-180(r1)
	ctx.current_instruction = 0x88248710;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r30,-176(r1)
	ctx.current_instruction = 0x88248718;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r8,-172(r1)
	ctx.current_instruction = 0x8824871C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// stw r5,-220(r1)
	ctx.current_instruction = 0x88248724;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r5.u32);
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r11,60(r1)
	ctx.current_instruction = 0x88248730;
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r11.u32);
	// bne 0x882482ac
	if (!ctx.cr0.eq) goto loc_882482AC;
loc_88248738:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

