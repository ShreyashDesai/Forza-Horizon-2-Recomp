#include "forzahorizon2_funcs.12.h"

DEFINE_REX_FUNC(sub_88050118) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050118);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050118;
	ctx.current_instruction = 0x88050118;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,56(r11)
	ctx.current_instruction = 0x88050120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_21) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805082C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805082C;
	ctx.current_instruction = 0x8805082C;
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

DEFINE_REX_FUNC(sub_88051AC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88051AC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88051AC8) {
			switch (rex_dispatch_address) {
				case 0x88051AD0:
				case 0x88051AF0:
				case 0x88051AFC:
				case 0x88051B9C:
				case 0x88051BE4:
				case 0x88051C60:
				case 0x88051C70:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88051AC8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88051AD0: goto loc_88051AD0;
		case 0x88051AF0: goto loc_88051AF0;
		case 0x88051AFC: goto loc_88051AFC;
		case 0x88051B9C: goto loc_88051B9C;
		case 0x88051BE4: goto loc_88051BE4;
		case 0x88051C60: goto loc_88051C60;
		case 0x88051C70: goto loc_88051C70;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88051AD0;
	__savegprlr_26(ctx, base);
loc_88051AD0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88051AD0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.current_instruction = 0x88051AD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x88051b04
	if (!ctx.cr6.eq) goto loc_88051B04;
loc_88051AEC:
	// bl 0x880529c8
	ctx.lr = 0x88051AF0;
	sub_880529C8(ctx, base);
loc_88051AF0:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	ctx.current_instruction = 0x88051AF4;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x88051AFC;
	sub_880523E8(ctx, base);
loc_88051AFC:
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x88051c74
	goto loc_88051C74;
loc_88051B04:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88051aec
	if (ctx.cr6.eq) goto loc_88051AEC;
	// extsb. r26,r7
	ctx.r26.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r28,48
	ctx.r28.s64 = 48;
	// beq 0x88051b44
	if (ctx.cr0.eq) goto loc_88051B44;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x88051b44
	if (!ctx.cr6.eq) goto loc_88051B44;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x88051B20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r28,0(r11)
	ctx.current_instruction = 0x88051B3C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// stb r9,1(r11)
	ctx.current_instruction = 0x88051B40;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_88051B44:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x88051B44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x88051b5c
	if (!ctx.cr6.eq) goto loc_88051B5C;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// stb r11,0(r3)
	ctx.current_instruction = 0x88051B58;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_88051B5C:
	// lwz r11,4(r29)
	ctx.current_instruction = 0x88051B5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x88051ba4
	if (ctx.cr6.gt) goto loc_88051BA4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_88051B6C:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88051B6C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88051b6c
	if (!ctx.cr6.eq) goto loc_88051B6C;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x880527e0
	ctx.lr = 0x88051B9C;
	sub_880527E0(ctx, base);
loc_88051B9C:
	// stb r28,0(r30)
	ctx.current_instruction = 0x88051B9C;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// b 0x88051ba8
	goto loc_88051BA8;
loc_88051BA4:
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_88051BA8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x88051c70
	if (!ctx.cr6.gt) goto loc_88051C70;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_88051BB4:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88051BB4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88051bb4
	if (!ctx.cr6.eq) goto loc_88051BB4;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x880527e0
	ctx.lr = 0x88051BE4;
	sub_880527E0(ctx, base);
loc_88051BE4:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,1032(r11)
	ctx.current_instruction = 0x88051BE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1032);
	// lwz r11,188(r11)
	ctx.current_instruction = 0x88051BEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.current_instruction = 0x88051BF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.current_instruction = 0x88051BF4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r31)
	ctx.current_instruction = 0x88051BF8;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,4(r29)
	ctx.current_instruction = 0x88051BFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x88051c70
	if (!ctx.cr6.lt) goto loc_88051C70;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x88051c18
	if (ctx.cr6.eq) goto loc_88051C18;
	// neg r27,r11
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x88051c28
	goto loc_88051C28;
loc_88051C18:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88051c28
	if (ctx.cr6.lt) goto loc_88051C28;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_88051C28:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x88051c60
	if (ctx.cr6.eq) goto loc_88051C60;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_88051C34:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88051C34;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88051c34
	if (!ctx.cr6.eq) goto loc_88051C34;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x880527e0
	ctx.lr = 0x88051C60;
	sub_880527E0(ctx, base);
loc_88051C60:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88052d90
	ctx.lr = 0x88051C70;
	sub_88052D90(ctx, base);
loc_88051C70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88051C74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880590B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880590B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880590B8) {
			switch (rex_dispatch_address) {
				case 0x880590D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880590B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880590D0: goto loc_880590D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880590BC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880590C0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880590C4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88062320
	ctx.lr = 0x880590D0;
	sub_88062320(ctx, base);
loc_880590D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,520(r31)
	ctx.current_instruction = 0x880590DC;
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r10,508(r31)
	ctx.current_instruction = 0x880590E0;
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// stw r11,524(r31)
	ctx.current_instruction = 0x880590E4;
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// std r11,528(r31)
	ctx.current_instruction = 0x880590E8;
	REX_STORE_U64(ctx.r31.u32 + 528, ctx.r11.u64);
	// stw r11,536(r31)
	ctx.current_instruction = 0x880590EC;
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	ctx.current_instruction = 0x880590F0;
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r9,544(r31)
	ctx.current_instruction = 0x880590F4;
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880590FC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88059104;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805A498) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805A498;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805A498) {
			switch (rex_dispatch_address) {
				case 0x8805A4A0:
				case 0x8805A4C4:
				case 0x8805A4D8:
				case 0x8805A4F0:
				case 0x8805A520:
				case 0x8805A540:
				case 0x8805A564:
				case 0x8805A5B4:
				case 0x8805A5D4:
				case 0x8805A5F8:
				case 0x8805A610:
				case 0x8805A64C:
				case 0x8805A678:
				case 0x8805A690:
				case 0x8805A69C:
				case 0x8805A6A8:
				case 0x8805A6B4:
				case 0x8805A6C8:
				case 0x8805A6E0:
				case 0x8805A6EC:
				case 0x8805A6FC:
				case 0x8805A708:
				case 0x8805A714:
				case 0x8805A748:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A498;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805A4A0: goto loc_8805A4A0;
		case 0x8805A4C4: goto loc_8805A4C4;
		case 0x8805A4D8: goto loc_8805A4D8;
		case 0x8805A4F0: goto loc_8805A4F0;
		case 0x8805A520: goto loc_8805A520;
		case 0x8805A540: goto loc_8805A540;
		case 0x8805A564: goto loc_8805A564;
		case 0x8805A5B4: goto loc_8805A5B4;
		case 0x8805A5D4: goto loc_8805A5D4;
		case 0x8805A5F8: goto loc_8805A5F8;
		case 0x8805A610: goto loc_8805A610;
		case 0x8805A64C: goto loc_8805A64C;
		case 0x8805A678: goto loc_8805A678;
		case 0x8805A690: goto loc_8805A690;
		case 0x8805A69C: goto loc_8805A69C;
		case 0x8805A6A8: goto loc_8805A6A8;
		case 0x8805A6B4: goto loc_8805A6B4;
		case 0x8805A6C8: goto loc_8805A6C8;
		case 0x8805A6E0: goto loc_8805A6E0;
		case 0x8805A6EC: goto loc_8805A6EC;
		case 0x8805A6FC: goto loc_8805A6FC;
		case 0x8805A708: goto loc_8805A708;
		case 0x8805A714: goto loc_8805A714;
		case 0x8805A748: goto loc_8805A748;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8805A4A0;
	__savegprlr_27(ctx, base);
loc_8805A4A0:
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8805A4A4;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x8805A4B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8805A4B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A4C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A4C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r29)
	ctx.current_instruction = 0x8805A4C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,76(r9)
	ctx.current_instruction = 0x8805A4CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805A4D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A4D8:
	// stw r30,52(r29)
	ctx.current_instruction = 0x8805A4D8;
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r29,672
	ctx.r28.s64 = ctx.r29.s64 + 672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88065e48
	ctx.lr = 0x8805A4F0;
	sub_88065E48(ctx, base);
loc_8805A4F0:
	// stw r3,84(r31)
	ctx.current_instruction = 0x8805A4F0;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// bne cr6,0x8805a568
	if (!ctx.cr6.eq) goto loc_8805A568;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8805A500;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r29,592(r11)
	ctx.current_instruction = 0x8805A504;
	REX_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,88(r31)
	ctx.current_instruction = 0x8805A50C;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805A510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.current_instruction = 0x8805A514;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A520:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805a558
	if (ctx.cr6.eq) goto loc_8805A558;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805A528;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.current_instruction = 0x8805A534;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A540;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A540:
	// addi r9,r3,0
	ctx.r9.s64 = ctx.r3.s64 + 0;
	// lwz r8,88(r31)
	ctx.current_instruction = 0x8805A544;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// stw r4,88(r31)
	ctx.current_instruction = 0x8805A554;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
loc_8805A558:
	// lwz r4,88(r31)
	ctx.current_instruction = 0x8805A558;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,0(r28)
	ctx.current_instruction = 0x8805A55C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x88065ed8
	ctx.lr = 0x8805A564;
	sub_88065ED8(ctx, base);
loc_8805A564:
	// stw r3,84(r31)
	ctx.current_instruction = 0x8805A564;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A568:
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// stw r27,96(r31)
	ctx.current_instruction = 0x8805A56C;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r11)
	ctx.current_instruction = 0x8805A574;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	ctx.current_instruction = 0x8805A578;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,8(r11)
	ctx.current_instruction = 0x8805A57C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,12(r11)
	ctx.current_instruction = 0x8805A580;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r27,16(r11)
	ctx.current_instruction = 0x8805A584;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,660(r29)
	ctx.current_instruction = 0x8805A58C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 660);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r28)
	ctx.current_instruction = 0x8805A598;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88065f08
	ctx.lr = 0x8805A5B4;
	sub_88065F08(ctx, base);
loc_8805A5B4:
	// stw r3,84(r31)
	ctx.current_instruction = 0x8805A5B4;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,100(r31)
	ctx.current_instruction = 0x8805A5C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x8805a650
	if (!ctx.cr6.gt) goto loc_8805A650;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88065bb0
	ctx.lr = 0x8805A5D4;
	sub_88065BB0(ctx, base);
loc_8805A5D4:
	// stw r3,84(r31)
	ctx.current_instruction = 0x8805A5D4;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805A5E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,56(r11)
	ctx.current_instruction = 0x8805A5EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A5F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A5F8:
	// stw r27,676(r29)
	ctx.current_instruction = 0x8805A5F8;
	REX_STORE_U32(ctx.r29.u32 + 676, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,664(r29)
	ctx.current_instruction = 0x8805A600;
	REX_STORE_U32(ctx.r29.u32 + 664, ctx.r27.u32);
	// stw r27,668(r29)
	ctx.current_instruction = 0x8805A604;
	REX_STORE_U32(ctx.r29.u32 + 668, ctx.r27.u32);
	// stw r27,0(r28)
	ctx.current_instruction = 0x8805A608;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// bl 0x88065e48
	ctx.lr = 0x8805A610;
	sub_88065E48(ctx, base);
loc_8805A610:
	// stw r3,84(r31)
	ctx.current_instruction = 0x8805A610;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a650
	if (!ctx.cr6.eq) goto loc_8805A650;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8805A61C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,63
	ctx.r7.s64 = 63;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,592(r11)
	ctx.current_instruction = 0x8805A634;
	REX_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r28)
	ctx.current_instruction = 0x8805A63C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,660(r29)
	ctx.current_instruction = 0x8805A640;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 660);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x88065f08
	ctx.lr = 0x8805A64C;
	sub_88065F08(ctx, base);
loc_8805A64C:
	// stw r3,84(r31)
	ctx.current_instruction = 0x8805A64C;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A650:
	// sth r27,80(r31)
	ctx.current_instruction = 0x8805A650;
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r27.u16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a74c
	if (!ctx.cr6.eq) goto loc_8805A74C;
	// lwz r11,124(r29)
	ctx.current_instruction = 0x8805A65C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// addi r30,r29,124
	ctx.r30.s64 = ctx.r29.s64 + 124;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.current_instruction = 0x8805A66C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A678:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r9,124(r29)
	ctx.current_instruction = 0x8805A680;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r8,40(r9)
	ctx.current_instruction = 0x8805A684;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805A690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A690:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.current_instruction = 0x8805A694;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x88057aa8
	ctx.lr = 0x8805A69C;
	sub_88057AA8(ctx, base);
loc_8805A69C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r31)
	ctx.current_instruction = 0x8805A6A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x88057ab0
	ctx.lr = 0x8805A6A8;
	sub_88057AB0(ctx, base);
loc_8805A6A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,108(r31)
	ctx.current_instruction = 0x8805A6AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x88057ac8
	ctx.lr = 0x8805A6B4;
	sub_88057AC8(ctx, base);
loc_8805A6B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,108(r31)
	ctx.current_instruction = 0x8805A6B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r6,96(r31)
	ctx.current_instruction = 0x8805A6BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// bl 0x88057ab8
	ctx.lr = 0x8805A6C8;
	sub_88057AB8(ctx, base);
loc_8805A6C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,124(r29)
	ctx.current_instruction = 0x8805A6D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r11,44(r5)
	ctx.current_instruction = 0x8805A6D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8805A6E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A6E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88057ac0
	ctx.lr = 0x8805A6EC;
	sub_88057AC0(ctx, base);
loc_8805A6EC:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,6732(r10)
	ctx.current_instruction = 0x8805A6F4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6732);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x88057ad8
	ctx.lr = 0x8805A6FC;
	sub_88057AD8(ctx, base);
loc_8805A6FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88057ad0
	ctx.lr = 0x8805A708;
	sub_88057AD0(ctx, base);
loc_8805A708:
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// lwz r3,0(r28)
	ctx.current_instruction = 0x8805A70C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x88065b60
	ctx.lr = 0x8805A714;
	sub_88065B60(ctx, base);
loc_8805A714:
	// stw r3,84(r31)
	ctx.current_instruction = 0x8805A714;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a74c
	if (!ctx.cr6.eq) goto loc_8805A74C;
	// lhz r10,80(r31)
	ctx.current_instruction = 0x8805A720;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8805a734
	if (!ctx.cr6.eq) goto loc_8805A734;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,84(r31)
	ctx.current_instruction = 0x8805A730;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A734:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805a74c
	if (!ctx.cr6.eq) goto loc_8805A74C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r28)
	ctx.current_instruction = 0x8805A740;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x88065b88
	ctx.lr = 0x8805A748;
	sub_88065B88(ctx, base);
loc_8805A748:
	// stw r3,84(r31)
	ctx.current_instruction = 0x8805A748;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805A74C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805a77c
	if (ctx.cr6.eq) goto loc_8805A77C;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// ble cr6,0x8805a770
	if (!ctx.cr6.gt) goto loc_8805A770;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bgt cr6,0x8805a770
	if (ctx.cr6.gt) goto loc_8805A770;
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,10416
	ctx.r11.u64 = ctx.r11.u64 | 10416;
	// b 0x8805a780
	goto loc_8805A780;
loc_8805A770:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x8805a780
	goto loc_8805A780;
loc_8805A77C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8805A780:
	// stw r11,92(r31)
	ctx.current_instruction = 0x8805A780;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8805a7a0
	goto loc_8805A7A0;
loc_8805A7A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88063D40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88063D40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88063D40) {
			switch (rex_dispatch_address) {
				case 0x88063D48:
				case 0x88063D7C:
				case 0x88063D98:
				case 0x88063DB8:
				case 0x88063DF0:
				case 0x88063E0C:
				case 0x88063E20:
				case 0x88063E3C:
				case 0x88063E7C:
				case 0x88063EA4:
				case 0x88063ECC:
				case 0x88063EE8:
				case 0x88063F04:
				case 0x88063F20:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88063D40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88063D48: goto loc_88063D48;
		case 0x88063D7C: goto loc_88063D7C;
		case 0x88063D98: goto loc_88063D98;
		case 0x88063DB8: goto loc_88063DB8;
		case 0x88063DF0: goto loc_88063DF0;
		case 0x88063E0C: goto loc_88063E0C;
		case 0x88063E20: goto loc_88063E20;
		case 0x88063E3C: goto loc_88063E3C;
		case 0x88063E7C: goto loc_88063E7C;
		case 0x88063EA4: goto loc_88063EA4;
		case 0x88063ECC: goto loc_88063ECC;
		case 0x88063EE8: goto loc_88063EE8;
		case 0x88063F04: goto loc_88063F04;
		case 0x88063F20: goto loc_88063F20;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88063D48;
	__savegprlr_26(ctx, base);
loc_88063D48:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88063D48;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r28,80(r1)
	ctx.current_instruction = 0x88063D54;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	ctx.current_instruction = 0x88063D5C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,88(r1)
	ctx.current_instruction = 0x88063D64;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,656
	ctx.r5.s64 = 656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x88063D7C;
	sub_880CB2C0(ctx, base);
loc_88063D7C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88063eb0
	if (ctx.cr6.lt) goto loc_88063EB0;
	// li r5,656
	ctx.r5.s64 = 656;
	// lwz r3,0(r26)
	ctx.current_instruction = 0x88063D8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88063D98;
	sub_88052D90(ctx, base);
loc_88063D98:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,0(r26)
	ctx.current_instruction = 0x88063DA8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// stw r27,524(r30)
	ctx.current_instruction = 0x88063DAC;
	REX_STORE_U32(ctx.r30.u32 + 524, ctx.r27.u32);
	// stw r28,528(r30)
	ctx.current_instruction = 0x88063DB0;
	REX_STORE_U32(ctx.r30.u32 + 528, ctx.r28.u32);
	// bl 0x880cb2c0
	ctx.lr = 0x88063DB8;
	sub_880CB2C0(ctx, base);
loc_88063DB8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88063eb0
	if (ctx.cr6.lt) goto loc_88063EB0;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88063DC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88063DD4:
	// stwu r28,4(r11)
	ctx.current_instruction = 0x88063DD4;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x88063dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88063DD4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,644
	ctx.r5.s64 = 644;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x88063DF0;
	sub_880CB2C0(ctx, base);
loc_88063DF0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88063eb0
	if (ctx.cr6.lt) goto loc_88063EB0;
	// li r5,644
	ctx.r5.s64 = 644;
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88063E00;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88063E0C;
	sub_88052D90(ctx, base);
loc_88063E0C:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x88063E20;
	sub_880CB2C0(ctx, base);
loc_88063E20:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88063eb0
	if (ctx.cr6.lt) goto loc_88063EB0;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,88(r1)
	ctx.current_instruction = 0x88063E30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88063E3C;
	sub_88052D90(ctx, base);
loc_88063E3C:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88063E3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-30714
	ctx.r10.s64 = -2012872704;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r10,15560
	ctx.r4.s64 = ctx.r10.s64 + 15560;
	// addi r7,r30,572
	ctx.r7.s64 = ctx.r30.s64 + 572;
	// stw r9,0(r30)
	ctx.current_instruction = 0x88063E50;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r8,84(r1)
	ctx.current_instruction = 0x88063E58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r8,4(r30)
	ctx.current_instruction = 0x88063E60;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88063E68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r30)
	ctx.current_instruction = 0x88063E6C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r11,532(r30)
	ctx.current_instruction = 0x88063E70;
	REX_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
	// stw r29,608(r30)
	ctx.current_instruction = 0x88063E74;
	REX_STORE_U32(ctx.r30.u32 + 608, ctx.r29.u32);
	// bl 0x880cb590
	ctx.lr = 0x88063E7C;
	sub_880CB590(ctx, base);
loc_88063E7C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88063eb0
	if (ctx.cr6.lt) goto loc_88063EB0;
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r7,r30,568
	ctx.r7.s64 = ctx.r30.s64 + 568;
	// li r6,84
	ctx.r6.s64 = 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15608
	ctx.r4.s64 = ctx.r11.s64 + 15608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880cb590
	ctx.lr = 0x88063EA4;
	sub_880CB590(ctx, base);
loc_88063EA4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88063f20
	if (!ctx.cr6.lt) goto loc_88063F20;
loc_88063EB0:
	// lwz r11,0(r26)
	ctx.current_instruction = 0x88063EB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88063ecc
	if (ctx.cr6.eq) goto loc_88063ECC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880cb318
	ctx.lr = 0x88063ECC;
	sub_880CB318(ctx, base);
loc_88063ECC:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88063ECC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88063ee8
	if (ctx.cr6.eq) goto loc_88063EE8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880cb318
	ctx.lr = 0x88063EE8;
	sub_880CB318(ctx, base);
loc_88063EE8:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88063EE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88063f04
	if (ctx.cr6.eq) goto loc_88063F04;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880cb318
	ctx.lr = 0x88063F04;
	sub_880CB318(ctx, base);
loc_88063F04:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88063F04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88063f20
	if (ctx.cr6.eq) goto loc_88063F20;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880cb318
	ctx.lr = 0x88063F20;
	sub_880CB318(ctx, base);
loc_88063F20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88067F28) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88067F28);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067F28;
	ctx.current_instruction = 0x88067F28;
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// stw r11,244(r3)
	ctx.current_instruction = 0x88067F30;
	REX_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,248(r3)
	ctx.current_instruction = 0x88067F38;
	REX_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r11,252(r3)
	ctx.current_instruction = 0x88067F3C;
	REX_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r11,256(r3)
	ctx.current_instruction = 0x88067F40;
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stw r11,44(r3)
	ctx.current_instruction = 0x88067F44;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lfs f0,6708(r9)
	ctx.current_instruction = 0x88067F48;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r3)
	ctx.current_instruction = 0x88067F4C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stw r11,48(r3)
	ctx.current_instruction = 0x88067F50;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	ctx.current_instruction = 0x88067F54;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	ctx.current_instruction = 0x88067F58;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	ctx.current_instruction = 0x88067F5C;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	ctx.current_instruction = 0x88067F60;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	ctx.current_instruction = 0x88067F64;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	ctx.current_instruction = 0x88067F68;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	ctx.current_instruction = 0x88067F6C;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	ctx.current_instruction = 0x88067F70;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,212(r3)
	ctx.current_instruction = 0x88067F74;
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// stw r10,216(r3)
	ctx.current_instruction = 0x88067F78;
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r10.u32);
	// stw r11,220(r3)
	ctx.current_instruction = 0x88067F7C;
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r11,224(r3)
	ctx.current_instruction = 0x88067F80;
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stw r11,228(r3)
	ctx.current_instruction = 0x88067F84;
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	ctx.current_instruction = 0x88067F88;
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r11,236(r3)
	ctx.current_instruction = 0x88067F8C;
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r10,240(r3)
	ctx.current_instruction = 0x88067F90;
	REX_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// stw r11,260(r3)
	ctx.current_instruction = 0x88067F94;
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stw r11,264(r3)
	ctx.current_instruction = 0x88067F98;
	REX_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,268(r3)
	ctx.current_instruction = 0x88067F9C;
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r11,272(r3)
	ctx.current_instruction = 0x88067FA0;
	REX_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	ctx.current_instruction = 0x88067FA4;
	REX_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// std r11,288(r3)
	ctx.current_instruction = 0x88067FA8;
	REX_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// stw r11,84(r3)
	ctx.current_instruction = 0x88067FAC;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	ctx.current_instruction = 0x88067FB0;
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	ctx.current_instruction = 0x88067FB4;
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	ctx.current_instruction = 0x88067FB8;
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	ctx.current_instruction = 0x88067FBC;
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	ctx.current_instruction = 0x88067FC0;
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	ctx.current_instruction = 0x88067FC4;
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	ctx.current_instruction = 0x88067FC8;
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	ctx.current_instruction = 0x88067FCC;
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	ctx.current_instruction = 0x88067FD0;
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	ctx.current_instruction = 0x88067FD4;
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	ctx.current_instruction = 0x88067FD8;
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	ctx.current_instruction = 0x88067FDC;
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	ctx.current_instruction = 0x88067FE0;
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	ctx.current_instruction = 0x88067FE4;
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	ctx.current_instruction = 0x88067FE8;
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	ctx.current_instruction = 0x88067FEC;
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	ctx.current_instruction = 0x88067FF0;
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	ctx.current_instruction = 0x88067FF4;
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r11,160(r3)
	ctx.current_instruction = 0x88067FF8;
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,164(r3)
	ctx.current_instruction = 0x88067FFC;
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,168(r3)
	ctx.current_instruction = 0x88068000;
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,172(r3)
	ctx.current_instruction = 0x88068004;
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,176(r3)
	ctx.current_instruction = 0x88068008;
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r11,180(r3)
	ctx.current_instruction = 0x8806800C;
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stw r11,184(r3)
	ctx.current_instruction = 0x88068010;
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r11,188(r3)
	ctx.current_instruction = 0x88068014;
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stw r11,192(r3)
	ctx.current_instruction = 0x88068018;
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r11,196(r3)
	ctx.current_instruction = 0x8806801C;
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r11,200(r3)
	ctx.current_instruction = 0x88068020;
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,204(r3)
	ctx.current_instruction = 0x88068024;
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	ctx.current_instruction = 0x88068028;
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C298) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C298);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C298;
	ctx.current_instruction = 0x8806C298;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	ctx.current_instruction = 0x8806C29C;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	ctx.current_instruction = 0x8806C2A0;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	ctx.current_instruction = 0x8806C2A4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r4)
	ctx.current_instruction = 0x8806C2A8;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,8176(r3)
	ctx.current_instruction = 0x8806C2AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806c358
	if (ctx.cr6.eq) goto loc_8806C358;
	// lwz r11,8180(r3)
	ctx.current_instruction = 0x8806C2B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8180);
	// lwz r10,160(r11)
	ctx.current_instruction = 0x8806C2BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8806c358
	if (ctx.cr6.eq) goto loc_8806C358;
	// lwz r11,48(r11)
	ctx.current_instruction = 0x8806C2C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8806c358
	if (ctx.cr6.eq) goto loc_8806C358;
	// srawi r10,r11,24
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 24;
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// clrlwi r3,r10,28
	ctx.r3.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r10,r9,28
	ctx.r10.u64 = ctx.r9.u32 & 0xF;
	// clrlwi r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	// stw r3,0(r4)
	ctx.current_instruction = 0x8806C2EC;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r5)
	ctx.current_instruction = 0x8806C2F4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	ctx.current_instruction = 0x8806C2F8;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r8,0(r7)
	ctx.current_instruction = 0x8806C2FC;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r4)
	ctx.current_instruction = 0x8806C300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x8806c310
	if (!ctx.cr6.gt) goto loc_8806C310;
	// li r11,8
	ctx.r11.s64 = 8;
loc_8806C310:
	// stw r11,0(r4)
	ctx.current_instruction = 0x8806C310;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.current_instruction = 0x8806C314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x8806c324
	if (!ctx.cr6.gt) goto loc_8806C324;
	// li r11,8
	ctx.r11.s64 = 8;
loc_8806C324:
	// stw r11,0(r5)
	ctx.current_instruction = 0x8806C324;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r6)
	ctx.current_instruction = 0x8806C328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x8806c338
	if (!ctx.cr6.gt) goto loc_8806C338;
	// li r11,8
	ctx.r11.s64 = 8;
loc_8806C338:
	// stw r11,0(r6)
	ctx.current_instruction = 0x8806C338;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r7)
	ctx.current_instruction = 0x8806C33C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x8806c34c
	if (!ctx.cr6.gt) goto loc_8806C34C;
	// li r11,8
	ctx.r11.s64 = 8;
loc_8806C34C:
	// stw r11,0(r7)
	ctx.current_instruction = 0x8806C34C;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806C358:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806EB88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806EB88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806EB88) {
			switch (rex_dispatch_address) {
				case 0x8806EBC0:
				case 0x8806EE70:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806EB88;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806EBC0: goto loc_8806EBC0;
		case 0x8806EE70: goto loc_8806EE70;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806EB8C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8806EB90;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806EB94;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8806EB98;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,31032(r3)
	ctx.current_instruction = 0x8806EB9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31032);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8806ebc8
	if (!ctx.cr6.eq) goto loc_8806EBC8;
	// lwz r11,31036(r3)
	ctx.current_instruction = 0x8806EBB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31036);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8806ebc8
	if (!ctx.cr6.eq) goto loc_8806EBC8;
	// bl 0x881ee8e8
	ctx.lr = 0x8806EBC0;
	sub_881EE8E8(ctx, base);
loc_8806EBC0:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// stw r11,1428(r31)
	ctx.current_instruction = 0x8806EBC4;
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
loc_8806EBC8:
	// lwz r11,30868(r31)
	ctx.current_instruction = 0x8806EBC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806ebe8
	if (ctx.cr6.eq) goto loc_8806EBE8;
	// lwz r11,6756(r31)
	ctx.current_instruction = 0x8806EBD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806ebe8
	if (!ctx.cr6.eq) goto loc_8806EBE8;
	// lwz r30,30924(r31)
	ctx.current_instruction = 0x8806EBE0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 30924);
	// stw r30,672(r31)
	ctx.current_instruction = 0x8806EBE4;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
loc_8806EBE8:
	// lwz r11,30880(r31)
	ctx.current_instruction = 0x8806EBE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30880);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806ebfc
	if (ctx.cr6.eq) goto loc_8806EBFC;
	// lwz r11,30936(r31)
	ctx.current_instruction = 0x8806EBF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30936);
	// stw r11,1424(r31)
	ctx.current_instruction = 0x8806EBF8;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
loc_8806EBFC:
	// lwz r11,30892(r31)
	ctx.current_instruction = 0x8806EBFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806ec10
	if (ctx.cr6.eq) goto loc_8806EC10;
	// lwz r11,30948(r31)
	ctx.current_instruction = 0x8806EC08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30948);
	// stw r11,1428(r31)
	ctx.current_instruction = 0x8806EC0C;
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
loc_8806EC10:
	// stw r30,1420(r31)
	ctx.current_instruction = 0x8806EC10;
	REX_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// ble cr6,0x8806ec24
	if (!ctx.cr6.gt) goto loc_8806EC24;
	// stw r8,1424(r31)
	ctx.current_instruction = 0x8806EC20;
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r8.u32);
loc_8806EC24:
	// lwz r10,1432(r31)
	ctx.current_instruction = 0x8806EC24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8806ec48
	if (!ctx.cr6.eq) goto loc_8806EC48;
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r9,r30,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// subfc r6,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r30.u64;
	// adde r11,r9,r7
	temp.u8 = (ctx.r9.u32 + ctx.r7.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,1428(r31)
	ctx.current_instruction = 0x8806EC44;
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
loc_8806EC48:
	// lwz r11,1428(r31)
	ctx.current_instruction = 0x8806EC48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806ec5c
	if (ctx.cr6.eq) goto loc_8806EC5C;
	// lwz r9,8216(r31)
	ctx.current_instruction = 0x8806EC54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8216);
	// b 0x8806ec60
	goto loc_8806EC60;
loc_8806EC5C:
	// lwz r9,8212(r31)
	ctx.current_instruction = 0x8806EC5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8212);
loc_8806EC60:
	// stw r9,8208(r31)
	ctx.current_instruction = 0x8806EC60;
	REX_STORE_U32(ctx.r31.u32 + 8208, ctx.r9.u32);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bgt cr6,0x8806ec80
	if (ctx.cr6.gt) goto loc_8806EC80;
	// addi r9,r31,19828
	ctx.r9.s64 = ctx.r31.s64 + 19828;
	// addi r7,r31,19956
	ctx.r7.s64 = ctx.r31.s64 + 19956;
	// addi r6,r31,19572
	ctx.r6.s64 = ctx.r31.s64 + 19572;
	// addi r5,r31,19700
	ctx.r5.s64 = ctx.r31.s64 + 19700;
	// b 0x8806ec90
	goto loc_8806EC90;
loc_8806EC80:
	// addi r9,r31,19764
	ctx.r9.s64 = ctx.r31.s64 + 19764;
	// addi r7,r31,19892
	ctx.r7.s64 = ctx.r31.s64 + 19892;
	// addi r6,r31,19508
	ctx.r6.s64 = ctx.r31.s64 + 19508;
	// addi r5,r31,19636
	ctx.r5.s64 = ctx.r31.s64 + 19636;
loc_8806EC90:
	// stw r5,20024(r31)
	ctx.current_instruction = 0x8806EC90;
	REX_STORE_U32(ctx.r31.u32 + 20024, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,20012(r31)
	ctx.current_instruction = 0x8806EC98;
	REX_STORE_U32(ctx.r31.u32 + 20012, ctx.r6.u32);
	// stw r7,20000(r31)
	ctx.current_instruction = 0x8806EC9C;
	REX_STORE_U32(ctx.r31.u32 + 20000, ctx.r7.u32);
	// stw r9,19988(r31)
	ctx.current_instruction = 0x8806ECA0;
	REX_STORE_U32(ctx.r31.u32 + 19988, ctx.r9.u32);
	// beq cr6,0x8806ecb4
	if (ctx.cr6.eq) goto loc_8806ECB4;
	// addi r11,r31,24612
	ctx.r11.s64 = ctx.r31.s64 + 24612;
	// stw r11,27940(r31)
	ctx.current_instruction = 0x8806ECAC;
	REX_STORE_U32(ctx.r31.u32 + 27940, ctx.r11.u32);
	// b 0x8806ecd8
	goto loc_8806ECD8;
loc_8806ECB4:
	// addi r11,r31,21284
	ctx.r11.s64 = ctx.r31.s64 + 21284;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,27940(r31)
	ctx.current_instruction = 0x8806ECBC;
	REX_STORE_U32(ctx.r31.u32 + 27940, ctx.r11.u32);
	// bne cr6,0x8806ecd8
	if (!ctx.cr6.eq) goto loc_8806ECD8;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2872
	ctx.r11.s64 = ctx.r11.s64 + 2872;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,-4(r10)
	ctx.current_instruction = 0x8806ECD4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
loc_8806ECD8:
	// lwz r11,2336(r31)
	ctx.current_instruction = 0x8806ECD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2336);
	// stw r30,1416(r31)
	ctx.current_instruction = 0x8806ECDC;
	REX_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,2340(r31)
	ctx.current_instruction = 0x8806ECE4;
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r8.u32);
	// beq cr6,0x8806ed2c
	if (ctx.cr6.eq) goto loc_8806ED2C;
	// lwz r11,7864(r31)
	ctx.current_instruction = 0x8806ECEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806ed2c
	if (!ctx.cr6.eq) goto loc_8806ED2C;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// blt cr6,0x8806ed08
	if (ctx.cr6.lt) goto loc_8806ED08;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8806ed28
	goto loc_8806ED28;
loc_8806ED08:
	// lwz r11,2572(r31)
	ctx.current_instruction = 0x8806ED08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806ed2c
	if (ctx.cr6.eq) goto loc_8806ED2C;
	// li r11,7
	ctx.r11.s64 = 7;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// stw r11,2340(r31)
	ctx.current_instruction = 0x8806ED1C;
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r11.u32);
	// bge cr6,0x8806ed2c
	if (!ctx.cr6.lt) goto loc_8806ED2C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8806ED28:
	// stw r11,2340(r31)
	ctx.current_instruction = 0x8806ED28;
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r11.u32);
loc_8806ED2C:
	// lwz r10,1424(r31)
	ctx.current_instruction = 0x8806ED2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,27940(r31)
	ctx.current_instruction = 0x8806ED34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 27940);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,2340(r31)
	ctx.current_instruction = 0x8806ED40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// li r4,1472
	ctx.r4.s64 = 1472;
	// mulli r11,r6,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(52));
	// lfs f0,12188(r7)
	ctx.current_instruction = 0x8806ED4C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12188);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r3,1476
	ctx.r3.s64 = 1476;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// addi r10,r11,-52
	ctx.r10.s64 = ctx.r11.s64 + -52;
	// lwz r30,-12(r11)
	ctx.current_instruction = 0x8806ED64;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// li r6,1468
	ctx.r6.s64 = 1468;
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// lfs f12,6708(r9)
	ctx.current_instruction = 0x8806ED70;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12180(r7)
	ctx.current_instruction = 0x8806ED74;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12180);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r30,1456(r31)
	ctx.current_instruction = 0x8806ED7C;
	REX_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// stw r30,1452(r31)
	ctx.current_instruction = 0x8806ED80;
	REX_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// lfs f11,-4(r11)
	ctx.current_instruction = 0x8806ED84;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,19256(r31)
	ctx.current_instruction = 0x8806ED8C;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r31.u32 + 19256, temp.u32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,19252(r31)
	ctx.current_instruction = 0x8806ED94;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r31.u32 + 19252, temp.u32);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r31,r4
	ctx.current_instruction = 0x8806ED9C;
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.f9.u32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r31,r3
	ctx.current_instruction = 0x8806EDA8;
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.f6.u32);
	// lwz r4,-52(r11)
	ctx.current_instruction = 0x8806EDAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -52);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	ctx.current_instruction = 0x8806EDB4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f5,80(r1)
	ctx.current_instruction = 0x8806EDB8;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// stw r4,1460(r31)
	ctx.current_instruction = 0x8806EDC0;
	REX_STORE_U32(ctx.r31.u32 + 1460, ctx.r4.u32);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,19236(r31)
	ctx.current_instruction = 0x8806EDC8;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r31.u32 + 19236, temp.u32);
	// lwz r10,19236(r31)
	ctx.current_instruction = 0x8806EDCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19236);
	// stw r10,19244(r31)
	ctx.current_instruction = 0x8806EDD0;
	REX_STORE_U32(ctx.r31.u32 + 19244, ctx.r10.u32);
	// fdivs f1,f12,f3
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f3.f64));
	// stfs f1,19240(r31)
	ctx.current_instruction = 0x8806EDD8;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 19240, temp.u32);
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f11,80(r1)
	ctx.current_instruction = 0x8806EDE0;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8806EDE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// stw r9,19248(r31)
	ctx.current_instruction = 0x8806EDEC;
	REX_STORE_U32(ctx.r31.u32 + 19248, ctx.r9.u32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r31,r6
	ctx.current_instruction = 0x8806EDFC;
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f9.u32);
	// lwz r7,-48(r11)
	ctx.current_instruction = 0x8806EE00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -48);
	// stw r7,1464(r31)
	ctx.current_instruction = 0x8806EE04;
	REX_STORE_U32(ctx.r31.u32 + 1464, ctx.r7.u32);
	// beq cr6,0x8806ee20
	if (ctx.cr6.eq) goto loc_8806EE20;
	// lwz r11,17536(r31)
	ctx.current_instruction = 0x8806EE0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// sth r8,0(r11)
	ctx.current_instruction = 0x8806EE10;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r10,17540(r31)
	ctx.current_instruction = 0x8806EE14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// sth r8,0(r10)
	ctx.current_instruction = 0x8806EE18;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// b 0x8806ee68
	goto loc_8806EE68;
loc_8806EE20:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f12,19252(r31)
	ctx.current_instruction = 0x8806EE24;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 19252);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,17536(r31)
	ctx.current_instruction = 0x8806EE2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// lfs f0,12184(r11)
	ctx.current_instruction = 0x8806EE30;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6728(r10)
	ctx.current_instruction = 0x8806EE34;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	ctx.current_instruction = 0x8806EE40;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lhz r8,86(r1)
	ctx.current_instruction = 0x8806EE44;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sth r8,0(r9)
	ctx.current_instruction = 0x8806EE48;
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// lfs f9,19256(r31)
	ctx.current_instruction = 0x8806EE4C;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 19256);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,17540(r31)
	ctx.current_instruction = 0x8806EE50;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// fmadds f8,f9,f0,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	ctx.current_instruction = 0x8806EE5C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lhz r6,86(r1)
	ctx.current_instruction = 0x8806EE60;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sth r6,0(r7)
	ctx.current_instruction = 0x8806EE64;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r6.u16);
loc_8806EE68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ebc80
	ctx.lr = 0x8806EE70;
	sub_880EBC80(ctx, base);
loc_8806EE70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806EE74;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8806EE7C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806EE80;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807C820) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807C820;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807C820) {
			switch (rex_dispatch_address) {
				case 0x8807C828:
				case 0x8807C868:
				case 0x8807C878:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807C820;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807C828: goto loc_8807C828;
		case 0x8807C868: goto loc_8807C868;
		case 0x8807C878: goto loc_8807C878;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8807C828;
	__savegprlr_26(ctx, base);
loc_8807C828:
	// stfd f29,-80(r1)
	ctx.current_instruction = 0x8807C828;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	ctx.current_instruction = 0x8807C82C;
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	ctx.current_instruction = 0x8807C830;
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x8807C834;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8807cc04
	if (ctx.cr6.eq) goto loc_8807CC04;
	// mullw r28,r5,r6
	ctx.r28.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// rlwinm r26,r28,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x88052d90
	ctx.lr = 0x8807C868;
	sub_88052D90(ctx, base);
loc_8807C868:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1048
	ctx.r3.s64 = ctx.r31.s64 + 1048;
	// bl 0x88052d90
	ctx.lr = 0x8807C878;
	sub_88052D90(ctx, base);
loc_8807C878:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// rlwinm r6,r29,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8807c8dc
	if (ctx.cr6.eq) goto loc_8807C8DC;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
loc_8807C894:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8807c8d0
	if (ctx.cr6.eq) goto loc_8807C8D0;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8807C8B0:
	// lbzx r10,r11,r8
	ctx.current_instruction = 0x8807C8B0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.current_instruction = 0x8807C8C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r31
	ctx.current_instruction = 0x8807C8C8;
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// bdnz 0x8807c8b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8807C8B0;
loc_8807C8D0:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// bne 0x8807c894
	if (!ctx.cr0.eq) goto loc_8807C894;
loc_8807C8DC:
	// add r8,r28,r27
	ctx.r8.u64 = ctx.r28.u64 + ctx.r27.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8807c910
	if (ctx.cr6.eq) goto loc_8807C910;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_8807C8F0:
	// lbzx r10,r11,r8
	ctx.current_instruction = 0x8807C8F0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,262
	ctx.r10.s64 = ctx.r10.s64 + 262;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.current_instruction = 0x8807C900;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r31
	ctx.current_instruction = 0x8807C908;
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// bdnz 0x8807c8f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8807C8F0;
loc_8807C910:
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// lfs f0,6732(r9)
	ctx.current_instruction = 0x8807C91C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	ctx.current_instruction = 0x8807C920;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_8807C944:
	// lwz r4,12(r10)
	ctx.current_instruction = 0x8807C944;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r7,4(r10)
	ctx.current_instruction = 0x8807C94C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r6,8(r10)
	ctx.current_instruction = 0x8807C954;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwzu r8,16(r10)
	ctx.current_instruction = 0x8807C95C;
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r6,r3,r6
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// mullw r3,r9,r8
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r5,r7
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// addi r30,r11,-2
	ctx.r30.s64 = ctx.r11.s64 + -2;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// std r4,80(r1)
	ctx.current_instruction = 0x8807C984;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// std r8,96(r1)
	ctx.current_instruction = 0x8807C988;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// mullw r30,r30,r7
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// lfd f7,80(r1)
	ctx.current_instruction = 0x8807C994;
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r3,r9,32
	ctx.r3.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lfd f3,96(r1)
	ctx.current_instruction = 0x8807C99C;
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// std r4,104(r1)
	ctx.current_instruction = 0x8807C9A4;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// std r3,112(r1)
	ctx.current_instruction = 0x8807C9AC;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r8,128(r1)
	ctx.current_instruction = 0x8807C9B4;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// std r7,136(r1)
	ctx.current_instruction = 0x8807C9B8;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f2,104(r1)
	ctx.current_instruction = 0x8807C9BC;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,120(r1)
	ctx.current_instruction = 0x8807C9C0;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f1,112(r1)
	ctx.current_instruction = 0x8807C9C4;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f31,120(r1)
	ctx.current_instruction = 0x8807C9C8;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lfd f30,128(r1)
	ctx.current_instruction = 0x8807C9D0;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// lfd f29,136(r1)
	ctx.current_instruction = 0x8807C9D8;
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mullw r5,r5,r6
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r5,88(r1)
	ctx.current_instruction = 0x8807C9F4;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f4,88(r1)
	ctx.current_instruction = 0x8807C9F8;
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// fcfid f29,f29
	ctx.f29.f64 = double(ctx.f29.s64);
	// cmplwi cr6,r6,100
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 100, ctx.xer);
	// fcfid f30,f30
	ctx.f30.f64 = double(ctx.f30.s64);
	// fcfid f31,f31
	ctx.f31.f64 = double(ctx.f31.s64);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fadds f6,f7,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// frsp f29,f29
	ctx.f29.f64 = double(float(ctx.f29.f64));
	// frsp f30,f30
	ctx.f30.f64 = double(float(ctx.f30.f64));
	// frsp f31,f31
	ctx.f31.f64 = double(float(ctx.f31.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fadds f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f12.f64));
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// fadds f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 + ctx.f11.f64));
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fadds f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// blt cr6,0x8807c944
	if (ctx.cr6.lt) goto loc_8807C944;
	// fadds f4,f9,f12
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// li r11,102
	ctx.r11.s64 = 102;
	// fadds f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// addi r10,r31,420
	ctx.r10.s64 = ctx.r31.s64 + 420;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f13,20(r31)
	ctx.current_instruction = 0x8807CA88;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
loc_8807CA90:
	// lwz r8,8(r10)
	ctx.current_instruction = 0x8807CA90;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r6,12(r10)
	ctx.current_instruction = 0x8807CA98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r4,r7,r8
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r5,4(r10)
	ctx.current_instruction = 0x8807CAA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzu r8,16(r10)
	ctx.current_instruction = 0x8807CAA8;
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r3,r11,r6
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// mullw r8,r11,r3
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// std r7,136(r1)
	ctx.current_instruction = 0x8807CAC4;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// std r7,112(r1)
	ctx.current_instruction = 0x8807CAD4;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// std r8,128(r1)
	ctx.current_instruction = 0x8807CAD8;
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lfd f6,136(r1)
	ctx.current_instruction = 0x8807CAE0;
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// mullw r8,r3,r5
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// lfd f3,112(r1)
	ctx.current_instruction = 0x8807CAEC;
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lfd f5,128(r1)
	ctx.current_instruction = 0x8807CAF8;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// extsw r30,r6
	ctx.r30.s64 = ctx.r6.s32;
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// std r5,88(r1)
	ctx.current_instruction = 0x8807CB04;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f31,88(r1)
	ctx.current_instruction = 0x8807CB08;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// std r30,120(r1)
	ctx.current_instruction = 0x8807CB10;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r30.u64);
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r7,96(r1)
	ctx.current_instruction = 0x8807CB18;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// std r6,80(r1)
	ctx.current_instruction = 0x8807CB1C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mullw r3,r4,r8
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// fadds f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// std r9,104(r1)
	ctx.current_instruction = 0x8807CB44;
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f2,104(r1)
	ctx.current_instruction = 0x8807CB48;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// cmplwi cr6,r8,256
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 256, ctx.xer);
	// lfd f4,120(r1)
	ctx.current_instruction = 0x8807CB54;
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f31,f31
	ctx.f31.f64 = double(ctx.f31.s64);
	// lfd f2,96(r1)
	ctx.current_instruction = 0x8807CB5C;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// lfd f30,80(r1)
	ctx.current_instruction = 0x8807CB64;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// fcfid f30,f30
	ctx.f30.f64 = double(ctx.f30.s64);
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fadds f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// fadds f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// frsp f31,f31
	ctx.f31.f64 = double(float(ctx.f31.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// frsp f30,f30
	ctx.f30.f64 = double(float(ctx.f30.f64));
	// fadds f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// fadds f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fadds f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// blt cr6,0x8807ca90
	if (ctx.cr6.lt) goto loc_8807CA90;
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,136(r1)
	ctx.current_instruction = 0x8807CBB4;
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f8,136(r1)
	ctx.current_instruction = 0x8807CBB8;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfs f6,20(r31)
	ctx.current_instruction = 0x8807CBC0;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,6708(r10)
	ctx.current_instruction = 0x8807CBC8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// li r9,1
	ctx.r9.s64 = 1;
	// fadds f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stw r9,2072(r31)
	ctx.current_instruction = 0x8807CBD8;
	REX_STORE_U32(ctx.r31.u32 + 2072, ctx.r9.u32);
	// fadds f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fdivs f1,f0,f4
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fadds f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fsubs f13,f2,f6
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// stfs f13,20(r31)
	ctx.current_instruction = 0x8807CBEC;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f12,f1,f2
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// stfs f12,8(r31)
	ctx.current_instruction = 0x8807CBF4;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmsubs f10,f1,f0,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f11.f64)));
	// stfs f10,0(r31)
	ctx.current_instruction = 0x8807CC00;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_8807CC04:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-80(r1)
	ctx.current_instruction = 0x8807CC08;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.current_instruction = 0x8807CC0C;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.current_instruction = 0x8807CC10;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88088868) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88088868;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88088868) {
			switch (rex_dispatch_address) {
				case 0x88088870:
				case 0x8808896C:
				case 0x88088984:
				case 0x880889A0:
				case 0x88088A7C:
				case 0x88088A94:
				case 0x88088AB0:
				case 0x88088B8C:
				case 0x88088BA4:
				case 0x88088BC0:
				case 0x88088C88:
				case 0x88088CA0:
				case 0x88088CBC:
				case 0x88088D9C:
				case 0x88088DB4:
				case 0x88088DD0:
				case 0x88088EA0:
				case 0x88088EB8:
				case 0x88088ED4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88088868;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88088870: goto loc_88088870;
		case 0x8808896C: goto loc_8808896C;
		case 0x88088984: goto loc_88088984;
		case 0x880889A0: goto loc_880889A0;
		case 0x88088A7C: goto loc_88088A7C;
		case 0x88088A94: goto loc_88088A94;
		case 0x88088AB0: goto loc_88088AB0;
		case 0x88088B8C: goto loc_88088B8C;
		case 0x88088BA4: goto loc_88088BA4;
		case 0x88088BC0: goto loc_88088BC0;
		case 0x88088C88: goto loc_88088C88;
		case 0x88088CA0: goto loc_88088CA0;
		case 0x88088CBC: goto loc_88088CBC;
		case 0x88088D9C: goto loc_88088D9C;
		case 0x88088DB4: goto loc_88088DB4;
		case 0x88088DD0: goto loc_88088DD0;
		case 0x88088EA0: goto loc_88088EA0;
		case 0x88088EB8: goto loc_88088EB8;
		case 0x88088ED4: goto loc_88088ED4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88088870;
	__savegprlr_14(ctx, base);
loc_88088870:
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x88088870;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lwz r18,428(r1)
	ctx.current_instruction = 0x88088878;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// lwz r8,356(r1)
	ctx.current_instruction = 0x88088880;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r23,412(r1)
	ctx.current_instruction = 0x88088888;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r17,404(r1)
	ctx.current_instruction = 0x88088890;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// subfic r4,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// lwz r8,420(r1)
	ctx.current_instruction = 0x88088898;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// li r9,-2
	ctx.r9.s64 = -2;
	// lwz r25,380(r1)
	ctx.current_instruction = 0x880888A0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r4,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// lwz r5,364(r1)
	ctx.current_instruction = 0x880888B0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// and r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 & ctx.r9.u64;
	// lwz r19,12(r8)
	ctx.current_instruction = 0x880888B8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// subfe r6,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 & ctx.r9.u64;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// and r9,r6,r29
	ctx.r9.u64 = ctx.r6.u64 & ctx.r29.u64;
	// stw r30,100(r1)
	ctx.current_instruction = 0x880888DC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// and r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 & ctx.r29.u64;
	// li r24,16
	ctx.r24.s64 = 16;
	// stw r9,104(r1)
	ctx.current_instruction = 0x880888E8;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r8,96(r1)
	ctx.current_instruction = 0x880888F0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r22,r10,6848
	ctx.r22.s64 = ctx.r10.s64 + 6848;
	// bge cr6,0x88088b38
	if (!ctx.cr6.lt) goto loc_88088B38;
loc_88088908:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x88088908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// subf r11,r11,r14
	ctx.r11.u64 = ctx.r14.u64 - ctx.r11.u64;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x88088a14
	if (!ctx.cr6.lt) goto loc_88088A14;
	// lwz r10,436(r1)
	ctx.current_instruction = 0x8808891C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r26,r8,r7
	ctx.r26.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_88088934:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88088934;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808893C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x88088970
	if (!ctx.cr6.eq) goto loc_88088970;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88088958;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088960;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808896C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808896C:
	// b 0x88088984
	goto loc_88088984;
loc_88088970:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88088970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088978;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088984:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x880889A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880889A0:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880889ec
	if (ctx.cr6.gt) goto loc_880889EC;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x880889ec
	if (ctx.cr6.gt) goto loc_880889EC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x880889CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x880889D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r23
	ctx.current_instruction = 0x880889DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// lwzx r10,r6,r23
	ctx.current_instruction = 0x880889E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880889f4
	goto loc_880889F4;
loc_880889EC:
	// lwz r11,20(r23)
	ctx.current_instruction = 0x880889EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880889F4:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88088a0c
	if (!ctx.cr6.lt) goto loc_88088A0C;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
loc_88088A0C:
	// addic. r30,r30,2
	ctx.xer.ca = ctx.r30.u32 > 4294967293;
	ctx.r30.s64 = ctx.r30.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88088934
	if (ctx.cr0.lt) goto loc_88088934;
loc_88088A14:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x88088A14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,96(r1)
	ctx.current_instruction = 0x88088A1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subf r27,r11,r14
	ctx.r27.u64 = ctx.r14.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x88088b2c
	if (ctx.cr6.lt) goto loc_88088B2C;
	// lwz r10,436(r1)
	ctx.current_instruction = 0x88088A2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r26,r8,r7
	ctx.r26.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_88088A44:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88088A44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88088A4C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x88088a80
	if (!ctx.cr6.eq) goto loc_88088A80;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88088A68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088A70;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088A7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088A7C:
	// b 0x88088a94
	goto loc_88088A94;
loc_88088A80:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88088A80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088A88;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088A94:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88088AB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088AB0:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088afc
	if (ctx.cr6.gt) goto loc_88088AFC;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x88088afc
	if (ctx.cr6.gt) goto loc_88088AFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x88088ADC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x88088AE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r23
	ctx.current_instruction = 0x88088AEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// lwzx r10,r6,r23
	ctx.current_instruction = 0x88088AF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88088b04
	goto loc_88088B04;
loc_88088AFC:
	// lwz r11,20(r23)
	ctx.current_instruction = 0x88088AFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88088B04:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88088b1c
	if (!ctx.cr6.lt) goto loc_88088B1C;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
loc_88088B1C:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88088B1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88088a44
	if (!ctx.cr6.gt) goto loc_88088A44;
loc_88088B2C:
	// lwz r30,100(r1)
	ctx.current_instruction = 0x88088B2C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r28,r28,2
	ctx.xer.ca = ctx.r28.u32 > 4294967293;
	ctx.r28.s64 = ctx.r28.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x88088908
	if (ctx.cr0.lt) goto loc_88088908;
loc_88088B38:
	// lwz r26,436(r1)
	ctx.current_instruction = 0x88088B38;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// addi r27,r14,-1
	ctx.r27.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x88088c34
	if (!ctx.cr6.lt) goto loc_88088C34;
	// srawi r11,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 31;
	// xor r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 ^ ctx.r11.u64;
	// subf r28,r11,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_88088B54:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88088B54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88088B5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x88088b90
	if (!ctx.cr6.eq) goto loc_88088B90;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88088B78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088B80;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088B8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088B8C:
	// b 0x88088ba4
	goto loc_88088BA4;
loc_88088B90:
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088B90;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88088B98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088BA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088BA4:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88088BC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088BC0:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088c0c
	if (ctx.cr6.gt) goto loc_88088C0C;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x88088c0c
	if (ctx.cr6.gt) goto loc_88088C0C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x88088BEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x88088BF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r23
	ctx.current_instruction = 0x88088BFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// lwzx r10,r6,r23
	ctx.current_instruction = 0x88088C00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88088c14
	goto loc_88088C14;
loc_88088C0C:
	// lwz r11,20(r23)
	ctx.current_instruction = 0x88088C0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88088C14:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88088c2c
	if (!ctx.cr6.lt) goto loc_88088C2C;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// li r15,0
	ctx.r15.s64 = 0;
loc_88088C2C:
	// addic. r30,r30,2
	ctx.xer.ca = ctx.r30.u32 > 4294967293;
	ctx.r30.s64 = ctx.r30.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88088b54
	if (ctx.cr0.lt) goto loc_88088B54;
loc_88088C34:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88088C34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x88088d38
	if (ctx.cr6.lt) goto loc_88088D38;
	// srawi r11,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 31;
	// xor r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 ^ ctx.r11.u64;
	// subf r28,r11,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_88088C50:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88088C50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88088C58;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bne cr6,0x88088c8c
	if (!ctx.cr6.eq) goto loc_88088C8C;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88088C74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088C7C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088C88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088C88:
	// b 0x88088ca0
	goto loc_88088CA0;
loc_88088C8C:
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088C8C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88088C94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088CA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088CA0:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88088CBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088CBC:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088d08
	if (ctx.cr6.gt) goto loc_88088D08;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x88088d08
	if (ctx.cr6.gt) goto loc_88088D08;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x88088CE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x88088CEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r23
	ctx.current_instruction = 0x88088CF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// lwzx r11,r6,r23
	ctx.current_instruction = 0x88088CFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88088d10
	goto loc_88088D10;
loc_88088D08:
	// lwz r11,20(r23)
	ctx.current_instruction = 0x88088D08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88088D10:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88088d28
	if (!ctx.cr6.lt) goto loc_88088D28;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// li r15,0
	ctx.r15.s64 = 0;
loc_88088D28:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88088D28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88088c50
	if (!ctx.cr6.gt) goto loc_88088C50;
loc_88088D38:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x88088D38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x88088f60
	if (ctx.cr6.lt) goto loc_88088F60;
loc_88088D44:
	// lwz r30,100(r1)
	ctx.current_instruction = 0x88088D44;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x88088e44
	if (!ctx.cr6.lt) goto loc_88088E44;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r28,r10,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88088D64:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88088D64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88088D6C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x88088da0
	if (!ctx.cr6.eq) goto loc_88088DA0;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88088D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088D90;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088D9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088D9C:
	// b 0x88088db4
	goto loc_88088DB4;
loc_88088DA0:
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088DA0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88088DA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088DB4:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88088DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088DD0:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088e1c
	if (ctx.cr6.gt) goto loc_88088E1C;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x88088e1c
	if (ctx.cr6.gt) goto loc_88088E1C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x88088DFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x88088E00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r23
	ctx.current_instruction = 0x88088E0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// lwzx r11,r6,r23
	ctx.current_instruction = 0x88088E10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88088e24
	goto loc_88088E24;
loc_88088E1C:
	// lwz r11,20(r23)
	ctx.current_instruction = 0x88088E1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88088E24:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88088e3c
	if (!ctx.cr6.lt) goto loc_88088E3C;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
loc_88088E3C:
	// addic. r30,r30,2
	ctx.xer.ca = ctx.r30.u32 > 4294967293;
	ctx.r30.s64 = ctx.r30.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x88088d64
	if (ctx.cr0.lt) goto loc_88088D64;
loc_88088E44:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88088E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88088f50
	if (ctx.cr6.lt) goto loc_88088F50;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r28,r10,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88088E68:
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88088E68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88088E70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bne cr6,0x88088ea4
	if (!ctx.cr6.eq) goto loc_88088EA4;
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088E8C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x88088E94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088EA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088EA0:
	// b 0x88088eb8
	goto loc_88088EB8;
loc_88088EA4:
	// stw r24,84(r1)
	ctx.current_instruction = 0x88088EA4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x88088EAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88088EB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088EB8:
	// li r7,16
	ctx.r7.s64 = 16;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x88088ED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88088ED4:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x88088f20
	if (ctx.cr6.gt) goto loc_88088F20;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x88088f20
	if (ctx.cr6.gt) goto loc_88088F20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x88088F00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x88088F04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r23
	ctx.current_instruction = 0x88088F10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// lwzx r11,r6,r23
	ctx.current_instruction = 0x88088F14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x88088f28
	goto loc_88088F28;
loc_88088F20:
	// lwz r11,20(r23)
	ctx.current_instruction = 0x88088F20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_88088F28:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x88088f40
	if (!ctx.cr6.lt) goto loc_88088F40;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
loc_88088F40:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88088F40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88088e68
	if (!ctx.cr6.gt) goto loc_88088E68;
loc_88088F50:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x88088F50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88088d44
	if (!ctx.cr6.gt) goto loc_88088D44;
loc_88088F60:
	// lwz r11,444(r1)
	ctx.current_instruction = 0x88088F60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r10,452(r1)
	ctx.current_instruction = 0x88088F64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r9,460(r1)
	ctx.current_instruction = 0x88088F68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// stw r16,0(r11)
	ctx.current_instruction = 0x88088F6C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// stw r15,0(r10)
	ctx.current_instruction = 0x88088F70;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r15.u32);
	// stw r21,0(r9)
	ctx.current_instruction = 0x88088F74;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r21.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BCA78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BCA78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BCA78) {
			switch (rex_dispatch_address) {
				case 0x880BCA80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BCA78;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x880BCA80: goto loc_880BCA80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x880BCA80;
	__savegprlr_22(ctx, base);
loc_880BCA80:
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r5,7
	ctx.r8.s64 = ctx.r5.s64 + 7;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r6,r5,6
	ctx.r6.s64 = ctx.r5.s64 + 6;
	// addi r3,r5,5
	ctx.r3.s64 = ctx.r5.s64 + 5;
	// addi r31,r5,4
	ctx.r31.s64 = ctx.r5.s64 + 4;
	// addi r30,r5,3
	ctx.r30.s64 = ctx.r5.s64 + 3;
	// addi r29,r5,2
	ctx.r29.s64 = ctx.r5.s64 + 2;
	// addi r28,r5,1
	ctx.r28.s64 = ctx.r5.s64 + 1;
loc_880BCAB0:
	// lbzx r26,r29,r11
	ctx.current_instruction = 0x880BCAB0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r27,r28,r11
	ctx.current_instruction = 0x880BCAB4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r23,r30,r11
	ctx.current_instruction = 0x880BCAB8;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbzx r24,r31,r11
	ctx.current_instruction = 0x880BCAC0;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r25,r6,r11
	ctx.current_instruction = 0x880BCAC4;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// lbzx r23,r8,r11
	ctx.current_instruction = 0x880BCACC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r26,r3,r11
	ctx.current_instruction = 0x880BCAD0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// lbzx r22,r11,r5
	ctx.current_instruction = 0x880BCAD8;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r26,r27,r26
	ctx.r26.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r24,r26,r25
	ctx.r24.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lbzx r26,r29,r11
	ctx.current_instruction = 0x880BCAE8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lbzx r27,r28,r11
	ctx.current_instruction = 0x880BCAF0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// lbzx r25,r30,r11
	ctx.current_instruction = 0x880BCAF4;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r22,r24,r22
	ctx.r22.u64 = ctx.r24.u64 + ctx.r22.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbzx r26,r31,r11
	ctx.current_instruction = 0x880BCB00;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r23,r3,r11
	ctx.current_instruction = 0x880BCB04;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r10,r22,r10
	ctx.r10.u64 = ctx.r22.u64 + ctx.r10.u64;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// lbzx r24,r6,r11
	ctx.current_instruction = 0x880BCB10;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r25,r8,r11
	ctx.current_instruction = 0x880BCB14;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbzx r26,r11,r5
	ctx.current_instruction = 0x880BCB1C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 + ctx.r9.u64;
	// bdnz 0x880bcab0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880BCAB0;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,26,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFF;
	// stb r11,0(r4)
	ctx.current_instruction = 0x880BCB44;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BCD50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BCD50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BCD50) {
			switch (rex_dispatch_address) {
				case 0x880BCD58:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BCD50;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BCD58: goto loc_880BCD58;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x880BCD58;
	__savegprlr_16(ctx, base);
loc_880BCD58:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r4,28(r1)
	ctx.current_instruction = 0x880BCD5C;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// subf r4,r10,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r10,-144(r1)
	ctx.current_instruction = 0x880BCD7C;
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// stw r5,36(r1)
	ctx.current_instruction = 0x880BCD84;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// addi r7,r4,-1
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// b 0x880bcd98
	goto loc_880BCD98;
loc_880BCD94:
	// lwz r10,-144(r1)
	ctx.current_instruction = 0x880BCD94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
loc_880BCD98:
	// lbzx r4,r8,r9
	ctx.current_instruction = 0x880BCD98;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbzx r5,r8,r30
	ctx.current_instruction = 0x880BCD9C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbzx r29,r11,r9
	ctx.current_instruction = 0x880BCDA0;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r28,r11,r30
	ctx.current_instruction = 0x880BCDA4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lbzx r27,r10,r8
	ctx.current_instruction = 0x880BCDAC;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// subf r28,r28,r29
	ctx.r28.u64 = ctx.r29.u64 - ctx.r28.u64;
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x880BCDB4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// srawi r26,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r5.s32 >> 31;
	// lbzx r25,r8,r3
	ctx.current_instruction = 0x880BCDBC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// srawi r24,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r28.s32 >> 31;
	// lbzx r23,r11,r3
	ctx.current_instruction = 0x880BCDC4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// subf r27,r27,r4
	ctx.r27.u64 = ctx.r4.u64 - ctx.r27.u64;
	// lbzx r22,r8,r31
	ctx.current_instruction = 0x880BCDCC;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// xor r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r26.u64;
	// lbzx r21,r11,r31
	ctx.current_instruction = 0x880BCDD4;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// xor r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r24.u64;
	// lbzx r20,r6,r9
	ctx.current_instruction = 0x880BCDDC;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// srawi r19,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r27.s32 >> 31;
	// lbzx r18,r30,r6
	ctx.current_instruction = 0x880BCDE4;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// subf r17,r10,r29
	ctx.r17.u64 = ctx.r29.u64 - ctx.r10.u64;
	// lbzx r16,r3,r6
	ctx.current_instruction = 0x880BCDEC;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// subf r5,r26,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r26.u64;
	// lbz r26,1(r7)
	ctx.current_instruction = 0x880BCDF4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r10,r24,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r24.u64;
	// lbzx r28,r31,r6
	ctx.current_instruction = 0x880BCDFC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// xor r27,r27,r19
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r19.u64;
	// srawi r24,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r17.s32 >> 31;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r25,r25,r4
	ctx.r25.u64 = ctx.r4.u64 - ctx.r25.u64;
	// subf r10,r19,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r19.u64;
	// xor r27,r17,r24
	ctx.r27.u64 = ctx.r17.u64 ^ ctx.r24.u64;
	// srawi r19,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r25.s32 >> 31;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r23,r23,r29
	ctx.r23.u64 = ctx.r29.u64 - ctx.r23.u64;
	// subf r5,r24,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r24.u64;
	// xor r27,r25,r19
	ctx.r27.u64 = ctx.r25.u64 ^ ctx.r19.u64;
	// srawi r25,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r23.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r4,r22,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r22.u64;
	// subf r5,r19,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r19.u64;
	// xor r27,r23,r25
	ctx.r27.u64 = ctx.r23.u64 ^ ctx.r25.u64;
	// srawi r24,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r4.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r29,r21,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r21.u64;
	// subf r5,r25,r27
	ctx.r5.u64 = ctx.r27.u64 - ctx.r25.u64;
	// xor r4,r4,r24
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r24.u64;
	// srawi r27,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r29.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r25,r18,r20
	ctx.r25.u64 = ctx.r20.u64 - ctx.r18.u64;
	// subf r5,r24,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r24.u64;
	// xor r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 ^ ctx.r27.u64;
	// srawi r29,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r25.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r5,r27,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r27.u64;
	// subf r24,r16,r20
	ctx.r24.u64 = ctx.r20.u64 - ctx.r16.u64;
	// xor r4,r25,r29
	ctx.r4.u64 = ctx.r25.u64 ^ ctx.r29.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// srawi r27,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r24.s32 >> 31;
	// subf r5,r29,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r29.u64;
	// subf r28,r28,r20
	ctx.r28.u64 = ctx.r20.u64 - ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// xor r29,r24,r27
	ctx.r29.u64 = ctx.r24.u64 ^ ctx.r27.u64;
	// srawi r26,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r28.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r4,r4,r20
	ctx.r4.u64 = ctx.r20.u64 - ctx.r4.u64;
	// subf r5,r27,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r27.u64;
	// xor r29,r28,r26
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r26.u64;
	// srawi r28,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r4.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r5,r26,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r26.u64;
	// xor r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r28.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r5,r28,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r5,36(r1)
	ctx.current_instruction = 0x880BCEC8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// stwu r10,4(r5)
	ctx.current_instruction = 0x880BCECC;
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// lbzx r4,r30,r6
	ctx.current_instruction = 0x880BCED0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// stw r5,36(r1)
	ctx.current_instruction = 0x880BCED4;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lbzx r5,r6,r9
	ctx.current_instruction = 0x880BCED8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r29,r3,r6
	ctx.current_instruction = 0x880BCEDC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lbzu r10,1(r7)
	ctx.current_instruction = 0x880BCEE4;
	ea = 1 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r29,r29,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r29.u64;
	// lbzx r28,r31,r6
	ctx.current_instruction = 0x880BCEF0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// srawi r26,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r4.s32 >> 31;
	// lwz r27,28(r1)
	ctx.current_instruction = 0x880BCEF8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// srawi r25,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r29.s32 >> 31;
	// subf r24,r10,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r10.u64;
	// xor r10,r29,r25
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r25.u64;
	// xor r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r26.u64;
	// subf r28,r28,r5
	ctx.r28.u64 = ctx.r5.u64 - ctx.r28.u64;
	// srawi r29,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r24.s32 >> 31;
	// subf r5,r25,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r25.u64;
	// subf r10,r26,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r26.u64;
	// xor r4,r24,r29
	ctx.r4.u64 = ctx.r24.u64 ^ ctx.r29.u64;
	// srawi r26,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r28.s32 >> 31;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r5,r29,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r29.u64;
	// xor r4,r28,r26
	ctx.r4.u64 = ctx.r28.u64 ^ ctx.r26.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r5,r26,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r26.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r10,0(r27)
	ctx.current_instruction = 0x880BCF40;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// bdnz 0x880bcd94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880BCD94;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BF378) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BF378;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BF378) {
			switch (rex_dispatch_address) {
				case 0x880BF3A8:
				case 0x880BF3C4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BF378;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BF3A8: goto loc_880BF3A8;
		case 0x880BF3C4: goto loc_880BF3C4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880BF37C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880BF380;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880BF384;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880BF388;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.current_instruction = 0x880BF390;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf3ac
	if (ctx.cr6.eq) goto loc_880BF3AC;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x880bf270
	ctx.lr = 0x880BF3A8;
	sub_880BF270(ctx, base);
loc_880BF3A8:
	// stw r30,24(r31)
	ctx.current_instruction = 0x880BF3A8;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_880BF3AC:
	// lwz r3,32(r31)
	ctx.current_instruction = 0x880BF3AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880bf3c8
	if (ctx.cr6.eq) goto loc_880BF3C8;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880BF3C4;
	sub_88050358(ctx, base);
loc_880BF3C4:
	// stw r30,32(r31)
	ctx.current_instruction = 0x880BF3C4;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_880BF3C8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,24(r31)
	ctx.current_instruction = 0x880BF3CC;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	ctx.current_instruction = 0x880BF3D0;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r11,44(r31)
	ctx.current_instruction = 0x880BF3D4;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	ctx.current_instruction = 0x880BF3D8;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r30,36(r31)
	ctx.current_instruction = 0x880BF3DC;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	ctx.current_instruction = 0x880BF3E0;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,52(r31)
	ctx.current_instruction = 0x880BF3E4;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880BF3EC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880BF3F4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880BF3F8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880BF788) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BF788;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BF788) {
			switch (rex_dispatch_address) {
				case 0x880BF790:
				case 0x880BF808:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BF788;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BF790: goto loc_880BF790;
		case 0x880BF808: goto loc_880BF808;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880BF790;
	__savegprlr_29(ctx, base);
loc_880BF790:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880BF790;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r4,56(r3)
	ctx.current_instruction = 0x880BF798;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// lis r29,-30680
	ctx.r29.s64 = -2010644480;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,13612
	ctx.r9.s64 = ctx.r10.s64 + 13612;
	// stw r30,24(r3)
	ctx.current_instruction = 0x880BF7AC;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r30,28(r3)
	ctx.current_instruction = 0x880BF7B4;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r3)
	ctx.current_instruction = 0x880BF7BC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,44(r3)
	ctx.current_instruction = 0x880BF7C0;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,48(r3)
	ctx.current_instruction = 0x880BF7C8;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r30,36(r3)
	ctx.current_instruction = 0x880BF7CC;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r30,32(r3)
	ctx.current_instruction = 0x880BF7D0;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r30,40(r3)
	ctx.current_instruction = 0x880BF7D4;
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r30,52(r3)
	ctx.current_instruction = 0x880BF7D8;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// stw r30,60(r3)
	ctx.current_instruction = 0x880BF7DC;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// stw r30,76(r3)
	ctx.current_instruction = 0x880BF7E0;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r8,72(r3)
	ctx.current_instruction = 0x880BF7E4;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// stw r7,68(r3)
	ctx.current_instruction = 0x880BF7E8;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// lwz r11,18540(r29)
	ctx.current_instruction = 0x880BF7EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 18540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880bf83c
	if (!ctx.cr6.eq) goto loc_880BF83C;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// li r3,4
	ctx.r3.s64 = 4;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050340
	ctx.lr = 0x880BF808;
	sub_88050340(ctx, base);
loc_880BF808:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x880bf830
	if (ctx.cr6.eq) goto loc_880BF830;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r10,13584
	ctx.r9.s64 = ctx.r10.s64 + 13584;
	// stw r9,0(r11)
	ctx.current_instruction = 0x880BF820;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r11,18540(r29)
	ctx.current_instruction = 0x880BF824;
	REX_STORE_U32(ctx.r29.u32 + 18540, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880BF830:
	// stw r30,18540(r29)
	ctx.current_instruction = 0x880BF830;
	REX_STORE_U32(ctx.r29.u32 + 18540, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880BF83C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C0808) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C0808;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C0808) {
			switch (rex_dispatch_address) {
				case 0x880C0810:
				case 0x880C085C:
				case 0x880C0898:
				case 0x880C08C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C0808;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C0810: goto loc_880C0810;
		case 0x880C085C: goto loc_880C085C;
		case 0x880C0898: goto loc_880C0898;
		case 0x880C08C8: goto loc_880C08C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x880C0810;
	__savegprlr_23(ctx, base);
loc_880C0810:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880C0810;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,300(r1)
	ctx.current_instruction = 0x880C0814;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c08e0
	if (!ctx.cr6.eq) goto loc_880C08E0;
	// lwz r27,276(r1)
	ctx.current_instruction = 0x880C0834;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x880c086c
	if (!ctx.cr6.gt) goto loc_880C086C;
	// lwz r26,268(r1)
	ctx.current_instruction = 0x880C0848;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
loc_880C084C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C085C;
	sub_880547A0(ctx, base);
loc_880C085C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// bne 0x880c084c
	if (!ctx.cr0.eq) goto loc_880C084C;
loc_880C086C:
	// lwz r29,292(r1)
	ctx.current_instruction = 0x880C086C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r26,284(r1)
	ctx.current_instruction = 0x880C0874;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r27,252(r1)
	ctx.current_instruction = 0x880C0878;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880c08a8
	if (!ctx.cr6.gt) goto loc_880C08A8;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_880C0888:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C0898;
	sub_880547A0(ctx, base);
loc_880C0898:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 + ctx.r26.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bne 0x880c0888
	if (!ctx.cr0.eq) goto loc_880C0888;
loc_880C08A8:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880c09c8
	if (!ctx.cr6.gt) goto loc_880C09C8;
loc_880C08B8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C08C8;
	sub_880547A0(ctx, base);
loc_880C08C8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 + ctx.r26.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bne 0x880c08b8
	if (!ctx.cr0.eq) goto loc_880C08B8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880C08E0:
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880C08E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880c0930
	if (!ctx.cr6.gt) goto loc_880C0930;
	// lwz r5,268(r1)
	ctx.current_instruction = 0x880C08F8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_880C0900:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880c0920
	if (ctx.cr6.eq) goto loc_880C0920;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_880C0914:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x880C0914;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,-1(r10)
	ctx.current_instruction = 0x880C0918;
	ea = -1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x880c0914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C0914;
loc_880C0920:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// bne 0x880c0900
	if (!ctx.cr0.eq) goto loc_880C0900;
loc_880C0930:
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880C0930;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r5,292(r1)
	ctx.current_instruction = 0x880C0938;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,284(r1)
	ctx.current_instruction = 0x880C0940;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// ble cr6,0x880c0984
	if (!ctx.cr6.gt) goto loc_880C0984;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_880C0954:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880c0974
	if (ctx.cr6.eq) goto loc_880C0974;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
loc_880C0968:
	// lbzu r8,1(r10)
	ctx.current_instruction = 0x880C0968;
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r9)
	ctx.current_instruction = 0x880C096C;
	ea = -1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x880c0968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C0968;
loc_880C0974:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// bne 0x880c0954
	if (!ctx.cr0.eq) goto loc_880C0954;
loc_880C0984:
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880c09c8
	if (!ctx.cr6.gt) goto loc_880C09C8;
loc_880C0998:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880c09b8
	if (ctx.cr6.eq) goto loc_880C09B8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
loc_880C09AC:
	// lbzu r8,1(r10)
	ctx.current_instruction = 0x880C09AC;
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r9)
	ctx.current_instruction = 0x880C09B0;
	ea = -1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x880c09ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C09AC;
loc_880C09B8:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// bne 0x880c0998
	if (!ctx.cr0.eq) goto loc_880C0998;
loc_880C09C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C5778) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C5778;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C5778) {
			switch (rex_dispatch_address) {
				case 0x880C5780:
				case 0x880C5878:
				case 0x880C58D4:
				case 0x880C5904:
				case 0x880C5920:
				case 0x880C5944:
				case 0x880C5968:
				case 0x880C597C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C5778;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C5780: goto loc_880C5780;
		case 0x880C5878: goto loc_880C5878;
		case 0x880C58D4: goto loc_880C58D4;
		case 0x880C5904: goto loc_880C5904;
		case 0x880C5920: goto loc_880C5920;
		case 0x880C5944: goto loc_880C5944;
		case 0x880C5968: goto loc_880C5968;
		case 0x880C597C: goto loc_880C597C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880C5780;
	__savegprlr_20(ctx, base);
loc_880C5780:
	// stfd f31,-112(r1)
	ctx.current_instruction = 0x880C5780;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x880C5784;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2272(r3)
	ctx.current_instruction = 0x880C5788;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2272);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r28,7764(r3)
	ctx.current_instruction = 0x880C5790;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c57f8
	if (ctx.cr6.eq) goto loc_880C57F8;
	// lwz r11,27988(r3)
	ctx.current_instruction = 0x880C57A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c57f0
	if (ctx.cr6.eq) goto loc_880C57F0;
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x880C57B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c57f0
	if (ctx.cr6.eq) goto loc_880C57F0;
	// lwz r11,28136(r3)
	ctx.current_instruction = 0x880C57C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880c57f0
	if (!ctx.cr6.eq) goto loc_880C57F0;
	// lwz r10,724(r3)
	ctx.current_instruction = 0x880C57CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// lwz r11,2268(r3)
	ctx.current_instruction = 0x880C57D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2268);
	// lwz r9,2280(r3)
	ctx.current_instruction = 0x880C57D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2280);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r23,2792(r3)
	ctx.current_instruction = 0x880C57DC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 2792);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,2264(r3)
	ctx.current_instruction = 0x880C57E4;
	REX_STORE_U32(ctx.r3.u32 + 2264, ctx.r8.u32);
	// stw r9,2284(r3)
	ctx.current_instruction = 0x880C57E8;
	REX_STORE_U32(ctx.r3.u32 + 2284, ctx.r9.u32);
	// b 0x880c57f8
	goto loc_880C57F8;
loc_880C57F0:
	// lwz r11,2268(r31)
	ctx.current_instruction = 0x880C57F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2268);
	// stw r11,2264(r31)
	ctx.current_instruction = 0x880C57F4;
	REX_STORE_U32(ctx.r31.u32 + 2264, ctx.r11.u32);
loc_880C57F8:
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x880C57F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r26,3408(r31)
	ctx.current_instruction = 0x880C57FC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x880C5800;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x880C5804;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x880c5818
	if (!ctx.cr6.eq) goto loc_880C5818;
	// rlwinm r27,r11,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x880c5828
	goto loc_880C5828;
loc_880C5818:
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r10,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_880C5828:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880C5828;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880c5a68
	if (!ctx.cr6.gt) goto loc_880C5A68;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r20,3
	ctx.r20.s64 = 3;
	// lfd f31,13632(r11)
	ctx.current_instruction = 0x880C5848;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 13632);
loc_880C584C:
	// lwz r11,2272(r31)
	ctx.current_instruction = 0x880C584C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c58d8
	if (ctx.cr6.eq) goto loc_880C58D8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x880c58d8
	if (ctx.cr6.eq) goto loc_880C58D8;
	// lwz r11,2264(r31)
	ctx.current_instruction = 0x880C5860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2264);
	// lwzx r10,r11,r24
	ctx.current_instruction = 0x880C5864;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c58d8
	if (ctx.cr6.eq) goto loc_880C58D8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880C5870;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6b40
	ctx.lr = 0x880C5878;
	sub_880E6B40(ctx, base);
loc_880C5878:
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x880C5878;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,2288(r31)
	ctx.current_instruction = 0x880C5880;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2288);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,2276(r31)
	ctx.current_instruction = 0x880C5888;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2276);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,16(r11)
	ctx.current_instruction = 0x880C5890;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subfic r6,r7,39
	ctx.xer.ca = ctx.r7.u32 <= 39;
	ctx.r6.u64 = static_cast<uint64_t>(39) - ctx.r7.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880C5898;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r23,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r23.u64;
	// stwx r11,r8,r9
	ctx.current_instruction = 0x880C58A8;
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r9,7868(r31)
	ctx.current_instruction = 0x880C58AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r11,2288(r31)
	ctx.current_instruction = 0x880C58B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2288);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r10,4(r9)
	ctx.current_instruction = 0x880C58B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,16(r9)
	ctx.current_instruction = 0x880C58BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// subfic r6,r7,39
	ctx.xer.ca = ctx.r7.u32 <= 39;
	ctx.r6.u64 = static_cast<uint64_t>(39) - ctx.r7.u64;
	// stw r8,2288(r31)
	ctx.current_instruction = 0x880C58C4;
	REX_STORE_U32(ctx.r31.u32 + 2288, ctx.r8.u32);
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// add r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x880fa2c0
	ctx.lr = 0x880C58D4;
	sub_880FA2C0(ctx, base);
loc_880C58D4:
	// stw r22,1544(r31)
	ctx.current_instruction = 0x880C58D4;
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r22.u32);
loc_880C58D8:
	// lwz r11,2260(r31)
	ctx.current_instruction = 0x880C58D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c5920
	if (ctx.cr6.eq) goto loc_880C5920;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880C58E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880c5920
	if (ctx.cr6.eq) goto loc_880C5920;
	// lwz r11,6772(r31)
	ctx.current_instruction = 0x880C58F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c5914
	if (ctx.cr6.eq) goto loc_880C5914;
	// bl 0x881ee8e8
	ctx.lr = 0x880C5904;
	sub_881EE8E8(ctx, base);
loc_880C5904:
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_880C5914:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880fa390
	ctx.lr = 0x880C5920;
	sub_880FA390(ctx, base);
loc_880C5920:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880C5920;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880c5998
	if (!ctx.cr6.gt) goto loc_880C5998;
loc_880C5930:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880faaf0
	ctx.lr = 0x880C5944;
	sub_880FAAF0(ctx, base);
loc_880C5944:
	// lwz r11,1536(r31)
	ctx.current_instruction = 0x880C5944;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c5968
	if (ctx.cr6.eq) goto loc_880C5968;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x880C5950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,10,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x88071ae8
	ctx.lr = 0x880C5968;
	sub_88071AE8(ctx, base);
loc_880C5968:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88110578
	ctx.lr = 0x880C597C;
	sub_88110578(ctx, base);
loc_880C597C:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880C597C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// addi r25,r25,1536
	ctx.r25.s64 = ctx.r25.s64 + 1536;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880c5930
	if (ctx.cr6.lt) goto loc_880C5930;
loc_880C5998:
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x880C5998;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x880C599C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x880C59A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x880c59b4
	if (!ctx.cr6.eq) goto loc_880C59B4;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x880c59c4
	goto loc_880C59C4;
loc_880C59B4:
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_880C59C4:
	// lwz r11,6732(r31)
	ctx.current_instruction = 0x880C59C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6732);
	// subf r10,r27,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r27.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880c59d8
	if (!ctx.cr6.gt) goto loc_880C59D8;
	// stw r21,6736(r31)
	ctx.current_instruction = 0x880C59D4;
	REX_STORE_U32(ctx.r31.u32 + 6736, ctx.r21.u32);
loc_880C59D8:
	// divw r9,r11,r20
	ctx.r9.u64 = uint32_t((ctx.r20.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r20.s32 == -1)) ? ctx.r11.s32 / ctx.r20.s32 : 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880c5a50
	if (!ctx.cr6.gt) goto loc_880C5A50;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// stw r21,6760(r31)
	ctx.current_instruction = 0x880C59E8;
	REX_STORE_U32(ctx.r31.u32 + 6760, ctx.r21.u32);
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x880c5a50
	if (!ctx.cr6.gt) goto loc_880C5A50;
	// lwz r9,6744(r31)
	ctx.current_instruction = 0x880C59F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6744);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,6744(r31)
	ctx.current_instruction = 0x880C5A04;
	REX_STORE_U32(ctx.r31.u32 + 6744, ctx.r9.u32);
	// ble cr6,0x880c5a50
	if (!ctx.cr6.gt) goto loc_880C5A50;
	// lwz r9,2800(r31)
	ctx.current_instruction = 0x880C5A0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880c5a40
	if (!ctx.cr6.eq) goto loc_880C5A40;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r9,6748(r31)
	ctx.current_instruction = 0x880C5A1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6748);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,80(r1)
	ctx.current_instruction = 0x880C5A24;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880C5A28;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r9,r24
	ctx.current_instruction = 0x880C5A3C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r24.u32, ctx.f10.u32);
loc_880C5A40:
	// lwz r11,6752(r31)
	ctx.current_instruction = 0x880C5A40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6752);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880c5a50
	if (!ctx.cr6.lt) goto loc_880C5A50;
	// stw r10,6752(r31)
	ctx.current_instruction = 0x880C5A4C;
	REX_STORE_U32(ctx.r31.u32 + 6752, ctx.r10.u32);
loc_880C5A50:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880C5A50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880c584c
	if (ctx.cr6.lt) goto loc_880C584C;
loc_880C5A68:
	// lwz r11,2272(r31)
	ctx.current_instruction = 0x880C5A68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c5a80
	if (ctx.cr6.eq) goto loc_880C5A80;
	// lwz r11,2288(r31)
	ctx.current_instruction = 0x880C5A74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2288);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2280(r31)
	ctx.current_instruction = 0x880C5A7C;
	REX_STORE_U32(ctx.r31.u32 + 2280, ctx.r11.u32);
loc_880C5A80:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.current_instruction = 0x880C5A84;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CA370) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CA370;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CA370) {
			switch (rex_dispatch_address) {
				case 0x880CA378:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CA370;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x880CA378: goto loc_880CA378;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x880CA378;
	__savegprlr_16(ctx, base);
loc_880CA378:
	// lwz r21,100(r1)
	ctx.current_instruction = 0x880CA378;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r20,108(r1)
	ctx.current_instruction = 0x880CA380;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// bne cr6,0x880ca3b4
	if (!ctx.cr6.eq) goto loc_880CA3B4;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x880ca3cc
	if (!ctx.cr6.eq) goto loc_880CA3CC;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r17,11
	ctx.r17.s64 = 11;
	// b 0x880ca3e0
	goto loc_880CA3E0;
loc_880CA3B4:
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x880ca3e0
	if (!ctx.cr6.eq) goto loc_880CA3E0;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x880ca3e0
	if (!ctx.cr6.eq) goto loc_880CA3E0;
	// li r17,31
	ctx.r17.s64 = 31;
	// b 0x880ca3d8
	goto loc_880CA3D8;
loc_880CA3CC:
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 3, ctx.xer);
	// bne cr6,0x880ca3e0
	if (!ctx.cr6.eq) goto loc_880CA3E0;
	// li r17,13
	ctx.r17.s64 = 13;
loc_880CA3D8:
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,2
	ctx.r24.s64 = 2;
loc_880CA3E0:
	// lwz r16,92(r1)
	ctx.current_instruction = 0x880CA3E0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r22,84(r1)
	ctx.current_instruction = 0x880CA3E8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r27,r3,r7
	ctx.r27.u64 = ctx.r3.u64 + ctx.r7.u64;
	// srawi. r11,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r16.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r25,r4,r7
	ctx.r25.u64 = ctx.r4.u64 + ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// ble 0x880ca5f4
	if (!ctx.cr0.gt) goto loc_880CA5F4;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_880CA408:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r17,11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 11, ctx.xer);
	// bne cr6,0x880ca474
	if (!ctx.cr6.eq) goto loc_880CA474;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880ca5d4
	if (!ctx.cr6.gt) goto loc_880CA5D4;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r29,r8,r26
	ctx.r29.u64 = ctx.r26.u64 - ctx.r8.u64;
	// subf r3,r6,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r6.u64;
	// subf r31,r6,r25
	ctx.r31.u64 = ctx.r25.u64 - ctx.r6.u64;
	// subf r30,r6,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r6.u64;
loc_880CA430:
	// lbzx r4,r3,r6
	ctx.current_instruction = 0x880CA430;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// lbz r5,0(r6)
	ctx.current_instruction = 0x880CA434;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// stb r4,0(r11)
	ctx.current_instruction = 0x880CA444;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbzx r4,r31,r6
	ctx.current_instruction = 0x880CA448;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// lbzx r5,r30,r6
	ctx.current_instruction = 0x880CA44C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// srawi r5,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 1;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stbx r4,r29,r11
	ctx.current_instruction = 0x880CA464;
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r4.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x880ca430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880CA430;
	// b 0x880ca5d4
	goto loc_880CA5D4;
loc_880CA474:
	// cmpwi cr6,r17,31
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 31, ctx.xer);
	// bne cr6,0x880ca4f0
	if (!ctx.cr6.eq) goto loc_880CA4F0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880ca5d4
	if (!ctx.cr6.gt) goto loc_880CA5D4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r31,r27,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r27.u64;
	// subf r30,r27,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r27.u64;
	// subf r29,r27,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r27.u64;
	// subf r28,r8,r26
	ctx.r28.u64 = ctx.r26.u64 - ctx.r8.u64;
loc_880CA49C:
	// lbzx r6,r31,r5
	ctx.current_instruction = 0x880CA49C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// lbz r4,0(r5)
	ctx.current_instruction = 0x880CA4A0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r3,r6,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// srawi r4,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 2;
	// stb r4,0(r11)
	ctx.current_instruction = 0x880CA4B8;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbzx r6,r29,r5
	ctx.current_instruction = 0x880CA4BC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// rotlwi r3,r6,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lbzx r4,r30,r5
	ctx.current_instruction = 0x880CA4C4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// srawi r4,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 2;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r28,r11
	ctx.current_instruction = 0x880CA4E0;
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r3.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x880ca49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880CA49C;
	// b 0x880ca5d4
	goto loc_880CA5D4;
loc_880CA4F0:
	// cmpwi cr6,r17,13
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 13, ctx.xer);
	// bne cr6,0x880ca568
	if (!ctx.cr6.eq) goto loc_880CA568;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880ca5d4
	if (!ctx.cr6.gt) goto loc_880CA5D4;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r28,r8,r26
	ctx.r28.u64 = ctx.r26.u64 - ctx.r8.u64;
	// subf r31,r6,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r6.u64;
	// subf r30,r6,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r6.u64;
	// subf r29,r6,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r6.u64;
loc_880CA514:
	// lbzx r5,r6,r31
	ctx.current_instruction = 0x880CA514;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// lbz r4,0(r6)
	ctx.current_instruction = 0x880CA518;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// rotlwi r3,r5,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// stb r4,0(r11)
	ctx.current_instruction = 0x880CA530;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbzx r4,r6,r29
	ctx.current_instruction = 0x880CA534;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r29.u32);
	// lbzx r5,r6,r30
	ctx.current_instruction = 0x880CA538;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// rotlwi r3,r5,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r28,r11
	ctx.current_instruction = 0x880CA558;
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r3.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x880ca514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880CA514;
	// b 0x880ca5d4
	goto loc_880CA5D4;
loc_880CA568:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880ca5d4
	if (!ctx.cr6.gt) goto loc_880CA5D4;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r29,r8,r26
	ctx.r29.u64 = ctx.r26.u64 - ctx.r8.u64;
	// subf r3,r6,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r6.u64;
	// subf r31,r6,r25
	ctx.r31.u64 = ctx.r25.u64 - ctx.r6.u64;
	// subf r30,r6,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r6.u64;
loc_880CA584:
	// lbzx r5,r6,r3
	ctx.current_instruction = 0x880CA584;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// lbz r4,0(r6)
	ctx.current_instruction = 0x880CA588;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// mullw r5,r5,r20
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r20.s32);
	// mullw r4,r4,r21
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r21.s32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// sraw r4,r5,r23
	temp.u32 = ctx.r23.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// stb r4,0(r11)
	ctx.current_instruction = 0x880CA5A0;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbzx r5,r6,r30
	ctx.current_instruction = 0x880CA5A4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// mullw r5,r5,r21
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r21.s32);
	// lbzx r4,r6,r31
	ctx.current_instruction = 0x880CA5AC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mullw r4,r4,r20
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r20.s32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r5,r24
	ctx.r4.u64 = ctx.r5.u64 + ctx.r24.u64;
	// sraw r5,r4,r23
	temp.u32 = ctx.r23.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r5.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stbx r4,r29,r11
	ctx.current_instruction = 0x880CA5C8;
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r4.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x880ca584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880CA584;
loc_880CA5D4:
	// add r6,r27,r7
	ctx.r6.u64 = ctx.r27.u64 + ctx.r7.u64;
	// add r4,r25,r7
	ctx.r4.u64 = ctx.r25.u64 + ctx.r7.u64;
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r27,r6,r7
	ctx.r27.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r25,r4,r7
	ctx.r25.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + ctx.r18.u64;
	// add r26,r26,r18
	ctx.r26.u64 = ctx.r26.u64 + ctx.r18.u64;
	// bne 0x880ca408
	if (!ctx.cr0.eq) goto loc_880CA408;
loc_880CA5F4:
	// clrlwi r11,r16,31
	ctx.r11.u64 = ctx.r16.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ca634
	if (ctx.cr6.eq) goto loc_880CA634;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880ca634
	if (!ctx.cr6.gt) goto loc_880CA634;
	// subf r7,r6,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r6.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r6,r8,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r8.u64;
loc_880CA618:
	// lbz r5,0(r11)
	ctx.current_instruction = 0x880CA618;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	ctx.current_instruction = 0x880CA61C;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbzx r4,r7,r11
	ctx.current_instruction = 0x880CA620;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r4,r6,r8
	ctx.current_instruction = 0x880CA628;
	REX_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r4.u8);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bdnz 0x880ca618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880CA618;
loc_880CA634:
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CD248) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CD248;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CD248) {
			switch (rex_dispatch_address) {
				case 0x880CD250:
				case 0x880CD280:
				case 0x880CD2C4:
				case 0x880CD334:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD248;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CD250: goto loc_880CD250;
		case 0x880CD280: goto loc_880CD280;
		case 0x880CD2C4: goto loc_880CD2C4;
		case 0x880CD334: goto loc_880CD334;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880CD250;
	__savegprlr_26(ctx, base);
loc_880CD250:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880CD250;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	ctx.current_instruction = 0x880CD254;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r3,80(r1)
	ctx.current_instruction = 0x880CD264;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	ctx.current_instruction = 0x880CD26C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880cd288
	if (!ctx.cr6.eq) goto loc_880CD288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cd040
	ctx.lr = 0x880CD280;
	sub_880CD040(ctx, base);
loc_880CD280:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cd298
	if (ctx.cr6.lt) goto loc_880CD298;
loc_880CD288:
	// lwz r30,68(r31)
	ctx.current_instruction = 0x880CD288;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,20(r30)
	ctx.current_instruction = 0x880CD28C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880CD290;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,68(r31)
	ctx.current_instruction = 0x880CD294;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
loc_880CD298:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cd2d8
	if (ctx.cr6.lt) goto loc_880CD2D8;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x880CD2A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD2AC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r7,60(r31)
	ctx.current_instruction = 0x880CD2B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r5,52(r31)
	ctx.current_instruction = 0x880CD2B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// ld r4,0(r31)
	ctx.current_instruction = 0x880CD2B8;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.current_instruction = 0x880CD2BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x88059c00
	ctx.lr = 0x880CD2C4;
	sub_88059C00(ctx, base);
loc_880CD2C4:
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880cd300
	if (!ctx.cr6.eq) goto loc_880CD300;
	// lis r28,-32688
	ctx.r28.s64 = -2142240768;
loc_880CD2D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880cd2f4
	if (ctx.cr6.eq) goto loc_880CD2F4;
	// lwz r11,20(r27)
	ctx.current_instruction = 0x880CD2E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r10,20(r30)
	ctx.current_instruction = 0x880CD2E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,68(r11)
	ctx.current_instruction = 0x880CD2E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// stw r9,4(r10)
	ctx.current_instruction = 0x880CD2EC;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r30,68(r11)
	ctx.current_instruction = 0x880CD2F0;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r30.u32);
loc_880CD2F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CD300:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x880cd314
	if (!ctx.cr6.eq) goto loc_880CD314;
loc_880CD308:
	// lis r28,-32688
	ctx.r28.s64 = -2142240768;
	// ori r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 1;
	// b 0x880cd2d8
	goto loc_880CD2D8;
loc_880CD314:
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880CD314;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880cd308
	if (ctx.cr6.eq) goto loc_880CD308;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x880CD320;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x880cd334
	if (ctx.cr6.eq) goto loc_880CD334;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x880CD334;
	sub_880547A0(ctx, base);
loc_880CD334:
	// stw r29,4(r30)
	ctx.current_instruction = 0x880CD334;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880CD33C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r30)
	ctx.current_instruction = 0x880CD340;
	REX_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r26)
	ctx.current_instruction = 0x880CD348;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// ld r10,0(r31)
	ctx.current_instruction = 0x880CD34C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r9,0(r31)
	ctx.current_instruction = 0x880CD354;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D12F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D12F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D12F0) {
			switch (rex_dispatch_address) {
				case 0x880D12F8:
				case 0x880D131C:
				case 0x880D1368:
				case 0x880D1380:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D12F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D12F8: goto loc_880D12F8;
		case 0x880D131C: goto loc_880D131C;
		case 0x880D1368: goto loc_880D1368;
		case 0x880D1380: goto loc_880D1380;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880D12F8;
	__savegprlr_27(ctx, base);
loc_880D12F8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880D12F8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.current_instruction = 0x880D1300;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r27,0(r31)
	ctx.current_instruction = 0x880D1310;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x880d1320
	if (ctx.cr6.eq) goto loc_880D1320;
	// bl 0x88125e70
	ctx.lr = 0x880D131C;
	sub_88125E70(ctx, base);
loc_880D131C:
	// stw r29,8(r31)
	ctx.current_instruction = 0x880D131C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_880D1320:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x880d139c
	if (ctx.cr6.eq) goto loc_880D139C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x880d139c
	if (ctx.cr6.eq) goto loc_880D139C;
	// lhz r11,34(r27)
	ctx.current_instruction = 0x880D1330;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d139c
	if (ctx.cr6.eq) goto loc_880D139C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_880D1340:
	// mulli r11,r30,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1776));
	// add. r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x880d1384
	if (ctx.cr0.eq) goto loc_880D1384;
	// lwz r11,424(r31)
	ctx.current_instruction = 0x880D134C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d1370
	if (ctx.cr6.eq) goto loc_880D1370;
	// lwz r3,4(r11)
	ctx.current_instruction = 0x880D1358;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d1370
	if (ctx.cr6.eq) goto loc_880D1370;
	// bl 0x88125e70
	ctx.lr = 0x880D1368;
	sub_88125E70(ctx, base);
loc_880D1368:
	// lwz r11,424(r31)
	ctx.current_instruction = 0x880D1368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// stw r29,4(r11)
	ctx.current_instruction = 0x880D136C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_880D1370:
	// lwz r3,424(r31)
	ctx.current_instruction = 0x880D1370;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d1384
	if (ctx.cr6.eq) goto loc_880D1384;
	// bl 0x88125e70
	ctx.lr = 0x880D1380;
	sub_88125E70(ctx, base);
loc_880D1380:
	// stw r29,424(r31)
	ctx.current_instruction = 0x880D1380;
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r29.u32);
loc_880D1384:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lhz r10,34(r27)
	ctx.current_instruction = 0x880D1388;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880d1340
	if (ctx.cr6.lt) goto loc_880D1340;
loc_880D139C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D1DF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D1DF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D1DF0) {
			switch (rex_dispatch_address) {
				case 0x880D1DF8:
				case 0x880D1E2C:
				case 0x880D1E54:
				case 0x880D1F48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D1DF0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D1DF8: goto loc_880D1DF8;
		case 0x880D1E2C: goto loc_880D1E2C;
		case 0x880D1E54: goto loc_880D1E54;
		case 0x880D1F48: goto loc_880D1F48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880D1DF8;
	__savegprlr_27(ctx, base);
loc_880D1DF8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880D1DF8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880d1e14
	if (!ctx.cr6.eq) goto loc_880D1E14;
loc_880D1E08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_880D1E14:
	// lwz r31,0(r30)
	ctx.current_instruction = 0x880D1E14;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880d1e08
	if (ctx.cr6.eq) goto loc_880D1E08;
	// addi r27,r30,224
	ctx.r27.s64 = ctx.r30.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8812baa8
	ctx.lr = 0x880D1E2C;
	sub_8812BAA8(ctx, base);
loc_880D1E2C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r29,236(r30)
	ctx.current_instruction = 0x880D1E34;
	REX_STORE_U32(ctx.r30.u32 + 236, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,284(r30)
	ctx.current_instruction = 0x880D1E3C;
	REX_STORE_U32(ctx.r30.u32 + 284, ctx.r28.u32);
	// stw r29,240(r30)
	ctx.current_instruction = 0x880D1E40;
	REX_STORE_U32(ctx.r30.u32 + 240, ctx.r29.u32);
	// lwz r3,356(r31)
	ctx.current_instruction = 0x880D1E44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lhz r11,34(r31)
	ctx.current_instruction = 0x880D1E48;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x88052d90
	ctx.lr = 0x880D1E54;
	sub_88052D90(ctx, base);
loc_880D1E54:
	// lhz r7,34(r31)
	ctx.current_instruction = 0x880D1E54;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r29,388(r31)
	ctx.current_instruction = 0x880D1E5C;
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r29,392(r31)
	ctx.current_instruction = 0x880D1E64;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r29.u32);
	// stw r8,4(r31)
	ctx.current_instruction = 0x880D1E68;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,72(r31)
	ctx.current_instruction = 0x880D1E70;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880d1ee4
	if (ctx.cr6.eq) goto loc_880D1EE4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_880D1E80:
	// lwz r7,256(r31)
	ctx.current_instruction = 0x880D1E80;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,320(r31)
	ctx.current_instruction = 0x880D1E88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// sth r4,122(r5)
	ctx.current_instruction = 0x880D1E98;
	REX_STORE_U16(ctx.r5.u32 + 122, ctx.r4.u16);
	// lwz r9,320(r31)
	ctx.current_instruction = 0x880D1E9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r7,122(r9)
	ctx.current_instruction = 0x880D1EA4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 122);
	// sth r7,124(r9)
	ctx.current_instruction = 0x880D1EA8;
	REX_STORE_U16(ctx.r9.u32 + 124, ctx.r7.u16);
	// lwz r6,256(r31)
	ctx.current_instruction = 0x880D1EAC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,320(r31)
	ctx.current_instruction = 0x880D1EB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lwz r3,424(r5)
	ctx.current_instruction = 0x880D1EBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 424);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x880D1EC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// sth r4,-2(r9)
	ctx.current_instruction = 0x880D1EC4;
	REX_STORE_U16(ctx.r9.u32 + -2, ctx.r4.u16);
	// lwz r9,320(r31)
	ctx.current_instruction = 0x880D1EC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r29,116(r7)
	ctx.current_instruction = 0x880D1ED0;
	REX_STORE_U16(ctx.r7.u32 + 116, ctx.r29.u16);
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lhz r6,34(r31)
	ctx.current_instruction = 0x880D1ED8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880d1e80
	if (ctx.cr6.lt) goto loc_880D1E80;
loc_880D1EE4:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880D1EE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r28,12(r30)
	ctx.current_instruction = 0x880D1EF0;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r29,20(r30)
	ctx.current_instruction = 0x880D1EF8;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// rldicr r11,r10,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,276(r30)
	ctx.current_instruction = 0x880D1F00;
	REX_STORE_U32(ctx.r30.u32 + 276, ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// std r29,184(r30)
	ctx.current_instruction = 0x880D1F08;
	REX_STORE_U64(ctx.r30.u32 + 184, ctx.r29.u64);
	// stw r29,160(r30)
	ctx.current_instruction = 0x880D1F0C;
	REX_STORE_U32(ctx.r30.u32 + 160, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r10,r6,1
	ctx.r10.u64 = ctx.r6.u64 ^ 1;
	// stw r9,164(r30)
	ctx.current_instruction = 0x880D1F18;
	REX_STORE_U32(ctx.r30.u32 + 164, ctx.r9.u32);
	// stw r29,60(r30)
	ctx.current_instruction = 0x880D1F1C;
	REX_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r28,696(r30)
	ctx.current_instruction = 0x880D1F24;
	REX_STORE_U32(ctx.r30.u32 + 696, ctx.r28.u32);
	// stw r29,300(r30)
	ctx.current_instruction = 0x880D1F28;
	REX_STORE_U32(ctx.r30.u32 + 300, ctx.r29.u32);
	// stw r5,692(r30)
	ctx.current_instruction = 0x880D1F2C;
	REX_STORE_U32(ctx.r30.u32 + 692, ctx.r5.u32);
	// stw r29,156(r30)
	ctx.current_instruction = 0x880D1F30;
	REX_STORE_U32(ctx.r30.u32 + 156, ctx.r29.u32);
	// std r11,168(r30)
	ctx.current_instruction = 0x880D1F34;
	REX_STORE_U64(ctx.r30.u32 + 168, ctx.r11.u64);
	// std r11,176(r30)
	ctx.current_instruction = 0x880D1F38;
	REX_STORE_U64(ctx.r30.u32 + 176, ctx.r11.u64);
	// sth r29,154(r30)
	ctx.current_instruction = 0x880D1F3C;
	REX_STORE_U16(ctx.r30.u32 + 154, ctx.r29.u16);
	// stw r29,32(r30)
	ctx.current_instruction = 0x880D1F40;
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// bl 0x88126be8
	ctx.lr = 0x880D1F48;
	sub_88126BE8(ctx, base);
loc_880D1F48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D61F8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880D61F8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D61F8;
	ctx.current_instruction = 0x880D61F8;
	PPCRegister temp{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x880D61F8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x880D61FC;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_880D6204:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x880d62e8
	if (ctx.cr6.lt) goto loc_880D62E8;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_880D6224:
	// lfs f0,-4(r11)
	ctx.current_instruction = 0x880D6224;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	ctx.current_instruction = 0x880D6228;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x880d6250
	if (!ctx.cr6.gt) goto loc_880D6250;
	// lwz r31,-12(r10)
	ctx.current_instruction = 0x880D6234;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -12);
	// stfs f13,-4(r11)
	ctx.current_instruction = 0x880D6238;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lwzx r30,r9,r11
	ctx.current_instruction = 0x880D623C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,-12(r10)
	ctx.current_instruction = 0x880D6244;
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r30.u32);
	// stfs f0,0(r11)
	ctx.current_instruction = 0x880D6248;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stwx r31,r9,r11
	ctx.current_instruction = 0x880D624C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
loc_880D6250:
	// lfs f0,0(r11)
	ctx.current_instruction = 0x880D6250;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	ctx.current_instruction = 0x880D6254;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x880d627c
	if (!ctx.cr6.gt) goto loc_880D627C;
	// lwzx r31,r9,r11
	ctx.current_instruction = 0x880D6260;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stfs f13,0(r11)
	ctx.current_instruction = 0x880D6264;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r30,-4(r10)
	ctx.current_instruction = 0x880D626C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stwx r30,r9,r11
	ctx.current_instruction = 0x880D6270;
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// stfs f0,4(r11)
	ctx.current_instruction = 0x880D6274;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r31,-4(r10)
	ctx.current_instruction = 0x880D6278;
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r31.u32);
loc_880D627C:
	// lfs f0,4(r11)
	ctx.current_instruction = 0x880D627C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	ctx.current_instruction = 0x880D6280;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x880d62a8
	if (!ctx.cr6.gt) goto loc_880D62A8;
	// lwz r31,-4(r10)
	ctx.current_instruction = 0x880D628C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stfs f13,4(r11)
	ctx.current_instruction = 0x880D6290;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r30,0(r10)
	ctx.current_instruction = 0x880D6294;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,-4(r10)
	ctx.current_instruction = 0x880D629C;
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r30.u32);
	// stfs f0,8(r11)
	ctx.current_instruction = 0x880D62A0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r31,0(r10)
	ctx.current_instruction = 0x880D62A4;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
loc_880D62A8:
	// lfs f0,8(r11)
	ctx.current_instruction = 0x880D62A8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	ctx.current_instruction = 0x880D62AC;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x880d62d4
	if (!ctx.cr6.gt) goto loc_880D62D4;
	// lwz r31,0(r10)
	ctx.current_instruction = 0x880D62B8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f13,8(r11)
	ctx.current_instruction = 0x880D62BC;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r30,4(r10)
	ctx.current_instruction = 0x880D62C4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r10)
	ctx.current_instruction = 0x880D62C8;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stfs f0,12(r11)
	ctx.current_instruction = 0x880D62CC;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r31,4(r10)
	ctx.current_instruction = 0x880D62D0;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_880D62D4:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880d6224
	if (ctx.cr6.lt) goto loc_880D6224;
loc_880D62E8:
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x880d6344
	if (!ctx.cr6.lt) goto loc_880D6344;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_880D630C:
	// lfs f0,-4(r11)
	ctx.current_instruction = 0x880D630C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	ctx.current_instruction = 0x880D6310;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x880d6338
	if (!ctx.cr6.gt) goto loc_880D6338;
	// lwz r7,0(r10)
	ctx.current_instruction = 0x880D631C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f13,-4(r11)
	ctx.current_instruction = 0x880D6320;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r6,r11,r9
	ctx.current_instruction = 0x880D6328;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r6,0(r10)
	ctx.current_instruction = 0x880D632C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stfs f0,0(r11)
	ctx.current_instruction = 0x880D6330;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stwx r7,r11,r9
	ctx.current_instruction = 0x880D6334;
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
loc_880D6338:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x880d630c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D630C;
loc_880D6344:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880d6204
	if (!ctx.cr6.eq) goto loc_880D6204;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880D634C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880D6350;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D90B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880D90B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D90B8;
	ctx.current_instruction = 0x880D90B8;
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880D90C8:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x880D90C8;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880d90c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D90C8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880D90D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stw r10,84(r3)
	ctx.current_instruction = 0x880D90DC;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r9,0(r3)
	ctx.current_instruction = 0x880D90E0;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880DA788) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DA788;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DA788) {
			switch (rex_dispatch_address) {
				case 0x880DA790:
				case 0x880DA808:
				case 0x880DA840:
				case 0x880DA878:
				case 0x880DABE4:
				case 0x880DAC18:
				case 0x880DAC50:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DA788;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880DA790: goto loc_880DA790;
		case 0x880DA808: goto loc_880DA808;
		case 0x880DA840: goto loc_880DA840;
		case 0x880DA878: goto loc_880DA878;
		case 0x880DABE4: goto loc_880DABE4;
		case 0x880DAC18: goto loc_880DAC18;
		case 0x880DAC50: goto loc_880DAC50;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880DA790;
	__savegprlr_14(ctx, base);
loc_880DA790:
	// stwu r1,-352(r1)
	ctx.current_instruction = 0x880DA790;
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,28476(r3)
	ctx.current_instruction = 0x880DA798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28476);
	// lwz r21,28112(r3)
	ctx.current_instruction = 0x880DA79C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 28112);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r22,80(r1)
	ctx.current_instruction = 0x880DA7A4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// stw r22,84(r1)
	ctx.current_instruction = 0x880DA7AC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r22,88(r1)
	ctx.current_instruction = 0x880DA7B4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r22,92(r1)
	ctx.current_instruction = 0x880DA7BC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r28,444(r1)
	ctx.current_instruction = 0x880DA7C4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r4,380(r1)
	ctx.current_instruction = 0x880DA7CC;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r4.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r5,388(r1)
	ctx.current_instruction = 0x880DA7D4;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// stw r6,396(r1)
	ctx.current_instruction = 0x880DA7DC;
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r7,404(r1)
	ctx.current_instruction = 0x880DA7E4;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r7.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// stw r8,412(r1)
	ctx.current_instruction = 0x880DA7F0;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r8.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// stw r21,104(r1)
	ctx.current_instruction = 0x880DA800;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// bctrl 
	ctx.lr = 0x880DA808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880DA808:
	// lwz r10,28100(r23)
	ctx.current_instruction = 0x880DA808;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 28100);
	// lwz r25,452(r1)
	ctx.current_instruction = 0x880DA80C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880da840
	if (ctx.cr6.eq) goto loc_880DA840;
	// lwz r11,28472(r23)
	ctx.current_instruction = 0x880DA81C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28472);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880DA840;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880DA840:
	// lwz r11,28100(r23)
	ctx.current_instruction = 0x880DA840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28100);
	// lwz r29,436(r1)
	ctx.current_instruction = 0x880DA844;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880da878
	if (ctx.cr6.eq) goto loc_880DA878;
	// lwz r11,28472(r23)
	ctx.current_instruction = 0x880DA854;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28472);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880DA878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880DA878:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880DA878;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x880DA87C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r20,516(r1)
	ctx.current_instruction = 0x880DA880;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x880DA888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.current_instruction = 0x880DA88C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,112(r1)
	ctx.current_instruction = 0x880DA890;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// lwz r17,524(r1)
	ctx.current_instruction = 0x880DA898;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x880DA8A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,128(r1)
	ctx.current_instruction = 0x880DA8A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r4,148(r1)
	ctx.current_instruction = 0x880DA8AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r8,0(r20)
	ctx.current_instruction = 0x880DA8B0;
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r8.u32);
	// add r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r6,0(r17)
	ctx.current_instruction = 0x880DA8BC;
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r6.u32);
	// stw r22,256(r20)
	ctx.current_instruction = 0x880DA8C0;
	REX_STORE_U32(ctx.r20.u32 + 256, ctx.r22.u32);
	// stw r22,128(r20)
	ctx.current_instruction = 0x880DA8C4;
	REX_STORE_U32(ctx.r20.u32 + 128, ctx.r22.u32);
	// stw r22,256(r17)
	ctx.current_instruction = 0x880DA8C8;
	REX_STORE_U32(ctx.r17.u32 + 256, ctx.r22.u32);
	// stw r22,128(r17)
	ctx.current_instruction = 0x880DA8CC;
	REX_STORE_U32(ctx.r17.u32 + 128, ctx.r22.u32);
	// lwz r10,28068(r23)
	ctx.current_instruction = 0x880DA8D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r3,128(r1)
	ctx.current_instruction = 0x880DA8D8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r11,148(r1)
	ctx.current_instruction = 0x880DA8DC;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// beq cr6,0x880da924
	if (ctx.cr6.eq) goto loc_880DA924;
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA8E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r20
	ctx.current_instruction = 0x880DA8F0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA8F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r8,r20
	ctx.current_instruction = 0x880DA900;
	REX_STORE_U32(ctx.r8.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r6,r17
	ctx.current_instruction = 0x880DA910;
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA914;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r4,r17
	ctx.current_instruction = 0x880DA920;
	REX_STORE_U32(ctx.r4.u32 + ctx.r17.u32, ctx.r22.u32);
loc_880DA924:
	// lwz r11,116(r1)
	ctx.current_instruction = 0x880DA924;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x880DA928;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,384(r20)
	ctx.current_instruction = 0x880DA92C;
	REX_STORE_U32(ctx.r20.u32 + 384, ctx.r11.u32);
	// stw r10,384(r17)
	ctx.current_instruction = 0x880DA930;
	REX_STORE_U32(ctx.r17.u32 + 384, ctx.r10.u32);
	// stw r22,640(r20)
	ctx.current_instruction = 0x880DA934;
	REX_STORE_U32(ctx.r20.u32 + 640, ctx.r22.u32);
	// stw r22,512(r20)
	ctx.current_instruction = 0x880DA938;
	REX_STORE_U32(ctx.r20.u32 + 512, ctx.r22.u32);
	// stw r22,512(r17)
	ctx.current_instruction = 0x880DA93C;
	REX_STORE_U32(ctx.r17.u32 + 512, ctx.r22.u32);
	// stw r22,640(r17)
	ctx.current_instruction = 0x880DA940;
	REX_STORE_U32(ctx.r17.u32 + 640, ctx.r22.u32);
	// lwz r9,28068(r23)
	ctx.current_instruction = 0x880DA944;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880da990
	if (ctx.cr6.eq) goto loc_880DA990;
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r20
	ctx.current_instruction = 0x880DA95C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA960;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r8,r20
	ctx.current_instruction = 0x880DA96C;
	REX_STORE_U32(ctx.r8.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r7,r11,160
	ctx.r7.s64 = ctx.r11.s64 + 160;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r6,r17
	ctx.current_instruction = 0x880DA97C;
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA980;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r4,r17
	ctx.current_instruction = 0x880DA98C;
	REX_STORE_U32(ctx.r4.u32 + ctx.r17.u32, ctx.r22.u32);
loc_880DA990:
	// lwz r11,120(r1)
	ctx.current_instruction = 0x880DA990;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,140(r1)
	ctx.current_instruction = 0x880DA994;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,768(r20)
	ctx.current_instruction = 0x880DA998;
	REX_STORE_U32(ctx.r20.u32 + 768, ctx.r11.u32);
	// stw r10,768(r17)
	ctx.current_instruction = 0x880DA99C;
	REX_STORE_U32(ctx.r17.u32 + 768, ctx.r10.u32);
	// stw r22,1024(r20)
	ctx.current_instruction = 0x880DA9A0;
	REX_STORE_U32(ctx.r20.u32 + 1024, ctx.r22.u32);
	// stw r22,896(r20)
	ctx.current_instruction = 0x880DA9A4;
	REX_STORE_U32(ctx.r20.u32 + 896, ctx.r22.u32);
	// stw r22,1024(r17)
	ctx.current_instruction = 0x880DA9A8;
	REX_STORE_U32(ctx.r17.u32 + 1024, ctx.r22.u32);
	// stw r22,896(r17)
	ctx.current_instruction = 0x880DA9AC;
	REX_STORE_U32(ctx.r17.u32 + 896, ctx.r22.u32);
	// lwz r9,28068(r23)
	ctx.current_instruction = 0x880DA9B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880da9fc
	if (ctx.cr6.eq) goto loc_880DA9FC;
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA9BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r20
	ctx.current_instruction = 0x880DA9C8;
	REX_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA9CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r9,r11,224
	ctx.r9.s64 = ctx.r11.s64 + 224;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r8,r20
	ctx.current_instruction = 0x880DA9D8;
	REX_STORE_U32(ctx.r8.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA9DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r6,r17
	ctx.current_instruction = 0x880DA9E8;
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DA9EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r5,r11,224
	ctx.r5.s64 = ctx.r11.s64 + 224;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r4,r17
	ctx.current_instruction = 0x880DA9F8;
	REX_STORE_U32(ctx.r4.u32 + ctx.r17.u32, ctx.r22.u32);
loc_880DA9FC:
	// lwz r11,124(r1)
	ctx.current_instruction = 0x880DA9FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x880DAA00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,1152(r20)
	ctx.current_instruction = 0x880DAA04;
	REX_STORE_U32(ctx.r20.u32 + 1152, ctx.r11.u32);
	// stw r10,1152(r17)
	ctx.current_instruction = 0x880DAA08;
	REX_STORE_U32(ctx.r17.u32 + 1152, ctx.r10.u32);
	// stw r22,1408(r20)
	ctx.current_instruction = 0x880DAA0C;
	REX_STORE_U32(ctx.r20.u32 + 1408, ctx.r22.u32);
	// stw r22,1280(r20)
	ctx.current_instruction = 0x880DAA10;
	REX_STORE_U32(ctx.r20.u32 + 1280, ctx.r22.u32);
	// stw r22,1408(r17)
	ctx.current_instruction = 0x880DAA14;
	REX_STORE_U32(ctx.r17.u32 + 1408, ctx.r22.u32);
	// stw r22,1280(r17)
	ctx.current_instruction = 0x880DAA18;
	REX_STORE_U32(ctx.r17.u32 + 1280, ctx.r22.u32);
	// lwz r9,28068(r23)
	ctx.current_instruction = 0x880DAA1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880daa68
	if (ctx.cr6.eq) goto loc_880DAA68;
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DAA28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 + 352;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r20
	ctx.current_instruction = 0x880DAA34;
	REX_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DAA38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r8,r20
	ctx.current_instruction = 0x880DAA44;
	REX_STORE_U32(ctx.r8.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DAA48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r7,r11,352
	ctx.r7.s64 = ctx.r11.s64 + 352;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r6,r17
	ctx.current_instruction = 0x880DAA54;
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DAA58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r5,r11,320
	ctx.r5.s64 = ctx.r11.s64 + 320;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r4,r17
	ctx.current_instruction = 0x880DAA64;
	REX_STORE_U32(ctx.r4.u32 + ctx.r17.u32, ctx.r22.u32);
loc_880DAA68:
	// lwz r11,128(r1)
	ctx.current_instruction = 0x880DAA68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,148(r1)
	ctx.current_instruction = 0x880DAA6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,1536(r20)
	ctx.current_instruction = 0x880DAA70;
	REX_STORE_U32(ctx.r20.u32 + 1536, ctx.r11.u32);
	// stw r10,1536(r17)
	ctx.current_instruction = 0x880DAA74;
	REX_STORE_U32(ctx.r17.u32 + 1536, ctx.r10.u32);
	// stw r22,1792(r20)
	ctx.current_instruction = 0x880DAA78;
	REX_STORE_U32(ctx.r20.u32 + 1792, ctx.r22.u32);
	// stw r22,1664(r20)
	ctx.current_instruction = 0x880DAA7C;
	REX_STORE_U32(ctx.r20.u32 + 1664, ctx.r22.u32);
	// stw r22,1792(r17)
	ctx.current_instruction = 0x880DAA80;
	REX_STORE_U32(ctx.r17.u32 + 1792, ctx.r22.u32);
	// stw r22,1664(r17)
	ctx.current_instruction = 0x880DAA84;
	REX_STORE_U32(ctx.r17.u32 + 1664, ctx.r22.u32);
	// lwz r9,28068(r23)
	ctx.current_instruction = 0x880DAA88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880daad4
	if (ctx.cr6.eq) goto loc_880DAAD4;
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DAA94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r10,r20
	ctx.current_instruction = 0x880DAAA0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DAAA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r9,r11,416
	ctx.r9.s64 = ctx.r11.s64 + 416;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r8,r20
	ctx.current_instruction = 0x880DAAB0;
	REX_STORE_U32(ctx.r8.u32 + ctx.r20.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DAAB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r7,r11,448
	ctx.r7.s64 = ctx.r11.s64 + 448;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r6,r17
	ctx.current_instruction = 0x880DAAC0;
	REX_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r22.u32);
	// lwz r11,28112(r23)
	ctx.current_instruction = 0x880DAAC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// addi r5,r11,416
	ctx.r5.s64 = ctx.r11.s64 + 416;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r4,r17
	ctx.current_instruction = 0x880DAAD0;
	REX_STORE_U32(ctx.r4.u32 + ctx.r17.u32, ctx.r22.u32);
loc_880DAAD4:
	// lwz r8,28112(r23)
	ctx.current_instruction = 0x880DAAD4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x880dab34
	if (!ctx.cr6.gt) goto loc_880DAB34;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// addi r9,r20,1536
	ctx.r9.s64 = ctx.r20.s64 + 1536;
	// addi r10,r17,388
	ctx.r10.s64 = ctx.r17.s64 + 388;
	// subf r6,r17,r20
	ctx.r6.u64 = ctx.r20.u64 - ctx.r17.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_880DAAF8:
	// stw r11,-1532(r9)
	ctx.current_instruction = 0x880DAAF8;
	REX_STORE_U32(ctx.r9.u32 + -1532, ctx.r11.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r11,-384(r10)
	ctx.current_instruction = 0x880DAB00;
	REX_STORE_U32(ctx.r10.u32 + -384, ctx.r11.u32);
	// stwx r11,r6,r10
	ctx.current_instruction = 0x880DAB04;
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r11,0(r10)
	ctx.current_instruction = 0x880DAB08;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,-764(r9)
	ctx.current_instruction = 0x880DAB0C;
	REX_STORE_U32(ctx.r9.u32 + -764, ctx.r11.u32);
	// stw r11,384(r10)
	ctx.current_instruction = 0x880DAB10;
	REX_STORE_U32(ctx.r10.u32 + 384, ctx.r11.u32);
	// stw r11,-380(r9)
	ctx.current_instruction = 0x880DAB14;
	REX_STORE_U32(ctx.r9.u32 + -380, ctx.r11.u32);
	// stw r11,768(r10)
	ctx.current_instruction = 0x880DAB18;
	REX_STORE_U32(ctx.r10.u32 + 768, ctx.r11.u32);
	// stwu r11,4(r9)
	ctx.current_instruction = 0x880DAB1C;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// stw r11,1152(r10)
	ctx.current_instruction = 0x880DAB20;
	REX_STORE_U32(ctx.r10.u32 + 1152, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,28112(r23)
	ctx.current_instruction = 0x880DAB28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 28112);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880daaf8
	if (ctx.cr6.lt) goto loc_880DAAF8;
loc_880DAB34:
	// lwz r11,28120(r23)
	ctx.current_instruction = 0x880DAB34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28120);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r10,128(r1)
	ctx.current_instruction = 0x880DAB3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r16,r8,-1
	ctx.r16.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880dab68
	if (ctx.cr6.gt) goto loc_880DAB68;
	// lwz r10,148(r1)
	ctx.current_instruction = 0x880DAB50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880dab68
	if (ctx.cr6.gt) goto loc_880DAB68;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880DAB68:
	// lwz r11,500(r1)
	ctx.current_instruction = 0x880DAB68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r8,508(r1)
	ctx.current_instruction = 0x880DAB6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// mullw r9,r28,r11
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r25,r11
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r15,r10,r31
	ctx.r15.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r9,96(r1)
	ctx.current_instruction = 0x880DAB80;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x880dae60
	if (ctx.cr6.gt) goto loc_880DAE60;
	// subf r11,r31,r15
	ctx.r11.u64 = ctx.r15.u64 - ctx.r31.u64;
	// lwz r21,484(r1)
	ctx.current_instruction = 0x880DAB94;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,492(r1)
	ctx.current_instruction = 0x880DAB9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// stw r30,100(r1)
	ctx.current_instruction = 0x880DABA0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_880DABA4:
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880dae38
	if (ctx.cr6.gt) goto loc_880DAE38;
loc_880DABAC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880dabbc
	if (!ctx.cr6.eq) goto loc_880DABBC;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x880dae28
	if (ctx.cr6.eq) goto loc_880DAE28;
loc_880DABBC:
	// lwz r10,28476(r23)
	ctx.current_instruction = 0x880DABBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 28476);
	// subf r11,r15,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r15.u64;
	// add r31,r21,r15
	ctx.r31.u64 = ctx.r21.u64 + ctx.r15.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880DABE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880DABE4:
	// lwz r9,28100(r23)
	ctx.current_instruction = 0x880DABE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 28100);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880dac18
	if (ctx.cr6.eq) goto loc_880DAC18;
	// lwz r11,28472(r23)
	ctx.current_instruction = 0x880DABF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28472);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,388(r1)
	ctx.current_instruction = 0x880DAC00;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880DAC18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880DAC18:
	// lwz r11,28100(r23)
	ctx.current_instruction = 0x880DAC18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880dac50
	if (ctx.cr6.eq) goto loc_880DAC50;
	// lwz r10,28472(r23)
	ctx.current_instruction = 0x880DAC28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 28472);
	// subf r11,r15,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r15.u64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r3,396(r1)
	ctx.current_instruction = 0x880DAC34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880DAC50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880DAC50:
	// lwz r8,80(r1)
	ctx.current_instruction = 0x880DAC50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r1)
	ctx.current_instruction = 0x880DAC58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,88(r1)
	ctx.current_instruction = 0x880DAC60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r24,r1,180
	ctx.r24.s64 = ctx.r1.s64 + 180;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x880DAC68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,176(r1)
	ctx.current_instruction = 0x880DAC70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,196(r1)
	ctx.current_instruction = 0x880DAC7C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r5,176(r1)
	ctx.current_instruction = 0x880DAC90;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// subf r25,r20,r17
	ctx.r25.u64 = ctx.r17.u64 - ctx.r20.u64;
	// stw r4,196(r1)
	ctx.current_instruction = 0x880DAC98;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r4.u32);
	// li r19,5
	ctx.r19.s64 = 5;
loc_880DACA0:
	// lwz r31,-20(r24)
	ctx.current_instruction = 0x880DACA0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + -20);
	// add r30,r3,r25
	ctx.r30.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lwzx r11,r3,r29
	ctx.current_instruction = 0x880DACA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880dad4c
	if (!ctx.cr6.lt) goto loc_880DAD4C;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880DACB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r3,256
	ctx.r9.s64 = ctx.r3.s64 + 256;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r7,r9,-128
	ctx.r7.s64 = ctx.r9.s64 + -128;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880dace0
	if (!ctx.cr6.gt) goto loc_880DACE0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_880DACD0:
	// lwzu r10,4(r11)
	ctx.current_instruction = 0x880DACD0;
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880dacd0
	if (ctx.cr6.gt) goto loc_880DACD0;
loc_880DACE0:
	// cmpw cr6,r26,r8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x880dad2c
	if (!ctx.cr6.gt) goto loc_880DAD2C;
	// subf r4,r8,r26
	ctx.r4.u64 = ctx.r26.u64 - ctx.r8.u64;
	// add r11,r29,r7
	ctx.r11.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subf r6,r7,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r7.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r5,r7,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r4,r9,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r9.u64;
loc_880DAD08:
	// lwzx r14,r11,r6
	ctx.current_instruction = 0x880DAD08;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stwx r14,r10,r4
	ctx.current_instruction = 0x880DAD0C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r14.u32);
	// lwz r14,0(r11)
	ctx.current_instruction = 0x880DAD10;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r14,4(r11)
	ctx.current_instruction = 0x880DAD14;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r14.u32);
	// lwzx r14,r5,r11
	ctx.current_instruction = 0x880DAD18;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r14,0(r10)
	ctx.current_instruction = 0x880DAD20;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r14.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bdnz 0x880dad08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DAD08;
loc_880DAD2C:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, ctx.xer);
	// stwx r31,r3,r11
	ctx.current_instruction = 0x880DAD34;
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r31.u32);
	// stwx r21,r11,r7
	ctx.current_instruction = 0x880DAD38;
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r21.u32);
	// stwx r18,r11,r9
	ctx.current_instruction = 0x880DAD3C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r18.u32);
	// bge cr6,0x880dad4c
	if (!ctx.cr6.lt) goto loc_880DAD4C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_880DAD4C:
	// lwz r31,0(r24)
	ctx.current_instruction = 0x880DAD4C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwzx r11,r28,r30
	ctx.current_instruction = 0x880DAD50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880dadf8
	if (!ctx.cr6.lt) goto loc_880DADF8;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x880DAD5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 + ctx.r25.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r30,128
	ctx.r8.s64 = ctx.r30.s64 + 128;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880dad8c
	if (!ctx.cr6.gt) goto loc_880DAD8C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_880DAD7C:
	// lwzu r10,4(r11)
	ctx.current_instruction = 0x880DAD7C;
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880dad7c
	if (ctx.cr6.gt) goto loc_880DAD7C;
loc_880DAD8C:
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880dadd8
	if (!ctx.cr6.gt) goto loc_880DADD8;
	// subf r4,r9,r27
	ctx.r4.u64 = ctx.r27.u64 - ctx.r9.u64;
	// add r11,r28,r8
	ctx.r11.u64 = ctx.r28.u64 + ctx.r8.u64;
	// add r10,r28,r7
	ctx.r10.u64 = ctx.r28.u64 + ctx.r7.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subf r6,r8,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r8.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r5,r8,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r4,r7,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r7.u64;
loc_880DADB4:
	// lwzx r14,r6,r11
	ctx.current_instruction = 0x880DADB4;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stwx r14,r4,r10
	ctx.current_instruction = 0x880DADB8;
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r14.u32);
	// lwz r14,0(r11)
	ctx.current_instruction = 0x880DADBC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r14,4(r11)
	ctx.current_instruction = 0x880DADC0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r14.u32);
	// lwzx r14,r5,r11
	ctx.current_instruction = 0x880DADC4;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r14,0(r10)
	ctx.current_instruction = 0x880DADCC;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r14.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bdnz 0x880dadb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DADB4;
loc_880DADD8:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r27,r16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r16.s32, ctx.xer);
	// stwx r31,r11,r30
	ctx.current_instruction = 0x880DADE0;
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u32);
	// stwx r21,r11,r8
	ctx.current_instruction = 0x880DADE4;
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r21.u32);
	// stwx r18,r11,r7
	ctx.current_instruction = 0x880DADE8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r18.u32);
	// bge cr6,0x880dadf8
	if (!ctx.cr6.lt) goto loc_880DADF8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_880DADF8:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r3,r3,384
	ctx.r3.s64 = ctx.r3.s64 + 384;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x880daca0
	if (!ctx.cr0.eq) goto loc_880DACA0;
	// lwz r9,96(r1)
	ctx.current_instruction = 0x880DAE08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,100(r1)
	ctx.current_instruction = 0x880DAE0C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,492(r1)
	ctx.current_instruction = 0x880DAE10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r24,380(r1)
	ctx.current_instruction = 0x880DAE14;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,444(r1)
	ctx.current_instruction = 0x880DAE18;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r25,452(r1)
	ctx.current_instruction = 0x880DAE1C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r19,404(r1)
	ctx.current_instruction = 0x880DAE20;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r14,412(r1)
	ctx.current_instruction = 0x880DAE24;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
loc_880DAE28:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880dabac
	if (!ctx.cr6.gt) goto loc_880DABAC;
	// lwz r21,484(r1)
	ctx.current_instruction = 0x880DAE34;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
loc_880DAE38:
	// lwz r10,508(r1)
	ctx.current_instruction = 0x880DAE38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// stw r9,96(r1)
	ctx.current_instruction = 0x880DAE48;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// add r15,r15,r25
	ctx.r15.u64 = ctx.r15.u64 + ctx.r25.u64;
	// stw r30,100(r1)
	ctx.current_instruction = 0x880DAE50;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880daba4
	if (!ctx.cr6.gt) goto loc_880DABA4;
	// lwz r21,104(r1)
	ctx.current_instruction = 0x880DAE5C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_880DAE60:
	// lwz r11,28068(r23)
	ctx.current_instruction = 0x880DAE60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880daeb8
	if (ctx.cr6.eq) goto loc_880DAEB8;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subf r8,r17,r20
	ctx.r8.u64 = ctx.r20.u64 - ctx.r17.u64;
loc_880DAE84:
	// lwz r7,-20(r10)
	ctx.current_instruction = 0x880DAE84;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + -20);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x880DAE88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880daec4
	if (ctx.cr6.lt) goto loc_880DAEC4;
	// lwz r7,0(r10)
	ctx.current_instruction = 0x880DAE94;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r11)
	ctx.current_instruction = 0x880DAE98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880daec4
	if (ctx.cr6.lt) goto loc_880DAEC4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// blt cr6,0x880dae84
	if (ctx.cr6.lt) goto loc_880DAE84;
loc_880DAEB8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880DAEC4:
	// addi r3,r21,1
	ctx.r3.s64 = ctx.r21.s64 + 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EBF30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880EBF30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880EBF30) {
			switch (rex_dispatch_address) {
				case 0x880EBF38:
				case 0x880EC00C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EBF30;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880EBF38: goto loc_880EBF38;
		case 0x880EC00C: goto loc_880EC00C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x880EBF38;
	__savegprlr_21(ctx, base);
loc_880EBF38:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880EBF38;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880ec0b8
	if (ctx.cr6.eq) goto loc_880EC0B8;
	// lwz r10,27940(r3)
	ctx.current_instruction = 0x880EBF5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 27940);
	// mulli r11,r9,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(52));
	// lhz r8,0(r5)
	ctx.current_instruction = 0x880EBF64;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r24,0(r6)
	ctx.current_instruction = 0x880EBF68;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r27,84(r1)
	ctx.current_instruction = 0x880EBF78;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r27,80(r1)
	ctx.current_instruction = 0x880EBF80;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addic. r6,r7,-2
	ctx.xer.ca = ctx.r7.u32 > 1;
	ctx.r6.s64 = ctx.r7.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r26,0(r9)
	ctx.current_instruction = 0x880EBF88;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r25,4(r9)
	ctx.current_instruction = 0x880EBF90;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// ble 0x880ebfc4
	if (!ctx.cr0.gt) goto loc_880EBFC4;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r5,r8,-2
	ctx.r5.s64 = ctx.r8.s64 + -2;
loc_880EBFA8:
	// lhzu r8,4(r9)
	ctx.current_instruction = 0x880EBFA8;
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x880ebfa8
	if (ctx.cr6.lt) goto loc_880EBFA8;
loc_880EBFC4:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x880ec0b4
	if (ctx.cr6.lt) goto loc_880EC0B4;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20036(r29)
	ctx.current_instruction = 0x880EBFD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 20036);
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r9,4997
	ctx.r5.s64 = ctx.r9.s64 + 4997;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r7,r30
	ctx.current_instruction = 0x880EBFE8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r30.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lhz r6,-2(r6)
	ctx.current_instruction = 0x880EBFF0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lwzx r6,r11,r29
	ctx.current_instruction = 0x880EC000;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r28,r4,r10
	ctx.r28.u64 = ctx.r4.u64 + ctx.r10.u64;
	// bl 0x8810f240
	ctx.lr = 0x880EC00C;
	sub_8810F240(ctx, base);
loc_880EC00C:
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r22
	ctx.current_instruction = 0x880EC010;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r22.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r23
	ctx.current_instruction = 0x880EC018;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x880EC020;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r30
	ctx.current_instruction = 0x880EC034;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r30.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// blt cr6,0x880ec04c
	if (ctx.cr6.lt) goto loc_880EC04C;
	// mullw r9,r6,r26
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// b 0x880ec054
	goto loc_880EC054;
loc_880EC04C:
	// mullw r5,r6,r26
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// subf r9,r25,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r25.u64;
loc_880EC054:
	// lwz r8,1416(r29)
	ctx.current_instruction = 0x880EC054;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 1416);
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r9,r11,r11
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// mullw r6,r8,r8
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// mullw r5,r6,r3
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// subf r4,r7,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// mullw r11,r4,r4
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// subf r8,r9,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r9.u64;
	// add. r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x880ec0b4
	if (!ctx.cr0.gt) goto loc_880EC0B4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r24,r11,r9
	ctx.r24.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r27,-2(r10)
	ctx.current_instruction = 0x880EC090;
	REX_STORE_U16(ctx.r10.u32 + -2, ctx.r27.u16);
	// lhz r9,0(r31)
	ctx.current_instruction = 0x880EC094;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r7,r30
	ctx.current_instruction = 0x880EC0A4;
	REX_STORE_U16(ctx.r7.u32 + ctx.r30.u32, ctx.r27.u16);
	// lhz r11,0(r31)
	ctx.current_instruction = 0x880EC0A8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// sth r5,0(r31)
	ctx.current_instruction = 0x880EC0B0;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r5.u16);
loc_880EC0B4:
	// stw r24,0(r21)
	ctx.current_instruction = 0x880EC0B4;
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
loc_880EC0B8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F1DA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F1DA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F1DA8) {
			switch (rex_dispatch_address) {
				case 0x880F1DD0:
				case 0x880F1DD8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F1DA8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F1DD0: goto loc_880F1DD0;
		case 0x880F1DD8: goto loc_880F1DD8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880F1DAC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880F1DB0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880F1DB4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x880f1dcc
	if (!ctx.cr6.eq) goto loc_880F1DCC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_880F1DCC:
	// bl 0x880f5d00
	ctx.lr = 0x880F1DD0;
	sub_880F5D00(ctx, base);
loc_880F1DD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e7798
	ctx.lr = 0x880F1DD8;
	sub_880E7798(ctx, base);
loc_880F1DD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880F1DDC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880F1DE4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F2900) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F2900);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F2900;
	ctx.current_instruction = 0x880F2900;
	// lwz r11,6932(r3)
	ctx.current_instruction = 0x880F2900;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6932);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,6936(r3)
	ctx.current_instruction = 0x880F2908;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6936);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880f291c
	if (!ctx.cr6.lt) goto loc_880F291C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_880F291C:
	// lwz r10,6940(r3)
	ctx.current_instruction = 0x880F291C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6940);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880f2930
	if (!ctx.cr6.lt) goto loc_880F2930;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,2
	ctx.r9.s64 = 2;
loc_880F2930:
	// lwz r10,6944(r3)
	ctx.current_instruction = 0x880F2930;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6944);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880f2940
	if (!ctx.cr6.lt) goto loc_880F2940;
	// li r9,3
	ctx.r9.s64 = 3;
loc_880F2940:
	// lwz r11,31060(r3)
	ctx.current_instruction = 0x880F2940;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31060);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x880f295c
	if (ctx.cr6.eq) goto loc_880F295C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// bgt cr6,0x880f295c
	if (ctx.cr6.gt) goto loc_880F295C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_880F295C:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x880f2a28
	if (ctx.cr6.gt) goto loc_880F2A28;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880f29a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880F29A4;
	// bdzf 4*cr6+eq,0x880f29d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880F29D0;
	// bne cr6,0x880f29fc
	if (!ctx.cr6.eq) goto loc_880F29FC;
	// lwz r11,31548(r3)
	ctx.current_instruction = 0x880F2978;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31548);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20836(r3)
	ctx.current_instruction = 0x880F2980;
	REX_STORE_U32(ctx.r3.u32 + 20836, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f2998
	if (ctx.cr6.eq) goto loc_880F2998;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r10,r11,28424
	ctx.r10.s64 = ctx.r11.s64 + 28424;
	// b 0x880f2a24
	goto loc_880F2A24;
loc_880F2998:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r10,r11,26088
	ctx.r10.s64 = ctx.r11.s64 + 26088;
	// b 0x880f2a24
	goto loc_880F2A24;
loc_880F29A4:
	// lwz r11,31548(r3)
	ctx.current_instruction = 0x880F29A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31548);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,20836(r3)
	ctx.current_instruction = 0x880F29AC;
	REX_STORE_U32(ctx.r3.u32 + 20836, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f29c4
	if (ctx.cr6.eq) goto loc_880F29C4;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r10,r11,29024
	ctx.r10.s64 = ctx.r11.s64 + 29024;
	// b 0x880f2a24
	goto loc_880F2A24;
loc_880F29C4:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r10,r11,26672
	ctx.r10.s64 = ctx.r11.s64 + 26672;
	// b 0x880f2a24
	goto loc_880F2A24;
loc_880F29D0:
	// lwz r11,31548(r3)
	ctx.current_instruction = 0x880F29D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31548);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,20836(r3)
	ctx.current_instruction = 0x880F29D8;
	REX_STORE_U32(ctx.r3.u32 + 20836, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f29f0
	if (ctx.cr6.eq) goto loc_880F29F0;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r10,r11,29624
	ctx.r10.s64 = ctx.r11.s64 + 29624;
	// b 0x880f2a24
	goto loc_880F2A24;
loc_880F29F0:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r10,r11,27256
	ctx.r10.s64 = ctx.r11.s64 + 27256;
	// b 0x880f2a24
	goto loc_880F2A24;
loc_880F29FC:
	// lwz r11,31548(r3)
	ctx.current_instruction = 0x880F29FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31548);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,20836(r3)
	ctx.current_instruction = 0x880F2A04;
	REX_STORE_U32(ctx.r3.u32 + 20836, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f2a1c
	if (ctx.cr6.eq) goto loc_880F2A1C;
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r10,r11,30224
	ctx.r10.s64 = ctx.r11.s64 + 30224;
	// b 0x880f2a24
	goto loc_880F2A24;
loc_880F2A1C:
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// addi r10,r11,27840
	ctx.r10.s64 = ctx.r11.s64 + 27840;
loc_880F2A24:
	// stw r10,20816(r3)
	ctx.current_instruction = 0x880F2A24;
	REX_STORE_U32(ctx.r3.u32 + 20816, ctx.r10.u32);
loc_880F2A28:
	// lwz r10,20836(r3)
	ctx.current_instruction = 0x880F2A28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20836);
	// lis r9,-30682
	ctx.r9.s64 = -2010775552;
	// lwz r8,2800(r3)
	ctx.current_instruction = 0x880F2A30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// addi r11,r9,30432
	ctx.r11.s64 = ctx.r9.s64 + 30432;
	// rlwinm r10,r10,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,20816(r3)
	ctx.current_instruction = 0x880F2A44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20816);
	// stw r7,20896(r3)
	ctx.current_instruction = 0x880F2A48;
	REX_STORE_U32(ctx.r3.u32 + 20896, ctx.r7.u32);
	// bne cr6,0x880f2a58
	if (!ctx.cr6.eq) goto loc_880F2A58;
	// stw r11,20824(r3)
	ctx.current_instruction = 0x880F2A50;
	REX_STORE_U32(ctx.r3.u32 + 20824, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880F2A58:
	// stw r11,20828(r3)
	ctx.current_instruction = 0x880F2A58;
	REX_STORE_U32(ctx.r3.u32 + 20828, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F40C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F40C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F40C0) {
			switch (rex_dispatch_address) {
				case 0x880F4198:
				case 0x880F41A0:
				case 0x880F41AC:
				case 0x880F41C0:
				case 0x880F41E4:
				case 0x880F4214:
				case 0x880F42D8:
				case 0x880F42F0:
				case 0x880F4300:
				case 0x880F4318:
				case 0x880F4360:
				case 0x880F4384:
				case 0x880F43A8:
				case 0x880F43CC:
				case 0x880F43DC:
				case 0x880F43EC:
				case 0x880F43FC:
				case 0x880F440C:
				case 0x880F441C:
				case 0x880F442C:
				case 0x880F445C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F40C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F4198: goto loc_880F4198;
		case 0x880F41A0: goto loc_880F41A0;
		case 0x880F41AC: goto loc_880F41AC;
		case 0x880F41C0: goto loc_880F41C0;
		case 0x880F41E4: goto loc_880F41E4;
		case 0x880F4214: goto loc_880F4214;
		case 0x880F42D8: goto loc_880F42D8;
		case 0x880F42F0: goto loc_880F42F0;
		case 0x880F4300: goto loc_880F4300;
		case 0x880F4318: goto loc_880F4318;
		case 0x880F4360: goto loc_880F4360;
		case 0x880F4384: goto loc_880F4384;
		case 0x880F43A8: goto loc_880F43A8;
		case 0x880F43CC: goto loc_880F43CC;
		case 0x880F43DC: goto loc_880F43DC;
		case 0x880F43EC: goto loc_880F43EC;
		case 0x880F43FC: goto loc_880F43FC;
		case 0x880F440C: goto loc_880F440C;
		case 0x880F441C: goto loc_880F441C;
		case 0x880F442C: goto loc_880F442C;
		case 0x880F445C: goto loc_880F445C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880F40C4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880F40C8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880F40CC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30708
	ctx.r11.s64 = -2012479488;
	// lwz r10,1624(r3)
	ctx.current_instruction = 0x880F40D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1624);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,7876(r3)
	ctx.current_instruction = 0x880F40DC;
	REX_STORE_U32(ctx.r3.u32 + 7876, ctx.r4.u32);
	// addi r9,r11,18712
	ctx.r9.s64 = ctx.r11.s64 + 18712;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r9,8184(r3)
	ctx.current_instruction = 0x880F40E8;
	REX_STORE_U32(ctx.r3.u32 + 8184, ctx.r9.u32);
	// bne cr6,0x880f442c
	if (!ctx.cr6.eq) goto loc_880F442C;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x880f442c
	if (ctx.cr6.gt) goto loc_880F442C;
	// lis r12,-30705
	ctx.r12.s64 = -2012282880;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16660
	ctx.r12.s64 = ctx.r12.s64 + 16660;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x880F4108;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_880F41E8;
	case 1:
		goto loc_880F442C;
	case 2:
		goto loc_880F442C;
	case 3:
		goto loc_880F442C;
	case 4:
		goto loc_880F442C;
	case 5:
		goto loc_880F4170;
	case 6:
		goto loc_880F41B0;
	case 7:
		goto loc_880F41C4;
	case 8:
		goto loc_880F42F4;
	case 9:
		goto loc_880F430C;
	case 10:
		goto loc_880F4324;
	case 11:
		goto loc_880F442C;
	case 12:
		goto loc_880F43D0;
	case 13:
		goto loc_880F43E0;
	case 14:
		goto loc_880F43F0;
	case 15:
		goto loc_880F4400;
	case 16:
		goto loc_880F4410;
	case 17:
		goto loc_880F4340;
	case 18:
		goto loc_880F4364;
	case 19:
		goto loc_880F4388;
	case 20:
		goto loc_880F43AC;
	case 21:
		goto loc_880F4420;
	case 22:
		goto loc_880F42E4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_880F4170:
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x880F4170;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// lwz r5,3124(r31)
	ctx.current_instruction = 0x880F4174;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3124);
	// lwz r4,3120(r31)
	ctx.current_instruction = 0x880F4178;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f41a4
	if (ctx.cr6.eq) goto loc_880F41A4;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x880F4184;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f419c
	if (ctx.cr6.eq) goto loc_880F419C;
	// bl 0x8813a208
	ctx.lr = 0x880F4198;
	sub_8813A208(ctx, base);
loc_880F4198:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F419C:
	// bl 0x8813a010
	ctx.lr = 0x880F41A0;
	sub_8813A010(ctx, base);
loc_880F41A0:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F41A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813c2a8
	ctx.lr = 0x880F41AC;
	sub_8813C2A8(ctx, base);
loc_880F41AC:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F41B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,3124(r31)
	ctx.current_instruction = 0x880F41B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3124);
	// lwz r4,3120(r31)
	ctx.current_instruction = 0x880F41B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3120);
	// bl 0x88139f80
	ctx.lr = 0x880F41C0;
	sub_88139F80(ctx, base);
loc_880F41C0:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F41C4:
	// lwz r11,2852(r31)
	ctx.current_instruction = 0x880F41C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f442c
	if (!ctx.cr6.eq) goto loc_880F442C;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880F41D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x880ebce0
	ctx.lr = 0x880F41E4;
	sub_880EBCE0(ctx, base);
loc_880F41E4:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F41E8:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880F41E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f423c
	if (ctx.cr6.eq) goto loc_880F423C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880f423c
	if (ctx.cr6.eq) goto loc_880F423C;
	// lwz r11,28428(r31)
	ctx.current_instruction = 0x880F41FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28428);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,1416(r31)
	ctx.current_instruction = 0x880F4204;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// lwz r3,7192(r31)
	ctx.current_instruction = 0x880F4208;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// stw r11,28432(r31)
	ctx.current_instruction = 0x880F420C;
	REX_STORE_U32(ctx.r31.u32 + 28432, ctx.r11.u32);
	// bl 0x880f9ac0
	ctx.lr = 0x880F4214;
	sub_880F9AC0(ctx, base);
loc_880F4214:
	// lwz r11,2204(r31)
	ctx.current_instruction = 0x880F4214;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2204);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880f422c
	if (ctx.cr6.eq) goto loc_880F422C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x880f4230
	if (!ctx.cr6.eq) goto loc_880F4230;
loc_880F422C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880F4230:
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880F4230;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// stw r11,2560(r31)
	ctx.current_instruction = 0x880F4234;
	REX_STORE_U32(ctx.r31.u32 + 2560, ctx.r11.u32);
	// stw r11,36(r10)
	ctx.current_instruction = 0x880F4238;
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
loc_880F423C:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880F423C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f4250
	if (ctx.cr6.eq) goto loc_880F4250;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880f42cc
	if (!ctx.cr6.eq) goto loc_880F42CC;
loc_880F4250:
	// lwz r11,2340(r31)
	ctx.current_instruction = 0x880F4250;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2340);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f42cc
	if (ctx.cr6.eq) goto loc_880F42CC;
	// lwz r10,728(r31)
	ctx.current_instruction = 0x880F4260;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r9,16384
	ctx.r9.s64 = 16384;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x880f429c
	if (!ctx.cr6.gt) goto loc_880F429C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_880F427C:
	// lwz r8,2544(r31)
	ctx.current_instruction = 0x880F427C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r9,r10,r8
	ctx.current_instruction = 0x880F4284;
	REX_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r7,728(r31)
	ctx.current_instruction = 0x880F428C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x880f427c
	if (ctx.cr6.lt) goto loc_880F427C;
loc_880F429C:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880F429C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880f42cc
	if (!ctx.cr6.gt) goto loc_880F42CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_880F42B0:
	// lwz r8,2552(r31)
	ctx.current_instruction = 0x880F42B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2552);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r9,r11,r8
	ctx.current_instruction = 0x880F42B8;
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r7,728(r31)
	ctx.current_instruction = 0x880F42C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880f42b0
	if (ctx.cr6.lt) goto loc_880F42B0;
loc_880F42CC:
	// addi r4,r31,2848
	ctx.r4.s64 = ctx.r31.s64 + 2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f2a60
	ctx.lr = 0x880F42D8;
	sub_880F2A60(ctx, base);
loc_880F42D8:
	// lwz r11,3516(r31)
	ctx.current_instruction = 0x880F42D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3516);
	// stw r11,19472(r31)
	ctx.current_instruction = 0x880F42DC;
	REX_STORE_U32(ctx.r31.u32 + 19472, ctx.r11.u32);
	// b 0x880f442c
	goto loc_880F442C;
loc_880F42E4:
	// addi r4,r31,2848
	ctx.r4.s64 = ctx.r31.s64 + 2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f3de0
	ctx.lr = 0x880F42F0;
	sub_880F3DE0(ctx, base);
loc_880F42F0:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F42F4:
	// addi r4,r31,2848
	ctx.r4.s64 = ctx.r31.s64 + 2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f3cb0
	ctx.lr = 0x880F4300;
	sub_880F3CB0(ctx, base);
loc_880F4300:
	// lwz r11,3512(r31)
	ctx.current_instruction = 0x880F4300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3512);
	// stw r11,19456(r31)
	ctx.current_instruction = 0x880F4304;
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r11.u32);
	// b 0x880f442c
	goto loc_880F442C;
loc_880F430C:
	// addi r4,r31,2848
	ctx.r4.s64 = ctx.r31.s64 + 2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f3cb0
	ctx.lr = 0x880F4318;
	sub_880F3CB0(ctx, base);
loc_880F4318:
	// lwz r11,3512(r31)
	ctx.current_instruction = 0x880F4318;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3512);
	// stw r11,19456(r31)
	ctx.current_instruction = 0x880F431C;
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r11.u32);
	// b 0x880f442c
	goto loc_880F442C;
loc_880F4324:
	// lwz r11,3512(r31)
	ctx.current_instruction = 0x880F4324;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3512);
	// lfd f0,2960(r31)
	ctx.current_instruction = 0x880F4328;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 2960);
	// lfd f13,2968(r31)
	ctx.current_instruction = 0x880F432C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 2968);
	// stfd f0,21008(r31)
	ctx.current_instruction = 0x880F4330;
	REX_STORE_U64(ctx.r31.u32 + 21008, ctx.f0.u64);
	// stfd f13,21016(r31)
	ctx.current_instruction = 0x880F4334;
	REX_STORE_U64(ctx.r31.u32 + 21016, ctx.f13.u64);
	// stw r11,19456(r31)
	ctx.current_instruction = 0x880F4338;
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r11.u32);
	// b 0x880f442c
	goto loc_880F442C;
loc_880F4340:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,7764(r31)
	ctx.current_instruction = 0x880F4344;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// lwz r8,19100(r31)
	ctx.current_instruction = 0x880F4348;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// lwz r7,19096(r31)
	ctx.current_instruction = 0x880F434C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r6,19092(r31)
	ctx.current_instruction = 0x880F4350;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// lwz r5,3116(r31)
	ctx.current_instruction = 0x880F4354;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// lwz r4,3112(r31)
	ctx.current_instruction = 0x880F4358;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3112);
	// bl 0x88061460
	ctx.lr = 0x880F4360;
	sub_88061460(ctx, base);
loc_880F4360:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F4364:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,7764(r31)
	ctx.current_instruction = 0x880F4368;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// lwz r8,19100(r31)
	ctx.current_instruction = 0x880F436C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// lwz r7,19096(r31)
	ctx.current_instruction = 0x880F4370;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r6,19092(r31)
	ctx.current_instruction = 0x880F4374;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// lwz r5,3116(r31)
	ctx.current_instruction = 0x880F4378;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// lwz r4,3112(r31)
	ctx.current_instruction = 0x880F437C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3112);
	// bl 0x88061460
	ctx.lr = 0x880F4384;
	sub_88061460(ctx, base);
loc_880F4384:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F4388:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,7764(r31)
	ctx.current_instruction = 0x880F438C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// lwz r8,19100(r31)
	ctx.current_instruction = 0x880F4390;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// lwz r7,19096(r31)
	ctx.current_instruction = 0x880F4394;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r6,19092(r31)
	ctx.current_instruction = 0x880F4398;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// lwz r5,3116(r31)
	ctx.current_instruction = 0x880F439C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// lwz r4,3112(r31)
	ctx.current_instruction = 0x880F43A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3112);
	// bl 0x88061460
	ctx.lr = 0x880F43A8;
	sub_88061460(ctx, base);
loc_880F43A8:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F43AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,7764(r31)
	ctx.current_instruction = 0x880F43B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// lwz r8,19100(r31)
	ctx.current_instruction = 0x880F43B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// lwz r7,19096(r31)
	ctx.current_instruction = 0x880F43B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r6,19092(r31)
	ctx.current_instruction = 0x880F43BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// lwz r5,3116(r31)
	ctx.current_instruction = 0x880F43C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// lwz r4,3112(r31)
	ctx.current_instruction = 0x880F43C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3112);
	// bl 0x88061460
	ctx.lr = 0x880F43CC;
	sub_88061460(ctx, base);
loc_880F43CC:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F43D0:
	// addi r4,r31,2848
	ctx.r4.s64 = ctx.r31.s64 + 2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f32b8
	ctx.lr = 0x880F43DC;
	sub_880F32B8(ctx, base);
loc_880F43DC:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F43E0:
	// addi r4,r31,2848
	ctx.r4.s64 = ctx.r31.s64 + 2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f3340
	ctx.lr = 0x880F43EC;
	sub_880F3340(ctx, base);
loc_880F43EC:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F43F0:
	// addi r4,r31,2848
	ctx.r4.s64 = ctx.r31.s64 + 2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f36d8
	ctx.lr = 0x880F43FC;
	sub_880F36D8(ctx, base);
loc_880F43FC:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F4400:
	// addi r4,r31,2848
	ctx.r4.s64 = ctx.r31.s64 + 2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f3938
	ctx.lr = 0x880F440C;
	sub_880F3938(ctx, base);
loc_880F440C:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F4410:
	// addi r4,r31,2848
	ctx.r4.s64 = ctx.r31.s64 + 2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f3c08
	ctx.lr = 0x880F441C;
	sub_880F3C08(ctx, base);
loc_880F441C:
	// b 0x880f442c
	goto loc_880F442C;
loc_880F4420:
	// addi r4,r31,2848
	ctx.r4.s64 = ctx.r31.s64 + 2848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f3d50
	ctx.lr = 0x880F442C;
	sub_880F3D50(ctx, base);
loc_880F442C:
	// lwz r11,7876(r31)
	ctx.current_instruction = 0x880F442C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7876);
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x880f445c
	if (!ctx.cr6.eq) goto loc_880F445C;
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x880F4438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f445c
	if (ctx.cr6.eq) goto loc_880F445C;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x880F4444;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f445c
	if (!ctx.cr6.eq) goto loc_880F445C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880701b0
	ctx.lr = 0x880F445C;
	sub_880701B0(ctx, base);
loc_880F445C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880F4460;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880F4468;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880FC840) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880FC840);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FC840;
	ctx.current_instruction = 0x880FC840;
	// lwz r11,7600(r3)
	ctx.current_instruction = 0x880FC840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7600);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r10,30316(r3)
	ctx.current_instruction = 0x880FC84C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30316);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,8(r10)
	ctx.current_instruction = 0x880FC858;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// ld r9,736(r3)
	ctx.current_instruction = 0x880FC85C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 736);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// cmpd cr6,r9,r8
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r8.s64, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r9,672(r3)
	ctx.current_instruction = 0x880FC86C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// lwz r11,24(r10)
	ctx.current_instruction = 0x880FC870;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,672(r3)
	ctx.current_instruction = 0x880FC878;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
	// lwz r9,28(r10)
	ctx.current_instruction = 0x880FC87C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r8,r9,-5
	ctx.r8.s64 = ctx.r9.s64 + -5;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x880fc894
	if (ctx.cr6.gt) goto loc_880FC894;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x880fc8b0
	goto loc_880FC8B0;
loc_880FC894:
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880fc8b4
	if (ctx.cr6.lt) goto loc_880FC8B4;
	// lwz r10,20(r10)
	ctx.current_instruction = 0x880FC8A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// ble cr6,0x880fc8b4
	if (!ctx.cr6.gt) goto loc_880FC8B4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_880FC8B0:
	// stw r11,672(r3)
	ctx.current_instruction = 0x880FC8B0;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
loc_880FC8B4:
	// lwz r11,672(r3)
	ctx.current_instruction = 0x880FC8B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x880fc8d0
	if (!ctx.cr6.lt) goto loc_880FC8D0;
	// stw r10,672(r3)
	ctx.current_instruction = 0x880FC8C4;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r10.u32);
	// stw r10,30404(r3)
	ctx.current_instruction = 0x880FC8C8;
	REX_STORE_U32(ctx.r3.u32 + 30404, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880FC8D0:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x880fc8e0
	if (!ctx.cr6.gt) goto loc_880FC8E0;
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r11,672(r3)
	ctx.current_instruction = 0x880FC8DC;
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
loc_880FC8E0:
	// stw r10,30404(r3)
	ctx.current_instruction = 0x880FC8E0;
	REX_STORE_U32(ctx.r3.u32 + 30404, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88100668) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88100668;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88100668) {
			switch (rex_dispatch_address) {
				case 0x88100670:
				case 0x881006B4:
				case 0x88100874:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88100668;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88100670: goto loc_88100670;
		case 0x881006B4: goto loc_881006B4;
		case 0x88100874: goto loc_88100874;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x88100670;
	__savegprlr_21(ctx, base);
loc_88100670:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x88100670;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x88100674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r22,0(r11)
	ctx.current_instruction = 0x88100690;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r21,4(r11)
	ctx.current_instruction = 0x88100694;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r23,40(r11)
	ctx.current_instruction = 0x8810069C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x88052d90
	ctx.lr = 0x881006B4;
	sub_88052D90(ctx, base);
loc_881006B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x881006fc
	if (!ctx.cr6.gt) goto loc_881006FC;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881006D4:
	// lhz r8,6(r11)
	ctx.current_instruction = 0x881006D4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhzu r9,4(r11)
	ctx.current_instruction = 0x881006D8;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r6,r7,r29
	ctx.current_instruction = 0x881006EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r5,r31
	ctx.current_instruction = 0x881006F4;
	REX_STORE_U16(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u16);
	// bdnz 0x881006d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881006D4;
loc_881006FC:
	// lwz r9,720(r27)
	ctx.current_instruction = 0x881006FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 720);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,2312(r27)
	ctx.current_instruction = 0x88100704;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2312);
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x88100744
	if (ctx.cr6.lt) goto loc_88100744;
	// bne cr6,0x88100730
	if (!ctx.cr6.eq) goto loc_88100730;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r6,2316(r27)
	ctx.current_instruction = 0x88100720;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2316);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// b 0x88100754
	goto loc_88100754;
loc_88100730:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r6,2320(r27)
	ctx.current_instruction = 0x88100734;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 2320);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// b 0x88100754
	goto loc_88100754;
loc_88100744:
	// clrlwi r8,r26,31
	ctx.r8.u64 = ctx.r26.u32 & 0x1;
	// srawi r7,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r26.s32 >> 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
loc_88100754:
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r9,28552(r27)
	ctx.current_instruction = 0x88100758;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 28552);
	// lwz r8,28556(r27)
	ctx.current_instruction = 0x8810075C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 28556);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r11,0(r3)
	ctx.current_instruction = 0x88100774;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// sth r11,0(r31)
	ctx.current_instruction = 0x88100778;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lhz r10,16(r3)
	ctx.current_instruction = 0x8810077C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// sth r10,0(r31)
	ctx.current_instruction = 0x88100780;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// lhz r9,2(r3)
	ctx.current_instruction = 0x88100784;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// bne cr6,0x881007fc
	if (!ctx.cr6.eq) goto loc_881007FC;
	// sth r9,2(r31)
	ctx.current_instruction = 0x8810078C;
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// lhz r8,18(r3)
	ctx.current_instruction = 0x88100790;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// sth r8,16(r31)
	ctx.current_instruction = 0x88100794;
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r8.u16);
	// lhz r7,4(r3)
	ctx.current_instruction = 0x88100798;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// sth r7,4(r31)
	ctx.current_instruction = 0x8810079C;
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// lhz r6,20(r3)
	ctx.current_instruction = 0x881007A0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 20);
	// sth r6,32(r31)
	ctx.current_instruction = 0x881007A4;
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r6.u16);
	// lhz r5,6(r3)
	ctx.current_instruction = 0x881007A8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// sth r5,6(r31)
	ctx.current_instruction = 0x881007AC;
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r5.u16);
	// lhz r4,22(r3)
	ctx.current_instruction = 0x881007B0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 22);
	// sth r4,48(r31)
	ctx.current_instruction = 0x881007B4;
	REX_STORE_U16(ctx.r31.u32 + 48, ctx.r4.u16);
	// lhz r11,8(r3)
	ctx.current_instruction = 0x881007B8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// sth r11,8(r31)
	ctx.current_instruction = 0x881007BC;
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// lhz r10,24(r3)
	ctx.current_instruction = 0x881007C0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 24);
	// sth r10,64(r31)
	ctx.current_instruction = 0x881007C4;
	REX_STORE_U16(ctx.r31.u32 + 64, ctx.r10.u16);
	// lhz r9,10(r3)
	ctx.current_instruction = 0x881007C8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// sth r9,10(r31)
	ctx.current_instruction = 0x881007CC;
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// lhz r8,26(r3)
	ctx.current_instruction = 0x881007D0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 26);
	// sth r8,80(r31)
	ctx.current_instruction = 0x881007D4;
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r8.u16);
	// lhz r7,12(r3)
	ctx.current_instruction = 0x881007D8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// sth r7,12(r31)
	ctx.current_instruction = 0x881007DC;
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r7.u16);
	// lhz r6,28(r3)
	ctx.current_instruction = 0x881007E0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 28);
	// sth r6,96(r31)
	ctx.current_instruction = 0x881007E4;
	REX_STORE_U16(ctx.r31.u32 + 96, ctx.r6.u16);
	// lhz r5,14(r3)
	ctx.current_instruction = 0x881007E8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// sth r5,14(r31)
	ctx.current_instruction = 0x881007EC;
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r5.u16);
	// lhz r4,30(r3)
	ctx.current_instruction = 0x881007F0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 30);
	// sth r4,112(r31)
	ctx.current_instruction = 0x881007F4;
	REX_STORE_U16(ctx.r31.u32 + 112, ctx.r4.u16);
	// b 0x88100868
	goto loc_88100868;
loc_881007FC:
	// sth r9,16(r31)
	ctx.current_instruction = 0x881007FC;
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r9.u16);
	// lhz r8,18(r3)
	ctx.current_instruction = 0x88100800;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// sth r8,2(r31)
	ctx.current_instruction = 0x88100804;
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r8.u16);
	// lhz r7,4(r3)
	ctx.current_instruction = 0x88100808;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// sth r7,32(r31)
	ctx.current_instruction = 0x8810080C;
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r7.u16);
	// lhz r6,20(r3)
	ctx.current_instruction = 0x88100810;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 20);
	// sth r6,4(r31)
	ctx.current_instruction = 0x88100814;
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r6.u16);
	// lhz r5,6(r3)
	ctx.current_instruction = 0x88100818;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// sth r5,48(r31)
	ctx.current_instruction = 0x8810081C;
	REX_STORE_U16(ctx.r31.u32 + 48, ctx.r5.u16);
	// lhz r4,22(r3)
	ctx.current_instruction = 0x88100820;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 22);
	// sth r4,6(r31)
	ctx.current_instruction = 0x88100824;
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r4.u16);
	// lhz r11,8(r3)
	ctx.current_instruction = 0x88100828;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// sth r11,64(r31)
	ctx.current_instruction = 0x8810082C;
	REX_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
	// lhz r10,24(r3)
	ctx.current_instruction = 0x88100830;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 24);
	// sth r10,8(r31)
	ctx.current_instruction = 0x88100834;
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// lhz r9,10(r3)
	ctx.current_instruction = 0x88100838;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// sth r9,80(r31)
	ctx.current_instruction = 0x8810083C;
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r9.u16);
	// lhz r8,26(r3)
	ctx.current_instruction = 0x88100840;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 26);
	// sth r8,10(r31)
	ctx.current_instruction = 0x88100844;
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// lhz r7,12(r3)
	ctx.current_instruction = 0x88100848;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// sth r7,96(r31)
	ctx.current_instruction = 0x8810084C;
	REX_STORE_U16(ctx.r31.u32 + 96, ctx.r7.u16);
	// lhz r6,28(r3)
	ctx.current_instruction = 0x88100850;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 28);
	// sth r6,12(r31)
	ctx.current_instruction = 0x88100854;
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r6.u16);
	// lhz r5,14(r3)
	ctx.current_instruction = 0x88100858;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// sth r5,112(r31)
	ctx.current_instruction = 0x8810085C;
	REX_STORE_U16(ctx.r31.u32 + 112, ctx.r5.u16);
	// lhz r4,30(r3)
	ctx.current_instruction = 0x88100860;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 30);
	// sth r4,14(r31)
	ctx.current_instruction = 0x88100864;
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r4.u16);
loc_88100868:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x88100874;
	sub_88052D90(ctx, base);
loc_88100874:
	// li r11,63
	ctx.r11.s64 = 63;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r11,0(r31)
	ctx.current_instruction = 0x8810087C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mullw r9,r10,r23
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// sth r9,0(r31)
	ctx.current_instruction = 0x88100888;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
loc_8810088C:
	// lhz r11,0(r30)
	ctx.current_instruction = 0x8810088C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881008b4
	if (ctx.cr6.eq) goto loc_881008B4;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// bgt cr6,0x881008a8
	if (ctx.cr6.gt) goto loc_881008A8;
	// neg r10,r21
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r21.u64);
loc_881008A8:
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,0(r30)
	ctx.current_instruction = 0x881008B0;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
loc_881008B4:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bdnz 0x8810088c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810088C;
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88108918) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88108918;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88108918) {
			switch (rex_dispatch_address) {
				case 0x88108920:
				case 0x88108988:
				case 0x881089A4:
				case 0x88108A0C:
				case 0x88108A28:
				case 0x88108A94:
				case 0x88108AB0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88108918;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88108920: goto loc_88108920;
		case 0x88108988: goto loc_88108988;
		case 0x881089A4: goto loc_881089A4;
		case 0x88108A0C: goto loc_88108A0C;
		case 0x88108A28: goto loc_88108A28;
		case 0x88108A94: goto loc_88108A94;
		case 0x88108AB0: goto loc_88108AB0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x88108920;
	__savegprlr_19(ctx, base);
loc_88108920:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x88108920;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// addi r24,r5,-5
	ctx.r24.s64 = ctx.r5.s64 + -5;
	// addi r25,r6,-5
	ctx.r25.s64 = ctx.r6.s64 + -5;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x881089c4
	if (!ctx.cr6.gt) goto loc_881089C4;
	// addi r10,r8,31
	ctx.r10.s64 = ctx.r8.s64 + 31;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// srawi r26,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 5;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// addi r27,r9,-1
	ctx.r27.s64 = ctx.r9.s64 + -1;
loc_8810895C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x881089b8
	if (!ctx.cr6.gt) goto loc_881089B8;
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x88108968;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_88108970:
	// lbzu r28,1(r27)
	ctx.current_instruction = 0x88108970;
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x8810897C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x88105760
	ctx.lr = 0x88108988;
	sub_88105760(ctx, base);
loc_88108988:
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x88108988;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x88108990;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88105760
	ctx.lr = 0x881089A4;
	sub_88105760(ctx, base);
loc_881089A4:
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x881089A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x88108970
	if (!ctx.cr0.eq) goto loc_88108970;
loc_881089B8:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// bne 0x8810895c
	if (!ctx.cr0.eq) goto loc_8810895C;
loc_881089C4:
	// srawi. r22,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble 0x88108a48
	if (!ctx.cr0.gt) goto loc_88108A48;
	// srawi r11,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 1;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r27,r20,-1
	ctx.r27.s64 = ctx.r20.s64 + -1;
	// srawi r26,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 5;
loc_881089E0:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88108a3c
	if (!ctx.cr6.gt) goto loc_88108A3C;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x881089EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_881089F4:
	// lbzu r28,1(r27)
	ctx.current_instruction = 0x881089F4;
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x88108A00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x88105760
	ctx.lr = 0x88108A0C;
	sub_88105760(ctx, base);
loc_88108A0C:
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x88108A0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x88108A14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88105760
	ctx.lr = 0x88108A28;
	sub_88105760(ctx, base);
loc_88108A28:
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x88108A28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x881089f4
	if (!ctx.cr0.eq) goto loc_881089F4;
loc_88108A3C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// bne 0x881089e0
	if (!ctx.cr0.eq) goto loc_881089E0;
loc_88108A48:
	// lwz r10,276(r1)
	ctx.current_instruction = 0x88108A48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x88108ad0
	if (!ctx.cr6.gt) goto loc_88108AD0;
	// srawi r11,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 1;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// srawi r26,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 5;
loc_88108A68:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x88108ac4
	if (!ctx.cr6.gt) goto loc_88108AC4;
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x88108A74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_88108A7C:
	// lbzu r28,1(r27)
	ctx.current_instruction = 0x88108A7C;
	ea = 1 + ctx.r27.u32;
	ctx.r28.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x88108A88;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x88105760
	ctx.lr = 0x88108A94;
	sub_88105760(ctx, base);
loc_88108A94:
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x88108A94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// clrlwi r5,r28,28
	ctx.r5.u64 = ctx.r28.u32 & 0xF;
	// lwz r7,1416(r31)
	ctx.current_instruction = 0x88108A9C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x88105760
	ctx.lr = 0x88108AB0;
	sub_88105760(ctx, base);
loc_88108AB0:
	// lwz r6,1384(r31)
	ctx.current_instruction = 0x88108AB0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x88108a7c
	if (!ctx.cr0.eq) goto loc_88108A7C;
loc_88108AC4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// bne 0x88108a68
	if (!ctx.cr0.eq) goto loc_88108A68;
loc_88108AD0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810C1B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810C1B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810C1B8) {
			switch (rex_dispatch_address) {
				case 0x8810C1DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810C1B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8810C1DC: goto loc_8810C1DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8810C1BC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8810C1C0;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r9,84(r1)
	ctx.current_instruction = 0x8810C1C4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// bl 0x8810bde0
	ctx.lr = 0x8810C1DC;
	sub_8810BDE0(ctx, base);
loc_8810C1DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8810C1E0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8810C620) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8810C620);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810C620;
	ctx.current_instruction = 0x8810C620;
	// std r30,-16(r1)
	ctx.current_instruction = 0x8810C620;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x8810C624;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8810C638:
	// lhz r10,-2(r3)
	ctx.current_instruction = 0x8810C638;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + -2);
	// lhz r9,0(r3)
	ctx.current_instruction = 0x8810C63C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhz r5,2(r3)
	ctx.current_instruction = 0x8810C644;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lhz r6,-4(r3)
	ctx.current_instruction = 0x8810C64C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + -4);
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r7,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// subf r5,r8,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r8.u64;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// subf r4,r7,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r7.u64;
	// rlwinm r30,r9,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r10,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r4,r9,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r9.u64;
	// subf r5,r9,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r9.u64;
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r30,r10,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r10.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r6,r11,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r11.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// srawi r5,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// sth r10,-4(r3)
	ctx.current_instruction = 0x8810C6D4;
	REX_STORE_U16(ctx.r3.u32 + -4, ctx.r10.u16);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sth r9,-2(r3)
	ctx.current_instruction = 0x8810C6DC;
	REX_STORE_U16(ctx.r3.u32 + -2, ctx.r9.u16);
	// sth r8,0(r3)
	ctx.current_instruction = 0x8810C6E0;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// sth r7,2(r3)
	ctx.current_instruction = 0x8810C6E8;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r7.u16);
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bdnz 0x8810c638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810C638;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8810C6F4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8810C6F8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8810DAB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810DAB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810DAB0) {
			switch (rex_dispatch_address) {
				case 0x8810DAB8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810DAB0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8810DAB8: goto loc_8810DAB8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x8810DAB8;
	__savegprlr_17(ctx, base);
loc_8810DAB8:
	// stwu r1,-1232(r1)
	ctx.current_instruction = 0x8810DAB8;
	ea = -1232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// lis r9,-30680
	ctx.r9.s64 = -2010644480;
	// clrlwi r31,r8,30
	ctx.r31.u64 = ctx.r8.u32 & 0x3;
	// addi r9,r9,5552
	ctx.r9.s64 = ctx.r9.s64 + 5552;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8810dd7c
	if (!ctx.cr6.eq) goto loc_8810DD7C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8810db18
	if (!ctx.cr6.eq) goto loc_8810DB18;
	// lwz r11,1316(r1)
	ctx.current_instruction = 0x8810DAEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8810e2cc
	if (!ctx.cr6.gt) goto loc_8810E2CC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_8810DB04:
	// ldux r9,r11,r4
	ctx.current_instruction = 0x8810DB04;
	ea = ctx.r11.u32 + ctx.r4.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdux r9,r10,r6
	ctx.current_instruction = 0x8810DB08;
	ea = ctx.r10.u32 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8810db04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810DB04;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_8810DB18:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// li r30,4
	ctx.r30.s64 = 4;
	// beq cr6,0x8810db28
	if (ctx.cr6.eq) goto loc_8810DB28;
	// li r30,6
	ctx.r30.s64 = 6;
loc_8810DB28:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r8,1316(r1)
	ctx.current_instruction = 0x8810DB2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// ble cr6,0x8810e2cc
	if (!ctx.cr6.gt) goto loc_8810E2CC;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
loc_8810DB60:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r3,3
	ctx.r27.s64 = ctx.r3.s64 + 3;
	// addi r26,r28,3
	ctx.r26.s64 = ctx.r28.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8810DB74:
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lhz r8,4(r9)
	ctx.current_instruction = 0x8810DB78;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// lhz r5,6(r9)
	ctx.current_instruction = 0x8810DB7C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r24,2(r9)
	ctx.current_instruction = 0x8810DB84;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r23,0(r9)
	ctx.current_instruction = 0x8810DB8C;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lbzx r22,r3,r11
	ctx.current_instruction = 0x8810DB94;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbzx r21,r31,r10
	ctx.current_instruction = 0x8810DB98;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// lbzx r20,r7,r10
	ctx.current_instruction = 0x8810DBA0;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r19,r10,r4
	ctx.current_instruction = 0x8810DBA4;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// mullw r8,r21,r8
	ctx.r8.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r20,r5
	ctx.r10.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r5.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r10,r19,r24
	ctx.r10.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r24.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r10,r23,r22
	ctx.r10.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r22.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sraw. r10,r10,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8810dbd8
	if (!ctx.cr0.lt) goto loc_8810DBD8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8810dbe4
	goto loc_8810DBE4;
loc_8810DBD8:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8810dbe4
	if (!ctx.cr6.gt) goto loc_8810DBE4;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8810DBE4:
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stbx r5,r28,r11
	ctx.current_instruction = 0x8810DBF0;
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r5.u8);
	// lhz r24,2(r9)
	ctx.current_instruction = 0x8810DBF4;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r23,0(r9)
	ctx.current_instruction = 0x8810DBF8;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lbz r19,1(r8)
	ctx.current_instruction = 0x8810DBFC;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbzx r22,r7,r10
	ctx.current_instruction = 0x8810DC00;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r20,r10,r4
	ctx.current_instruction = 0x8810DC04;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r21,r31,r10
	ctx.current_instruction = 0x8810DC08;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lhz r10,4(r9)
	ctx.current_instruction = 0x8810DC0C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// lhz r5,6(r9)
	ctx.current_instruction = 0x8810DC10;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mullw r10,r21,r8
	ctx.r10.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r22,r5
	ctx.r8.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r5.s32);
	// extsh r5,r24
	ctx.r5.s64 = ctx.r24.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r20,r5
	ctx.r8.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r5.s32);
	// extsh r5,r23
	ctx.r5.s64 = ctx.r23.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r5,r19
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r19.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sraw. r8,r10,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x8810dc54
	if (!ctx.cr0.lt) goto loc_8810DC54;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8810dc60
	goto loc_8810DC60;
loc_8810DC54:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8810dc60
	if (!ctx.cr6.gt) goto loc_8810DC60;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8810DC60:
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r8,1(r5)
	ctx.current_instruction = 0x8810DC6C;
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r8.u8);
	// lhz r24,4(r9)
	ctx.current_instruction = 0x8810DC70;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// lhz r21,2(r9)
	ctx.current_instruction = 0x8810DC74;
	ctx.r21.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// lbzx r22,r31,r10
	ctx.current_instruction = 0x8810DC78;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbz r20,0(r10)
	ctx.current_instruction = 0x8810DC7C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lhz r5,0(r9)
	ctx.current_instruction = 0x8810DC80;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r23,r5
	ctx.r23.s64 = ctx.r5.s16;
	// lhz r8,6(r9)
	ctx.current_instruction = 0x8810DC88;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lbzx r5,r7,r10
	ctx.current_instruction = 0x8810DC90;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// extsh r21,r21
	ctx.r21.s64 = ctx.r21.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r5,r5,r8
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lbzx r8,r10,r4
	ctx.current_instruction = 0x8810DCA0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// mullw r10,r22,r24
	ctx.r10.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r24.s32);
	// mullw r8,r8,r21
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r21.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r23,r20
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r20.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sraw. r8,r5,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r8.s64 = ctx.r5.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x8810dcd0
	if (!ctx.cr0.lt) goto loc_8810DCD0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8810dcdc
	goto loc_8810DCDC;
loc_8810DCD0:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8810dcdc
	if (!ctx.cr6.gt) goto loc_8810DCDC;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8810DCDC:
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stb r8,2(r5)
	ctx.current_instruction = 0x8810DCE4;
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r8.u8);
	// lbzx r5,r7,r10
	ctx.current_instruction = 0x8810DCE8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lhz r21,2(r9)
	ctx.current_instruction = 0x8810DCEC;
	ctx.r21.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// lbzx r8,r27,r11
	ctx.current_instruction = 0x8810DCF0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lhz r23,4(r9)
	ctx.current_instruction = 0x8810DCF4;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// lbzx r24,r10,r4
	ctx.current_instruction = 0x8810DCF8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r10,r31,r10
	ctx.current_instruction = 0x8810DCFC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// lhz r22,6(r9)
	ctx.current_instruction = 0x8810DD04;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// lhz r23,0(r9)
	ctx.current_instruction = 0x8810DD0C;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r22,r22
	ctx.r22.s64 = ctx.r22.s16;
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// mullw r5,r5,r22
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r22.s32);
	// extsh r22,r21
	ctx.r22.s64 = ctx.r21.s16;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r5,r24,r22
	ctx.r5.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r22.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mullw r8,r23,r8
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sraw. r10,r8,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8810dd48
	if (!ctx.cr0.lt) goto loc_8810DD48;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8810dd54
	goto loc_8810DD54;
loc_8810DD48:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8810dd54
	if (!ctx.cr6.gt) goto loc_8810DD54;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8810DD54:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r26,r11
	ctx.current_instruction = 0x8810DD58;
	REX_STORE_U8(ctx.r26.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8810db74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810DB74;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r28,r28,r6
	ctx.r28.u64 = ctx.r28.u64 + ctx.r6.u64;
	// bne 0x8810db60
	if (!ctx.cr0.eq) goto loc_8810DB60;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_8810DD7C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8810dfd0
	if (!ctx.cr6.eq) goto loc_8810DFD0;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r31,4
	ctx.r31.s64 = 4;
	// beq cr6,0x8810dd94
	if (ctx.cr6.eq) goto loc_8810DD94;
	// li r31,6
	ctx.r31.s64 = 6;
loc_8810DD94:
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// lwz r9,1316(r1)
	ctx.current_instruction = 0x8810DD98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// subf r30,r10,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// ble cr6,0x8810e2cc
	if (!ctx.cr6.gt) goto loc_8810E2CC;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
loc_8810DDB4:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r3,2
	ctx.r29.s64 = ctx.r3.s64 + 2;
	// addi r28,r5,3
	ctx.r28.s64 = ctx.r5.s64 + 3;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8810DDC8:
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lhz r8,4(r11)
	ctx.current_instruction = 0x8810DDCC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r7,2(r11)
	ctx.current_instruction = 0x8810DDD0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbzx r26,r3,r10
	ctx.current_instruction = 0x8810DDD4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r25,6(r11)
	ctx.current_instruction = 0x8810DDE0;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r24,0(r11)
	ctx.current_instruction = 0x8810DDE4;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r23,1(r9)
	ctx.current_instruction = 0x8810DDE8;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lbz r22,2(r9)
	ctx.current_instruction = 0x8810DDF0;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lbz r21,-1(r9)
	ctx.current_instruction = 0x8810DDF8;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// mullw r8,r23,r8
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r26,r7
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r22,r25
	ctx.r8.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r25.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r21,r24
	ctx.r8.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r24.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// sraw. r9,r9,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8810de2c
	if (!ctx.cr0.lt) goto loc_8810DE2C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8810de38
	goto loc_8810DE38;
loc_8810DE2C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8810de38
	if (!ctx.cr6.gt) goto loc_8810DE38;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8810DE38:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stbx r8,r5,r10
	ctx.current_instruction = 0x8810DE40;
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r8.u8);
	// lhz r24,6(r11)
	ctx.current_instruction = 0x8810DE44;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r23,0(r11)
	ctx.current_instruction = 0x8810DE48;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,4(r11)
	ctx.current_instruction = 0x8810DE4C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// lhz r7,2(r11)
	ctx.current_instruction = 0x8810DE54;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r26,2(r9)
	ctx.current_instruction = 0x8810DE58;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r25,1(r9)
	ctx.current_instruction = 0x8810DE5C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// lbz r26,3(r9)
	ctx.current_instruction = 0x8810DE68;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// lbzx r22,r3,r10
	ctx.current_instruction = 0x8810DE6C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// mullw r7,r25,r7
	ctx.r7.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// extsh r25,r24
	ctx.r25.s64 = ctx.r24.s16;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r8,r26,r25
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r25.s32);
	// extsh r7,r23
	ctx.r7.s64 = ctx.r23.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r22,r7
	ctx.r8.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// sraw. r9,r9,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8810dea4
	if (!ctx.cr0.lt) goto loc_8810DEA4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8810deb0
	goto loc_8810DEB0;
loc_8810DEA4:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8810deb0
	if (!ctx.cr6.gt) goto loc_8810DEB0;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8810DEB0:
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stb r7,1(r8)
	ctx.current_instruction = 0x8810DEBC;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// lhz r7,4(r11)
	ctx.current_instruction = 0x8810DEC0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r26,2(r11)
	ctx.current_instruction = 0x8810DEC4;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r8,3(r9)
	ctx.current_instruction = 0x8810DEC8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lbz r25,2(r9)
	ctx.current_instruction = 0x8810DED0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lbz r23,4(r9)
	ctx.current_instruction = 0x8810DEDC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r7,1(r9)
	ctx.current_instruction = 0x8810DEE0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lhz r24,6(r11)
	ctx.current_instruction = 0x8810DEE4;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r9,r25,r26
	ctx.r9.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r26.s32);
	// lhz r26,0(r11)
	ctx.current_instruction = 0x8810DEEC;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r25,r24
	ctx.r25.s64 = ctx.r24.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r23,r25
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r25.s32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r7,r26
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// sraw. r9,r9,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8810df20
	if (!ctx.cr0.lt) goto loc_8810DF20;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8810df2c
	goto loc_8810DF2C;
loc_8810DF20:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8810df2c
	if (!ctx.cr6.gt) goto loc_8810DF2C;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8810DF2C:
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stb r7,2(r8)
	ctx.current_instruction = 0x8810DF38;
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r7.u8);
	// lhz r7,2(r11)
	ctx.current_instruction = 0x8810DF3C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r26,4(r11)
	ctx.current_instruction = 0x8810DF40;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lbz r8,1(r9)
	ctx.current_instruction = 0x8810DF44;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lbz r25,2(r9)
	ctx.current_instruction = 0x8810DF4C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// lbz r23,3(r9)
	ctx.current_instruction = 0x8810DF54;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lhz r24,6(r11)
	ctx.current_instruction = 0x8810DF5C;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r7,0(r11)
	ctx.current_instruction = 0x8810DF60;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r8,r25,r26
	ctx.r8.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r26.s32);
	// lbzx r26,r29,r10
	ctx.current_instruction = 0x8810DF68;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// extsh r25,r24
	ctx.r25.s64 = ctx.r24.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r23,r25
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r25.s32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r26,r7
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// sraw. r9,r9,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8810df9c
	if (!ctx.cr0.lt) goto loc_8810DF9C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8810dfa8
	goto loc_8810DFA8;
loc_8810DF9C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8810dfa8
	if (!ctx.cr6.gt) goto loc_8810DFA8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8810DFA8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbx r9,r28,r10
	ctx.current_instruction = 0x8810DFAC;
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8810ddc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810DDC8;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bne 0x8810ddb4
	if (!ctx.cr0.eq) goto loc_8810DDB4;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_8810DFD0:
	// addi r8,r1,47
	ctx.r8.s64 = ctx.r1.s64 + 47;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// rlwinm r28,r8,0,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// beq cr6,0x8810dfec
	if (ctx.cr6.eq) goto loc_8810DFEC;
	// li r7,6
	ctx.r7.s64 = 6;
loc_8810DFEC:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// li r8,4
	ctx.r8.s64 = 4;
	// beq cr6,0x8810dffc
	if (ctx.cr6.eq) goto loc_8810DFFC;
	// li r8,6
	ctx.r8.s64 = 6;
loc_8810DFFC:
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r20,1316(r1)
	ctx.current_instruction = 0x8810E000;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r25,r8,-7
	ctx.r25.s64 = ctx.r8.s64 + -7;
	// subfic r23,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r23.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// addi r8,r25,-1
	ctx.r8.s64 = ctx.r25.s64 + -1;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r24,r10,-1
	ctx.r24.s64 = ctx.r10.s64 + -1;
	// ble cr6,0x8810e2cc
	if (!ctx.cr6.gt) goto loc_8810E2CC;
	// lhz r7,6(r9)
	ctx.current_instruction = 0x8810E028;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lhz r29,4(r9)
	ctx.current_instruction = 0x8810E030;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r27,2(r9)
	ctx.current_instruction = 0x8810E038;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// lhz r9,0(r9)
	ctx.current_instruction = 0x8810E040;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r30,r4,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// extsh r26,r9
	ctx.r26.s64 = ctx.r9.s16;
	// addi r22,r10,-1
	ctx.r22.s64 = ctx.r10.s64 + -1;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
loc_8810E060:
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r9,r19,-2
	ctx.r9.s64 = ctx.r19.s64 + -2;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8810E070:
	// lbzx r8,r10,r4
	ctx.current_instruction = 0x8810E070;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r7,r10,r30
	ctx.current_instruction = 0x8810E074;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// mullw r8,r8,r27
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// lbzx r18,r10,r3
	ctx.current_instruction = 0x8810E07C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// lbz r17,0(r10)
	ctx.current_instruction = 0x8810E080;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r7,r18,r31
	ctx.r7.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r31.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r7,r17,r26
	ctx.r7.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r26.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + ctx.r24.u64;
	// sraw r7,r8,r25
	temp.u32 = ctx.r25.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x8810E0AC;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8810e070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810E070;
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// add r22,r22,r4
	ctx.r22.u64 = ctx.r22.u64 + ctx.r4.u64;
	// addi r19,r19,64
	ctx.r19.s64 = ctx.r19.s64 + 64;
	// bne 0x8810e060
	if (!ctx.cr0.eq) goto loc_8810E060;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x8810e2cc
	if (!ctx.cr6.gt) goto loc_8810E2CC;
	// addi r27,r28,4
	ctx.r27.s64 = ctx.r28.s64 + 4;
	// addi r30,r5,2
	ctx.r30.s64 = ctx.r5.s64 + 2;
loc_8810E0D4:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8810E0EC:
	// lhz r9,0(r10)
	ctx.current_instruction = 0x8810E0EC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r8,-4(r10)
	ctx.current_instruction = 0x8810E0F0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r7,0(r11)
	ctx.current_instruction = 0x8810E0F4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lhz r4,4(r11)
	ctx.current_instruction = 0x8810E0FC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// lhz r7,2(r10)
	ctx.current_instruction = 0x8810E108;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r26,6(r11)
	ctx.current_instruction = 0x8810E110;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r8,r9,r3
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// lhz r3,-2(r10)
	ctx.current_instruction = 0x8810E118;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r25,2(r11)
	ctx.current_instruction = 0x8810E11C;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r4,r4,r5
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r7,r26
	ctx.r7.s64 = ctx.r26.s16;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r4,r7,r9
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// extsh r3,r25
	ctx.r3.s64 = ctx.r25.s16;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r4,r3,r7
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + ctx.r23.u64;
	// srawi. r8,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x8810e15c
	if (!ctx.cr0.lt) goto loc_8810E15C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8810e168
	goto loc_8810E168;
loc_8810E15C:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x8810e168
	if (!ctx.cr6.gt) goto loc_8810E168;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8810E168:
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lhz r3,4(r10)
	ctx.current_instruction = 0x8810E16C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// stb r26,-2(r4)
	ctx.current_instruction = 0x8810E178;
	REX_STORE_U8(ctx.r4.u32 + -2, ctx.r26.u8);
	// lhz r4,0(r11)
	ctx.current_instruction = 0x8810E17C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r26,4(r11)
	ctx.current_instruction = 0x8810E180;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// lhz r4,6(r11)
	ctx.current_instruction = 0x8810E188;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r7,r3,r7
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lhz r3,2(r11)
	ctx.current_instruction = 0x8810E190;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// mullw r4,r3,r5
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// extsh r3,r26
	ctx.r3.s64 = ctx.r26.s16;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mullw r4,r3,r9
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r7,r7,r23
	ctx.r7.u64 = ctx.r7.u64 + ctx.r23.u64;
	// srawi. r7,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x8810e1cc
	if (!ctx.cr0.lt) goto loc_8810E1CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8810e1d8
	goto loc_8810E1D8;
loc_8810E1CC:
	// cmpwi cr6,r7,255
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 255, ctx.xer);
	// ble cr6,0x8810e1d8
	if (!ctx.cr6.gt) goto loc_8810E1D8;
	// li r7,255
	ctx.r7.s64 = 255;
loc_8810E1D8:
	// stbx r7,r29,r31
	ctx.current_instruction = 0x8810E1D8;
	REX_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r7.u8);
	// lhz r4,6(r10)
	ctx.current_instruction = 0x8810E1DC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r3,6(r11)
	ctx.current_instruction = 0x8810E1E4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r7,2(r11)
	ctx.current_instruction = 0x8810E1E8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r26,0(r11)
	ctx.current_instruction = 0x8810E1F0;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r25,r7
	ctx.r25.s64 = ctx.r7.s16;
	// lhz r24,4(r11)
	ctx.current_instruction = 0x8810E1F8;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r7,r3,r4
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r3,r25,r9
	ctx.r3.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r9.s32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// mullw r5,r26,r5
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r5.s32);
	// extsh r3,r24
	ctx.r3.s64 = ctx.r24.s16;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mullw r5,r3,r8
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r7,r7,r23
	ctx.r7.u64 = ctx.r7.u64 + ctx.r23.u64;
	// srawi. r7,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x8810e234
	if (!ctx.cr0.lt) goto loc_8810E234;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8810e240
	goto loc_8810E240;
loc_8810E234:
	// cmpwi cr6,r7,255
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 255, ctx.xer);
	// ble cr6,0x8810e240
	if (!ctx.cr6.gt) goto loc_8810E240;
	// li r7,255
	ctx.r7.s64 = 255;
loc_8810E240:
	// stbx r7,r30,r31
	ctx.current_instruction = 0x8810E240;
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u8);
	// lhz r5,8(r10)
	ctx.current_instruction = 0x8810E244;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// lhz r7,6(r11)
	ctx.current_instruction = 0x8810E24C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r5,2(r11)
	ctx.current_instruction = 0x8810E250;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r26,0(r11)
	ctx.current_instruction = 0x8810E258;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r25,4(r11)
	ctx.current_instruction = 0x8810E260;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r7,r7,r3
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// extsh r3,r26
	ctx.r3.s64 = ctx.r26.s16;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// extsh r7,r25
	ctx.r7.s64 = ctx.r25.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r9,r23
	ctx.r5.u64 = ctx.r9.u64 + ctx.r23.u64;
	// srawi. r9,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8810e29c
	if (!ctx.cr0.lt) goto loc_8810E29C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8810e2a8
	goto loc_8810E2A8;
loc_8810E29C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8810e2a8
	if (!ctx.cr6.gt) goto loc_8810E2A8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8810E2A8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stbx r9,r28,r31
	ctx.current_instruction = 0x8810E2B0;
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x8810e0ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810E0EC;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// bne 0x8810e0d4
	if (!ctx.cr0.eq) goto loc_8810E0D4;
loc_8810E2CC:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88122410) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88122410);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88122410;
	ctx.current_instruction = 0x88122410;
	// lwz r7,44(r3)
	ctx.current_instruction = 0x88122410;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r4)
	ctx.current_instruction = 0x88122418;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,8(r4)
	ctx.current_instruction = 0x8812241C;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r8,12(r4)
	ctx.current_instruction = 0x88122420;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r11,148(r7)
	ctx.current_instruction = 0x88122424;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r9,8(r10)
	ctx.current_instruction = 0x8812242C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// bne cr6,0x88122440
	if (!ctx.cr6.eq) goto loc_88122440;
	// stw r4,148(r7)
	ctx.current_instruction = 0x88122434;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88122440:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88122440;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r6,8(r10)
	ctx.current_instruction = 0x88122444;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r9,r6
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x8812246c
	if (!ctx.cr6.lt) goto loc_8812246C;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88122450;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881224a4
	if (ctx.cr6.eq) goto loc_881224A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x88122440
	if (!ctx.cr6.eq) goto loc_88122440;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8812246C:
	// stw r11,8(r4)
	ctx.current_instruction = 0x8812246C;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88122470;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r4)
	ctx.current_instruction = 0x88122474;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88122478;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88122494
	if (ctx.cr6.eq) goto loc_88122494;
	// stw r4,8(r10)
	ctx.current_instruction = 0x88122484;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,12(r11)
	ctx.current_instruction = 0x8812248C;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88122494:
	// stw r4,148(r7)
	ctx.current_instruction = 0x88122494;
	REX_STORE_U32(ctx.r7.u32 + 148, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,12(r11)
	ctx.current_instruction = 0x8812249C;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881224A4:
	// stw r11,12(r4)
	ctx.current_instruction = 0x881224A4;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,8(r4)
	ctx.current_instruction = 0x881224AC;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r4,8(r11)
	ctx.current_instruction = 0x881224B0;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88122EF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88122EF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88122EF8) {
			switch (rex_dispatch_address) {
				case 0x88122F00:
				case 0x88122F40:
				case 0x88122F84:
				case 0x88122FBC:
				case 0x88122FF4:
				case 0x88123024:
				case 0x88123044:
				case 0x8812306C:
				case 0x88123088:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88122EF8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88122F00: goto loc_88122F00;
		case 0x88122F40: goto loc_88122F40;
		case 0x88122F84: goto loc_88122F84;
		case 0x88122FBC: goto loc_88122FBC;
		case 0x88122FF4: goto loc_88122FF4;
		case 0x88123024: goto loc_88123024;
		case 0x88123044: goto loc_88123044;
		case 0x8812306C: goto loc_8812306C;
		case 0x88123088: goto loc_88123088;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88122F00;
	__savegprlr_26(ctx, base);
loc_88122F00:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88122F00;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r29,44(r3)
	ctx.current_instruction = 0x88122F08;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r11,88(r1)
	ctx.current_instruction = 0x88122F14;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x88122F20;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,0(r27)
	ctx.current_instruction = 0x88122F24;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,0(r6)
	ctx.current_instruction = 0x88122F2C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88122F30;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,96(r1)
	ctx.current_instruction = 0x88122F34;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88122F38;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88123b50
	ctx.lr = 0x88122F40;
	sub_88123B50(ctx, base);
loc_88122F40:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812313c
	if (ctx.cr6.lt) goto loc_8812313C;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x88122F48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88122f64
	if (!ctx.cr6.eq) goto loc_88122F64;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88122F64:
	// lwz r11,28(r31)
	ctx.current_instruction = 0x88122F64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88123134
	if (ctx.cr6.eq) goto loc_88123134;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.current_instruction = 0x88122F74;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881241a0
	ctx.lr = 0x88122F84;
	sub_881241A0(ctx, base);
loc_88122F84:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812313c
	if (ctx.cr6.lt) goto loc_8812313C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122F8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88123090
	if (!ctx.cr6.eq) goto loc_88123090;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88122F9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88122fe0
	if (ctx.cr6.eq) goto loc_88122FE0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,16(r31)
	ctx.current_instruction = 0x88122FAC;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881229d8
	ctx.lr = 0x88122FBC;
	sub_881229D8(ctx, base);
loc_88122FBC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812313c
	if (ctx.cr6.lt) goto loc_8812313C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122FC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88122fe0
	if (ctx.cr6.eq) goto loc_88122FE0;
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88122FD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88122FD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	ctx.current_instruction = 0x88122FDC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_88122FE0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.current_instruction = 0x88122FE4;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881229d8
	ctx.lr = 0x88122FF4;
	sub_881229D8(ctx, base);
loc_88122FF4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812313c
	if (ctx.cr6.lt) goto loc_8812313C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88122FFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88123090
	if (!ctx.cr6.eq) goto loc_88123090;
	// std r4,48(r29)
	ctx.current_instruction = 0x88123008;
	REX_STORE_U64(ctx.r29.u32 + 48, ctx.r4.u64);
	// stw r26,56(r29)
	ctx.current_instruction = 0x8812300C;
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r26.u32);
	// lwz r11,76(r29)
	ctx.current_instruction = 0x88123010;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88123018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88123024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88123024:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812313c
	if (ctx.cr6.lt) goto loc_8812313C;
	// lwz r11,76(r29)
	ctx.current_instruction = 0x8812302C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88123038;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88123044;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88123044:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812313c
	if (ctx.cr6.lt) goto loc_8812313C;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8812304C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88123054;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ld r11,8(r11)
	ctx.current_instruction = 0x88123058;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,40(r29)
	ctx.current_instruction = 0x88123060;
	REX_STORE_U64(ctx.r29.u32 + 40, ctx.r11.u64);
	// lwz r4,88(r1)
	ctx.current_instruction = 0x88123064;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x881227c8
	ctx.lr = 0x8812306C;
	sub_881227C8(ctx, base);
loc_8812306C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812313c
	if (ctx.cr6.lt) goto loc_8812313C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.current_instruction = 0x88123078;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881229d8
	ctx.lr = 0x88123088;
	sub_881229D8(ctx, base);
loc_88123088:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8812313c
	if (ctx.cr6.lt) goto loc_8812313C;
loc_88123090:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88123090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88123094;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	ctx.current_instruction = 0x8812309C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x881230A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.current_instruction = 0x881230A4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r7,28(r31)
	ctx.current_instruction = 0x881230A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// ld r8,8(r9)
	ctx.current_instruction = 0x881230B0;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.current_instruction = 0x881230B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r6,r10,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// bge cr6,0x881230d8
	if (!ctx.cr6.lt) goto loc_881230D8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_881230D8:
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r28)
	ctx.current_instruction = 0x881230DC;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// lwz r9,28(r31)
	ctx.current_instruction = 0x881230E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r7,28(r31)
	ctx.current_instruction = 0x881230E8;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// ld r8,0(r31)
	ctx.current_instruction = 0x881230EC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r5,0(r11)
	ctx.current_instruction = 0x881230F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r5)
	ctx.current_instruction = 0x881230F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// ld r4,8(r5)
	ctx.current_instruction = 0x881230F8;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r27)
	ctx.current_instruction = 0x8812310C;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.current_instruction = 0x88123110;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// ld r11,0(r31)
	ctx.current_instruction = 0x88123114;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,16(r31)
	ctx.current_instruction = 0x88123118;
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r26,8(r31)
	ctx.current_instruction = 0x8812311C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.current_instruction = 0x88123124;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x8812312C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// bne cr6,0x8812313c
	if (!ctx.cr6.eq) goto loc_8812313C;
loc_88123134:
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8812313C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88127E30) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88127E30);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88127E30;
	ctx.current_instruction = 0x88127E30;
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	ctx.current_instruction = 0x88127E30;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r11,110(r3)
	ctx.current_instruction = 0x88127E34;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfs f0,6708(r9)
	ctx.current_instruction = 0x88127E50;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r6,-16(r1)
	ctx.current_instruction = 0x88127E58;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.current_instruction = 0x88127E5C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// ble cr6,0x88127ee0
	if (!ctx.cr6.gt) goto loc_88127EE0;
	// lhz r8,34(r3)
	ctx.current_instruction = 0x88127E74;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r5,0
	ctx.r5.s64 = 0;
loc_88127E7C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88127ecc
	if (!ctx.cr6.gt) goto loc_88127ECC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_88127E98:
	// lwz r8,320(r3)
	ctx.current_instruction = 0x88127E98;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r7,r11,1776
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lwz r8,60(r8)
	ctx.current_instruction = 0x88127EB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// lfsx f13,r8,r6
	ctx.current_instruction = 0x88127EB4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r10)
	ctx.current_instruction = 0x88127EBC;
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r8,34(r3)
	ctx.current_instruction = 0x88127EC0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88127e98
	if (ctx.cr6.lt) goto loc_88127E98;
loc_88127ECC:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x88127e7c
	if (ctx.cr6.lt) goto loc_88127E7C;
loc_88127EE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88127EE4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812A538) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812A538;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812A538) {
			switch (rex_dispatch_address) {
				case 0x8812A540:
				case 0x8812A588:
				case 0x8812A59C:
				case 0x8812A5B0:
				case 0x8812A5C4:
				case 0x8812A5D8:
				case 0x8812A5F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812A538;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812A540: goto loc_8812A540;
		case 0x8812A588: goto loc_8812A588;
		case 0x8812A59C: goto loc_8812A59C;
		case 0x8812A5B0: goto loc_8812A5B0;
		case 0x8812A5C4: goto loc_8812A5C4;
		case 0x8812A5D8: goto loc_8812A5D8;
		case 0x8812A5F8: goto loc_8812A5F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8812A540;
	__savegprlr_27(ctx, base);
loc_8812A540:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8812A540;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812a5fc
	if (ctx.cr6.eq) goto loc_8812A5FC;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8812A550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812a5fc
	if (ctx.cr6.eq) goto loc_8812A5FC;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8812a5e8
	if (!ctx.cr6.gt) goto loc_8812A5E8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
loc_8812A570:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8812A570;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.current_instruction = 0x8812A578;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812a58c
	if (ctx.cr6.eq) goto loc_8812A58C;
	// bl 0x88125e70
	ctx.lr = 0x8812A588;
	sub_88125E70(ctx, base);
loc_8812A588:
	// stw r30,4(r31)
	ctx.current_instruction = 0x8812A588;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8812A58C:
	// lwz r3,136(r31)
	ctx.current_instruction = 0x8812A58C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812a5a0
	if (ctx.cr6.eq) goto loc_8812A5A0;
	// bl 0x88125e70
	ctx.lr = 0x8812A59C;
	sub_88125E70(ctx, base);
loc_8812A59C:
	// stw r30,136(r31)
	ctx.current_instruction = 0x8812A59C;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_8812A5A0:
	// lwz r3,140(r31)
	ctx.current_instruction = 0x8812A5A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812a5b4
	if (ctx.cr6.eq) goto loc_8812A5B4;
	// bl 0x88125e70
	ctx.lr = 0x8812A5B0;
	sub_88125E70(ctx, base);
loc_8812A5B0:
	// stw r30,140(r31)
	ctx.current_instruction = 0x8812A5B0;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
loc_8812A5B4:
	// lwz r3,144(r31)
	ctx.current_instruction = 0x8812A5B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812a5c8
	if (ctx.cr6.eq) goto loc_8812A5C8;
	// bl 0x88125e70
	ctx.lr = 0x8812A5C4;
	sub_88125E70(ctx, base);
loc_8812A5C4:
	// stw r30,144(r31)
	ctx.current_instruction = 0x8812A5C4;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
loc_8812A5C8:
	// lwz r3,148(r31)
	ctx.current_instruction = 0x8812A5C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812a5dc
	if (ctx.cr6.eq) goto loc_8812A5DC;
	// bl 0x88125e70
	ctx.lr = 0x8812A5D8;
	sub_88125E70(ctx, base);
loc_8812A5D8:
	// stw r30,148(r31)
	ctx.current_instruction = 0x8812A5D8;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
loc_8812A5DC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,152
	ctx.r29.s64 = ctx.r29.s64 + 152;
	// bne 0x8812a570
	if (!ctx.cr0.eq) goto loc_8812A570;
loc_8812A5E8:
	// lwz r3,0(r28)
	ctx.current_instruction = 0x8812A5E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8812a5fc
	if (ctx.cr6.eq) goto loc_8812A5FC;
	// bl 0x88125e70
	ctx.lr = 0x8812A5F8;
	sub_88125E70(ctx, base);
loc_8812A5F8:
	// stw r30,0(r28)
	ctx.current_instruction = 0x8812A5F8;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_8812A5FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812D038) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812D038;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812D038) {
			switch (rex_dispatch_address) {
				case 0x8812D040:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812D038;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812D040: goto loc_8812D040;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8812D040;
	__savegprlr_14(ctx, base);
loc_8812D040:
	// lwz r11,60(r3)
	ctx.current_instruction = 0x8812D040;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r5,25
	ctx.r5.s64 = 25;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8812d054
	if (!ctx.cr6.gt) goto loc_8812D054;
	// li r5,28
	ctx.r5.s64 = 28;
loc_8812D054:
	// stw r5,-232(r1)
	ctx.current_instruction = 0x8812D054;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r5.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8812d06c
	if (ctx.cr6.gt) goto loc_8812D06C;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// addi r10,r10,-13840
	ctx.r10.s64 = ctx.r10.s64 + -13840;
	// b 0x8812d074
	goto loc_8812D074;
loc_8812D06C:
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// addi r10,r10,9600
	ctx.r10.s64 = ctx.r10.s64 + 9600;
loc_8812D074:
	// stw r10,-240(r1)
	ctx.current_instruction = 0x8812D074;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lwz r10,80(r3)
	ctx.current_instruction = 0x8812D07C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,344(r3)
	ctx.current_instruction = 0x8812D084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-216(r1)
	ctx.current_instruction = 0x8812D08C;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r8.u64);
	// lfd f0,-216(r1)
	ctx.current_instruction = 0x8812D090;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6708(r9)
	ctx.current_instruction = 0x8812D098;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bne cr6,0x8812d144
	if (!ctx.cr6.eq) goto loc_8812D144;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r6,0(r11)
	ctx.current_instruction = 0x8812D0B0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// ble cr6,0x8812d2f0
	if (!ctx.cr6.gt) goto loc_8812D2F0;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lwz r10,-240(r1)
	ctx.current_instruction = 0x8812D0BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r8,252(r3)
	ctx.current_instruction = 0x8812D0C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lfs f0,6728(r7)
	ctx.current_instruction = 0x8812D0C8;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 6728);
	ctx.f0.f64 = double(temp.f32);
loc_8812D0CC:
	// lwz r7,0(r10)
	ctx.current_instruction = 0x8812D0CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r4,r8,r7
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r8,-216(r1)
	ctx.current_instruction = 0x8812D0D8;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r8.u64);
	// lfd f13,-216(r1)
	ctx.current_instruction = 0x8812D0DC;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmadds f9,f10,f11,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f0.f64)));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-224(r1)
	ctx.current_instruction = 0x8812D0F0;
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.f8.u64);
	// lwz r4,-220(r1)
	ctx.current_instruction = 0x8812D0F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// stw r4,0(r9)
	ctx.current_instruction = 0x8812D0F8;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r8,252(r3)
	ctx.current_instruction = 0x8812D0FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8812d128
	if (ctx.cr6.gt) goto loc_8812D128;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8812d0cc
	if (ctx.cr6.lt) goto loc_8812D0CC;
	// b 0x8812d2f0
	goto loc_8812D2F0;
loc_8812D128:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r8,r11
	ctx.current_instruction = 0x8812D134;
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r7,340(r3)
	ctx.current_instruction = 0x8812D138;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// stw r9,0(r7)
	ctx.current_instruction = 0x8812D13C;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// b 0x8812d2f0
	goto loc_8812D2F0;
loc_8812D144:
	// lwz r10,244(r3)
	ctx.current_instruction = 0x8812D144;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,-224(r1)
	ctx.current_instruction = 0x8812D150;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,-236(r1)
	ctx.current_instruction = 0x8812D158;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r8.u32);
	// ble cr6,0x8812d2f0
	if (!ctx.cr6.gt) goto loc_8812D2F0;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r26,17
	ctx.r26.s64 = 17;
	// li r31,5
	ctx.r31.s64 = 5;
	// li r30,12
	ctx.r30.s64 = 12;
	// lfs f12,12444(r10)
	ctx.current_instruction = 0x8812D174;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12444);
	ctx.f12.f64 = double(temp.f32);
	// li r5,18
	ctx.r5.s64 = 18;
	// lfs f13,12180(r8)
	ctx.current_instruction = 0x8812D17C;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12180);
	ctx.f13.f64 = double(temp.f32);
	// li r4,34
	ctx.r4.s64 = 34;
	// li r14,46
	ctx.r14.s64 = 46;
	// li r15,63
	ctx.r15.s64 = 63;
	// li r16,86
	ctx.r16.s64 = 86;
	// li r28,102
	ctx.r28.s64 = 102;
	// li r29,123
	ctx.r29.s64 = 123;
	// li r17,149
	ctx.r17.s64 = 149;
	// li r18,179
	ctx.r18.s64 = 179;
	// li r19,221
	ctx.r19.s64 = 221;
	// li r21,512
	ctx.r21.s64 = 512;
	// li r23,15
	ctx.r23.s64 = 15;
	// li r24,11
	ctx.r24.s64 = 11;
	// li r25,37
	ctx.r25.s64 = 37;
	// li r20,74
	ctx.r20.s64 = 74;
	// li r27,256
	ctx.r27.s64 = 256;
	// li r22,128
	ctx.r22.s64 = 128;
loc_8812D1C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	ctx.current_instruction = 0x8812D1C4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,60(r3)
	ctx.current_instruction = 0x8812D1C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r7,252(r3)
	ctx.current_instruction = 0x8812D1CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lwz r10,-236(r1)
	ctx.current_instruction = 0x8812D1D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// andc r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// divw r6,r7,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r7.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bgt cr6,0x8812d718
	if (ctx.cr6.gt) goto loc_8812D718;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r10,80(r3)
	ctx.current_instruction = 0x8812D1F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// ori r7,r8,44100
	ctx.r7.u64 = ctx.r8.u64 | 44100;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8812d45c
	if (ctx.cr6.lt) goto loc_8812D45C;
	// cmpwi cr6,r6,1024
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1024, ctx.xer);
	// bne cr6,0x8812d328
	if (!ctx.cr6.eq) goto loc_8812D328;
	// lwz r8,340(r3)
	ctx.current_instruction = 0x8812D210;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r10,279
	ctx.r10.s64 = 279;
	// std r3,-208(r1)
	ctx.current_instruction = 0x8812D218;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r3.u64);
	// li r3,360
	ctx.r3.s64 = 360;
	// li r7,25
	ctx.r7.s64 = 25;
	// stw r10,-216(r1)
	ctx.current_instruction = 0x8812D224;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// li r6,54
	ctx.r6.s64 = 54;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stwx r26,r9,r8
	ctx.current_instruction = 0x8812D230;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r26.u32);
	// lwz r8,-216(r1)
	ctx.current_instruction = 0x8812D234;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r3,64(r11)
	ctx.current_instruction = 0x8812D238;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// ld r3,-208(r1)
	ctx.current_instruction = 0x8812D23C;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// stw r31,4(r11)
	ctx.current_instruction = 0x8812D240;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r30,8(r11)
	ctx.current_instruction = 0x8812D244;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r5,12(r11)
	ctx.current_instruction = 0x8812D248;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r7,16(r11)
	ctx.current_instruction = 0x8812D24C;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r4,20(r11)
	ctx.current_instruction = 0x8812D250;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r14,24(r11)
	ctx.current_instruction = 0x8812D254;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r14.u32);
	// stw r6,28(r11)
	ctx.current_instruction = 0x8812D258;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r15,32(r11)
	ctx.current_instruction = 0x8812D25C;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r15.u32);
	// stw r16,36(r11)
	ctx.current_instruction = 0x8812D260;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r16.u32);
	// stw r28,40(r11)
	ctx.current_instruction = 0x8812D264;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// stw r29,44(r11)
	ctx.current_instruction = 0x8812D268;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// stw r17,48(r11)
	ctx.current_instruction = 0x8812D26C;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r17.u32);
	// stw r18,52(r11)
	ctx.current_instruction = 0x8812D270;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r18.u32);
	// stw r19,56(r11)
	ctx.current_instruction = 0x8812D274;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r19.u32);
	// stw r8,60(r11)
	ctx.current_instruction = 0x8812D278;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r21,68(r11)
	ctx.current_instruction = 0x8812D27C;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r21.u32);
loc_8812D280:
	// lwz r7,340(r3)
	ctx.current_instruction = 0x8812D280;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r9,r7
	ctx.current_instruction = 0x8812D288;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8812d2c4
	if (!ctx.cr6.gt) goto loc_8812D2C4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8812D298:
	// lwz r7,4(r10)
	ctx.current_instruction = 0x8812D298;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// addze r7,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r6,4(r10)
	ctx.current_instruction = 0x8812D2B0;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// lwz r7,340(r3)
	ctx.current_instruction = 0x8812D2B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// lwzx r6,r9,r7
	ctx.current_instruction = 0x8812D2B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8812d298
	if (ctx.cr6.lt) goto loc_8812D298;
loc_8812D2C4:
	// lwz r10,-224(r1)
	ctx.current_instruction = 0x8812D2C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// lwz r8,-236(r1)
	ctx.current_instruction = 0x8812D2CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,244(r3)
	ctx.current_instruction = 0x8812D2D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// stw r10,-224(r1)
	ctx.current_instruction = 0x8812D2E0;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// stw r6,-236(r1)
	ctx.current_instruction = 0x8812D2E8;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r6.u32);
	// blt cr6,0x8812d1c0
	if (ctx.cr6.lt) goto loc_8812D1C0;
loc_8812D2F0:
	// lwz r10,344(r3)
	ctx.current_instruction = 0x8812D2F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,340(r3)
	ctx.current_instruction = 0x8812D2F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r8,244(r3)
	ctx.current_instruction = 0x8812D2FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,308(r3)
	ctx.current_instruction = 0x8812D304;
	REX_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// lwz r7,0(r9)
	ctx.current_instruction = 0x8812D308;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,304(r3)
	ctx.current_instruction = 0x8812D30C;
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r7.u32);
	// ble cr6,0x8812d324
	if (!ctx.cr6.gt) goto loc_8812D324;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_8812D318:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812d318
	if (ctx.cr6.lt) goto loc_8812D318;
loc_8812D324:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8812D328:
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bne cr6,0x8812d3d0
	if (!ctx.cr6.eq) goto loc_8812D3D0;
	// lwz r10,340(r3)
	ctx.current_instruction = 0x8812D330;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,23
	ctx.r8.s64 = 23;
	// std r5,-208(r1)
	ctx.current_instruction = 0x8812D338;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// li r5,51
	ctx.r5.s64 = 51;
	// std r4,-200(r1)
	ctx.current_instruction = 0x8812D340;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r4.u64);
	// li r4,62
	ctx.r4.s64 = 62;
	// std r3,-192(r1)
	ctx.current_instruction = 0x8812D348;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r3,89
	ctx.r3.s64 = 89;
	// std r9,-184(r1)
	ctx.current_instruction = 0x8812D350;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r9.u64);
	// li r7,31
	ctx.r7.s64 = 31;
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8812D358;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
	// li r10,110
	ctx.r10.s64 = 110;
	// std r31,-176(r1)
	ctx.current_instruction = 0x8812D360;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r31.u64);
	// li r9,139
	ctx.r9.s64 = 139;
	// stw r10,-216(r1)
	ctx.current_instruction = 0x8812D368;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// li r6,43
	ctx.r6.s64 = 43;
	// stw r8,16(r11)
	ctx.current_instruction = 0x8812D370;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r31,4(r11)
	ctx.current_instruction = 0x8812D378;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r31,180
	ctx.r31.s64 = 180;
	// stw r5,32(r11)
	ctx.current_instruction = 0x8812D380;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r4,36(r11)
	ctx.current_instruction = 0x8812D384;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// stw r3,44(r11)
	ctx.current_instruction = 0x8812D388;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
	// stw r9,52(r11)
	ctx.current_instruction = 0x8812D38C;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r31,56(r11)
	ctx.current_instruction = 0x8812D390;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// stw r24,8(r11)
	ctx.current_instruction = 0x8812D394;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// stw r26,12(r11)
	ctx.current_instruction = 0x8812D398;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r7,20(r11)
	ctx.current_instruction = 0x8812D39C;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r25,24(r11)
	ctx.current_instruction = 0x8812D3A0;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
	// stw r6,28(r11)
	ctx.current_instruction = 0x8812D3A4;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r20,40(r11)
	ctx.current_instruction = 0x8812D3A8;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r20.u32);
	// ld r5,-208(r1)
	ctx.current_instruction = 0x8812D3AC;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// ld r4,-200(r1)
	ctx.current_instruction = 0x8812D3B0;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// ld r3,-192(r1)
	ctx.current_instruction = 0x8812D3B4;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// ld r9,-184(r1)
	ctx.current_instruction = 0x8812D3B8;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// stw r27,60(r11)
	ctx.current_instruction = 0x8812D3BC;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r27.u32);
	// ld r31,-176(r1)
	ctx.current_instruction = 0x8812D3C0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lwz r8,-216(r1)
	ctx.current_instruction = 0x8812D3C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r8,48(r11)
	ctx.current_instruction = 0x8812D3C8;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D3D0:
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// bne cr6,0x8812d718
	if (!ctx.cr6.eq) goto loc_8812D718;
	// lwz r10,340(r3)
	ctx.current_instruction = 0x8812D3D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,9
	ctx.r7.s64 = 9;
	// std r5,-176(r1)
	ctx.current_instruction = 0x8812D3E4;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r6,16
	ctx.r6.s64 = 16;
	// std r4,-184(r1)
	ctx.current_instruction = 0x8812D3EC;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// std r3,-192(r1)
	ctx.current_instruction = 0x8812D3F0;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,26
	ctx.r4.s64 = 26;
	// stwx r30,r9,r10
	ctx.current_instruction = 0x8812D3FC;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// li r3,45
	ctx.r3.s64 = 45;
	// stw r8,4(r11)
	ctx.current_instruction = 0x8812D408;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	ctx.current_instruction = 0x8812D40C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// li r8,70
	ctx.r8.s64 = 70;
	// li r7,90
	ctx.r7.s64 = 90;
	// stw r10,-216(r1)
	ctx.current_instruction = 0x8812D418;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r6,16(r11)
	ctx.current_instruction = 0x8812D41C;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r6,-216(r1)
	ctx.current_instruction = 0x8812D424;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r5,20(r11)
	ctx.current_instruction = 0x8812D428;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// stw r4,24(r11)
	ctx.current_instruction = 0x8812D42C;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// stw r3,32(r11)
	ctx.current_instruction = 0x8812D430;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// ld r5,-176(r1)
	ctx.current_instruction = 0x8812D434;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.current_instruction = 0x8812D438;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.current_instruction = 0x8812D43C;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r30,12(r11)
	ctx.current_instruction = 0x8812D440;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r25,28(r11)
	ctx.current_instruction = 0x8812D444;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r25.u32);
	// stw r6,36(r11)
	ctx.current_instruction = 0x8812D448;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r8,40(r11)
	ctx.current_instruction = 0x8812D44C;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// stw r7,44(r11)
	ctx.current_instruction = 0x8812D450;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r22,48(r11)
	ctx.current_instruction = 0x8812D454;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r22.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D45C:
	// cmpwi cr6,r10,32000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32000, ctx.xer);
	// blt cr6,0x8812d644
	if (ctx.cr6.lt) goto loc_8812D644;
	// cmpwi cr6,r6,1024
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1024, ctx.xer);
	// bne cr6,0x8812d518
	if (!ctx.cr6.eq) goto loc_8812D518;
	// std r5,-176(r1)
	ctx.current_instruction = 0x8812D46C;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r8,16
	ctx.r8.s64 = 16;
	// std r4,-184(r1)
	ctx.current_instruction = 0x8812D474;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r7,6
	ctx.r7.s64 = 6;
	// std r3,-192(r1)
	ctx.current_instruction = 0x8812D47C;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r10,340(r3)
	ctx.current_instruction = 0x8812D484;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r4,29
	ctx.r4.s64 = 29;
	// li r3,41
	ctx.r3.s64 = 41;
	// li r6,13
	ctx.r6.s64 = 13;
	// stwx r8,r9,r10
	ctx.current_instruction = 0x8812D494;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// li r8,101
	ctx.r8.s64 = 101;
	// stw r7,4(r11)
	ctx.current_instruction = 0x8812D4A0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,24(r11)
	ctx.current_instruction = 0x8812D4A4;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r7,141
	ctx.r7.s64 = 141;
	// stw r5,12(r11)
	ctx.current_instruction = 0x8812D4AC;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// li r10,304
	ctx.r10.s64 = 304;
	// stw r4,16(r11)
	ctx.current_instruction = 0x8812D4B4;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// li r5,205
	ctx.r5.s64 = 205;
	// stw r3,20(r11)
	ctx.current_instruction = 0x8812D4BC;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// li r4,246
	ctx.r4.s64 = 246;
	// li r3,384
	ctx.r3.s64 = 384;
	// stw r6,8(r11)
	ctx.current_instruction = 0x8812D4C8;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r8,32(r11)
	ctx.current_instruction = 0x8812D4CC;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// li r6,170
	ctx.r6.s64 = 170;
	// li r8,496
	ctx.r8.s64 = 496;
	// stw r10,-216(r1)
	ctx.current_instruction = 0x8812D4D8;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r7,36(r11)
	ctx.current_instruction = 0x8812D4DC;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r7,-216(r1)
	ctx.current_instruction = 0x8812D4E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r5,44(r11)
	ctx.current_instruction = 0x8812D4E8;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stw r4,48(r11)
	ctx.current_instruction = 0x8812D4EC;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// stw r3,56(r11)
	ctx.current_instruction = 0x8812D4F0;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// ld r5,-176(r1)
	ctx.current_instruction = 0x8812D4F4;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.current_instruction = 0x8812D4F8;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.current_instruction = 0x8812D4FC;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r20,28(r11)
	ctx.current_instruction = 0x8812D500;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r20.u32);
	// stw r6,40(r11)
	ctx.current_instruction = 0x8812D504;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// stw r7,52(r11)
	ctx.current_instruction = 0x8812D508;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stw r8,60(r11)
	ctx.current_instruction = 0x8812D50C;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r21,64(r11)
	ctx.current_instruction = 0x8812D510;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r21.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D518:
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bne cr6,0x8812d5b8
	if (!ctx.cr6.eq) goto loc_8812D5B8;
	// lwz r10,340(r3)
	ctx.current_instruction = 0x8812D520;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,10
	ctx.r8.s64 = 10;
	// li r7,20
	ctx.r7.s64 = 20;
	// std r5,-176(r1)
	ctx.current_instruction = 0x8812D52C;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// std r4,-184(r1)
	ctx.current_instruction = 0x8812D530;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r5,50
	ctx.r5.s64 = 50;
	// std r3,-192(r1)
	ctx.current_instruction = 0x8812D538;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r4,70
	ctx.r4.s64 = 70;
	// std r9,-200(r1)
	ctx.current_instruction = 0x8812D540;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r9.u64);
	// li r3,85
	ctx.r3.s64 = 85;
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8812D548;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
	// li r10,152
	ctx.r10.s64 = 152;
	// li r9,192
	ctx.r9.s64 = 192;
	// stw r8,8(r11)
	ctx.current_instruction = 0x8812D554;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r10,-216(r1)
	ctx.current_instruction = 0x8812D55C;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// li r8,248
	ctx.r8.s64 = 248;
	// stw r7,16(r11)
	ctx.current_instruction = 0x8812D564;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r7,-216(r1)
	ctx.current_instruction = 0x8812D568;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r5,28(r11)
	ctx.current_instruction = 0x8812D570;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r4,32(r11)
	ctx.current_instruction = 0x8812D574;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// stw r3,36(r11)
	ctx.current_instruction = 0x8812D578;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// stw r9,52(r11)
	ctx.current_instruction = 0x8812D57C;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// ld r5,-176(r1)
	ctx.current_instruction = 0x8812D580;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.current_instruction = 0x8812D584;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.current_instruction = 0x8812D588;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// ld r9,-200(r1)
	ctx.current_instruction = 0x8812D58C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// stw r31,4(r11)
	ctx.current_instruction = 0x8812D590;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r23,12(r11)
	ctx.current_instruction = 0x8812D594;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r23.u32);
	// stw r6,20(r11)
	ctx.current_instruction = 0x8812D598;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r25,24(r11)
	ctx.current_instruction = 0x8812D59C;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
	// stw r28,40(r11)
	ctx.current_instruction = 0x8812D5A0;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// stw r29,44(r11)
	ctx.current_instruction = 0x8812D5A4;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// stw r7,48(r11)
	ctx.current_instruction = 0x8812D5A8;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r8,56(r11)
	ctx.current_instruction = 0x8812D5AC;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// stw r27,60(r11)
	ctx.current_instruction = 0x8812D5B0;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r27.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D5B8:
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// bne cr6,0x8812d718
	if (!ctx.cr6.eq) goto loc_8812D718;
	// std r5,-176(r1)
	ctx.current_instruction = 0x8812D5C0;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// std r4,-184(r1)
	ctx.current_instruction = 0x8812D5C8;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r7,9
	ctx.r7.s64 = 9;
	// std r3,-192(r1)
	ctx.current_instruction = 0x8812D5D0;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r10,340(r3)
	ctx.current_instruction = 0x8812D5D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,25
	ctx.r4.s64 = 25;
	// li r3,35
	ctx.r3.s64 = 35;
	// stwx r24,r9,r10
	ctx.current_instruction = 0x8812D5E8;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r24.u32);
	// li r10,51
	ctx.r10.s64 = 51;
	// stw r8,4(r11)
	ctx.current_instruction = 0x8812D5F0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// li r8,76
	ctx.r8.s64 = 76;
	// stw r7,8(r11)
	ctx.current_instruction = 0x8812D5F8;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// li r7,96
	ctx.r7.s64 = 96;
	// stw r6,12(r11)
	ctx.current_instruction = 0x8812D600;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// li r6,124
	ctx.r6.s64 = 124;
	// stw r5,16(r11)
	ctx.current_instruction = 0x8812D608;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r10,-216(r1)
	ctx.current_instruction = 0x8812D60C;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r5,-216(r1)
	ctx.current_instruction = 0x8812D614;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r4,20(r11)
	ctx.current_instruction = 0x8812D618;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r3,24(r11)
	ctx.current_instruction = 0x8812D61C;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// stw r5,28(r11)
	ctx.current_instruction = 0x8812D620;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// ld r5,-176(r1)
	ctx.current_instruction = 0x8812D624;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.current_instruction = 0x8812D628;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.current_instruction = 0x8812D62C;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r8,32(r11)
	ctx.current_instruction = 0x8812D630;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r7,36(r11)
	ctx.current_instruction = 0x8812D634;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// stw r6,40(r11)
	ctx.current_instruction = 0x8812D638;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// stw r22,44(r11)
	ctx.current_instruction = 0x8812D63C;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r22.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D644:
	// cmpwi cr6,r10,22050
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22050, ctx.xer);
	// blt cr6,0x8812d718
	if (ctx.cr6.lt) goto loc_8812D718;
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bne cr6,0x8812d6a4
	if (!ctx.cr6.eq) goto loc_8812D6A4;
	// lwz r8,340(r3)
	ctx.current_instruction = 0x8812D654;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,25
	ctx.r6.s64 = 25;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stwx r7,r9,r8
	ctx.current_instruction = 0x8812D664;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// stw r31,4(r11)
	ctx.current_instruction = 0x8812D668;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r30,8(r11)
	ctx.current_instruction = 0x8812D66C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r5,12(r11)
	ctx.current_instruction = 0x8812D670;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r6,16(r11)
	ctx.current_instruction = 0x8812D674;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stw r4,20(r11)
	ctx.current_instruction = 0x8812D678;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r14,24(r11)
	ctx.current_instruction = 0x8812D67C;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r14.u32);
	// stw r15,28(r11)
	ctx.current_instruction = 0x8812D680;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r15.u32);
	// stw r16,32(r11)
	ctx.current_instruction = 0x8812D684;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r16.u32);
	// stw r28,36(r11)
	ctx.current_instruction = 0x8812D688;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r28.u32);
	// stw r29,40(r11)
	ctx.current_instruction = 0x8812D68C;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// stw r17,44(r11)
	ctx.current_instruction = 0x8812D690;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r17.u32);
	// stw r18,48(r11)
	ctx.current_instruction = 0x8812D694;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r18.u32);
	// stw r19,52(r11)
	ctx.current_instruction = 0x8812D698;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r19.u32);
	// stw r27,56(r11)
	ctx.current_instruction = 0x8812D69C;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r27.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D6A4:
	// cmpwi cr6,r6,256
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 256, ctx.xer);
	// bne cr6,0x8812d718
	if (!ctx.cr6.eq) goto loc_8812D718;
	// lwz r10,340(r3)
	ctx.current_instruction = 0x8812D6AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// li r8,10
	ctx.r8.s64 = 10;
	// std r5,-176(r1)
	ctx.current_instruction = 0x8812D6B4;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// li r5,43
	ctx.r5.s64 = 43;
	// std r4,-184(r1)
	ctx.current_instruction = 0x8812D6BC;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r4.u64);
	// li r4,62
	ctx.r4.s64 = 62;
	// std r3,-192(r1)
	ctx.current_instruction = 0x8812D6C4;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// li r3,89
	ctx.r3.s64 = 89;
	// li r7,23
	ctx.r7.s64 = 23;
	// stwx r8,r9,r10
	ctx.current_instruction = 0x8812D6D0;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// li r6,31
	ctx.r6.s64 = 31;
	// li r8,110
	ctx.r8.s64 = 110;
	// stw r5,24(r11)
	ctx.current_instruction = 0x8812D6DC;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// stw r4,28(r11)
	ctx.current_instruction = 0x8812D6E0;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r3,32(r11)
	ctx.current_instruction = 0x8812D6E8;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// ld r5,-176(r1)
	ctx.current_instruction = 0x8812D6EC;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// ld r4,-184(r1)
	ctx.current_instruction = 0x8812D6F0;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// ld r3,-192(r1)
	ctx.current_instruction = 0x8812D6F4;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// stw r31,4(r11)
	ctx.current_instruction = 0x8812D6F8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r24,8(r11)
	ctx.current_instruction = 0x8812D6FC;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// stw r26,12(r11)
	ctx.current_instruction = 0x8812D700;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r7,16(r11)
	ctx.current_instruction = 0x8812D704;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r6,20(r11)
	ctx.current_instruction = 0x8812D708;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r8,36(r11)
	ctx.current_instruction = 0x8812D70C;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r22,40(r11)
	ctx.current_instruction = 0x8812D710;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r22.u32);
	// b 0x8812d280
	goto loc_8812D280;
loc_8812D718:
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lwz r7,-240(r1)
	ctx.current_instruction = 0x8812D71C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r10,-168(r1)
	ctx.current_instruction = 0x8812D724;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r10.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfd f0,-168(r1)
	ctx.current_instruction = 0x8812D734;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
loc_8812D744:
	// lwz r10,60(r3)
	ctx.current_instruction = 0x8812D744;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8812d788
	if (ctx.cr6.gt) goto loc_8812D788;
	// lwz r10,4(r7)
	ctx.current_instruction = 0x8812D754;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// std r10,-160(r1)
	ctx.current_instruction = 0x8812D75C;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r10.u64);
	// lfd f10,-160(r1)
	ctx.current_instruction = 0x8812D760;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f8,f0,f13
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-176(r1)
	ctx.current_instruction = 0x8812D778;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f5.u64);
	// lwz r10,-172(r1)
	ctx.current_instruction = 0x8812D77C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8812d7b4
	goto loc_8812D7B4;
loc_8812D788:
	// lwzu r10,4(r7)
	ctx.current_instruction = 0x8812D788;
	ea = 4 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// lwz r14,80(r3)
	ctx.current_instruction = 0x8812D78C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// divwu r10,r10,r14
	ctx.r10.u64 = uint32_t(ctx.r14.u32 ? ctx.r10.u32 / ctx.r14.u32 : 0);
	// twllei r14,0
	if (ctx.r14.s32 == 0 || ctx.r14.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// srawi r14,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r14.s64 = ctx.r10.s32 >> 2;
	// addze r14,r14
	temp.s64 = ctx.r14.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r14.u32;
	ctx.r14.s64 = temp.s64;
	// rlwinm r14,r14,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r14,r14,r10
	ctx.r14.u64 = ctx.r10.u64 - ctx.r14.u64;
	// subf r10,r14,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r14.u64;
loc_8812D7B4:
	// lwz r14,0(r5)
	ctx.current_instruction = 0x8812D7B4;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r10,r14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x8812d7c8
	if (!ctx.cr6.gt) goto loc_8812D7C8;
	// stwu r10,4(r5)
	ctx.current_instruction = 0x8812D7C0;
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8812D7C8:
	// lwz r10,-232(r1)
	ctx.current_instruction = 0x8812D7C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8812d7e8
	if (!ctx.cr6.lt) goto loc_8812D7E8;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// lwz r14,0(r5)
	ctx.current_instruction = 0x8812D7D8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r14,r10
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812d744
	if (ctx.cr6.lt) goto loc_8812D744;
loc_8812D7E8:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r14,46
	ctx.r14.s64 = 46;
	// li r4,34
	ctx.r4.s64 = 34;
	// stw r6,-4(r7)
	ctx.current_instruction = 0x8812D804;
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r6.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r8,340(r3)
	ctx.current_instruction = 0x8812D80C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// stwx r10,r9,r8
	ctx.current_instruction = 0x8812D810;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x8812d2c4
	goto loc_8812D2C4;
}

DEFINE_REX_FUNC(sub_88143B78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88143B78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88143B78) {
			switch (rex_dispatch_address) {
				case 0x88143B80:
				case 0x88143C4C:
				case 0x88143C54:
				case 0x88143C5C:
				case 0x88143C64:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88143B78;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88143B80: goto loc_88143B80;
		case 0x88143C4C: goto loc_88143C4C;
		case 0x88143C54: goto loc_88143C54;
		case 0x88143C5C: goto loc_88143C5C;
		case 0x88143C64: goto loc_88143C64;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88143B80;
	__savegprlr_27(ctx, base);
loc_88143B80:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88143B80;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x88143B84;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88143c78
	if (ctx.cr6.eq) goto loc_88143C78;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_88143BA4:
	// lwz r8,320(r31)
	ctx.current_instruction = 0x88143BA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r7,r30,1776
	ctx.r7.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(1776));
	// lhz r11,210(r31)
	ctx.current_instruction = 0x88143BAC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 210);
	// lhz r9,34(r31)
	ctx.current_instruction = 0x88143BB0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// stw r11,92(r1)
	ctx.current_instruction = 0x88143BB4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,88(r1)
	ctx.current_instruction = 0x88143BC8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r5,56(r8)
	ctx.current_instruction = 0x88143BCC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// lhz r6,0(r10)
	ctx.current_instruction = 0x88143BD0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lwzx r4,r7,r28
	ctx.current_instruction = 0x88143BD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// sth r27,0(r10)
	ctx.current_instruction = 0x88143BD8;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r27.u16);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lwz r3,356(r31)
	ctx.current_instruction = 0x88143BE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r5,80(r1)
	ctx.current_instruction = 0x88143BE8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r4,84(r1)
	ctx.current_instruction = 0x88143BEC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwzx r10,r7,r3
	ctx.current_instruction = 0x88143BF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88143c64
	if (!ctx.cr6.lt) goto loc_88143C64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// blt cr6,0x88143c0c
	if (ctx.cr6.lt) goto loc_88143C0C;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_88143C0C:
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88143C0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88143cc0
	if (ctx.cr6.gt) goto loc_88143CC0;
	// lwz r11,96(r31)
	ctx.current_instruction = 0x88143C18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x88143c60
	if (ctx.cr6.eq) goto loc_88143C60;
	// cmpwi cr6,r11,78
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 78, ctx.xer);
	// beq cr6,0x88143c58
	if (ctx.cr6.eq) goto loc_88143C58;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x88143c50
	if (ctx.cr6.eq) goto loc_88143C50;
	// bl 0x881438a8
	ctx.lr = 0x88143C4C;
	sub_881438A8(ctx, base);
loc_88143C4C:
	// b 0x88143c64
	goto loc_88143C64;
loc_88143C50:
	// bl 0x88143980
	ctx.lr = 0x88143C54;
	sub_88143980(ctx, base);
loc_88143C54:
	// b 0x88143c64
	goto loc_88143C64;
loc_88143C58:
	// bl 0x88143a30
	ctx.lr = 0x88143C5C;
	sub_88143A30(ctx, base);
loc_88143C5C:
	// b 0x88143c64
	goto loc_88143C64;
loc_88143C60:
	// bl 0x88143ae0
	ctx.lr = 0x88143C64;
	sub_88143AE0(ctx, base);
loc_88143C64:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lhz r10,34(r31)
	ctx.current_instruction = 0x88143C68;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88143ba4
	if (ctx.cr6.lt) goto loc_88143BA4;
loc_88143C78:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88143C78;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lhz r9,0(r29)
	ctx.current_instruction = 0x88143C7C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88143ca4
	if (ctx.cr6.eq) goto loc_88143CA4;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_88143C90:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88143c90
	if (ctx.cr6.lt) goto loc_88143C90;
loc_88143CA4:
	// lhz r10,210(r31)
	ctx.current_instruction = 0x88143CA4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 210);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,210(r31)
	ctx.current_instruction = 0x88143CB4;
	REX_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88143CC0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88148720) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88148720;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88148720) {
			switch (rex_dispatch_address) {
				case 0x8814874C:
				case 0x88148760:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88148720;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814874C: goto loc_8814874C;
		case 0x88148760: goto loc_88148760;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88148724;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88148728;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8814872C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88148730;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.current_instruction = 0x88148738;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88148750
	if (ctx.cr6.eq) goto loc_88148750;
	// bl 0x88125e70
	ctx.lr = 0x8814874C;
	sub_88125E70(ctx, base);
loc_8814874C:
	// stw r30,8(r31)
	ctx.current_instruction = 0x8814874C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_88148750:
	// lwz r3,12(r31)
	ctx.current_instruction = 0x88148750;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88148764
	if (ctx.cr6.eq) goto loc_88148764;
	// bl 0x88125e70
	ctx.lr = 0x88148760;
	sub_88125E70(ctx, base);
loc_88148760:
	// stw r30,12(r31)
	ctx.current_instruction = 0x88148760;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_88148764:
	// stw r30,0(r31)
	ctx.current_instruction = 0x88148764;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	ctx.current_instruction = 0x88148768;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	ctx.current_instruction = 0x8814876C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	ctx.current_instruction = 0x88148770;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	ctx.current_instruction = 0x88148774;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814877C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88148784;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88148788;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88149950) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88149950);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88149950;
	ctx.current_instruction = 0x88149950;
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x88149950;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x88149954;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// sth r9,-34(r1)
	ctx.current_instruction = 0x88149958;
	REX_STORE_U16(ctx.r1.u32 + -34, ctx.r9.u16);
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// addi r30,r1,-48
	ctx.r30.s64 = ctx.r1.s64 + -48;
	// sth r8,-18(r1)
	ctx.current_instruction = 0x88149964;
	REX_STORE_U16(ctx.r1.u32 + -18, ctx.r8.u16);
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r9,16
	ctx.r9.s64 = 16;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	// vspltish v2,3
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_set1_epi16(short(0x3)));
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lvx128 v63,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v60,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v59,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v56,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v58,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v55,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v62,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v10,v63,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// vperm128 v5,v61,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vmrghb v12,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v4,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v9,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v31,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsplth v13,v4,7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_set1_epi16(short(0x100))));
	// vsplth v30,v31,7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_set1_epi16(short(0x100))));
	// vmrghb v4,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubuhm v29,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v1,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v27,v28,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v1,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
loc_88149A1C:
	// lvx128 v63,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v28,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v27,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v26,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v54,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vperm128 v30,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor v11,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v9,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vperm128 v4,v54,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor v8,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor v6,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vmrghb v5,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v31,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrglb v3,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v30,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v29,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v20,v26,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v25,v31,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v30,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v29,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v28,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v22,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v21,v30,v24
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v19,v29,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v17,v27,v3
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v16,v22,v1
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v15,v21,v1
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v14,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vadduhm v31,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v30,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v29,v0,v17
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vadduhm v28,v14,v31
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v27,v30,v16
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v26,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsrah v25,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bdnz 0x88149a1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88149A1C;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88149AD8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88149ADC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8814CC58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814CC58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814CC58) {
			switch (rex_dispatch_address) {
				case 0x8814CC60:
				case 0x8814CC88:
				case 0x8814CCA4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814CC58;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814CC60: goto loc_8814CC60;
		case 0x8814CC88: goto loc_8814CC88;
		case 0x8814CCA4: goto loc_8814CCA4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814CC60;
	__savegprlr_28(ctx, base);
loc_8814CC60:
	// stwu r1,-896(r1)
	ctx.current_instruction = 0x8814CC60;
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x8814bf48
	ctx.lr = 0x8814CC88;
	sub_8814BF48(ctx, base);
loc_8814CC88:
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.u64 = static_cast<uint64_t>(8) - ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8814c750
	ctx.lr = 0x8814CCA4;
	sub_8814C750(ctx, base);
loc_8814CCA4:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814D138) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814D138;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814D138) {
			switch (rex_dispatch_address) {
				case 0x8814D174:
				case 0x8814D194:
				case 0x8814D19C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814D138;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814D174: goto loc_8814D174;
		case 0x8814D194: goto loc_8814D194;
		case 0x8814D19C: goto loc_8814D19C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8814D13C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8814D140;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8814D144;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814d188
	if (ctx.cr6.eq) goto loc_8814D188;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8814D154;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8814d188
	if (ctx.cr6.lt) goto loc_8814D188;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8814D160;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8814d188
	if (!ctx.cr6.lt) goto loc_8814D188;
	// lwz r3,12(r3)
	ctx.current_instruction = 0x8814D16C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x88061460
	ctx.lr = 0x8814D174;
	sub_88061460(ctx, base);
loc_8814D174:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814D178;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8814D180;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8814D188:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r3)
	ctx.current_instruction = 0x8814D18C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x88061460
	ctx.lr = 0x8814D194;
	sub_88061460(ctx, base);
loc_8814D194:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881ed200
	ctx.lr = 0x8814D19C;
	sub_881ED200(ctx, base);
loc_8814D19C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814D1A0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8814D1A8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8814FC60) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8814FC60);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814FC60;
	ctx.current_instruction = 0x8814FC60;
	// lwz r10,3448(r3)
	ctx.current_instruction = 0x8814FC60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3448);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8814fc7c
	if (ctx.cr6.eq) goto loc_8814FC7C;
	// lwz r4,3764(r11)
	ctx.current_instruction = 0x8814FC70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3764);
	// addi r3,r3,3772
	ctx.r3.s64 = ctx.r3.s64 + 3772;
	// b 0x881715c8
	sub_881715C8(ctx, base);
	return;
loc_8814FC7C:
	// lwz r10,15628(r11)
	ctx.current_instruction = 0x8814FC7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 15628);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8814fca0
	if (ctx.cr6.eq) goto loc_8814FCA0;
	// lwz r10,3432(r11)
	ctx.current_instruction = 0x8814FC88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8814fca0
	if (ctx.cr6.eq) goto loc_8814FCA0;
	// lwz r4,3760(r11)
	ctx.current_instruction = 0x8814FC94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3760);
	// addi r3,r11,3772
	ctx.r3.s64 = ctx.r11.s64 + 3772;
	// b 0x881715c8
	sub_881715C8(ctx, base);
	return;
loc_8814FCA0:
	// lwz r10,3432(r11)
	ctx.current_instruction = 0x8814FCA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3432);
	// addi r3,r11,3772
	ctx.r3.s64 = ctx.r11.s64 + 3772;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8814fcb8
	if (ctx.cr6.eq) goto loc_8814FCB8;
	// lwz r4,3744(r11)
	ctx.current_instruction = 0x8814FCB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3744);
	// b 0x881715c8
	sub_881715C8(ctx, base);
	return;
loc_8814FCB8:
	// lwz r4,3748(r11)
	ctx.current_instruction = 0x8814FCB8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 3748);
	// b 0x881715c8
	sub_881715C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88150460) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88150460;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88150460) {
			switch (rex_dispatch_address) {
				case 0x88150468:
				case 0x881504B4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88150460;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88150468: goto loc_88150468;
		case 0x881504B4: goto loc_881504B4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88150468;
	__savegprlr_28(ctx, base);
loc_88150468:
	// stfd f30,-56(r1)
	ctx.current_instruction = 0x88150468;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	ctx.current_instruction = 0x8815046C;
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88150470;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,3376(r3)
	ctx.current_instruction = 0x88150478;
	REX_STORE_U32(ctx.r3.u32 + 3376, ctx.r4.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// fctiwz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stw r30,22132(r3)
	ctx.current_instruction = 0x88150484;
	REX_STORE_U32(ctx.r3.u32 + 22132, ctx.r30.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stfd f0,80(r1)
	ctx.current_instruction = 0x88150490;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r8,80(r3)
	ctx.current_instruction = 0x88150498;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x8815049C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x8815bd48
	ctx.lr = 0x881504B4;
	sub_8815BD48(ctx, base);
loc_881504B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881505b8
	if (!ctx.cr6.eq) goto loc_881505B8;
	// stfs f31,3704(r31)
	ctx.current_instruction = 0x881504BC;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 3704, temp.u32);
	// stw r29,3696(r31)
	ctx.current_instruction = 0x881504C0;
	REX_STORE_U32(ctx.r31.u32 + 3696, ctx.r29.u32);
	// stfs f30,3708(r31)
	ctx.current_instruction = 0x881504C4;
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 3708, temp.u32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// sth r30,3740(r31)
	ctx.current_instruction = 0x881504CC;
	REX_STORE_U16(ctx.r31.u32 + 3740, ctx.r30.u16);
	// stw r28,3700(r31)
	ctx.current_instruction = 0x881504D0;
	REX_STORE_U32(ctx.r31.u32 + 3700, ctx.r28.u32);
	// ble cr6,0x881504e0
	if (!ctx.cr6.gt) goto loc_881504E0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x881504ec
	goto loc_881504EC;
loc_881504E0:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bge cr6,0x881504f0
	if (!ctx.cr6.lt) goto loc_881504F0;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_881504EC:
	// stw r11,3700(r31)
	ctx.current_instruction = 0x881504EC;
	REX_STORE_U32(ctx.r31.u32 + 3700, ctx.r11.u32);
loc_881504F0:
	// lwz r11,228(r1)
	ctx.current_instruction = 0x881504F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,15568(r31)
	ctx.current_instruction = 0x881504F8;
	REX_STORE_U32(ctx.r31.u32 + 15568, ctx.r11.u32);
	// beq cr6,0x8815050c
	if (ctx.cr6.eq) goto loc_8815050C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8815050c
	if (ctx.cr6.eq) goto loc_8815050C;
	// stw r30,15568(r31)
	ctx.current_instruction = 0x88150508;
	REX_STORE_U32(ctx.r31.u32 + 15568, ctx.r30.u32);
loc_8815050C:
	// lwz r9,204(r31)
	ctx.current_instruction = 0x8815050C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r8,156(r31)
	ctx.current_instruction = 0x88150510;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r7,208(r31)
	ctx.current_instruction = 0x88150514;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,160(r31)
	ctx.current_instruction = 0x8815051C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// lwz r10,212(r31)
	ctx.current_instruction = 0x88150524;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,216(r31)
	ctx.current_instruction = 0x8815052C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// stw r8,88(r31)
	ctx.current_instruction = 0x88150530;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// stw r9,96(r31)
	ctx.current_instruction = 0x88150534;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r11,92(r31)
	ctx.current_instruction = 0x88150538;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r7,108(r31)
	ctx.current_instruction = 0x8815053C;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// stw r10,104(r31)
	ctx.current_instruction = 0x88150540;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r4,116(r31)
	ctx.current_instruction = 0x88150544;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// stw r6,100(r31)
	ctx.current_instruction = 0x88150548;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// stw r5,112(r31)
	ctx.current_instruction = 0x8815054C;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r5.u32);
	// bne cr6,0x88150560
	if (!ctx.cr6.eq) goto loc_88150560;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x88150564
	if (ctx.cr6.eq) goto loc_88150564;
loc_88150560:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_88150564:
	// lwz r11,180(r31)
	ctx.current_instruction = 0x88150564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// lwz r8,188(r31)
	ctx.current_instruction = 0x8815056C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r10,120(r31)
	ctx.current_instruction = 0x88150578;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// stw r30,3496(r31)
	ctx.current_instruction = 0x88150580;
	REX_STORE_U32(ctx.r31.u32 + 3496, ctx.r30.u32);
	// addi r9,r9,23032
	ctx.r9.s64 = ctx.r9.s64 + 23032;
	// stw r11,128(r31)
	ctx.current_instruction = 0x88150588;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// addi r8,r7,24056
	ctx.r8.s64 = ctx.r7.s64 + 24056;
	// stw r10,132(r31)
	ctx.current_instruction = 0x88150590;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// mullw r6,r10,r11
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r30,3500(r31)
	ctx.current_instruction = 0x88150598;
	REX_STORE_U32(ctx.r31.u32 + 3500, ctx.r30.u32);
	// stw r30,3504(r31)
	ctx.current_instruction = 0x8815059C;
	REX_STORE_U32(ctx.r31.u32 + 3504, ctx.r30.u32);
	// stw r6,124(r31)
	ctx.current_instruction = 0x881505A0;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
	// addi r5,r9,384
	ctx.r5.s64 = ctx.r9.s64 + 384;
	// addi r4,r8,40
	ctx.r4.s64 = ctx.r8.s64 + 40;
	// stw r5,256(r31)
	ctx.current_instruction = 0x881505AC;
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,260(r31)
	ctx.current_instruction = 0x881505B4;
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r4.u32);
loc_881505B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.current_instruction = 0x881505BC;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.current_instruction = 0x881505C0;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88156260) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88156260;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88156260) {
			switch (rex_dispatch_address) {
				case 0x881562B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88156260;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881562B0: goto loc_881562B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88156264;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88156268;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8815626C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r5,132(r1)
	ctx.current_instruction = 0x88156274;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,28(r3)
	ctx.current_instruction = 0x8815627C;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// li r9,-16
	ctx.r9.s64 = -16;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// std r11,0(r3)
	ctx.current_instruction = 0x88156288;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r9,8(r3)
	ctx.current_instruction = 0x88156290;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,20(r3)
	ctx.current_instruction = 0x88156294;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,16(r3)
	ctx.current_instruction = 0x8815629C;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// beq cr6,0x881562b4
	if (ctx.cr6.eq) goto loc_881562B4;
	// stw r11,36(r3)
	ctx.current_instruction = 0x881562A4;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// bl 0x88155ec8
	ctx.lr = 0x881562B0;
	sub_88155EC8(ctx, base);
loc_881562B0:
	// lwz r4,12(r3)
	ctx.current_instruction = 0x881562B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_881562B4:
	// lwz r11,16(r3)
	ctx.current_instruction = 0x881562B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88156300
	if (ctx.cr6.gt) goto loc_88156300;
loc_881562C0:
	// lwz r11,8(r3)
	ctx.current_instruction = 0x881562C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bgt cr6,0x88156300
	if (ctx.cr6.gt) goto loc_88156300;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lbz r8,0(r4)
	ctx.current_instruction = 0x881562D0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// subfic r7,r11,40
	ctx.xer.ca = ctx.r11.u32 <= 40;
	ctx.r7.u64 = static_cast<uint64_t>(40) - ctx.r11.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881562D8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// stw r9,8(r3)
	ctx.current_instruction = 0x881562DC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// sld r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r6.u8 & 0x7F));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r5,0(r3)
	ctx.current_instruction = 0x881562F0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// lwz r11,16(r3)
	ctx.current_instruction = 0x881562F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881562c0
	if (!ctx.cr6.gt) goto loc_881562C0;
loc_88156300:
	// stw r4,12(r3)
	ctx.current_instruction = 0x88156300;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r31,24(r3)
	ctx.current_instruction = 0x88156304;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8815630C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88156314;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815AD38) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8815AD38);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815AD38;
	ctx.current_instruction = 0x8815AD38;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,21660(r3)
	ctx.current_instruction = 0x8815AD44;
	REX_STORE_U32(ctx.r3.u32 + 21660, ctx.r11.u32);
	// stw r11,3468(r3)
	ctx.current_instruction = 0x8815AD48;
	REX_STORE_U32(ctx.r3.u32 + 3468, ctx.r11.u32);
	// stw r11,3480(r3)
	ctx.current_instruction = 0x8815AD4C;
	REX_STORE_U32(ctx.r3.u32 + 3480, ctx.r11.u32);
	// stw r11,3476(r3)
	ctx.current_instruction = 0x8815AD50;
	REX_STORE_U32(ctx.r3.u32 + 3476, ctx.r11.u32);
	// stw r11,21544(r3)
	ctx.current_instruction = 0x8815AD54;
	REX_STORE_U32(ctx.r3.u32 + 21544, ctx.r11.u32);
	// stw r11,21868(r3)
	ctx.current_instruction = 0x8815AD58;
	REX_STORE_U32(ctx.r3.u32 + 21868, ctx.r11.u32);
	// stw r10,21676(r3)
	ctx.current_instruction = 0x8815AD5C;
	REX_STORE_U32(ctx.r3.u32 + 21676, ctx.r10.u32);
	// stw r11,3488(r3)
	ctx.current_instruction = 0x8815AD60;
	REX_STORE_U32(ctx.r3.u32 + 3488, ctx.r11.u32);
	// stw r9,21576(r3)
	ctx.current_instruction = 0x8815AD64;
	REX_STORE_U32(ctx.r3.u32 + 21576, ctx.r9.u32);
	// stw r11,408(r3)
	ctx.current_instruction = 0x8815AD68;
	REX_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// stw r11,21664(r3)
	ctx.current_instruction = 0x8815AD6C;
	REX_STORE_U32(ctx.r3.u32 + 21664, ctx.r11.u32);
	// stw r11,21672(r3)
	ctx.current_instruction = 0x8815AD70;
	REX_STORE_U32(ctx.r3.u32 + 21672, ctx.r11.u32);
	// stw r11,21668(r3)
	ctx.current_instruction = 0x8815AD74;
	REX_STORE_U32(ctx.r3.u32 + 21668, ctx.r11.u32);
	// stw r11,4020(r3)
	ctx.current_instruction = 0x8815AD78;
	REX_STORE_U32(ctx.r3.u32 + 4020, ctx.r11.u32);
	// stw r11,21784(r3)
	ctx.current_instruction = 0x8815AD7C;
	REX_STORE_U32(ctx.r3.u32 + 21784, ctx.r11.u32);
	// stw r11,340(r3)
	ctx.current_instruction = 0x8815AD80;
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// stw r11,332(r3)
	ctx.current_instruction = 0x8815AD84;
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815B9F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815B9F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815B9F8) {
			switch (rex_dispatch_address) {
				case 0x8815BA14:
				case 0x8815BA2C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815B9F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815BA14: goto loc_8815BA14;
		case 0x8815BA2C: goto loc_8815BA2C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8815B9FC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8815BA00;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8815BA04;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bl 0x88050340
	ctx.lr = 0x8815BA14;
	sub_88050340(ctx, base);
loc_8815BA14:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815ba5c
	if (ctx.cr6.eq) goto loc_8815BA5C;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bl 0x88050370
	ctx.lr = 0x8815BA2C;
	sub_88050370(ctx, base);
loc_8815BA2C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8815ba58
	if (ctx.cr6.eq) goto loc_8815BA58;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r7,r11,-11680
	ctx.r7.s64 = ctx.r11.s64 + -11680;
loc_8815BA3C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
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
	// bne 0x8815ba3c
	if (!ctx.cr0.eq) goto loc_8815BA3C;
loc_8815BA58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8815BA5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8815BA60;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8815BA68;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815D720) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815D720;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815D720) {
			switch (rex_dispatch_address) {
				case 0x8815D728:
				case 0x8815D73C:
				case 0x8815D774:
				case 0x8815D78C:
				case 0x8815D7A0:
				case 0x8815D7B8:
				case 0x8815D7CC:
				case 0x8815D7F0:
				case 0x8815D808:
				case 0x8815D814:
				case 0x8815D81C:
				case 0x8815D824:
				case 0x8815D860:
				case 0x8815D878:
				case 0x8815D89C:
				case 0x8815D8B8:
				case 0x8815D8E0:
				case 0x8815D970:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815D720;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815D728: goto loc_8815D728;
		case 0x8815D73C: goto loc_8815D73C;
		case 0x8815D774: goto loc_8815D774;
		case 0x8815D78C: goto loc_8815D78C;
		case 0x8815D7A0: goto loc_8815D7A0;
		case 0x8815D7B8: goto loc_8815D7B8;
		case 0x8815D7CC: goto loc_8815D7CC;
		case 0x8815D7F0: goto loc_8815D7F0;
		case 0x8815D808: goto loc_8815D808;
		case 0x8815D814: goto loc_8815D814;
		case 0x8815D81C: goto loc_8815D81C;
		case 0x8815D824: goto loc_8815D824;
		case 0x8815D860: goto loc_8815D860;
		case 0x8815D878: goto loc_8815D878;
		case 0x8815D89C: goto loc_8815D89C;
		case 0x8815D8B8: goto loc_8815D8B8;
		case 0x8815D8E0: goto loc_8815D8E0;
		case 0x8815D970: goto loc_8815D970;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8815D728;
	__savegprlr_22(ctx, base);
loc_8815D728:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8815D728;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// bl 0x88052e38
	ctx.lr = 0x8815D73C;
	sub_88052E38(ctx, base);
loc_8815D73C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815d824
	if (ctx.cr6.eq) goto loc_8815D824;
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
loc_8815D75C:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x8815D75C;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8815d75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8815D75C;
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c4640
	ctx.lr = 0x8815D774;
	sub_881C4640(ctx, base);
loc_8815D774:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815d81c
	if (ctx.cr6.eq) goto loc_8815D81C;
	// addi r26,r29,16
	ctx.r26.s64 = ctx.r29.s64 + 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c4640
	ctx.lr = 0x8815D78C;
	sub_881C4640(ctx, base);
loc_8815D78C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815d814
	if (ctx.cr6.eq) goto loc_8815D814;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8815b9f8
	ctx.lr = 0x8815D7A0;
	sub_8815B9F8(ctx, base);
loc_8815D7A0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815d7b8
	if (ctx.cr6.eq) goto loc_8815D7B8;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8815D7B8;
	sub_88052D90(ctx, base);
loc_8815D7B8:
	// stw r31,0(r29)
	ctx.current_instruction = 0x8815D7B8;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8815d80c
	if (ctx.cr6.eq) goto loc_8815D80C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882436a0
	ctx.lr = 0x8815D7CC;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_8815D7CC:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8815D7CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815d80c
	if (ctx.cr6.eq) goto loc_8815D80C;
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
	ctx.lr = 0x8815D7F0;
	sub_8815E360(ctx, base);
loc_8815D7F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815d830
	if (!ctx.cr6.eq) goto loc_8815D830;
	// lwz r3,0(r29)
	ctx.current_instruction = 0x8815D7F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815d80c
	if (ctx.cr6.eq) goto loc_8815D80C;
	// bl 0x8815ba70
	ctx.lr = 0x8815D808;
	sub_8815BA70(ctx, base);
loc_8815D808:
	// stw r23,0(r29)
	ctx.current_instruction = 0x8815D808;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
loc_8815D80C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c4560
	ctx.lr = 0x8815D814;
	sub_881C4560(ctx, base);
loc_8815D814:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c4560
	ctx.lr = 0x8815D81C;
	sub_881C4560(ctx, base);
loc_8815D81C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88052278
	ctx.lr = 0x8815D824;
	sub_88052278(ctx, base);
loc_8815D824:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8815D830:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,36(r29)
	ctx.current_instruction = 0x8815D834;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r30.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// ori r10,r11,45872
	ctx.r10.u64 = ctx.r11.u64 | 45872;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r10,32(r29)
	ctx.current_instruction = 0x8815D844;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// ble cr6,0x8815d958
	if (!ctx.cr6.gt) goto loc_8815D958;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r25,r11,18168
	ctx.r25.s64 = ctx.r11.s64 + 18168;
loc_8815D854:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8815d000
	ctx.lr = 0x8815D860;
	sub_8815D000(ctx, base);
loc_8815D860:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8815d948
	if (ctx.cr6.lt) goto loc_8815D948;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8815d000
	ctx.lr = 0x8815D878;
	sub_8815D000(ctx, base);
loc_8815D878:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8815d928
	if (ctx.cr6.lt) goto loc_8815D928;
	// lwz r11,36(r29)
	ctx.current_instruction = 0x8815D884;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,32(r29)
	ctx.current_instruction = 0x8815D890;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8815e3a0
	ctx.lr = 0x8815D89C;
	sub_8815E3A0(ctx, base);
loc_8815D89C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815d908
	if (ctx.cr6.eq) goto loc_8815D908;
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815D8A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8815d8b8
	if (ctx.cr6.lt) goto loc_8815D8B8;
	// bl 0x881ed228
	ctx.lr = 0x8815D8B8;
	sub_881ED228(ctx, base);
loc_8815D8B8:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815D8B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8815d8d0
	if (!ctx.cr6.lt) goto loc_8815D8D0;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8815D8C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	ctx.current_instruction = 0x8815D8CC;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_8815D8D0:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815D8D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8815d8e0
	if (ctx.cr6.lt) goto loc_8815D8E0;
	// bl 0x881ed228
	ctx.lr = 0x8815D8E0;
	sub_881ED228(ctx, base);
loc_8815D8E0:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815D8E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8815d8f8
	if (!ctx.cr6.lt) goto loc_8815D8F8;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x8815D8EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r10,r11
	ctx.current_instruction = 0x8815D8F4;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r23.u32);
loc_8815D8F8:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x8815d854
	if (ctx.cr6.lt) goto loc_8815D854;
	// b 0x8815d948
	goto loc_8815D948;
loc_8815D908:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815D908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815d928
	if (ctx.cr6.eq) goto loc_8815D928;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r26)
	ctx.current_instruction = 0x8815D918;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r26)
	ctx.current_instruction = 0x8815D920;
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8815D924;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8815D928:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815D928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815d948
	if (ctx.cr6.eq) goto loc_8815D948;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r27)
	ctx.current_instruction = 0x8815D93C;
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x8815D940;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8815D944;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8815D948:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8815d958
	if (!ctx.cr6.gt) goto loc_8815D958;
	// stw r23,28(r29)
	ctx.current_instruction = 0x8815D950;
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r23.u32);
	// b 0x8815d960
	goto loc_8815D960;
loc_8815D958:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r29)
	ctx.current_instruction = 0x8815D95C;
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_8815D960:
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x8815d974
	if (!ctx.cr6.lt) goto loc_8815D974;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815d0c0
	ctx.lr = 0x8815D970;
	sub_8815D0C0(ctx, base);
loc_8815D970:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8815D974:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88166278) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88166278;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88166278) {
			switch (rex_dispatch_address) {
				case 0x88166298:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88166278;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88166298: goto loc_88166298;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8816627C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88166280;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88166284;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,3744
	ctx.r4.s64 = ctx.r3.s64 + 3744;
	// addi r3,r3,3760
	ctx.r3.s64 = ctx.r3.s64 + 3760;
	// bl 0x88171680
	ctx.lr = 0x88166298;
	sub_88171680(ctx, base);
loc_88166298:
	// lwz r11,3744(r31)
	ctx.current_instruction = 0x88166298;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// lwz r10,3760(r31)
	ctx.current_instruction = 0x8816629C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x881662A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,3776(r31)
	ctx.current_instruction = 0x881662A4;
	REX_STORE_U32(ctx.r31.u32 + 3776, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x881662A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,3780(r31)
	ctx.current_instruction = 0x881662AC;
	REX_STORE_U32(ctx.r31.u32 + 3780, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.current_instruction = 0x881662B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,3784(r31)
	ctx.current_instruction = 0x881662B4;
	REX_STORE_U32(ctx.r31.u32 + 3784, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.current_instruction = 0x881662B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,3832(r31)
	ctx.current_instruction = 0x881662BC;
	REX_STORE_U32(ctx.r31.u32 + 3832, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.current_instruction = 0x881662C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,3836(r31)
	ctx.current_instruction = 0x881662C4;
	REX_STORE_U32(ctx.r31.u32 + 3836, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.current_instruction = 0x881662C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,3840(r31)
	ctx.current_instruction = 0x881662CC;
	REX_STORE_U32(ctx.r31.u32 + 3840, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881662D4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881662DC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8816B050) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816B050;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816B050) {
			switch (rex_dispatch_address) {
				case 0x8816B058:
				case 0x8816B078:
				case 0x8816B0C8:
				case 0x8816B114:
				case 0x8816B148:
				case 0x8816B1C4:
				case 0x8816B20C:
				case 0x8816B288:
				case 0x8816B2D0:
				case 0x8816B364:
				case 0x8816B3AC:
				case 0x8816B420:
				case 0x8816B468:
				case 0x8816B47C:
				case 0x8816B4F8:
				case 0x8816B540:
				case 0x8816B5A0:
				case 0x8816B5E8:
				case 0x8816B65C:
				case 0x8816B6A4:
				case 0x8816B718:
				case 0x8816B760:
				case 0x8816B774:
				case 0x8816B7F0:
				case 0x8816B838:
				case 0x8816B8A4:
				case 0x8816B8EC:
				case 0x8816BA3C:
				case 0x8816BA84:
				case 0x8816BB40:
				case 0x8816BB74:
				case 0x8816BBE8:
				case 0x8816BC30:
				case 0x8816BCBC:
				case 0x8816BD04:
				case 0x8816BD80:
				case 0x8816BDC8:
				case 0x8816BFB0:
				case 0x8816BFF8:
				case 0x8816C06C:
				case 0x8816C0B4:
				case 0x8816C124:
				case 0x8816C16C:
				case 0x8816C1E8:
				case 0x8816C230:
				case 0x8816C248:
				case 0x8816C2E4:
				case 0x8816C34C:
				case 0x8816C394:
				case 0x8816C3AC:
				case 0x8816C3B4:
				case 0x8816C424:
				case 0x8816C46C:
				case 0x8816C47C:
				case 0x8816C488:
				case 0x8816C54C:
				case 0x8816C560:
				case 0x8816C5DC:
				case 0x8816C624:
				case 0x8816C698:
				case 0x8816C6E0:
				case 0x8816C750:
				case 0x8816C798:
				case 0x8816C820:
				case 0x8816C868:
				case 0x8816C8D8:
				case 0x8816C920:
				case 0x8816C9B0:
				case 0x8816C9F8:
				case 0x8816CA08:
				case 0x8816CA24:
				case 0x8816CB24:
				case 0x8816CB6C:
				case 0x8816CBE0:
				case 0x8816CC28:
				case 0x8816CC98:
				case 0x8816CCE0:
				case 0x8816CD50:
				case 0x8816CD98:
				case 0x8816CE08:
				case 0x8816CE50:
				case 0x8816CEC8:
				case 0x8816CF10:
				case 0x8816CF44:
				case 0x8816CF50:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816B050;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816B058: goto loc_8816B058;
		case 0x8816B078: goto loc_8816B078;
		case 0x8816B0C8: goto loc_8816B0C8;
		case 0x8816B114: goto loc_8816B114;
		case 0x8816B148: goto loc_8816B148;
		case 0x8816B1C4: goto loc_8816B1C4;
		case 0x8816B20C: goto loc_8816B20C;
		case 0x8816B288: goto loc_8816B288;
		case 0x8816B2D0: goto loc_8816B2D0;
		case 0x8816B364: goto loc_8816B364;
		case 0x8816B3AC: goto loc_8816B3AC;
		case 0x8816B420: goto loc_8816B420;
		case 0x8816B468: goto loc_8816B468;
		case 0x8816B47C: goto loc_8816B47C;
		case 0x8816B4F8: goto loc_8816B4F8;
		case 0x8816B540: goto loc_8816B540;
		case 0x8816B5A0: goto loc_8816B5A0;
		case 0x8816B5E8: goto loc_8816B5E8;
		case 0x8816B65C: goto loc_8816B65C;
		case 0x8816B6A4: goto loc_8816B6A4;
		case 0x8816B718: goto loc_8816B718;
		case 0x8816B760: goto loc_8816B760;
		case 0x8816B774: goto loc_8816B774;
		case 0x8816B7F0: goto loc_8816B7F0;
		case 0x8816B838: goto loc_8816B838;
		case 0x8816B8A4: goto loc_8816B8A4;
		case 0x8816B8EC: goto loc_8816B8EC;
		case 0x8816BA3C: goto loc_8816BA3C;
		case 0x8816BA84: goto loc_8816BA84;
		case 0x8816BB40: goto loc_8816BB40;
		case 0x8816BB74: goto loc_8816BB74;
		case 0x8816BBE8: goto loc_8816BBE8;
		case 0x8816BC30: goto loc_8816BC30;
		case 0x8816BCBC: goto loc_8816BCBC;
		case 0x8816BD04: goto loc_8816BD04;
		case 0x8816BD80: goto loc_8816BD80;
		case 0x8816BDC8: goto loc_8816BDC8;
		case 0x8816BFB0: goto loc_8816BFB0;
		case 0x8816BFF8: goto loc_8816BFF8;
		case 0x8816C06C: goto loc_8816C06C;
		case 0x8816C0B4: goto loc_8816C0B4;
		case 0x8816C124: goto loc_8816C124;
		case 0x8816C16C: goto loc_8816C16C;
		case 0x8816C1E8: goto loc_8816C1E8;
		case 0x8816C230: goto loc_8816C230;
		case 0x8816C248: goto loc_8816C248;
		case 0x8816C2E4: goto loc_8816C2E4;
		case 0x8816C34C: goto loc_8816C34C;
		case 0x8816C394: goto loc_8816C394;
		case 0x8816C3AC: goto loc_8816C3AC;
		case 0x8816C3B4: goto loc_8816C3B4;
		case 0x8816C424: goto loc_8816C424;
		case 0x8816C46C: goto loc_8816C46C;
		case 0x8816C47C: goto loc_8816C47C;
		case 0x8816C488: goto loc_8816C488;
		case 0x8816C54C: goto loc_8816C54C;
		case 0x8816C560: goto loc_8816C560;
		case 0x8816C5DC: goto loc_8816C5DC;
		case 0x8816C624: goto loc_8816C624;
		case 0x8816C698: goto loc_8816C698;
		case 0x8816C6E0: goto loc_8816C6E0;
		case 0x8816C750: goto loc_8816C750;
		case 0x8816C798: goto loc_8816C798;
		case 0x8816C820: goto loc_8816C820;
		case 0x8816C868: goto loc_8816C868;
		case 0x8816C8D8: goto loc_8816C8D8;
		case 0x8816C920: goto loc_8816C920;
		case 0x8816C9B0: goto loc_8816C9B0;
		case 0x8816C9F8: goto loc_8816C9F8;
		case 0x8816CA08: goto loc_8816CA08;
		case 0x8816CA24: goto loc_8816CA24;
		case 0x8816CB24: goto loc_8816CB24;
		case 0x8816CB6C: goto loc_8816CB6C;
		case 0x8816CBE0: goto loc_8816CBE0;
		case 0x8816CC28: goto loc_8816CC28;
		case 0x8816CC98: goto loc_8816CC98;
		case 0x8816CCE0: goto loc_8816CCE0;
		case 0x8816CD50: goto loc_8816CD50;
		case 0x8816CD98: goto loc_8816CD98;
		case 0x8816CE08: goto loc_8816CE08;
		case 0x8816CE50: goto loc_8816CE50;
		case 0x8816CEC8: goto loc_8816CEC8;
		case 0x8816CF10: goto loc_8816CF10;
		case 0x8816CF44: goto loc_8816CF44;
		case 0x8816CF50: goto loc_8816CF50;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8816B058;
	__savegprlr_24(ctx, base);
loc_8816B058:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8816B058;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,15536(r3)
	ctx.current_instruction = 0x8816B05C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816b080
	if (!ctx.cr6.eq) goto loc_8816B080;
	// bl 0x8815f318
	ctx.lr = 0x8816B078;
	sub_8815F318(ctx, base);
loc_8816B078:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8816B080:
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r29,3436(r27)
	ctx.current_instruction = 0x8816B084;
	REX_STORE_U32(ctx.r27.u32 + 3436, ctx.r29.u32);
	// li r25,2
	ctx.r25.s64 = 2;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8816b210
	if (!ctx.cr6.eq) goto loc_8816B210;
	// lwz r11,3484(r27)
	ctx.current_instruction = 0x8816B094;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816b0cc
	if (ctx.cr6.eq) goto loc_8816B0CC;
	// lwz r3,84(r27)
	ctx.current_instruction = 0x8816B0A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x8816B0A4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816B0A8;
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
	ctx.current_instruction = 0x8816B0B8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816B0BC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816b0c8
	if (!ctx.cr0.lt) goto loc_8816B0C8;
	// bl 0x88156678
	ctx.lr = 0x8816B0C8;
	sub_88156678(ctx, base);
loc_8816B0C8:
	// stw r31,3488(r27)
	ctx.current_instruction = 0x8816B0C8;
	REX_STORE_U32(ctx.r27.u32 + 3488, ctx.r31.u32);
loc_8816B0CC:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816B0CC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B0D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8816b124
	if (!ctx.cr6.lt) goto loc_8816B124;
loc_8816B0E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816b124
	if (ctx.cr6.eq) goto loc_8816B124;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816B0EC;
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
	ctx.current_instruction = 0x8816B100;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816B104;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816b114
	if (!ctx.cr0.lt) goto loc_8816B114;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B114;
	sub_88156678(ctx, base);
loc_8816B114:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B114;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b0e4
	if (ctx.cr6.gt) goto loc_8816B0E4;
loc_8816B124:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816B124;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816B134;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816B138;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816b148
	if (!ctx.cr0.lt) goto loc_8816B148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B148;
	sub_88156678(ctx, base);
loc_8816B148:
	// lwz r11,15536(r27)
	ctx.current_instruction = 0x8816B148;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8816b210
	if (!ctx.cr6.eq) goto loc_8816B210;
	// lwz r11,14856(r27)
	ctx.current_instruction = 0x8816B154;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816b210
	if (ctx.cr6.eq) goto loc_8816B210;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816B160;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B16C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816b1d4
	if (!ctx.cr6.lt) goto loc_8816B1D4;
loc_8816B17C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816b1d4
	if (ctx.cr6.eq) goto loc_8816B1D4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816B188;
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
	ctx.current_instruction = 0x8816B1AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816B1B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816b1c4
	if (!ctx.cr0.lt) goto loc_8816B1C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B1C4;
	sub_88156678(ctx, base);
loc_8816B1C4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B1C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b17c
	if (ctx.cr6.gt) goto loc_8816B17C;
loc_8816B1D4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816B1D8;
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
	ctx.current_instruction = 0x8816B1F0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816B1FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816b20c
	if (!ctx.cr0.lt) goto loc_8816B20C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B20C;
	sub_88156678(ctx, base);
loc_8816B20C:
	// stw r30,14860(r27)
	ctx.current_instruction = 0x8816B20C;
	REX_STORE_U32(ctx.r27.u32 + 14860, ctx.r30.u32);
loc_8816B210:
	// lwz r11,15536(r27)
	ctx.current_instruction = 0x8816B210;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8816b9ac
	if (!ctx.cr6.eq) goto loc_8816B9AC;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816B220;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r11,15260(r27)
	ctx.current_instruction = 0x8816B22C;
	REX_STORE_U32(ctx.r27.u32 + 15260, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B230;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816b298
	if (!ctx.cr6.lt) goto loc_8816B298;
loc_8816B240:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816b298
	if (ctx.cr6.eq) goto loc_8816B298;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816B24C;
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
	ctx.current_instruction = 0x8816B270;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816B278;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816b288
	if (!ctx.cr0.lt) goto loc_8816B288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B288;
	sub_88156678(ctx, base);
loc_8816B288:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B288;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b240
	if (ctx.cr6.gt) goto loc_8816B240;
loc_8816B298:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816B29C;
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
	ctx.current_instruction = 0x8816B2B4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816B2C0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816b2d0
	if (!ctx.cr0.lt) goto loc_8816B2D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B2D0;
	sub_88156678(ctx, base);
loc_8816B2D0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8816b2e0
	if (!ctx.cr6.eq) goto loc_8816B2E0;
	// stw r24,288(r27)
	ctx.current_instruction = 0x8816B2D8;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r24.u32);
	// b 0x8816ba8c
	goto loc_8816BA8C;
loc_8816B2E0:
	// lwz r11,14836(r27)
	ctx.current_instruction = 0x8816B2E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,15256(r27)
	ctx.current_instruction = 0x8816B2E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15256);
	// bne cr6,0x8816b48c
	if (!ctx.cr6.eq) goto loc_8816B48C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816b300
	if (!ctx.cr6.eq) goto loc_8816B300;
	// stw r29,288(r27)
	ctx.current_instruction = 0x8816B2F8;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r29.u32);
	// b 0x8816ba8c
	goto loc_8816BA8C;
loc_8816B300:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816B300;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B30C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816b374
	if (!ctx.cr6.lt) goto loc_8816B374;
loc_8816B31C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816b374
	if (ctx.cr6.eq) goto loc_8816B374;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816B328;
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
	ctx.current_instruction = 0x8816B34C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816B354;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816b364
	if (!ctx.cr0.lt) goto loc_8816B364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B364;
	sub_88156678(ctx, base);
loc_8816B364:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B364;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b31c
	if (ctx.cr6.gt) goto loc_8816B31C;
loc_8816B374:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816B378;
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
	ctx.current_instruction = 0x8816B390;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816B39C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816b3ac
	if (!ctx.cr0.lt) goto loc_8816B3AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B3AC;
	sub_88156678(ctx, base);
loc_8816B3AC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8816b3bc
	if (!ctx.cr6.eq) goto loc_8816B3BC;
	// stw r29,288(r27)
	ctx.current_instruction = 0x8816B3B4;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r29.u32);
	// b 0x8816ba8c
	goto loc_8816BA8C;
loc_8816B3BC:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816B3BC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B3C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816b430
	if (!ctx.cr6.lt) goto loc_8816B430;
loc_8816B3D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816b430
	if (ctx.cr6.eq) goto loc_8816B430;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816B3E4;
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
	ctx.current_instruction = 0x8816B408;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816B410;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816b420
	if (!ctx.cr0.lt) goto loc_8816B420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B420;
	sub_88156678(ctx, base);
loc_8816B420:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B420;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b3d8
	if (ctx.cr6.gt) goto loc_8816B3D8;
loc_8816B430:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816B434;
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
	ctx.current_instruction = 0x8816B44C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816B458;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816b468
	if (!ctx.cr0.lt) goto loc_8816B468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B468;
	sub_88156678(ctx, base);
loc_8816B468:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8816b480
	if (!ctx.cr6.eq) goto loc_8816B480;
	// stw r29,288(r27)
	ctx.current_instruction = 0x8816B470;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r29.u32);
	// lwz r3,15268(r27)
	ctx.current_instruction = 0x8816B474;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 15268);
	// bl 0x881b3778
	ctx.lr = 0x8816B47C;
	sub_881B3778(ctx, base);
loc_8816B47C:
	// b 0x8816ba8c
	goto loc_8816BA8C;
loc_8816B480:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,288(r27)
	ctx.current_instruction = 0x8816B484;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r24.u32);
	// b 0x8816ba8c
	goto loc_8816BA8C;
loc_8816B48C:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816B48C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B49C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x8816b550
	if (!ctx.cr6.eq) goto loc_8816B550;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816b508
	if (!ctx.cr6.lt) goto loc_8816B508;
loc_8816B4B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816b508
	if (ctx.cr6.eq) goto loc_8816B508;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816B4BC;
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
	ctx.current_instruction = 0x8816B4E0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816B4E8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816b4f8
	if (!ctx.cr0.lt) goto loc_8816B4F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B4F8;
	sub_88156678(ctx, base);
loc_8816B4F8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B4F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b4b0
	if (ctx.cr6.gt) goto loc_8816B4B0;
loc_8816B508:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816B50C;
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
	ctx.current_instruction = 0x8816B524;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816B530;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816b540
	if (!ctx.cr0.lt) goto loc_8816B540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B540;
	sub_88156678(ctx, base);
loc_8816B540:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8816b5f0
	if (!ctx.cr6.eq) goto loc_8816B5F0;
	// stw r29,288(r27)
	ctx.current_instruction = 0x8816B548;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r29.u32);
	// b 0x8816b780
	goto loc_8816B780;
loc_8816B550:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816b5b0
	if (!ctx.cr6.lt) goto loc_8816B5B0;
loc_8816B558:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816b5b0
	if (ctx.cr6.eq) goto loc_8816B5B0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816B564;
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
	ctx.current_instruction = 0x8816B588;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816B590;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816b5a0
	if (!ctx.cr0.lt) goto loc_8816B5A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B5A0;
	sub_88156678(ctx, base);
loc_8816B5A0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B5A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b558
	if (ctx.cr6.gt) goto loc_8816B558;
loc_8816B5B0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816B5B4;
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
	ctx.current_instruction = 0x8816B5CC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816B5D8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816b5e8
	if (!ctx.cr0.lt) goto loc_8816B5E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B5E8;
	sub_88156678(ctx, base);
loc_8816B5E8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8816b5f8
	if (!ctx.cr6.eq) goto loc_8816B5F8;
loc_8816B5F0:
	// stw r25,288(r27)
	ctx.current_instruction = 0x8816B5F0;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r25.u32);
	// b 0x8816b780
	goto loc_8816B780;
loc_8816B5F8:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816B5F8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B604;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816b66c
	if (!ctx.cr6.lt) goto loc_8816B66C;
loc_8816B614:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816b66c
	if (ctx.cr6.eq) goto loc_8816B66C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816B620;
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
	ctx.current_instruction = 0x8816B644;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816B64C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816b65c
	if (!ctx.cr0.lt) goto loc_8816B65C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B65C;
	sub_88156678(ctx, base);
loc_8816B65C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B65C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b614
	if (ctx.cr6.gt) goto loc_8816B614;
loc_8816B66C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816B670;
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
	ctx.current_instruction = 0x8816B688;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816B694;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816b6a4
	if (!ctx.cr0.lt) goto loc_8816B6A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B6A4;
	sub_88156678(ctx, base);
loc_8816B6A4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8816b6b4
	if (!ctx.cr6.eq) goto loc_8816B6B4;
	// stw r29,288(r27)
	ctx.current_instruction = 0x8816B6AC;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r29.u32);
	// b 0x8816b780
	goto loc_8816B780;
loc_8816B6B4:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816B6B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B6C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816b728
	if (!ctx.cr6.lt) goto loc_8816B728;
loc_8816B6D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816b728
	if (ctx.cr6.eq) goto loc_8816B728;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816B6DC;
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
	ctx.current_instruction = 0x8816B700;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816B708;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816b718
	if (!ctx.cr0.lt) goto loc_8816B718;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B718;
	sub_88156678(ctx, base);
loc_8816B718:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B718;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b6d0
	if (ctx.cr6.gt) goto loc_8816B6D0;
loc_8816B728:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816B72C;
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
	ctx.current_instruction = 0x8816B744;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816B750;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816b760
	if (!ctx.cr0.lt) goto loc_8816B760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B760;
	sub_88156678(ctx, base);
loc_8816B760:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x8816b778
	if (!ctx.cr6.eq) goto loc_8816B778;
	// stw r29,288(r27)
	ctx.current_instruction = 0x8816B768;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r29.u32);
	// lwz r3,15268(r27)
	ctx.current_instruction = 0x8816B76C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 15268);
	// bl 0x881b3778
	ctx.lr = 0x8816B774;
	sub_881B3778(ctx, base);
loc_8816B774:
	// b 0x8816b780
	goto loc_8816B780;
loc_8816B778:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,288(r27)
	ctx.current_instruction = 0x8816B77C;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r24.u32);
loc_8816B780:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8816B780;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8816ba8c
	if (!ctx.cr6.eq) goto loc_8816BA8C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816B78C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B798;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8816b800
	if (!ctx.cr6.lt) goto loc_8816B800;
loc_8816B7A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816b800
	if (ctx.cr6.eq) goto loc_8816B800;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816B7B4;
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
	ctx.current_instruction = 0x8816B7D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816B7E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816b7f0
	if (!ctx.cr0.lt) goto loc_8816B7F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B7F0;
	sub_88156678(ctx, base);
loc_8816B7F0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B7F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b7a8
	if (ctx.cr6.gt) goto loc_8816B7A8;
loc_8816B800:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816B804;
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
	ctx.current_instruction = 0x8816B81C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816B828;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816b838
	if (!ctx.cr0.lt) goto loc_8816B838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B838;
	sub_88156678(ctx, base);
loc_8816B838:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x8816b95c
	if (!ctx.cr6.eq) goto loc_8816B95C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816B840;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,4
	ctx.r30.s64 = 4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B84C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8816b8b4
	if (!ctx.cr6.lt) goto loc_8816B8B4;
loc_8816B85C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816b8b4
	if (ctx.cr6.eq) goto loc_8816B8B4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816B868;
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
	ctx.current_instruction = 0x8816B88C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816B894;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816b8a4
	if (!ctx.cr0.lt) goto loc_8816B8A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B8A4;
	sub_88156678(ctx, base);
loc_8816B8A4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816B8A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b85c
	if (ctx.cr6.gt) goto loc_8816B85C;
loc_8816B8B4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816B8B8;
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
	ctx.current_instruction = 0x8816B8D0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816B8DC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816b8ec
	if (!ctx.cr0.lt) goto loc_8816B8EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816B8EC;
	sub_88156678(ctx, base);
loc_8816B8EC:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// beq cr6,0x8816cf64
	if (ctx.cr6.eq) goto loc_8816CF64;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// bne cr6,0x8816b904
	if (!ctx.cr6.eq) goto loc_8816B904;
	// stw r24,3436(r27)
	ctx.current_instruction = 0x8816B8FC;
	REX_STORE_U32(ctx.r27.u32 + 3436, ctx.r24.u32);
	// b 0x8816ba8c
	goto loc_8816BA8C;
loc_8816B904:
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// lwz r10,14836(r27)
	ctx.current_instruction = 0x8816B908;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 14836);
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// addi r8,r11,-112
	ctx.r8.s64 = ctx.r11.s64 + -112;
	// addi r7,r9,19336
	ctx.r7.s64 = ctx.r9.s64 + 19336;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-30719
	ctx.r5.s64 = -2013200384;
	// lis r4,-30719
	ctx.r4.s64 = -2013200384;
	// addi r3,r5,19392
	ctx.r3.s64 = ctx.r5.s64 + 19392;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r9,r6,r7
	ctx.current_instruction = 0x8816B92C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r11,r4,19776
	ctx.r11.s64 = ctx.r4.s64 + 19776;
	// stw r9,3428(r27)
	ctx.current_instruction = 0x8816B934;
	REX_STORE_U32(ctx.r27.u32 + 3428, ctx.r9.u32);
	// lwzx r8,r6,r3
	ctx.current_instruction = 0x8816B938;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,3424(r27)
	ctx.current_instruction = 0x8816B944;
	REX_STORE_U32(ctx.r27.u32 + 3424, ctx.r8.u32);
	// lwz r6,-4(r7)
	ctx.current_instruction = 0x8816B948;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stw r6,14840(r27)
	ctx.current_instruction = 0x8816B94C;
	REX_STORE_U32(ctx.r27.u32 + 14840, ctx.r6.u32);
	// bne cr6,0x8816ba8c
	if (!ctx.cr6.eq) goto loc_8816BA8C;
	// stw r24,14836(r27)
	ctx.current_instruction = 0x8816B954;
	REX_STORE_U32(ctx.r27.u32 + 14836, ctx.r24.u32);
	// b 0x8816ba8c
	goto loc_8816BA8C;
loc_8816B95C:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lwz r10,14836(r27)
	ctx.current_instruction = 0x8816B960;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 14836);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,19280
	ctx.r8.s64 = ctx.r11.s64 + 19280;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// addi r5,r7,19308
	ctx.r5.s64 = ctx.r7.s64 + 19308;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r4,r9,r8
	ctx.current_instruction = 0x8816B97C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r6,19776
	ctx.r11.s64 = ctx.r6.s64 + 19776;
	// stw r4,3428(r27)
	ctx.current_instruction = 0x8816B984;
	REX_STORE_U32(ctx.r27.u32 + 3428, ctx.r4.u32);
	// lwzx r3,r9,r5
	ctx.current_instruction = 0x8816B988;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,3424(r27)
	ctx.current_instruction = 0x8816B994;
	REX_STORE_U32(ctx.r27.u32 + 3424, ctx.r3.u32);
	// lwz r10,-4(r11)
	ctx.current_instruction = 0x8816B998;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,14840(r27)
	ctx.current_instruction = 0x8816B99C;
	REX_STORE_U32(ctx.r27.u32 + 14840, ctx.r10.u32);
	// bne cr6,0x8816ba8c
	if (!ctx.cr6.eq) goto loc_8816BA8C;
	// stw r24,14836(r27)
	ctx.current_instruction = 0x8816B9A4;
	REX_STORE_U32(ctx.r27.u32 + 14836, ctx.r24.u32);
	// b 0x8816ba8c
	goto loc_8816BA8C;
loc_8816B9AC:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// lwz r30,84(r27)
	ctx.current_instruction = 0x8816B9B0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8816B9BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// ble cr6,0x8816b9dc
	if (!ctx.cr6.gt) goto loc_8816B9DC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8816ba88
	goto loc_8816BA88;
loc_8816B9DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8816b9ec
	if (!ctx.cr6.eq) goto loc_8816B9EC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8816ba88
	goto loc_8816BA88;
loc_8816B9EC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8816ba4c
	if (!ctx.cr6.gt) goto loc_8816BA4C;
loc_8816B9F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816ba4c
	if (ctx.cr6.eq) goto loc_8816BA4C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x8816BA00;
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
	ctx.current_instruction = 0x8816BA24;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x8816BA2C;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x8816ba3c
	if (!ctx.cr0.lt) goto loc_8816BA3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BA3C;
	sub_88156678(ctx, base);
loc_8816BA3C:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8816BA3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816b9f4
	if (ctx.cr6.gt) goto loc_8816B9F4;
loc_8816BA4C:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x8816BA50;
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
	ctx.current_instruction = 0x8816BA68;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x8816BA74;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x8816ba84
	if (!ctx.cr0.lt) goto loc_8816BA84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BA84;
	sub_88156678(ctx, base);
loc_8816BA84:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8816BA88:
	// stw r11,288(r27)
	ctx.current_instruction = 0x8816BA88;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r11.u32);
loc_8816BA8C:
	// lwz r11,3436(r27)
	ctx.current_instruction = 0x8816BA8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816baa0
	if (ctx.cr6.eq) goto loc_8816BAA0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,288(r27)
	ctx.current_instruction = 0x8816BA9C;
	REX_STORE_U32(ctx.r27.u32 + 288, ctx.r11.u32);
loc_8816BAA0:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8816BAA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816bac4
	if (ctx.cr6.eq) goto loc_8816BAC4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8816bac4
	if (ctx.cr6.eq) goto loc_8816BAC4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8816bac4
	if (ctx.cr6.eq) goto loc_8816BAC4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8816cf64
	if (!ctx.cr6.eq) goto loc_8816CF64;
loc_8816BAC4:
	// lwz r10,15536(r27)
	ctx.current_instruction = 0x8816BAC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8816bae0
	if (!ctx.cr6.eq) goto loc_8816BAE0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816bae0
	if (ctx.cr6.eq) goto loc_8816BAE0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8816cf64
	if (!ctx.cr6.eq) goto loc_8816CF64;
loc_8816BAE0:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8816bb84
	if (ctx.cr6.lt) goto loc_8816BB84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816baf8
	if (ctx.cr6.eq) goto loc_8816BAF8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8816bb84
	if (!ctx.cr6.eq) goto loc_8816BB84;
loc_8816BAF8:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816BAF8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,7
	ctx.r30.s64 = 7;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816BB00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x8816bb50
	if (!ctx.cr6.lt) goto loc_8816BB50;
loc_8816BB10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816bb50
	if (ctx.cr6.eq) goto loc_8816BB50;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816BB18;
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
	ctx.current_instruction = 0x8816BB2C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816BB30;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8816bb40
	if (!ctx.cr0.lt) goto loc_8816BB40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BB40;
	sub_88156678(ctx, base);
loc_8816BB40:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816BB40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816bb10
	if (ctx.cr6.gt) goto loc_8816BB10;
loc_8816BB50:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816BB50;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8816BB60;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8816BB64;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8816bb74
	if (!ctx.cr0.lt) goto loc_8816BB74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BB74;
	sub_88156678(ctx, base);
loc_8816BB74:
	// lwz r11,84(r27)
	ctx.current_instruction = 0x8816BB74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8816BB78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816cf64
	if (!ctx.cr6.eq) goto loc_8816CF64;
loc_8816BB84:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816BB84;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816BB90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8816bbf8
	if (!ctx.cr6.lt) goto loc_8816BBF8;
loc_8816BBA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816bbf8
	if (ctx.cr6.eq) goto loc_8816BBF8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816BBAC;
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
	ctx.current_instruction = 0x8816BBD0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816BBD8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816bbe8
	if (!ctx.cr0.lt) goto loc_8816BBE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BBE8;
	sub_88156678(ctx, base);
loc_8816BBE8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816BBE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816bba0
	if (ctx.cr6.gt) goto loc_8816BBA0;
loc_8816BBF8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816BBFC;
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
	ctx.current_instruction = 0x8816BC14;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816BC20;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816bc30
	if (!ctx.cr0.lt) goto loc_8816BC30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BC30;
	sub_88156678(ctx, base);
loc_8816BC30:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816BC30;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r10,20(r31)
	ctx.current_instruction = 0x8816BC38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816cf64
	if (!ctx.cr6.eq) goto loc_8816CF64;
	// lwz r10,15536(r27)
	ctx.current_instruction = 0x8816BC44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x8816beec
	if (ctx.cr6.lt) goto loc_8816BEEC;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// stw r30,4008(r27)
	ctx.current_instruction = 0x8816BC54;
	REX_STORE_U32(ctx.r27.u32 + 4008, ctx.r30.u32);
	// bgt cr6,0x8816bd0c
	if (ctx.cr6.gt) goto loc_8816BD0C;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816BC5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816bccc
	if (!ctx.cr6.lt) goto loc_8816BCCC;
loc_8816BC74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816bccc
	if (ctx.cr6.eq) goto loc_8816BCCC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816BC80;
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
	ctx.current_instruction = 0x8816BCA4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816BCAC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816bcbc
	if (!ctx.cr0.lt) goto loc_8816BCBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BCBC;
	sub_88156678(ctx, base);
loc_8816BCBC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816BCBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816bc74
	if (ctx.cr6.gt) goto loc_8816BC74;
loc_8816BCCC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816BCD0;
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
	ctx.current_instruction = 0x8816BCE8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816BCF4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816bd04
	if (!ctx.cr0.lt) goto loc_8816BD04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BD04;
	sub_88156678(ctx, base);
loc_8816BD04:
	// stw r30,252(r27)
	ctx.current_instruction = 0x8816BD04;
	REX_STORE_U32(ctx.r27.u32 + 252, ctx.r30.u32);
	// b 0x8816bd10
	goto loc_8816BD10;
loc_8816BD0C:
	// stw r29,252(r27)
	ctx.current_instruction = 0x8816BD0C;
	REX_STORE_U32(ctx.r27.u32 + 252, ctx.r29.u32);
loc_8816BD10:
	// lwz r11,3480(r27)
	ctx.current_instruction = 0x8816BD10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816bdcc
	if (ctx.cr6.eq) goto loc_8816BDCC;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816BD1C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816BD28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816bd90
	if (!ctx.cr6.lt) goto loc_8816BD90;
loc_8816BD38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816bd90
	if (ctx.cr6.eq) goto loc_8816BD90;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816BD44;
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
	ctx.current_instruction = 0x8816BD68;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816BD70;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816bd80
	if (!ctx.cr0.lt) goto loc_8816BD80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BD80;
	sub_88156678(ctx, base);
loc_8816BD80:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816BD80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816bd38
	if (ctx.cr6.gt) goto loc_8816BD38;
loc_8816BD90:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816BD94;
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
	ctx.current_instruction = 0x8816BDAC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816BDB8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816bdc8
	if (!ctx.cr0.lt) goto loc_8816BDC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BDC8;
	sub_88156678(ctx, base);
loc_8816BDC8:
	// stw r30,3468(r27)
	ctx.current_instruction = 0x8816BDC8;
	REX_STORE_U32(ctx.r27.u32 + 3468, ctx.r30.u32);
loc_8816BDCC:
	// lwz r11,3472(r27)
	ctx.current_instruction = 0x8816BDCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4008(r27)
	ctx.current_instruction = 0x8816BDD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4008);
	// bne cr6,0x8816be04
	if (!ctx.cr6.eq) goto loc_8816BE04;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8816bdec
	if (ctx.cr6.gt) goto loc_8816BDEC;
	// stw r24,3468(r27)
	ctx.current_instruction = 0x8816BDE4;
	REX_STORE_U32(ctx.r27.u32 + 3468, ctx.r24.u32);
	// b 0x8816be04
	goto loc_8816BE04;
loc_8816BDEC:
	// stw r29,3468(r27)
	ctx.current_instruction = 0x8816BDEC;
	REX_STORE_U32(ctx.r27.u32 + 3468, ctx.r29.u32);
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,19448
	ctx.r11.s64 = ctx.r9.s64 + 19448;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.current_instruction = 0x8816BE00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
loc_8816BE04:
	// lwz r10,3008(r27)
	ctx.current_instruction = 0x8816BE04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 3008);
	// stw r11,248(r27)
	ctx.current_instruction = 0x8816BE08;
	REX_STORE_U32(ctx.r27.u32 + 248, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,3004(r27)
	ctx.current_instruction = 0x8816BE10;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r29.u32);
	// beq cr6,0x8816be64
	if (ctx.cr6.eq) goto loc_8816BE64;
	// lwz r10,288(r27)
	ctx.current_instruction = 0x8816BE18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8816be30
	if (!ctx.cr6.eq) goto loc_8816BE30;
	// lwz r9,3436(r27)
	ctx.current_instruction = 0x8816BE24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 3436);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8816be64
	if (ctx.cr6.eq) goto loc_8816BE64;
loc_8816BE30:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x8816be40
	if (ctx.cr6.lt) goto loc_8816BE40;
	// stw r24,3004(r27)
	ctx.current_instruction = 0x8816BE38;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r24.u32);
	// b 0x8816be64
	goto loc_8816BE64;
loc_8816BE40:
	// lwz r9,20760(r27)
	ctx.current_instruction = 0x8816BE40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 20760);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8816be64
	if (ctx.cr6.eq) goto loc_8816BE64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8816be5c
	if (ctx.cr6.eq) goto loc_8816BE5C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8816be64
	if (!ctx.cr6.eq) goto loc_8816BE64;
loc_8816BE5C:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,3004(r27)
	ctx.current_instruction = 0x8816BE60;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r10.u32);
loc_8816BE64:
	// lwz r10,3004(r27)
	ctx.current_instruction = 0x8816BE64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 3004);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8816be98
	if (ctx.cr6.eq) goto loc_8816BE98;
	// lwz r10,1904(r27)
	ctx.current_instruction = 0x8816BE74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1904);
	// sth r29,16(r10)
	ctx.current_instruction = 0x8816BE78;
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r29.u16);
	// lwz r9,1904(r27)
	ctx.current_instruction = 0x8816BE7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1904);
	// sth r29,0(r9)
	ctx.current_instruction = 0x8816BE80;
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r29.u16);
	// lwz r8,1908(r27)
	ctx.current_instruction = 0x8816BE84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 1908);
	// sth r29,16(r8)
	ctx.current_instruction = 0x8816BE88;
	REX_STORE_U16(ctx.r8.u32 + 16, ctx.r29.u16);
	// lwz r7,1908(r27)
	ctx.current_instruction = 0x8816BE8C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 1908);
	// sth r29,0(r7)
	ctx.current_instruction = 0x8816BE90;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r29.u16);
	// b 0x8816bebc
	goto loc_8816BEBC;
loc_8816BE98:
	// lwz r9,1904(r27)
	ctx.current_instruction = 0x8816BE98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1904);
	// li r10,128
	ctx.r10.s64 = 128;
	// sth r10,16(r9)
	ctx.current_instruction = 0x8816BEA0;
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r10.u16);
	// lwz r8,1904(r27)
	ctx.current_instruction = 0x8816BEA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 1904);
	// sth r10,0(r8)
	ctx.current_instruction = 0x8816BEA8;
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// lwz r7,1908(r27)
	ctx.current_instruction = 0x8816BEAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 1908);
	// sth r10,16(r7)
	ctx.current_instruction = 0x8816BEB0;
	REX_STORE_U16(ctx.r7.u32 + 16, ctx.r10.u16);
	// lwz r6,1908(r27)
	ctx.current_instruction = 0x8816BEB4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1908);
	// sth r10,0(r6)
	ctx.current_instruction = 0x8816BEB8;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
loc_8816BEBC:
	// lwz r9,3468(r27)
	ctx.current_instruction = 0x8816BEBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 3468);
	// addi r10,r27,4048
	ctx.r10.s64 = ctx.r27.s64 + 4048;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8816bed0
	if (!ctx.cr6.eq) goto loc_8816BED0;
	// addi r10,r27,5328
	ctx.r10.s64 = ctx.r27.s64 + 5328;
loc_8816BED0:
	// stw r10,6608(r27)
	ctx.current_instruction = 0x8816BED0;
	REX_STORE_U32(ctx.r27.u32 + 6608, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r27,6624
	ctx.r10.s64 = ctx.r27.s64 + 6624;
	// bne cr6,0x8816bee4
	if (!ctx.cr6.eq) goto loc_8816BEE4;
	// addi r10,r27,10720
	ctx.r10.s64 = ctx.r27.s64 + 10720;
loc_8816BEE4:
	// stw r10,14816(r27)
	ctx.current_instruction = 0x8816BEE4;
	REX_STORE_U32(ctx.r27.u32 + 14816, ctx.r10.u32);
	// b 0x8816befc
	goto loc_8816BEFC;
loc_8816BEEC:
	// addi r10,r27,5328
	ctx.r10.s64 = ctx.r27.s64 + 5328;
	// addi r9,r27,10720
	ctx.r9.s64 = ctx.r27.s64 + 10720;
	// stw r10,6608(r27)
	ctx.current_instruction = 0x8816BEF4;
	REX_STORE_U32(ctx.r27.u32 + 6608, ctx.r10.u32);
	// stw r9,14816(r27)
	ctx.current_instruction = 0x8816BEF8;
	REX_STORE_U32(ctx.r27.u32 + 14816, ctx.r9.u32);
loc_8816BEFC:
	// stw r11,248(r27)
	ctx.current_instruction = 0x8816BEFC;
	REX_STORE_U32(ctx.r27.u32 + 248, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8816cf64
	if (!ctx.cr6.gt) goto loc_8816CF64;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8816cf64
	if (ctx.cr6.gt) goto loc_8816CF64;
	// lwz r11,4008(r27)
	ctx.current_instruction = 0x8816BF10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4008);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8816bf38
	if (ctx.cr6.gt) goto loc_8816BF38;
	// lwz r11,15536(r27)
	ctx.current_instruction = 0x8816BF1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8816bf38
	if (!ctx.cr6.eq) goto loc_8816BF38;
	// addi r11,r27,2872
	ctx.r11.s64 = ctx.r27.s64 + 2872;
	// addi r10,r27,2828
	ctx.r10.s64 = ctx.r27.s64 + 2828;
	// stw r11,2940(r27)
	ctx.current_instruction = 0x8816BF30;
	REX_STORE_U32(ctx.r27.u32 + 2940, ctx.r11.u32);
	// stw r10,2952(r27)
	ctx.current_instruction = 0x8816BF34;
	REX_STORE_U32(ctx.r27.u32 + 2952, ctx.r10.u32);
loc_8816BF38:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8816bffc
	if (ctx.cr6.eq) goto loc_8816BFFC;
	// lwz r11,15256(r27)
	ctx.current_instruction = 0x8816BF40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816bffc
	if (ctx.cr6.eq) goto loc_8816BFFC;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816BF4C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816BF58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816bfc0
	if (!ctx.cr6.lt) goto loc_8816BFC0;
loc_8816BF68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816bfc0
	if (ctx.cr6.eq) goto loc_8816BFC0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816BF74;
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
	ctx.current_instruction = 0x8816BF98;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816BFA0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816bfb0
	if (!ctx.cr0.lt) goto loc_8816BFB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BFB0;
	sub_88156678(ctx, base);
loc_8816BFB0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816BFB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816bf68
	if (ctx.cr6.gt) goto loc_8816BF68;
loc_8816BFC0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816BFC4;
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
	ctx.current_instruction = 0x8816BFDC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816BFE8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816bff8
	if (!ctx.cr0.lt) goto loc_8816BFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816BFF8;
	sub_88156678(ctx, base);
loc_8816BFF8:
	// stw r30,15260(r27)
	ctx.current_instruction = 0x8816BFF8;
	REX_STORE_U32(ctx.r27.u32 + 15260, ctx.r30.u32);
loc_8816BFFC:
	// lwz r11,21568(r27)
	ctx.current_instruction = 0x8816BFFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816c248
	if (ctx.cr6.eq) goto loc_8816C248;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816C008;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C014;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816c07c
	if (!ctx.cr6.lt) goto loc_8816C07C;
loc_8816C024:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c07c
	if (ctx.cr6.eq) goto loc_8816C07C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C030;
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
	ctx.current_instruction = 0x8816C054;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C05C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c06c
	if (!ctx.cr0.lt) goto loc_8816C06C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C06C;
	sub_88156678(ctx, base);
loc_8816C06C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C06C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c024
	if (ctx.cr6.gt) goto loc_8816C024;
loc_8816C07C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816C080;
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
	ctx.current_instruction = 0x8816C098;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816C0A4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816c0b4
	if (!ctx.cr0.lt) goto loc_8816C0B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C0B4;
	sub_88156678(ctx, base);
loc_8816C0B4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,408(r27)
	ctx.current_instruction = 0x8816C0B8;
	REX_STORE_U32(ctx.r27.u32 + 408, ctx.r30.u32);
	// beq cr6,0x8816c178
	if (ctx.cr6.eq) goto loc_8816C178;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816C0C0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C0CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816c134
	if (!ctx.cr6.lt) goto loc_8816C134;
loc_8816C0DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c134
	if (ctx.cr6.eq) goto loc_8816C134;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C0E8;
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
	ctx.current_instruction = 0x8816C10C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C114;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c124
	if (!ctx.cr0.lt) goto loc_8816C124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C124;
	sub_88156678(ctx, base);
loc_8816C124:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C124;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c0dc
	if (ctx.cr6.gt) goto loc_8816C0DC;
loc_8816C134:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816C138;
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
	ctx.current_instruction = 0x8816C150;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816C15C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816c16c
	if (!ctx.cr0.lt) goto loc_8816C16C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C16C;
	sub_88156678(ctx, base);
loc_8816C16C:
	// lwz r11,408(r27)
	ctx.current_instruction = 0x8816C16C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 408);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,408(r27)
	ctx.current_instruction = 0x8816C174;
	REX_STORE_U32(ctx.r27.u32 + 408, ctx.r11.u32);
loc_8816C178:
	// lwz r11,408(r27)
	ctx.current_instruction = 0x8816C178;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 408);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8816c23c
	if (!ctx.cr6.eq) goto loc_8816C23C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816C184;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C190;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816c1f8
	if (!ctx.cr6.lt) goto loc_8816C1F8;
loc_8816C1A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c1f8
	if (ctx.cr6.eq) goto loc_8816C1F8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C1AC;
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
	ctx.current_instruction = 0x8816C1D0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C1D8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c1e8
	if (!ctx.cr0.lt) goto loc_8816C1E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C1E8;
	sub_88156678(ctx, base);
loc_8816C1E8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C1E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c1a0
	if (ctx.cr6.gt) goto loc_8816C1A0;
loc_8816C1F8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816C1FC;
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
	ctx.current_instruction = 0x8816C214;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816C220;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816c230
	if (!ctx.cr0.lt) goto loc_8816C230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C230;
	sub_88156678(ctx, base);
loc_8816C230:
	// lwz r11,408(r27)
	ctx.current_instruction = 0x8816C230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 408);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,408(r27)
	ctx.current_instruction = 0x8816C238;
	REX_STORE_U32(ctx.r27.u32 + 408, ctx.r11.u32);
loc_8816C23C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,408(r27)
	ctx.current_instruction = 0x8816C240;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 408);
	// bl 0x8815b250
	ctx.lr = 0x8816C248;
	sub_8815B250(ctx, base);
loc_8816C248:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8816C248;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8816c398
	if (ctx.cr6.eq) goto loc_8816C398;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8816c398
	if (ctx.cr6.eq) goto loc_8816C398;
	// lwz r11,15536(r27)
	ctx.current_instruction = 0x8816C25C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8816c398
	if (!ctx.cr6.eq) goto loc_8816C398;
	// lwz r11,14884(r27)
	ctx.current_instruction = 0x8816C268;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 14884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816c398
	if (ctx.cr6.eq) goto loc_8816C398;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816C274;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r11,3980(r27)
	ctx.current_instruction = 0x8816C27C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C284;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8816c2f8
	if (ctx.cr6.eq) goto loc_8816C2F8;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816c35c
	if (!ctx.cr6.lt) goto loc_8816C35C;
loc_8816C29C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c35c
	if (ctx.cr6.eq) goto loc_8816C35C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C2A8;
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
	ctx.current_instruction = 0x8816C2CC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C2D4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c2e4
	if (!ctx.cr0.lt) goto loc_8816C2E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C2E4;
	sub_88156678(ctx, base);
loc_8816C2E4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C2E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c29c
	if (ctx.cr6.gt) goto loc_8816C29C;
	// b 0x8816c35c
	goto loc_8816C35C;
loc_8816C2F8:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8816c35c
	if (!ctx.cr6.lt) goto loc_8816C35C;
loc_8816C304:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c35c
	if (ctx.cr6.eq) goto loc_8816C35C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C310;
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
	ctx.current_instruction = 0x8816C334;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C33C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c34c
	if (!ctx.cr0.lt) goto loc_8816C34C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C34C;
	sub_88156678(ctx, base);
loc_8816C34C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C34C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c304
	if (ctx.cr6.gt) goto loc_8816C304;
loc_8816C35C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816C360;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// std r4,0(r31)
	ctx.current_instruction = 0x8816C374;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x8816C380;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bge 0x8816c394
	if (!ctx.cr0.lt) goto loc_8816C394;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C394;
	sub_88156678(ctx, base);
loc_8816C394:
	// stw r30,14888(r27)
	ctx.current_instruction = 0x8816C394;
	REX_STORE_U32(ctx.r27.u32 + 14888, ctx.r30.u32);
loc_8816C398:
	// lwz r4,14888(r27)
	ctx.current_instruction = 0x8816C398;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 14888);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8816c3b4
	if (ctx.cr6.eq) goto loc_8816C3B4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881b07b8
	ctx.lr = 0x8816C3AC;
	sub_881B07B8(ctx, base);
loc_8816C3AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8816C3B4;
	sub_881B31B0(ctx, base);
loc_8816C3B4:
	// lwz r11,3980(r27)
	ctx.current_instruction = 0x8816C3B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816c524
	if (ctx.cr6.eq) goto loc_8816C524;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816C3C0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C3CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816c434
	if (!ctx.cr6.lt) goto loc_8816C434;
loc_8816C3DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c434
	if (ctx.cr6.eq) goto loc_8816C434;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C3E8;
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
	ctx.current_instruction = 0x8816C40C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C414;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c424
	if (!ctx.cr0.lt) goto loc_8816C424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C424;
	sub_88156678(ctx, base);
loc_8816C424:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C424;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c3dc
	if (ctx.cr6.gt) goto loc_8816C3DC;
loc_8816C434:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816C438;
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
	ctx.current_instruction = 0x8816C450;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816C45C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816c46c
	if (!ctx.cr0.lt) goto loc_8816C46C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C46C;
	sub_88156678(ctx, base);
loc_8816C46C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8816c4e8
	if (ctx.cr6.eq) goto loc_8816C4E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c4c38
	ctx.lr = 0x8816C47C;
	sub_881C4C38(ctx, base);
loc_8816C47C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88160580
	ctx.lr = 0x8816C488;
	sub_88160580(ctx, base);
loc_8816C488:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8816cf74
	if (!ctx.cr6.eq) goto loc_8816CF74;
	// lwz r11,352(r27)
	ctx.current_instruction = 0x8816C490;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816c524
	if (ctx.cr6.eq) goto loc_8816C524;
	// lwz r11,144(r27)
	ctx.current_instruction = 0x8816C49C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8816c524
	if (!ctx.cr6.gt) goto loc_8816C524;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8816C4B0:
	// lwz r11,272(r27)
	ctx.current_instruction = 0x8816C4B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 272);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r8,0(r11)
	ctx.current_instruction = 0x8816C4C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,10,22,22
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x200) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFDFF);
	// rlwinm r6,r7,0,24,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r6,r6,0,22,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r6,0(r11)
	ctx.current_instruction = 0x8816C4D4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,144(r27)
	ctx.current_instruction = 0x8816C4D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8816c4b0
	if (ctx.cr6.lt) goto loc_8816C4B0;
	// b 0x8816c524
	goto loc_8816C524;
loc_8816C4E8:
	// lwz r11,144(r27)
	ctx.current_instruction = 0x8816C4E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8816c524
	if (!ctx.cr6.gt) goto loc_8816C524;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8816C4FC:
	// lwz r9,272(r27)
	ctx.current_instruction = 0x8816C4FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 272);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r8,0(r9)
	ctx.current_instruction = 0x8816C50C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,24,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// stw r7,0(r9)
	ctx.current_instruction = 0x8816C514;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,144(r27)
	ctx.current_instruction = 0x8816C518;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8816c4fc
	if (ctx.cr6.lt) goto loc_8816C4FC;
loc_8816C524:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8816C524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816c940
	if (ctx.cr6.eq) goto loc_8816C940;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8816c940
	if (ctx.cr6.eq) goto loc_8816C940;
	// lwz r11,15536(r27)
	ctx.current_instruction = 0x8816C538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8816c55c
	if (!ctx.cr6.eq) goto loc_8816C55C;
	// bl 0x88167c30
	ctx.lr = 0x8816C54C;
	sub_88167C30(ctx, base);
loc_8816C54C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8816c560
	if (ctx.cr6.eq) goto loc_8816C560;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8816C55C:
	// bl 0x88165a70
	ctx.lr = 0x8816C560;
	sub_88165A70(ctx, base);
loc_8816C560:
	// lwz r11,15536(r27)
	ctx.current_instruction = 0x8816C560;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8816c924
	if (ctx.cr6.lt) goto loc_8816C924;
	// lwz r11,400(r27)
	ctx.current_instruction = 0x8816C56C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816c628
	if (ctx.cr6.eq) goto loc_8816C628;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816C578;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C584;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816c5ec
	if (!ctx.cr6.lt) goto loc_8816C5EC;
loc_8816C594:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c5ec
	if (ctx.cr6.eq) goto loc_8816C5EC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C5A0;
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
	ctx.current_instruction = 0x8816C5C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C5CC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c5dc
	if (!ctx.cr0.lt) goto loc_8816C5DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C5DC;
	sub_88156678(ctx, base);
loc_8816C5DC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C5DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c594
	if (ctx.cr6.gt) goto loc_8816C594;
loc_8816C5EC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816C5F0;
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
	ctx.current_instruction = 0x8816C608;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816C614;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816c624
	if (!ctx.cr0.lt) goto loc_8816C624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C624;
	sub_88156678(ctx, base);
loc_8816C624:
	// stw r30,396(r27)
	ctx.current_instruction = 0x8816C624;
	REX_STORE_U32(ctx.r27.u32 + 396, ctx.r30.u32);
loc_8816C628:
	// lwz r11,396(r27)
	ctx.current_instruction = 0x8816C628;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816c7a4
	if (!ctx.cr6.eq) goto loc_8816C7A4;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816C634;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C640;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816c6a8
	if (!ctx.cr6.lt) goto loc_8816C6A8;
loc_8816C650:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c6a8
	if (ctx.cr6.eq) goto loc_8816C6A8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C65C;
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
	ctx.current_instruction = 0x8816C680;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C688;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c698
	if (!ctx.cr0.lt) goto loc_8816C698;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C698;
	sub_88156678(ctx, base);
loc_8816C698:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C698;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c650
	if (ctx.cr6.gt) goto loc_8816C650;
loc_8816C6A8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816C6AC;
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
	ctx.current_instruction = 0x8816C6C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816C6D0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816c6e0
	if (!ctx.cr0.lt) goto loc_8816C6E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C6E0;
	sub_88156678(ctx, base);
loc_8816C6E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	ctx.current_instruction = 0x8816C6E4;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r30.u32);
	// beq cr6,0x8816c7a4
	if (ctx.cr6.eq) goto loc_8816C7A4;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816C6EC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C6F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816c760
	if (!ctx.cr6.lt) goto loc_8816C760;
loc_8816C708:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c760
	if (ctx.cr6.eq) goto loc_8816C760;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C714;
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
	ctx.current_instruction = 0x8816C738;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C740;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c750
	if (!ctx.cr0.lt) goto loc_8816C750;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C750;
	sub_88156678(ctx, base);
loc_8816C750:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C750;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c708
	if (ctx.cr6.gt) goto loc_8816C708;
loc_8816C760:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816C764;
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
	ctx.current_instruction = 0x8816C77C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816C788;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816c798
	if (!ctx.cr0.lt) goto loc_8816C798;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C798;
	sub_88156678(ctx, base);
loc_8816C798:
	// lwz r11,2964(r27)
	ctx.current_instruction = 0x8816C798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2964);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,2964(r27)
	ctx.current_instruction = 0x8816C7A0;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r11.u32);
loc_8816C7A4:
	// lwz r11,2964(r27)
	ctx.current_instruction = 0x8816C7A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2964);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816C7AC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r11,2968(r27)
	ctx.current_instruction = 0x8816C7B4;
	REX_STORE_U32(ctx.r27.u32 + 2968, ctx.r11.u32);
	// stw r11,2980(r27)
	ctx.current_instruction = 0x8816C7B8;
	REX_STORE_U32(ctx.r27.u32 + 2980, ctx.r11.u32);
	// stw r11,2976(r27)
	ctx.current_instruction = 0x8816C7BC;
	REX_STORE_U32(ctx.r27.u32 + 2976, ctx.r11.u32);
	// stw r11,2972(r27)
	ctx.current_instruction = 0x8816C7C0;
	REX_STORE_U32(ctx.r27.u32 + 2972, ctx.r11.u32);
	// stw r11,2984(r27)
	ctx.current_instruction = 0x8816C7C4;
	REX_STORE_U32(ctx.r27.u32 + 2984, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C7C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816c830
	if (!ctx.cr6.lt) goto loc_8816C830;
loc_8816C7D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c830
	if (ctx.cr6.eq) goto loc_8816C830;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C7E4;
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
	ctx.current_instruction = 0x8816C808;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C810;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c820
	if (!ctx.cr0.lt) goto loc_8816C820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C820;
	sub_88156678(ctx, base);
loc_8816C820:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C820;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c7d8
	if (ctx.cr6.gt) goto loc_8816C7D8;
loc_8816C830:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816C834;
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
	ctx.current_instruction = 0x8816C84C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816C858;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816c868
	if (!ctx.cr0.lt) goto loc_8816C868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C868;
	sub_88156678(ctx, base);
loc_8816C868:
	// lwz r11,15536(r27)
	ctx.current_instruction = 0x8816C868;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// stw r30,2092(r27)
	ctx.current_instruction = 0x8816C86C;
	REX_STORE_U32(ctx.r27.u32 + 2092, ctx.r30.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8816c924
	if (!ctx.cr6.lt) goto loc_8816C924;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816C878;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C880;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816c8e8
	if (!ctx.cr6.lt) goto loc_8816C8E8;
loc_8816C890:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c8e8
	if (ctx.cr6.eq) goto loc_8816C8E8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C89C;
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
	ctx.current_instruction = 0x8816C8C0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C8C8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c8d8
	if (!ctx.cr0.lt) goto loc_8816C8D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C8D8;
	sub_88156678(ctx, base);
loc_8816C8D8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C8D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c890
	if (ctx.cr6.gt) goto loc_8816C890;
loc_8816C8E8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816C8EC;
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
	ctx.current_instruction = 0x8816C904;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816C910;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816c920
	if (!ctx.cr0.lt) goto loc_8816C920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C920;
	sub_88156678(ctx, base);
loc_8816C920:
	// stw r30,2040(r27)
	ctx.current_instruction = 0x8816C920;
	REX_STORE_U32(ctx.r27.u32 + 2040, ctx.r30.u32);
loc_8816C924:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x8816C924;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8816cf54
	if (!ctx.cr6.eq) goto loc_8816CF54;
	// lwz r11,3960(r27)
	ctx.current_instruction = 0x8816C930;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3960);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,3960(r27)
	ctx.current_instruction = 0x8816C938;
	REX_STORE_U32(ctx.r27.u32 + 3960, ctx.r10.u32);
	// b 0x8816cf54
	goto loc_8816CF54;
loc_8816C940:
	// lwz r11,15536(r27)
	ctx.current_instruction = 0x8816C940;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x8816c9fc
	if (!ctx.cr6.lt) goto loc_8816C9FC;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816C94C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C958;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8816c9c0
	if (!ctx.cr6.lt) goto loc_8816C9C0;
loc_8816C968:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816c9c0
	if (ctx.cr6.eq) goto loc_8816C9C0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816C974;
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
	ctx.current_instruction = 0x8816C998;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816C9A0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816c9b0
	if (!ctx.cr0.lt) goto loc_8816C9B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C9B0;
	sub_88156678(ctx, base);
loc_8816C9B0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816C9B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816c968
	if (ctx.cr6.gt) goto loc_8816C968;
loc_8816C9C0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816C9C4;
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
	ctx.current_instruction = 0x8816C9DC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816C9E8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816c9f8
	if (!ctx.cr0.lt) goto loc_8816C9F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816C9F8;
	sub_88156678(ctx, base);
loc_8816C9F8:
	// stw r30,15528(r27)
	ctx.current_instruction = 0x8816C9F8;
	REX_STORE_U32(ctx.r27.u32 + 15528, ctx.r30.u32);
loc_8816C9FC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,15528(r27)
	ctx.current_instruction = 0x8816CA00;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 15528);
	// bl 0x88167a68
	ctx.lr = 0x8816CA08;
	sub_88167A68(ctx, base);
loc_8816CA08:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8816cf74
	if (!ctx.cr6.eq) goto loc_8816CF74;
	// lwz r10,15536(r27)
	ctx.current_instruction = 0x8816CA10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8816caa0
	if (ctx.cr6.lt) goto loc_8816CAA0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8815e948
	ctx.lr = 0x8816CA24;
	sub_8815E948(ctx, base);
loc_8816CA24:
	// lwz r11,84(r27)
	ctx.current_instruction = 0x8816CA24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8816CA28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816cf74
	if (!ctx.cr6.eq) goto loc_8816CF74;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8816cf74
	if (!ctx.cr6.eq) goto loc_8816CF74;
	// lwz r10,15536(r27)
	ctx.current_instruction = 0x8816CA3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8816ca50
	if (ctx.cr6.lt) goto loc_8816CA50;
	// stw r29,404(r27)
	ctx.current_instruction = 0x8816CA48;
	REX_STORE_U32(ctx.r27.u32 + 404, ctx.r29.u32);
	// b 0x8816caa0
	goto loc_8816CAA0;
loc_8816CA50:
	// lwz r9,3716(r27)
	ctx.current_instruction = 0x8816CA50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 3716);
	// li r11,50
	ctx.r11.s64 = 50;
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// eqv r7,r9,r11
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r11.u64);
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// stw r4,400(r27)
	ctx.current_instruction = 0x8816CA70;
	REX_STORE_U32(ctx.r27.u32 + 400, ctx.r4.u32);
	// bgt cr6,0x8816ca98
	if (ctx.cr6.gt) goto loc_8816CA98;
	// lwz r11,160(r27)
	ctx.current_instruction = 0x8816CA78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 160);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r8,156(r27)
	ctx.current_instruction = 0x8816CA80;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 156);
	// ori r7,r9,11264
	ctx.r7.u64 = ctx.r9.u64 | 11264;
	// mullw r6,r11,r8
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// blt cr6,0x8816ca9c
	if (ctx.cr6.lt) goto loc_8816CA9C;
loc_8816CA98:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8816CA9C:
	// stw r11,404(r27)
	ctx.current_instruction = 0x8816CA9C;
	REX_STORE_U32(ctx.r27.u32 + 404, ctx.r11.u32);
loc_8816CAA0:
	// lwz r11,4004(r27)
	ctx.current_instruction = 0x8816CAA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816cf14
	if (!ctx.cr6.eq) goto loc_8816CF14;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8816cf14
	if (ctx.cr6.lt) goto loc_8816CF14;
	// lwz r11,400(r27)
	ctx.current_instruction = 0x8816CAB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816cb70
	if (ctx.cr6.eq) goto loc_8816CB70;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816CAC0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CACC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816cb34
	if (!ctx.cr6.lt) goto loc_8816CB34;
loc_8816CADC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816cb34
	if (ctx.cr6.eq) goto loc_8816CB34;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816CAE8;
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
	ctx.current_instruction = 0x8816CB0C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816CB14;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816cb24
	if (!ctx.cr0.lt) goto loc_8816CB24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CB24;
	sub_88156678(ctx, base);
loc_8816CB24:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CB24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816cadc
	if (ctx.cr6.gt) goto loc_8816CADC;
loc_8816CB34:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816CB38;
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
	ctx.current_instruction = 0x8816CB50;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816CB5C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816cb6c
	if (!ctx.cr0.lt) goto loc_8816CB6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CB6C;
	sub_88156678(ctx, base);
loc_8816CB6C:
	// stw r30,396(r27)
	ctx.current_instruction = 0x8816CB6C;
	REX_STORE_U32(ctx.r27.u32 + 396, ctx.r30.u32);
loc_8816CB70:
	// lwz r11,396(r27)
	ctx.current_instruction = 0x8816CB70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816ce68
	if (!ctx.cr6.eq) goto loc_8816CE68;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816CB7C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CB88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816cbf0
	if (!ctx.cr6.lt) goto loc_8816CBF0;
loc_8816CB98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816cbf0
	if (ctx.cr6.eq) goto loc_8816CBF0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816CBA4;
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
	ctx.current_instruction = 0x8816CBC8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816CBD0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816cbe0
	if (!ctx.cr0.lt) goto loc_8816CBE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CBE0;
	sub_88156678(ctx, base);
loc_8816CBE0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CBE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816cb98
	if (ctx.cr6.gt) goto loc_8816CB98;
loc_8816CBF0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816CBF4;
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
	ctx.current_instruction = 0x8816CC0C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816CC18;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816cc28
	if (!ctx.cr0.lt) goto loc_8816CC28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CC28;
	sub_88156678(ctx, base);
loc_8816CC28:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	ctx.current_instruction = 0x8816CC2C;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r30.u32);
	// beq cr6,0x8816ccec
	if (ctx.cr6.eq) goto loc_8816CCEC;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816CC34;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CC40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816cca8
	if (!ctx.cr6.lt) goto loc_8816CCA8;
loc_8816CC50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816cca8
	if (ctx.cr6.eq) goto loc_8816CCA8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816CC5C;
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
	ctx.current_instruction = 0x8816CC80;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816CC88;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816cc98
	if (!ctx.cr0.lt) goto loc_8816CC98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CC98;
	sub_88156678(ctx, base);
loc_8816CC98:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CC98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816cc50
	if (ctx.cr6.gt) goto loc_8816CC50;
loc_8816CCA8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816CCAC;
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
	ctx.current_instruction = 0x8816CCC4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816CCD0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816cce0
	if (!ctx.cr0.lt) goto loc_8816CCE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CCE0;
	sub_88156678(ctx, base);
loc_8816CCE0:
	// lwz r11,2964(r27)
	ctx.current_instruction = 0x8816CCE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2964);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,2964(r27)
	ctx.current_instruction = 0x8816CCE8;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r11.u32);
loc_8816CCEC:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816CCEC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CCF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816cd60
	if (!ctx.cr6.lt) goto loc_8816CD60;
loc_8816CD08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816cd60
	if (ctx.cr6.eq) goto loc_8816CD60;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816CD14;
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
	ctx.current_instruction = 0x8816CD38;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816CD40;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816cd50
	if (!ctx.cr0.lt) goto loc_8816CD50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CD50;
	sub_88156678(ctx, base);
loc_8816CD50:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CD50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816cd08
	if (ctx.cr6.gt) goto loc_8816CD08;
loc_8816CD60:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816CD64;
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
	ctx.current_instruction = 0x8816CD7C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816CD88;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816cd98
	if (!ctx.cr0.lt) goto loc_8816CD98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CD98;
	sub_88156678(ctx, base);
loc_8816CD98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,2976(r27)
	ctx.current_instruction = 0x8816CD9C;
	REX_STORE_U32(ctx.r27.u32 + 2976, ctx.r30.u32);
	// beq cr6,0x8816ce5c
	if (ctx.cr6.eq) goto loc_8816CE5C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816CDA4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CDB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816ce18
	if (!ctx.cr6.lt) goto loc_8816CE18;
loc_8816CDC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816ce18
	if (ctx.cr6.eq) goto loc_8816CE18;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816CDCC;
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
	ctx.current_instruction = 0x8816CDF0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816CDF8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816ce08
	if (!ctx.cr0.lt) goto loc_8816CE08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CE08;
	sub_88156678(ctx, base);
loc_8816CE08:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CE08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816cdc0
	if (ctx.cr6.gt) goto loc_8816CDC0;
loc_8816CE18:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816CE1C;
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
	ctx.current_instruction = 0x8816CE34;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816CE40;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816ce50
	if (!ctx.cr0.lt) goto loc_8816CE50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CE50;
	sub_88156678(ctx, base);
loc_8816CE50:
	// lwz r11,2976(r27)
	ctx.current_instruction = 0x8816CE50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2976);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,2976(r27)
	ctx.current_instruction = 0x8816CE58;
	REX_STORE_U32(ctx.r27.u32 + 2976, ctx.r11.u32);
loc_8816CE5C:
	// lwz r11,2976(r27)
	ctx.current_instruction = 0x8816CE5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2976);
	// stw r11,2984(r27)
	ctx.current_instruction = 0x8816CE60;
	REX_STORE_U32(ctx.r27.u32 + 2984, ctx.r11.u32);
	// stw r11,2980(r27)
	ctx.current_instruction = 0x8816CE64;
	REX_STORE_U32(ctx.r27.u32 + 2980, ctx.r11.u32);
loc_8816CE68:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816CE68;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CE70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816ced8
	if (!ctx.cr6.lt) goto loc_8816CED8;
loc_8816CE80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816ced8
	if (ctx.cr6.eq) goto loc_8816CED8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816CE8C;
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
	ctx.current_instruction = 0x8816CEB0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816CEB8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816cec8
	if (!ctx.cr0.lt) goto loc_8816CEC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CEC8;
	sub_88156678(ctx, base);
loc_8816CEC8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816CEC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816ce80
	if (ctx.cr6.gt) goto loc_8816CE80;
loc_8816CED8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816CEDC;
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
	ctx.current_instruction = 0x8816CEF4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816CF00;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816cf10
	if (!ctx.cr0.lt) goto loc_8816CF10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816CF10;
	sub_88156678(ctx, base);
loc_8816CF10:
	// stw r30,2092(r27)
	ctx.current_instruction = 0x8816CF10;
	REX_STORE_U32(ctx.r27.u32 + 2092, ctx.r30.u32);
loc_8816CF14:
	// lwz r11,20760(r27)
	ctx.current_instruction = 0x8816CF14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816cf2c
	if (!ctx.cr6.eq) goto loc_8816CF2C;
	// lwz r11,3980(r27)
	ctx.current_instruction = 0x8816CF20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816cf48
	if (ctx.cr6.eq) goto loc_8816CF48;
loc_8816CF2C:
	// lwz r11,4040(r27)
	ctx.current_instruction = 0x8816CF2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8816cf48
	if (ctx.cr6.eq) goto loc_8816CF48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88161130
	ctx.lr = 0x8816CF44;
	sub_88161130(ctx, base);
loc_8816CF44:
	// b 0x8816cf50
	goto loc_8816CF50;
loc_8816CF48:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881a5c10
	ctx.lr = 0x8816CF50;
	sub_881A5C10(ctx, base);
loc_8816CF50:
	// stw r24,3960(r27)
	ctx.current_instruction = 0x8816CF50;
	REX_STORE_U32(ctx.r27.u32 + 3960, ctx.r24.u32);
loc_8816CF54:
	// lwz r11,84(r27)
	ctx.current_instruction = 0x8816CF54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8816CF58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8816cf70
	if (ctx.cr6.eq) goto loc_8816CF70;
loc_8816CF64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8816CF70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8816CF74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881BA5D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881BA5D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881BA5D0) {
			switch (rex_dispatch_address) {
				case 0x881BA5D8:
				case 0x881BA63C:
				case 0x881BA6B8:
				case 0x881BA79C:
				case 0x881BA7E8:
				case 0x881BA8B8:
				case 0x881BA8E0:
				case 0x881BA908:
				case 0x881BA964:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881BA5D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881BA5D8: goto loc_881BA5D8;
		case 0x881BA63C: goto loc_881BA63C;
		case 0x881BA6B8: goto loc_881BA6B8;
		case 0x881BA79C: goto loc_881BA79C;
		case 0x881BA7E8: goto loc_881BA7E8;
		case 0x881BA8B8: goto loc_881BA8B8;
		case 0x881BA8E0: goto loc_881BA8E0;
		case 0x881BA908: goto loc_881BA908;
		case 0x881BA964: goto loc_881BA964;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881BA5D8;
	__savegprlr_14(ctx, base);
loc_881BA5D8:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x881BA5D8;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20760(r3)
	ctx.current_instruction = 0x881BA5DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20760);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881ba644
	if (ctx.cr6.eq) goto loc_881BA644;
	// lwz r30,356(r3)
	ctx.current_instruction = 0x881BA608;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 356);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r11,404(r1)
	ctx.current_instruction = 0x881BA610;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,100(r1)
	ctx.current_instruction = 0x881BA618;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// stw r19,92(r1)
	ctx.current_instruction = 0x881BA620;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r19,84(r1)
	ctx.current_instruction = 0x881BA628;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881BA62C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,0(r30)
	ctx.current_instruction = 0x881BA634;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8819fd28
	ctx.lr = 0x881BA63C;
	sub_8819FD28(ctx, base);
loc_881BA63C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BA644:
	// lwz r17,396(r1)
	ctx.current_instruction = 0x881BA644;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r20,388(r1)
	ctx.current_instruction = 0x881BA648;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r11,396(r31)
	ctx.current_instruction = 0x881BA64C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// stw r21,136(r1)
	ctx.current_instruction = 0x881BA650;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r17,128(r1)
	ctx.current_instruction = 0x881BA658;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// stw r20,132(r1)
	ctx.current_instruction = 0x881BA65C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// stw r17,140(r1)
	ctx.current_instruction = 0x881BA660;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// beq cr6,0x881ba68c
	if (ctx.cr6.eq) goto loc_881BA68C;
	// lwz r11,0(r24)
	ctx.current_instruction = 0x881BA668;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,738
	ctx.r10.s64 = ctx.r11.s64 + 738;
	// addi r9,r11,735
	ctx.r9.s64 = ctx.r11.s64 + 735;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r10,r31
	ctx.r23.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r18,r11,r31
	ctx.r18.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x881ba694
	goto loc_881BA694;
loc_881BA68C:
	// addi r18,r31,2916
	ctx.r18.s64 = ctx.r31.s64 + 2916;
	// addi r23,r31,2928
	ctx.r23.s64 = ctx.r31.s64 + 2928;
loc_881BA694:
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r22,404(r1)
	ctx.current_instruction = 0x881BA698;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_881BA6A0:
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,300(r31)
	ctx.current_instruction = 0x881BA6A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,2096(r31)
	ctx.current_instruction = 0x881BA6AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c6198
	ctx.lr = 0x881BA6B8;
	sub_881C6198(ctx, base);
loc_881BA6B8:
	// lwz r3,112(r1)
	ctx.current_instruction = 0x881BA6B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba964
	if (!ctx.cr6.eq) goto loc_881BA964;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1940(r31)
	ctx.current_instruction = 0x881BA6C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1940);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r27,r21,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r20,2
	ctx.r8.s64 = ctx.r20.s64 + 2;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.current_instruction = 0x881BA6DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r27,r29
	ctx.current_instruction = 0x881BA6E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r26,r29
	ctx.current_instruction = 0x881BA6EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x881BA6F0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lwzx r3,r6,r29
	ctx.current_instruction = 0x881BA6F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// lhz r8,0(r10)
	ctx.current_instruction = 0x881BA6FC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r6,0(r3)
	ctx.current_instruction = 0x881BA704;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// srawi r8,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// xor r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// xor r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// subf r8,r8,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x881ba744
	if (!ctx.cr6.lt) goto loc_881BA744;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x881ba748
	goto loc_881BA748;
loc_881BA744:
	// li r9,1
	ctx.r9.s64 = 1;
loc_881BA748:
	// lwz r11,1764(r31)
	ctx.current_instruction = 0x881BA748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lhz r7,0(r10)
	ctx.current_instruction = 0x881BA750;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r9,84(r1)
	ctx.current_instruction = 0x881BA758;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r22,92(r1)
	ctx.current_instruction = 0x881BA764;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881BA76C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sth r7,0(r28)
	ctx.current_instruction = 0x881BA77C;
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r7,1764(r31)
	ctx.current_instruction = 0x881BA784;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lwz r14,300(r31)
	ctx.current_instruction = 0x881BA788;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r14.s32);
	// stw r11,0(r7)
	ctx.current_instruction = 0x881BA790;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r7,204(r31)
	ctx.current_instruction = 0x881BA794;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x881b7b10
	ctx.lr = 0x881BA79C;
	sub_881B7B10(ctx, base);
loc_881BA79C:
	// stw r3,112(r1)
	ctx.current_instruction = 0x881BA79C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba964
	if (!ctx.cr6.eq) goto loc_881BA964;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne cr6,0x881ba7b8
	if (!ctx.cr6.eq) goto loc_881BA7B8;
	// lwz r11,236(r31)
	ctx.current_instruction = 0x881BA7B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
loc_881BA7B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x881ba6a0
	if (ctx.cr6.lt) goto loc_881BA6A0;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,304(r31)
	ctx.current_instruction = 0x881BA7D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,2100(r31)
	ctx.current_instruction = 0x881BA7DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c6198
	ctx.lr = 0x881BA7E8;
	sub_881C6198(ctx, base);
loc_881BA7E8:
	// lwz r3,112(r1)
	ctx.current_instruction = 0x881BA7E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba964
	if (!ctx.cr6.eq) goto loc_881BA964;
	// addi r9,r17,4
	ctx.r9.s64 = ctx.r17.s64 + 4;
	// lwzx r11,r27,r29
	ctx.current_instruction = 0x881BA7F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// lwzx r10,r26,r29
	ctx.current_instruction = 0x881BA7FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1940(r31)
	ctx.current_instruction = 0x881BA804;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1940);
	// lhz r7,0(r11)
	ctx.current_instruction = 0x881BA808;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r6,0(r10)
	ctx.current_instruction = 0x881BA80C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lwzx r5,r8,r29
	ctx.current_instruction = 0x881BA810;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lhz r8,0(r5)
	ctx.current_instruction = 0x881BA81C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r4,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// xor r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x881ba85c
	if (!ctx.cr6.lt) goto loc_881BA85C;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x881ba860
	goto loc_881BA860;
loc_881BA85C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_881BA860:
	// lwz r7,1764(r31)
	ctx.current_instruction = 0x881BA860;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lhz r11,0(r10)
	ctx.current_instruction = 0x881BA868;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// stw r22,92(r1)
	ctx.current_instruction = 0x881BA870;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r8,116(r1)
	ctx.current_instruction = 0x881BA878;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x881BA880;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r7,0(r7)
	ctx.current_instruction = 0x881BA888;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sth r7,0(r28)
	ctx.current_instruction = 0x881BA898;
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r7,304(r31)
	ctx.current_instruction = 0x881BA8A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r30,1764(r31)
	ctx.current_instruction = 0x881BA8A8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// stw r11,0(r30)
	ctx.current_instruction = 0x881BA8AC;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.current_instruction = 0x881BA8B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x881b7b10
	ctx.lr = 0x881BA8B8;
	sub_881B7B10(ctx, base);
loc_881BA8B8:
	// stw r3,112(r1)
	ctx.current_instruction = 0x881BA8B8;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba964
	if (!ctx.cr6.eq) goto loc_881BA964;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,304(r31)
	ctx.current_instruction = 0x881BA8C8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,2100(r31)
	ctx.current_instruction = 0x881BA8D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// bl 0x881c6198
	ctx.lr = 0x881BA8E0;
	sub_881C6198(ctx, base);
loc_881BA8E0:
	// lwz r3,112(r1)
	ctx.current_instruction = 0x881BA8E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba964
	if (!ctx.cr6.eq) goto loc_881BA964;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b7fd8
	ctx.lr = 0x881BA908;
	sub_881B7FD8(ctx, base);
loc_881BA908:
	// lwz r11,1764(r31)
	ctx.current_instruction = 0x881BA908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lhz r29,0(r3)
	ctx.current_instruction = 0x881BA90C;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,116(r1)
	ctx.current_instruction = 0x881BA914;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,84(r1)
	ctx.current_instruction = 0x881BA91C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// stw r22,92(r1)
	ctx.current_instruction = 0x881BA928;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// lwz r7,0(r11)
	ctx.current_instruction = 0x881BA92C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// add r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 + ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// sth r11,0(r30)
	ctx.current_instruction = 0x881BA944;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,1764(r31)
	ctx.current_instruction = 0x881BA94C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lwz r30,304(r31)
	ctx.current_instruction = 0x881BA950;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// stw r7,0(r11)
	ctx.current_instruction = 0x881BA958;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,208(r31)
	ctx.current_instruction = 0x881BA95C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x881b7b10
	ctx.lr = 0x881BA964;
	sub_881B7B10(ctx, base);
loc_881BA964:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C92A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C92A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C92A0) {
			switch (rex_dispatch_address) {
				case 0x881C92A8:
				case 0x881C9320:
				case 0x881C93A4:
				case 0x881C93BC:
				case 0x881C93EC:
				case 0x881C9400:
				case 0x881C9498:
				case 0x881C94B0:
				case 0x881C94D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C92A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C92A8: goto loc_881C92A8;
		case 0x881C9320: goto loc_881C9320;
		case 0x881C93A4: goto loc_881C93A4;
		case 0x881C93BC: goto loc_881C93BC;
		case 0x881C93EC: goto loc_881C93EC;
		case 0x881C9400: goto loc_881C9400;
		case 0x881C9498: goto loc_881C9498;
		case 0x881C94B0: goto loc_881C94B0;
		case 0x881C94D8: goto loc_881C94D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x881C92A8;
	__savegprlr_21(ctx, base);
loc_881C92A8:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881C92A8;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21704(r3)
	ctx.current_instruction = 0x881C92AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24688(r3)
	ctx.current_instruction = 0x881C92B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r25,r9,8
	ctx.r25.s64 = ctx.r9.s64 + 8;
	// addi r11,r24,11429
	ctx.r11.s64 = ctx.r24.s64 + 11429;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r22,r3
	ctx.current_instruction = 0x881C92CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c9308
	if (ctx.cr6.eq) goto loc_881C9308;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r24,11437
	ctx.r9.s64 = ctx.r24.s64 + 11437;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r10,45788
	ctx.r7.u64 = ctx.r10.u64 | 45788;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r8,45792
	ctx.r5.u64 = ctx.r8.u64 | 45792;
	// stwx r11,r3,r7
	ctx.current_instruction = 0x881C92F0;
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwzx r4,r6,r3
	ctx.current_instruction = 0x881C92F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stwx r4,r3,r5
	ctx.current_instruction = 0x881C92F8;
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_881C9308:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r23,r11,18168
	ctx.r23.s64 = ctx.r11.s64 + 18168;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8815e468
	ctx.lr = 0x881C9320;
	sub_8815E468(ctx, base);
loc_881C9320:
	// stwx r3,r22,r31
	ctx.current_instruction = 0x881C9320;
	REX_STORE_U32(ctx.r22.u32 + ctx.r31.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881c9338
	if (!ctx.cr6.eq) goto loc_881C9338;
loc_881C932C:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_881C9338:
	// addi r26,r3,512
	ctx.r26.s64 = ctx.r3.s64 + 512;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r26,-2
	ctx.r28.s64 = ctx.r26.s64 + -2;
	// addi r27,r26,2
	ctx.r27.s64 = ctx.r26.s64 + 2;
loc_881C9348:
	// lwz r11,21792(r31)
	ctx.current_instruction = 0x881C9348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21792);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881c936c
	if (!ctx.cr6.lt) goto loc_881C936C;
	// lwz r11,21808(r31)
	ctx.current_instruction = 0x881C9354;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21808);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// srawi r29,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 8;
	// b 0x881c9394
	goto loc_881C9394;
loc_881C936C:
	// lwz r10,21812(r31)
	ctx.current_instruction = 0x881C936C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21812);
	// lwz r11,21800(r31)
	ctx.current_instruction = 0x881C9370;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21800);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_881C9394:
	// lwz r11,420(r31)
	ctx.current_instruction = 0x881C9394;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C93A4;
	sub_88202468(ctx, base);
loc_881C93A4:
	// lwz r11,420(r31)
	ctx.current_instruction = 0x881C93A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C93BC;
	sub_88202468(ctx, base);
loc_881C93BC:
	// extsh r11,r21
	ctx.r11.s64 = ctx.r21.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// sthu r11,2(r28)
	ctx.current_instruction = 0x881C93C8;
	ea = 2 + ctx.r28.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r28.u32 = ea;
	// sthu r10,-2(r27)
	ctx.current_instruction = 0x881C93CC;
	ea = -2 + ctx.r27.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x881c9348
	if (ctx.cr6.lt) goto loc_881C9348;
	// lwz r11,420(r31)
	ctx.current_instruction = 0x881C93D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// li r4,-256
	ctx.r4.s64 = -256;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C93EC;
	sub_88202468(ctx, base);
loc_881C93EC:
	// sth r3,-512(r26)
	ctx.current_instruction = 0x881C93EC;
	REX_STORE_U16(ctx.r26.u32 + -512, ctx.r3.u16);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8815e468
	ctx.lr = 0x881C9400;
	sub_8815E468(ctx, base);
loc_881C9400:
	// addi r10,r24,11437
	ctx.r10.s64 = ctx.r24.s64 + 11437;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r25,r31
	ctx.current_instruction = 0x881C940C;
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r3.u32);
	// beq cr6,0x881c932c
	if (ctx.cr6.eq) goto loc_881C932C;
	// addi r26,r3,128
	ctx.r26.s64 = ctx.r3.s64 + 128;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r26,-2
	ctx.r28.s64 = ctx.r26.s64 + -2;
	// addi r27,r26,2
	ctx.r27.s64 = ctx.r26.s64 + 2;
loc_881C9424:
	// lwz r11,21796(r31)
	ctx.current_instruction = 0x881C9424;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21796);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881c9450
	if (!ctx.cr6.lt) goto loc_881C9450;
	// lwz r11,21808(r31)
	ctx.current_instruction = 0x881C9430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21808);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// srawi r7,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 7;
	// rlwinm r4,r8,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r29,r7,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x881c9488
	goto loc_881C9488;
loc_881C9450:
	// lwz r11,21812(r31)
	ctx.current_instruction = 0x881C9450;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21812);
	// lwz r9,21804(r31)
	ctx.current_instruction = 0x881C9454;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21804);
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// srawi r4,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 7;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r4,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r6,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_881C9488:
	// lwz r11,424(r31)
	ctx.current_instruction = 0x881C9488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C9498;
	sub_88202468(ctx, base);
loc_881C9498:
	// sthu r3,2(r28)
	ctx.current_instruction = 0x881C9498;
	ea = 2 + ctx.r28.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r28.u32 = ea;
	// lwz r11,424(r31)
	ctx.current_instruction = 0x881C949C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C94B0;
	sub_88202468(ctx, base);
loc_881C94B0:
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// sthu r10,-2(r27)
	ctx.current_instruction = 0x881C94B8;
	ea = -2 + ctx.r27.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x881c9424
	if (ctx.cr6.lt) goto loc_881C9424;
	// lwz r11,424(r31)
	ctx.current_instruction = 0x881C94C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// li r4,-128
	ctx.r4.s64 = -128;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x88202468
	ctx.lr = 0x881C94D8;
	sub_88202468(ctx, base);
loc_881C94D8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// sth r3,-128(r26)
	ctx.current_instruction = 0x881C94DC;
	REX_STORE_U16(ctx.r26.u32 + -128, ctx.r3.u16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwzx r6,r22,r31
	ctx.current_instruction = 0x881C94E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// ori r9,r11,45788
	ctx.r9.u64 = ctx.r11.u64 | 45788;
	// stwx r6,r31,r9
	ctx.current_instruction = 0x881C94EC;
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// ori r7,r10,45792
	ctx.r7.u64 = ctx.r10.u64 | 45792;
	// lwzx r5,r25,r31
	ctx.current_instruction = 0x881C94F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r5,r31,r7
	ctx.current_instruction = 0x881C94FC;
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CE678) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881CE678);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CE678;
	ctx.current_instruction = 0x881CE678;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x881cdce8
	sub_881CDCE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CE938) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881CE938);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CE938;
	ctx.current_instruction = 0x881CE938;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x881ce688
	sub_881CE688(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CE948) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881CE948);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CE948;
	ctx.current_instruction = 0x881CE948;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x881ce688
	sub_881CE688(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CE968) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881CE968);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CE968;
	ctx.current_instruction = 0x881CE968;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vspltisw v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_set1_epi32(int(0x0)));
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x881ce688
	sub_881CE688(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CE998) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881CE998);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CE998;
	ctx.current_instruction = 0x881CE998;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,128(r3)
	ctx.current_instruction = 0x881CE9A0;
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,124(r3)
	ctx.current_instruction = 0x881CE9A4;
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,64(r3)
	ctx.current_instruction = 0x881CE9A8;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,96(r3)
	ctx.current_instruction = 0x881CE9AC;
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r10,76(r3)
	ctx.current_instruction = 0x881CE9B0;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881CEA68) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881CEA68);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CEA68;
	ctx.current_instruction = 0x881CEA68;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r3)
	ctx.current_instruction = 0x881CEA6C;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,68(r3)
	ctx.current_instruction = 0x881CEA70;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,0(r3)
	ctx.current_instruction = 0x881CEA74;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,72(r3)
	ctx.current_instruction = 0x881CEA78;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	ctx.current_instruction = 0x881CEA7C;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881CEBB0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881CEBB0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CEBB0;
	ctx.current_instruction = 0x881CEBB0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x881cebbc
	if (!ctx.cr6.lt) goto loc_881CEBBC;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_881CEBBC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x881cebc8
	if (!ctx.cr6.lt) goto loc_881CEBC8;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_881CEBC8:
	// stw r4,24(r3)
	ctx.current_instruction = 0x881CEBC8;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r5,28(r3)
	ctx.current_instruction = 0x881CEBCC;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r6,32(r3)
	ctx.current_instruction = 0x881CEBD0;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r7,36(r3)
	ctx.current_instruction = 0x881CEBD4;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881CF8E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CF8E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CF8E8) {
			switch (rex_dispatch_address) {
				case 0x881CF8F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CF8E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881CF8F0: goto loc_881CF8F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881CF8F0;
	__savegprlr_19(ctx, base);
loc_881CF8F0:
	// lwz r6,32(r3)
	ctx.current_instruction = 0x881CF8F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,48(r3)
	ctx.current_instruction = 0x881CF8F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// lwz r9,24(r3)
	ctx.current_instruction = 0x881CF8FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r31,28(r3)
	ctx.current_instruction = 0x881CF900;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// addze r21,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r21.s64 = temp.s64;
	// lwz r7,52(r3)
	ctx.current_instruction = 0x881CF90C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// lwz r30,72(r3)
	ctx.current_instruction = 0x881CF914;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r28,4(r11)
	ctx.current_instruction = 0x881CF918;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addze r22,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r22.s64 = temp.s64;
	// lwz r24,8(r11)
	ctx.current_instruction = 0x881CF920;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r28,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r22,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 7) & 0xFFFFFF80;
	// addi r29,r11,-128
	ctx.r29.s64 = ctx.r11.s64 + -128;
	// addi r27,r10,-128
	ctx.r27.s64 = ctx.r10.s64 + -128;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r8,r29,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// rotlwi r10,r27,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// divw r11,r11,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r11.s32 / ctx.r6.s32 : 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// andc r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// divw r10,r29,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r29.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r29.s32 / ctx.r11.s32 : 0);
	// andc r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// divw r9,r27,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(ctx.r27.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r27.s32 / ctx.r11.s32 : 0);
	// andc r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 & ~ctx.r26.u64;
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// mullw r8,r28,r4
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r23,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r23.s64 = temp.s64;
	// twlgei r29,-1
	if (ctx.r29.s32 == -1 || ctx.r29.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// twlgei r27,-1
	if (ctx.r27.s32 == -1 || ctx.r27.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addi r20,r9,-1
	ctx.r20.s64 = ctx.r9.s64 + -1;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881cf9bc
	if (ctx.cr6.eq) goto loc_881CF9BC;
	// lwz r10,76(r3)
	ctx.current_instruction = 0x881CF998;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881cf9bc
	if (!ctx.cr6.eq) goto loc_881CF9BC;
	// lwz r10,8(r3)
	ctx.current_instruction = 0x881CF9A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881cf9bc
	if (!ctx.cr6.eq) goto loc_881CF9BC;
	// lwz r31,80(r3)
	ctx.current_instruction = 0x881CF9B0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r25,92(r3)
	ctx.current_instruction = 0x881CF9B4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// b 0x881cf9d0
	goto loc_881CF9D0;
loc_881CF9BC:
	// lwz r10,32(r3)
	ctx.current_instruction = 0x881CF9BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,64(r3)
	ctx.current_instruction = 0x881CF9C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r31,r7,r9
	ctx.r31.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_881CF9D0:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bge cr6,0x881cfab4
	if (!ctx.cr6.lt) goto loc_881CFAB4;
	// subf r27,r4,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_881CF9E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x881cfa38
	if (!ctx.cr6.gt) goto loc_881CFA38;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_881CFA00:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r7,r11,25
	ctx.r7.u64 = ctx.r11.u32 & 0x7F;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subfic r30,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	ctx.r30.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// lbzx r19,r6,r9
	ctx.current_instruction = 0x881CFA10;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r9,r9,r8
	ctx.current_instruction = 0x881CFA14;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// mullw r7,r19,r7
	ctx.r7.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r10,r31
	ctx.current_instruction = 0x881CFA2C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881cfa00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CFA00;
loc_881CFA38:
	// lwz r9,32(r3)
	ctx.current_instruction = 0x881CFA38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881cfaa4
	if (!ctx.cr6.lt) goto loc_881CFAA4;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_881CFA48:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881cfa6c
	if (!ctx.cr6.gt) goto loc_881CFA6C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881cfa6c
	if (!ctx.cr6.gt) goto loc_881CFA6C;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_881CFA6C:
	// lbzx r9,r9,r8
	ctx.current_instruction = 0x881CFA6C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// subfic r19,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r19.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r7,r7,r8
	ctx.current_instruction = 0x881CFA74;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mullw r9,r9,r19
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r10,r31
	ctx.current_instruction = 0x881CFA90;
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,32(r3)
	ctx.current_instruction = 0x881CFA98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881cfa48
	if (ctx.cr6.lt) goto loc_881CFA48;
loc_881CFAA4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// bne 0x881cf9e8
	if (!ctx.cr0.eq) goto loc_881CF9E8;
loc_881CFAB4:
	// lwz r7,44(r3)
	ctx.current_instruction = 0x881CFAB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r26,r28,r24
	ctx.r26.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r24.s32);
	// lwz r11,72(r3)
	ctx.current_instruction = 0x881CFABC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r9,52(r3)
	ctx.current_instruction = 0x881CFAC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mullw r10,r7,r4
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r10,r11,r22
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + ctx.r26.u64;
	// beq cr6,0x881cfb08
	if (ctx.cr6.eq) goto loc_881CFB08;
	// lwz r10,76(r3)
	ctx.current_instruction = 0x881CFAE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881cfb08
	if (!ctx.cr6.eq) goto loc_881CFB08;
	// lwz r10,8(r3)
	ctx.current_instruction = 0x881CFAF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881cfb08
	if (!ctx.cr6.eq) goto loc_881CFB08;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x881CFAFC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r27,96(r3)
	ctx.current_instruction = 0x881CFB00;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x881cfb24
	goto loc_881CFB24;
loc_881CFB08:
	// lwz r6,32(r3)
	ctx.current_instruction = 0x881CFB08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r10,r11,r21
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// lwz r9,64(r3)
	ctx.current_instruction = 0x881CFB10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mullw r6,r6,r24
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r24.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_881CFB24:
	// mullw r10,r7,r5
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// addze r30,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r30.s64 = temp.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x881cfc20
	if (!ctx.cr6.lt) goto loc_881CFC20;
loc_881CFB3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881cfb90
	if (!ctx.cr6.gt) goto loc_881CFB90;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_881CFB54:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r7,r11,25
	ctx.r7.u64 = ctx.r11.u32 & 0x7F;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// subfic r30,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	ctx.r30.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r25,r6,r9
	ctx.current_instruction = 0x881CFB68;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r9,r9,r8
	ctx.current_instruction = 0x881CFB6C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// mullw r7,r25,r7
	ctx.r7.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r10,r31
	ctx.current_instruction = 0x881CFB84;
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881cfb54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CFB54;
loc_881CFB90:
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x881cfbfc
	if (!ctx.cr6.lt) goto loc_881CFBFC;
	// subf r9,r10,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r10.u64;
	// addi r30,r22,-1
	ctx.r30.s64 = ctx.r22.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881CFBA4:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881cfbcc
	if (!ctx.cr6.gt) goto loc_881CFBCC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881cfbcc
	if (!ctx.cr6.gt) goto loc_881CFBCC;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_881CFBCC:
	// lbzx r9,r9,r8
	ctx.current_instruction = 0x881CFBCC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// subfic r25,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r25.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r7,r7,r8
	ctx.current_instruction = 0x881CFBD4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// mullw r7,r7,r6
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r10,r31
	ctx.current_instruction = 0x881CFBF0;
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881cfba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CFBA4;
loc_881CFBFC:
	// lwz r7,44(r3)
	ctx.current_instruction = 0x881CFBFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + ctx.r22.u64;
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x881cfb3c
	if (ctx.cr6.lt) goto loc_881CFB3C;
loc_881CFC20:
	// lwz r11,44(r3)
	ctx.current_instruction = 0x881CFC20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,52(r3)
	ctx.current_instruction = 0x881CFC24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r8,72(r3)
	ctx.current_instruction = 0x881CFC2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// mullw r9,r11,r23
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// beq cr6,0x881cfc78
	if (ctx.cr6.eq) goto loc_881CFC78;
	// lwz r11,76(r3)
	ctx.current_instruction = 0x881CFC54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881cfc78
	if (!ctx.cr6.eq) goto loc_881CFC78;
	// lwz r11,8(r3)
	ctx.current_instruction = 0x881CFC60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881cfc78
	if (!ctx.cr6.eq) goto loc_881CFC78;
	// lwz r31,88(r3)
	ctx.current_instruction = 0x881CFC6C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r27,100(r3)
	ctx.current_instruction = 0x881CFC70;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// b 0x881cfcac
	goto loc_881CFCAC;
loc_881CFC78:
	// lwz r11,44(r3)
	ctx.current_instruction = 0x881CFC78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// lwz r9,32(r3)
	ctx.current_instruction = 0x881CFC80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r10,64(r3)
	ctx.current_instruction = 0x881CFC88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 1;
	// mullw r8,r11,r23
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// addze r11,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r9,r9,r24
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_881CFCAC:
	// mullw r11,r7,r4
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x881cfd9c
	if (!ctx.cr6.lt) goto loc_881CFD9C;
loc_881CFCC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881cfd10
	if (!ctx.cr6.gt) goto loc_881CFD10;
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_881CFCD8:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subfic r4,r8,128
	ctx.xer.ca = ctx.r8.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r8.u64;
	// lbzx r30,r7,r9
	ctx.current_instruction = 0x881CFCE8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r9,r9,r6
	ctx.current_instruction = 0x881CFCEC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// mullw r8,r30,r8
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r4,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 7;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// stbx r9,r10,r31
	ctx.current_instruction = 0x881CFD04;
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881cfcd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CFCD8;
loc_881CFD10:
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x881cfd78
	if (!ctx.cr6.lt) goto loc_881CFD78;
	// subf r9,r10,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r10.u64;
	// addi r4,r22,-1
	ctx.r4.s64 = ctx.r22.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881CFD24:
	// srawi r9,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 7;
	// clrlwi r7,r11,25
	ctx.r7.u64 = ctx.r11.u32 & 0x7F;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x881cfd48
	if (!ctx.cr6.gt) goto loc_881CFD48;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x881cfd48
	if (!ctx.cr6.gt) goto loc_881CFD48;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_881CFD48:
	// lbzx r9,r9,r6
	ctx.current_instruction = 0x881CFD48;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// subfic r30,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	ctx.r30.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// lbzx r8,r8,r6
	ctx.current_instruction = 0x881CFD50;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 7;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r10,r31
	ctx.current_instruction = 0x881CFD6C;
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x881cfd24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CFD24;
loc_881CFD78:
	// lwz r11,44(r3)
	ctx.current_instruction = 0x881CFD78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// add r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 + ctx.r22.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881cfcc0
	if (ctx.cr6.lt) goto loc_881CFCC0;
loc_881CFD9C:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DE9C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DE9C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DE9C8) {
			switch (rex_dispatch_address) {
				case 0x881DE9D0:
				case 0x881DEAD8:
				case 0x881DEAF0:
				case 0x881DEBEC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DE9C8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DE9D0: goto loc_881DE9D0;
		case 0x881DEAD8: goto loc_881DEAD8;
		case 0x881DEAF0: goto loc_881DEAF0;
		case 0x881DEBEC: goto loc_881DEBEC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881DE9D0;
	__savegprlr_14(ctx, base);
loc_881DE9D0:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x881DE9D0;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r14,356(r1)
	ctx.current_instruction = 0x881DE9D4;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r4,284(r1)
	ctx.current_instruction = 0x881DE9DC;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r11,r14,31
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r14.s32 >> 31;
	// stw r9,324(r1)
	ctx.current_instruction = 0x881DE9E8;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r3,276(r1)
	ctx.current_instruction = 0x881DE9F0;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// xor r10,r14,r11
	ctx.r10.u64 = ctx.r14.u64 ^ ctx.r11.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// beq cr6,0x881dea18
	if (ctx.cr6.eq) goto loc_881DEA18;
	// srawi r6,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r14.s32 >> 1;
loc_881DEA18:
	// lwz r25,364(r1)
	ctx.current_instruction = 0x881DEA18;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// srawi r11,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 31;
	// xor r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x881dea34
	if (ctx.cr6.eq) goto loc_881DEA34;
	// srawi r25,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 1;
loc_881DEA34:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r30,340(r1)
	ctx.current_instruction = 0x881DEA38;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r10,r18,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 16) & 0xFFFF0000;
	// lwz r7,348(r1)
	ctx.current_instruction = 0x881DEA40;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// rlwinm r11,r17,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 16) & 0xFFFF0000;
	// lwz r3,380(r1)
	ctx.current_instruction = 0x881DEA48;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subf r31,r9,r10
	ctx.r31.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r29,r9,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// rotlwi r8,r29,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// addi r27,r30,-1
	ctx.r27.s64 = ctx.r30.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lis r26,0
	ctx.r26.s64 = 0;
	// andc r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 & ~ctx.r9.u64;
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// clrlwi r23,r3,30
	ctx.r23.u64 = ctx.r3.u32 & 0x3;
	// ori r26,r26,32768
	ctx.r26.u64 = ctx.r26.u64 | 32768;
	// divw r24,r31,r27
	ctx.r24.u64 = uint32_t((ctx.r27.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r31.s32 / ctx.r27.s32 : 0);
	// twllei r27,0
	if (ctx.r27.s32 == 0 || ctx.r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r15,r29,r7
	ctx.r15.u64 = uint32_t((ctx.r7.s32 && !(ctx.r29.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r29.s32 / ctx.r7.s32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x881deaf8
	if (!ctx.cr6.eq) goto loc_881DEAF8;
	// srawi r9,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x881deaf8
	if (!ctx.cr6.eq) goto loc_881DEAF8;
	// rlwinm r29,r15,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r24,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,17
	ctx.r31.s64 = 17;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	ctx.current_instruction = 0x881DEAC8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// bl 0x881de5c8
	ctx.lr = 0x881DEAD8;
	sub_881DE5C8(ctx, base);
loc_881DEAD8:
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r3,388(r1)
	ctx.current_instruction = 0x881DEAE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r31,84(r1)
	ctx.current_instruction = 0x881DEAE8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x881de5c8
	ctx.lr = 0x881DEAF0;
	sub_881DE5C8(ctx, base);
loc_881DEAF0:
	// lwz r16,96(r1)
	ctx.current_instruction = 0x881DEAF0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x881deba8
	goto loc_881DEBA8;
loc_881DEAF8:
	// srawi r9,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r15.s32 >> 4;
	// stw r11,96(r1)
	ctx.current_instruction = 0x881DEAFC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r20,r26,r8
	ctx.r20.u64 = ctx.r8.u64 - ctx.r26.u64;
	// cmpw cr6,r20,r26
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881deba8
	if (ctx.cr6.lt) goto loc_881DEBA8;
	// srawi r11,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 4;
	// lwz r22,388(r1)
	ctx.current_instruction = 0x881DEB20;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// rlwinm r21,r15,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r27,r26,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r26.u64;
loc_881DEB38:
	// srawi r9,r23,17
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881deb94
	if (ctx.cr6.lt) goto loc_881DEB94;
	// mullw r31,r9,r5
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r30,r31,r19
	ctx.r30.u64 = ctx.r31.u64 + ctx.r19.u64;
	// add r29,r7,r22
	ctx.r29.u64 = ctx.r7.u64 + ctx.r22.u64;
	// rlwinm r28,r24,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_881DEB60:
	// srawi r9,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 17;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r14,r31,r9
	ctx.r14.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// lbzx r9,r30,r9
	ctx.current_instruction = 0x881DEB70;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// lbzx r14,r14,r4
	ctx.current_instruction = 0x881DEB74;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r14.u32 + ctx.r4.u32);
	// stbx r14,r8,r3
	ctx.current_instruction = 0x881DEB78;
	REX_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r14.u8);
	// stbx r9,r29,r11
	ctx.current_instruction = 0x881DEB7C;
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u8);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// ble cr6,0x881deb60
	if (!ctx.cr6.gt) goto loc_881DEB60;
	// lwz r14,356(r1)
	ctx.current_instruction = 0x881DEB8C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r28,276(r1)
	ctx.current_instruction = 0x881DEB90;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_881DEB94:
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmpw cr6,r23,r20
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x881deb38
	if (!ctx.cr6.gt) goto loc_881DEB38;
	// lwz r30,340(r1)
	ctx.current_instruction = 0x881DEBA4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_881DEBA8:
	// clrlwi r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881debf4
	if (!ctx.cr6.eq) goto loc_881DEBF4;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881debf4
	if (!ctx.cr6.eq) goto loc_881DEBF4;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r5,324(r1)
	ctx.current_instruction = 0x881DEBC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// lwz r4,284(r1)
	ctx.current_instruction = 0x881DEBCC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x881DEBD4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881de5c8
	ctx.lr = 0x881DEBEC;
	sub_881DE5C8(ctx, base);
loc_881DEBEC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881DEBF4:
	// srawi r11,r15,4
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 4;
	// lwz r10,96(r1)
	ctx.current_instruction = 0x881DEBF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r26,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r26.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881deca0
	if (ctx.cr6.lt) goto loc_881DECA0;
	// srawi r11,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 4;
	// rlwinm r31,r15,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r30,r14,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + ctx.r16.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// subf r4,r26,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r26.u64;
loc_881DEC30:
	// add r11,r3,r15
	ctx.r11.u64 = ctx.r3.u64 + ctx.r15.u64;
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// srawi r6,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881dec90
	if (ctx.cr6.lt) goto loc_881DEC90;
	// lwz r5,324(r1)
	ctx.current_instruction = 0x881DEC4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mullw r7,r9,r5
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r6,284(r1)
	ctx.current_instruction = 0x881DEC58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r8,r14
	ctx.r5.u64 = ctx.r8.u64 + ctx.r14.u64;
loc_881DEC68:
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// lwz r28,364(r1)
	ctx.current_instruction = 0x881DEC6C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lbzx r27,r7,r9
	ctx.current_instruction = 0x881DEC78;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r9,r6,r9
	ctx.current_instruction = 0x881DEC7C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stbx r27,r8,r10
	ctx.current_instruction = 0x881DEC80;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r27.u8);
	// stbx r9,r5,r10
	ctx.current_instruction = 0x881DEC84;
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// ble cr6,0x881dec68
	if (!ctx.cr6.gt) goto loc_881DEC68;
loc_881DEC90:
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x881dec30
	if (!ctx.cr6.gt) goto loc_881DEC30;
loc_881DECA0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E3E78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E3E78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E3E78) {
			switch (rex_dispatch_address) {
				case 0x881E3E80:
				case 0x881E41F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E3E78;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E3E80: goto loc_881E3E80;
		case 0x881E41F8: goto loc_881E41F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x881E3E80;
	__savegprlr_15(ctx, base);
loc_881E3E80:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x881E3E80;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r1)
	ctx.current_instruction = 0x881E3E84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r18,r6,0,0,26
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// stw r9,308(r1)
	ctx.current_instruction = 0x881E3E90;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r30,16
	ctx.r30.s64 = 16;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r15,r8,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// add r31,r4,r8
	ctx.r31.u64 = ctx.r4.u64 + ctx.r8.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x881e3f5c
	if (!ctx.cr6.gt) goto loc_881E3F5C;
	// addi r11,r18,-1
	ctx.r11.s64 = ctx.r18.s64 + -1;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r5,1
	ctx.r26.s64 = ctx.r5.s64 + 1;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_881E3EF4:
	// addi r29,r7,-1
	ctx.r29.s64 = ctx.r7.s64 + -1;
	// lvrx128 v63,r27,r7
	temp.u32 = ctx.r27.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r28,r6,16
	ctx.r28.s64 = ctx.r6.s64 + 16;
	// vor128 v11,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lvrx128 v61,r30,r29
	temp.u32 = ctx.r30.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r29
	temp.u32 = ctx.r29.u32;
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
	// vsrah v4,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v3,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v11,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmrghb v2,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v1,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// stvlx v2,0,r6
	ctx.current_instruction = 0x881E3F44;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvrx v2,r6,r30
	ctx.current_instruction = 0x881E3F48;
	ea = ctx.r6.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v2.u8[i]);
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// stvlx v1,0,r28
	ctx.current_instruction = 0x881E3F50;
	ea = ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvrx v1,r28,r30
	ctx.current_instruction = 0x881E3F54;
	ea = ctx.r28.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v1.u8[i]);
	// bdnz 0x881e3ef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E3EF4;
loc_881E3F5C:
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x881e3fac
	if (!ctx.cr6.lt) goto loc_881E3FAC;
	// subf r6,r11,r16
	ctx.r6.u64 = ctx.r16.u64 - ctx.r11.u64;
	// add r7,r26,r3
	ctx.r7.u64 = ctx.r26.u64 + ctx.r3.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r28,r4,1
	ctx.r28.s64 = ctx.r4.s64 + 1;
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_881E3F84:
	// lbzx r27,r5,r3
	ctx.current_instruction = 0x881E3F84;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbzu r6,1(r7)
	ctx.current_instruction = 0x881E3F8C;
	ea = 1 + ctx.r7.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// rlwinm r6,r6,31,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0xFF;
	// stbx r27,r11,r4
	ctx.current_instruction = 0x881E3F9C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r27.u8);
	// stbx r6,r28,r11
	ctx.current_instruction = 0x881E3FA0;
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x881e3f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E3F84;
loc_881E3FAC:
	// lbzx r5,r5,r3
	ctx.current_instruction = 0x881E3FAC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r7,324(r1)
	ctx.current_instruction = 0x881E3FB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// add r29,r3,r9
	ctx.r29.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// stbx r5,r11,r4
	ctx.current_instruction = 0x881E3FC0;
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u8);
	// stb r5,1(r6)
	ctx.current_instruction = 0x881E3FC4;
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r5.u8);
	// bge cr6,0x881e41e8
	if (!ctx.cr6.lt) goto loc_881E41E8;
	// subf r11,r7,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// add r6,r31,r8
	ctx.r6.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r17,r8,-15
	ctx.r17.s64 = ctx.r8.s64 + -15;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r20,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r20.u64 = static_cast<uint64_t>(16) - ctx.r8.u64;
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
loc_881E3FE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r21,1
	ctx.r21.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x881e4120
	if (!ctx.cr6.gt) goto loc_881E4120;
	// addi r11,r18,-1
	ctx.r11.s64 = ctx.r18.s64 + -1;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r20,r6
	ctx.r10.u64 = ctx.r20.u64 + ctx.r6.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r28,r31,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r31.u64;
	// subf r27,r31,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r26,r6,r22
	ctx.r26.u64 = ctx.r22.u64 - ctx.r6.u64;
	// addi r21,r5,1
	ctx.r21.s64 = ctx.r5.s64 + 1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
loc_881E4034:
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// lvlx128 v59,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r30,r7
	temp.u32 = ctx.r30.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r25,r8,r26
	ctx.r25.u64 = ctx.r8.u64 + ctx.r26.u64;
	// vor128 v11,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v57,r8,r26
	temp.u32 = ctx.r8.u32 + ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r24,r28,r10
	ctx.r24.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lvlx128 v56,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r10,-16
	ctx.r3.s64 = ctx.r10.s64 + -16;
	// lvlx128 v55,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lvrx128 v54,r30,r4
	temp.u32 = ctx.r30.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrglb v8,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrghb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v53,r30,r25
	temp.u32 = ctx.r30.u32 + ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + ctx.r27.u64;
	// vor128 v10,v57,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v52,r23,r24
	temp.u32 = ctx.r23.u32 + ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v56,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vmrglb v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v2,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmrglb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v31,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrghb v30,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrah v29,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
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
	// vpkshus v10,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vmrghb v11,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmrglb v27,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v26,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v25,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v24,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v23,v4,v27
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vaddshs v22,v3,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v21,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v20,v30,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vsrah v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v51,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vpkshus128 v50,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvlx128 v51,r0,r3
	ctx.current_instruction = 0x881E40F0;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvrx128 v51,r3,r30
	ctx.current_instruction = 0x881E40F4;
	ea = ctx.r3.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// stvlx128 v50,r0,r10
	ctx.current_instruction = 0x881E40F8;
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvrx128 v50,r10,r30
	ctx.current_instruction = 0x881E40FC;
	ea = ctx.r10.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
	// stvlx v11,0,r8
	ctx.current_instruction = 0x881E4100;
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvrx v11,r8,r30
	ctx.current_instruction = 0x881E4104;
	ea = ctx.r8.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// stvlx v12,r10,r27
	ctx.current_instruction = 0x881E410C;
	ea = ctx.r10.u32 + ctx.r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvrx v12,r4,r30
	ctx.current_instruction = 0x881E4114;
	ea = ctx.r4.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// bdnz 0x881e4034
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E4034;
	// lwz r9,308(r1)
	ctx.current_instruction = 0x881E411C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_881E4120:
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x881e41a8
	if (!ctx.cr6.lt) goto loc_881E41A8;
	// subf r8,r11,r16
	ctx.r8.u64 = ctx.r16.u64 - ctx.r11.u64;
	// add r10,r20,r6
	ctx.r10.u64 = ctx.r20.u64 + ctx.r6.u64;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// add r8,r21,r29
	ctx.r8.u64 = ctx.r21.u64 + ctx.r29.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r22,1
	ctx.r27.s64 = ctx.r22.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r26,r10,-15
	ctx.r26.s64 = ctx.r10.s64 + -15;
	// add r25,r10,r17
	ctx.r25.u64 = ctx.r10.u64 + ctx.r17.u64;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// subf r24,r31,r22
	ctx.r24.u64 = ctx.r22.u64 - ctx.r31.u64;
	// subf r23,r31,r6
	ctx.r23.u64 = ctx.r6.u64 - ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881E415C:
	// lbzx r21,r5,r29
	ctx.current_instruction = 0x881E415C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r29.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzu r7,1(r4)
	ctx.current_instruction = 0x881E4164;
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbzx r28,r27,r11
	ctx.current_instruction = 0x881E416C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// add r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 + ctx.r21.u64;
	// lbzx r3,r24,r10
	ctx.current_instruction = 0x881E4178;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// rlwinm r7,r7,31,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0xFF;
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + ctx.r21.u64;
	// add r8,r28,r7
	ctx.r8.u64 = ctx.r28.u64 + ctx.r7.u64;
	// rlwinm r3,r3,31,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0xFF;
	// rlwinm r8,r8,31,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0xFF;
	// stbx r3,r11,r31
	ctx.current_instruction = 0x881E4190;
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u8);
	// stbx r8,r26,r11
	ctx.current_instruction = 0x881E4194;
	REX_STORE_U8(ctx.r26.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r7,r25,r11
	ctx.current_instruction = 0x881E4198;
	REX_STORE_U8(ctx.r25.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r21,r10,r23
	ctx.current_instruction = 0x881E41A0;
	REX_STORE_U8(ctx.r10.u32 + ctx.r23.u32, ctx.r21.u8);
	// bdnz 0x881e415c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E415C;
loc_881E41A8:
	// lbzx r4,r5,r29
	ctx.current_instruction = 0x881E41A8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r29.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r5,r11,r22
	ctx.current_instruction = 0x881E41B0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r22,r22,r15
	ctx.r22.u64 = ctx.r22.u64 + ctx.r15.u64;
	// rlwinm r7,r3,31,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0xFF;
	// add r31,r31,r15
	ctx.r31.u64 = ctx.r31.u64 + ctx.r15.u64;
	// stb r7,0(r10)
	ctx.current_instruction = 0x881E41CC;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// add r29,r29,r9
	ctx.r29.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stb r7,1(r10)
	ctx.current_instruction = 0x881E41D4;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stbx r4,r6,r11
	ctx.current_instruction = 0x881E41D8;
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r4.u8);
	// add r6,r6,r15
	ctx.r6.u64 = ctx.r6.u64 + ctx.r15.u64;
	// stb r4,1(r8)
	ctx.current_instruction = 0x881E41E0;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// bne 0x881e3fe8
	if (!ctx.cr0.eq) goto loc_881E3FE8;
loc_881E41E8:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x880547a0
	ctx.lr = 0x881E41F8;
	sub_880547A0(ctx, base);
loc_881E41F8:
	// lbzx r10,r22,r16
	ctx.current_instruction = 0x881E41F8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r16.u32);
	// add r11,r31,r16
	ctx.r11.u64 = ctx.r31.u64 + ctx.r16.u64;
	// stbx r10,r31,r16
	ctx.current_instruction = 0x881E4200;
	REX_STORE_U8(ctx.r31.u32 + ctx.r16.u32, ctx.r10.u8);
	// stb r10,1(r11)
	ctx.current_instruction = 0x881E4204;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EEAC8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEAC8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEAC8;
	ctx.current_instruction = 0x881EEAC8;
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// addi r11,r11,-30736
	ctx.r11.s64 = ctx.r11.s64 + -30736;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881EEAD0;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x881eea70
	sub_881EEA70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EEC20) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EEC20;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EEC20) {
			switch (rex_dispatch_address) {
				case 0x881EEC40:
				case 0x881EEC50:
				case 0x881EECB8:
				case 0x881EECC4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEC20;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EEC40: goto loc_881EEC40;
		case 0x881EEC50: goto loc_881EEC50;
		case 0x881EECB8: goto loc_881EECB8;
		case 0x881EECC4: goto loc_881EECC4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EEC24;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EEC28;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881EEC2C;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x881eec48
	goto loc_881EEC48;
loc_881EEC38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880524f8
	ctx.lr = 0x881EEC40;
	sub_880524F8(ctx, base);
loc_881EEC40:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x881eec6c
	if (ctx.cr0.eq) goto loc_881EEC6C;
loc_881EEC48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88052e38
	ctx.lr = 0x881EEC50;
	sub_88052E38(ctx, base);
loc_881EEC50:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x881eec38
	if (ctx.cr0.eq) goto loc_881EEC38;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EEC5C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EEC64;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881EEC6C:
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r31,r11,23828
	ctx.r31.s64 = ctx.r11.s64 + 23828;
	// lwz r8,23840(r7)
	ctx.current_instruction = 0x881EEC78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 23840);
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881eecb8
	if (!ctx.cr0.eq) goto loc_881EECB8;
	// lis r10,-30715
	ctx.r10.s64 = -2012938240;
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// addi r10,r10,-30728
	ctx.r10.s64 = ctx.r10.s64 + -30728;
	// addi r9,r11,-30736
	ctx.r9.s64 = ctx.r11.s64 + -30736;
	// stw r10,4(r31)
	ctx.current_instruction = 0x881EEC94;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// ori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 | 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	ctx.current_instruction = 0x881EECA0;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,23840(r7)
	ctx.current_instruction = 0x881EECA4;
	REX_STORE_U32(ctx.r7.u32 + 23840, ctx.r11.u32);
	// lis r11,-30684
	ctx.r11.s64 = -2010906624;
	// stb r10,8(r31)
	ctx.current_instruction = 0x881EECAC;
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// addi r3,r11,13800
	ctx.r3.s64 = ctx.r11.s64 + 13800;
	// bl 0x881f0718
	ctx.lr = 0x881EECB8;
	sub_881F0718(ctx, base);
loc_881EECB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881eebc8
	ctx.lr = 0x881EECC4;
	sub_881EEBC8(ctx, base);
loc_881EECC4:
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26412
	ctx.r4.s64 = ctx.r11.s64 + -26412;
	// bl 0x881f0740
	ctx.lr = 0x881EECD4;
	sub_881F0740(ctx, base);
}

DEFINE_REX_FUNC(__savevmx_25) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED38);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED38;
	ctx.current_instruction = 0x881EED38;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_69) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED9C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED9C;
	ctx.current_instruction = 0x881EED9C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_101) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE9C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE9C;
	ctx.current_instruction = 0x881EEE9C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_16) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF88);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEF88;
	ctx.current_instruction = 0x881EEF88;
	uint32_t ea{};
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_93) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF0F4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF0F4;
	ctx.current_instruction = 0x881EF0F4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_100) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF12C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF12C;
	ctx.current_instruction = 0x881EF12C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_881F0C28) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F0C28);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0C28;
	ctx.current_instruction = 0x881F0C28;
	// stfd f1,16(r1)
	ctx.current_instruction = 0x881F0C28;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.current_instruction = 0x881F0C2C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// addi r11,r11,-1022
	ctx.r11.s64 = ctx.r11.s64 + -1022;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F10A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F10A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F10A0) {
			switch (rex_dispatch_address) {
				case 0x881F10A8:
				case 0x881F10CC:
				case 0x881F1120:
				case 0x881F1148:
				case 0x881F1174:
				case 0x881F1190:
				case 0x881F11A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F10A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F10A8: goto loc_881F10A8;
		case 0x881F10CC: goto loc_881F10CC;
		case 0x881F1120: goto loc_881F1120;
		case 0x881F1148: goto loc_881F1148;
		case 0x881F1174: goto loc_881F1174;
		case 0x881F1190: goto loc_881F1190;
		case 0x881F11A8: goto loc_881F11A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881F10A8;
	__savegprlr_27(ctx, base);
loc_881F10A8:
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881F10AC;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	ctx.current_instruction = 0x881F10B4;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	ctx.current_instruction = 0x881F10C0;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r28,88(r31)
	ctx.current_instruction = 0x881F10C4;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// bl 0x88052218
	ctx.lr = 0x881F10CC;
	sub_88052218(ctx, base);
loc_881F10CC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// addi r29,r11,24320
	ctx.r29.s64 = ctx.r11.s64 + 24320;
	// addi r10,r10,24324
	ctx.r10.s64 = ctx.r10.s64 + 24324;
loc_881F10E0:
	// stw r28,80(r31)
	ctx.current_instruction = 0x881F10E0;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r11,0(r10)
	ctx.current_instruction = 0x881F10E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881f119c
	if (!ctx.cr6.lt) goto loc_881F119C;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x881F10F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.current_instruction = 0x881F10F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881f1190
	if (ctx.cr6.eq) goto loc_881F1190;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.current_instruction = 0x881F1108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f1190
	if (ctx.cr0.eq) goto loc_881F1190;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881ef690
	ctx.lr = 0x881F1120;
	sub_881EF690(ctx, base);
loc_881F1120:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x881F1124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.current_instruction = 0x881F1128;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.current_instruction = 0x881F112C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881f1184
	if (ctx.cr0.eq) goto loc_881F1184;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x881f1160
	if (!ctx.cr6.eq) goto loc_881F1160;
	// bl 0x881f1020
	ctx.lr = 0x881F1148;
	sub_881F1020(ctx, base);
loc_881F1148:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x881f1184
	if (ctx.cr6.eq) goto loc_881F1184;
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881F1150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	ctx.current_instruction = 0x881F1158;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x881f1184
	goto loc_881F1184;
loc_881F1160:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x881f1184
	if (!ctx.cr6.eq) goto loc_881F1184;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f1184
	if (ctx.cr0.eq) goto loc_881F1184;
	// bl 0x881f1020
	ctx.lr = 0x881F1174;
	sub_881F1020(ctx, base);
loc_881F1174:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x881f1184
	if (!ctx.cr6.eq) goto loc_881F1184;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,88(r31)
	ctx.current_instruction = 0x881F1180;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_881F1184:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x881f1214
	ctx.lr = 0x881F1190;
	sub_881F1214(ctx, base);
loc_881F1190:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x881f10e0
	goto loc_881F10E0;
loc_881F119C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x881f11c4
	ctx.lr = 0x881F11A8;
	sub_881F11C4(ctx, base);
loc_881F11A8:
	// lwz r11,164(r31)
	ctx.current_instruction = 0x881F11A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881F11B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// beq cr6,0x881f11bc
	if (ctx.cr6.eq) goto loc_881F11BC;
	// lwz r3,88(r31)
	ctx.current_instruction = 0x881F11B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
loc_881F11BC:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881FD470) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881FD470;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881FD470) {
			switch (rex_dispatch_address) {
				case 0x881FD478:
				case 0x881FD504:
				case 0x881FD594:
				case 0x881FD5B4:
				case 0x881FD60C:
				case 0x881FD67C:
				case 0x881FD6E0:
				case 0x881FD770:
				case 0x881FD790:
				case 0x881FD810:
				case 0x881FD840:
				case 0x881FD85C:
				case 0x881FD8E4:
				case 0x881FD92C:
				case 0x881FD958:
				case 0x881FD9EC:
				case 0x881FDA34:
				case 0x881FDAB0:
				case 0x881FDAF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881FD470;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881FD478: goto loc_881FD478;
		case 0x881FD504: goto loc_881FD504;
		case 0x881FD594: goto loc_881FD594;
		case 0x881FD5B4: goto loc_881FD5B4;
		case 0x881FD60C: goto loc_881FD60C;
		case 0x881FD67C: goto loc_881FD67C;
		case 0x881FD6E0: goto loc_881FD6E0;
		case 0x881FD770: goto loc_881FD770;
		case 0x881FD790: goto loc_881FD790;
		case 0x881FD810: goto loc_881FD810;
		case 0x881FD840: goto loc_881FD840;
		case 0x881FD85C: goto loc_881FD85C;
		case 0x881FD8E4: goto loc_881FD8E4;
		case 0x881FD92C: goto loc_881FD92C;
		case 0x881FD958: goto loc_881FD958;
		case 0x881FD9EC: goto loc_881FD9EC;
		case 0x881FDA34: goto loc_881FDA34;
		case 0x881FDAB0: goto loc_881FDAB0;
		case 0x881FDAF8: goto loc_881FDAF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881FD478;
	__savegprlr_22(ctx, base);
loc_881FD478:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881FD478;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.current_instruction = 0x881FD47C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r30,0(r4)
	ctx.current_instruction = 0x881FD484;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,4(r4)
	ctx.current_instruction = 0x881FD48C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r24,36(r4)
	ctx.current_instruction = 0x881FD494;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r31,0(r3)
	ctx.current_instruction = 0x881FD49C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x881fd654
	if (ctx.cr6.eq) goto loc_881FD654;
	// ld r11,0(r31)
	ctx.current_instruction = 0x881FD4A8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r28,0(r30)
	ctx.current_instruction = 0x881FD4AC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rldicl r10,r11,10,54
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0x3FF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881FD4B8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881fd588
	if (ctx.cr6.lt) goto loc_881FD588;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881FD4C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881FD4D8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881FD4E0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881fd580
	if (!ctx.cr6.lt) goto loc_881FD580;
loc_881FD4E8:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881FD4E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881FD4EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881fd514
	if (ctx.cr6.lt) goto loc_881FD514;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881FD504;
	sub_88156440(ctx, base);
loc_881FD504:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881fd4e8
	if (ctx.cr6.eq) goto loc_881FD4E8;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881fd5cc
	goto loc_881FD5CC;
loc_881FD514:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881FD514;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881FD51C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881FD524;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881FD528;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881FD530;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881FD534;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881FD53C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881FD540;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881FD548;
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
	ctx.current_instruction = 0x881FD564;
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
	ctx.current_instruction = 0x881FD57C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881FD580:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881fd5cc
	goto loc_881FD5CC;
loc_881FD588:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881FD594;
	sub_88156500(ctx, base);
loc_881FD594:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
loc_881FD59C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881FD59C;
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
	ctx.lr = 0x881FD5B4;
	sub_88156500(ctx, base);
loc_881FD5B4:
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881FD5BC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881fd59c
	if (ctx.cr6.lt) goto loc_881FD59C;
loc_881FD5CC:
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x881fd5e4
	if (!ctx.cr6.eq) goto loc_881FD5E4;
loc_881FD5D8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881FD5E4:
	// ld r10,0(r31)
	ctx.current_instruction = 0x881FD5E4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x881FD5E8;
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
	ctx.current_instruction = 0x881FD5F8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	ctx.current_instruction = 0x881FD5FC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881fd60c
	if (!ctx.cr0.lt) goto loc_881FD60C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FD60C;
	sub_88156678(ctx, base);
loc_881FD60C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// lhzx r9,r11,r24
	ctx.current_instruction = 0x881FD618;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// clrlwi r26,r9,24
	ctx.r26.u64 = ctx.r9.u32 & 0xFF;
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// blt cr6,0x881fd640
	if (ctx.cr6.lt) goto loc_881FD640;
	// lwz r9,16(r27)
	ctx.current_instruction = 0x881FD62C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lbzx r8,r9,r26
	ctx.current_instruction = 0x881FD630;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x881fdb18
	goto loc_881FDB18;
loc_881FD640:
	// lwz r9,12(r27)
	ctx.current_instruction = 0x881FD640;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lbzx r8,r9,r26
	ctx.current_instruction = 0x881FD644;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x881fdb18
	goto loc_881FDB18;
loc_881FD654:
	// ld r10,0(r31)
	ctx.current_instruction = 0x881FD654;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x881FD658;
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
	ctx.current_instruction = 0x881FD668;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	ctx.current_instruction = 0x881FD66C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881fd67c
	if (!ctx.cr0.lt) goto loc_881FD67C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FD67C;
	sub_88156678(ctx, base);
loc_881FD67C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x881fd818
	if (ctx.cr6.eq) goto loc_881FD818;
	// ld r11,0(r31)
	ctx.current_instruction = 0x881FD684;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r28,0(r30)
	ctx.current_instruction = 0x881FD688;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rldicl r10,r11,10,54
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0x3FF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881FD694;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881fd764
	if (ctx.cr6.lt) goto loc_881FD764;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881FD6A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// stw r8,8(r31)
	ctx.current_instruction = 0x881FD6B4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// std r7,0(r31)
	ctx.current_instruction = 0x881FD6BC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// bge cr6,0x881fd75c
	if (!ctx.cr6.lt) goto loc_881FD75C;
loc_881FD6C4:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881FD6C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881FD6C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881fd6f0
	if (ctx.cr6.lt) goto loc_881FD6F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881FD6E0;
	sub_88156440(ctx, base);
loc_881FD6E0:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881fd6c4
	if (ctx.cr6.eq) goto loc_881FD6C4;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881fd7a8
	goto loc_881FD7A8;
loc_881FD6F0:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881FD6F0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881FD6F8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.current_instruction = 0x881FD700;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.current_instruction = 0x881FD704;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r11)
	ctx.current_instruction = 0x881FD70C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x881FD710;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r6,r10,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881FD718;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881FD71C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881FD724;
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
	ctx.current_instruction = 0x881FD740;
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
	ctx.current_instruction = 0x881FD758;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_881FD75C:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881fd7a8
	goto loc_881FD7A8;
loc_881FD764:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881FD770;
	sub_88156500(ctx, base);
loc_881FD770:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
loc_881FD778:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881FD778;
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
	ctx.lr = 0x881FD790;
	sub_88156500(ctx, base);
loc_881FD790:
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881FD798;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x881fd778
	if (ctx.cr6.lt) goto loc_881FD778;
loc_881FD7A8:
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x881fd5d8
	if (ctx.cr6.eq) goto loc_881FD5D8;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// lhzx r10,r11,r24
	ctx.current_instruction = 0x881FD7BC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// srawi r30,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 8;
	// blt cr6,0x881fd7d8
	if (ctx.cr6.lt) goto loc_881FD7D8;
	// lwz r10,24(r27)
	ctx.current_instruction = 0x881FD7D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// b 0x881fd7dc
	goto loc_881FD7DC;
loc_881FD7D8:
	// lwz r10,20(r27)
	ctx.current_instruction = 0x881FD7D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
loc_881FD7DC:
	// lbzx r10,r10,r30
	ctx.current_instruction = 0x881FD7DC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x881FD7E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r31)
	ctx.current_instruction = 0x881FD7E8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	ctx.current_instruction = 0x881FD7FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	ctx.current_instruction = 0x881FD800;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881fd810
	if (!ctx.cr0.lt) goto loc_881FD810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FD810;
	sub_88156678(ctx, base);
loc_881FD810:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x881fdb18
	goto loc_881FDB18;
loc_881FD818:
	// ld r10,0(r31)
	ctx.current_instruction = 0x881FD818;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x881FD81C;
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
	ctx.current_instruction = 0x881FD82C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	ctx.current_instruction = 0x881FD830;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881fd840
	if (!ctx.cr0.lt) goto loc_881FD840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881FD840;
	sub_88156678(ctx, base);
loc_881FD840:
	// lbz r10,1251(r28)
	ctx.current_instruction = 0x881FD840;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 1251);
	// add r11,r30,r25
	ctx.r11.u64 = ctx.r30.u64 + ctx.r25.u64;
	// addi r22,r11,-1
	ctx.r22.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881fd860
	if (ctx.cr6.eq) goto loc_881FD860;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8817d850
	ctx.lr = 0x881FD85C;
	sub_8817D850(ctx, base);
loc_881FD85C:
	// stb r23,1251(r28)
	ctx.current_instruction = 0x881FD85C;
	REX_STORE_U8(ctx.r28.u32 + 1251, ctx.r23.u8);
loc_881FD860:
	// lwz r29,0(r28)
	ctx.current_instruction = 0x881FD860;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lbz r30,1248(r28)
	ctx.current_instruction = 0x881FD868;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + 1248);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881FD870;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881fd884
	if (!ctx.cr6.gt) goto loc_881FD884;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// b 0x881fd930
	goto loc_881FD930;
loc_881FD884:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881fd894
	if (!ctx.cr6.eq) goto loc_881FD894;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// b 0x881fd930
	goto loc_881FD930;
loc_881FD894:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881fd8f4
	if (!ctx.cr6.gt) goto loc_881FD8F4;
loc_881FD89C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881fd8f4
	if (ctx.cr6.eq) goto loc_881FD8F4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.current_instruction = 0x881FD8A8;
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
	ctx.current_instruction = 0x881FD8CC;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r29)
	ctx.current_instruction = 0x881FD8D4;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// bge 0x881fd8e4
	if (!ctx.cr0.lt) goto loc_881FD8E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881FD8E4;
	sub_88156678(ctx, base);
loc_881FD8E4:
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881FD8E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881fd89c
	if (ctx.cr6.gt) goto loc_881FD89C;
loc_881FD8F4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r29)
	ctx.current_instruction = 0x881FD8F8;
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
	ctx.current_instruction = 0x881FD910;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r29)
	ctx.current_instruction = 0x881FD91C;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r4.u64);
	// bge 0x881fd92c
	if (!ctx.cr0.lt) goto loc_881FD92C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881FD92C;
	sub_88156678(ctx, base);
loc_881FD92C:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_881FD930:
	// lwz r3,0(r28)
	ctx.current_instruction = 0x881FD930;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881FD934;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881FD938;
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
	ctx.current_instruction = 0x881FD948;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881FD94C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881fd958
	if (!ctx.cr0.lt) goto loc_881FD958;
	// bl 0x88156678
	ctx.lr = 0x881FD958;
	sub_88156678(ctx, base);
loc_881FD958:
	// lwz r29,0(r28)
	ctx.current_instruction = 0x881FD958;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lbz r30,1247(r28)
	ctx.current_instruction = 0x881FD960;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + 1247);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881FD968;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881fda40
	if (ctx.cr6.eq) goto loc_881FDA40;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x881fd988
	if (!ctx.cr6.gt) goto loc_881FD988;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x881fdafc
	goto loc_881FDAFC;
loc_881FD988:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881fd99c
	if (!ctx.cr6.eq) goto loc_881FD99C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x881fdafc
	goto loc_881FDAFC;
loc_881FD99C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881fd9fc
	if (!ctx.cr6.gt) goto loc_881FD9FC;
loc_881FD9A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881fd9fc
	if (ctx.cr6.eq) goto loc_881FD9FC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.current_instruction = 0x881FD9B0;
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
	ctx.current_instruction = 0x881FD9D4;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r29)
	ctx.current_instruction = 0x881FD9DC;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// bge 0x881fd9ec
	if (!ctx.cr0.lt) goto loc_881FD9EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881FD9EC;
	sub_88156678(ctx, base);
loc_881FD9EC:
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881FD9EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881fd9a4
	if (ctx.cr6.gt) goto loc_881FD9A4;
loc_881FD9FC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r29)
	ctx.current_instruction = 0x881FDA00;
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
	ctx.current_instruction = 0x881FDA18;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r29)
	ctx.current_instruction = 0x881FDA24;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r4.u64);
	// bge 0x881fda34
	if (!ctx.cr0.lt) goto loc_881FDA34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881FDA34;
	sub_88156678(ctx, base);
loc_881FDA34:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x881fdafc
	goto loc_881FDAFC;
loc_881FDA40:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x881fda50
	if (!ctx.cr6.gt) goto loc_881FDA50;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x881fdafc
	goto loc_881FDAFC;
loc_881FDA50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881fda60
	if (!ctx.cr6.eq) goto loc_881FDA60;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x881fdafc
	goto loc_881FDAFC;
loc_881FDA60:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881fdac0
	if (!ctx.cr6.gt) goto loc_881FDAC0;
loc_881FDA68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881fdac0
	if (ctx.cr6.eq) goto loc_881FDAC0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.current_instruction = 0x881FDA74;
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
	ctx.current_instruction = 0x881FDA98;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r29)
	ctx.current_instruction = 0x881FDAA0;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// bge 0x881fdab0
	if (!ctx.cr0.lt) goto loc_881FDAB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881FDAB0;
	sub_88156678(ctx, base);
loc_881FDAB0:
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881FDAB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881fda68
	if (ctx.cr6.gt) goto loc_881FDA68;
loc_881FDAC0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r29)
	ctx.current_instruction = 0x881FDAC4;
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
	ctx.current_instruction = 0x881FDADC;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r29)
	ctx.current_instruction = 0x881FDAE8;
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r4.u64);
	// bge 0x881fdaf8
	if (!ctx.cr0.lt) goto loc_881FDAF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156678
	ctx.lr = 0x881FDAF8;
	sub_88156678(ctx, base);
loc_881FDAF8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881FDAFC:
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r8,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - ctx.r9.u64;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// srawi r23,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r23.s64 = ctx.r7.s32 >> 8;
	// clrlwi r30,r7,24
	ctx.r30.u64 = ctx.r7.u32 & 0xFF;
loc_881FDB18:
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881FDB18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881fd5d8
	if (!ctx.cr6.eq) goto loc_881FD5D8;
	// rlwinm r11,r23,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 12) & 0xFFFFF000;
	// or r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 | ctx.r22.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | ctx.r30.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r4,r5,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// or r3,r4,r26
	ctx.r3.u64 = ctx.r4.u64 | ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821BD90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821BD90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821BD90) {
			switch (rex_dispatch_address) {
				case 0x8821BD98:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821BD90;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821BD98: goto loc_8821BD98;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8821BD98;
	__savegprlr_25(ctx, base);
loc_8821BD98:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r6,48
	ctx.r6.s64 = 48;
	// bne cr6,0x8821bee8
	if (!ctx.cr6.eq) goto loc_8821BEE8;
	// li r5,96
	ctx.r5.s64 = 96;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,144
	ctx.r7.s64 = 144;
	// lvx128 v11,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,64
	ctx.r11.s64 = 64;
	// li r8,112
	ctx.r8.s64 = 112;
	// li r31,160
	ctx.r31.s64 = 160;
	// li r30,16
	ctx.r30.s64 = 16;
	// lvx128 v10,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// lvx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,304
	ctx.r29.s64 = 304;
	// lvx128 v62,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,336
	ctx.r10.s64 = 336;
	// lvx128 v61,r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v8,v11,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v60,r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v7,v10,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vsldoi128 v6,v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// li r31,352
	ctx.r31.s64 = 352;
	// vsldoi128 v5,v12,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// li r11,192
	ctx.r11.s64 = 192;
	// vaddshs v4,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// li r30,208
	ctx.r30.s64 = 208;
	// vaddshs v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r8,240
	ctx.r8.s64 = 240;
	// vaddshs v2,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// li r28,256
	ctx.r28.s64 = 256;
	// vaddshs v31,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vslh v30,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v24,v28,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v27,v1
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
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
	// stvx128 v22,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r3,r29
	ea = (ctx.r3.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r3,r28
	ea = (ctx.r3.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v18,v12,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// vsldoi128 v17,v11,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// vaddshs v16,v18,v12
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsldoi128 v15,v10,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 14));
	// vsldoi128 v14,v9,v58,2
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 14));
	// vaddshs v12,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v11,v15,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v10,v14,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v9,v16,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v4,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v3,v7,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v6,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v1,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v1,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8821BEE8:
	// li r9,4
	ctx.r9.s64 = 4;
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r25,-48
	ctx.r25.s64 = -48;
	// li r26,-80
	ctx.r26.s64 = -80;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r4,96
	ctx.r10.s64 = ctx.r4.s64 + 96;
	// addi r5,r8,-96
	ctx.r5.s64 = ctx.r8.s64 + -96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r27,-64
	ctx.r27.s64 = -64;
	// li r28,-16
	ctx.r28.s64 = -16;
	// li r29,32
	ctx.r29.s64 = 32;
	// li r30,80
	ctx.r30.s64 = 80;
	// li r31,-96
	ctx.r31.s64 = -96;
loc_8821BF30:
	// lvx128 v12,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v4,v8,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), 14));
	// lvx128 v10,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v55,r11,r27
	ea = (ctx.r11.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v30,v7,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), 14));
	// lvx128 v54,r11,r28
	ea = (ctx.r11.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v29,v6,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// lvx128 v53,r11,r29
	ea = (ctx.r11.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v26,v5,v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 14));
	// lvx128 v52,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v4,v12,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 14));
	// vsldoi128 v3,v11,v54,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 14));
	// vaddshs v28,v30,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsldoi128 v8,v10,v53,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), 14));
	// vaddshs v27,v29,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi128 v2,v9,v52,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), 14));
	// vaddshs v21,v26,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v25,v4,v12
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// vaddshs v24,v3,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v23,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v22,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v20,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v28,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v25,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v12,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v20,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v10,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v9,v18,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v8,v17,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v7,v16,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v6,v15,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v5,v14,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v4,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
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
	// vsrah v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v3,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v2,r10,r25
	ea = (ctx.r10.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v31,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v26,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v30,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r10,r26
	ea = (ctx.r10.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 + 192;
	// bdnz 0x8821bf30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8821BF30;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88222BC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88222BC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88222BC8) {
			switch (rex_dispatch_address) {
				case 0x88222BD0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88222BC8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88222BD0: goto loc_88222BD0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88222BD0;
	__savegprlr_29(ctx, base);
loc_88222BD0:
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// li r10,96
	ctx.r10.s64 = 96;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,144
	ctx.r9.s64 = 144;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,64
	ctx.r8.s64 = 64;
	// li r31,16
	ctx.r31.s64 = 16;
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v11,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,160
	ctx.r30.s64 = 160;
	// li r11,112
	ctx.r11.s64 = 112;
	// lvx128 v10,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v7,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v4,v11,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v3,v12,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vaddshs v2,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsldoi128 v31,v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vaddshs v30,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v29,v10,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// vaddshs v28,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r31,r1,-64
	ctx.r31.s64 = ctx.r1.s64 + -64;
	// vaddshs v27,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r30,r1,-48
	ctx.r30.s64 = ctx.r1.s64 + -48;
	// vaddshs v26,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vaddshs v25,v30,v4
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v24,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// vaddshs v23,v27,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vpkshus128 v58,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvx128 v59,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-56(r1)
	ctx.current_instruction = 0x88222C9C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r31,-64(r1)
	ctx.current_instruction = 0x88222CA0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stvx128 v58,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-48(r1)
	ctx.current_instruction = 0x88222CA8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r29,-40(r1)
	ctx.current_instruction = 0x88222CAC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// stw r31,0(r5)
	ctx.current_instruction = 0x88222CB0;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// stwx r6,r4,r5
	ctx.current_instruction = 0x88222CB4;
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r30,r8,r5
	ctx.current_instruction = 0x88222CB8;
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r29,r11,r4
	ctx.current_instruction = 0x88222CBC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r29.u32);
	// bne cr6,0x88222ce4
	if (!ctx.cr6.eq) goto loc_88222CE4;
	// lwz r6,-60(r1)
	ctx.current_instruction = 0x88222CC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r31,-52(r1)
	ctx.current_instruction = 0x88222CC8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r30,-44(r1)
	ctx.current_instruction = 0x88222CCC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r29,-36(r1)
	ctx.current_instruction = 0x88222CD0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// stw r6,4(r5)
	ctx.current_instruction = 0x88222CD4;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// stw r31,4(r10)
	ctx.current_instruction = 0x88222CD8;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r30,4(r11)
	ctx.current_instruction = 0x88222CDC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r29,4(r9)
	ctx.current_instruction = 0x88222CE0;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
loc_88222CE4:
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bne cr6,0x88222df0
	if (!ctx.cr6.eq) goto loc_88222DF0;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r9,240
	ctx.r9.s64 = 240;
	// li r7,288
	ctx.r7.s64 = 288;
	// li r6,336
	ctx.r6.s64 = 336;
	// li r31,256
	ctx.r31.s64 = 256;
	// lvx128 v12,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,208
	ctx.r30.s64 = 208;
	// lvx128 v11,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,352
	ctx.r10.s64 = 352;
	// li r9,304
	ctx.r9.s64 = 304;
	// lvx128 v10,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v57,r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v55,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v4,v12,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// vsldoi128 v3,v11,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// vaddshs v2,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v31,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v30,v10,v54,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 14));
	// vsldoi128 v29,v9,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 14));
	// vaddshs v28,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// vaddshs v26,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// vaddshs v25,v31,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v24,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v23,v27,v29
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vpkshus128 v52,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvx128 v53,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-56(r1)
	ctx.current_instruction = 0x88222DA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r7,-52(r1)
	ctx.current_instruction = 0x88222DA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// stvx128 v52,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-48(r1)
	ctx.current_instruction = 0x88222DB0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r31,-44(r1)
	ctx.current_instruction = 0x88222DB4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r30,-40(r1)
	ctx.current_instruction = 0x88222DB8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r29,-36(r1)
	ctx.current_instruction = 0x88222DBC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lwz r3,-60(r1)
	ctx.current_instruction = 0x88222DC0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r9,-64(r1)
	ctx.current_instruction = 0x88222DC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stwux r9,r5,r10
	ctx.current_instruction = 0x88222DC8;
	ea = ctx.r5.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,4(r5)
	ctx.current_instruction = 0x88222DD0;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// stwx r8,r4,r5
	ctx.current_instruction = 0x88222DD4;
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r8.u32);
	// stw r7,4(r9)
	ctx.current_instruction = 0x88222DD8;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stwux r6,r11,r10
	ctx.current_instruction = 0x88222DDC;
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r31,4(r11)
	ctx.current_instruction = 0x88222DE4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stwx r30,r11,r4
	ctx.current_instruction = 0x88222DE8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r30.u32);
	// stw r29,4(r10)
	ctx.current_instruction = 0x88222DEC;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
loc_88222DF0:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882270E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882270E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882270E0) {
			switch (rex_dispatch_address) {
				case 0x88227124:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882270E0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88227124: goto loc_88227124;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x882270E4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x882270E8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,1136(r7)
	ctx.current_instruction = 0x882270F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 1136);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	ctx.current_instruction = 0x882270F8;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,228(r1)
	ctx.current_instruction = 0x88227100;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// vsplth v2,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x8821e768
	ctx.lr = 0x88227124;
	sub_8821E768(ctx, base);
loc_88227124:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8822712C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_882271E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882271E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882271E8) {
			switch (rex_dispatch_address) {
				case 0x882271F0:
				case 0x88227244:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882271E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882271F0: goto loc_882271F0;
		case 0x88227244: goto loc_88227244;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x882271F0;
	__savegprlr_27(ctx, base);
loc_882271F0:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x882271F0;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1152(r7)
	ctx.current_instruction = 0x882271F4;
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
	ctx.current_instruction = 0x88227208;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r28,260(r1)
	ctx.current_instruction = 0x88227210;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,96(r1)
	ctx.current_instruction = 0x88227218;
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
	ctx.lr = 0x88227244;
	sub_882186F8(ctx, base);
loc_88227244:
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
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
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
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r6,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x88227340
	if (!ctx.cr6.eq) goto loc_88227340;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88227438
	if (!ctx.cr6.gt) goto loc_88227438;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_882272A4:
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
	ctx.current_instruction = 0x8822731C;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ctx.current_instruction = 0x88227320;
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bdnz 0x882272a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882272A4;
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
loc_88227340:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88227438
	if (!ctx.cr6.gt) goto loc_88227438;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_88227358:
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
	// bdnz 0x88227358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88227358;
loc_88227438:
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

DEFINE_REX_FUNC(sub_88244270) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88244270;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88244270) {
			switch (rex_dispatch_address) {
				case 0x88244278:
				case 0x882443A0:
				case 0x882443B0:
				case 0x882444F8:
				case 0x88244504:
				case 0x882446D8:
				case 0x882446E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88244270;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88244278: goto loc_88244278;
		case 0x882443A0: goto loc_882443A0;
		case 0x882443B0: goto loc_882443B0;
		case 0x882444F8: goto loc_882444F8;
		case 0x88244504: goto loc_88244504;
		case 0x882446D8: goto loc_882446D8;
		case 0x882446E4: goto loc_882446E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x88244278;
	__savegprlr_15(ctx, base);
loc_88244278:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88244278;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r30,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 2;
	// srawi r28,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 2;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// rlwinm r11,r28,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// lis r5,-30678
	ctx.r5.s64 = -2010513408;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// rlwinm r10,r8,9,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x600;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-22500(r5)
	ctx.current_instruction = 0x882442A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + -22500);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// stw r10,-22500(r5)
	ctx.current_instruction = 0x882442BC;
	REX_STORE_U32(ctx.r5.u32 + -22500, ctx.r10.u32);
	// rlwinm r27,r8,2,28,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r4,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r18,r7,30
	ctx.r18.u64 = ctx.r7.u32 & 0x3;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r25,r6,30
	ctx.r25.u64 = ctx.r6.u32 & 0x3;
	// clrlwi r10,r3,26
	ctx.r10.u64 = ctx.r3.u32 & 0x3F;
	// clrlwi r17,r30,31
	ctx.r17.u64 = ctx.r30.u32 & 0x1;
	// addi r10,r10,4907
	ctx.r10.s64 = ctx.r10.s64 + 4907;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.current_instruction = 0x882442F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88244330
	if (ctx.cr6.eq) goto loc_88244330;
loc_882442FC:
	// lhz r9,8(r10)
	ctx.current_instruction = 0x882442FC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88244314
	if (!ctx.cr6.eq) goto loc_88244314;
	// lbz r9,10(r10)
	ctx.current_instruction = 0x88244308;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x88244324
	if (ctx.cr6.eq) goto loc_88244324;
loc_88244314:
	// lwz r10,0(r10)
	ctx.current_instruction = 0x88244314;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x882442fc
	if (!ctx.cr6.eq) goto loc_882442FC;
	// b 0x88244330
	goto loc_88244330;
loc_88244324:
	// lwz r3,4(r10)
	ctx.current_instruction = 0x88244324;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x882446b8
	if (!ctx.cr6.eq) goto loc_882446B8;
loc_88244330:
	// lwz r11,19888(r31)
	ctx.current_instruction = 0x88244330;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19888);
	// lwz r10,29684(r31)
	ctx.current_instruction = 0x88244334;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 29684);
	// mulli r9,r11,1216
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1216));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x882443b8
	if (!ctx.cr6.gt) goto loc_882443B8;
	// lwz r11,19884(r31)
	ctx.current_instruction = 0x88244348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19884);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bge cr6,0x88244388
	if (!ctx.cr6.lt) goto loc_88244388;
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
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8824437C:
	// stwu r11,4(r8)
	ctx.current_instruction = 0x8824437C;
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x8824437c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8824437C;
loc_88244388:
	// li r11,511
	ctx.r11.s64 = 511;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,19884(r31)
	ctx.current_instruction = 0x88244394;
	REX_STORE_U32(ctx.r31.u32 + 19884, ctx.r11.u32);
	// addi r3,r31,19628
	ctx.r3.s64 = ctx.r31.s64 + 19628;
	// bl 0x88052d90
	ctx.lr = 0x882443A0;
	sub_88052D90(ctx, base);
loc_882443A0:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,19888(r31)
	ctx.current_instruction = 0x882443A8;
	REX_STORE_U32(ctx.r31.u32 + 19888, ctx.r10.u32);
	// bl 0x88108f98
	ctx.lr = 0x882443B0;
	sub_88108F98(ctx, base);
loc_882443B0:
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x882443c4
	goto loc_882443C4;
loc_882443B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// stw r11,19888(r31)
	ctx.current_instruction = 0x882443C0;
	REX_STORE_U32(ctx.r31.u32 + 19888, ctx.r11.u32);
loc_882443C4:
	// addi r11,r29,256
	ctx.r11.s64 = ctx.r29.s64 + 256;
	// rlwinm r9,r27,7,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0x600;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r27,1,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x6;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r6,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r5,26
	ctx.r11.u64 = ctx.r5.u32 & 0x3F;
	// addi r4,r11,4907
	ctx.r4.s64 = ctx.r11.s64 + 4907;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r31
	ctx.current_instruction = 0x882443F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8824442c
	if (ctx.cr6.eq) goto loc_8824442C;
loc_88244400:
	// lhz r6,8(r11)
	ctx.current_instruction = 0x88244400;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88244418
	if (!ctx.cr6.eq) goto loc_88244418;
	// lbz r6,10(r11)
	ctx.current_instruction = 0x8824440C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x88244428
	if (ctx.cr6.eq) goto loc_88244428;
loc_88244418:
	// lwz r11,0(r11)
	ctx.current_instruction = 0x88244418;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88244400
	if (!ctx.cr6.eq) goto loc_88244400;
	// b 0x8824442c
	goto loc_8824442C;
loc_88244428:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8824442C:
	// addis r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r8,26
	ctx.r11.u64 = ctx.r8.u32 & 0x3F;
	// addi r6,r11,4907
	ctx.r6.s64 = ctx.r11.s64 + 4907;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r31
	ctx.current_instruction = 0x8824445C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88244494
	if (ctx.cr6.eq) goto loc_88244494;
loc_88244468:
	// lhz r9,8(r11)
	ctx.current_instruction = 0x88244468;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88244480
	if (!ctx.cr6.eq) goto loc_88244480;
	// lbz r9,10(r11)
	ctx.current_instruction = 0x88244474;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x88244490
	if (ctx.cr6.eq) goto loc_88244490;
loc_88244480:
	// lwz r11,0(r11)
	ctx.current_instruction = 0x88244480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88244468
	if (!ctx.cr6.eq) goto loc_88244468;
	// b 0x88244494
	goto loc_88244494;
loc_88244490:
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
loc_88244494:
	// addi r11,r7,4973
	ctx.r11.s64 = ctx.r7.s64 + 4973;
	// addi r9,r7,4977
	ctx.r9.s64 = ctx.r7.s64 + 4977;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r29,r30,-2
	ctx.r29.s64 = ctx.r30.s64 + -2;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// li r9,21
	ctx.r9.s64 = 21;
	// lbzx r26,r8,r31
	ctx.current_instruction = 0x882444B8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lbzx r11,r7,r31
	ctx.current_instruction = 0x882444C0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mullw r6,r26,r24
	ctx.r6.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r24.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// subf r10,r6,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r6.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r3,r10,-2
	ctx.r3.s64 = ctx.r10.s64 + -2;
	// subf r28,r26,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r26.u64;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bne cr6,0x882444fc
	if (!ctx.cr6.eq) goto loc_882444FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8813e010
	ctx.lr = 0x882444F8;
	sub_8813E010(ctx, base);
loc_882444F8:
	// b 0x88244504
	goto loc_88244504;
loc_882444FC:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// bl 0x8813e640
	ctx.lr = 0x88244504;
	sub_8813E640(ctx, base);
loc_88244504:
	// rlwinm r11,r28,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r25,19884(r31)
	ctx.current_instruction = 0x88244508;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 19884);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// ble cr6,0x882446a0
	if (!ctx.cr6.gt) goto loc_882446A0;
	// addi r10,r25,4396
	ctx.r10.s64 = ctx.r25.s64 + 4396;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// clrlwi r7,r27,24
	ctx.r7.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r6,r27,7,21,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0x600;
	// rlwinm r5,r27,1,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x6;
	// addi r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 4;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r25,r9,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r9.u64;
loc_88244548:
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r24,-4(r10)
	ctx.current_instruction = 0x8824454C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// addi r30,r8,1
	ctx.r30.s64 = ctx.r8.s64 + 1;
	// rlwinm r9,r9,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r4,4(r24)
	ctx.current_instruction = 0x88244564;
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r4.u32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// sth r8,8(r24)
	ctx.current_instruction = 0x8824456C;
	REX_STORE_U16(ctx.r24.u32 + 8, ctx.r8.u16);
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stb r7,10(r24)
	ctx.current_instruction = 0x88244574;
	REX_STORE_U8(ctx.r24.u32 + 10, ctx.r7.u8);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// addi r15,r11,-2
	ctx.r15.s64 = ctx.r11.s64 + -2;
	// addi r30,r9,4907
	ctx.r30.s64 = ctx.r9.s64 + 4907;
	// rlwinm r9,r4,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r4,r6
	ctx.r30.u64 = ctx.r4.u64 + ctx.r6.u64;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// addi r28,r4,1
	ctx.r28.s64 = ctx.r4.s64 + 1;
	// addi r27,r9,4907
	ctx.r27.s64 = ctx.r9.s64 + 4907;
	// rlwinm r30,r30,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// add r28,r30,r4
	ctx.r28.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r30,r9,r6
	ctx.r30.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r23,r28,r5
	ctx.r23.u64 = ctx.r28.u64 + ctx.r5.u64;
	// rlwinm r28,r30,27,5,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// lwzx r16,r29,r31
	ctx.current_instruction = 0x882445C4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// clrlwi r27,r23,26
	ctx.r27.u64 = ctx.r23.u32 & 0x3F;
	// add r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 + ctx.r5.u64;
	// addi r27,r27,4907
	ctx.r27.s64 = ctx.r27.s64 + 4907;
	// stw r16,0(r24)
	ctx.current_instruction = 0x882445DC;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r16.u32);
	// clrlwi r28,r28,26
	ctx.r28.u64 = ctx.r28.u32 & 0x3F;
	// stwx r24,r29,r31
	ctx.current_instruction = 0x882445E4;
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r24.u32);
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,-8(r10)
	ctx.current_instruction = 0x882445EC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// addi r23,r9,1
	ctx.r23.s64 = ctx.r9.s64 + 1;
	// stw r15,4(r24)
	ctx.current_instruction = 0x882445F4;
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r15.u32);
	// addi r28,r28,4907
	ctx.r28.s64 = ctx.r28.s64 + 4907;
	// stb r7,10(r24)
	ctx.current_instruction = 0x882445FC;
	REX_STORE_U8(ctx.r24.u32 + 10, ctx.r7.u8);
	// addi r8,r8,256
	ctx.r8.s64 = ctx.r8.s64 + 256;
	// sth r3,8(r24)
	ctx.current_instruction = 0x88244604;
	REX_STORE_U16(ctx.r24.u32 + 8, ctx.r3.u16);
	// clrlwi r3,r23,16
	ctx.r3.u64 = ctx.r23.u32 & 0xFFFF;
	// lwzx r27,r30,r31
	ctx.current_instruction = 0x8824460C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r23,r11,2
	ctx.r23.s64 = ctx.r11.s64 + 2;
	// stw r27,0(r24)
	ctx.current_instruction = 0x88244614;
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// add r27,r3,r6
	ctx.r27.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stwx r24,r30,r31
	ctx.current_instruction = 0x8824461C;
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r24.u32);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,-12(r10)
	ctx.current_instruction = 0x88244624;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + -12);
	// addi r24,r11,4
	ctx.r24.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r28)
	ctx.current_instruction = 0x8824462C;
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r7,10(r28)
	ctx.current_instruction = 0x88244634;
	REX_STORE_U8(ctx.r28.u32 + 10, ctx.r7.u8);
	// sth r4,8(r28)
	ctx.current_instruction = 0x88244638;
	REX_STORE_U16(ctx.r28.u32 + 8, ctx.r4.u16);
	// rlwinm r4,r27,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x7FFFFFF;
	// lwzx r27,r29,r31
	ctx.current_instruction = 0x88244640;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// stw r27,0(r28)
	ctx.current_instruction = 0x88244644;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stwx r28,r29,r31
	ctx.current_instruction = 0x8824464C;
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r28.u32);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r29,-16(r10)
	ctx.current_instruction = 0x88244654;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -16);
	// stw r23,4(r29)
	ctx.current_instruction = 0x88244658;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r23.u32);
	// clrlwi r4,r4,26
	ctx.r4.u64 = ctx.r4.u32 & 0x3F;
	// stb r7,10(r29)
	ctx.current_instruction = 0x88244660;
	REX_STORE_U8(ctx.r29.u32 + 10, ctx.r7.u8);
	// addi r4,r4,4907
	ctx.r4.s64 = ctx.r4.s64 + 4907;
	// sth r9,8(r29)
	ctx.current_instruction = 0x88244668;
	REX_STORE_U16(ctx.r29.u32 + 8, ctx.r9.u16);
	// lwzx r9,r30,r31
	ctx.current_instruction = 0x8824466C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r29)
	ctx.current_instruction = 0x88244674;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stwx r29,r30,r31
	ctx.current_instruction = 0x88244678;
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwzu r9,-20(r10)
	ctx.current_instruction = 0x8824467C;
	ea = -20 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r24,4(r9)
	ctx.current_instruction = 0x88244680;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r24.u32);
	// stb r7,10(r9)
	ctx.current_instruction = 0x88244684;
	REX_STORE_U8(ctx.r9.u32 + 10, ctx.r7.u8);
	// sth r3,8(r9)
	ctx.current_instruction = 0x88244688;
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r3.u16);
	// lwzx r3,r4,r31
	ctx.current_instruction = 0x8824468C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r3,0(r9)
	ctx.current_instruction = 0x88244694;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// stwx r9,r4,r31
	ctx.current_instruction = 0x88244698;
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// bdnz 0x88244548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88244548;
loc_882446A0:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r25,19884(r31)
	ctx.current_instruction = 0x882446A4;
	REX_STORE_U32(ctx.r31.u32 + 19884, ctx.r25.u32);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_882446B8:
	// lwz r7,308(r1)
	ctx.current_instruction = 0x882446B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bne cr6,0x882446e0
	if (!ctx.cr6.eq) goto loc_882446E0;
	// bl 0x8813eca0
	ctx.lr = 0x882446D8;
	sub_8813ECA0(ctx, base);
loc_882446D8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_882446E0:
	// bl 0x8813f168
	ctx.lr = 0x882446E4;
	sub_8813F168(ctx, base);
loc_882446E4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

