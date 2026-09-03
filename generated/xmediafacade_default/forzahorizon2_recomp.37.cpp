#include "forzahorizon2_funcs.37.h"

DEFINE_REX_FUNC(sub_88050370) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050370);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050370;
	ctx.current_instruction = 0x88050370;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,244(r11)
	ctx.current_instruction = 0x88050378;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__restgprlr_28) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050898);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x88050898;
	ctx.current_instruction = 0x88050898;
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

DEFINE_REX_FUNC(sub_88050D20) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88050D20;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88050D20) {
			switch (rex_dispatch_address) {
				case 0x88050D54:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050D20;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88050D54: goto loc_88050D54;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88050D24;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88050D28;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88050D2C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88050D30;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x88050d58
	goto loc_88050D58;
loc_88050D40:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88050D40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88050d54
	if (ctx.cr6.eq) goto loc_88050D54;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88050D54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88050D54:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_88050D58:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x88050d40
	if (ctx.cr6.lt) goto loc_88050D40;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88050D64;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88050D6C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88050D70;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88052AA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88052AA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88052AA8) {
			switch (rex_dispatch_address) {
				case 0x88052AC8:
				case 0x88052AD4:
				case 0x88052AE8:
				case 0x88052AF4:
				case 0x88052B24:
				case 0x88052BF0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052AA8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88052AC8: goto loc_88052AC8;
		case 0x88052AD4: goto loc_88052AD4;
		case 0x88052AE8: goto loc_88052AE8;
		case 0x88052AF4: goto loc_88052AF4;
		case 0x88052B24: goto loc_88052B24;
		case 0x88052BF0: goto loc_88052BF0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88052AAC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88052AB0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88052AB4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,12(r6)
	ctx.current_instruction = 0x88052AB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88052adc
	if (!ctx.cr6.eq) goto loc_88052ADC;
	// bl 0x880529c8
	ctx.lr = 0x88052AC8;
	sub_880529C8(ctx, base);
loc_88052AC8:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	ctx.current_instruction = 0x88052ACC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x88052AD4;
	sub_880523E8(ctx, base);
loc_88052AD4:
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x88052bf4
	goto loc_88052BF4;
loc_88052ADC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x88052afc
	if (!ctx.cr6.eq) goto loc_88052AFC;
	// bl 0x880529c8
	ctx.lr = 0x88052AE8;
	sub_880529C8(ctx, base);
loc_88052AE8:
	// li r31,22
	ctx.r31.s64 = 22;
loc_88052AEC:
	// stw r31,0(r3)
	ctx.current_instruction = 0x88052AEC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x880523e8
	ctx.lr = 0x88052AF4;
	sub_880523E8(ctx, base);
loc_88052AF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x88052bf4
	goto loc_88052BF4;
loc_88052AFC:
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addme r11,r11
	temp.u8 = (ctx.r11.u32 + 0xFFFFFFFFu < ctx.r11.u32) | (ctx.r11.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// stb r8,0(r3)
	ctx.current_instruction = 0x88052B0C;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88052b2c
	if (ctx.cr6.gt) goto loc_88052B2C;
	// bl 0x880529c8
	ctx.lr = 0x88052B24;
	sub_880529C8(ctx, base);
loc_88052B24:
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x88052aec
	goto loc_88052AEC;
loc_88052B2C:
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// stb r7,0(r3)
	ctx.current_instruction = 0x88052B34;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ble cr6,0x88052b70
	if (!ctx.cr6.gt) goto loc_88052B70;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_88052B4C:
	// lbz r10,0(r9)
	ctx.current_instruction = 0x88052B4C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x88052b60
	if (ctx.cr0.eq) goto loc_88052B60;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x88052b64
	goto loc_88052B64;
loc_88052B60:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_88052B64:
	// stb r10,0(r11)
	ctx.current_instruction = 0x88052B64;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88052b4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88052B4C;
loc_88052B70:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r8,0(r11)
	ctx.current_instruction = 0x88052B74;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// blt cr6,0x88052bac
	if (ctx.cr6.lt) goto loc_88052BAC;
	// lbz r10,0(r9)
	ctx.current_instruction = 0x88052B7C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// blt cr6,0x88052bac
	if (ctx.cr6.lt) goto loc_88052BAC;
	// b 0x88052b94
	goto loc_88052B94;
loc_88052B90:
	// stb r7,0(r11)
	ctx.current_instruction = 0x88052B90;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_88052B94:
	// lbzu r10,-1(r11)
	ctx.current_instruction = 0x88052B94;
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// beq cr6,0x88052b90
	if (ctx.cr6.eq) goto loc_88052B90;
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88052BA0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	ctx.current_instruction = 0x88052BA8;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_88052BAC:
	// lbz r11,0(r3)
	ctx.current_instruction = 0x88052BAC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x88052bc8
	if (!ctx.cr6.eq) goto loc_88052BC8;
	// lwz r11,4(r6)
	ctx.current_instruction = 0x88052BB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r6)
	ctx.current_instruction = 0x88052BC0;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// b 0x88052bf0
	goto loc_88052BF0;
loc_88052BC8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_88052BCC:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88052BCC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88052bcc
	if (!ctx.cr6.eq) goto loc_88052BCC;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x880527e0
	ctx.lr = 0x88052BF0;
	sub_880527E0(ctx, base);
loc_88052BF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88052BF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88052BF8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88052C00;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88059430) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88059430;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88059430) {
			switch (rex_dispatch_address) {
				case 0x88059438:
				case 0x8805946C:
				case 0x88059484:
				case 0x880594D0:
				case 0x88059510:
				case 0x8805956C:
				case 0x88059588:
				case 0x880595A0:
				case 0x88059600:
				case 0x88059640:
				case 0x880596C0:
				case 0x880596D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059430;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88059438: goto loc_88059438;
		case 0x8805946C: goto loc_8805946C;
		case 0x88059484: goto loc_88059484;
		case 0x880594D0: goto loc_880594D0;
		case 0x88059510: goto loc_88059510;
		case 0x8805956C: goto loc_8805956C;
		case 0x88059588: goto loc_88059588;
		case 0x880595A0: goto loc_880595A0;
		case 0x88059600: goto loc_88059600;
		case 0x88059640: goto loc_88059640;
		case 0x880596C0: goto loc_880596C0;
		case 0x880596D8: goto loc_880596D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88059438;
	__savegprlr_22(ctx, base);
loc_88059438:
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x8805943C;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r22,0(r5)
	ctx.current_instruction = 0x88059450;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r22.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r3,48(r3)
	ctx.current_instruction = 0x88059458;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805945C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.current_instruction = 0x88059460;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805946C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805946C:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x8805946C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,116(r9)
	ctx.current_instruction = 0x88059478;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88059484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059484:
	// add r25,r3,r23
	ctx.r25.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,540(r30)
	ctx.current_instruction = 0x88059490;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 540);
	// addi r28,r30,540
	ctx.r28.s64 = ctx.r30.s64 + 540;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88059524
	if (ctx.cr6.eq) goto loc_88059524;
	// stw r22,80(r31)
	ctx.current_instruction = 0x880594A0;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x880594b0
	if (!ctx.cr6.lt) goto loc_880594B0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_880594B0:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880594B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// lwz r3,520(r30)
	ctx.current_instruction = 0x880594BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 520);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x88064ed8
	ctx.lr = 0x880594D0;
	sub_88064ED8(ctx, base);
loc_880594D0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r31)
	ctx.current_instruction = 0x880594D8;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r11,80(r31)
	ctx.current_instruction = 0x880594DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r28)
	ctx.current_instruction = 0x880594E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subf r26,r11,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,0(r28)
	ctx.current_instruction = 0x880594EC;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r26,236(r31)
	ctx.current_instruction = 0x880594F0;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x880594F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r27)
	ctx.current_instruction = 0x880594FC;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88059500;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,116(r7)
	ctx.current_instruction = 0x88059504;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 116);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88059510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059510:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x88059524
	if (ctx.cr6.lt) goto loc_88059524;
	// ld r11,104(r31)
	ctx.current_instruction = 0x88059518;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 104);
	// std r11,128(r30)
	ctx.current_instruction = 0x8805951C;
	REX_STORE_U64(ctx.r30.u32 + 128, ctx.r11.u64);
	// std r11,0(r23)
	ctx.current_instruction = 0x88059520;
	REX_STORE_U64(ctx.r23.u32 + 0, ctx.r11.u64);
loc_88059524:
	// li r24,1
	ctx.r24.s64 = 1;
loc_88059528:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8805965c
	if (!ctx.cr6.eq) goto loc_8805965C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8805965c
	if (ctx.cr6.eq) goto loc_8805965C;
	// lwz r11,544(r30)
	ctx.current_instruction = 0x88059538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805965c
	if (!ctx.cr6.eq) goto loc_8805965C;
loc_88059544:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x88059544;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880595c4
	if (!ctx.cr6.eq) goto loc_880595C4;
	// lwz r11,512(r30)
	ctx.current_instruction = 0x88059550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88059570
	if (!ctx.cr6.eq) goto loc_88059570;
	// lwz r11,508(r30)
	ctx.current_instruction = 0x8805955C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r3,520(r30)
	ctx.current_instruction = 0x88059560;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 520);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x880653a0
	ctx.lr = 0x8805956C;
	sub_880653A0(ctx, base);
loc_8805956C:
	// b 0x88059588
	goto loc_88059588;
loc_88059570:
	// lwz r11,500(r30)
	ctx.current_instruction = 0x88059570;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 500);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8805958c
	if (!ctx.cr6.eq) goto loc_8805958C;
	// stw r24,500(r30)
	ctx.current_instruction = 0x8805957C;
	REX_STORE_U32(ctx.r30.u32 + 500, ctx.r24.u32);
	// lwz r3,520(r30)
	ctx.current_instruction = 0x88059580;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 520);
	// bl 0x88064a10
	ctx.lr = 0x88059588;
	sub_88064A10(ctx, base);
loc_88059588:
	// stw r3,84(r31)
	ctx.current_instruction = 0x88059588;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_8805958C:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,520(r30)
	ctx.current_instruction = 0x88059590;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 520);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x88064fe8
	ctx.lr = 0x880595A0;
	sub_88064FE8(ctx, base);
loc_880595A0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	ctx.current_instruction = 0x880595A4;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880595b8
	if (!ctx.cr6.eq) goto loc_880595B8;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x88059544
	goto loc_88059544;
loc_880595B8:
	// cmpwi cr6,r29,33
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 33, ctx.xer);
	// bne cr6,0x880595c4
	if (!ctx.cr6.eq) goto loc_880595C4;
	// stw r24,544(r30)
	ctx.current_instruction = 0x880595C0;
	REX_STORE_U32(ctx.r30.u32 + 544, ctx.r24.u32);
loc_880595C4:
	// lwz r5,0(r28)
	ctx.current_instruction = 0x880595C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8805965c
	if (ctx.cr6.eq) goto loc_8805965C;
	// stw r22,80(r31)
	ctx.current_instruction = 0x880595D0;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x880595e0
	if (!ctx.cr6.lt) goto loc_880595E0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_880595E0:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880595E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// lwz r3,520(r30)
	ctx.current_instruction = 0x880595EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 520);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x88064ed8
	ctx.lr = 0x88059600;
	sub_88064ED8(ctx, base);
loc_88059600:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r31)
	ctx.current_instruction = 0x88059608;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r11,80(r31)
	ctx.current_instruction = 0x8805960C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r28)
	ctx.current_instruction = 0x88059610;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subf r26,r11,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,0(r28)
	ctx.current_instruction = 0x8805961C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r26,236(r31)
	ctx.current_instruction = 0x88059620;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x88059624;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r27)
	ctx.current_instruction = 0x8805962C;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88059630;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,116(r7)
	ctx.current_instruction = 0x88059634;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 116);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88059640;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88059640:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x88059654
	if (ctx.cr6.lt) goto loc_88059654;
	// ld r11,104(r31)
	ctx.current_instruction = 0x88059648;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 104);
	// std r11,128(r30)
	ctx.current_instruction = 0x8805964C;
	REX_STORE_U64(ctx.r30.u32 + 128, ctx.r11.u64);
	// std r11,0(r23)
	ctx.current_instruction = 0x88059650;
	REX_STORE_U64(ctx.r23.u32 + 0, ctx.r11.u64);
loc_88059654:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x88059528
	goto loc_88059528;
loc_8805965C:
	// addi r11,r29,-33
	ctx.r11.s64 = ctx.r29.s64 + -33;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 & ctx.r29.u64;
	// stw r11,84(r31)
	ctx.current_instruction = 0x88059674;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// subfic r5,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	ctx.current_instruction = 0x88059690;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// blt cr6,0x880596d8
	if (ctx.cr6.lt) goto loc_880596D8;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x88059698;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880596d8
	if (ctx.cr6.eq) goto loc_880596D8;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x880596A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r30)
	ctx.current_instruction = 0x880596AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,116(r11)
	ctx.current_instruction = 0x880596B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r29,0(r10)
	ctx.current_instruction = 0x880596B4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880596C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880596C0:
	// lwz r8,72(r29)
	ctx.current_instruction = 0x880596C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r7,0(r27)
	ctx.current_instruction = 0x880596C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r4,r3,r7
	ctx.r4.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r3,48(r30)
	ctx.current_instruction = 0x880596CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880596D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880596D8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x880596f4
	goto loc_880596F4;
loc_880596F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88062228) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88062228);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88062228;
	ctx.current_instruction = 0x88062228;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r11,9680
	ctx.r10.s64 = ctx.r11.s64 + 9680;
	// stw r10,0(r3)
	ctx.current_instruction = 0x88062230;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x88062000
	sub_88062000(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880622B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880622B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880622B8) {
			switch (rex_dispatch_address) {
				case 0x880622E4:
				case 0x88062300:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880622B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880622E4: goto loc_880622E4;
		case 0x88062300: goto loc_88062300;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880622BC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880622C0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880622C4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880622C8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,9680
	ctx.r10.s64 = ctx.r11.s64 + 9680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	ctx.current_instruction = 0x880622DC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x88062000
	ctx.lr = 0x880622E4;
	sub_88062000(ctx, base);
loc_880622E4:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88062304
	if (ctx.cr6.eq) goto loc_88062304;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32771
	ctx.r4.u64 = ctx.r4.u64 | 32771;
	// bl 0x88050358
	ctx.lr = 0x88062300;
	sub_88050358(ctx, base);
loc_88062300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_88062304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88062308;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88062310;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88062314;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880641F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880641F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880641F0) {
			switch (rex_dispatch_address) {
				case 0x880641F8:
				case 0x88064230:
				case 0x88064244:
				case 0x88064258:
				case 0x88064280:
				case 0x880642A4:
				case 0x880642BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880641F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880641F8: goto loc_880641F8;
		case 0x88064230: goto loc_88064230;
		case 0x88064244: goto loc_88064244;
		case 0x88064258: goto loc_88064258;
		case 0x88064280: goto loc_88064280;
		case 0x880642A4: goto loc_880642A4;
		case 0x880642BC: goto loc_880642BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880641F8;
	__savegprlr_29(ctx, base);
loc_880641F8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880641F8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88064208;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8806424c
	if (!ctx.cr6.eq) goto loc_8806424C;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88064218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88064224;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88064230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88064230:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880642d0
	if (ctx.cr6.lt) goto loc_880642D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880628b8
	ctx.lr = 0x88064244;
	sub_880628B8(ctx, base);
loc_88064244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_8806424C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.current_instruction = 0x88064250;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x880cb730
	ctx.lr = 0x88064258;
	sub_880CB730(ctx, base);
loc_88064258:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88064258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88064270
	if (ctx.cr6.eq) goto loc_88064270;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88064264;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880642d0
	if (ctx.cr6.eq) goto loc_880642D0;
loc_88064270:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88063f30
	ctx.lr = 0x88064280;
	sub_88063F30(ctx, base);
loc_88064280:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880642d0
	if (ctx.cr6.lt) goto loc_880642D0;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88064288;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88064298;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880642A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880642A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880642d0
	if (ctx.cr6.lt) goto loc_880642D0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.current_instruction = 0x880642B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x880642BC;
	sub_880CB730(ctx, base);
loc_880642BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880642d0
	if (ctx.cr6.lt) goto loc_880642D0;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880642C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	ctx.current_instruction = 0x880642CC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_880642D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88065E48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88065E48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88065E48) {
			switch (rex_dispatch_address) {
				case 0x88065E78:
				case 0x88065E88:
				case 0x88065EAC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88065E48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88065E78: goto loc_88065E78;
		case 0x88065E88: goto loc_88065E88;
		case 0x88065EAC: goto loc_88065EAC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88065E4C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88065E50;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88065E54;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88065E58;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88065e70
	if (!ctx.cr6.eq) goto loc_88065E70;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x88065ebc
	goto loc_88065EBC;
loc_88065E70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88065bb0
	ctx.lr = 0x88065E78;
	sub_88065BB0(ctx, base);
loc_88065E78:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// li r3,624
	ctx.r3.s64 = 624;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050340
	ctx.lr = 0x88065E88;
	sub_88050340(ctx, base);
loc_88065E88:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88065e9c
	if (!ctx.cr6.eq) goto loc_88065E9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x88065ebc
	goto loc_88065EBC;
loc_88065E9C:
	// li r5,624
	ctx.r5.s64 = 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88052d90
	ctx.lr = 0x88065EAC;
	sub_88052D90(ctx, base);
loc_88065EAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,392(r31)
	ctx.current_instruction = 0x88065EB4;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r31,0(r30)
	ctx.current_instruction = 0x88065EB8;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_88065EBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88065EC0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88065EC8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88065ECC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88067B18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88067B18);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067B18;
	ctx.current_instruction = 0x88067B18;
	uint32_t ea{};
	// lwz r11,56(r3)
	ctx.current_instruction = 0x88067B18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,52(r3)
	ctx.current_instruction = 0x88067B1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r3)
	ctx.current_instruction = 0x88067B24;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88067b5c
	if (ctx.cr6.lt) goto loc_88067B5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,68
	ctx.r8.s64 = ctx.r3.s64 + 68;
	// stw r11,56(r3)
	ctx.current_instruction = 0x88067B38;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
loc_88067B3C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x88067b3c
	if (!ctx.cr0.eq) goto loc_88067B3C;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88067B5C:
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
loc_88067B60:
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
	// bne 0x88067b60
	if (!ctx.cr0.eq) goto loc_88067B60;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880691F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880691F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880691F0) {
			switch (rex_dispatch_address) {
				case 0x88069220:
				case 0x88069234:
				case 0x88069248:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880691F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88069220: goto loc_88069220;
		case 0x88069234: goto loc_88069234;
		case 0x88069248: goto loc_88069248;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880691F4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880691F8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880691FC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88069220
	if (ctx.cr6.eq) goto loc_88069220;
	// lwz r3,44(r3)
	ctx.current_instruction = 0x8806920C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069210;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.current_instruction = 0x88069214;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069220:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x88069220;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069224;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.current_instruction = 0x88069228;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069234:
	// lwz r9,240(r31)
	ctx.current_instruction = 0x88069234;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88069250
	if (ctx.cr6.eq) goto loc_88069250;
	// lwz r3,272(r31)
	ctx.current_instruction = 0x88069240;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x881ec5b8
	ctx.lr = 0x88069248;
	sub_881EC5B8(ctx, base);
loc_88069248:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,240(r31)
	ctx.current_instruction = 0x8806924C;
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_88069250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88069254;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806925C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806BEB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806BEB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806BEB8) {
			switch (rex_dispatch_address) {
				case 0x8806BEDC:
				case 0x8806BEE4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806BEB8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806BEDC: goto loc_8806BEDC;
		case 0x8806BEE4: goto loc_8806BEE4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806BEBC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806BEC0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8806BEC4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,10896
	ctx.r10.s64 = ctx.r11.s64 + 10896;
	// stw r10,0(r3)
	ctx.current_instruction = 0x8806BED4;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8806a140
	ctx.lr = 0x8806BEDC;
	sub_8806A140(ctx, base);
loc_8806BEDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062000
	ctx.lr = 0x8806BEE4;
	sub_88062000(ctx, base);
loc_8806BEE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806BEE8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806BEF0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806CB38) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806CB38);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806CB38;
	ctx.current_instruction = 0x8806CB38;
	PPCRegister temp{};
	// lis r11,77
	ctx.r11.s64 = 5046272;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22528
	ctx.r11.u64 = ctx.r11.u64 | 22528;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8806cb50
	if (!ctx.cr6.gt) goto loc_8806CB50;
	// stw r9,1604(r3)
	ctx.current_instruction = 0x8806CB4C;
	REX_STORE_U32(ctx.r3.u32 + 1604, ctx.r9.u32);
loc_8806CB50:
	// lwz r10,8104(r3)
	ctx.current_instruction = 0x8806CB50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8104);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8806cb64
	if (ctx.cr6.lt) goto loc_8806CB64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,1608(r3)
	ctx.current_instruction = 0x8806CB60;
	REX_STORE_U32(ctx.r3.u32 + 1608, ctx.r8.u32);
loc_8806CB64:
	// subfc r8,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r4.u64;
	// eqv r7,r4,r11
	ctx.r7.u64 = ~(ctx.r4.u64 ^ ctx.r11.u64);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// stw r11,30392(r3)
	ctx.current_instruction = 0x8806CB7C;
	REX_STORE_U32(ctx.r3.u32 + 30392, ctx.r11.u32);
	// blt cr6,0x8806cb88
	if (ctx.cr6.lt) goto loc_8806CB88;
	// stw r9,2336(r3)
	ctx.current_instruction = 0x8806CB84;
	REX_STORE_U32(ctx.r3.u32 + 2336, ctx.r9.u32);
loc_8806CB88:
	// lwz r11,2184(r3)
	ctx.current_instruction = 0x8806CB88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2184);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8806cbc4
	if (ctx.cr6.lt) goto loc_8806CBC4;
	// lis r11,112
	ctx.r11.s64 = 7340032;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// subfc r10,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// eqv r9,r11,r4
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// stw r6,1580(r3)
	ctx.current_instruction = 0x8806CBB8;
	REX_STORE_U32(ctx.r3.u32 + 1580, ctx.r6.u32);
	// stw r6,1584(r3)
	ctx.current_instruction = 0x8806CBBC;
	REX_STORE_U32(ctx.r3.u32 + 1584, ctx.r6.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8806CBC4:
	// lis r11,46
	ctx.r11.s64 = 3014656;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// ori r11,r11,26624
	ctx.r11.u64 = ctx.r11.u64 | 26624;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r8,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r4.u64;
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,1580(r3)
	ctx.current_instruction = 0x8806CBDC;
	REX_STORE_U32(ctx.r3.u32 + 1580, ctx.r11.u32);
	// stw r11,1584(r3)
	ctx.current_instruction = 0x8806CBE0;
	REX_STORE_U32(ctx.r3.u32 + 1584, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806F108) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806F108;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806F108) {
			switch (rex_dispatch_address) {
				case 0x8806F110:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806F108;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x8806F110: goto loc_8806F110;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8806F110;
	__savegprlr_14(ctx, base);
loc_8806F110:
	// li r10,185
	ctx.r10.s64 = 185;
	// lis r9,-30680
	ctx.r9.s64 = -2010644480;
	// lis r8,-30680
	ctx.r8.s64 = -2010644480;
	// stw r10,19500(r3)
	ctx.current_instruction = 0x8806F11C;
	REX_STORE_U32(ctx.r3.u32 + 19500, ctx.r10.u32);
	// stw r10,19628(r3)
	ctx.current_instruction = 0x8806F120;
	REX_STORE_U32(ctx.r3.u32 + 19628, ctx.r10.u32);
	// lis r6,-30681
	ctx.r6.s64 = -2010710016;
	// lis r5,-30681
	ctx.r5.s64 = -2010710016;
	// addi r10,r9,-1600
	ctx.r10.s64 = ctx.r9.s64 + -1600;
	// addi r9,r8,-1296
	ctx.r9.s64 = ctx.r8.s64 + -1296;
	// addi r5,r5,10136
	ctx.r5.s64 = ctx.r5.s64 + 10136;
	// stw r10,19476(r3)
	ctx.current_instruction = 0x8806F138;
	REX_STORE_U32(ctx.r3.u32 + 19476, ctx.r10.u32);
	// addi r8,r6,12976
	ctx.r8.s64 = ctx.r6.s64 + 12976;
	// stw r9,19480(r3)
	ctx.current_instruction = 0x8806F140;
	REX_STORE_U32(ctx.r3.u32 + 19480, ctx.r9.u32);
	// lis r4,-30680
	ctx.r4.s64 = -2010644480;
	// stw r5,19488(r3)
	ctx.current_instruction = 0x8806F148;
	REX_STORE_U32(ctx.r3.u32 + 19488, ctx.r5.u32);
	// lis r31,-30680
	ctx.r31.s64 = -2010644480;
	// stw r5,19616(r3)
	ctx.current_instruction = 0x8806F150;
	REX_STORE_U32(ctx.r3.u32 + 19616, ctx.r5.u32);
	// lis r28,-30680
	ctx.r28.s64 = -2010644480;
	// stw r8,19484(r3)
	ctx.current_instruction = 0x8806F158;
	REX_STORE_U32(ctx.r3.u32 + 19484, ctx.r8.u32);
	// lis r27,-30680
	ctx.r27.s64 = -2010644480;
	// lis r26,-30681
	ctx.r26.s64 = -2010710016;
	// addi r6,r4,-1448
	ctx.r6.s64 = ctx.r4.s64 + -1448;
	// addi r5,r31,-1476
	ctx.r5.s64 = ctx.r31.s64 + -1476;
	// addi r10,r28,-1216
	ctx.r10.s64 = ctx.r28.s64 + -1216;
	// stw r6,19604(r3)
	ctx.current_instruction = 0x8806F170;
	REX_STORE_U32(ctx.r3.u32 + 19604, ctx.r6.u32);
	// addi r9,r27,-880
	ctx.r9.s64 = ctx.r27.s64 + -880;
	// stw r5,19608(r3)
	ctx.current_instruction = 0x8806F178;
	REX_STORE_U32(ctx.r3.u32 + 19608, ctx.r5.u32);
	// addi r8,r26,13312
	ctx.r8.s64 = ctx.r26.s64 + 13312;
	// stw r10,19732(r3)
	ctx.current_instruction = 0x8806F180;
	REX_STORE_U32(ctx.r3.u32 + 19732, ctx.r10.u32);
	// lis r29,-30681
	ctx.r29.s64 = -2010710016;
	// stw r9,19736(r3)
	ctx.current_instruction = 0x8806F188;
	REX_STORE_U32(ctx.r3.u32 + 19736, ctx.r9.u32);
	// lis r25,-30680
	ctx.r25.s64 = -2010644480;
	// stw r8,19740(r3)
	ctx.current_instruction = 0x8806F190;
	REX_STORE_U32(ctx.r3.u32 + 19740, ctx.r8.u32);
	// lis r24,-30680
	ctx.r24.s64 = -2010644480;
	// addi r4,r29,13160
	ctx.r4.s64 = ctx.r29.s64 + 13160;
	// addi r6,r25,-1088
	ctx.r6.s64 = ctx.r25.s64 + -1088;
	// addi r5,r24,-784
	ctx.r5.s64 = ctx.r24.s64 + -784;
	// stw r4,19612(r3)
	ctx.current_instruction = 0x8806F1A4;
	REX_STORE_U32(ctx.r3.u32 + 19612, ctx.r4.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r6,19860(r3)
	ctx.current_instruction = 0x8806F1AC;
	REX_STORE_U32(ctx.r3.u32 + 19860, ctx.r6.u32);
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r5,19864(r3)
	ctx.current_instruction = 0x8806F1B4;
	REX_STORE_U32(ctx.r3.u32 + 19864, ctx.r5.u32);
	// li r8,37
	ctx.r8.s64 = 37;
	// stw r10,19496(r3)
	ctx.current_instruction = 0x8806F1BC;
	REX_STORE_U32(ctx.r3.u32 + 19496, ctx.r10.u32);
	// lis r7,-30681
	ctx.r7.s64 = -2010710016;
	// stw r9,19492(r3)
	ctx.current_instruction = 0x8806F1C4;
	REX_STORE_U32(ctx.r3.u32 + 19492, ctx.r9.u32);
	// lis r23,-30681
	ctx.r23.s64 = -2010710016;
	// stw r8,19620(r3)
	ctx.current_instruction = 0x8806F1CC;
	REX_STORE_U32(ctx.r3.u32 + 19620, ctx.r8.u32);
	// addi r22,r7,11624
	ctx.r22.s64 = ctx.r7.s64 + 11624;
	// addi r4,r23,13424
	ctx.r4.s64 = ctx.r23.s64 + 13424;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r22,19744(r3)
	ctx.current_instruction = 0x8806F1DC;
	REX_STORE_U32(ctx.r3.u32 + 19744, ctx.r22.u32);
	// li r5,118
	ctx.r5.s64 = 118;
	// stw r4,19868(r3)
	ctx.current_instruction = 0x8806F1E4;
	REX_STORE_U32(ctx.r3.u32 + 19868, ctx.r4.u32);
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r6,19624(r3)
	ctx.current_instruction = 0x8806F1EC;
	REX_STORE_U32(ctx.r3.u32 + 19624, ctx.r6.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// stw r5,19632(r3)
	ctx.current_instruction = 0x8806F1F4;
	REX_STORE_U32(ctx.r3.u32 + 19632, ctx.r5.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r10,19752(r3)
	ctx.current_instruction = 0x8806F1FC;
	REX_STORE_U32(ctx.r3.u32 + 19752, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,19876(r3)
	ctx.current_instruction = 0x8806F204;
	REX_STORE_U32(ctx.r3.u32 + 19876, ctx.r9.u32);
	// li r7,26
	ctx.r7.s64 = 26;
	// stw r8,19880(r3)
	ctx.current_instruction = 0x8806F20C;
	REX_STORE_U32(ctx.r3.u32 + 19880, ctx.r8.u32);
	// li r30,168
	ctx.r30.s64 = 168;
	// stw r11,19504(r3)
	ctx.current_instruction = 0x8806F214;
	REX_STORE_U32(ctx.r3.u32 + 19504, ctx.r11.u32);
	// stw r7,19748(r3)
	ctx.current_instruction = 0x8806F218;
	REX_STORE_U32(ctx.r3.u32 + 19748, ctx.r7.u32);
	// addi r6,r3,19476
	ctx.r6.s64 = ctx.r3.s64 + 19476;
	// stw r30,19756(r3)
	ctx.current_instruction = 0x8806F220;
	REX_STORE_U32(ctx.r3.u32 + 19756, ctx.r30.u32);
	// addi r5,r3,19604
	ctx.r5.s64 = ctx.r3.s64 + 19604;
	// stw r11,19760(r3)
	ctx.current_instruction = 0x8806F228;
	REX_STORE_U32(ctx.r3.u32 + 19760, ctx.r11.u32);
	// addi r4,r3,19732
	ctx.r4.s64 = ctx.r3.s64 + 19732;
	// stw r22,19872(r3)
	ctx.current_instruction = 0x8806F230;
	REX_STORE_U32(ctx.r3.u32 + 19872, ctx.r22.u32);
	// addi r31,r3,19860
	ctx.r31.s64 = ctx.r3.s64 + 19860;
	// lis r29,-30680
	ctx.r29.s64 = -2010644480;
	// li r10,132
	ctx.r10.s64 = 132;
	// lis r27,-30680
	ctx.r27.s64 = -2010644480;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r9,14
	ctx.r9.s64 = 14;
	// li r28,148
	ctx.r28.s64 = 148;
	// lis r26,-30681
	ctx.r26.s64 = -2010710016;
	// stw r30,19884(r3)
	ctx.current_instruction = 0x8806F254;
	REX_STORE_U32(ctx.r3.u32 + 19884, ctx.r30.u32);
	// lis r30,-30680
	ctx.r30.s64 = -2010644480;
	// addi r29,r29,-744
	ctx.r29.s64 = ctx.r29.s64 + -744;
	// stw r10,19532(r3)
	ctx.current_instruction = 0x8806F260;
	REX_STORE_U32(ctx.r3.u32 + 19532, ctx.r10.u32);
	// addi r30,r30,-600
	ctx.r30.s64 = ctx.r30.s64 + -600;
	// stw r10,19660(r3)
	ctx.current_instruction = 0x8806F268;
	REX_STORE_U32(ctx.r3.u32 + 19660, ctx.r10.u32);
	// lis r24,-30680
	ctx.r24.s64 = -2010644480;
	// stw r29,19508(r3)
	ctx.current_instruction = 0x8806F270;
	REX_STORE_U32(ctx.r3.u32 + 19508, ctx.r29.u32);
	// lis r23,-30680
	ctx.r23.s64 = -2010644480;
	// stw r30,19636(r3)
	ctx.current_instruction = 0x8806F278;
	REX_STORE_U32(ctx.r3.u32 + 19636, ctx.r30.u32);
	// addi r29,r24,-1108
	ctx.r29.s64 = ctx.r24.s64 + -1108;
	// stw r11,19536(r3)
	ctx.current_instruction = 0x8806F280;
	REX_STORE_U32(ctx.r3.u32 + 19536, ctx.r11.u32);
	// addi r30,r23,-336
	ctx.r30.s64 = ctx.r23.s64 + -336;
	// stw r7,19652(r3)
	ctx.current_instruction = 0x8806F288;
	REX_STORE_U32(ctx.r3.u32 + 19652, ctx.r7.u32);
	// addi r27,r27,-456
	ctx.r27.s64 = ctx.r27.s64 + -456;
	// stw r29,19640(r3)
	ctx.current_instruction = 0x8806F290;
	REX_STORE_U32(ctx.r3.u32 + 19640, ctx.r29.u32);
	// lis r22,-30680
	ctx.r22.s64 = -2010644480;
	// stw r30,19764(r3)
	ctx.current_instruction = 0x8806F298;
	REX_STORE_U32(ctx.r3.u32 + 19764, ctx.r30.u32);
	// lis r19,-30680
	ctx.r19.s64 = -2010644480;
	// stw r27,19512(r3)
	ctx.current_instruction = 0x8806F2A0;
	REX_STORE_U32(ctx.r3.u32 + 19512, ctx.r27.u32);
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// stw r8,19656(r3)
	ctx.current_instruction = 0x8806F2A8;
	REX_STORE_U32(ctx.r3.u32 + 19656, ctx.r8.u32);
	// addi r29,r22,-940
	ctx.r29.s64 = ctx.r22.s64 + -940;
	// stw r9,19784(r3)
	ctx.current_instruction = 0x8806F2B0;
	REX_STORE_U32(ctx.r3.u32 + 19784, ctx.r9.u32);
	// addi r10,r10,15920
	ctx.r10.s64 = ctx.r10.s64 + 15920;
	// stw r28,19788(r3)
	ctx.current_instruction = 0x8806F2B8;
	REX_STORE_U32(ctx.r3.u32 + 19788, ctx.r28.u32);
	// addi r30,r19,-216
	ctx.r30.s64 = ctx.r19.s64 + -216;
	// stw r29,19768(r3)
	ctx.current_instruction = 0x8806F2C0;
	REX_STORE_U32(ctx.r3.u32 + 19768, ctx.r29.u32);
	// lis r21,-30681
	ctx.r21.s64 = -2010710016;
	// stw r10,19644(r3)
	ctx.current_instruction = 0x8806F2C8;
	REX_STORE_U32(ctx.r3.u32 + 19644, ctx.r10.u32);
	// lis r18,-30680
	ctx.r18.s64 = -2010644480;
	// stw r30,19892(r3)
	ctx.current_instruction = 0x8806F2D0;
	REX_STORE_U32(ctx.r3.u32 + 19892, ctx.r30.u32);
	// li r27,98
	ctx.r27.s64 = 98;
	// stw r11,19792(r3)
	ctx.current_instruction = 0x8806F2D8;
	REX_STORE_U32(ctx.r3.u32 + 19792, ctx.r11.u32);
	// lis r25,-30681
	ctx.r25.s64 = -2010710016;
	// addi r26,r26,15832
	ctx.r26.s64 = ctx.r26.s64 + 15832;
	// stw r27,19888(r3)
	ctx.current_instruction = 0x8806F2E4;
	REX_STORE_U32(ctx.r3.u32 + 19888, ctx.r27.u32);
	// addi r10,r21,16032
	ctx.r10.s64 = ctx.r21.s64 + 16032;
	// addi r29,r18,-40
	ctx.r29.s64 = ctx.r18.s64 + -40;
	// stw r26,19516(r3)
	ctx.current_instruction = 0x8806F2F0;
	REX_STORE_U32(ctx.r3.u32 + 19516, ctx.r26.u32);
	// li r30,20
	ctx.r30.s64 = 20;
	// stw r10,19772(r3)
	ctx.current_instruction = 0x8806F2F8;
	REX_STORE_U32(ctx.r3.u32 + 19772, ctx.r10.u32);
	// addi r25,r25,14768
	ctx.r25.s64 = ctx.r25.s64 + 14768;
	// stw r29,19896(r3)
	ctx.current_instruction = 0x8806F300;
	REX_STORE_U32(ctx.r3.u32 + 19896, ctx.r29.u32);
	// lis r17,-30681
	ctx.r17.s64 = -2010710016;
	// stw r30,19524(r3)
	ctx.current_instruction = 0x8806F308;
	REX_STORE_U32(ctx.r3.u32 + 19524, ctx.r30.u32);
	// li r27,84
	ctx.r27.s64 = 84;
	// stw r25,19520(r3)
	ctx.current_instruction = 0x8806F310;
	REX_STORE_U32(ctx.r3.u32 + 19520, ctx.r25.u32);
	// lis r20,-30681
	ctx.r20.s64 = -2010710016;
	// stw r25,19648(r3)
	ctx.current_instruction = 0x8806F318;
	REX_STORE_U32(ctx.r3.u32 + 19648, ctx.r25.u32);
	// addi r10,r17,16152
	ctx.r10.s64 = ctx.r17.s64 + 16152;
	// stw r27,19664(r3)
	ctx.current_instruction = 0x8806F320;
	REX_STORE_U32(ctx.r3.u32 + 19664, ctx.r27.u32);
	// addi r20,r20,13576
	ctx.r20.s64 = ctx.r20.s64 + 13576;
	// li r29,16
	ctx.r29.s64 = 16;
	// stw r10,19900(r3)
	ctx.current_instruction = 0x8806F32C;
	REX_STORE_U32(ctx.r3.u32 + 19900, ctx.r10.u32);
	// li r30,29
	ctx.r30.s64 = 29;
	// stw r20,19776(r3)
	ctx.current_instruction = 0x8806F334;
	REX_STORE_U32(ctx.r3.u32 + 19776, ctx.r20.u32);
	// li r26,43
	ctx.r26.s64 = 43;
	// stw r29,19528(r3)
	ctx.current_instruction = 0x8806F33C;
	REX_STORE_U32(ctx.r3.u32 + 19528, ctx.r29.u32);
	// lis r27,-30680
	ctx.r27.s64 = -2010644480;
	// stw r30,19780(r3)
	ctx.current_instruction = 0x8806F344;
	REX_STORE_U32(ctx.r3.u32 + 19780, ctx.r30.u32);
	// lis r25,-30681
	ctx.r25.s64 = -2010710016;
	// stw r20,19904(r3)
	ctx.current_instruction = 0x8806F34C;
	REX_STORE_U32(ctx.r3.u32 + 19904, ctx.r20.u32);
	// stw r26,19908(r3)
	ctx.current_instruction = 0x8806F350;
	REX_STORE_U32(ctx.r3.u32 + 19908, ctx.r26.u32);
	// addi r30,r3,19508
	ctx.r30.s64 = ctx.r3.s64 + 19508;
	// addi r29,r3,19636
	ctx.r29.s64 = ctx.r3.s64 + 19636;
	// li r10,102
	ctx.r10.s64 = 102;
	// lis r26,-30680
	ctx.r26.s64 = -2010644480;
	// lis r24,-30681
	ctx.r24.s64 = -2010710016;
	// lis r23,-30680
	ctx.r23.s64 = -2010644480;
	// lis r22,-30680
	ctx.r22.s64 = -2010644480;
	// lis r21,-30681
	ctx.r21.s64 = -2010710016;
	// lis r20,-30680
	ctx.r20.s64 = -2010644480;
	// lis r19,-30680
	ctx.r19.s64 = -2010644480;
	// lis r18,-30681
	ctx.r18.s64 = -2010710016;
	// lis r17,-30681
	ctx.r17.s64 = -2010710016;
	// lis r16,-30680
	ctx.r16.s64 = -2010644480;
	// lis r15,-30680
	ctx.r15.s64 = -2010644480;
	// lis r14,-30681
	ctx.r14.s64 = -2010710016;
	// addi r25,r25,17152
	ctx.r25.s64 = ctx.r25.s64 + 17152;
	// addi r27,r27,-660
	ctx.r27.s64 = ctx.r27.s64 + -660;
	// stw r25,19552(r3)
	ctx.current_instruction = 0x8806F398;
	REX_STORE_U32(ctx.r3.u32 + 19552, ctx.r25.u32);
	// addi r26,r26,128
	ctx.r26.s64 = ctx.r26.s64 + 128;
	// stw r25,19680(r3)
	ctx.current_instruction = 0x8806F3A0;
	REX_STORE_U32(ctx.r3.u32 + 19680, ctx.r25.u32);
	// addi r25,r23,-16
	ctx.r25.s64 = ctx.r23.s64 + -16;
	// stw r26,19544(r3)
	ctx.current_instruction = 0x8806F3A8;
	REX_STORE_U32(ctx.r3.u32 + 19544, ctx.r26.u32);
	// addi r26,r22,-492
	ctx.r26.s64 = ctx.r22.s64 + -492;
	// stw r25,19668(r3)
	ctx.current_instruction = 0x8806F3B0;
	REX_STORE_U32(ctx.r3.u32 + 19668, ctx.r25.u32);
	// addi r25,r20,240
	ctx.r25.s64 = ctx.r20.s64 + 240;
	// stw r27,19540(r3)
	ctx.current_instruction = 0x8806F3B8;
	REX_STORE_U32(ctx.r3.u32 + 19540, ctx.r27.u32);
	// addi r27,r24,13100
	ctx.r27.s64 = ctx.r24.s64 + 13100;
	// stw r26,19672(r3)
	ctx.current_instruction = 0x8806F3C0;
	REX_STORE_U32(ctx.r3.u32 + 19672, ctx.r26.u32);
	// addi r26,r19,-388
	ctx.r26.s64 = ctx.r19.s64 + -388;
	// stw r25,19796(r3)
	ctx.current_instruction = 0x8806F3C8;
	REX_STORE_U32(ctx.r3.u32 + 19796, ctx.r25.u32);
	// addi r25,r16,368
	ctx.r25.s64 = ctx.r16.s64 + 368;
	// stw r27,19548(r3)
	ctx.current_instruction = 0x8806F3D0;
	REX_STORE_U32(ctx.r3.u32 + 19548, ctx.r27.u32);
	// addi r27,r21,17976
	ctx.r27.s64 = ctx.r21.s64 + 17976;
	// stw r26,19800(r3)
	ctx.current_instruction = 0x8806F3D8;
	REX_STORE_U32(ctx.r3.u32 + 19800, ctx.r26.u32);
	// addi r26,r15,532
	ctx.r26.s64 = ctx.r15.s64 + 532;
	// stw r25,19924(r3)
	ctx.current_instruction = 0x8806F3E0;
	REX_STORE_U32(ctx.r3.u32 + 19924, ctx.r25.u32);
	// li r24,5
	ctx.r24.s64 = 5;
	// li r25,80
	ctx.r25.s64 = 80;
	// stw r27,19676(r3)
	ctx.current_instruction = 0x8806F3EC;
	REX_STORE_U32(ctx.r3.u32 + 19676, ctx.r27.u32);
	// stw r26,19928(r3)
	ctx.current_instruction = 0x8806F3F0;
	REX_STORE_U32(ctx.r3.u32 + 19928, ctx.r26.u32);
	// addi r27,r18,18064
	ctx.r27.s64 = ctx.r18.s64 + 18064;
	// stw r24,19912(r3)
	ctx.current_instruction = 0x8806F3F8;
	REX_STORE_U32(ctx.r3.u32 + 19912, ctx.r24.u32);
	// li r26,27
	ctx.r26.s64 = 27;
	// stw r25,19920(r3)
	ctx.current_instruction = 0x8806F400;
	REX_STORE_U32(ctx.r3.u32 + 19920, ctx.r25.u32);
	// li r24,8
	ctx.r24.s64 = 8;
	// li r25,20
	ctx.r25.s64 = 20;
	// std r5,-160(r1)
	ctx.current_instruction = 0x8806F40C;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r5.u64);
	// li r23,66
	ctx.r23.s64 = 66;
	// stw r28,19916(r3)
	ctx.current_instruction = 0x8806F414;
	REX_STORE_U32(ctx.r3.u32 + 19916, ctx.r28.u32);
	// lis r5,-30680
	ctx.r5.s64 = -2010644480;
	// stw r7,19812(r3)
	ctx.current_instruction = 0x8806F41C;
	REX_STORE_U32(ctx.r3.u32 + 19812, ctx.r7.u32);
	// stw r27,19804(r3)
	ctx.current_instruction = 0x8806F420;
	REX_STORE_U32(ctx.r3.u32 + 19804, ctx.r27.u32);
	// lis r28,-30680
	ctx.r28.s64 = -2010644480;
	// stw r26,19560(r3)
	ctx.current_instruction = 0x8806F428;
	REX_STORE_U32(ctx.r3.u32 + 19560, ctx.r26.u32);
	// addi r7,r17,16328
	ctx.r7.s64 = ctx.r17.s64 + 16328;
	// stw r25,19684(r3)
	ctx.current_instruction = 0x8806F430;
	REX_STORE_U32(ctx.r3.u32 + 19684, ctx.r25.u32);
	// addi r27,r14,18176
	ctx.r27.s64 = ctx.r14.s64 + 18176;
	// stw r24,19688(r3)
	ctx.current_instruction = 0x8806F438;
	REX_STORE_U32(ctx.r3.u32 + 19688, ctx.r24.u32);
	// li r26,12
	ctx.r26.s64 = 12;
	// stw r23,19696(r3)
	ctx.current_instruction = 0x8806F440;
	REX_STORE_U32(ctx.r3.u32 + 19696, ctx.r23.u32);
	// li r22,40
	ctx.r22.s64 = 40;
	// li r25,57
	ctx.r25.s64 = 57;
	// stw r7,19808(r3)
	ctx.current_instruction = 0x8806F44C;
	REX_STORE_U32(ctx.r3.u32 + 19808, ctx.r7.u32);
	// lis r24,-30681
	ctx.r24.s64 = -2010710016;
	// stw r10,19564(r3)
	ctx.current_instruction = 0x8806F454;
	REX_STORE_U32(ctx.r3.u32 + 19564, ctx.r10.u32);
	// li r21,3
	ctx.r21.s64 = 3;
	// stw r10,19692(r3)
	ctx.current_instruction = 0x8806F45C;
	REX_STORE_U32(ctx.r3.u32 + 19692, ctx.r10.u32);
	// lis r23,-30681
	ctx.r23.s64 = -2010710016;
	// stw r26,19816(r3)
	ctx.current_instruction = 0x8806F464;
	REX_STORE_U32(ctx.r3.u32 + 19816, ctx.r26.u32);
	// addi r20,r5,68
	ctx.r20.s64 = ctx.r5.s64 + 68;
	// stw r10,19820(r3)
	ctx.current_instruction = 0x8806F46C;
	REX_STORE_U32(ctx.r3.u32 + 19820, ctx.r10.u32);
	// addi r19,r28,640
	ctx.r19.s64 = ctx.r28.s64 + 640;
	// stw r27,19932(r3)
	ctx.current_instruction = 0x8806F474;
	REX_STORE_U32(ctx.r3.u32 + 19932, ctx.r27.u32);
	// stw r7,19936(r3)
	ctx.current_instruction = 0x8806F478;
	REX_STORE_U32(ctx.r3.u32 + 19936, ctx.r7.u32);
	// addi r18,r24,21048
	ctx.r18.s64 = ctx.r24.s64 + 21048;
	// stw r22,19940(r3)
	ctx.current_instruction = 0x8806F480;
	REX_STORE_U32(ctx.r3.u32 + 19940, ctx.r22.u32);
	// addi r17,r23,18344
	ctx.r17.s64 = ctx.r23.s64 + 18344;
	// stw r10,19948(r3)
	ctx.current_instruction = 0x8806F488;
	REX_STORE_U32(ctx.r3.u32 + 19948, ctx.r10.u32);
	// li r16,56
	ctx.r16.s64 = 56;
	// stw r25,19952(r3)
	ctx.current_instruction = 0x8806F490;
	REX_STORE_U32(ctx.r3.u32 + 19952, ctx.r25.u32);
	// addi r7,r3,19764
	ctx.r7.s64 = ctx.r3.s64 + 19764;
	// stw r9,19556(r3)
	ctx.current_instruction = 0x8806F498;
	REX_STORE_U32(ctx.r3.u32 + 19556, ctx.r9.u32);
	// addi r28,r3,19892
	ctx.r28.s64 = ctx.r3.s64 + 19892;
	// stw r11,19568(r3)
	ctx.current_instruction = 0x8806F4A0;
	REX_STORE_U32(ctx.r3.u32 + 19568, ctx.r11.u32);
	// addi r27,r3,19540
	ctx.r27.s64 = ctx.r3.s64 + 19540;
	// stw r11,19824(r3)
	ctx.current_instruction = 0x8806F4A8;
	REX_STORE_U32(ctx.r3.u32 + 19824, ctx.r11.u32);
	// addi r26,r3,19668
	ctx.r26.s64 = ctx.r3.s64 + 19668;
	// stw r21,19944(r3)
	ctx.current_instruction = 0x8806F4B0;
	REX_STORE_U32(ctx.r3.u32 + 19944, ctx.r21.u32);
	// addi r25,r3,19796
	ctx.r25.s64 = ctx.r3.s64 + 19796;
	// stw r20,19572(r3)
	ctx.current_instruction = 0x8806F4B8;
	REX_STORE_U32(ctx.r3.u32 + 19572, ctx.r20.u32);
	// addi r24,r3,19924
	ctx.r24.s64 = ctx.r3.s64 + 19924;
	// stw r19,19576(r3)
	ctx.current_instruction = 0x8806F4C0;
	REX_STORE_U32(ctx.r3.u32 + 19576, ctx.r19.u32);
	// li r22,162
	ctx.r22.s64 = 162;
	// stw r18,19580(r3)
	ctx.current_instruction = 0x8806F4C8;
	REX_STORE_U32(ctx.r3.u32 + 19580, ctx.r18.u32);
	// li r23,174
	ctx.r23.s64 = 174;
	// stw r17,19584(r3)
	ctx.current_instruction = 0x8806F4D0;
	REX_STORE_U32(ctx.r3.u32 + 19584, ctx.r17.u32);
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// stw r9,19588(r3)
	ctx.current_instruction = 0x8806F4D8;
	REX_STORE_U32(ctx.r3.u32 + 19588, ctx.r9.u32);
	// stw r16,19592(r3)
	ctx.current_instruction = 0x8806F4DC;
	REX_STORE_U32(ctx.r3.u32 + 19592, ctx.r16.u32);
	// lis r9,-30680
	ctx.r9.s64 = -2010644480;
	// addi r10,r10,568
	ctx.r10.s64 = ctx.r10.s64 + 568;
	// stw r22,19596(r3)
	ctx.current_instruction = 0x8806F4E8;
	REX_STORE_U32(ctx.r3.u32 + 19596, ctx.r22.u32);
	// stw r11,19600(r3)
	ctx.current_instruction = 0x8806F4EC;
	REX_STORE_U32(ctx.r3.u32 + 19600, ctx.r11.u32);
	// lis r21,-30681
	ctx.r21.s64 = -2010710016;
	// stw r10,19700(r3)
	ctx.current_instruction = 0x8806F4F4;
	REX_STORE_U32(ctx.r3.u32 + 19700, ctx.r10.u32);
	// addi r9,r9,348
	ctx.r9.s64 = ctx.r9.s64 + 348;
	// addi r10,r21,21112
	ctx.r10.s64 = ctx.r21.s64 + 21112;
	// ld r5,-160(r1)
	ctx.current_instruction = 0x8806F500;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// stw r9,19704(r3)
	ctx.current_instruction = 0x8806F504;
	REX_STORE_U32(ctx.r3.u32 + 19704, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,19708(r3)
	ctx.current_instruction = 0x8806F50C;
	REX_STORE_U32(ctx.r3.u32 + 19708, ctx.r10.u32);
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// stw r17,19712(r3)
	ctx.current_instruction = 0x8806F514;
	REX_STORE_U32(ctx.r3.u32 + 19712, ctx.r17.u32);
	// lis r21,-30680
	ctx.r21.s64 = -2010644480;
	// stw r9,19716(r3)
	ctx.current_instruction = 0x8806F51C;
	REX_STORE_U32(ctx.r3.u32 + 19716, ctx.r9.u32);
	// li r9,125
	ctx.r9.s64 = 125;
	// stw r8,19720(r3)
	ctx.current_instruction = 0x8806F524;
	REX_STORE_U32(ctx.r3.u32 + 19720, ctx.r8.u32);
	// addi r10,r10,872
	ctx.r10.s64 = ctx.r10.s64 + 872;
	// stw r22,19724(r3)
	ctx.current_instruction = 0x8806F52C;
	REX_STORE_U32(ctx.r3.u32 + 19724, ctx.r22.u32);
	// lis r20,-30681
	ctx.r20.s64 = -2010710016;
	// stw r9,19728(r3)
	ctx.current_instruction = 0x8806F534;
	REX_STORE_U32(ctx.r3.u32 + 19728, ctx.r9.u32);
	// addi r9,r21,1104
	ctx.r9.s64 = ctx.r21.s64 + 1104;
	// stw r10,19828(r3)
	ctx.current_instruction = 0x8806F53C;
	REX_STORE_U32(ctx.r3.u32 + 19828, ctx.r10.u32);
	// lis r22,-30681
	ctx.r22.s64 = -2010710016;
	// addi r10,r20,21184
	ctx.r10.s64 = ctx.r20.s64 + 21184;
	// stw r9,19832(r3)
	ctx.current_instruction = 0x8806F548;
	REX_STORE_U32(ctx.r3.u32 + 19832, ctx.r9.u32);
	// addi r22,r22,19648
	ctx.r22.s64 = ctx.r22.s64 + 19648;
	// stw r10,19836(r3)
	ctx.current_instruction = 0x8806F550;
	REX_STORE_U32(ctx.r3.u32 + 19836, ctx.r10.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r22,19840(r3)
	ctx.current_instruction = 0x8806F55C;
	REX_STORE_U32(ctx.r3.u32 + 19840, ctx.r22.u32);
	// stw r9,19844(r3)
	ctx.current_instruction = 0x8806F560;
	REX_STORE_U32(ctx.r3.u32 + 19844, ctx.r9.u32);
	// lis r21,-30680
	ctx.r21.s64 = -2010644480;
	// stw r10,19848(r3)
	ctx.current_instruction = 0x8806F568;
	REX_STORE_U32(ctx.r3.u32 + 19848, ctx.r10.u32);
	// lis r9,-30680
	ctx.r9.s64 = -2010644480;
	// lis r10,-30681
	ctx.r10.s64 = -2010710016;
	// stw r23,19852(r3)
	ctx.current_instruction = 0x8806F574;
	REX_STORE_U32(ctx.r3.u32 + 19852, ctx.r23.u32);
	// addi r21,r21,976
	ctx.r21.s64 = ctx.r21.s64 + 976;
	// stw r11,19856(r3)
	ctx.current_instruction = 0x8806F57C;
	REX_STORE_U32(ctx.r3.u32 + 19856, ctx.r11.u32);
	// addi r9,r9,548
	ctx.r9.s64 = ctx.r9.s64 + 548;
	// addi r11,r10,21288
	ctx.r11.s64 = ctx.r10.s64 + 21288;
	// stw r21,19956(r3)
	ctx.current_instruction = 0x8806F588;
	REX_STORE_U32(ctx.r3.u32 + 19956, ctx.r21.u32);
	// stw r9,19960(r3)
	ctx.current_instruction = 0x8806F58C;
	REX_STORE_U32(ctx.r3.u32 + 19960, ctx.r9.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r11,19964(r3)
	ctx.current_instruction = 0x8806F594;
	REX_STORE_U32(ctx.r3.u32 + 19964, ctx.r11.u32);
	// li r9,108
	ctx.r9.s64 = 108;
	// stw r22,19968(r3)
	ctx.current_instruction = 0x8806F59C;
	REX_STORE_U32(ctx.r3.u32 + 19968, ctx.r22.u32);
	// stw r10,19972(r3)
	ctx.current_instruction = 0x8806F5A0;
	REX_STORE_U32(ctx.r3.u32 + 19972, ctx.r10.u32);
	// stw r8,19976(r3)
	ctx.current_instruction = 0x8806F5A4;
	REX_STORE_U32(ctx.r3.u32 + 19976, ctx.r8.u32);
	// stw r23,19980(r3)
	ctx.current_instruction = 0x8806F5A8;
	REX_STORE_U32(ctx.r3.u32 + 19980, ctx.r23.u32);
	// stw r9,19984(r3)
	ctx.current_instruction = 0x8806F5AC;
	REX_STORE_U32(ctx.r3.u32 + 19984, ctx.r9.u32);
	// stw r7,19988(r3)
	ctx.current_instruction = 0x8806F5B0;
	REX_STORE_U32(ctx.r3.u32 + 19988, ctx.r7.u32);
	// stw r4,19992(r3)
	ctx.current_instruction = 0x8806F5B4;
	REX_STORE_U32(ctx.r3.u32 + 19992, ctx.r4.u32);
	// stw r25,19996(r3)
	ctx.current_instruction = 0x8806F5B8;
	REX_STORE_U32(ctx.r3.u32 + 19996, ctx.r25.u32);
	// stw r28,20000(r3)
	ctx.current_instruction = 0x8806F5BC;
	REX_STORE_U32(ctx.r3.u32 + 20000, ctx.r28.u32);
	// stw r31,20004(r3)
	ctx.current_instruction = 0x8806F5C0;
	REX_STORE_U32(ctx.r3.u32 + 20004, ctx.r31.u32);
	// stw r24,20008(r3)
	ctx.current_instruction = 0x8806F5C4;
	REX_STORE_U32(ctx.r3.u32 + 20008, ctx.r24.u32);
	// stw r30,20012(r3)
	ctx.current_instruction = 0x8806F5C8;
	REX_STORE_U32(ctx.r3.u32 + 20012, ctx.r30.u32);
	// stw r6,20016(r3)
	ctx.current_instruction = 0x8806F5CC;
	REX_STORE_U32(ctx.r3.u32 + 20016, ctx.r6.u32);
	// stw r27,20020(r3)
	ctx.current_instruction = 0x8806F5D0;
	REX_STORE_U32(ctx.r3.u32 + 20020, ctx.r27.u32);
	// stw r29,20024(r3)
	ctx.current_instruction = 0x8806F5D4;
	REX_STORE_U32(ctx.r3.u32 + 20024, ctx.r29.u32);
	// stw r5,20028(r3)
	ctx.current_instruction = 0x8806F5D8;
	REX_STORE_U32(ctx.r3.u32 + 20028, ctx.r5.u32);
	// stw r26,20032(r3)
	ctx.current_instruction = 0x8806F5DC;
	REX_STORE_U32(ctx.r3.u32 + 20032, ctx.r26.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807E9D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807E9D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807E9D8) {
			switch (rex_dispatch_address) {
				case 0x8807EAD0:
				case 0x8807EB80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807E9D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807EAD0: goto loc_8807EAD0;
		case 0x8807EB80: goto loc_8807EB80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8807E9DC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8807E9E0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8807E9E4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.current_instruction = 0x8807E9E8;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8807E9EC;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,672(r3)
	ctx.current_instruction = 0x8807E9F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// lfd f31,12408(r11)
	ctx.current_instruction = 0x8807EA04;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 12408);
	// bge cr6,0x8807ea50
	if (!ctx.cr6.lt) goto loc_8807EA50;
	// lwz r11,30680(r3)
	ctx.current_instruction = 0x8807EA0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30680);
	// lwz r10,30656(r3)
	ctx.current_instruction = 0x8807EA10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30656);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8807ea50
	if (!ctx.cr6.eq) goto loc_8807EA50;
	// lwz r11,30752(r3)
	ctx.current_instruction = 0x8807EA1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30752);
	// lwz r10,30756(r3)
	ctx.current_instruction = 0x8807EA20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30756);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addme r6,r8
	temp.u8 = (ctx.r8.u32 + 0xFFFFFFFFu < ctx.r8.u32) | (ctx.r8.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r8.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// subfic r5,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// addme r4,r7
	temp.u8 = (ctx.r7.u32 + 0xFFFFFFFFu < ctx.r7.u32) | (ctx.r7.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ctx.r7.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 & ctx.r10.u64;
	// b 0x8807ebdc
	goto loc_8807EBDC;
loc_8807EA50:
	// lwz r11,30748(r31)
	ctx.current_instruction = 0x8807EA50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30748);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807ebd4
	if (ctx.cr6.eq) goto loc_8807EBD4;
	// lwz r11,30628(r31)
	ctx.current_instruction = 0x8807EA5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807ea78
	if (ctx.cr6.eq) goto loc_8807EA78;
	// lwz r11,30680(r31)
	ctx.current_instruction = 0x8807EA68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30680);
	// lwz r10,30656(r31)
	ctx.current_instruction = 0x8807EA6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30656);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8807ebd4
	if (ctx.cr6.lt) goto loc_8807EBD4;
loc_8807EA78:
	// lwz r11,30696(r31)
	ctx.current_instruction = 0x8807EA78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807eb18
	if (ctx.cr6.eq) goto loc_8807EB18;
	// lwz r11,30704(r31)
	ctx.current_instruction = 0x8807EA84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807eb18
	if (ctx.cr6.eq) goto loc_8807EB18;
	// lwz r10,30680(r31)
	ctx.current_instruction = 0x8807EA90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30680);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lwz r8,30668(r31)
	ctx.current_instruction = 0x8807EA98;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 30668);
	// lfd f2,30688(r31)
	ctx.current_instruction = 0x8807EA9C;
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r31.u32 + 30688);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// std r9,88(r1)
	ctx.current_instruction = 0x8807EAA4;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// divw r7,r10,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// andc r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// std r5,80(r1)
	ctx.current_instruction = 0x8807EAB8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x8807EABC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x881ef940
	ctx.lr = 0x8807EAD0;
	sub_881EF940(ctx, base);
loc_8807EAD0:
	// lwz r3,30680(r31)
	ctx.current_instruction = 0x8807EAD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 30680);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lfd f13,88(r1)
	ctx.current_instruction = 0x8807EAD8;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r11,88(r1)
	ctx.current_instruction = 0x8807EAE0;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.current_instruction = 0x8807EAE4;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r10,88(r1)
	ctx.current_instruction = 0x8807EAEC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f10,88(r1)
	ctx.current_instruction = 0x8807EAF0;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lfd f8,30800(r31)
	ctx.current_instruction = 0x8807EAF8;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r31.u32 + 30800);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lfd f6,30768(r31)
	ctx.current_instruction = 0x8807EB00;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r31.u32 + 30768);
	// fnmsub f5,f1,f9,f12
	ctx.f5.f64 = -std::fma(ctx.f1.f64, ctx.f9.f64, -ctx.f12.f64);
	// fmul f4,f8,f7
	ctx.f4.f64 = ctx.f8.f64 * ctx.f7.f64;
	// fdiv f3,f5,f4
	ctx.f3.f64 = ctx.f5.f64 / ctx.f4.f64;
	// fadd f0,f3,f6
	ctx.f0.f64 = ctx.f3.f64 + ctx.f6.f64;
	// b 0x8807eb54
	goto loc_8807EB54;
loc_8807EB18:
	// subf r11,r30,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r30.u64;
	// lwz r10,1376(r31)
	ctx.current_instruction = 0x8807EB1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1376);
	// lfd f0,30800(r31)
	ctx.current_instruction = 0x8807EB20;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 30800);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfd f13,30768(r31)
	ctx.current_instruction = 0x8807EB28;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 30768);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,88(r1)
	ctx.current_instruction = 0x8807EB30;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.current_instruction = 0x8807EB34;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	ctx.current_instruction = 0x8807EB38;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.current_instruction = 0x8807EB3C;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmul f8,f10,f0
	ctx.f8.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fdiv f7,f9,f8
	ctx.f7.f64 = ctx.f9.f64 / ctx.f8.f64;
	// fadd f0,f7,f13
	ctx.f0.f64 = ctx.f7.f64 + ctx.f13.f64;
loc_8807EB54:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,8624(r11)
	ctx.current_instruction = 0x8807EB58;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8807eb74
	if (!ctx.cr6.lt) goto loc_8807EB74;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f13,12088(r11)
	ctx.current_instruction = 0x8807EB68;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 12088);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8807eb78
	if (!ctx.cr6.lt) goto loc_8807EB78;
loc_8807EB74:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_8807EB78:
	// fdiv f1,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64 / ctx.f0.f64;
	// bl 0x881ef210
	ctx.lr = 0x8807EB80;
	sub_881EF210(ctx, base);
loc_8807EB80:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	ctx.current_instruction = 0x8807EB84;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8807EB88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8807eba8
	if (!ctx.cr6.lt) goto loc_8807EBA8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8807ebac
	if (!ctx.cr6.lt) goto loc_8807EBAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8807ebac
	goto loc_8807EBAC;
loc_8807EBA8:
	// li r11,8
	ctx.r11.s64 = 8;
loc_8807EBAC:
	// lwz r9,30620(r31)
	ctx.current_instruction = 0x8807EBAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30620);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8807ebdc
	if (ctx.cr6.eq) goto loc_8807EBDC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8807ebdc
	if (!ctx.cr6.gt) goto loc_8807EBDC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x8807ebdc
	if (ctx.cr6.gt) goto loc_8807EBDC;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x8807ebdc
	goto loc_8807EBDC;
loc_8807EBD4:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,8
	ctx.r10.s64 = 8;
loc_8807EBDC:
	// lwz r8,30752(r31)
	ctx.current_instruction = 0x8807EBDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 30752);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8807ec00
	if (!ctx.cr6.eq) goto loc_8807EC00;
	// lwz r9,30756(r31)
	ctx.current_instruction = 0x8807EBE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30756);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8807ec00
	if (!ctx.cr6.eq) goto loc_8807EC00;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30740(r31)
	ctx.current_instruction = 0x8807EBF8;
	REX_STORE_U32(ctx.r31.u32 + 30740, ctx.r11.u32);
	// b 0x8807ec5c
	goto loc_8807EC5C;
loc_8807EC00:
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,30788(r31)
	ctx.current_instruction = 0x8807EC04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 30788);
	// lwz r5,30784(r31)
	ctx.current_instruction = 0x8807EC08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 30784);
	// li r9,1
	ctx.r9.s64 = 1;
	// std r7,88(r1)
	ctx.current_instruction = 0x8807EC10;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f11,30768(r31)
	ctx.current_instruction = 0x8807EC14;
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 30768);
	// lwz r4,30756(r31)
	ctx.current_instruction = 0x8807EC18;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 30756);
	// stfd f11,30776(r31)
	ctx.current_instruction = 0x8807EC1C;
	REX_STORE_U64(ctx.r31.u32 + 30776, ctx.f11.u64);
	// stw r9,30740(r31)
	ctx.current_instruction = 0x8807EC20;
	REX_STORE_U32(ctx.r31.u32 + 30740, ctx.r9.u32);
	// stw r9,30744(r31)
	ctx.current_instruction = 0x8807EC24;
	REX_STORE_U32(ctx.r31.u32 + 30744, ctx.r9.u32);
	// stw r6,30796(r31)
	ctx.current_instruction = 0x8807EC28;
	REX_STORE_U32(ctx.r31.u32 + 30796, ctx.r6.u32);
	// stw r5,30792(r31)
	ctx.current_instruction = 0x8807EC2C;
	REX_STORE_U32(ctx.r31.u32 + 30792, ctx.r5.u32);
	// stw r4,30764(r31)
	ctx.current_instruction = 0x8807EC30;
	REX_STORE_U32(ctx.r31.u32 + 30764, ctx.r4.u32);
	// stw r8,30760(r31)
	ctx.current_instruction = 0x8807EC34;
	REX_STORE_U32(ctx.r31.u32 + 30760, ctx.r8.u32);
	// stw r11,30784(r31)
	ctx.current_instruction = 0x8807EC38;
	REX_STORE_U32(ctx.r31.u32 + 30784, ctx.r11.u32);
	// stw r10,30788(r31)
	ctx.current_instruction = 0x8807EC3C;
	REX_STORE_U32(ctx.r31.u32 + 30788, ctx.r10.u32);
	// stw r10,30756(r31)
	ctx.current_instruction = 0x8807EC40;
	REX_STORE_U32(ctx.r31.u32 + 30756, ctx.r10.u32);
	// stw r11,30752(r31)
	ctx.current_instruction = 0x8807EC44;
	REX_STORE_U32(ctx.r31.u32 + 30752, ctx.r11.u32);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x8807EC48;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fadd f12,f13,f31
	ctx.f12.f64 = ctx.f13.f64 + ctx.f31.f64;
	// fdiv f10,f31,f12
	ctx.f10.f64 = ctx.f31.f64 / ctx.f12.f64;
	// stfd f10,30768(r31)
	ctx.current_instruction = 0x8807EC58;
	REX_STORE_U64(ctx.r31.u32 + 30768, ctx.f10.u64);
loc_8807EC5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8807EC60;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.current_instruction = 0x8807EC68;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8807EC6C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8807EC70;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8808DEF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8808DEF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8808DEF8) {
			switch (rex_dispatch_address) {
				case 0x8808DF00:
				case 0x8808DFE8:
				case 0x8808E004:
				case 0x8808E0CC:
				case 0x8808E0E8:
				case 0x8808E1B4:
				case 0x8808E1D0:
				case 0x8808E288:
				case 0x8808E2A4:
				case 0x8808E374:
				case 0x8808E390:
				case 0x8808E450:
				case 0x8808E46C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8808DEF8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8808DF00: goto loc_8808DF00;
		case 0x8808DFE8: goto loc_8808DFE8;
		case 0x8808E004: goto loc_8808E004;
		case 0x8808E0CC: goto loc_8808E0CC;
		case 0x8808E0E8: goto loc_8808E0E8;
		case 0x8808E1B4: goto loc_8808E1B4;
		case 0x8808E1D0: goto loc_8808E1D0;
		case 0x8808E288: goto loc_8808E288;
		case 0x8808E2A4: goto loc_8808E2A4;
		case 0x8808E374: goto loc_8808E374;
		case 0x8808E390: goto loc_8808E390;
		case 0x8808E450: goto loc_8808E450;
		case 0x8808E46C: goto loc_8808E46C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8808DF00;
	__savegprlr_14(ctx, base);
loc_8808DF00:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x8808DF00;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lwz r9,340(r1)
	ctx.current_instruction = 0x8808DF08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// lwz r6,348(r1)
	ctx.current_instruction = 0x8808DF10;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r25,404(r1)
	ctx.current_instruction = 0x8808DF18;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// subfic r5,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lwz r21,388(r1)
	ctx.current_instruction = 0x8808DF20;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// lwz r26,364(r1)
	ctx.current_instruction = 0x8808DF28;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// subfe r5,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,412(r1)
	ctx.current_instruction = 0x8808DF34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// li r8,-3
	ctx.r8.s64 = -3;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// subfic r4,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r23,12(r3)
	ctx.current_instruction = 0x8808DF4C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,3
	ctx.r9.s64 = 3;
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// lis r10,-30683
	ctx.r10.s64 = -2010841088;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// li r20,16
	ctx.r20.s64 = 16;
	// li r18,0
	ctx.r18.s64 = 0;
	// stw r7,96(r1)
	ctx.current_instruction = 0x8808DF6C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r17,0
	ctx.r17.s64 = 0;
	// and r14,r5,r8
	ctx.r14.u64 = ctx.r5.u64 & ctx.r8.u64;
	// and r15,r3,r9
	ctx.r15.u64 = ctx.r3.u64 & ctx.r9.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r22,r10,6848
	ctx.r22.s64 = ctx.r10.s64 + 6848;
	// bge cr6,0x8808e164
	if (!ctx.cr6.lt) goto loc_8808E164;
loc_8808DF8C:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x8808DF8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// subf r11,r11,r16
	ctx.r11.u64 = ctx.r16.u64 - ctx.r11.u64;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x8808e074
	if (!ctx.cr6.lt) goto loc_8808E074;
	// lwz r11,396(r1)
	ctx.current_instruction = 0x8808DFA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r27,r9,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_8808DFB8:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808DFB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808DFC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808DFCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808DFD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808DFDC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808DFE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808DFE8:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x8808E004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E004:
	// add r10,r30,r21
	ctx.r10.u64 = ctx.r30.u64 + ctx.r21.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808e04c
	if (ctx.cr6.gt) goto loc_8808E04C;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x8808e04c
	if (ctx.cr6.gt) goto loc_8808E04C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x8808E02C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x8808E030;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r25
	ctx.current_instruction = 0x8808E03C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// lwzx r10,r6,r25
	ctx.current_instruction = 0x8808E040;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8808e054
	goto loc_8808E054;
loc_8808E04C:
	// lwz r11,20(r25)
	ctx.current_instruction = 0x8808E04C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808E054:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x8808e06c
	if (!ctx.cr6.lt) goto loc_8808E06C;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
loc_8808E06C:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8808dfb8
	if (ctx.cr0.lt) goto loc_8808DFB8;
loc_8808E074:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x8808E074;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// subf r28,r11,r16
	ctx.r28.u64 = ctx.r16.u64 - ctx.r11.u64;
	// blt cr6,0x8808e15c
	if (ctx.cr6.lt) goto loc_8808E15C;
	// lwz r11,396(r1)
	ctx.current_instruction = 0x8808E088;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r27,r9,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_8808E09C:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808E09C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808E0A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808E0B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808E0B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808E0C0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808E0CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E0CC:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x8808E0E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E0E8:
	// add r10,r30,r21
	ctx.r10.u64 = ctx.r30.u64 + ctx.r21.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808e130
	if (ctx.cr6.gt) goto loc_8808E130;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x8808e130
	if (ctx.cr6.gt) goto loc_8808E130;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x8808E110;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x8808E114;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r25
	ctx.current_instruction = 0x8808E120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// lwzx r10,r6,r25
	ctx.current_instruction = 0x8808E124;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8808e138
	goto loc_8808E138;
loc_8808E130:
	// lwz r11,20(r25)
	ctx.current_instruction = 0x8808E130;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808E138:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x8808e150
	if (!ctx.cr6.lt) goto loc_8808E150;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
loc_8808E150:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x8808e09c
	if (!ctx.cr6.gt) goto loc_8808E09C;
loc_8808E15C:
	// addic. r29,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r29.s64 = ctx.r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8808df8c
	if (ctx.cr0.lt) goto loc_8808DF8C;
loc_8808E164:
	// lwz r28,396(r1)
	ctx.current_instruction = 0x8808E164;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r27,r16,-1
	ctx.r27.s64 = ctx.r16.s64 + -1;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x8808e240
	if (!ctx.cr6.lt) goto loc_8808E240;
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// xor r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8808E184:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808E184;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808E190;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808E198;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808E1A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808E1A8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808E1B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E1B4:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x8808E1D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E1D0:
	// add r10,r30,r21
	ctx.r10.u64 = ctx.r30.u64 + ctx.r21.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808e218
	if (ctx.cr6.gt) goto loc_8808E218;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x8808e218
	if (ctx.cr6.gt) goto loc_8808E218;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x8808E1F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x8808E1FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r25
	ctx.current_instruction = 0x8808E208;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// lwzx r10,r6,r25
	ctx.current_instruction = 0x8808E20C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8808e220
	goto loc_8808E220;
loc_8808E218:
	// lwz r11,20(r25)
	ctx.current_instruction = 0x8808E218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808E220:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x8808e238
	if (!ctx.cr6.lt) goto loc_8808E238;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// li r17,0
	ctx.r17.s64 = 0;
loc_8808E238:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8808e184
	if (ctx.cr0.lt) goto loc_8808E184;
loc_8808E240:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// blt cr6,0x8808e318
	if (ctx.cr6.lt) goto loc_8808E318;
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// xor r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8808E258:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808E258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808E264;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808E26C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808E274;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808E27C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808E288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E288:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x8808E2A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E2A4:
	// add r10,r30,r21
	ctx.r10.u64 = ctx.r30.u64 + ctx.r21.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808e2ec
	if (ctx.cr6.gt) goto loc_8808E2EC;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x8808e2ec
	if (ctx.cr6.gt) goto loc_8808E2EC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x8808E2CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x8808E2D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r25
	ctx.current_instruction = 0x8808E2DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// lwzx r10,r6,r25
	ctx.current_instruction = 0x8808E2E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8808e2f4
	goto loc_8808E2F4;
loc_8808E2EC:
	// lwz r11,20(r25)
	ctx.current_instruction = 0x8808E2EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808E2F4:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x8808e30c
	if (!ctx.cr6.lt) goto loc_8808E30C;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// li r17,0
	ctx.r17.s64 = 0;
loc_8808E30C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x8808e258
	if (!ctx.cr6.gt) goto loc_8808E258;
loc_8808E318:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x8808E318;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8808e4f4
	if (ctx.cr6.lt) goto loc_8808E4F4;
loc_8808E328:
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x8808e404
	if (!ctx.cr6.lt) goto loc_8808E404;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r28,r10,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8808E344:
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808E344;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808E34C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808E358;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808E360;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808E368;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808E374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E374:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x8808E390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E390:
	// add r10,r30,r21
	ctx.r10.u64 = ctx.r30.u64 + ctx.r21.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808e3d8
	if (ctx.cr6.gt) goto loc_8808E3D8;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x8808e3d8
	if (ctx.cr6.gt) goto loc_8808E3D8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x8808E3B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x8808E3BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r25
	ctx.current_instruction = 0x8808E3C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// lwzx r10,r6,r25
	ctx.current_instruction = 0x8808E3CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8808e3e0
	goto loc_8808E3E0;
loc_8808E3D8:
	// lwz r11,20(r25)
	ctx.current_instruction = 0x8808E3D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808E3E0:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x8808e3f8
	if (!ctx.cr6.lt) goto loc_8808E3F8;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
loc_8808E3F8:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8808e344
	if (ctx.cr0.lt) goto loc_8808E344;
	// lwz r28,396(r1)
	ctx.current_instruction = 0x8808E400;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
loc_8808E404:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// blt cr6,0x8808e4e4
	if (ctx.cr6.lt) goto loc_8808E4E4;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r28,r10,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8808E420:
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808E420;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808E428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808E434;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808E43C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808E444;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808E450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E450:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x8808E46C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808E46C:
	// add r10,r30,r21
	ctx.r10.u64 = ctx.r30.u64 + ctx.r21.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808e4b4
	if (ctx.cr6.gt) goto loc_8808E4B4;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x8808e4b4
	if (ctx.cr6.gt) goto loc_8808E4B4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r22
	ctx.current_instruction = 0x8808E494;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r8,r10,r22
	ctx.current_instruction = 0x8808E498;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r25
	ctx.current_instruction = 0x8808E4A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// lwzx r11,r6,r25
	ctx.current_instruction = 0x8808E4A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808e4bc
	goto loc_8808E4BC;
loc_8808E4B4:
	// lwz r11,20(r25)
	ctx.current_instruction = 0x8808E4B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808E4BC:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x8808e4d4
	if (!ctx.cr6.lt) goto loc_8808E4D4;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
loc_8808E4D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x8808e420
	if (!ctx.cr6.gt) goto loc_8808E420;
	// lwz r28,396(r1)
	ctx.current_instruction = 0x8808E4E0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
loc_8808E4E4:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x8808E4E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8808e328
	if (!ctx.cr6.gt) goto loc_8808E328;
loc_8808E4F4:
	// lwz r11,420(r1)
	ctx.current_instruction = 0x8808E4F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,428(r1)
	ctx.current_instruction = 0x8808E4F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r9,436(r1)
	ctx.current_instruction = 0x8808E4FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r18,0(r11)
	ctx.current_instruction = 0x8808E500;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// stw r17,0(r10)
	ctx.current_instruction = 0x8808E504;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r17.u32);
	// stw r19,0(r9)
	ctx.current_instruction = 0x8808E508;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r19.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B4110) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880B4110;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880B4110) {
			switch (rex_dispatch_address) {
				case 0x880B4118:
				case 0x880B41C4:
				case 0x880B4214:
				case 0x880B4258:
				case 0x880B42A0:
				case 0x880B4300:
				case 0x880B4334:
				case 0x880B4384:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880B4110;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880B4118: goto loc_880B4118;
		case 0x880B41C4: goto loc_880B41C4;
		case 0x880B4214: goto loc_880B4214;
		case 0x880B4258: goto loc_880B4258;
		case 0x880B42A0: goto loc_880B42A0;
		case 0x880B4300: goto loc_880B4300;
		case 0x880B4334: goto loc_880B4334;
		case 0x880B4384: goto loc_880B4384;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880B4118;
	__savegprlr_14(ctx, base);
loc_880B4118:
	// stwu r1,-1072(r1)
	ctx.current_instruction = 0x880B4118;
	ea = -1072 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,1212(r1)
	ctx.current_instruction = 0x880B411C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1212);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r26,0(r7)
	ctx.current_instruction = 0x880B4124;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r27,r1,216
	ctx.r27.s64 = ctx.r1.s64 + 216;
	// lwz r24,20(r7)
	ctx.current_instruction = 0x880B412C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// addi r25,r1,208
	ctx.r25.s64 = ctx.r1.s64 + 208;
	// lwz r22,16(r7)
	ctx.current_instruction = 0x880B4134;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// addi r23,r1,212
	ctx.r23.s64 = ctx.r1.s64 + 212;
	// lwz r11,28116(r3)
	ctx.current_instruction = 0x880B413C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28116);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r21,172(r1)
	ctx.current_instruction = 0x880B4144;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r21.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwz r20,1204(r1)
	ctx.current_instruction = 0x880B414C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1204);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r19,1196(r1)
	ctx.current_instruction = 0x880B4154;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r18,1188(r1)
	ctx.current_instruction = 0x880B415C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1188);
	// lwz r17,1180(r1)
	ctx.current_instruction = 0x880B4160;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r16,1172(r1)
	ctx.current_instruction = 0x880B4164;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1172);
	// lwz r15,1164(r1)
	ctx.current_instruction = 0x880B4168;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1164);
	// lwz r14,1156(r1)
	ctx.current_instruction = 0x880B416C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1156);
	// stw r8,1132(r1)
	ctx.current_instruction = 0x880B4170;
	REX_STORE_U32(ctx.r1.u32 + 1132, ctx.r8.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r10,12(r30)
	ctx.current_instruction = 0x880B4178;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,8(r30)
	ctx.current_instruction = 0x880B417C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r4,1100(r1)
	ctx.current_instruction = 0x880B4180;
	REX_STORE_U32(ctx.r1.u32 + 1100, ctx.r4.u32);
	// stw r5,1108(r1)
	ctx.current_instruction = 0x880B4184;
	REX_STORE_U32(ctx.r1.u32 + 1108, ctx.r5.u32);
	// stw r20,164(r1)
	ctx.current_instruction = 0x880B4188;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// stw r19,156(r1)
	ctx.current_instruction = 0x880B418C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// stw r27,196(r1)
	ctx.current_instruction = 0x880B4190;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r25,188(r1)
	ctx.current_instruction = 0x880B4194;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// stw r23,180(r1)
	ctx.current_instruction = 0x880B4198;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r18,148(r1)
	ctx.current_instruction = 0x880B419C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// stw r11,140(r1)
	ctx.current_instruction = 0x880B41A0;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r26,132(r1)
	ctx.current_instruction = 0x880B41A4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r17,124(r1)
	ctx.current_instruction = 0x880B41A8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// stw r16,116(r1)
	ctx.current_instruction = 0x880B41AC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// stw r15,108(r1)
	ctx.current_instruction = 0x880B41B0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// stw r14,100(r1)
	ctx.current_instruction = 0x880B41B4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// stw r24,92(r1)
	ctx.current_instruction = 0x880B41B8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r22,84(r1)
	ctx.current_instruction = 0x880B41BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bl 0x880a0010
	ctx.lr = 0x880B41C4;
	sub_880A0010(ctx, base);
loc_880B41C4:
	// lwz r10,28020(r31)
	ctx.current_instruction = 0x880B41C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,220(r1)
	ctx.current_instruction = 0x880B41CC;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r25.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r27,208(r1)
	ctx.current_instruction = 0x880B41D4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r26,212(r1)
	ctx.current_instruction = 0x880B41D8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// beq cr6,0x880b43ac
	if (ctx.cr6.eq) goto loc_880B43AC;
	// lwz r11,28036(r31)
	ctx.current_instruction = 0x880B41E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b43ac
	if (!ctx.cr6.eq) goto loc_880B43AC;
	// stw r26,208(r1)
	ctx.current_instruction = 0x880B41EC;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// addi r11,r1,271
	ctx.r11.s64 = ctx.r1.s64 + 271;
	// stw r27,212(r1)
	ctx.current_instruction = 0x880B41F4;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r25,r11,0,0,26
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bl 0x8810aa38
	ctx.lr = 0x880B4214;
	sub_8810AA38(ctx, base);
loc_880B4214:
	// lwz r11,212(r1)
	ctx.current_instruction = 0x880B4214;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,2652(r31)
	ctx.current_instruction = 0x880B4218;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r10,208(r1)
	ctx.current_instruction = 0x880B4220;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880B4228;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r6,8
	ctx.r6.s64 = 8;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// lwz r24,1108(r1)
	ctx.current_instruction = 0x880B4234;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1108);
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x880B423C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x880B4258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B4258:
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r22,1132(r1)
	ctx.current_instruction = 0x880B4260;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1132);
	// addi r11,r1,220
	ctx.r11.s64 = ctx.r1.s64 + 220;
	// stw r8,92(r1)
	ctx.current_instruction = 0x880B4268;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x880B426C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r4,1100(r1)
	ctx.current_instruction = 0x880B4278;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1100);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r28,116(r1)
	ctx.current_instruction = 0x880B4280;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r29,108(r1)
	ctx.current_instruction = 0x880B4288;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B4290;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B42A0;
	sub_88085938(ctx, base);
loc_880B42A0:
	// lwz r23,0(r30)
	ctx.current_instruction = 0x880B42A0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r25,220(r1)
	ctx.current_instruction = 0x880B42A4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r29,12(r30)
	ctx.current_instruction = 0x880B42A8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r28,8(r30)
	ctx.current_instruction = 0x880B42B0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// beq cr6,0x880b4344
	if (ctx.cr6.eq) goto loc_880B4344;
	// lwz r21,2608(r31)
	ctx.current_instruction = 0x880B42B8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r20,2604(r31)
	ctx.current_instruction = 0x880B42C0;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// subf r11,r29,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r29.u64;
	// lwz r19,2616(r31)
	ctx.current_instruction = 0x880B42CC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r10,r28,r20
	ctx.r10.u64 = ctx.r20.u64 - ctx.r28.u64;
	// lwz r18,2612(r31)
	ctx.current_instruction = 0x880B42D4;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r24,20(r30)
	ctx.current_instruction = 0x880B42DC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r30,16(r30)
	ctx.current_instruction = 0x880B42E4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// and r9,r11,r19
	ctx.r9.u64 = ctx.r11.u64 & ctx.r19.u64;
	// and r8,r10,r18
	ctx.r8.u64 = ctx.r10.u64 & ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r21,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r21.u64;
	// subf r4,r20,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r20.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B4300;
	sub_88085E60(ctx, base);
loc_880B4300:
	// subf r11,r24,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r24.u64;
	// subf r10,r30,r20
	ctx.r10.u64 = ctx.r20.u64 - ctx.r30.u64;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + ctx.r26.u64;
	// and r5,r7,r19
	ctx.r5.u64 = ctx.r7.u64 & ctx.r19.u64;
	// and r4,r6,r18
	ctx.r4.u64 = ctx.r6.u64 & ctx.r18.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// subf r5,r21,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r21.u64;
	// subf r4,r20,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B4334;
	sub_88085E60(ctx, base);
loc_880B4334:
	// cmpw cr6,r19,r3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x880b4344
	if (ctx.cr6.lt) goto loc_880B4344;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_880B4344:
	// lwz r9,2608(r31)
	ctx.current_instruction = 0x880B4344;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2608);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,2604(r31)
	ctx.current_instruction = 0x880B434C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2604);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// subf r11,r29,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r29.u64;
	// lwz r5,2616(r31)
	ctx.current_instruction = 0x880B4358;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2616);
	// subf r10,r28,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r28.u64;
	// lwz r4,2612(r31)
	ctx.current_instruction = 0x880B4360;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2612);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
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
	ctx.lr = 0x880B4384;
	sub_88085E60(ctx, base);
loc_880B4384:
	// lwz r11,224(r1)
	ctx.current_instruction = 0x880B4384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// beq cr6,0x880b4398
	if (ctx.cr6.eq) goto loc_880B4398;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_880B4398:
	// lwz r9,108(r22)
	ctx.current_instruction = 0x880B4398;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 108);
	// lwz r10,216(r1)
	ctx.current_instruction = 0x880B439C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b43b0
	goto loc_880B43B0;
loc_880B43AC:
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880B43AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
loc_880B43B0:
	// lwz r10,1220(r1)
	ctx.current_instruction = 0x880B43B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1220);
	// lwz r9,1228(r1)
	ctx.current_instruction = 0x880B43B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1228);
	// lwz r8,1236(r1)
	ctx.current_instruction = 0x880B43B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// lwz r7,1244(r1)
	ctx.current_instruction = 0x880B43BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// stw r26,0(r10)
	ctx.current_instruction = 0x880B43C0;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r27,0(r9)
	ctx.current_instruction = 0x880B43C4;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// stw r11,0(r8)
	ctx.current_instruction = 0x880B43C8;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r25,0(r7)
	ctx.current_instruction = 0x880B43CC;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r25.u32);
	// addi r1,r1,1072
	ctx.r1.s64 = ctx.r1.s64 + 1072;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BE928) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BE928;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BE928) {
			switch (rex_dispatch_address) {
				case 0x880BE930:
				case 0x880BE9C8:
				case 0x880BE9D8:
				case 0x880BEA10:
				case 0x880BEA64:
				case 0x880BEA74:
				case 0x880BEAAC:
				case 0x880BEAE4:
				case 0x880BEAF4:
				case 0x880BEB24:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BE928;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BE930: goto loc_880BE930;
		case 0x880BE9C8: goto loc_880BE9C8;
		case 0x880BE9D8: goto loc_880BE9D8;
		case 0x880BEA10: goto loc_880BEA10;
		case 0x880BEA64: goto loc_880BEA64;
		case 0x880BEA74: goto loc_880BEA74;
		case 0x880BEAAC: goto loc_880BEAAC;
		case 0x880BEAE4: goto loc_880BEAE4;
		case 0x880BEAF4: goto loc_880BEAF4;
		case 0x880BEB24: goto loc_880BEB24;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880BE930;
	__savegprlr_20(ctx, base);
loc_880BE930:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880BE930;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880beb30
	if (ctx.cr6.eq) goto loc_880BEB30;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880beb30
	if (ctx.cr6.eq) goto loc_880BEB30;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x880beb30
	if (ctx.cr6.eq) goto loc_880BEB30;
	// lwz r31,12(r3)
	ctx.current_instruction = 0x880BE958;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r11,16(r3)
	ctx.current_instruction = 0x880BE960;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,56(r3)
	ctx.current_instruction = 0x880BE964;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r28,r31,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r22,r11,31,1,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880be988
	if (ctx.cr6.eq) goto loc_880BE988;
	// lwz r10,31540(r10)
	ctx.current_instruction = 0x880BE978;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31540);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x880be988
	if (ctx.cr6.lt) goto loc_880BE988;
	// li r29,4
	ctx.r29.s64 = 4;
loc_880BE988:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subf. r27,r29,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mullw r11,r10,r31
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mullw r11,r9,r31
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// ble 0x880be9e8
	if (!ctx.cr0.gt) goto loc_880BE9E8;
	// subf r25,r29,r31
	ctx.r25.u64 = ctx.r31.u64 - ctx.r29.u64;
	// subf r26,r29,r30
	ctx.r26.u64 = ctx.r30.u64 - ctx.r29.u64;
	// subf r24,r30,r11
	ctx.r24.u64 = ctx.r11.u64 - ctx.r30.u64;
loc_880BE9B8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r4,r24,r30
	ctx.r4.u64 = ctx.r24.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880BE9C8;
	sub_880547A0(ctx, base);
loc_880BE9C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r4,0(r30)
	ctx.current_instruction = 0x880BE9D0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x88052d90
	ctx.lr = 0x880BE9D8;
	sub_88052D90(ctx, base);
loc_880BE9D8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// subf r30,r31,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r26,r31,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r31.u64;
	// bne 0x880be9b8
	if (!ctx.cr0.eq) goto loc_880BE9B8;
loc_880BE9E8:
	// mullw r11,r29,r31
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// add r26,r11,r23
	ctx.r26.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880bea1c
	if (!ctx.cr6.gt) goto loc_880BEA1C;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_880BEA00:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880BEA10;
	sub_880547A0(ctx, base);
loc_880BEA10:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bne 0x880bea00
	if (!ctx.cr0.eq) goto loc_880BEA00;
loc_880BEA1C:
	// srawi r31,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 1;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// subf. r29,r31,r22
	ctx.r29.u64 = ctx.r22.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// add r23,r11,r31
	ctx.r23.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mullw r22,r10,r28
	ctx.r22.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r30,r23,r21
	ctx.r30.u64 = ctx.r23.u64 + ctx.r21.u64;
	// add r11,r22,r21
	ctx.r11.u64 = ctx.r22.u64 + ctx.r21.u64;
	// ble 0x880bea84
	if (!ctx.cr0.gt) goto loc_880BEA84;
	// subf r25,r31,r28
	ctx.r25.u64 = ctx.r28.u64 - ctx.r31.u64;
	// subf r26,r31,r30
	ctx.r26.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r24,r30,r11
	ctx.r24.u64 = ctx.r11.u64 - ctx.r30.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_880BEA54:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r4,r24,r30
	ctx.r4.u64 = ctx.r24.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880BEA64;
	sub_880547A0(ctx, base);
loc_880BEA64:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r4,0(r30)
	ctx.current_instruction = 0x880BEA6C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x88052d90
	ctx.lr = 0x880BEA74;
	sub_88052D90(ctx, base);
loc_880BEA74:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// subf r30,r28,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r28.u64;
	// subf r26,r28,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r28.u64;
	// bne 0x880bea54
	if (!ctx.cr0.eq) goto loc_880BEA54;
loc_880BEA84:
	// mullw r24,r31,r28
	ctx.r24.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r28.s32);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// add r26,r24,r21
	ctx.r26.u64 = ctx.r24.u64 + ctx.r21.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x880beab8
	if (!ctx.cr6.gt) goto loc_880BEAB8;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_880BEA9C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880BEAAC;
	sub_880547A0(ctx, base);
loc_880BEAAC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bne 0x880bea9c
	if (!ctx.cr0.eq) goto loc_880BEA9C;
loc_880BEAB8:
	// add r30,r23,r20
	ctx.r30.u64 = ctx.r23.u64 + ctx.r20.u64;
	// add r11,r22,r20
	ctx.r11.u64 = ctx.r22.u64 + ctx.r20.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880beb04
	if (!ctx.cr6.gt) goto loc_880BEB04;
	// subf r26,r31,r28
	ctx.r26.u64 = ctx.r28.u64 - ctx.r31.u64;
	// subf r27,r31,r30
	ctx.r27.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r25,r30,r11
	ctx.r25.u64 = ctx.r11.u64 - ctx.r30.u64;
loc_880BEAD4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r4,r25,r30
	ctx.r4.u64 = ctx.r25.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880BEAE4;
	sub_880547A0(ctx, base);
loc_880BEAE4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r4,0(r30)
	ctx.current_instruction = 0x880BEAEC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x88052d90
	ctx.lr = 0x880BEAF4;
	sub_88052D90(ctx, base);
loc_880BEAF4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// subf r30,r28,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r28.u64;
	// subf r27,r28,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r28.u64;
	// bne 0x880bead4
	if (!ctx.cr0.eq) goto loc_880BEAD4;
loc_880BEB04:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// add r29,r24,r20
	ctx.r29.u64 = ctx.r24.u64 + ctx.r20.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x880beb30
	if (!ctx.cr6.gt) goto loc_880BEB30;
loc_880BEB14:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880BEB24;
	sub_880547A0(ctx, base);
loc_880BEB24:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bne 0x880beb14
	if (!ctx.cr0.eq) goto loc_880BEB14;
loc_880BEB30:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C00E8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880C00E8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C00E8;
	ctx.current_instruction = 0x880C00E8;
	// lwz r11,6732(r3)
	ctx.current_instruction = 0x880C00E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6732);
	// li r10,3
	ctx.r10.s64 = 3;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,6760(r3)
	ctx.current_instruction = 0x880C0108;
	REX_STORE_U32(ctx.r3.u32 + 6760, ctx.r9.u32);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r10,6744(r3)
	ctx.current_instruction = 0x880C0114;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6744);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6744(r3)
	ctx.current_instruction = 0x880C0120;
	REX_STORE_U32(ctx.r3.u32 + 6744, ctx.r10.u32);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r10,2800(r3)
	ctx.current_instruction = 0x880C0128;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880c0168
	if (!ctx.cr6.eq) goto loc_880C0168;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lwz r10,6748(r3)
	ctx.current_instruction = 0x880C0138;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6748);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// std r8,-16(r1)
	ctx.current_instruction = 0x880C0148;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.current_instruction = 0x880C014C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f0,13632(r9)
	ctx.current_instruction = 0x880C0158;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 13632);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r10,r7
	ctx.current_instruction = 0x880C0164;
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.f10.u32);
loc_880C0168:
	// lwz r11,6752(r3)
	ctx.current_instruction = 0x880C0168;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6752);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// stw r5,6752(r3)
	ctx.current_instruction = 0x880C0174;
	REX_STORE_U32(ctx.r3.u32 + 6752, ctx.r5.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880C1CB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C1CB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C1CB8) {
			switch (rex_dispatch_address) {
				case 0x880C1CC0:
				case 0x880C1D08:
				case 0x880C1D44:
				case 0x880C1D88:
				case 0x880C1DBC:
				case 0x880C1DD0:
				case 0x880C1E04:
				case 0x880C1EBC:
				case 0x880C1ED8:
				case 0x880C1EF0:
				case 0x880C1FA0:
				case 0x880C1FBC:
				case 0x880C1FD4:
				case 0x880C2064:
				case 0x880C2080:
				case 0x880C2098:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C1CB8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C1CC0: goto loc_880C1CC0;
		case 0x880C1D08: goto loc_880C1D08;
		case 0x880C1D44: goto loc_880C1D44;
		case 0x880C1D88: goto loc_880C1D88;
		case 0x880C1DBC: goto loc_880C1DBC;
		case 0x880C1DD0: goto loc_880C1DD0;
		case 0x880C1E04: goto loc_880C1E04;
		case 0x880C1EBC: goto loc_880C1EBC;
		case 0x880C1ED8: goto loc_880C1ED8;
		case 0x880C1EF0: goto loc_880C1EF0;
		case 0x880C1FA0: goto loc_880C1FA0;
		case 0x880C1FBC: goto loc_880C1FBC;
		case 0x880C1FD4: goto loc_880C1FD4;
		case 0x880C2064: goto loc_880C2064;
		case 0x880C2080: goto loc_880C2080;
		case 0x880C2098: goto loc_880C2098;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880C1CC0;
	__savegprlr_20(ctx, base);
loc_880C1CC0:
	// stwu r1,-464(r1)
	ctx.current_instruction = 0x880C1CC0;
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,572(r1)
	ctx.current_instruction = 0x880C1CC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,580(r1)
	ctx.current_instruction = 0x880C1CCC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r30,r11,128
	ctx.r30.s64 = ctx.r11.s64 + 128;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// addi r23,r4,4
	ctx.r23.s64 = ctx.r4.s64 + 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
loc_880C1CF8:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880ef1e8
	ctx.lr = 0x880C1D08;
	sub_880EF1E8(ctx, base);
loc_880C1D08:
	// lhz r9,224(r1)
	ctx.current_instruction = 0x880C1D08;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 224);
	// lwz r8,1472(r31)
	ctx.current_instruction = 0x880C1D0C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1472);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 18;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// sth r7,0(r30)
	ctx.current_instruction = 0x880C1D30;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r7.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r7,r11,r10
	ctx.current_instruction = 0x880C1D3C;
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// bl 0x880ec4e0
	ctx.lr = 0x880C1D44;
	sub_880EC4E0(ctx, base);
loc_880C1D44:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,-4(r6)
	ctx.current_instruction = 0x880C1D5C;
	REX_STORE_U32(ctx.r6.u32 + -4, ctx.r3.u32);
	// bne cr6,0x880c1d68
	if (!ctx.cr6.eq) goto loc_880C1D68;
	// li r11,120
	ctx.r11.s64 = 120;
loc_880C1D68:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// ble cr6,0x880c1cf8
	if (!ctx.cr6.gt) goto loc_880C1CF8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x880ef1e8
	ctx.lr = 0x880C1D88;
	sub_880EF1E8(ctx, base);
loc_880C1D88:
	// lhz r11,96(r1)
	ctx.current_instruction = 0x880C1D88;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r10,1476(r31)
	ctx.current_instruction = 0x880C1D8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1476);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r7,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 18;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r29,0(r30)
	ctx.current_instruction = 0x880C1DB0;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r29.u16);
	// sth r29,90(r1)
	ctx.current_instruction = 0x880C1DB4;
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r29.u16);
	// bl 0x880ec4e0
	ctx.lr = 0x880C1DBC;
	sub_880EC4E0(ctx, base);
loc_880C1DBC:
	// stw r3,16(r23)
	ctx.current_instruction = 0x880C1DBC;
	REX_STORE_U32(ctx.r23.u32 + 16, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880ef1e8
	ctx.lr = 0x880C1DD0;
	sub_880EF1E8(ctx, base);
loc_880C1DD0:
	// lhz r4,96(r1)
	ctx.current_instruction = 0x880C1DD0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r11,1476(r31)
	ctx.current_instruction = 0x880C1DD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1476);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// addi r5,r28,2
	ctx.r5.s64 = ctx.r28.s64 + 2;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r8,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// sthu r27,256(r30)
	ctx.current_instruction = 0x880C1DF4;
	ea = 256 + ctx.r30.u32;
	REX_STORE_U16(ea, ctx.r27.u16);
	ctx.r30.u32 = ea;
	// sth r27,92(r1)
	ctx.current_instruction = 0x880C1DF8;
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r27.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880ec4e0
	ctx.lr = 0x880C1E04;
	sub_880EC4E0(ctx, base);
loc_880C1E04:
	// lwz r28,548(r1)
	ctx.current_instruction = 0x880C1E04;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// stw r3,20(r23)
	ctx.current_instruction = 0x880C1E08;
	REX_STORE_U32(ctx.r23.u32 + 20, ctx.r3.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_880C1E10:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r10,-4(r11)
	ctx.current_instruction = 0x880C1E18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880c1e90
	if (!ctx.cr6.eq) goto loc_880C1E90;
	// lwz r11,1576(r31)
	ctx.current_instruction = 0x880C1E24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c1e90
	if (!ctx.cr6.eq) goto loc_880C1E90;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,1452(r31)
	ctx.current_instruction = 0x880C1E34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1452);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhzx r6,r11,r7
	ctx.current_instruction = 0x880C1E44;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mullw r11,r5,r9
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
loc_880C1E5C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C1E68:
	// stbu r7,1(r11)
	ctx.current_instruction = 0x880C1E68;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x880c1e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C1E68;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r9,1380(r31)
	ctx.current_instruction = 0x880C1E74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x880c1e5c
	if (ctx.cr6.lt) goto loc_880C1E5C;
	// b 0x880c1ef0
	goto loc_880C1EF0;
loc_880C1E90:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,1452(r31)
	ctx.current_instruction = 0x880C1E94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1452);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r8,r11,r9
	ctx.current_instruction = 0x880C1EA8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// sth r6,0(r28)
	ctx.current_instruction = 0x880C1EB4;
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r6.u16);
	// bl 0x880ec478
	ctx.lr = 0x880C1EBC;
	sub_880EC478(ctx, base);
loc_880C1EBC:
	// lis r10,-30705
	ctx.r10.s64 = -2012282880;
	// lwz r8,8060(r31)
	ctx.current_instruction = 0x880C1EC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8060);
	// addi r9,r10,-4040
	ctx.r9.s64 = ctx.r10.s64 + -4040;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x880c1ed8
	if (!ctx.cr6.eq) goto loc_880C1ED8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88100ce0
	ctx.lr = 0x880C1ED8;
	sub_88100CE0(ctx, base);
loc_880C1ED8:
	// lwz r11,8084(r31)
	ctx.current_instruction = 0x880C1ED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8084);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880C1EE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880C1EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C1EF0:
	// addi r21,r21,256
	ctx.r21.s64 = ctx.r21.s64 + 256;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne cr6,0x880c1f04
	if (!ctx.cr6.eq) goto loc_880C1F04;
	// lwz r11,19088(r31)
	ctx.current_instruction = 0x880C1F00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19088);
loc_880C1F04:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// ble cr6,0x880c1e10
	if (!ctx.cr6.gt) goto loc_880C1E10;
	// lwz r11,16(r23)
	ctx.current_instruction = 0x880C1F14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c1f80
	if (!ctx.cr6.eq) goto loc_880C1F80;
	// lwz r11,1576(r31)
	ctx.current_instruction = 0x880C1F20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c1f80
	if (!ctx.cr6.eq) goto loc_880C1F80;
	// lwz r11,1456(r31)
	ctx.current_instruction = 0x880C1F2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1456);
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
loc_880C1F4C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C1F58:
	// stbu r7,1(r11)
	ctx.current_instruction = 0x880C1F58;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x880c1f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C1F58;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r9,1384(r31)
	ctx.current_instruction = 0x880C1F64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x880c1f4c
	if (ctx.cr6.lt) goto loc_880C1F4C;
	// b 0x880c1fd4
	goto loc_880C1FD4;
loc_880C1F80:
	// lwz r11,1456(r31)
	ctx.current_instruction = 0x880C1F80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1456);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// sth r9,0(r28)
	ctx.current_instruction = 0x880C1F90;
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r9.u16);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec478
	ctx.lr = 0x880C1FA0;
	sub_880EC478(ctx, base);
loc_880C1FA0:
	// lis r7,-30705
	ctx.r7.s64 = -2012282880;
	// lwz r5,8060(r31)
	ctx.current_instruction = 0x880C1FA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8060);
	// addi r6,r7,-4040
	ctx.r6.s64 = ctx.r7.s64 + -4040;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x880c1fbc
	if (!ctx.cr6.eq) goto loc_880C1FBC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88100ce0
	ctx.lr = 0x880C1FBC;
	sub_88100CE0(ctx, base);
loc_880C1FBC:
	// lwz r11,8084(r31)
	ctx.current_instruction = 0x880C1FBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8084);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,1384(r31)
	ctx.current_instruction = 0x880C1FC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880C1FD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C1FD4:
	// lwz r11,20(r23)
	ctx.current_instruction = 0x880C1FD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// addi r4,r21,256
	ctx.r4.s64 = ctx.r21.s64 + 256;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c2048
	if (!ctx.cr6.eq) goto loc_880C2048;
	// lwz r11,1576(r31)
	ctx.current_instruction = 0x880C1FE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c2048
	if (!ctx.cr6.eq) goto loc_880C2048;
	// lwz r11,1456(r31)
	ctx.current_instruction = 0x880C1FF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1456);
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
loc_880C2010:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C201C:
	// stbu r7,1(r11)
	ctx.current_instruction = 0x880C201C;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x880c201c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C201C;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r9,1384(r31)
	ctx.current_instruction = 0x880C2028;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x880c2010
	if (ctx.cr6.lt) goto loc_880C2010;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880C2048:
	// lwz r11,1456(r31)
	ctx.current_instruction = 0x880C2048;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1456);
	// extsh r10,r27
	ctx.r10.s64 = ctx.r27.s16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// sth r9,0(r28)
	ctx.current_instruction = 0x880C2058;
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r9.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ec478
	ctx.lr = 0x880C2064;
	sub_880EC478(ctx, base);
loc_880C2064:
	// lis r7,-30705
	ctx.r7.s64 = -2012282880;
	// lwz r5,8060(r31)
	ctx.current_instruction = 0x880C2068;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8060);
	// addi r6,r7,-4040
	ctx.r6.s64 = ctx.r7.s64 + -4040;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x880c2080
	if (!ctx.cr6.eq) goto loc_880C2080;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88100ce0
	ctx.lr = 0x880C2080;
	sub_88100CE0(ctx, base);
loc_880C2080:
	// lwz r11,8084(r31)
	ctx.current_instruction = 0x880C2080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8084);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,1384(r31)
	ctx.current_instruction = 0x880C208C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880C2098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880C2098:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C8758) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C8758;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C8758) {
			switch (rex_dispatch_address) {
				case 0x880C87A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C8758;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C87A8: goto loc_880C87A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880C875C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880C8760;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880C8764;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.current_instruction = 0x880C8768;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x880c8778
	if (ctx.cr6.gt) goto loc_880C8778;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_880C8778:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,124(r1)
	ctx.current_instruction = 0x880C877C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r7,116(r1)
	ctx.current_instruction = 0x880C8780;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,4(r3)
	ctx.current_instruction = 0x880C878C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,108(r1)
	ctx.current_instruction = 0x880C8794;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r5,100(r1)
	ctx.current_instruction = 0x880C8798;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r31,92(r1)
	ctx.current_instruction = 0x880C879C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,84(r1)
	ctx.current_instruction = 0x880C87A0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x880c83e0
	ctx.lr = 0x880C87A8;
	sub_880C83E0(ctx, base);
loc_880C87A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880C87AC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880C87B4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880C9600) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C9600;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C9600) {
			switch (rex_dispatch_address) {
				case 0x880C9608:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C9600;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x880C9608: goto loc_880C9608;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880C9608;
	__savegprlr_24(ctx, base);
loc_880C9608:
	// lwz r25,0(r3)
	ctx.current_instruction = 0x880C9608;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,4(r25)
	ctx.current_instruction = 0x880C960C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x880c9694
	if (!ctx.cr6.gt) goto loc_880C9694;
	// lwz r9,4(r3)
	ctx.current_instruction = 0x880C9618;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r26,4(r9)
	ctx.current_instruction = 0x880C961C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x880c9694
	if (!ctx.cr6.gt) goto loc_880C9694;
	// lwz r8,16(r25)
	ctx.current_instruction = 0x880C9628;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x880c963c
	if (ctx.cr6.eq) goto loc_880C963C;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x880c9650
	if (!ctx.cr6.eq) goto loc_880C9650;
loc_880C963C:
	// lwz r11,16(r9)
	ctx.current_instruction = 0x880C963C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880c994c
	if (ctx.cr6.eq) goto loc_880C994C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880c994c
	if (ctx.cr6.eq) goto loc_880C994C;
loc_880C9650:
	// lwz r11,14612(r3)
	ctx.current_instruction = 0x880C9650;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c969c
	if (ctx.cr6.eq) goto loc_880C969C;
	// lwz r11,14604(r3)
	ctx.current_instruction = 0x880C965C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14604);
	// lwz r10,14596(r3)
	ctx.current_instruction = 0x880C9660;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14596);
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r26,r7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880c9694
	if (!ctx.cr6.eq) goto loc_880C9694;
	// lwz r27,8(r9)
	ctx.current_instruction = 0x880C9670;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,14608(r3)
	ctx.current_instruction = 0x880C9674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14608);
	// srawi r10,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 31;
	// lwz r7,14600(r3)
	ctx.current_instruction = 0x880C967C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 14600);
	// xor r6,r27,r10
	ctx.r6.u64 = ctx.r27.u64 ^ ctx.r10.u64;
	// subf r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r11,r10,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r10.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x880c96cc
	if (ctx.cr6.eq) goto loc_880C96CC;
loc_880C9694:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_880C969C:
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x880c9694
	if (!ctx.cr6.eq) goto loc_880C9694;
	// lwz r27,8(r9)
	ctx.current_instruction = 0x880C96A4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,8(r25)
	ctx.current_instruction = 0x880C96A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// srawi r10,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 31;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// xor r6,r27,r10
	ctx.r6.u64 = ctx.r27.u64 ^ ctx.r10.u64;
	// xor r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// subf r11,r10,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880c9694
	if (!ctx.cr6.eq) goto loc_880C9694;
loc_880C96CC:
	// lis r10,14677
	ctx.r10.s64 = 961871872;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880c9714
	if (!ctx.cr6.eq) goto loc_880C9714;
	// srawi r7,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 2;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r4,r5,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x880c9694
	if (!ctx.cr0.eq) goto loc_880C9694;
	// lwz r7,8(r25)
	ctx.current_instruction = 0x880C96F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// srawi r6,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// subf r4,r6,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r6.u64;
	// srawi r3,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r5,r6,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x880c9694
	if (!ctx.cr0.eq) goto loc_880C9694;
loc_880C9714:
	// lwz r7,16(r9)
	ctx.current_instruction = 0x880C9714;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880c9748
	if (!ctx.cr6.eq) goto loc_880C9748;
	// srawi r10,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 2;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r5,r6,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x880c9694
	if (!ctx.cr0.eq) goto loc_880C9694;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x880c9694
	if (!ctx.cr0.eq) goto loc_880C9694;
loc_880C9748:
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r11,r11,13392
	ctx.r11.u64 = ctx.r11.u64 | 13392;
	// ori r10,r10,22094
	ctx.r10.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880c9768
	if (ctx.cr6.eq) goto loc_880C9768;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880c977c
	if (!ctx.cr6.eq) goto loc_880C977C;
loc_880C9768:
	// srawi r9,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 2;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r4,r5,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x880c9694
	if (!ctx.cr0.eq) goto loc_880C9694;
loc_880C977C:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880c978c
	if (ctx.cr6.eq) goto loc_880C978C;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880c97a0
	if (!ctx.cr6.eq) goto loc_880C97A0;
loc_880C978C:
	// srawi r11,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r6,r9,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x880c9694
	if (!ctx.cr0.eq) goto loc_880C9694;
loc_880C97A0:
	// lis r11,20529
	ctx.r11.s64 = 1345388544;
	// ori r10,r11,13401
	ctx.r10.u64 = ctx.r11.u64 | 13401;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880c97c4
	if (!ctx.cr6.eq) goto loc_880C97C4;
	// srawi r11,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r6,r9,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x880c9694
	if (!ctx.cr0.eq) goto loc_880C9694;
loc_880C97C4:
	// lis r11,21553
	ctx.r11.s64 = 1412497408;
	// ori r10,r11,13401
	ctx.r10.u64 = ctx.r11.u64 | 13401;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880c97e8
	if (!ctx.cr6.eq) goto loc_880C97E8;
	// srawi r11,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r6,r9,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x880c9694
	if (!ctx.cr0.eq) goto loc_880C9694;
loc_880C97E8:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// lis r4,22101
	ctx.r4.s64 = 1448411136;
	// lis r30,20532
	ctx.r30.s64 = 1345585152;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// lis r9,21849
	ctx.r9.s64 = 1431896064;
	// lis r6,22066
	ctx.r6.s64 = 1446117376;
	// lis r5,22068
	ctx.r5.s64 = 1446248448;
	// lis r31,12338
	ctx.r31.s64 = 808583168;
	// lis r29,12849
	ctx.r29.s64 = 842072064;
	// lis r24,12849
	ctx.r24.s64 = 842072064;
	// ori r3,r4,22857
	ctx.r3.u64 = ctx.r4.u64 | 22857;
	// ori r4,r30,12850
	ctx.r4.u64 = ctx.r30.u64 | 12850;
	// ori r10,r10,22869
	ctx.r10.u64 = ctx.r10.u64 | 22869;
	// ori r9,r9,22105
	ctx.r9.u64 = ctx.r9.u64 | 22105;
	// ori r6,r6,12598
	ctx.r6.u64 = ctx.r6.u64 | 12598;
	// ori r5,r5,12592
	ctx.r5.u64 = ctx.r5.u64 | 12592;
	// ori r31,r31,13385
	ctx.r31.u64 = ctx.r31.u64 | 13385;
	// ori r29,r29,22094
	ctx.r29.u64 = ctx.r29.u64 | 22094;
	// ori r30,r24,22105
	ctx.r30.u64 = ctx.r24.u64 | 22105;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880c9888
	if (ctx.cr6.eq) goto loc_880C9888;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c9888
	if (ctx.cr6.eq) goto loc_880C9888;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880c9888
	if (ctx.cr6.eq) goto loc_880C9888;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880c9888
	if (ctx.cr6.eq) goto loc_880C9888;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x880c9888
	if (ctx.cr6.eq) goto loc_880C9888;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x880c9888
	if (ctx.cr6.eq) goto loc_880C9888;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x880c9888
	if (ctx.cr6.eq) goto loc_880C9888;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880c9888
	if (ctx.cr6.eq) goto loc_880C9888;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x880c9888
	if (ctx.cr6.eq) goto loc_880C9888;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x880c9894
	if (!ctx.cr6.eq) goto loc_880C9894;
loc_880C9888:
	// clrlwi r28,r28,31
	ctx.r28.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880c9694
	if (!ctx.cr6.eq) goto loc_880C9694;
loc_880C9894:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880c98e4
	if (ctx.cr6.eq) goto loc_880C98E4;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c98e4
	if (ctx.cr6.eq) goto loc_880C98E4;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880c98e4
	if (ctx.cr6.eq) goto loc_880C98E4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880c98e4
	if (ctx.cr6.eq) goto loc_880C98E4;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x880c98e4
	if (ctx.cr6.eq) goto loc_880C98E4;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x880c98e4
	if (ctx.cr6.eq) goto loc_880C98E4;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x880c98e4
	if (ctx.cr6.eq) goto loc_880C98E4;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880c98e4
	if (ctx.cr6.eq) goto loc_880C98E4;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x880c98e4
	if (ctx.cr6.eq) goto loc_880C98E4;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x880c98f0
	if (!ctx.cr6.eq) goto loc_880C98F0;
loc_880C98E4:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c9694
	if (!ctx.cr6.eq) goto loc_880C9694;
loc_880C98F0:
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x880c9910
	if (ctx.cr6.eq) goto loc_880C9910;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x880c9910
	if (ctx.cr6.eq) goto loc_880C9910;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x880c9910
	if (ctx.cr6.eq) goto loc_880C9910;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x880c9920
	if (!ctx.cr6.eq) goto loc_880C9920;
loc_880C9910:
	// lwz r11,8(r25)
	ctx.current_instruction = 0x880C9910;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880c9694
	if (!ctx.cr6.eq) goto loc_880C9694;
loc_880C9920:
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x880c9940
	if (ctx.cr6.eq) goto loc_880C9940;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x880c9940
	if (ctx.cr6.eq) goto loc_880C9940;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x880c9940
	if (ctx.cr6.eq) goto loc_880C9940;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x880c994c
	if (!ctx.cr6.eq) goto loc_880C994C;
loc_880C9940:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c9694
	if (!ctx.cr6.eq) goto loc_880C9694;
loc_880C994C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CDA60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CDA60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CDA60) {
			switch (rex_dispatch_address) {
				case 0x880CDA68:
				case 0x880CDAA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CDA60;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CDA68: goto loc_880CDA68;
		case 0x880CDAA0: goto loc_880CDAA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x880CDA68;
	__savegprlr_21(ctx, base);
loc_880CDA68:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x880CDA68;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDA78;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x880cda8c
	if (!ctx.cr6.eq) goto loc_880CDA8C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_880CDA8C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.current_instruction = 0x880CDA90;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CDAA0;
	sub_8805ADC8(ctx, base);
loc_880CDAA0:
	// cmplwi cr6,r3,30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 30, ctx.xer);
	// beq cr6,0x880cdab4
	if (ctx.cr6.eq) goto loc_880CDAB4;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_880CDAB4:
	// ld r9,0(r31)
	ctx.current_instruction = 0x880CDAB4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CDABC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r9,r9,30
	ctx.r9.s64 = ctx.r9.s64 + 30;
	// addi r10,r10,13928
	ctx.r10.s64 = ctx.r10.s64 + 13928;
	// std r9,0(r31)
	ctx.current_instruction = 0x880CDACC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
	// lbz r6,1(r11)
	ctx.current_instruction = 0x880CDAD4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880CDAD8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.current_instruction = 0x880CDADC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r5,r8,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r4,2(r11)
	ctx.current_instruction = 0x880CDAE4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDAEC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x880CDAF4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.current_instruction = 0x880CDAF8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r9,r4,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDB08;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x880CDB10;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,1(r11)
	ctx.current_instruction = 0x880CDB14;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r29,2(r11)
	ctx.current_instruction = 0x880CDB18;
	ea = 2 + ctx.r11.u32;
	ctx.r29.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// sth r4,100(r1)
	ctx.current_instruction = 0x880CDB20;
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r4.u16);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rotlwi r9,r5,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDB30;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzu r5,1(r11)
	ctx.current_instruction = 0x880CDB38;
	ea = 1 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDB3C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r27,1(r11)
	ctx.current_instruction = 0x880CDB40;
	ea = 1 + ctx.r11.u32;
	ctx.r27.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDB44;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r26,1(r11)
	ctx.current_instruction = 0x880CDB48;
	ea = 1 + ctx.r11.u32;
	ctx.r26.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDB4C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r25,1(r11)
	ctx.current_instruction = 0x880CDB50;
	ea = 1 + ctx.r11.u32;
	ctx.r25.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDB54;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r24,1(r11)
	ctx.current_instruction = 0x880CDB58;
	ea = 1 + ctx.r11.u32;
	ctx.r24.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDB5C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r23,1(r11)
	ctx.current_instruction = 0x880CDB60;
	ea = 1 + ctx.r11.u32;
	ctx.r23.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDB64;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r22,1(r11)
	ctx.current_instruction = 0x880CDB68;
	ea = 1 + ctx.r11.u32;
	ctx.r22.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CDB70;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r7,2(r11)
	ctx.current_instruction = 0x880CDB74;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CDB78;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,3(r11)
	ctx.current_instruction = 0x880CDB7C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r21,r9,r7
	ctx.r21.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CDB88;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r7,12(r11)
	ctx.current_instruction = 0x880CDB8C;
	ea = 12 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r21,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFFFF00;
	// stw r4,96(r1)
	ctx.current_instruction = 0x880CDB98;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stb r5,105(r1)
	ctx.current_instruction = 0x880CDB9C;
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r5.u8);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r29,104(r1)
	ctx.current_instruction = 0x880CDBA4;
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// stb r27,106(r1)
	ctx.current_instruction = 0x880CDBA8;
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r27.u8);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// sth r28,102(r1)
	ctx.current_instruction = 0x880CDBB0;
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r28.u16);
	// stb r25,108(r1)
	ctx.current_instruction = 0x880CDBB4;
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r25.u8);
	// stb r26,107(r1)
	ctx.current_instruction = 0x880CDBB8;
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r26.u8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r24,109(r1)
	ctx.current_instruction = 0x880CDBC0;
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r24.u8);
	// stb r22,111(r1)
	ctx.current_instruction = 0x880CDBC4;
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r22.u8);
	// stw r6,80(r1)
	ctx.current_instruction = 0x880CDBC8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stb r23,110(r1)
	ctx.current_instruction = 0x880CDBCC;
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r23.u8);
loc_880CDBD0:
	// lbz r9,0(r10)
	ctx.current_instruction = 0x880CDBD0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r3)
	ctx.current_instruction = 0x880CDBD4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// subf. r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880cdbf0
	if (!ctx.cr0.eq) goto loc_880CDBF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880cdbd0
	if (!ctx.cr6.eq) goto loc_880CDBD0;
loc_880CDBF0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880cdc20
	if (!ctx.cr6.eq) goto loc_880CDC20;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x880cdc20
	if (!ctx.cr6.eq) goto loc_880CDC20;
	// lbz r10,0(r6)
	ctx.current_instruction = 0x880CDC04;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x880cdc20
	if (!ctx.cr6.eq) goto loc_880CDC20;
	// stw r11,16(r31)
	ctx.current_instruction = 0x880CDC10;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_880CDC20:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D3030) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D3030;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D3030) {
			switch (rex_dispatch_address) {
				case 0x880D3038:
				case 0x880D30D4:
				case 0x880D3110:
				case 0x880D313C:
				case 0x880D3164:
				case 0x880D3194:
				case 0x880D31C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D3030;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D3038: goto loc_880D3038;
		case 0x880D30D4: goto loc_880D30D4;
		case 0x880D3110: goto loc_880D3110;
		case 0x880D313C: goto loc_880D313C;
		case 0x880D3164: goto loc_880D3164;
		case 0x880D3194: goto loc_880D3194;
		case 0x880D31C8: goto loc_880D31C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x880D3038;
	__savegprlr_17(ctx, base);
loc_880D3038:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x880D3038;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x880D303C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r28,360(r3)
	ctx.current_instruction = 0x880D3044;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lhz r11,0(r5)
	ctx.current_instruction = 0x880D304C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,88(r31)
	ctx.current_instruction = 0x880D3058;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// divwu r9,r6,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r6.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r9,r28
	ctx.r8.u64 = uint32_t(ctx.r28.u32 ? ctx.r9.u32 / ctx.r28.u32 : 0);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880d3084
	if (!ctx.cr6.lt) goto loc_880D3084;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_880D3084:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x880d31e8
	if (!ctx.cr6.gt) goto loc_880D31E8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r22,0
	ctx.r22.s64 = 0;
	// mullw r23,r10,r28
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// mullw r24,r11,r28
	ctx.r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
loc_880D30A8:
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D30A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.current_instruction = 0x880D30B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// mullw r11,r24,r4
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D30B8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r27,r11,r21
	ctx.r27.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mullw r11,r23,r4
	ctx.r11.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r4.s32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x880D30D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D30D4:
	// lwz r9,88(r31)
	ctx.current_instruction = 0x880D30D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// add r8,r25,r28
	ctx.r8.u64 = ctx.r25.u64 + ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r21
	ctx.r26.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x880d3178
	if (!ctx.cr6.gt) goto loc_880D3178;
loc_880D30F4:
	// lwz r11,520(r31)
	ctx.current_instruction = 0x880D30F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3110:
	// lwz r4,88(r31)
	ctx.current_instruction = 0x880D3110;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.current_instruction = 0x880D3118;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// mullw r9,r4,r28
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// lhz r5,110(r31)
	ctx.current_instruction = 0x880D3124;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r27,r9,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r9.u64;
	// subf r29,r9,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880D313C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D313C:
	// lwz r8,520(r31)
	ctx.current_instruction = 0x880D313C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// srawi r10,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 1;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3164;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3164:
	// lwz r7,88(r31)
	ctx.current_instruction = 0x880D3164;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mullw r6,r28,r7
	ctx.r6.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// subf r29,r6,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r6.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x880d30f4
	if (ctx.cr6.gt) goto loc_880D30F4;
loc_880D3178:
	// lwz r11,520(r31)
	ctx.current_instruction = 0x880D3178;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D3194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D3194:
	// lwz r10,344(r19)
	ctx.current_instruction = 0x880D3194;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 344);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,88(r31)
	ctx.current_instruction = 0x880D319C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r8,520(r31)
	ctx.current_instruction = 0x880D31A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 520);
	// mullw r7,r28,r9
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// lwzx r4,r22,r10
	ctx.current_instruction = 0x880D31AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// srawi r10,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// subf r4,r7,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r7.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880D31C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D31C8:
	// lwz r3,344(r19)
	ctx.current_instruction = 0x880D31C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + 344);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// stwx r20,r22,r3
	ctx.current_instruction = 0x880D31DC;
	REX_STORE_U32(ctx.r22.u32 + ctx.r3.u32, ctx.r20.u32);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// blt cr6,0x880d30a8
	if (ctx.cr6.lt) goto loc_880D30A8;
loc_880D31E8:
	// lhz r11,0(r18)
	ctx.current_instruction = 0x880D31E8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// sth r10,0(r18)
	ctx.current_instruction = 0x880D31F4;
	REX_STORE_U16(ctx.r18.u32 + 0, ctx.r10.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D7798) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D7798;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D7798) {
			switch (rex_dispatch_address) {
				case 0x880D77E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D7798;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D77E0: goto loc_880D77E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880D779C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880D77A0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880D77A4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880D77A8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,444(r4)
	ctx.current_instruction = 0x880D77AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 444);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d7834
	if (ctx.cr6.eq) goto loc_880D7834;
	// lhz r11,118(r4)
	ctx.current_instruction = 0x880D77C0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// lwz r7,8(r4)
	ctx.current_instruction = 0x880D77C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r6,432(r4)
	ctx.current_instruction = 0x880D77CC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 432);
	// lwz r5,428(r4)
	ctx.current_instruction = 0x880D77D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 428);
	// lwz r9,304(r3)
	ctx.current_instruction = 0x880D77D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// lwz r4,4(r4)
	ctx.current_instruction = 0x880D77D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8812a380
	ctx.lr = 0x880D77E0;
	sub_8812A380(ctx, base);
loc_880D77E0:
	// lwz r8,8(r31)
	ctx.current_instruction = 0x880D77E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,304(r30)
	ctx.current_instruction = 0x880D77E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 304);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r9,0(r8)
	ctx.current_instruction = 0x880D77EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// ble cr6,0x880d7820
	if (!ctx.cr6.gt) goto loc_880D7820;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_880D77FC:
	// lwzx r11,r11,r8
	ctx.current_instruction = 0x880D77FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x880d780c
	if (!ctx.cr6.gt) goto loc_880D780C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_880D780C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x880d77fc
	if (ctx.cr6.lt) goto loc_880D77FC;
loc_880D7820:
	// lwz r11,424(r31)
	ctx.current_instruction = 0x880D7820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,64(r31)
	ctx.current_instruction = 0x880D7828;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.current_instruction = 0x880D782C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stb r10,0(r9)
	ctx.current_instruction = 0x880D7830;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
loc_880D7834:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880D783C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880D7844;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880D7848;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D8638) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D8638;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D8638) {
			switch (rex_dispatch_address) {
				case 0x880D8640:
				case 0x880D86CC:
				case 0x880D86E0:
				case 0x880D86F0:
				case 0x880D879C:
				case 0x880D88A0:
				case 0x880D88B4:
				case 0x880D88F4:
				case 0x880D8924:
				case 0x880D8930:
				case 0x880D8948:
				case 0x880D8960:
				case 0x880D897C:
				case 0x880D8A58:
				case 0x880D8AA4:
				case 0x880D8ABC:
				case 0x880D8ACC:
				case 0x880D8B0C:
				case 0x880D8B48:
				case 0x880D8B64:
				case 0x880D8B80:
				case 0x880D8BC4:
				case 0x880D8BDC:
				case 0x880D8BF8:
				case 0x880D8C50:
				case 0x880D8C90:
				case 0x880D8CD8:
				case 0x880D8D10:
				case 0x880D8D24:
				case 0x880D8D58:
				case 0x880D8E20:
				case 0x880D8E38:
				case 0x880D8E78:
				case 0x880D8EAC:
				case 0x880D8F14:
				case 0x880D8F30:
				case 0x880D8F40:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D8638;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D8640: goto loc_880D8640;
		case 0x880D86CC: goto loc_880D86CC;
		case 0x880D86E0: goto loc_880D86E0;
		case 0x880D86F0: goto loc_880D86F0;
		case 0x880D879C: goto loc_880D879C;
		case 0x880D88A0: goto loc_880D88A0;
		case 0x880D88B4: goto loc_880D88B4;
		case 0x880D88F4: goto loc_880D88F4;
		case 0x880D8924: goto loc_880D8924;
		case 0x880D8930: goto loc_880D8930;
		case 0x880D8948: goto loc_880D8948;
		case 0x880D8960: goto loc_880D8960;
		case 0x880D897C: goto loc_880D897C;
		case 0x880D8A58: goto loc_880D8A58;
		case 0x880D8AA4: goto loc_880D8AA4;
		case 0x880D8ABC: goto loc_880D8ABC;
		case 0x880D8ACC: goto loc_880D8ACC;
		case 0x880D8B0C: goto loc_880D8B0C;
		case 0x880D8B48: goto loc_880D8B48;
		case 0x880D8B64: goto loc_880D8B64;
		case 0x880D8B80: goto loc_880D8B80;
		case 0x880D8BC4: goto loc_880D8BC4;
		case 0x880D8BDC: goto loc_880D8BDC;
		case 0x880D8BF8: goto loc_880D8BF8;
		case 0x880D8C50: goto loc_880D8C50;
		case 0x880D8C90: goto loc_880D8C90;
		case 0x880D8CD8: goto loc_880D8CD8;
		case 0x880D8D10: goto loc_880D8D10;
		case 0x880D8D24: goto loc_880D8D24;
		case 0x880D8D58: goto loc_880D8D58;
		case 0x880D8E20: goto loc_880D8E20;
		case 0x880D8E38: goto loc_880D8E38;
		case 0x880D8E78: goto loc_880D8E78;
		case 0x880D8EAC: goto loc_880D8EAC;
		case 0x880D8F14: goto loc_880D8F14;
		case 0x880D8F30: goto loc_880D8F30;
		case 0x880D8F40: goto loc_880D8F40;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880D8640;
	__savegprlr_14(ctx, base);
loc_880D8640:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x880D8640;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// beq cr6,0x880d8f88
	if (ctx.cr6.eq) goto loc_880D8F88;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880d8f88
	if (ctx.cr6.eq) goto loc_880D8F88;
	// lhz r11,0(r4)
	ctx.current_instruction = 0x880D8678;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x880d8a60
	if (ctx.cr6.gt) goto loc_880D8A60;
	// li r20,1
	ctx.r20.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x880d8728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D8728;
	// bdzf 4*cr6+eq,0x880d8730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D8730;
	// bdzf 4*cr6+eq,0x880d8738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D8738;
	// bdzf 4*cr6+eq,0x880d8a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D8A60;
	// bdzf 4*cr6+eq,0x880d8744
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D8744;
	// bdzf 4*cr6+eq,0x880d8754
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_880D8754;
	// bne cr6,0x880d8764
	if (!ctx.cr6.eq) goto loc_880D8764;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_880D86B8:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x880d18c0
	ctx.lr = 0x880D86CC;
	sub_880D18C0(ctx, base);
loc_880D86CC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d15f0
	ctx.lr = 0x880D86E0;
	sub_880D15F0(ctx, base);
loc_880D86E0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
	// bl 0x881280d0
	ctx.lr = 0x880D86F0;
	sub_881280D0(ctx, base);
loc_880D86F0:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	ctx.current_instruction = 0x880D86F4;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d8900
	if (ctx.cr6.eq) goto loc_880D8900;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// lis r10,-30707
	ctx.r10.s64 = -2012413952;
	// addi r9,r11,-27920
	ctx.r9.s64 = ctx.r11.s64 + -27920;
	// addi r8,r10,8344
	ctx.r8.s64 = ctx.r10.s64 + 8344;
	// stw r9,484(r3)
	ctx.current_instruction = 0x880D8710;
	REX_STORE_U32(ctx.r3.u32 + 484, ctx.r9.u32);
	// stw r8,712(r31)
	ctx.current_instruction = 0x880D8714;
	REX_STORE_U32(ctx.r31.u32 + 712, ctx.r8.u32);
loc_880D8718:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x880d8778
	if (ctx.cr6.eq) goto loc_880D8778;
	// lwz r11,12(r21)
	ctx.current_instruction = 0x880D8720;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// b 0x880d877c
	goto loc_880D877C;
loc_880D8728:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x880d86b8
	goto loc_880D86B8;
loc_880D8730:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x880d86b8
	goto loc_880D86B8;
loc_880D8738:
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// b 0x880d86b8
	goto loc_880D86B8;
loc_880D8744:
	// li r20,1
	ctx.r20.s64 = 1;
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// b 0x880d8718
	goto loc_880D8718;
loc_880D8754:
	// li r20,1
	ctx.r20.s64 = 1;
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// b 0x880d8718
	goto loc_880D8718;
loc_880D8764:
	// li r20,1
	ctx.r20.s64 = 1;
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// b 0x880d8718
	goto loc_880D8718;
loc_880D8778:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_880D877C:
	// stw r11,704(r31)
	ctx.current_instruction = 0x880D877C;
	REX_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,708(r31)
	ctx.current_instruction = 0x880D8784;
	REX_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
	// lhz r6,20(r25)
	ctx.current_instruction = 0x880D8788;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r25.u32 + 20);
	// lwz r3,4(r25)
	ctx.current_instruction = 0x880D878C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,8(r25)
	ctx.current_instruction = 0x880D8790;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x88138e70
	ctx.lr = 0x880D879C;
	sub_88138E70(ctx, base);
loc_880D879C:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x880d8a60
	if (!ctx.cr6.gt) goto loc_880D8A60;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r11,r31,476
	ctx.r11.s64 = ctx.r31.s64 + 476;
	// beq cr6,0x880d87d4
	if (ctx.cr6.eq) goto loc_880D87D4;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_880D87C4:
	// lwzu r8,4(r10)
	ctx.current_instruction = 0x880D87C4;
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ctx.current_instruction = 0x880D87C8;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x880d87c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D87C4;
	// b 0x880d87ec
	goto loc_880D87EC;
loc_880D87D4:
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880D87E4:
	// stwu r8,4(r10)
	ctx.current_instruction = 0x880D87E4;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880d87e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D87E4;
loc_880D87EC:
	// lhz r10,0(r11)
	ctx.current_instruction = 0x880D87EC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r27,480(r31)
	ctx.current_instruction = 0x880D87F0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 480);
	// rlwinm r8,r10,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x880d880c
	if (ctx.cr6.eq) goto loc_880D880C;
	// stw r20,412(r31)
	ctx.current_instruction = 0x880D8808;
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r20.u32);
loc_880D880C:
	// lhz r8,500(r31)
	ctx.current_instruction = 0x880D880C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 500);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x880d882c
	if (ctx.cr6.eq) goto loc_880D882C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// ori r8,r10,128
	ctx.r8.u64 = ctx.r10.u64 | 128;
	// ori r22,r9,128
	ctx.r22.u64 = ctx.r9.u64 | 128;
	// sth r8,0(r11)
	ctx.current_instruction = 0x880D8828;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
loc_880D882C:
	// lhz r10,14(r25)
	ctx.current_instruction = 0x880D882C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 14);
	// lwz r9,16(r23)
	ctx.current_instruction = 0x880D8830;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x880d884c
	if (ctx.cr6.gt) goto loc_880D884C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_880D884C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r29,20(r23)
	ctx.current_instruction = 0x880D8850;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r17,0(r23)
	ctx.current_instruction = 0x880D8858;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lhz r16,22(r25)
	ctx.current_instruction = 0x880D885C;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r25.u32 + 22);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r15,20(r25)
	ctx.current_instruction = 0x880D8864;
	ctx.r15.u64 = REX_LOAD_U16(ctx.r25.u32 + 20);
	// lhz r26,12(r25)
	ctx.current_instruction = 0x880D8868;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r25.u32 + 12);
	// lwz r30,8(r25)
	ctx.current_instruction = 0x880D886C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r14,16(r25)
	ctx.current_instruction = 0x880D8870;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// lhz r8,2(r25)
	ctx.current_instruction = 0x880D8874;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r25.u32 + 2);
	// lwz r7,4(r25)
	ctx.current_instruction = 0x880D8878;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// stw r11,140(r1)
	ctx.current_instruction = 0x880D887C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r29,132(r1)
	ctx.current_instruction = 0x880D8880;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r17,124(r1)
	ctx.current_instruction = 0x880D8884;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// sth r16,118(r1)
	ctx.current_instruction = 0x880D8888;
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r16.u16);
	// sth r15,110(r1)
	ctx.current_instruction = 0x880D888C;
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r15.u16);
	// stw r26,100(r1)
	ctx.current_instruction = 0x880D8890;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r30,92(r1)
	ctx.current_instruction = 0x880D8894;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r14,84(r1)
	ctx.current_instruction = 0x880D8898;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// bl 0x88128b48
	ctx.lr = 0x880D88A0;
	sub_88128B48(ctx, base);
loc_880D88A0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d1290
	ctx.lr = 0x880D88B4;
	sub_880D1290(ctx, base);
loc_880D88B4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x880d8a60
	if (ctx.cr6.gt) goto loc_880D8A60;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880D88C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,110(r11)
	ctx.current_instruction = 0x880D88C4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bgt cr6,0x880d88dc
	if (ctx.cr6.gt) goto loc_880D88DC;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r10,r11,-20288
	ctx.r10.s64 = ctx.r11.s64 + -20288;
	// b 0x880d88e4
	goto loc_880D88E4;
loc_880D88DC:
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r10,r11,-18992
	ctx.r10.s64 = ctx.r11.s64 + -18992;
loc_880D88E4:
	// stw r10,212(r31)
	ctx.current_instruction = 0x880D88E4;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lhz r11,34(r28)
	ctx.current_instruction = 0x880D88E8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// mulli r3,r11,1776
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// bl 0x88125e60
	ctx.lr = 0x880D88F4;
	sub_88125E60(ctx, base);
loc_880D88F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	ctx.current_instruction = 0x880D88F8;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x880d8914
	if (!ctx.cr6.eq) goto loc_880D8914;
loc_880D8900:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880D8914:
	// lhz r11,34(r28)
	ctx.current_instruction = 0x880D8914;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,1776
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// bl 0x88052d90
	ctx.lr = 0x880D8924;
	sub_88052D90(ctx, base);
loc_880D8924:
	// lwz r4,4(r31)
	ctx.current_instruction = 0x880D8924;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881264e8
	ctx.lr = 0x880D8930;
	sub_881264E8(ctx, base);
loc_880D8930:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.current_instruction = 0x880D8940;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x880d1700
	ctx.lr = 0x880D8948;
	sub_880D1700(ctx, base);
loc_880D8948:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.current_instruction = 0x880D8958;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x88126a90
	ctx.lr = 0x880D8960;
	sub_88126A90(ctx, base);
loc_880D8960:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880D896C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,320(r28)
	ctx.current_instruction = 0x880D8974;
	REX_STORE_U32(ctx.r28.u32 + 320, ctx.r11.u32);
	// bl 0x880d60f8
	ctx.lr = 0x880D897C;
	sub_880D60F8(ctx, base);
loc_880D897C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
	// lwz r11,588(r28)
	ctx.current_instruction = 0x880D8988;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d89b0
	if (ctx.cr6.eq) goto loc_880D89B0;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// stw r24,516(r31)
	ctx.current_instruction = 0x880D8998;
	REX_STORE_U32(ctx.r31.u32 + 516, ctx.r24.u32);
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// addi r9,r11,-29112
	ctx.r9.s64 = ctx.r11.s64 + -29112;
	// addi r8,r10,-29368
	ctx.r8.s64 = ctx.r10.s64 + -29368;
	// stw r9,512(r31)
	ctx.current_instruction = 0x880D89A8;
	REX_STORE_U32(ctx.r31.u32 + 512, ctx.r9.u32);
	// stw r8,484(r28)
	ctx.current_instruction = 0x880D89AC;
	REX_STORE_U32(ctx.r28.u32 + 484, ctx.r8.u32);
loc_880D89B0:
	// stw r24,420(r31)
	ctx.current_instruction = 0x880D89B0;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r24.u32);
	// stw r24,352(r31)
	ctx.current_instruction = 0x880D89B4;
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r24.u32);
	// lwz r11,4(r23)
	ctx.current_instruction = 0x880D89B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// stw r11,360(r31)
	ctx.current_instruction = 0x880D89BC;
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// lwz r7,360(r31)
	ctx.current_instruction = 0x880D89C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r11,8(r23)
	ctx.current_instruction = 0x880D89C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// stw r11,364(r31)
	ctx.current_instruction = 0x880D89C8;
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// lhz r10,34(r28)
	ctx.current_instruction = 0x880D89CC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880d89e4
	if (!ctx.cr6.eq) goto loc_880D89E4;
	// lwz r10,104(r28)
	ctx.current_instruction = 0x880D89D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880d89f4
	if (ctx.cr6.eq) goto loc_880D89F4;
loc_880D89E4:
	// lwz r11,60(r28)
	ctx.current_instruction = 0x880D89E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880d8a60
	if (!ctx.cr6.gt) goto loc_880D8A60;
	// stw r20,352(r31)
	ctx.current_instruction = 0x880D89F0;
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r20.u32);
loc_880D89F4:
	// lwz r11,352(r31)
	ctx.current_instruction = 0x880D89F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d8b18
	if (!ctx.cr6.eq) goto loc_880D8B18;
	// rlwinm r11,r22,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d8a10
	if (ctx.cr6.eq) goto loc_880D8A10;
	// stw r20,420(r31)
	ctx.current_instruction = 0x880D8A0C;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r20.u32);
loc_880D8A10:
	// lwz r11,420(r31)
	ctx.current_instruction = 0x880D8A10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d8a30
	if (!ctx.cr6.eq) goto loc_880D8A30;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x880d8a30
	if (!ctx.cr6.eq) goto loc_880D8A30;
	// lhz r11,34(r28)
	ctx.current_instruction = 0x880D8A24;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x880d8a34
	if (ctx.cr6.gt) goto loc_880D8A34;
loc_880D8A30:
	// stw r24,420(r31)
	ctx.current_instruction = 0x880D8A30;
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r24.u32);
loc_880D8A34:
	// lwz r11,420(r31)
	ctx.current_instruction = 0x880D8A34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d8a70
	if (!ctx.cr6.eq) goto loc_880D8A70;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,364(r31)
	ctx.current_instruction = 0x880D8A44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 364);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,104(r28)
	ctx.current_instruction = 0x880D8A4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 104);
	// lhz r5,34(r28)
	ctx.current_instruction = 0x880D8A50;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// bl 0x880d7348
	ctx.lr = 0x880D8A58;
	sub_880D7348(ctx, base);
loc_880D8A58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880d8b18
	if (ctx.cr6.eq) goto loc_880D8B18;
loc_880D8A60:
	// lis r29,-32764
	ctx.r29.s64 = -2147221504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880D8A70:
	// stw r24,424(r31)
	ctx.current_instruction = 0x880D8A70;
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r24.u32);
	// lhz r5,34(r28)
	ctx.current_instruction = 0x880D8A74;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x880d8a8c
	if (!ctx.cr6.eq) goto loc_880D8A8C;
	// lwz r11,104(r28)
	ctx.current_instruction = 0x880D8A80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 104);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x880d8ab4
	if (ctx.cr6.eq) goto loc_880D8AB4;
loc_880D8A8C:
	// li r8,63
	ctx.r8.s64 = 63;
	// lwz r6,104(r28)
	ctx.current_instruction = 0x880D8A90;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 104);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d7348
	ctx.lr = 0x880D8AA4;
	sub_880D7348(ctx, base);
loc_880D8AA4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
	// stw r20,424(r31)
	ctx.current_instruction = 0x880D8AB0;
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r20.u32);
loc_880D8AB4:
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x88125e60
	ctx.lr = 0x880D8ABC;
	sub_88125E60(ctx, base);
loc_880D8ABC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,428(r31)
	ctx.current_instruction = 0x880D8AC0;
	REX_STORE_U32(ctx.r31.u32 + 428, ctx.r3.u32);
	// beq cr6,0x880d8900
	if (ctx.cr6.eq) goto loc_880D8900;
	// bl 0x88128bf8
	ctx.lr = 0x880D8ACC;
	sub_88128BF8(ctx, base);
loc_880D8ACC:
	// li r11,1000
	ctx.r11.s64 = 1000;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// lwz r3,428(r31)
	ctx.current_instruction = 0x880D8AD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// stw r11,432(r31)
	ctx.current_instruction = 0x880D8AD8;
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r5,452(r28)
	ctx.current_instruction = 0x880D8AE0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 452);
	// lhz r11,110(r28)
	ctx.current_instruction = 0x880D8AE4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 110);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// slw r11,r20,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	ctx.current_instruction = 0x880D8AF8;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f0,144(r1)
	ctx.current_instruction = 0x880D8AFC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x88128d08
	ctx.lr = 0x880D8B0C;
	sub_88128D08(ctx, base);
loc_880D8B0C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
loc_880D8B18:
	// stw r24,448(r31)
	ctx.current_instruction = 0x880D8B18;
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r24.u32);
	// stw r24,468(r31)
	ctx.current_instruction = 0x880D8B1C;
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r24.u32);
	// stw r24,464(r31)
	ctx.current_instruction = 0x880D8B20;
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r24.u32);
	// stw r24,460(r31)
	ctx.current_instruction = 0x880D8B24;
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r24.u32);
	// stw r24,440(r31)
	ctx.current_instruction = 0x880D8B28;
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r24.u32);
	// lwz r11,60(r28)
	ctx.current_instruction = 0x880D8B2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880d8b8c
	if (!ctx.cr6.gt) goto loc_880D8B8C;
	// lhz r11,34(r28)
	ctx.current_instruction = 0x880D8B38;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x880D8B48;
	sub_88125E60(ctx, base);
loc_880D8B48:
	// stw r3,448(r31)
	ctx.current_instruction = 0x880D8B48;
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d8900
	if (ctx.cr6.eq) goto loc_880D8900;
	// lhz r11,34(r28)
	ctx.current_instruction = 0x880D8B54;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x880D8B64;
	sub_88125E60(ctx, base);
loc_880D8B64:
	// stw r3,464(r31)
	ctx.current_instruction = 0x880D8B64;
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d8900
	if (ctx.cr6.eq) goto loc_880D8900;
	// lhz r11,34(r28)
	ctx.current_instruction = 0x880D8B70;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x880D8B80;
	sub_88125E60(ctx, base);
loc_880D8B80:
	// stw r3,468(r31)
	ctx.current_instruction = 0x880D8B80;
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d8900
	if (ctx.cr6.eq) goto loc_880D8900;
loc_880D8B8C:
	// lhz r11,34(r28)
	ctx.current_instruction = 0x880D8B8C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// lwz r10,360(r31)
	ctx.current_instruction = 0x880D8B90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x880d8ba0
	if (ctx.cr6.gt) goto loc_880D8BA0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_880D8BA0:
	// lwz r10,424(r31)
	ctx.current_instruction = 0x880D8BA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d8bb8
	if (ctx.cr6.eq) goto loc_880D8BB8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x880d8bb8
	if (ctx.cr6.gt) goto loc_880D8BB8;
	// li r11,6
	ctx.r11.s64 = 6;
loc_880D8BB8:
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88125e60
	ctx.lr = 0x880D8BC4;
	sub_88125E60(ctx, base);
loc_880D8BC4:
	// stw r3,380(r31)
	ctx.current_instruction = 0x880D8BC4;
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d8900
	if (ctx.cr6.eq) goto loc_880D8900;
	// stw r3,384(r31)
	ctx.current_instruction = 0x880D8BD0;
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88125e60
	ctx.lr = 0x880D8BDC;
	sub_88125E60(ctx, base);
loc_880D8BDC:
	// stw r3,388(r31)
	ctx.current_instruction = 0x880D8BDC;
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d8900
	if (ctx.cr6.eq) goto loc_880D8900;
	// stw r3,392(r31)
	ctx.current_instruction = 0x880D8BE8;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d1b38
	ctx.lr = 0x880D8BF8;
	sub_880D1B38(ctx, base);
loc_880D8BF8:
	// lwz r11,0(r23)
	ctx.current_instruction = 0x880D8BF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// stw r24,316(r31)
	ctx.current_instruction = 0x880D8BFC;
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r24.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r24,324(r31)
	ctx.current_instruction = 0x880D8C04;
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r24.u32);
	// stw r24,320(r31)
	ctx.current_instruction = 0x880D8C08;
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r24.u32);
	// stw r11,336(r31)
	ctx.current_instruction = 0x880D8C0C;
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwz r11,452(r28)
	ctx.current_instruction = 0x880D8C10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 452);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880d8c28
	if (!ctx.cr6.eq) goto loc_880D8C28;
	// stw r20,316(r31)
	ctx.current_instruction = 0x880D8C20;
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r20.u32);
	// b 0x880d8c44
	goto loc_880D8C44;
loc_880D8C28:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x880d8c44
	if (ctx.cr6.eq) goto loc_880D8C44;
	// stw r20,324(r31)
	ctx.current_instruction = 0x880D8C30;
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r20.u32);
	// lwz r11,452(r28)
	ctx.current_instruction = 0x880D8C34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 452);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880d8c44
	if (!ctx.cr6.lt) goto loc_880D8C44;
	// stw r20,320(r31)
	ctx.current_instruction = 0x880D8C40;
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r20.u32);
loc_880D8C44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,452(r28)
	ctx.current_instruction = 0x880D8C48;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 452);
	// bl 0x880d2f48
	ctx.lr = 0x880D8C50;
	sub_880D2F48(ctx, base);
loc_880D8C50:
	// lwz r11,332(r31)
	ctx.current_instruction = 0x880D8C50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r10,328(r31)
	ctx.current_instruction = 0x880D8C54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// cmpwi cr6,r10,10000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10000, ctx.xer);
	// stw r11,340(r31)
	ctx.current_instruction = 0x880D8C5C;
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// bge cr6,0x880d8a60
	if (!ctx.cr6.lt) goto loc_880D8A60;
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// bge cr6,0x880d8a60
	if (!ctx.cr6.lt) goto loc_880D8A60;
	// lwz r11,316(r31)
	ctx.current_instruction = 0x880D8C6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d8c84
	if (!ctx.cr6.eq) goto loc_880D8C84;
	// lwz r11,324(r31)
	ctx.current_instruction = 0x880D8C78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d8ce4
	if (ctx.cr6.eq) goto loc_880D8CE4;
loc_880D8C84:
	// lwz r11,360(r31)
	ctx.current_instruction = 0x880D8C84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x880D8C90;
	sub_88125E60(ctx, base);
loc_880D8C90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,344(r31)
	ctx.current_instruction = 0x880D8C94;
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// beq cr6,0x880d8900
	if (ctx.cr6.eq) goto loc_880D8900;
	// lwz r11,360(r31)
	ctx.current_instruction = 0x880D8C9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880d8ccc
	if (!ctx.cr6.gt) goto loc_880D8CCC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_880D8CB0:
	// lwz r9,344(r31)
	ctx.current_instruction = 0x880D8CB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r24,r11,r9
	ctx.current_instruction = 0x880D8CB8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,360(r31)
	ctx.current_instruction = 0x880D8CC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880d8cb0
	if (ctx.cr6.lt) goto loc_880D8CB0;
loc_880D8CCC:
	// lwz r11,360(r31)
	ctx.current_instruction = 0x880D8CCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x880D8CD8;
	sub_88125E60(ctx, base);
loc_880D8CD8:
	// stw r3,348(r31)
	ctx.current_instruction = 0x880D8CD8;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d8900
	if (ctx.cr6.eq) goto loc_880D8900;
loc_880D8CE4:
	// lis r11,-30707
	ctx.r11.s64 = -2012413952;
	// rlwinm r10,r22,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x80;
	// addi r9,r11,32712
	ctx.r9.s64 = ctx.r11.s64 + 32712;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,492(r28)
	ctx.current_instruction = 0x880D8CF4;
	REX_STORE_U32(ctx.r28.u32 + 492, ctx.r9.u32);
	// stw r24,472(r31)
	ctx.current_instruction = 0x880D8CF8;
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r24.u32);
	// beq cr6,0x880d8d1c
	if (ctx.cr6.eq) goto loc_880D8D1C;
	// lhz r11,500(r31)
	ctx.current_instruction = 0x880D8D00;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 500);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x880d7bb0
	ctx.lr = 0x880D8D10;
	sub_880D7BB0(ctx, base);
loc_880D8D10:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
loc_880D8D1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d1bb0
	ctx.lr = 0x880D8D24;
	sub_880D1BB0(ctx, base);
loc_880D8D24:
	// lhz r11,2(r25)
	ctx.current_instruction = 0x880D8D24;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880d8d3c
	if (!ctx.cr6.eq) goto loc_880D8D3C;
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r10,r11,27656
	ctx.r10.s64 = ctx.r11.s64 + 27656;
	// b 0x880d8d44
	goto loc_880D8D44;
loc_880D8D3C:
	// lis r11,-30701
	ctx.r11.s64 = -2012020736;
	// addi r10,r11,27776
	ctx.r10.s64 = ctx.r11.s64 + 27776;
loc_880D8D44:
	// stw r10,508(r31)
	ctx.current_instruction = 0x880D8D44;
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// addi r25,r31,224
	ctx.r25.s64 = ctx.r31.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8812c070
	ctx.lr = 0x880D8D58;
	sub_8812C070(ctx, base);
loc_880D8D58:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x880d8d70
	if (ctx.cr6.eq) goto loc_880D8D70;
	// lwz r11,4(r21)
	ctx.current_instruction = 0x880D8D60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// stw r11,0(r25)
	ctx.current_instruction = 0x880D8D64;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r21)
	ctx.current_instruction = 0x880D8D68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// stw r10,228(r31)
	ctx.current_instruction = 0x880D8D6C;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
loc_880D8D70:
	// lwz r11,288(r28)
	ctx.current_instruction = 0x880D8D70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 288);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880d8da8
	if (!ctx.cr6.eq) goto loc_880D8DA8;
	// lwz r11,320(r28)
	ctx.current_instruction = 0x880D8D7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 320);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// addi r8,r10,-32216
	ctx.r8.s64 = ctx.r10.s64 + -32216;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// addi r6,r9,-13736
	ctx.r6.s64 = ctx.r9.s64 + -13736;
	// stw r8,24(r11)
	ctx.current_instruction = 0x880D8D94;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// addi r5,r7,-12784
	ctx.r5.s64 = ctx.r7.s64 + -12784;
	// lwz r4,320(r28)
	ctx.current_instruction = 0x880D8D9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 320);
	// stw r6,28(r4)
	ctx.current_instruction = 0x880D8DA0;
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r6.u32);
	// b 0x880d8dfc
	goto loc_880D8DFC;
loc_880D8DA8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880d8dcc
	if (!ctx.cr6.eq) goto loc_880D8DCC;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// addi r8,r10,-19072
	ctx.r8.s64 = ctx.r10.s64 + -19072;
	// addi r7,r9,-456
	ctx.r7.s64 = ctx.r9.s64 + -456;
	// addi r5,r6,872
	ctx.r5.s64 = ctx.r6.s64 + 872;
	// b 0x880d8dec
	goto loc_880D8DEC;
loc_880D8DCC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880d8f88
	if (!ctx.cr6.eq) goto loc_880D8F88;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// addi r8,r10,-30472
	ctx.r8.s64 = ctx.r10.s64 + -30472;
	// addi r7,r9,-10088
	ctx.r7.s64 = ctx.r9.s64 + -10088;
	// addi r5,r6,-7416
	ctx.r5.s64 = ctx.r6.s64 + -7416;
loc_880D8DEC:
	// lwz r11,320(r28)
	ctx.current_instruction = 0x880D8DEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 320);
	// stw r8,24(r11)
	ctx.current_instruction = 0x880D8DF0;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r4,320(r28)
	ctx.current_instruction = 0x880D8DF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 320);
	// stw r7,28(r4)
	ctx.current_instruction = 0x880D8DF8;
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
loc_880D8DFC:
	// lwz r3,320(r28)
	ctx.current_instruction = 0x880D8DFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 320);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r5,32(r3)
	ctx.current_instruction = 0x880D8E0C;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r11,4(r28)
	ctx.current_instruction = 0x880D8E10;
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r10,72(r28)
	ctx.current_instruction = 0x880D8E14;
	REX_STORE_U32(ctx.r28.u32 + 72, ctx.r10.u32);
	// beq cr6,0x880d8e24
	if (ctx.cr6.eq) goto loc_880D8E24;
	// bl 0x8806c290
	ctx.lr = 0x880D8E20;
	sub_8806C290(ctx, base);
loc_880D8E20:
	// stw r3,0(r21)
	ctx.current_instruction = 0x880D8E20;
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
loc_880D8E24:
	// stw r24,116(r31)
	ctx.current_instruction = 0x880D8E24;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r24.u32);
	// addi r27,r31,120
	ctx.r27.s64 = ctx.r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,34(r28)
	ctx.current_instruction = 0x880D8E30;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// bl 0x8812a440
	ctx.lr = 0x880D8E38;
	sub_8812A440(ctx, base);
loc_880D8E38:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d8f90
	if (ctx.cr6.lt) goto loc_880D8F90;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880D8E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lhz r10,34(r11)
	ctx.current_instruction = 0x880D8E4C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d8ec4
	if (ctx.cr6.eq) goto loc_880D8EC4;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_880D8E5C:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880D8E5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,144(r11)
	ctx.current_instruction = 0x880D8E64;
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r24.u32);
	// lhz r10,34(r28)
	ctx.current_instruction = 0x880D8E68;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88125e60
	ctx.lr = 0x880D8E78;
	sub_88125E60(ctx, base);
loc_880D8E78:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880D8E78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r3,148(r8)
	ctx.current_instruction = 0x880D8E80;
	REX_STORE_U32(ctx.r8.u32 + 148, ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880D8E84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,148(r7)
	ctx.current_instruction = 0x880D8E8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d8900
	if (ctx.cr6.eq) goto loc_880D8900;
	// lhz r11,34(r28)
	ctx.current_instruction = 0x880D8E98;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x880D8EAC;
	sub_88052D90(ctx, base);
loc_880D8EAC:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x880D8EAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// lhz r8,34(r9)
	ctx.current_instruction = 0x880D8EB8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 34);
	// cmpw cr6,r26,r8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880d8e5c
	if (ctx.cr6.lt) goto loc_880D8E5C;
loc_880D8EC4:
	// lwz r11,0(r27)
	ctx.current_instruction = 0x880D8EC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,60(r28)
	ctx.current_instruction = 0x880D8EC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 60);
	// stw r24,572(r28)
	ctx.current_instruction = 0x880D8ECC;
	REX_STORE_U32(ctx.r28.u32 + 572, ctx.r24.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,576(r28)
	ctx.current_instruction = 0x880D8ED4;
	REX_STORE_U32(ctx.r28.u32 + 576, ctx.r11.u32);
	// blt cr6,0x880d8eec
	if (ctx.cr6.lt) goto loc_880D8EEC;
	// lwz r11,64(r28)
	ctx.current_instruction = 0x880D8EDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d8ef4
	if (!ctx.cr6.eq) goto loc_880D8EF4;
loc_880D8EEC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x880d8efc
	if (ctx.cr6.eq) goto loc_880D8EFC;
loc_880D8EF4:
	// stw r20,176(r28)
	ctx.current_instruction = 0x880D8EF4;
	REX_STORE_U32(ctx.r28.u32 + 176, ctx.r20.u32);
	// b 0x880d8f00
	goto loc_880D8F00;
loc_880D8EFC:
	// stw r24,176(r28)
	ctx.current_instruction = 0x880D8EFC;
	REX_STORE_U32(ctx.r28.u32 + 176, ctx.r24.u32);
loc_880D8F00:
	// stw r24,124(r28)
	ctx.current_instruction = 0x880D8F00;
	REX_STORE_U32(ctx.r28.u32 + 124, ctx.r24.u32);
	// stw r20,732(r28)
	ctx.current_instruction = 0x880D8F04;
	REX_STORE_U32(ctx.r28.u32 + 732, ctx.r20.u32);
	// lhz r11,34(r28)
	ctx.current_instruction = 0x880D8F08;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x88125e60
	ctx.lr = 0x880D8F14;
	sub_88125E60(ctx, base);
loc_880D8F14:
	// stw r3,192(r31)
	ctx.current_instruction = 0x880D8F14;
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d8900
	if (ctx.cr6.eq) goto loc_880D8900;
	// lhz r11,34(r28)
	ctx.current_instruction = 0x880D8F20;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x88052d90
	ctx.lr = 0x880D8F30;
	sub_88052D90(ctx, base);
loc_880D8F30:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88061460
	ctx.lr = 0x880D8F40;
	sub_88061460(ctx, base);
loc_880D8F40:
	// lwz r9,0(r25)
	ctx.current_instruction = 0x880D8F40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r20,696(r31)
	ctx.current_instruction = 0x880D8F48;
	REX_STORE_U32(ctx.r31.u32 + 696, ctx.r20.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r24,300(r31)
	ctx.current_instruction = 0x880D8F50;
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r24.u32);
	// rldicr r11,r10,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r24,156(r31)
	ctx.current_instruction = 0x880D8F58;
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r24.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// sth r24,154(r31)
	ctx.current_instruction = 0x880D8F60;
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r24.u16);
	// std r11,168(r31)
	ctx.current_instruction = 0x880D8F64;
	REX_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,176(r31)
	ctx.current_instruction = 0x880D8F6C;
	REX_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,692(r31)
	ctx.current_instruction = 0x880D8F78;
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// stw r11,0(r18)
	ctx.current_instruction = 0x880D8F7C;
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880D8F88:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
loc_880D8F90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EF1E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880EF1E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880EF1E8) {
			switch (rex_dispatch_address) {
				case 0x880EF1F0:
				case 0x880EF264:
				case 0x880EF274:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EF1E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880EF1F0: goto loc_880EF1F0;
		case 0x880EF264: goto loc_880EF264;
		case 0x880EF274: goto loc_880EF274;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880EF1F0;
	__savegprlr_29(ctx, base);
loc_880EF1F0:
	// stwu r1,-752(r1)
	ctx.current_instruction = 0x880EF1F0;
	ea = -752 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,78
	ctx.r10.s64 = ctx.r1.s64 + 78;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880EF208:
	// lbz r9,-2(r11)
	ctx.current_instruction = 0x880EF208;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.current_instruction = 0x880EF20C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880EF210;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.current_instruction = 0x880EF214;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.current_instruction = 0x880EF218;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,3(r11)
	ctx.current_instruction = 0x880EF21C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r30,4(r11)
	ctx.current_instruction = 0x880EF220;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r29,5(r11)
	ctx.current_instruction = 0x880EF224;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r9,2(r10)
	ctx.current_instruction = 0x880EF22C;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sth r8,4(r10)
	ctx.current_instruction = 0x880EF230;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// sth r7,6(r10)
	ctx.current_instruction = 0x880EF234;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r7.u16);
	// sth r6,8(r10)
	ctx.current_instruction = 0x880EF238;
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r6.u16);
	// sth r5,10(r10)
	ctx.current_instruction = 0x880EF23C;
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r5.u16);
	// sth r3,12(r10)
	ctx.current_instruction = 0x880EF240;
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r3.u16);
	// sth r30,14(r10)
	ctx.current_instruction = 0x880EF244;
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r30.u16);
	// sthu r29,16(r10)
	ctx.current_instruction = 0x880EF248;
	ea = 16 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r29.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x880ef208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EF208;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x880ee4e0
	ctx.lr = 0x880EF264;
	sub_880EE4E0(ctx, base);
loc_880EF264:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88054c28
	ctx.lr = 0x880EF274;
	sub_88054C28(ctx, base);
loc_880EF274:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F2370) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F2370);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F2370;
	ctx.current_instruction = 0x880F2370;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// ble cr6,0x880f237c
	if (!ctx.cr6.gt) goto loc_880F237C;
	// li r4,3
	ctx.r4.s64 = 3;
loc_880F237C:
	// lwz r11,28136(r3)
	ctx.current_instruction = 0x880F237C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,1744
	ctx.r11.s64 = ctx.r11.s64 + 1744;
	// bne cr6,0x880f2404
	if (!ctx.cr6.eq) goto loc_880F2404;
	// mulli r8,r4,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// addi r7,r11,-112
	ctx.r7.s64 = ctx.r11.s64 + -112;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// addi r9,r11,-112
	ctx.r9.s64 = ctx.r11.s64 + -112;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// lwzx r5,r8,r7
	ctx.current_instruction = 0x880F23A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r9,r11,-112
	ctx.r9.s64 = ctx.r11.s64 + -112;
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r5,28204(r3)
	ctx.current_instruction = 0x880F23C0;
	REX_STORE_U32(ctx.r3.u32 + 28204, ctx.r5.u32);
	// addi r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 + 20;
	// lwzx r6,r8,r6
	ctx.current_instruction = 0x880F23C8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// stw r6,28208(r3)
	ctx.current_instruction = 0x880F23D0;
	REX_STORE_U32(ctx.r3.u32 + 28208, ctx.r6.u32);
	// lwzx r10,r8,r4
	ctx.current_instruction = 0x880F23D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r10,28212(r3)
	ctx.current_instruction = 0x880F23DC;
	REX_STORE_U32(ctx.r3.u32 + 28212, ctx.r10.u32);
	// lwzx r7,r8,r7
	ctx.current_instruction = 0x880F23E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r7,28216(r3)
	ctx.current_instruction = 0x880F23E4;
	REX_STORE_U32(ctx.r3.u32 + 28216, ctx.r7.u32);
	// lwzx r6,r8,r9
	ctx.current_instruction = 0x880F23E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r6,28220(r3)
	ctx.current_instruction = 0x880F23EC;
	REX_STORE_U32(ctx.r3.u32 + 28220, ctx.r6.u32);
	// lwzx r5,r8,r5
	ctx.current_instruction = 0x880F23F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// stw r5,28224(r3)
	ctx.current_instruction = 0x880F23F4;
	REX_STORE_U32(ctx.r3.u32 + 28224, ctx.r5.u32);
	// lwzx r4,r8,r11
	ctx.current_instruction = 0x880F23F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r4,28228(r3)
	ctx.current_instruction = 0x880F23FC;
	REX_STORE_U32(ctx.r3.u32 + 28228, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880F2404:
	// mulli r10,r4,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// lwzx r6,r10,r11
	ctx.current_instruction = 0x880F2408;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r6,28204(r3)
	ctx.current_instruction = 0x880F2414;
	REX_STORE_U32(ctx.r3.u32 + 28204, ctx.r6.u32);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// lwzx r9,r10,r9
	ctx.current_instruction = 0x880F2424;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r9,28208(r3)
	ctx.current_instruction = 0x880F242C;
	REX_STORE_U32(ctx.r3.u32 + 28208, ctx.r9.u32);
	// lwzx r8,r10,r8
	ctx.current_instruction = 0x880F2430;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,28212(r3)
	ctx.current_instruction = 0x880F2434;
	REX_STORE_U32(ctx.r3.u32 + 28212, ctx.r8.u32);
	// lwzx r7,r10,r7
	ctx.current_instruction = 0x880F2438;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r7,28216(r3)
	ctx.current_instruction = 0x880F243C;
	REX_STORE_U32(ctx.r3.u32 + 28216, ctx.r7.u32);
	// lwzx r6,r10,r5
	ctx.current_instruction = 0x880F2440;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r6,28220(r3)
	ctx.current_instruction = 0x880F2444;
	REX_STORE_U32(ctx.r3.u32 + 28220, ctx.r6.u32);
	// lwzx r5,r10,r4
	ctx.current_instruction = 0x880F2448;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r5,28224(r3)
	ctx.current_instruction = 0x880F244C;
	REX_STORE_U32(ctx.r3.u32 + 28224, ctx.r5.u32);
	// lwzx r4,r10,r11
	ctx.current_instruction = 0x880F2450;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r4,28228(r3)
	ctx.current_instruction = 0x880F2454;
	REX_STORE_U32(ctx.r3.u32 + 28228, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F3CB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F3CB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F3CB0) {
			switch (rex_dispatch_address) {
				case 0x880F3D00:
				case 0x880F3D24:
				case 0x880F3D40:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F3CB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F3D00: goto loc_880F3D00;
		case 0x880F3D24: goto loc_880F3D24;
		case 0x880F3D40: goto loc_880F3D40;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880F3CB4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880F3CB8;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,2800(r3)
	ctx.current_instruction = 0x880F3CBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r5,268(r4)
	ctx.current_instruction = 0x880F3CC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 268);
	// lwz r4,264(r4)
	ctx.current_instruction = 0x880F3CC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 264);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// addi r6,r11,664
	ctx.r6.s64 = ctx.r11.s64 + 664;
	// bne cr6,0x880f3d34
	if (!ctx.cr6.eq) goto loc_880F3D34;
	// lwz r10,27996(r3)
	ctx.current_instruction = 0x880F3CD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 27996);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f3d10
	if (ctx.cr6.eq) goto loc_880F3D10;
	// addi r8,r11,152
	ctx.r8.s64 = ctx.r11.s64 + 152;
	// addi r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 + 136;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880F3CEC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r8,r11,120
	ctx.r8.s64 = ctx.r11.s64 + 120;
	// addi r7,r11,112
	ctx.r7.s64 = ctx.r11.s64 + 112;
	// bl 0x880b5658
	ctx.lr = 0x880F3D00;
	sub_880B5658(ctx, base);
loc_880F3D00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880F3D04;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880F3D10:
	// addi r10,r11,152
	ctx.r10.s64 = ctx.r11.s64 + 152;
	// addi r9,r11,136
	ctx.r9.s64 = ctx.r11.s64 + 136;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// addi r7,r11,120
	ctx.r7.s64 = ctx.r11.s64 + 120;
	// bl 0x88247440
	ctx.lr = 0x880F3D24;
	sub_88247440(ctx, base);
loc_880F3D24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880F3D28;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880F3D34:
	// addi r8,r11,152
	ctx.r8.s64 = ctx.r11.s64 + 152;
	// addi r7,r11,144
	ctx.r7.s64 = ctx.r11.s64 + 144;
	// bl 0x880bab58
	ctx.lr = 0x880F3D40;
	sub_880BAB58(ctx, base);
loc_880F3D40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880F3D44;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F57B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F57B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F57B8;
	ctx.current_instruction = 0x880F57B8;
	// std r30,-16(r1)
	ctx.current_instruction = 0x880F57B8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x880F57BC;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x880f5890
	if (!ctx.cr6.gt) goto loc_880F5890;
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_880F57D4:
	// lhz r10,-2(r3)
	ctx.current_instruction = 0x880F57D4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + -2);
	// lhz r9,0(r3)
	ctx.current_instruction = 0x880F57D8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhz r5,2(r3)
	ctx.current_instruction = 0x880F57E0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lhz r6,-4(r3)
	ctx.current_instruction = 0x880F57E8;
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
	ctx.current_instruction = 0x880F5870;
	REX_STORE_U16(ctx.r3.u32 + -4, ctx.r10.u16);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// sth r9,-2(r3)
	ctx.current_instruction = 0x880F5878;
	REX_STORE_U16(ctx.r3.u32 + -2, ctx.r9.u16);
	// sth r8,0(r3)
	ctx.current_instruction = 0x880F587C;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// sth r7,2(r3)
	ctx.current_instruction = 0x880F5884;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r7.u16);
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bdnz 0x880f57d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F57D4;
loc_880F5890:
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880F5890;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880F5894;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F6AA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F6AA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F6AA8) {
			switch (rex_dispatch_address) {
				case 0x880F6AB0:
				case 0x880F6B18:
				case 0x880F6BA4:
				case 0x880F6BBC:
				case 0x880F6BD4:
				case 0x880F6BEC:
				case 0x880F6C0C:
				case 0x880F6C24:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F6AA8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F6AB0: goto loc_880F6AB0;
		case 0x880F6B18: goto loc_880F6B18;
		case 0x880F6BA4: goto loc_880F6BA4;
		case 0x880F6BBC: goto loc_880F6BBC;
		case 0x880F6BD4: goto loc_880F6BD4;
		case 0x880F6BEC: goto loc_880F6BEC;
		case 0x880F6C0C: goto loc_880F6C0C;
		case 0x880F6C24: goto loc_880F6C24;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880F6AB0;
	__savegprlr_19(ctx, base);
loc_880F6AB0:
	// stwu r1,-2416(r1)
	ctx.current_instruction = 0x880F6AB0;
	ea = -2416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// addi r9,r1,1215
	ctx.r9.s64 = ctx.r1.s64 + 1215;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r8,8072(r31)
	ctx.current_instruction = 0x880F6AC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8072);
	// rlwinm r28,r9,0,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// mulli r11,r7,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(52));
	// lwz r21,8240(r31)
	ctx.current_instruction = 0x880F6AD4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 8240);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// lwz r10,27940(r31)
	ctx.current_instruction = 0x880F6AE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 27940);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r7,r1,639
	ctx.r7.s64 = ctx.r1.s64 + 639;
	// addi r9,r1,1759
	ctx.r9.s64 = ctx.r1.s64 + 1759;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r26,r7,0,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r29,r9,0,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880F6B18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F6B18:
	// lhz r6,0(r28)
	ctx.current_instruction = 0x880F6B18;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lfs f0,48(r24)
	ctx.current_instruction = 0x880F6B1C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// std r4,80(r1)
	ctx.current_instruction = 0x880F6B2C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880F6B30;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// fmul f10,f0,f13
	ctx.f10.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f12,19224(r8)
	ctx.current_instruction = 0x880F6B40;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 19224);
	// lfd f11,1488(r7)
	ctx.current_instruction = 0x880F6B44;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + 1488);
	// fmul f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f0,12088(r11)
	ctx.current_instruction = 0x880F6B4C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 12088);
	// fmul f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x880f6b70
	if (!ctx.cr6.gt) goto loc_880F6B70;
	// fmadd f12,f13,f12,f0
	ctx.f12.f64 = std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	ctx.current_instruction = 0x880F6B64;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880F6B68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x880f6b80
	goto loc_880F6B80;
loc_880F6B70:
	// fmsub f12,f13,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	ctx.current_instruction = 0x880F6B78;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880F6B7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_880F6B80:
	// sth r11,96(r1)
	ctx.current_instruction = 0x880F6B80;
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880feb98
	ctx.lr = 0x880F6BA4;
	sub_880FEB98(ctx, base);
loc_880F6BA4:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5f28
	ctx.lr = 0x880F6BBC;
	sub_880F5F28(ctx, base);
loc_880F6BBC:
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5fb8
	ctx.lr = 0x880F6BD4;
	sub_880F5FB8(ctx, base);
loc_880F6BD4:
	// srawi r5,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 1;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5920
	ctx.lr = 0x880F6BEC;
	sub_880F5920(ctx, base);
loc_880F6BEC:
	// lwz r10,8088(r31)
	ctx.current_instruction = 0x880F6BEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8088);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880F6C0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F6C0C:
	// lwz r9,2516(r31)
	ctx.current_instruction = 0x880F6C0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2516);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880F6C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F6C24:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r23,6
	ctx.r11.s64 = ctx.r23.s64 + 6;
	// addi r10,r29,-16
	ctx.r10.s64 = ctx.r29.s64 + -16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F6C34:
	// lhz r9,30(r10)
	ctx.current_instruction = 0x880F6C34;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// lhz r8,28(r10)
	ctx.current_instruction = 0x880F6C38;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r9,20(r10)
	ctx.current_instruction = 0x880F6C40;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lhz r8,18(r10)
	ctx.current_instruction = 0x880F6C48;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// lbz r31,1(r11)
	ctx.current_instruction = 0x880F6C4C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// lbz r26,0(r11)
	ctx.current_instruction = 0x880F6C54;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsh r25,r8
	ctx.r25.s64 = ctx.r8.s16;
	// lhz r7,26(r10)
	ctx.current_instruction = 0x880F6C5C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// subf r8,r31,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r31.u64;
	// lhz r5,24(r10)
	ctx.current_instruction = 0x880F6C64;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// subf r6,r26,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r26.u64;
	// lhz r3,22(r10)
	ctx.current_instruction = 0x880F6C6C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// mullw r8,r8,r8
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// lhzu r9,16(r10)
	ctx.current_instruction = 0x880F6C74;
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lbz r4,-6(r11)
	ctx.current_instruction = 0x880F6C78;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// lbz r26,-5(r11)
	ctx.current_instruction = 0x880F6C7C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// lbz r24,-3(r11)
	ctx.current_instruction = 0x880F6C80;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r23,-2(r11)
	ctx.current_instruction = 0x880F6C84;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r22,-1(r11)
	ctx.current_instruction = 0x880F6C88;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// mullw r9,r6,r6
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// lbz r6,-4(r11)
	ctx.current_instruction = 0x880F6C94;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// subf r4,r4,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r4.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r4,r4
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// subf r4,r26,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r26.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r4,r4
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// subf r6,r6,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r6.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r6,r6
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// subf r4,r24,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r24.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r4,r4
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// subf r3,r23,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r23.u64;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r7,r22,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r22.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r7,r7
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bdnz 0x880f6c34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F6C34;
	// lwz r11,112(r20)
	ctx.current_instruction = 0x880F6CFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 112);
	// mulli r9,r30,200
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(200));
	// lhz r8,96(r1)
	ctx.current_instruction = 0x880F6D04;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r7,2500(r1)
	ctx.current_instruction = 0x880F6D08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2500);
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,0(r19)
	ctx.current_instruction = 0x880F6D1C;
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r5.u32);
	// stw r6,0(r7)
	ctx.current_instruction = 0x880F6D20;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r1,r1,2416
	ctx.r1.s64 = ctx.r1.s64 + 2416;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FC538) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FC538;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FC538) {
			switch (rex_dispatch_address) {
				case 0x880FC540:
				case 0x880FC560:
				case 0x880FC578:
				case 0x880FC5D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FC538;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FC540: goto loc_880FC540;
		case 0x880FC560: goto loc_880FC560;
		case 0x880FC578: goto loc_880FC578;
		case 0x880FC5D8: goto loc_880FC5D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880FC540;
	__savegprlr_28(ctx, base);
loc_880FC540:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880FC540;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x880cad40
	ctx.lr = 0x880FC560;
	sub_880CAD40(ctx, base);
loc_880FC560:
	// lwz r3,0(r30)
	ctx.current_instruction = 0x880FC560;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fc580
	if (ctx.cr6.eq) goto loc_880FC580;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880FC578;
	sub_88050358(ctx, base);
loc_880FC578:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	ctx.current_instruction = 0x880FC57C;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_880FC580:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x880FC580;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.current_instruction = 0x880FC584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880fc5a0
	if (!ctx.cr6.lt) goto loc_880FC5A0;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880FC590;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.current_instruction = 0x880FC594;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880fc5ac
	if (ctx.cr6.lt) goto loc_880FC5AC;
loc_880FC5A0:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880FC5AC:
	// lwz r8,8(r31)
	ctx.current_instruction = 0x880FC5AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mullw r31,r6,r29
	ctx.r31.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// mullw r10,r7,r6
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x88050340
	ctx.lr = 0x880FC5D8;
	sub_88050340(ctx, base);
loc_880FC5D8:
	// stw r3,0(r30)
	ctx.current_instruction = 0x880FC5D8;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880fc5f0
	if (!ctx.cr6.eq) goto loc_880FC5F0;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880FC5F0:
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r10,-3
	ctx.r10.s64 = -3;
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// rlwinm r8,r9,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// stw r8,0(r28)
	ctx.current_instruction = 0x880FC604;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 & ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881008C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881008C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881008C8) {
			switch (rex_dispatch_address) {
				case 0x881008D0:
				case 0x88100974:
				case 0x88100B10:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881008C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881008D0: goto loc_881008D0;
		case 0x88100974: goto loc_88100974;
		case 0x88100B10: goto loc_88100B10;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881008D0;
	__savegprlr_27(ctx, base);
loc_881008D0:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881008D0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lhz r4,0(r8)
	ctx.current_instruction = 0x881008D8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,40(r9)
	ctx.current_instruction = 0x881008E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// li r10,63
	ctx.r10.s64 = 63;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r8,0(r9)
	ctx.current_instruction = 0x881008F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r6,4(r9)
	ctx.current_instruction = 0x88100908;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 2;
	// sth r3,0(r7)
	ctx.current_instruction = 0x88100910;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r3.u16);
	// subf r5,r7,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r7.u64;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8810091C:
	// lhzx r10,r5,r11
	ctx.current_instruction = 0x8810091C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8810094c
	if (ctx.cr6.eq) goto loc_8810094C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// bgt cr6,0x88100938
	if (ctx.cr6.gt) goto loc_88100938;
	// neg r9,r6
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r6.u64);
loc_88100938:
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,0(r11)
	ctx.current_instruction = 0x88100944;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// b 0x88100950
	goto loc_88100950;
loc_8810094C:
	// sth r4,0(r11)
	ctx.current_instruction = 0x8810094C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
loc_88100950:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8810091c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810091C;
	// lwz r11,8088(r29)
	ctx.current_instruction = 0x88100958;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8088);
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88100974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88100974:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88100ab0
	if (ctx.cr6.eq) goto loc_88100AB0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8810098C:
	// lhzu r9,2(r11)
	ctx.current_instruction = 0x8810098C;
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x88100990;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8810098c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810098C;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x88100998;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r7,r30,14
	ctx.r7.s64 = ctx.r30.s64 + 14;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_881009B4:
	// lhzu r9,2(r7)
	ctx.current_instruction = 0x881009B4;
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ctx.current_instruction = 0x881009B8;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881009b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881009B4;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,8
	ctx.r10.s64 = 8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r8,r30,30
	ctx.r8.s64 = ctx.r30.s64 + 30;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881009D8:
	// lhzu r10,2(r8)
	ctx.current_instruction = 0x881009D8;
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r10,2(r9)
	ctx.current_instruction = 0x881009DC;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x881009d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881009D8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,8
	ctx.r10.s64 = 8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r30,46
	ctx.r8.s64 = ctx.r30.s64 + 46;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
loc_88100A04:
	// lhzu r9,2(r8)
	ctx.current_instruction = 0x88100A04;
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x88100A08;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88100a04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100A04;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,8
	ctx.r10.s64 = 8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r8,r30,62
	ctx.r8.s64 = ctx.r30.s64 + 62;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88100A28:
	// lhzu r10,2(r8)
	ctx.current_instruction = 0x88100A28;
	ea = 2 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r10,2(r9)
	ctx.current_instruction = 0x88100A2C;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88100a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100A28;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,8
	ctx.r10.s64 = 8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r30,78
	ctx.r8.s64 = ctx.r30.s64 + 78;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
loc_88100A54:
	// lhzu r9,2(r8)
	ctx.current_instruction = 0x88100A54;
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x88100A58;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88100a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100A54;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,8
	ctx.r10.s64 = 8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r30,94
	ctx.r8.s64 = ctx.r30.s64 + 94;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
loc_88100A80:
	// lhzu r9,2(r8)
	ctx.current_instruction = 0x88100A80;
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x88100A84;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88100a80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100A80;
	// mulli r10,r11,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// li r11,8
	ctx.r11.s64 = 8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r30,110
	ctx.r9.s64 = ctx.r30.s64 + 110;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88100AA4:
	// lhzu r11,2(r9)
	ctx.current_instruction = 0x88100AA4;
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r10)
	ctx.current_instruction = 0x88100AA8;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88100aa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100AA4;
loc_88100AB0:
	// lwz r11,2800(r29)
	ctx.current_instruction = 0x88100AB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88100ac4
	if (ctx.cr6.eq) goto loc_88100AC4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88100af0
	if (!ctx.cr6.eq) goto loc_88100AF0;
loc_88100AC4:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,8
	ctx.r7.s64 = 8;
loc_88100ACC:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// li r9,128
	ctx.r9.s64 = 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88100ADC:
	// stbu r9,1(r11)
	ctx.current_instruction = 0x88100ADC;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x88100adc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100ADC;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// bne 0x88100acc
	if (!ctx.cr0.eq) goto loc_88100ACC;
loc_88100AF0:
	// lwz r11,8116(r29)
	ctx.current_instruction = 0x88100AF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8116);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88100B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88100B10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88108308) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88108308;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88108308) {
			switch (rex_dispatch_address) {
				case 0x88108310:
				case 0x881083BC:
				case 0x8810845C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88108308;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88108310: goto loc_88108310;
		case 0x881083BC: goto loc_881083BC;
		case 0x8810845C: goto loc_8810845C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88108310;
	__savegprlr_27(ctx, base);
loc_88108310:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88108310;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2272(r3)
	ctx.current_instruction = 0x88108314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2272);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,7764(r3)
	ctx.current_instruction = 0x8810831C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,724(r3)
	ctx.current_instruction = 0x88108328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// beq cr6,0x881083ec
	if (ctx.cr6.eq) goto loc_881083EC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88108480
	if (!ctx.cr6.gt) goto loc_88108480;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x88108338;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// li r27,0
	ctx.r27.s64 = 0;
loc_88108340:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881083d0
	if (!ctx.cr6.gt) goto loc_881083D0;
loc_8810834C:
	// lwz r11,720(r30)
	ctx.current_instruction = 0x8810834C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mulli r10,r11,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// subf r11,r10,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// beq cr6,0x8810837c
	if (ctx.cr6.eq) goto loc_8810837C;
	// lwz r11,2264(r30)
	ctx.current_instruction = 0x88108368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2264);
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x8810836C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88108380
	if (ctx.cr6.eq) goto loc_88108380;
loc_8810837C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_88108380:
	// cntlzw r9,r29
	ctx.r9.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r10,84(r1)
	ctx.current_instruction = 0x88108384;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,-272
	ctx.r7.s64 = ctx.r31.s64 + -272;
	// lbz r6,88(r31)
	ctx.current_instruction = 0x8810838C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 88);
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,100(r1)
	ctx.current_instruction = 0x88108394;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x88108398;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r5,108(r1)
	ctx.current_instruction = 0x881083A0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r9,r31,-220
	ctx.r9.s64 = ctx.r31.s64 + -220;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88106668
	ctx.lr = 0x881083BC;
	sub_88106668(ctx, base);
loc_881083BC:
	// lwz r11,720(r30)
	ctx.current_instruction = 0x881083BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,276
	ctx.r31.s64 = ctx.r31.s64 + 276;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8810834c
	if (ctx.cr6.lt) goto loc_8810834C;
loc_881083D0:
	// lwz r10,724(r30)
	ctx.current_instruction = 0x881083D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88108340
	if (ctx.cr6.lt) goto loc_88108340;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881083EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88108480
	if (!ctx.cr6.gt) goto loc_88108480;
	// lwz r11,720(r30)
	ctx.current_instruction = 0x881083F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
loc_881083F8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88108470
	if (!ctx.cr6.gt) goto loc_88108470;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8810840C:
	// lwz r11,720(r30)
	ctx.current_instruction = 0x8810840C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// addi r9,r31,-272
	ctx.r9.s64 = ctx.r31.s64 + -272;
	// lbz r6,88(r31)
	ctx.current_instruction = 0x88108418;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 88);
	// mulli r8,r11,276
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// stw r27,100(r1)
	ctx.current_instruction = 0x88108420;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x88108424;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// subf r11,r8,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r8.u64;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r7,108(r1)
	ctx.current_instruction = 0x88108434;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r5,84(r1)
	ctx.current_instruction = 0x8810843C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r9,r31,-220
	ctx.r9.s64 = ctx.r31.s64 + -220;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88106668
	ctx.lr = 0x8810845C;
	sub_88106668(ctx, base);
loc_8810845C:
	// lwz r11,720(r30)
	ctx.current_instruction = 0x8810845C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 720);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,276
	ctx.r31.s64 = ctx.r31.s64 + 276;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8810840c
	if (ctx.cr6.lt) goto loc_8810840C;
loc_88108470:
	// lwz r10,724(r30)
	ctx.current_instruction = 0x88108470;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 724);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881083f8
	if (ctx.cr6.lt) goto loc_881083F8;
loc_88108480:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810AA38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810AA38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810AA38) {
			switch (rex_dispatch_address) {
				case 0x8810AA40:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810AA38;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x8810AA40: goto loc_8810AA40;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8810AA40;
	__savegprlr_29(ctx, base);
loc_8810AA40:
	// lwz r31,0(r5)
	ctx.current_instruction = 0x8810AA40;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r30,0(r4)
	ctx.current_instruction = 0x8810AA48;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r31,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8810aa84
	if (ctx.cr6.eq) goto loc_8810AA84;
	// lwz r10,724(r11)
	ctx.current_instruction = 0x8810AA64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 724);
	// li r9,-17
	ctx.r9.s64 = -17;
	// lwz r8,720(r11)
	ctx.current_instruction = 0x8810AA6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// b 0x8810aa98
	goto loc_8810AA98;
loc_8810AA84:
	// lwz r10,720(r11)
	ctx.current_instruction = 0x8810AA84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// li r9,-18
	ctx.r9.s64 = -18;
	// lwz r11,724(r11)
	ctx.current_instruction = 0x8810AA8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 724);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_8810AA98:
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// srawi r10,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 2;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8810aab8
	if (!ctx.cr6.lt) goto loc_8810AAB8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8810aac4
	goto loc_8810AAC4;
loc_8810AAB8:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8810aac8
	if (!ctx.cr6.gt) goto loc_8810AAC8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8810AAC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8810AAC8:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8810aadc
	if (!ctx.cr6.lt) goto loc_8810AADC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8810aaf8
	goto loc_8810AAF8;
loc_8810AADC:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8810aaf0
	if (!ctx.cr6.gt) goto loc_8810AAF0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8810aaf8
	goto loc_8810AAF8;
loc_8810AAF0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8810ab20
	if (ctx.cr6.eq) goto loc_8810AB20;
loc_8810AAF8:
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r30,30
	ctx.r8.u64 = ctx.r30.u32 & 0x3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r31,30
	ctx.r10.u64 = ctx.r31.u32 & 0x3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r4)
	ctx.current_instruction = 0x8810AB18;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r5)
	ctx.current_instruction = 0x8810AB1C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_8810AB20:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810C568) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810C568;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810C568) {
			switch (rex_dispatch_address) {
				case 0x8810C570:
				case 0x8810C598:
				case 0x8810C5C0:
				case 0x8810C5F4:
				case 0x8810C618:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810C568;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8810C570: goto loc_8810C570;
		case 0x8810C598: goto loc_8810C598;
		case 0x8810C5C0: goto loc_8810C5C0;
		case 0x8810C5F4: goto loc_8810C5F4;
		case 0x8810C618: goto loc_8810C618;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8810C570;
	__savegprlr_24(ctx, base);
loc_8810C570:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8810C570;
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
	// bl 0x8810b7f8
	ctx.lr = 0x8810C598;
	sub_8810B7F8(ctx, base);
loc_8810C598:
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
	// bl 0x8810b7f8
	ctx.lr = 0x8810C5C0;
	sub_8810B7F8(ctx, base);
loc_8810C5C0:
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
	// bl 0x8810b7f8
	ctx.lr = 0x8810C5F4;
	sub_8810B7F8(ctx, base);
loc_8810C5F4:
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
	// bl 0x8810b7f8
	ctx.lr = 0x8810C618;
	sub_8810B7F8(ctx, base);
loc_8810C618:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810D1B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8810D1B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810D1B8;
	ctx.current_instruction = 0x8810D1B8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
loc_8810D1CC:
	// lhzx r10,r9,r11
	ctx.current_instruction = 0x8810D1CC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,0(r11)
	ctx.current_instruction = 0x8810D1DC;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8810d1cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810D1CC;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8810D220) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810D220;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810D220) {
			switch (rex_dispatch_address) {
				case 0x8810D228:
				case 0x8810D258:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810D220;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8810D228: goto loc_8810D228;
		case 0x8810D258: goto loc_8810D258;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8810D228;
	__savegprlr_27(ctx, base);
loc_8810D228:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8810D228;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8810d268
	if (!ctx.cr6.gt) goto loc_8810D268;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_8810D248:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x8810D258;
	sub_880547A0(ctx, base);
loc_8810D258:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bne 0x8810d248
	if (!ctx.cr0.eq) goto loc_8810D248;
loc_8810D268:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810E6B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810E6B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810E6B0) {
			switch (rex_dispatch_address) {
				case 0x8810E6B8:
				case 0x8810E744:
				case 0x8810E774:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810E6B0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8810E6B8: goto loc_8810E6B8;
		case 0x8810E744: goto loc_8810E744;
		case 0x8810E774: goto loc_8810E774;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8810E6B8;
	__savegprlr_25(ctx, base);
loc_8810E6B8:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8810E6B8;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x8810E6BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mullw r11,r26,r5
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r5.s32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r25,r11,r4
	ctx.r25.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne cr6,0x8810e710
	if (!ctx.cr6.eq) goto loc_8810E710;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8810e70c
	if (ctx.cr6.eq) goto loc_8810E70C;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// lwz r10,2264(r3)
	ctx.current_instruction = 0x8810E6F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2264);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.current_instruction = 0x8810E700;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8810e710
	if (ctx.cr6.eq) goto loc_8810E710;
loc_8810E70C:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8810E710:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x8810E710;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810e748
	if (ctx.cr6.eq) goto loc_8810E748;
	// stw r28,0(r30)
	ctx.current_instruction = 0x8810E71C;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r5,0(r29)
	ctx.current_instruction = 0x8810E724;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r7,2548(r31)
	ctx.current_instruction = 0x8810E730;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,2544(r31)
	ctx.current_instruction = 0x8810E738;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f1df0
	ctx.lr = 0x8810E744;
	sub_880F1DF0(ctx, base);
loc_8810E744:
	// b 0x8810e774
	goto loc_8810E774;
loc_8810E748:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x8810E748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,2548(r31)
	ctx.current_instruction = 0x8810E754;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x8810E75C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,100(r1)
	ctx.current_instruction = 0x8810E764;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r29,92(r1)
	ctx.current_instruction = 0x8810E768;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,84(r1)
	ctx.current_instruction = 0x8810E76C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8810ab28
	ctx.lr = 0x8810E774;
	sub_8810AB28(ctx, base);
loc_8810E774:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8810e894
	if (ctx.cr6.eq) goto loc_8810E894;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8810e894
	if (!ctx.cr6.eq) goto loc_8810E894;
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x8810E784;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r9,r25,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lhz r10,-2(r11)
	ctx.current_instruction = 0x8810E790;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8810E794;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// bne cr6,0x8810e7c4
	if (!ctx.cr6.eq) goto loc_8810E7C4;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8810E7A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r8,r8,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r8.u64;
	// b 0x8810e7f8
	goto loc_8810E7F8;
loc_8810E7C4:
	// lwz r10,2548(r31)
	ctx.current_instruction = 0x8810E7C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8810E7CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r8,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lhz r6,-2(r9)
	ctx.current_instruction = 0x8810E7D4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// subf r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// srawi r3,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r4,r3
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r9,r3,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r3.u64;
	// subf r8,r6,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r6.u64;
loc_8810E7F8:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// ble cr6,0x8810e810
	if (!ctx.cr6.gt) goto loc_8810E810;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8810E810:
	// subf r9,r26,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r26.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r7
	ctx.current_instruction = 0x8810E818;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// bne cr6,0x8810e844
	if (!ctx.cr6.eq) goto loc_8810E844;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// b 0x8810e870
	goto loc_8810E870;
loc_8810E844:
	// lwz r7,2548(r31)
	ctx.current_instruction = 0x8810E844;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lhzx r5,r9,r7
	ctx.current_instruction = 0x8810E84C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// subf r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// srawi r10,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 31;
	// xor r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// xor r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_8810E870:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8810E894:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88112988) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88112988;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88112988) {
			switch (rex_dispatch_address) {
				case 0x88112990:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88112988;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88112990: goto loc_88112990;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x88112990;
	__savegprlr_20(ctx, base);
loc_88112990:
	// lwz r10,116(r3)
	ctx.current_instruction = 0x88112990;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r8,96(r3)
	ctx.current_instruction = 0x88112994;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x881129A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r6,14(r10)
	ctx.current_instruction = 0x881129A4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// addi r31,r10,31
	ctx.r31.s64 = ctx.r10.s64 + 31;
	// mullw r10,r6,r8
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// rlwinm r6,r31,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r31,r11,7,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// mullw r30,r9,r8
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r29,r10,31
	ctx.r29.s64 = ctx.r10.s64 + 31;
	// srawi r6,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 3;
	// rotlwi r10,r31,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// rotlwi r9,r30,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// rlwinm r29,r29,0,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFE0;
	// addze r23,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r23.s64 = temp.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// srawi r6,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 3;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// divw. r26,r31,r8
	ctx.r26.u64 = uint32_t((ctx.r8.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r31.s32 / ctx.r8.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r25,r30,r11
	ctx.r25.u64 = uint32_t((ctx.r11.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r30.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r22,r7,r8
	ctx.r22.u64 = ctx.r8.u64 - ctx.r7.u64;
	// ble 0x88112b6c
	if (!ctx.cr0.gt) goto loc_88112B6C;
	// lwz r11,88(r3)
	ctx.current_instruction = 0x88112A10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// lwz r8,96(r3)
	ctx.current_instruction = 0x88112A18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mullw r7,r11,r4
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,120(r3)
	ctx.current_instruction = 0x88112A20;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r10,132(r3)
	ctx.current_instruction = 0x88112A24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mullw r6,r8,r4
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x88112b6c
	if (!ctx.cr6.lt) goto loc_88112B6C;
	// subf r24,r4,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_88112A44:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x88112b00
	if (!ctx.cr6.gt) goto loc_88112B00;
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// addi r31,r8,5
	ctx.r31.s64 = ctx.r8.s64 + 5;
	// addi r30,r8,2
	ctx.r30.s64 = ctx.r8.s64 + 2;
	// addi r29,r8,6
	ctx.r29.s64 = ctx.r8.s64 + 6;
	// addi r28,r8,3
	ctx.r28.s64 = ctx.r8.s64 + 3;
	// addi r27,r8,7
	ctx.r27.s64 = ctx.r8.s64 + 7;
loc_88112A70:
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// clrlwi r21,r10,25
	ctx.r21.u64 = ctx.r10.u32 & 0x7F;
	// rlwinm r20,r9,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r9,r21,128
	ctx.xer.ca = ctx.r21.u32 <= 128;
	ctx.r9.u64 = static_cast<uint64_t>(128) - ctx.r21.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbzx r7,r5,r20
	ctx.current_instruction = 0x88112A84;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r20.u32);
	// lbzx r6,r20,r8
	ctx.current_instruction = 0x88112A88;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r8.u32);
	// mullw r7,r7,r21
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r21.s32);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r6,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// stb r6,0(r11)
	ctx.current_instruction = 0x88112A9C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r7,r31,r20
	ctx.current_instruction = 0x88112AA0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r20.u32);
	// lbzx r6,r4,r20
	ctx.current_instruction = 0x88112AA4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r20.u32);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r7,r21
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r21.s32);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r7,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 7;
	// stbu r7,1(r11)
	ctx.current_instruction = 0x88112AB8;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzx r7,r29,r20
	ctx.current_instruction = 0x88112ABC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r20.u32);
	// lbzx r6,r30,r20
	ctx.current_instruction = 0x88112AC0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r20.u32);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r7,r21
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r21.s32);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r7,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 7;
	// stbu r7,1(r11)
	ctx.current_instruction = 0x88112AD4;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzx r6,r27,r20
	ctx.current_instruction = 0x88112AD8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r20.u32);
	// lbzx r7,r28,r20
	ctx.current_instruction = 0x88112ADC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r20.u32);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r6,r21
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r21.s32);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r9,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 7;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbu r7,1(r11)
	ctx.current_instruction = 0x88112AF4;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88112a70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88112A70;
loc_88112B00:
	// lwz r7,96(r3)
	ctx.current_instruction = 0x88112B00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpw cr6,r25,r7
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x88112b5c
	if (!ctx.cr6.lt) goto loc_88112B5C;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// addi r5,r8,3
	ctx.r5.s64 = ctx.r8.s64 + 3;
loc_88112B1C:
	// srawi r4,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 7;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lbzx r31,r4,r8
	ctx.current_instruction = 0x88112B2C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r31,0(r11)
	ctx.current_instruction = 0x88112B30;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbzx r31,r7,r4
	ctx.current_instruction = 0x88112B34;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// stbu r31,1(r11)
	ctx.current_instruction = 0x88112B38;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// lbzx r31,r6,r4
	ctx.current_instruction = 0x88112B3C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// stbu r31,1(r11)
	ctx.current_instruction = 0x88112B40;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// lbzx r4,r5,r4
	ctx.current_instruction = 0x88112B44;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// stbu r4,1(r11)
	ctx.current_instruction = 0x88112B48;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// lwz r4,96(r3)
	ctx.current_instruction = 0x88112B4C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x88112b1c
	if (ctx.cr6.lt) goto loc_88112B1C;
loc_88112B5C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + ctx.r23.u64;
	// bne 0x88112a44
	if (!ctx.cr0.eq) goto loc_88112A44;
loc_88112B6C:
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811A338) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811A338;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811A338) {
			switch (rex_dispatch_address) {
				case 0x8811A340:
				case 0x8811A398:
				case 0x8811A3C0:
				case 0x8811A3E0:
				case 0x8811A400:
				case 0x8811A420:
				case 0x8811A440:
				case 0x8811A460:
				case 0x8811A480:
				case 0x8811A4B0:
				case 0x8811A4D0:
				case 0x8811A54C:
				case 0x8811A56C:
				case 0x8811A61C:
				case 0x8811A64C:
				case 0x8811A67C:
				case 0x8811A6AC:
				case 0x8811A6DC:
				case 0x8811A70C:
				case 0x8811A73C:
				case 0x8811A774:
				case 0x8811A7AC:
				case 0x8811A8A4:
				case 0x8811A8C4:
				case 0x8811A8E0:
				case 0x8811A94C:
				case 0x8811A97C:
				case 0x8811A9AC:
				case 0x8811A9D8:
				case 0x8811A9F8:
				case 0x8811AA18:
				case 0x8811AA48:
				case 0x8811AA78:
				case 0x8811AAA8:
				case 0x8811AAD8:
				case 0x8811AB0C:
				case 0x8811AB3C:
				case 0x8811AB6C:
				case 0x8811AB9C:
				case 0x8811ABCC:
				case 0x8811AC20:
				case 0x8811AC58:
				case 0x8811AC7C:
				case 0x8811ACEC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811A338;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811A340: goto loc_8811A340;
		case 0x8811A398: goto loc_8811A398;
		case 0x8811A3C0: goto loc_8811A3C0;
		case 0x8811A3E0: goto loc_8811A3E0;
		case 0x8811A400: goto loc_8811A400;
		case 0x8811A420: goto loc_8811A420;
		case 0x8811A440: goto loc_8811A440;
		case 0x8811A460: goto loc_8811A460;
		case 0x8811A480: goto loc_8811A480;
		case 0x8811A4B0: goto loc_8811A4B0;
		case 0x8811A4D0: goto loc_8811A4D0;
		case 0x8811A54C: goto loc_8811A54C;
		case 0x8811A56C: goto loc_8811A56C;
		case 0x8811A61C: goto loc_8811A61C;
		case 0x8811A64C: goto loc_8811A64C;
		case 0x8811A67C: goto loc_8811A67C;
		case 0x8811A6AC: goto loc_8811A6AC;
		case 0x8811A6DC: goto loc_8811A6DC;
		case 0x8811A70C: goto loc_8811A70C;
		case 0x8811A73C: goto loc_8811A73C;
		case 0x8811A774: goto loc_8811A774;
		case 0x8811A7AC: goto loc_8811A7AC;
		case 0x8811A8A4: goto loc_8811A8A4;
		case 0x8811A8C4: goto loc_8811A8C4;
		case 0x8811A8E0: goto loc_8811A8E0;
		case 0x8811A94C: goto loc_8811A94C;
		case 0x8811A97C: goto loc_8811A97C;
		case 0x8811A9AC: goto loc_8811A9AC;
		case 0x8811A9D8: goto loc_8811A9D8;
		case 0x8811A9F8: goto loc_8811A9F8;
		case 0x8811AA18: goto loc_8811AA18;
		case 0x8811AA48: goto loc_8811AA48;
		case 0x8811AA78: goto loc_8811AA78;
		case 0x8811AAA8: goto loc_8811AAA8;
		case 0x8811AAD8: goto loc_8811AAD8;
		case 0x8811AB0C: goto loc_8811AB0C;
		case 0x8811AB3C: goto loc_8811AB3C;
		case 0x8811AB6C: goto loc_8811AB6C;
		case 0x8811AB9C: goto loc_8811AB9C;
		case 0x8811ABCC: goto loc_8811ABCC;
		case 0x8811AC20: goto loc_8811AC20;
		case 0x8811AC58: goto loc_8811AC58;
		case 0x8811AC7C: goto loc_8811AC7C;
		case 0x8811ACEC: goto loc_8811ACEC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x8811A340;
	__savegprlr_23(ctx, base);
loc_8811A340:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x8811A340;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,28(r3)
	ctx.current_instruction = 0x8811A344;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	ctx.current_instruction = 0x8811A350;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r23,r4,-24
	ctx.r23.s64 = ctx.r4.s64 + -24;
	// stw r30,92(r1)
	ctx.current_instruction = 0x8811A358;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,88(r1)
	ctx.current_instruction = 0x8811A35C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r30,108(r1)
	ctx.current_instruction = 0x8811A364;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwz r3,0(r25)
	ctx.current_instruction = 0x8811A368;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r23,96(r1)
	ctx.current_instruction = 0x8811A36C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// stw r30,112(r1)
	ctx.current_instruction = 0x8811A370;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	ctx.current_instruction = 0x8811A374;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// sth r30,84(r1)
	ctx.current_instruction = 0x8811A378;
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r30.u16);
	// stw r30,120(r1)
	ctx.current_instruction = 0x8811A37C;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// sth r30,82(r1)
	ctx.current_instruction = 0x8811A380;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// stw r30,104(r1)
	ctx.current_instruction = 0x8811A384;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stb r30,80(r1)
	ctx.current_instruction = 0x8811A388;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lwz r11,12(r3)
	ctx.current_instruction = 0x8811A38C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8811A398;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811A398:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// cmplwi cr6,r23,54
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 54, ctx.xer);
	// blt cr6,0x8811a834
	if (ctx.cr6.lt) goto loc_8811A834;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811A3C0;
	sub_881196F8(ctx, base);
loc_8811A3C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811A3E0;
	sub_881196F8(ctx, base);
loc_8811A3E0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119528
	ctx.lr = 0x8811A400;
	sub_88119528(ctx, base);
loc_8811A400:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811A420;
	sub_88119390(ctx, base);
loc_8811A420:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811A440;
	sub_88119390(ctx, base);
loc_8811A440:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811A460;
	sub_88119210(ctx, base);
loc_8811A460:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811A480;
	sub_88119390(ctx, base);
loc_8811A480:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lhz r11,84(r1)
	ctx.current_instruction = 0x8811A488;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,148(r25)
	ctx.current_instruction = 0x8811A490;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 148);
	// li r24,54
	ctx.r24.s64 = 54;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r31,r11,25
	ctx.r31.u64 = ctx.r11.u32 & 0x7F;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subfe r28,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x880cb730
	ctx.lr = 0x8811A4B0;
	sub_880CB730(ctx, base);
loc_8811A4B0:
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// ori r7,r8,22
	ctx.r7.u64 = ctx.r8.u64 | 22;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8811a4d8
	if (!ctx.cr6.eq) goto loc_8811A4D8;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,148(r25)
	ctx.current_instruction = 0x8811A4C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 148);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880cb648
	ctx.lr = 0x8811A4D0;
	sub_880CB648(ctx, base);
loc_8811A4D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
loc_8811A4D8:
	// lwz r9,108(r1)
	ctx.current_instruction = 0x8811A4D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// ld r26,128(r1)
	ctx.current_instruction = 0x8811A4E0;
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,14024
	ctx.r11.s64 = ctx.r11.s64 + 14024;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stb r31,0(r9)
	ctx.current_instruction = 0x8811A4F4;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lwz r7,108(r1)
	ctx.current_instruction = 0x8811A4F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// std r26,56(r7)
	ctx.current_instruction = 0x8811A4FC;
	REX_STORE_U64(ctx.r7.u32 + 56, ctx.r26.u64);
	// lwz r6,108(r1)
	ctx.current_instruction = 0x8811A500;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r28,64(r6)
	ctx.current_instruction = 0x8811A504;
	REX_STORE_U32(ctx.r6.u32 + 64, ctx.r28.u32);
	// lwz r5,108(r1)
	ctx.current_instruction = 0x8811A508;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r29,68(r5)
	ctx.current_instruction = 0x8811A50C;
	REX_STORE_U32(ctx.r5.u32 + 68, ctx.r29.u32);
loc_8811A510:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x8811A510;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x8811A514;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8811a530
	if (!ctx.cr0.eq) goto loc_8811A530;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8811a510
	if (!ctx.cr6.eq) goto loc_8811A510;
loc_8811A530:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8811a844
	if (!ctx.cr6.eq) goto loc_8811A844;
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811A538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,124(r11)
	ctx.current_instruction = 0x8811A544;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb648
	ctx.lr = 0x8811A54C;
	sub_880CB648(ctx, base);
loc_8811A54C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A554;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r25)
	ctx.current_instruction = 0x8811A560;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x880cb2c0
	ctx.lr = 0x8811A56C;
	sub_880CB2C0(ctx, base);
loc_8811A56C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r10,88(r1)
	ctx.current_instruction = 0x8811A574;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,8(r10)
	ctx.current_instruction = 0x8811A580;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8811A58C:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x8811A58C;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8811a58c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811A58C;
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811A594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,108(r1)
	ctx.current_instruction = 0x8811A598;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r30,112(r1)
	ctx.current_instruction = 0x8811A59C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lhz r9,38(r11)
	ctx.current_instruction = 0x8811A5A4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// sth r9,44(r10)
	ctx.current_instruction = 0x8811A5A8;
	REX_STORE_U16(ctx.r10.u32 + 44, ctx.r9.u16);
	// lwz r8,108(r1)
	ctx.current_instruction = 0x8811A5AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r29,48(r8)
	ctx.current_instruction = 0x8811A5B0;
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r29.u32);
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811A5B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,38(r11)
	ctx.current_instruction = 0x8811A5B8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,38(r11)
	ctx.current_instruction = 0x8811A5C0;
	REX_STORE_U16(ctx.r11.u32 + 38, ctx.r6.u16);
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811A5C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,36(r11)
	ctx.current_instruction = 0x8811A5C8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,36(r11)
	ctx.current_instruction = 0x8811A5D0;
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r10.u16);
	// lwz r8,88(r1)
	ctx.current_instruction = 0x8811A5D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,4(r8)
	ctx.current_instruction = 0x8811A5D8;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r29.u32);
	// lwz r7,88(r1)
	ctx.current_instruction = 0x8811A5DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r7)
	ctx.current_instruction = 0x8811A5E0;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// lwz r6,88(r1)
	ctx.current_instruction = 0x8811A5E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r6)
	ctx.current_instruction = 0x8811A5E8;
	REX_STORE_U64(ctx.r6.u32 + 16, ctx.r26.u64);
	// lwz r5,88(r1)
	ctx.current_instruction = 0x8811A5EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,24(r5)
	ctx.current_instruction = 0x8811A5F0;
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r28.u32);
	// beq cr6,0x8811a7b8
	if (ctx.cr6.eq) goto loc_8811A7B8;
	// addi r11,r30,54
	ctx.r11.s64 = ctx.r30.s64 + 54;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x8811a834
	if (ctx.cr6.gt) goto loc_8811A834;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811A61C;
	sub_88119210(ctx, base);
loc_8811A61C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.current_instruction = 0x8811A62C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811A640;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,0(r9)
	ctx.current_instruction = 0x8811A644;
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// bl 0x88119210
	ctx.lr = 0x8811A64C;
	sub_88119210(ctx, base);
loc_8811A64C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.current_instruction = 0x8811A65C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811A670;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,2(r9)
	ctx.current_instruction = 0x8811A674;
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// bl 0x88119390
	ctx.lr = 0x8811A67C;
	sub_88119390(ctx, base);
loc_8811A67C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A684;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x8811A68C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811A6A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r9)
	ctx.current_instruction = 0x8811A6A4;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811A6AC;
	sub_88119390(ctx, base);
loc_8811A6AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A6B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x8811A6BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811A6D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r9)
	ctx.current_instruction = 0x8811A6D4;
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bl 0x88119210
	ctx.lr = 0x8811A6DC;
	sub_88119210(ctx, base);
loc_8811A6DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A6E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.current_instruction = 0x8811A6EC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811A700;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,12(r9)
	ctx.current_instruction = 0x8811A704;
	REX_STORE_U16(ctx.r9.u32 + 12, ctx.r10.u16);
	// bl 0x88119210
	ctx.lr = 0x8811A70C;
	sub_88119210(ctx, base);
loc_8811A70C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.current_instruction = 0x8811A71C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811A730;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,14(r9)
	ctx.current_instruction = 0x8811A734;
	REX_STORE_U16(ctx.r9.u32 + 14, ctx.r10.u16);
	// bl 0x88119210
	ctx.lr = 0x8811A73C;
	sub_88119210(ctx, base);
loc_8811A73C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A744;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r10,r10,-18
	ctx.r10.s64 = ctx.r10.s64 + -18;
	// lwz r8,8(r11)
	ctx.current_instruction = 0x8811A754;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,16(r8)
	ctx.current_instruction = 0x8811A758;
	REX_STORE_U16(ctx.r8.u32 + 16, ctx.r10.u16);
	// lwz r7,88(r1)
	ctx.current_instruction = 0x8811A75C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,224(r25)
	ctx.current_instruction = 0x8811A760;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// lwz r11,8(r7)
	ctx.current_instruction = 0x8811A764;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lhz r5,16(r11)
	ctx.current_instruction = 0x8811A76C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// bl 0x880cb2c0
	ctx.lr = 0x8811A774;
	sub_880CB2C0(ctx, base);
loc_8811A774:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A77C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x8811A780;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r5,16(r11)
	ctx.current_instruction = 0x8811A784;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// addi r31,r5,72
	ctx.r31.s64 = ctx.r5.s64 + 72;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x8811a834
	if (ctx.cr6.gt) goto loc_8811A834;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,20(r11)
	ctx.current_instruction = 0x8811A798;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811A7AC;
	sub_881198A8(ctx, base);
loc_8811A7AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_8811A7B8:
	// lwz r11,116(r1)
	ctx.current_instruction = 0x8811A7B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811acb4
	if (ctx.cr6.eq) goto loc_8811ACB4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,14008
	ctx.r11.s64 = ctx.r11.s64 + 14008;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8811A7D4:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x8811A7D4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x8811A7D8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8811a7f4
	if (!ctx.cr0.eq) goto loc_8811A7F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8811a7d4
	if (!ctx.cr6.eq) goto loc_8811A7D4;
loc_8811A7F4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8811acb4
	if (ctx.cr6.eq) goto loc_8811ACB4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,13992
	ctx.r11.s64 = ctx.r11.s64 + 13992;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8811A80C:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x8811A80C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x8811A810;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8811a82c
	if (!ctx.cr0.eq) goto loc_8811A82C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8811a80c
	if (!ctx.cr6.eq) goto loc_8811A80C;
loc_8811A82C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8811acb4
	if (ctx.cr6.eq) goto loc_8811ACB4;
loc_8811A834:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8811A844:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,6708
	ctx.r11.s64 = ctx.r11.s64 + 6708;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8811A854:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x8811A854;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x8811A858;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8811a874
	if (!ctx.cr0.eq) goto loc_8811A874;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8811a854
	if (!ctx.cr6.eq) goto loc_8811A854;
loc_8811A874:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8811ac68
	if (!ctx.cr6.eq) goto loc_8811AC68;
	// lwz r30,112(r1)
	ctx.current_instruction = 0x8811A87C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8811a834
	if (ctx.cr6.eq) goto loc_8811A834;
	// cmplwi cr6,r30,51
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 51, ctx.xer);
	// blt cr6,0x8811a834
	if (ctx.cr6.lt) goto loc_8811A834;
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811A890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,124(r11)
	ctx.current_instruction = 0x8811A89C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb648
	ctx.lr = 0x8811A8A4;
	sub_880CB648(ctx, base);
loc_8811A8A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A8AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r25)
	ctx.current_instruction = 0x8811A8B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x880cb2c0
	ctx.lr = 0x8811A8C4;
	sub_880CB2C0(ctx, base);
loc_8811A8C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A8CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.current_instruction = 0x8811A8D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x88052d90
	ctx.lr = 0x8811A8E0;
	sub_88052D90(ctx, base);
loc_8811A8E0:
	// lwz r10,4(r25)
	ctx.current_instruction = 0x8811A8E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,108(r1)
	ctx.current_instruction = 0x8811A8E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lhz r11,40(r10)
	ctx.current_instruction = 0x8811A8FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 40);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r11,44(r8)
	ctx.current_instruction = 0x8811A904;
	REX_STORE_U16(ctx.r8.u32 + 44, ctx.r11.u16);
	// lwz r10,108(r1)
	ctx.current_instruction = 0x8811A908;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r9,48(r10)
	ctx.current_instruction = 0x8811A90C;
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811A910;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,40(r11)
	ctx.current_instruction = 0x8811A914;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,40(r11)
	ctx.current_instruction = 0x8811A91C;
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811A920;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,36(r11)
	ctx.current_instruction = 0x8811A924;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,36(r11)
	ctx.current_instruction = 0x8811A92C;
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r8.u16);
	// lwz r8,88(r1)
	ctx.current_instruction = 0x8811A930;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r8)
	ctx.current_instruction = 0x8811A934;
	REX_STORE_U64(ctx.r8.u32 + 16, ctx.r26.u64);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A938;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,4(r11)
	ctx.current_instruction = 0x8811A93C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x8811A940;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r10)
	ctx.current_instruction = 0x8811A944;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bl 0x88119390
	ctx.lr = 0x8811A94C;
	sub_88119390(ctx, base);
loc_8811A94C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A954;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x8811A95C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811A970;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	ctx.current_instruction = 0x8811A974;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811A97C;
	sub_88119390(ctx, base);
loc_8811A97C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811A984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x8811A98C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811A9A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r9)
	ctx.current_instruction = 0x8811A9A4;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x88119100
	ctx.lr = 0x8811A9AC;
	sub_88119100(ctx, base);
loc_8811A9AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lbz r10,80(r1)
	ctx.current_instruction = 0x8811A9B4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8811a834
	if (!ctx.cr6.eq) goto loc_8811A834;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119210
	ctx.lr = 0x8811A9D8;
	sub_88119210(ctx, base);
loc_8811A9D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811A9F8;
	sub_88119390(ctx, base);
loc_8811A9F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88119390
	ctx.lr = 0x8811AA18;
	sub_88119390(ctx, base);
loc_8811AA18:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811AA20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x8811AA28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811AA3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r9)
	ctx.current_instruction = 0x8811AA40;
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811AA48;
	sub_88119390(ctx, base);
loc_8811AA48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811AA50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x8811AA58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811AA6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r9)
	ctx.current_instruction = 0x8811AA70;
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// bl 0x88119210
	ctx.lr = 0x8811AA78;
	sub_88119210(ctx, base);
loc_8811AA78:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811AA80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.current_instruction = 0x8811AA88;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811AA9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,16(r9)
	ctx.current_instruction = 0x8811AAA0;
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r10.u16);
	// bl 0x88119210
	ctx.lr = 0x8811AAA8;
	sub_88119210(ctx, base);
loc_8811AAA8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811AAB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.current_instruction = 0x8811AAB8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811AACC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,18(r9)
	ctx.current_instruction = 0x8811AAD0;
	REX_STORE_U16(ctx.r9.u32 + 18, ctx.r10.u16);
	// bl 0x88119390
	ctx.lr = 0x8811AAD8;
	sub_88119390(ctx, base);
loc_8811AAD8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811AAE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,104(r1)
	ctx.current_instruction = 0x8811AAE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r8,8(r11)
	ctx.current_instruction = 0x8811AAFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwbrx r9,r8,r10
	ctx.current_instruction = 0x8811AB04;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, __builtin_bswap32(ctx.r9.u32));
	// bl 0x88119390
	ctx.lr = 0x8811AB0C;
	sub_88119390(ctx, base);
loc_8811AB0C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811AB14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x8811AB1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811AB30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,24(r9)
	ctx.current_instruction = 0x8811AB34;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811AB3C;
	sub_88119390(ctx, base);
loc_8811AB3C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811AB44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x8811AB4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811AB60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,28(r9)
	ctx.current_instruction = 0x8811AB64;
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811AB6C;
	sub_88119390(ctx, base);
loc_8811AB6C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811AB74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x8811AB7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811AB90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,32(r9)
	ctx.current_instruction = 0x8811AB94;
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811AB9C;
	sub_88119390(ctx, base);
loc_8811AB9C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811ABA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x8811ABAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811ABC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,36(r9)
	ctx.current_instruction = 0x8811ABC4;
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// bl 0x88119390
	ctx.lr = 0x8811ABCC;
	sub_88119390(ctx, base);
loc_8811ABCC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811ABD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,105
	ctx.r24.s64 = 105;
	// lwz r10,104(r1)
	ctx.current_instruction = 0x8811ABDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r30,51
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 51, ctx.xer);
	// lwz r9,8(r11)
	ctx.current_instruction = 0x8811ABE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,40(r9)
	ctx.current_instruction = 0x8811ABE8;
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r10.u32);
	// ble cr6,0x8811acb4
	if (!ctx.cr6.gt) goto loc_8811ACB4;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811ABF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r10,r10,-51
	ctx.r10.s64 = ctx.r10.s64 + -51;
	// lwz r8,8(r11)
	ctx.current_instruction = 0x8811AC00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,48(r8)
	ctx.current_instruction = 0x8811AC04;
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r10.u16);
	// lwz r7,88(r1)
	ctx.current_instruction = 0x8811AC08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,224(r25)
	ctx.current_instruction = 0x8811AC0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 224);
	// lwz r11,8(r7)
	ctx.current_instruction = 0x8811AC10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// lhz r5,48(r11)
	ctx.current_instruction = 0x8811AC18;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// bl 0x880cb2c0
	ctx.lr = 0x8811AC20;
	sub_880CB2C0(ctx, base);
loc_8811AC20:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811AC28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x8811AC2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r5,48(r11)
	ctx.current_instruction = 0x8811AC30;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// addi r31,r5,105
	ctx.r31.s64 = ctx.r5.s64 + 105;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x8811a834
	if (ctx.cr6.gt) goto loc_8811A834;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r11)
	ctx.current_instruction = 0x8811AC44;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881198a8
	ctx.lr = 0x8811AC58;
	sub_881198A8(ctx, base);
loc_8811AC58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x8811acb4
	goto loc_8811ACB4;
loc_8811AC68:
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811AC68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,124(r11)
	ctx.current_instruction = 0x8811AC74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x880cb648
	ctx.lr = 0x8811AC7C;
	sub_880CB648(ctx, base);
loc_8811AC7C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811AC84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,36(r11)
	ctx.current_instruction = 0x8811AC88;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,36(r11)
	ctx.current_instruction = 0x8811AC90;
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.current_instruction = 0x8811AC94;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r7)
	ctx.current_instruction = 0x8811AC98;
	REX_STORE_U64(ctx.r7.u32 + 16, ctx.r26.u64);
	// lwz r6,108(r1)
	ctx.current_instruction = 0x8811AC9C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r30,48(r6)
	ctx.current_instruction = 0x8811ACA0;
	REX_STORE_U32(ctx.r6.u32 + 48, ctx.r30.u32);
	// lwz r5,88(r1)
	ctx.current_instruction = 0x8811ACA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,4(r5)
	ctx.current_instruction = 0x8811ACA8;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// lwz r4,88(r1)
	ctx.current_instruction = 0x8811ACAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r4)
	ctx.current_instruction = 0x8811ACB0;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
loc_8811ACB4:
	// lwz r11,4(r25)
	ctx.current_instruction = 0x8811ACB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lhz r10,44(r11)
	ctx.current_instruction = 0x8811ACB8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 44);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,44(r11)
	ctx.current_instruction = 0x8811ACC0;
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r9.u16);
	// lwz r7,92(r1)
	ctx.current_instruction = 0x8811ACC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r6,r7,r23
	ctx.r6.u64 = ctx.r23.u64 - ctx.r7.u64;
	// subf. r31,r24,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8811ad04
	if (ctx.cr0.eq) goto loc_8811AD04;
	// lwz r11,0(r25)
	ctx.current_instruction = 0x8811ACD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811ACE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811ACEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811ACEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ad04
	if (ctx.cr6.lt) goto loc_8811AD04;
	// ld r10,8(r25)
	ctx.current_instruction = 0x8811ACF4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r25.u32 + 8);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r25)
	ctx.current_instruction = 0x8811AD00;
	REX_STORE_U64(ctx.r25.u32 + 8, ctx.r11.u64);
loc_8811AD04:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881347D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881347D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881347D8) {
			switch (rex_dispatch_address) {
				case 0x881347E0:
				case 0x88134814:
				case 0x88134860:
				case 0x8813486C:
				case 0x8813489C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881347D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881347E0: goto loc_881347E0;
		case 0x88134814: goto loc_88134814;
		case 0x88134860: goto loc_88134860;
		case 0x8813486C: goto loc_8813486C;
		case 0x8813489C: goto loc_8813489C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881347E0;
	__savegprlr_22(ctx, base);
loc_881347E0:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881347E0;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.current_instruction = 0x881347E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// beq cr6,0x881349ec
	if (ctx.cr6.eq) goto loc_881349EC;
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x88125e60
	ctx.lr = 0x88134814;
	sub_88125E60(ctx, base);
loc_88134814:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8813482c
	if (!ctx.cr6.eq) goto loc_8813482C;
loc_88134820:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x881349ec
	goto loc_881349EC;
loc_8813482C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r29,r26,-4
	ctx.r29.s64 = ctx.r26.s64 + -4;
	// lis r27,128
	ctx.r27.s64 = 8388608;
	// addi r28,r11,28212
	ctx.r28.s64 = ctx.r11.s64 + 28212;
loc_88134844:
	// rlwinm r4,r31,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0xFFFFE000;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x88134858
	if (!ctx.cr6.eq) goto loc_88134858;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x88134864
	goto loc_88134864;
loc_88134858:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881340b8
	ctx.lr = 0x88134860;
	sub_881340B8(ctx, base);
loc_88134860:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_88134864:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88134628
	ctx.lr = 0x8813486C;
	sub_88134628(ctx, base);
loc_8813486C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r29)
	ctx.current_instruction = 0x88134870;
	ea = 4 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1024, ctx.xer);
	// ble cr6,0x88134844
	if (!ctx.cr6.gt) goto loc_88134844;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x8813487C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,320
	ctx.r10.s64 = 20971520;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88134894
	if (ctx.cr6.lt) goto loc_88134894;
	// lwz r11,4(r26)
	ctx.current_instruction = 0x8813488C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,0(r26)
	ctx.current_instruction = 0x88134890;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_88134894:
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x88125e60
	ctx.lr = 0x8813489C;
	sub_88125E60(ctx, base);
loc_8813489C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88134820
	if (ctx.cr6.eq) goto loc_88134820;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881348BC:
	// lwz r11,0(r8)
	ctx.current_instruction = 0x881348BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.current_instruction = 0x881348C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x881348d0
	if (ctx.cr0.gt) goto loc_881348D0;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_881348D0:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x881348dc
	if (!ctx.cr6.gt) goto loc_881348DC;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_881348DC:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x881348bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881348BC;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x881348f0
	if (ctx.cr6.gt) goto loc_881348F0;
	// li r7,2
	ctx.r7.s64 = 2;
loc_881348F0:
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x88134910
	if (!ctx.cr6.gt) goto loc_88134910;
loc_88134900:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x88134900
	if (ctx.cr6.gt) goto loc_88134900;
loc_88134910:
	// lwz r10,296(r30)
	ctx.current_instruction = 0x88134910;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r11,29
	ctx.xer.ca = ctx.r11.u32 <= 29;
	ctx.r8.u64 = static_cast<uint64_t>(29) - ctx.r11.u64;
	// stwx r8,r9,r10
	ctx.current_instruction = 0x8813491C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r7,296(r30)
	ctx.current_instruction = 0x88134920;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// lwzx r6,r9,r7
	ctx.current_instruction = 0x88134924;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8813493c
	if (!ctx.cr6.gt) goto loc_8813493C;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x88134934;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x88134940
	goto loc_88134940;
loc_8813493C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_88134940:
	// lwz r6,296(r30)
	ctx.current_instruction = 0x88134940;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r10,r26,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r26.u64;
	// stwx r7,r9,r6
	ctx.current_instruction = 0x88134950;
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88134958:
	// lwz r8,296(r30)
	ctx.current_instruction = 0x88134958;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// lwz r7,0(r11)
	ctx.current_instruction = 0x8813495C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.current_instruction = 0x88134960;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// lwzx r4,r9,r8
	ctx.current_instruction = 0x88134968;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// slw r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// srawi r8,r3,13
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 13;
	// stwx r8,r10,r11
	ctx.current_instruction = 0x88134974;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.current_instruction = 0x88134978;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.current_instruction = 0x8813497C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// lwz r6,296(r30)
	ctx.current_instruction = 0x88134988;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// ble cr6,0x881349b8
	if (!ctx.cr6.gt) goto loc_881349B8;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x88134994;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r7,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lwzx r7,r9,r6
	ctx.current_instruction = 0x881349A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// sraw r7,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r7.s64 = ctx.r3.s32 >> temp.u32;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x881349e0
	if (!ctx.cr6.gt) goto loc_881349E0;
	// b 0x881349dc
	goto loc_881349DC;
loc_881349B8:
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x881349B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.current_instruction = 0x881349BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r8,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// subf r3,r8,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lwzx r8,r9,r6
	ctx.current_instruction = 0x881349C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// sraw r8,r3,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r8.s64 = ctx.r3.s32 >> temp.u32;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x881349e0
	if (!ctx.cr6.lt) goto loc_881349E0;
loc_881349DC:
	// stwx r25,r10,r11
	ctx.current_instruction = 0x881349DC;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r25.u32);
loc_881349E0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88134958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88134958;
	// stw r25,4096(r31)
	ctx.current_instruction = 0x881349E8;
	REX_STORE_U32(ctx.r31.u32 + 4096, ctx.r25.u32);
loc_881349EC:
	// lwz r11,268(r30)
	ctx.current_instruction = 0x881349EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 268);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r26,r11,r10
	ctx.current_instruction = 0x881349F8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r9,260(r30)
	ctx.current_instruction = 0x881349FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// stwx r23,r9,r10
	ctx.current_instruction = 0x88134A00;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
	// lwz r8,272(r30)
	ctx.current_instruction = 0x88134A04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// stwx r31,r8,r10
	ctx.current_instruction = 0x88134A08;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r7,264(r30)
	ctx.current_instruction = 0x88134A0C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 264);
	// stwx r24,r7,r10
	ctx.current_instruction = 0x88134A10;
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88139DD8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88139DD8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88139DD8) {
			switch (rex_dispatch_address) {
				case 0x88139DE0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88139DD8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88139DE0: goto loc_88139DE0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x88139DE0;
	__savegprlr_18(ctx, base);
loc_88139DE0:
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// srawi. r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x88139ee4
	if (!ctx.cr0.gt) goto loc_88139EE4;
	// rlwinm r20,r10,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r5,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_88139DFC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x88139ed4
	if (!ctx.cr6.gt) goto loc_88139ED4;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subfic r23,r5,1
	ctx.xer.ca = ctx.r5.u32 <= 1;
	ctx.r23.u64 = static_cast<uint64_t>(1) - ctx.r5.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subfic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 <= 4294967295;
	ctx.r4.u64 = static_cast<uint64_t>(-1) - ctx.r5.u64;
	// subfic r31,r5,-2
	ctx.xer.ca = ctx.r5.u32 <= 4294967294;
	ctx.r31.u64 = static_cast<uint64_t>(-2) - ctx.r5.u64;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r22,r5,-1
	ctx.r22.s64 = ctx.r5.s64 + -1;
	// subfic r21,r5,-3
	ctx.xer.ca = ctx.r5.u32 <= 4294967293;
	ctx.r21.u64 = static_cast<uint64_t>(-3) - ctx.r5.u64;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
loc_88139E3C:
	// lbzx r30,r31,r11
	ctx.current_instruction = 0x88139E3C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r28,r11,r21
	ctx.current_instruction = 0x88139E40;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// lbzx r26,r4,r11
	ctx.current_instruction = 0x88139E44;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r27,r30,r28
	ctx.r27.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lbz r29,-3(r11)
	ctx.current_instruction = 0x88139E4C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r28,-2(r11)
	ctx.current_instruction = 0x88139E50;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbz r25,-1(r11)
	ctx.current_instruction = 0x88139E58;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// add r26,r29,r28
	ctx.r26.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbzu r30,4(r9)
	ctx.current_instruction = 0x88139E60;
	ea = 4 + ctx.r9.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzx r29,r31,r10
	ctx.current_instruction = 0x88139E64;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r28,r4,r10
	ctx.current_instruction = 0x88139E68;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r25,r26,r25
	ctx.r25.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lbzx r26,r23,r10
	ctx.current_instruction = 0x88139E74;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// lbz r24,0(r11)
	ctx.current_instruction = 0x88139E78;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r27,r29,r28
	ctx.r27.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbz r28,-1(r10)
	ctx.current_instruction = 0x88139E80;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lbz r29,-2(r10)
	ctx.current_instruction = 0x88139E88;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r24,r25,r24
	ctx.r24.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbzx r25,r22,r11
	ctx.current_instruction = 0x88139E94;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// lbz r26,1(r10)
	ctx.current_instruction = 0x88139E98;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbz r28,0(r10)
	ctx.current_instruction = 0x88139EA0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 + ctx.r30.u64;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// stbu r30,1(r8)
	ctx.current_instruction = 0x88139ECC;
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r30.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x88139e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88139E3C;
loc_88139ED4:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r3,r18,r3
	ctx.r3.u64 = ctx.r18.u64 + ctx.r3.u64;
	// bne 0x88139dfc
	if (!ctx.cr0.eq) goto loc_88139DFC;
loc_88139EE4:
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813ECA0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8813ECA0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813ECA0;
	ctx.current_instruction = 0x8813ECA0;
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	ctx.current_instruction = 0x8813ECA0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x8813ECA4;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// vspltisb v12,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_set1_epi8(char(0x8)));
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// vspltish v8,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// sth r11,-32(r1)
	ctx.current_instruction = 0x8813ECCC;
	REX_STORE_U16(ctx.r1.u32 + -32, ctx.r11.u16);
	// lwz r11,25768(r10)
	ctx.current_instruction = 0x8813ECD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25768);
	// li r31,32
	ctx.r31.s64 = 32;
	// lwz r10,25760(r9)
	ctx.current_instruction = 0x8813ECD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 25760);
	// vaddubm v29,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vrlh v28,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, result);
	}
	// vspltish v3,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x2)));
	// lwz r9,25776(r8)
	ctx.current_instruction = 0x8813ECE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 25776);
	// vspltish v11,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x8)));
	// lvx128 v9,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v10,15
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0xF)));
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v12,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lvx128 v6,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v9,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_set1_epi16(short(0xF0E))));
	// lvx128 v5,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r31,-17(r1)
	ctx.current_instruction = 0x8813ED0C;
	REX_STORE_U8(ctx.r1.u32 + -17, ctx.r31.u8);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r9,-16
	ctx.r9.s64 = -16;
	// bne cr6,0x8813ee14
	if (!ctx.cr6.eq) goto loc_8813EE14;
	// li r5,48
	ctx.r5.s64 = 48;
loc_8813ED24:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r6,16
	ctx.r6.s64 = 16;
loc_8813ED58:
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v56,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v59,v59,v62,v4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v61,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// vperm128 v58,v57,v61,v4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v60,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v61,v61,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v59,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// vperm128 v2,v59,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v62,v56,v60,v1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v31,v58,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v30,v58,v61,v5
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vaddshs v27,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vperm128 v61,v60,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v26,v62,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v25,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v24,v27,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v23,v61,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v22,v25,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v24,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v20,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v19,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v18,v20,v9
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v17,v19,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v3,v17,v26
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v2,v16,v23
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vsrah v31,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v2,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor v15,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vxor v14,v2,v30
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vsubshs v3,v15,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v2,v14,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vadduhm v31,v12,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v12,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// bdnz 0x8813ed58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813ED58;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8813ed24
	if (!ctx.cr0.eq) goto loc_8813ED24;
	// b 0x8813f0f8
	goto loc_8813F0F8;
loc_8813EE14:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8813ef00
	if (!ctx.cr6.eq) goto loc_8813EF00;
	// li r5,48
	ctx.r5.s64 = 48;
loc_8813EE20:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// lvsl v5,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r6,16
	ctx.r6.s64 = 16;
loc_8813EE54:
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v56,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v59,v59,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v61,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v58,v62,v58,v5
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// vperm128 v57,v57,v61,v5
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v60,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v55,v61,v55,v5
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v59,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// vperm128 v54,v56,v60,v1
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v53,v60,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v4,v57,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v2,v8,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v31,v54,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v30,v53,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v27,v4,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v2,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v25,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v24,v26,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v23,v25,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v22,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v8,v22,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v4,v21,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsrah v2,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor v20,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vxor v19,v4,v31
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vsubshs v18,v20,v2
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v17,v19,v31
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vadduhm v16,v12,v18
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v12,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// bdnz 0x8813ee54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813EE54;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8813ee20
	if (!ctx.cr0.eq) goto loc_8813EE20;
	// b 0x8813f0f8
	goto loc_8813F0F8;
loc_8813EF00:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// li r5,48
	ctx.r5.s64 = 48;
	// bne cr6,0x8813f004
	if (!ctx.cr6.eq) goto loc_8813F004;
loc_8813EF0C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r6,16
	ctx.r6.s64 = 16;
loc_8813EF40:
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v56,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v59,v59,v62,v4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v61,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// vperm128 v58,v57,v61,v4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v60,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v61,v61,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v59,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// vperm128 v31,v59,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v52,v56,v60,v1
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v2,v58,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v30,v8,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v27,v58,v61,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsubshs v26,v31,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vperm128 v51,v60,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v25,v52,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v24,v2,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v27,v2
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v22,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vperm128 v21,v51,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v20,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v19,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v18,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v17,v19,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v16,v18,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v15,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v16,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v8,v15,v25
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v2,v14,v21
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsrah v31,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v2,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor v8,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vxor v2,v2,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vsubshs v31,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v30,v2,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vadduhm v27,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v12,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// bdnz 0x8813ef40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813EF40;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8813ef0c
	if (!ctx.cr0.eq) goto loc_8813EF0C;
	// b 0x8813f0f8
	goto loc_8813F0F8;
loc_8813F004:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r8,-32
	ctx.r8.s64 = -32;
	// li r6,16
	ctx.r6.s64 = 16;
loc_8813F038:
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v56,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v59,v59,v62,v4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v61,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// vperm128 v58,v57,v61,v4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v60,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v61,v61,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v59,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// vperm128 v31,v59,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v50,v56,v60,v1
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v2,v58,v61,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v30,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v27,v58,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vaddshs v26,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vperm128 v49,v60,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v25,v50,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v24,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v23,v2,v27
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vaddshs v22,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vperm128 v21,v49,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v20,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v19,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v18,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v17,v19,v9
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v16,v18,v9
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v15,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v16,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v3,v15,v25
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v2,v14,v21
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsrah v31,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v2,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor v3,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vxor v2,v2,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// vsubshs v31,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v30,v2,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vadduhm v27,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v12,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// bdnz 0x8813f038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813F038;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8813f004
	if (!ctx.cr0.eq) goto loc_8813F004;
loc_8813F0F8:
	// vslo v0,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_vslo(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lis r8,-30679
	ctx.r8.s64 = -2010578944;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r5,-30678
	ctx.r5.s64 = -2010513408;
	// vadduhm v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lvx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lfs f13,-28372(r8)
	ctx.current_instruction = 0x8813F11C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -28372);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6708(r6)
	ctx.current_instruction = 0x8813F120;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// vslo128 v13,v0,v48
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_vslo(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lfs f12,-11700(r5)
	ctx.current_instruction = 0x8813F128;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -11700);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,-28372(r8)
	ctx.current_instruction = 0x8813F130;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + -28372, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,-11700(r5)
	ctx.current_instruction = 0x8813F138;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + -11700, temp.u32);
	// vadduhm v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslo v12,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_vslo(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// stvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r3,-32(r1)
	ctx.current_instruction = 0x8813F150;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + -32);
	// stw r3,0(r7)
	ctx.current_instruction = 0x8813F154;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8813F158;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8813F15C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881505C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881505C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881505C8) {
			switch (rex_dispatch_address) {
				case 0x881505D0:
				case 0x88150614:
				case 0x8815062C:
				case 0x881506A4:
				case 0x88150760:
				case 0x881508B4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881505C8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881505D0: goto loc_881505D0;
		case 0x88150614: goto loc_88150614;
		case 0x8815062C: goto loc_8815062C;
		case 0x881506A4: goto loc_881506A4;
		case 0x88150760: goto loc_88150760;
		case 0x881508B4: goto loc_881508B4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881505D0;
	__savegprlr_29(ctx, base);
loc_881505D0:
	// stfd f31,-40(r1)
	ctx.current_instruction = 0x881505D0;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881505D4;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,-1
	ctx.r29.s64 = -1;
	// std r30,20448(r3)
	ctx.current_instruction = 0x881505E4;
	REX_STORE_U64(ctx.r3.u32 + 20448, ctx.r30.u64);
	// std r30,20456(r3)
	ctx.current_instruction = 0x881505E8;
	REX_STORE_U64(ctx.r3.u32 + 20456, ctx.r30.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20428(r3)
	ctx.current_instruction = 0x881505F0;
	REX_STORE_U32(ctx.r3.u32 + 20428, ctx.r11.u32);
	// stw r30,20472(r3)
	ctx.current_instruction = 0x881505F4;
	REX_STORE_U32(ctx.r3.u32 + 20472, ctx.r30.u32);
	// stw r30,20476(r3)
	ctx.current_instruction = 0x881505F8;
	REX_STORE_U32(ctx.r3.u32 + 20476, ctx.r30.u32);
	// stw r30,20528(r3)
	ctx.current_instruction = 0x881505FC;
	REX_STORE_U32(ctx.r3.u32 + 20528, ctx.r30.u32);
	// stw r30,3460(r3)
	ctx.current_instruction = 0x88150600;
	REX_STORE_U32(ctx.r3.u32 + 3460, ctx.r30.u32);
	// stw r30,20532(r3)
	ctx.current_instruction = 0x88150604;
	REX_STORE_U32(ctx.r3.u32 + 20532, ctx.r30.u32);
	// std r30,80(r1)
	ctx.current_instruction = 0x88150608;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,20628(r3)
	ctx.current_instruction = 0x8815060C;
	REX_STORE_U32(ctx.r3.u32 + 20628, ctx.r29.u32);
	// bl 0x881ed218
	ctx.lr = 0x88150614;
	sub_881ED218(ctx, base);
loc_88150614:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-150
	ctx.r10.s64 = ctx.r11.s64 + -150;
	// stw r11,20640(r31)
	ctx.current_instruction = 0x88150620;
	REX_STORE_U32(ctx.r31.u32 + 20640, ctx.r11.u32);
	// stw r10,20636(r31)
	ctx.current_instruction = 0x88150624;
	REX_STORE_U32(ctx.r31.u32 + 20636, ctx.r10.u32);
	// bl 0x881ec8d0
	ctx.lr = 0x8815062C;
	sub_881EC8D0(ctx, base);
loc_8815062C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88150638
	if (!ctx.cr6.eq) goto loc_88150638;
	// stw r30,20428(r31)
	ctx.current_instruction = 0x88150634;
	REX_STORE_U32(ctx.r31.u32 + 20428, ctx.r30.u32);
loc_88150638:
	// ld r10,80(r1)
	ctx.current_instruction = 0x88150638;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r8,1000
	ctx.r8.s64 = 1000;
	// lwz r11,3712(r31)
	ctx.current_instruction = 0x88150640;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3712);
	// divd r9,r10,r8
	ctx.r9.s64 = (ctx.r8.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r10.s64 / ctx.r8.s64 : 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,20632(r31)
	ctx.current_instruction = 0x8815064C;
	REX_STORE_U32(ctx.r31.u32 + 20632, ctx.r9.u32);
	// bgt cr6,0x88150658
	if (ctx.cr6.gt) goto loc_88150658;
	// li r11,30
	ctx.r11.s64 = 30;
loc_88150658:
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotldi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// divw. r3,r8,r11
	ctx.r3.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r3,20524(r31)
	ctx.current_instruction = 0x88150670;
	REX_STORE_U32(ctx.r31.u32 + 20524, ctx.r3.u32);
	// divd r4,r10,r6
	ctx.r4.s64 = (ctx.r6.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r6.s64 == -1)) ? ctx.r10.s64 / ctx.r6.s64 : 0;
	// andc r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// tdllei r6,0
	if (ctx.r6.s64 == 0ll || ctx.r6.u64 < 0ull) ppc_trap(ctx, base, 0);
	// stw r4,20536(r31)
	ctx.current_instruction = 0x88150680;
	REX_STORE_U32(ctx.r31.u32 + 20536, ctx.r4.u32);
	// tdlgei r11,-1
	if (ctx.r11.s64 == -1ll || ctx.r11.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// bgt 0x88150694
	if (ctx.cr0.gt) goto loc_88150694;
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r11,20524(r31)
	ctx.current_instruction = 0x88150690;
	REX_STORE_U32(ctx.r31.u32 + 20524, ctx.r11.u32);
loc_88150694:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8817d628
	ctx.lr = 0x881506A4;
	sub_8817D628(ctx, base);
loc_881506A4:
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// blt cr6,0x881506b4
	if (ctx.cr6.lt) goto loc_881506B4;
	// cmpwi cr6,r3,32000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32000, ctx.xer);
	// ble cr6,0x881506b8
	if (!ctx.cr6.gt) goto loc_881506B8;
loc_881506B4:
	// li r3,100
	ctx.r3.s64 = 100;
loc_881506B8:
	// lwz r11,20632(r31)
	ctx.current_instruction = 0x881506B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20632);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,180(r31)
	ctx.current_instruction = 0x881506C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r10,88(r1)
	ctx.current_instruction = 0x881506CC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x881506D0;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,88(r1)
	ctx.current_instruction = 0x881506D8;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.current_instruction = 0x881506DC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	ctx.current_instruction = 0x881506E0;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.current_instruction = 0x881506E4;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lwz r5,188(r31)
	ctx.current_instruction = 0x881506EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lis r4,-30719
	ctx.r4.s64 = -2013200384;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// lfs f0,18164(r8)
	ctx.current_instruction = 0x88150700;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 18164);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// std r3,88(r1)
	ctx.current_instruction = 0x88150708;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f7,88(r1)
	ctx.current_instruction = 0x8815070C;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// lfs f13,18160(r4)
	ctx.current_instruction = 0x8815071C;
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 18160);
	ctx.f13.f64 = double(temp.f32);
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// lfs f12,18156(r11)
	ctx.current_instruction = 0x88150724;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 18156);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f3,f12,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,5
	ctx.r3.s64 = 5;
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f0,18152(r10)
	ctx.current_instruction = 0x88150744;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 18152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f31,f10,f12
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// bl 0x8817d628
	ctx.lr = 0x88150760;
	sub_8817D628(ctx, base);
loc_88150760:
	// stw r29,20440(r31)
	ctx.current_instruction = 0x88150760;
	REX_STORE_U32(ctx.r31.u32 + 20440, ctx.r29.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,20436(r31)
	ctx.current_instruction = 0x88150768;
	REX_STORE_U32(ctx.r31.u32 + 20436, ctx.r3.u32);
	// bne cr6,0x88150778
	if (!ctx.cr6.eq) goto loc_88150778;
	// stw r30,20428(r31)
	ctx.current_instruction = 0x88150770;
	REX_STORE_U32(ctx.r31.u32 + 20428, ctx.r30.u32);
	// b 0x881507c4
	goto loc_881507C4;
loc_88150778:
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// ble cr6,0x881507c4
	if (!ctx.cr6.gt) goto loc_881507C4;
	// lwz r10,20536(r31)
	ctx.current_instruction = 0x88150780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// lis r9,-30719
	ctx.r9.s64 = -2013200384;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// std r7,88(r1)
	ctx.current_instruction = 0x88150794;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.current_instruction = 0x88150798;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	ctx.current_instruction = 0x8815079C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.current_instruction = 0x881507A0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,18144(r9)
	ctx.current_instruction = 0x881507A4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 18144);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fmul f9,f10,f0
	ctx.f9.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// li r12,20536
	ctx.r12.s64 = 20536;
	// stfiwx f7,r31,r12
	ctx.current_instruction = 0x881507C0;
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f7.u32);
loc_881507C4:
	// lwz r11,20536(r31)
	ctx.current_instruction = 0x881507C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// li r9,20540
	ctx.r9.s64 = 20540;
	// stw r30,20516(r31)
	ctx.current_instruction = 0x881507D0;
	REX_STORE_U32(ctx.r31.u32 + 20516, ctx.r30.u32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,88(r1)
	ctx.current_instruction = 0x881507D8;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x881507DC;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,12144(r10)
	ctx.current_instruction = 0x881507E4;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12144);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r9
	ctx.current_instruction = 0x881507F0;
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f11.u32);
loc_881507F4:
	// lwz r11,20516(r31)
	ctx.current_instruction = 0x881507F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20516);
	// lwz r10,20536(r31)
	ctx.current_instruction = 0x881507F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// addi r9,r11,5120
	ctx.r9.s64 = ctx.r11.s64 + 5120;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	ctx.current_instruction = 0x88150804;
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,20516(r31)
	ctx.current_instruction = 0x88150808;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20516);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,20516(r31)
	ctx.current_instruction = 0x88150814;
	REX_STORE_U32(ctx.r31.u32 + 20516, ctx.r7.u32);
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x881507f4
	if (ctx.cr6.lt) goto loc_881507F4;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,20536(r31)
	ctx.current_instruction = 0x88150824;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20536);
	// stw r30,20516(r31)
	ctx.current_instruction = 0x88150828;
	REX_STORE_U32(ctx.r31.u32 + 20516, ctx.r30.u32);
	// addi r11,r31,20608
	ctx.r11.s64 = ctx.r31.s64 + 20608;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,20560
	ctx.r9.s64 = ctx.r31.s64 + 20560;
	// stw r8,20512(r31)
	ctx.current_instruction = 0x88150838;
	REX_STORE_U32(ctx.r31.u32 + 20512, ctx.r8.u32);
	// subfic r8,r31,-20608
	ctx.xer.ca = ctx.r31.u32 <= 4294946688;
	ctx.r8.u64 = static_cast<uint64_t>(-20608) - ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// li r7,-64
	ctx.r7.s64 = -64;
	// addi r6,r10,18056
	ctx.r6.s64 = ctx.r10.s64 + 18056;
loc_88150850:
	// lwz r10,3980(r31)
	ctx.current_instruction = 0x88150850;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3980);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r6,20
	ctx.r10.s64 = ctx.r6.s64 + 20;
	// bne cr6,0x88150864
	if (!ctx.cr6.eq) goto loc_88150864;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_88150864:
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r4,r5,r10
	ctx.current_instruction = 0x88150868;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,88(r1)
	ctx.current_instruction = 0x88150870;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x88150874;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r11,r7
	ctx.current_instruction = 0x88150888;
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.f10.u32);
	// stdu r30,8(r9)
	ctx.current_instruction = 0x8815088C;
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r30.u64);
	ctx.r9.u32 = ea;
	// stw r30,0(r11)
	ctx.current_instruction = 0x88150890;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88150850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88150850;
	// lwz r11,20560(r31)
	ctx.current_instruction = 0x8815089C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,188(r31)
	ctx.current_instruction = 0x881508A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,180(r31)
	ctx.current_instruction = 0x881508A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// stw r11,20564(r31)
	ctx.current_instruction = 0x881508AC;
	REX_STORE_U32(ctx.r31.u32 + 20564, ctx.r11.u32);
	// bl 0x8817d630
	ctx.lr = 0x881508B4;
	sub_8817D630(ctx, base);
loc_881508B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.current_instruction = 0x881508B8;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815D000) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815D000;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815D000) {
			switch (rex_dispatch_address) {
				case 0x8815D008:
				case 0x8815D038:
				case 0x8815D060:
				case 0x8815D074:
				case 0x8815D07C:
				case 0x8815D098:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815D000;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815D008: goto loc_8815D008;
		case 0x8815D038: goto loc_8815D038;
		case 0x8815D060: goto loc_8815D060;
		case 0x8815D074: goto loc_8815D074;
		case 0x8815D07C: goto loc_8815D07C;
		case 0x8815D098: goto loc_8815D098;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8815D008;
	__savegprlr_27(ctx, base);
loc_8815D008:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8815D008;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.current_instruction = 0x8815D00C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8815D014;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8815d084
	if (!ctx.cr6.eq) goto loc_8815D084;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88052e38
	ctx.lr = 0x8815D038;
	sub_88052E38(ctx, base);
loc_8815D038:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8815d050
	if (!ctx.cr6.eq) goto loc_8815D050;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8815D050:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88052d90
	ctx.lr = 0x8815D060;
	sub_88052D90(ctx, base);
loc_8815D060:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x8815D060;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.current_instruction = 0x8815D068;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x880547a0
	ctx.lr = 0x8815D074;
	sub_880547A0(ctx, base);
loc_8815D074:
	// lwz r3,0(r31)
	ctx.current_instruction = 0x8815D074;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x88052278
	ctx.lr = 0x8815D07C;
	sub_88052278(ctx, base);
loc_8815D07C:
	// stw r30,0(r31)
	ctx.current_instruction = 0x8815D07C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,4(r31)
	ctx.current_instruction = 0x8815D080;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8815D084:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x8815D084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x8815D088;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8815d098
	if (ctx.cr6.lt) goto loc_8815D098;
	// bl 0x881ed228
	ctx.lr = 0x8815D098;
	sub_881ED228(ctx, base);
loc_8815D098:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x8815D098;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.current_instruction = 0x8815D09C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r10
	ctx.current_instruction = 0x8815D0A4;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r3,8(r31)
	ctx.current_instruction = 0x8815D0A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// stw r8,8(r31)
	ctx.current_instruction = 0x8815D0B0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815E528) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8815E528);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815E528;
	ctx.current_instruction = 0x8815E528;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8815ba70
	sub_8815BA70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815E660) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8815E660);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815E660;
	ctx.current_instruction = 0x8815E660;
	// lwz r11,456(r3)
	ctx.current_instruction = 0x8815E660;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8815e678
	if (!ctx.cr6.eq) goto loc_8815E678;
	// lwz r11,3148(r3)
	ctx.current_instruction = 0x8815E66C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3148);
	// lwz r10,3152(r3)
	ctx.current_instruction = 0x8815E670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3152);
	// b 0x8815e6a4
	goto loc_8815E6A4;
loc_8815E678:
	// lwz r11,3956(r3)
	ctx.current_instruction = 0x8815E678;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815e6ac
	if (ctx.cr6.eq) goto loc_8815E6AC;
	// lwz r11,3960(r3)
	ctx.current_instruction = 0x8815E684;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3960);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815e69c
	if (ctx.cr6.eq) goto loc_8815E69C;
	// lwz r11,3128(r3)
	ctx.current_instruction = 0x8815E690;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3128);
	// lwz r10,3124(r3)
	ctx.current_instruction = 0x8815E694;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3124);
	// b 0x8815e6a4
	goto loc_8815E6A4;
loc_8815E69C:
	// lwz r11,3136(r3)
	ctx.current_instruction = 0x8815E69C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3136);
	// lwz r10,3132(r3)
	ctx.current_instruction = 0x8815E6A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3132);
loc_8815E6A4:
	// stw r11,3120(r3)
	ctx.current_instruction = 0x8815E6A4;
	REX_STORE_U32(ctx.r3.u32 + 3120, ctx.r11.u32);
	// stw r10,3116(r3)
	ctx.current_instruction = 0x8815E6A8;
	REX_STORE_U32(ctx.r3.u32 + 3116, ctx.r10.u32);
loc_8815E6AC:
	// lwz r11,3956(r3)
	ctx.current_instruction = 0x8815E6AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,3960(r3)
	ctx.current_instruction = 0x8815E6B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3960);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815e6d8
	if (ctx.cr6.eq) goto loc_8815E6D8;
	// lwz r11,3128(r3)
	ctx.current_instruction = 0x8815E6C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3128);
	// lwz r10,3124(r3)
	ctx.current_instruction = 0x8815E6C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3124);
	// stw r11,3140(r3)
	ctx.current_instruction = 0x8815E6CC;
	REX_STORE_U32(ctx.r3.u32 + 3140, ctx.r11.u32);
	// stw r10,3144(r3)
	ctx.current_instruction = 0x8815E6D0;
	REX_STORE_U32(ctx.r3.u32 + 3144, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8815E6D8:
	// lwz r11,3136(r3)
	ctx.current_instruction = 0x8815E6D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3136);
	// lwz r10,3132(r3)
	ctx.current_instruction = 0x8815E6DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3132);
	// stw r11,3140(r3)
	ctx.current_instruction = 0x8815E6E0;
	REX_STORE_U32(ctx.r3.u32 + 3140, ctx.r11.u32);
	// stw r10,3144(r3)
	ctx.current_instruction = 0x8815E6E4;
	REX_STORE_U32(ctx.r3.u32 + 3144, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88161458) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88161458;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88161458) {
			switch (rex_dispatch_address) {
				case 0x88161460:
				case 0x881614D0:
				case 0x88161518:
				case 0x8816157C:
				case 0x881615C4:
				case 0x88161630:
				case 0x88161664:
				case 0x881616DC:
				case 0x88161724:
				case 0x8816178C:
				case 0x881617D4:
				case 0x8816183C:
				case 0x88161884:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88161458;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88161460: goto loc_88161460;
		case 0x881614D0: goto loc_881614D0;
		case 0x88161518: goto loc_88161518;
		case 0x8816157C: goto loc_8816157C;
		case 0x881615C4: goto loc_881615C4;
		case 0x88161630: goto loc_88161630;
		case 0x88161664: goto loc_88161664;
		case 0x881616DC: goto loc_881616DC;
		case 0x88161724: goto loc_88161724;
		case 0x8816178C: goto loc_8816178C;
		case 0x881617D4: goto loc_881617D4;
		case 0x8816183C: goto loc_8816183C;
		case 0x88161884: goto loc_88161884;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88161460;
	__savegprlr_26(ctx, base);
loc_88161460:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88161460;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x88161464;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,11
	ctx.r30.s64 = 11;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88161478;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x881614e0
	if (!ctx.cr6.lt) goto loc_881614E0;
loc_88161488:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881614e0
	if (ctx.cr6.eq) goto loc_881614E0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88161494;
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
	ctx.current_instruction = 0x881614B8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881614C0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881614d0
	if (!ctx.cr0.lt) goto loc_881614D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881614D0;
	sub_88156678(ctx, base);
loc_881614D0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881614D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88161488
	if (ctx.cr6.gt) goto loc_88161488;
loc_881614E0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881614E4;
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
	ctx.current_instruction = 0x881614FC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88161508;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88161518
	if (!ctx.cr0.lt) goto loc_88161518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88161518;
	sub_88156678(ctx, base);
loc_88161518:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x88161518;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,11
	ctx.r30.s64 = 11;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88161524;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x8816158c
	if (!ctx.cr6.lt) goto loc_8816158C;
loc_88161534:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816158c
	if (ctx.cr6.eq) goto loc_8816158C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88161540;
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
	ctx.current_instruction = 0x88161564;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816156C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816157c
	if (!ctx.cr0.lt) goto loc_8816157C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816157C;
	sub_88156678(ctx, base);
loc_8816157C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816157C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88161534
	if (ctx.cr6.gt) goto loc_88161534;
loc_8816158C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88161590;
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
	ctx.current_instruction = 0x881615A8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881615B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881615c4
	if (!ctx.cr0.lt) goto loc_881615C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881615C4;
	sub_88156678(ctx, base);
loc_881615C4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881615d4
	if (ctx.cr6.eq) goto loc_881615D4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x881615e0
	if (!ctx.cr6.eq) goto loc_881615E0;
loc_881615D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881615E0:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881615E0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// stw r28,156(r27)
	ctx.current_instruction = 0x881615E8;
	REX_STORE_U32(ctx.r27.u32 + 156, ctx.r28.u32);
	// stw r29,160(r27)
	ctx.current_instruction = 0x881615EC;
	REX_STORE_U32(ctx.r27.u32 + 160, ctx.r29.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881615F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x88161640
	if (!ctx.cr6.lt) goto loc_88161640;
loc_88161600:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88161640
	if (ctx.cr6.eq) goto loc_88161640;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88161608;
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
	ctx.current_instruction = 0x8816161C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88161620;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x88161630
	if (!ctx.cr0.lt) goto loc_88161630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88161630;
	sub_88156678(ctx, base);
loc_88161630:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88161630;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88161600
	if (ctx.cr6.gt) goto loc_88161600;
loc_88161640:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88161640;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x88161650;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x88161654;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x88161664
	if (!ctx.cr0.lt) goto loc_88161664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88161664;
	sub_88156678(ctx, base);
loc_88161664:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x88161664;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,3944(r27)
	ctx.current_instruction = 0x8816166C;
	REX_STORE_U32(ctx.r27.u32 + 3944, ctx.r26.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,3956(r27)
	ctx.current_instruction = 0x88161674;
	REX_STORE_U32(ctx.r27.u32 + 3956, ctx.r11.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r26,440(r27)
	ctx.current_instruction = 0x8816167C;
	REX_STORE_U32(ctx.r27.u32 + 440, ctx.r26.u32);
	// stw r26,3948(r27)
	ctx.current_instruction = 0x88161680;
	REX_STORE_U32(ctx.r27.u32 + 3948, ctx.r26.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88161684;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881616ec
	if (!ctx.cr6.lt) goto loc_881616EC;
loc_88161694:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881616ec
	if (ctx.cr6.eq) goto loc_881616EC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881616A0;
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
	ctx.current_instruction = 0x881616C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881616CC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881616dc
	if (!ctx.cr0.lt) goto loc_881616DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881616DC;
	sub_88156678(ctx, base);
loc_881616DC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881616DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88161694
	if (ctx.cr6.gt) goto loc_88161694;
loc_881616EC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881616F0;
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
	ctx.current_instruction = 0x88161708;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88161714;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88161724
	if (!ctx.cr0.lt) goto loc_88161724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88161724;
	sub_88156678(ctx, base);
loc_88161724:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x88161724;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,3940(r27)
	ctx.current_instruction = 0x8816172C;
	REX_STORE_U32(ctx.r27.u32 + 3940, ctx.r29.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88161734;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8816179c
	if (!ctx.cr6.lt) goto loc_8816179C;
loc_88161744:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816179c
	if (ctx.cr6.eq) goto loc_8816179C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88161750;
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
	ctx.current_instruction = 0x88161774;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816177C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816178c
	if (!ctx.cr0.lt) goto loc_8816178C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816178C;
	sub_88156678(ctx, base);
loc_8816178C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816178C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88161744
	if (ctx.cr6.gt) goto loc_88161744;
loc_8816179C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881617A0;
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
	ctx.current_instruction = 0x881617B8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881617C4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881617d4
	if (!ctx.cr0.lt) goto loc_881617D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881617D4;
	sub_88156678(ctx, base);
loc_881617D4:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881617D4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r29,400(r27)
	ctx.current_instruction = 0x881617DC;
	REX_STORE_U32(ctx.r27.u32 + 400, ctx.r29.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881617E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8816184c
	if (!ctx.cr6.lt) goto loc_8816184C;
loc_881617F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816184c
	if (ctx.cr6.eq) goto loc_8816184C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88161800;
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
	ctx.current_instruction = 0x88161824;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816182C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816183c
	if (!ctx.cr0.lt) goto loc_8816183C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816183C;
	sub_88156678(ctx, base);
loc_8816183C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816183C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881617f4
	if (ctx.cr6.gt) goto loc_881617F4;
loc_8816184C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88161850;
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
	ctx.current_instruction = 0x88161868;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88161874;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88161884
	if (!ctx.cr0.lt) goto loc_88161884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88161884;
	sub_88156678(ctx, base);
loc_88161884:
	// stw r30,15528(r27)
	ctx.current_instruction = 0x88161884;
	REX_STORE_U32(ctx.r27.u32 + 15528, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88176AE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88176AE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88176AE8) {
			switch (rex_dispatch_address) {
				case 0x88176AF0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88176AE8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88176AF0: goto loc_88176AF0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88176AF0;
	__savegprlr_28(ctx, base);
loc_88176AF0:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// vspltisb v0,-1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xFF)));
	// srawi. r10,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r8,r11,128
	ctx.r8.u64 = ctx.r11.u64 | 128;
	// rlwinm r7,r10,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r8,-64(r1)
	ctx.current_instruction = 0x88176B0C;
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// vmrghb v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r28,r7,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r7.u64;
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// ble 0x88176cc0
	if (!ctx.cr0.gt) goto loc_88176CC0;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r8,r5,32
	ctx.r8.s64 = ctx.r5.s64 + 32;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_88176B3C:
	// lvrx128 v62,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r10,-16
	ctx.r7.s64 = ctx.r10.s64 + -16;
	// lvlx128 v61,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r9,-16
	ctx.r6.s64 = ctx.r9.s64 + -16;
	// lvrx128 v60,r29,r4
	temp.u32 = ctx.r29.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v59,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v58,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r10,16
	ctx.r31.s64 = ctx.r10.s64 + 16;
	// vor128 v57,v58,v60
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// addi r30,r9,16
	ctx.r30.s64 = ctx.r9.s64 + 16;
	// lvlx128 v56,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// vupklsb128 v55,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v59.s16)));
	// lvlx128 v54,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v53,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v59.s8), simde_mm_load_si128((simde__m128i*)ctx.v59.s8))));
	// lvrx128 v52,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vupklsb128 v51,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v57.s16)));
	// lvrx128 v50,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vupkhsb128 v49,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v57.s8), simde_mm_load_si128((simde__m128i*)ctx.v57.s8))));
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v46,v56,v52
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v45,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v42,v54,v50
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v43,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v44,v48,v47
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vor128 v41,v43,v45
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// lvlx128 v40,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vand128 v12,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v39,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vand128 v11,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v38,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vand128 v10,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v37,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vand128 v9,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupklsb128 v36,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v46.s16)));
	// vor128 v35,v37,v38
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vupkhsb128 v34,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v46.s8), simde_mm_load_si128((simde__m128i*)ctx.v46.s8))));
	// vor128 v33,v40,v39
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vupklsb128 v32,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v44.s16)));
	// vupkhsb128 v63,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v44.s8), simde_mm_load_si128((simde__m128i*)ctx.v44.s8))));
	// vaddshs v8,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vupklsb128 v62,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vaddshs v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vupkhsb128 v61,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v42.s8), simde_mm_load_si128((simde__m128i*)ctx.v42.s8))));
	// vand128 v6,v36,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupklsb128 v60,v41,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v41.s16)));
	// vand128 v5,v34,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupkhsb128 v59,v41,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v41.s8), simde_mm_load_si128((simde__m128i*)ctx.v41.s8))));
	// vand128 v4,v32,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v3,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupklsb128 v58,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v35.s16)));
	// vand128 v2,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupklsb128 v57,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi8_epi16(simde_mm_load_si128((simde__m128i*)ctx.v33.s16)));
	// vand128 v1,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupkhsb128 v56,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v35.s8), simde_mm_load_si128((simde__m128i*)ctx.v35.s8))));
	// vand128 v31,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupkhsb128 v55,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s16, simde_mm_cvtepi8_epi16(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v33.s8), simde_mm_load_si128((simde__m128i*)ctx.v33.s8))));
	// vand128 v30,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r8,-16
	ctx.r7.s64 = ctx.r8.s64 + -16;
	// vsubshs v29,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// vsubshs v28,v7,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v27,v6,v2
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v26,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v4,v31
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v24,v3,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vpkshus128 v54,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vand128 v23,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v22,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v21,v27,v13
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v20,v26,v13
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v19,v25,v13
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v18,v24,v13
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v17,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvlx128 v54,r0,r5
	ctx.current_instruction = 0x88176C68;
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// vpkshus128 v53,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vand128 v16,v56,v0
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v15,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vpkshus128 v52,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v14,v17,v13
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v12,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// stvrx128 v54,r5,r11
	ctx.current_instruction = 0x88176C84;
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// stvlx128 v53,r0,r7
	ctx.current_instruction = 0x88176C88;
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvrx128 v53,r7,r11
	ctx.current_instruction = 0x88176C90;
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v53.u8[i]);
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// stvlx128 v52,r0,r8
	ctx.current_instruction = 0x88176C98;
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// vsubshs v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvrx128 v52,r8,r11
	ctx.current_instruction = 0x88176CA4;
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// vpkshus128 v51,v11,v14
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvlx128 v51,r0,r6
	ctx.current_instruction = 0x88176CB4;
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvrx128 v51,r6,r11
	ctx.current_instruction = 0x88176CB8;
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// bdnz 0x88176b3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176B3C;
loc_88176CC0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x88176d10
	if (!ctx.cr6.gt) goto loc_88176D10;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// subf r8,r4,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_88176CD4:
	// lbzx r10,r9,r4
	ctx.current_instruction = 0x88176CD4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbz r11,0(r4)
	ctx.current_instruction = 0x88176CD8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x88176cf4
	if (!ctx.cr6.gt) goto loc_88176CF4;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x88176d00
	goto loc_88176D00;
loc_88176CF4:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_88176D00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r8,r4
	ctx.current_instruction = 0x88176D04;
	REX_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x88176cd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88176CD4;
loc_88176D10:
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817CFB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817CFB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817CFB8) {
			switch (rex_dispatch_address) {
				case 0x8817CFC0:
				case 0x8817D14C:
				case 0x8817D170:
				case 0x8817D200:
				case 0x8817D224:
				case 0x8817D2A8:
				case 0x8817D2CC:
				case 0x8817D3A4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817CFB8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8817CFC0: goto loc_8817CFC0;
		case 0x8817D14C: goto loc_8817D14C;
		case 0x8817D170: goto loc_8817D170;
		case 0x8817D200: goto loc_8817D200;
		case 0x8817D224: goto loc_8817D224;
		case 0x8817D2A8: goto loc_8817D2A8;
		case 0x8817D2CC: goto loc_8817D2CC;
		case 0x8817D3A4: goto loc_8817D3A4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8817CFC0;
	__savegprlr_14(ctx, base);
loc_8817CFC0:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x8817CFC0;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,284(r1)
	ctx.current_instruction = 0x8817CFC4;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,224(r3)
	ctx.current_instruction = 0x8817CFCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r9,3776(r3)
	ctx.current_instruction = 0x8817CFD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// lwz r8,3780(r3)
	ctx.current_instruction = 0x8817CFDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// lwz r7,3784(r3)
	ctx.current_instruction = 0x8817CFE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// lwz r6,15964(r3)
	ctx.current_instruction = 0x8817CFE4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 15964);
	// add r19,r8,r11
	ctx.r19.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,220(r3)
	ctx.current_instruction = 0x8817CFEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// add r15,r7,r11
	ctx.r15.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r24,r9,r10
	ctx.r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x8817d0a0
	if (ctx.cr6.eq) goto loc_8817D0A0;
	// lwz r11,20416(r3)
	ctx.current_instruction = 0x8817D000;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817d0a0
	if (!ctx.cr6.eq) goto loc_8817D0A0;
	// lwz r10,3760(r3)
	ctx.current_instruction = 0x8817D00C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3760);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,592(r10)
	ctx.current_instruction = 0x8817D014;
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
	ctx.current_instruction = 0x8817D028;
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// stw r8,48(r11)
	ctx.current_instruction = 0x8817D02C;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3744(r3)
	ctx.current_instruction = 0x8817D030;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// stw r6,52(r11)
	ctx.current_instruction = 0x8817D034;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,200(r3)
	ctx.current_instruction = 0x8817D038;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// stw r5,80(r11)
	ctx.current_instruction = 0x8817D03C;
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// lwz r4,204(r3)
	ctx.current_instruction = 0x8817D040;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// stw r4,56(r11)
	ctx.current_instruction = 0x8817D044;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// lwz r3,208(r3)
	ctx.current_instruction = 0x8817D048;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// stw r3,60(r11)
	ctx.current_instruction = 0x8817D04C;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r10,220(r31)
	ctx.current_instruction = 0x8817D050;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// stw r10,64(r11)
	ctx.current_instruction = 0x8817D054;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r9,224(r31)
	ctx.current_instruction = 0x8817D058;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// stw r9,68(r11)
	ctx.current_instruction = 0x8817D05C;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// lwz r8,136(r31)
	ctx.current_instruction = 0x8817D060;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// stw r8,72(r11)
	ctx.current_instruction = 0x8817D064;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
	// lwz r7,140(r31)
	ctx.current_instruction = 0x8817D068;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r7,76(r11)
	ctx.current_instruction = 0x8817D06C;
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r7.u32);
	// lwz r6,248(r31)
	ctx.current_instruction = 0x8817D070;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// stw r6,84(r11)
	ctx.current_instruction = 0x8817D074;
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// lwz r5,228(r31)
	ctx.current_instruction = 0x8817D078;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// stw r5,88(r11)
	ctx.current_instruction = 0x8817D07C;
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r5.u32);
	// lwz r4,232(r31)
	ctx.current_instruction = 0x8817D080;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// stw r4,92(r11)
	ctx.current_instruction = 0x8817D084;
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// lwz r3,15576(r31)
	ctx.current_instruction = 0x8817D088;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15576);
	// stw r3,96(r11)
	ctx.current_instruction = 0x8817D08C;
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// stw r18,100(r11)
	ctx.current_instruction = 0x8817D090;
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r18.u32);
	// stw r16,104(r11)
	ctx.current_instruction = 0x8817D094;
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r16.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8817D0A0:
	// lwz r11,3744(r31)
	ctx.current_instruction = 0x8817D0A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// lwz r10,3760(r31)
	ctx.current_instruction = 0x8817D0A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// cmplw cr6,r18,r16
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r16.u32, ctx.xer);
	// lwz r9,616(r11)
	ctx.current_instruction = 0x8817D0B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// stw r9,616(r10)
	ctx.current_instruction = 0x8817D0B4;
	REX_STORE_U32(ctx.r10.u32 + 616, ctx.r9.u32);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8817D0B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r6,232(r31)
	ctx.current_instruction = 0x8817D0BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r8,3840(r31)
	ctx.current_instruction = 0x8817D0C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// lwz r10,220(r31)
	ctx.current_instruction = 0x8817D0C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r9,3832(r31)
	ctx.current_instruction = 0x8817D0C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// add r26,r10,r9
	ctx.r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,228(r31)
	ctx.current_instruction = 0x8817D0D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// add r17,r8,r11
	ctx.r17.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,3836(r31)
	ctx.current_instruction = 0x8817D0D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r14,204(r31)
	ctx.current_instruction = 0x8817D0E0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r20,136(r31)
	ctx.current_instruction = 0x8817D0E4;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r21,208(r31)
	ctx.current_instruction = 0x8817D0E8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// stw r6,80(r1)
	ctx.current_instruction = 0x8817D0EC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x8817D0F0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bge cr6,0x8817d1a0
	if (!ctx.cr6.lt) goto loc_8817D1A0;
	// lis r25,-30678
	ctx.r25.s64 = -2010513408;
	// lis r23,-30678
	ctx.r23.s64 = -2010513408;
loc_8817D100:
	// lwz r11,284(r1)
	ctx.current_instruction = 0x8817D100;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817d114
	if (!ctx.cr6.eq) goto loc_8817D114;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8817D114:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8817d180
	if (ctx.cr6.eq) goto loc_8817D180;
	// subf r27,r30,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r30.u64;
loc_8817D124:
	// lwz r11,284(r1)
	ctx.current_instruction = 0x8817D124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817d14c
	if (!ctx.cr6.eq) goto loc_8817D14C;
	// lwz r11,24560(r23)
	ctx.current_instruction = 0x8817D130;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 24560);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// add r4,r27,r30
	ctx.r4.u64 = ctx.r27.u64 + ctx.r30.u64;
	// lwz r5,204(r31)
	ctx.current_instruction = 0x8817D13C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8817D14C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8817D14C:
	// lwz r11,24572(r25)
	ctx.current_instruction = 0x8817D14C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24572);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,248(r31)
	ctx.current_instruction = 0x8817D158;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8817D170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8817D170:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x8817d124
	if (ctx.cr6.lt) goto loc_8817D124;
loc_8817D180:
	// lwz r11,228(r31)
	ctx.current_instruction = 0x8817D180;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8817D188;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x8817d100
	if (ctx.cr6.lt) goto loc_8817D100;
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8817D19C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8817D1A0:
	// lis r26,-30678
	ctx.r26.s64 = -2010513408;
	// lis r25,-30678
	ctx.r25.s64 = -2010513408;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmplw cr6,r18,r16
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x8817d250
	if (!ctx.cr6.lt) goto loc_8817D250;
loc_8817D1B4:
	// lwz r11,284(r1)
	ctx.current_instruction = 0x8817D1B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817d1c8
	if (!ctx.cr6.eq) goto loc_8817D1C8;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8817D1C8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8817d234
	if (ctx.cr6.eq) goto loc_8817D234;
	// subf r27,r30,r19
	ctx.r27.u64 = ctx.r19.u64 - ctx.r30.u64;
loc_8817D1D8:
	// lwz r11,284(r1)
	ctx.current_instruction = 0x8817D1D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817d200
	if (!ctx.cr6.eq) goto loc_8817D200;
	// lwz r11,24564(r25)
	ctx.current_instruction = 0x8817D1E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24564);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// add r4,r27,r30
	ctx.r4.u64 = ctx.r27.u64 + ctx.r30.u64;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x8817D1F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8817D200;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8817D200:
	// lwz r11,24568(r26)
	ctx.current_instruction = 0x8817D200;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24568);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,248(r31)
	ctx.current_instruction = 0x8817D20C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8817D224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8817D224:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x8817d1d8
	if (ctx.cr6.lt) goto loc_8817D1D8;
loc_8817D234:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x8817D234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8817D23C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r22,r6,r22
	ctx.r22.u64 = ctx.r6.u64 + ctx.r22.u64;
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x8817d1b4
	if (ctx.cr6.lt) goto loc_8817D1B4;
loc_8817D250:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmplw cr6,r18,r16
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x8817d2f8
	if (!ctx.cr6.lt) goto loc_8817D2F8;
loc_8817D25C:
	// lwz r11,284(r1)
	ctx.current_instruction = 0x8817D25C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817d270
	if (!ctx.cr6.eq) goto loc_8817D270;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_8817D270:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8817d2dc
	if (ctx.cr6.eq) goto loc_8817D2DC;
	// subf r27,r30,r15
	ctx.r27.u64 = ctx.r15.u64 - ctx.r30.u64;
loc_8817D280:
	// lwz r11,284(r1)
	ctx.current_instruction = 0x8817D280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8817d2a8
	if (!ctx.cr6.eq) goto loc_8817D2A8;
	// lwz r11,24564(r25)
	ctx.current_instruction = 0x8817D28C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24564);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// add r4,r27,r30
	ctx.r4.u64 = ctx.r27.u64 + ctx.r30.u64;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x8817D298;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8817D2A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8817D2A8:
	// lwz r11,24568(r26)
	ctx.current_instruction = 0x8817D2A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24568);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,248(r31)
	ctx.current_instruction = 0x8817D2B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8817D2CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8817D2CC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x8817d280
	if (ctx.cr6.lt) goto loc_8817D280;
loc_8817D2DC:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x8817D2DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8817D2E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r15,r11,r15
	ctx.r15.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r17,r6,r17
	ctx.r17.u64 = ctx.r6.u64 + ctx.r17.u64;
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x8817d25c
	if (ctx.cr6.lt) goto loc_8817D25C;
loc_8817D2F8:
	// lwz r11,15576(r31)
	ctx.current_instruction = 0x8817D2F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8817d3d8
	if (ctx.cr6.eq) goto loc_8817D3D8;
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8817D304;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// lwz r8,220(r31)
	ctx.current_instruction = 0x8817D30C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// cmplw cr6,r18,r16
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r16.u32, ctx.xer);
	// lwz r7,3832(r31)
	ctx.current_instruction = 0x8817D314;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3832);
	// lwz r9,3836(r31)
	ctx.current_instruction = 0x8817D318;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3836);
	// lwz r10,3840(r31)
	ctx.current_instruction = 0x8817D31C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3840);
	// add r24,r8,r7
	ctx.r24.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x8817d3d8
	if (!ctx.cr6.lt) goto loc_8817D3D8;
	// lis r22,-30678
	ctx.r22.s64 = -2010513408;
loc_8817D334:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8817d3bc
	if (ctx.cr6.eq) goto loc_8817D3BC;
	// subf r26,r25,r23
	ctx.r26.u64 = ctx.r23.u64 - ctx.r25.u64;
loc_8817D34C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8817d3a4
	if (ctx.cr6.eq) goto loc_8817D3A4;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x8817D354;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8817d3a4
	if (ctx.cr6.eq) goto loc_8817D3A4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8817d3a4
	if (ctx.cr6.eq) goto loc_8817D3A4;
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8817D36C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8817d3a4
	if (ctx.cr6.eq) goto loc_8817D3A4;
	// lwz r11,24544(r22)
	ctx.current_instruction = 0x8817D37C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 24544);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r6,248(r31)
	ctx.current_instruction = 0x8817D388;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// add r5,r26,r30
	ctx.r5.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8817D3A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8817D3A4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x8817d34c
	if (ctx.cr6.lt) goto loc_8817D34C;
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8817D3B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8817D3BC:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8817D3BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r25,r6,r25
	ctx.r25.u64 = ctx.r6.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r23,r6,r23
	ctx.r23.u64 = ctx.r6.u64 + ctx.r23.u64;
	// cmplw cr6,r27,r16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x8817d334
	if (ctx.cr6.lt) goto loc_8817D334;
loc_8817D3D8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88185558) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88185558;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88185558) {
			switch (rex_dispatch_address) {
				case 0x88185560:
				case 0x8818558C:
				case 0x88185598:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88185558;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88185560: goto loc_88185560;
		case 0x8818558C: goto loc_8818558C;
		case 0x88185598: goto loc_88185598;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88185560;
	__savegprlr_29(ctx, base);
loc_88185560:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88185560;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22300(r3)
	ctx.current_instruction = 0x88185564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22300);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881855f4
	if (ctx.cr6.eq) goto loc_881855F4;
	// addi r30,r3,3752
	ctx.r30.s64 = ctx.r3.s64 + 3752;
	// lwz r3,15268(r3)
	ctx.current_instruction = 0x88185578;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 15268);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,3752(r31)
	ctx.current_instruction = 0x88185580;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881b36a0
	ctx.lr = 0x8818558C;
	sub_881B36A0(ctx, base);
loc_8818558C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,15268(r31)
	ctx.current_instruction = 0x88185590;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// bl 0x881b36f0
	ctx.lr = 0x88185598;
	sub_881B36F0(ctx, base);
loc_88185598:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881855ac
	if (ctx.cr6.eq) goto loc_881855AC;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881855AC:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x881855AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,220(r31)
	ctx.current_instruction = 0x881855B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r7,0(r9)
	ctx.current_instruction = 0x881855B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,3788(r31)
	ctx.current_instruction = 0x881855C4;
	REX_STORE_U32(ctx.r31.u32 + 3788, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.current_instruction = 0x881855C8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,3792(r31)
	ctx.current_instruction = 0x881855D0;
	REX_STORE_U32(ctx.r31.u32 + 3792, ctx.r6.u32);
	// lwz r3,8(r9)
	ctx.current_instruction = 0x881855D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,3796(r31)
	ctx.current_instruction = 0x881855DC;
	REX_STORE_U32(ctx.r31.u32 + 3796, ctx.r3.u32);
	// stw r4,3812(r31)
	ctx.current_instruction = 0x881855E0;
	REX_STORE_U32(ctx.r31.u32 + 3812, ctx.r4.u32);
	// stw r11,14824(r31)
	ctx.current_instruction = 0x881855E4;
	REX_STORE_U32(ctx.r31.u32 + 14824, ctx.r11.u32);
	// stw r5,14828(r31)
	ctx.current_instruction = 0x881855E8;
	REX_STORE_U32(ctx.r31.u32 + 14828, ctx.r5.u32);
	// stw r10,14832(r31)
	ctx.current_instruction = 0x881855EC;
	REX_STORE_U32(ctx.r31.u32 + 14832, ctx.r10.u32);
	// stw r8,22300(r31)
	ctx.current_instruction = 0x881855F0;
	REX_STORE_U32(ctx.r31.u32 + 22300, ctx.r8.u32);
loc_881855F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88188600) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88188600);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88188600;
	ctx.current_instruction = 0x88188600;
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.current_instruction = 0x88188600;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,22101
	ctx.r9.s64 = 1448411136;
	// ori r8,r9,22857
	ctx.r8.u64 = ctx.r9.u64 | 22857;
	// lwz r11,16(r10)
	ctx.current_instruction = 0x8818860C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lhz r10,14(r10)
	ctx.current_instruction = 0x88188610;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8818864c
	if (ctx.cr6.eq) goto loc_8818864C;
	// lis r9,12338
	ctx.r9.s64 = 808583168;
	// ori r8,r9,13385
	ctx.r8.u64 = ctx.r9.u64 | 13385;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8818864c
	if (ctx.cr6.eq) goto loc_8818864C;
	// lis r9,12849
	ctx.r9.s64 = 842072064;
	// ori r8,r9,22105
	ctx.r8.u64 = ctx.r9.u64 | 22105;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8818864c
	if (ctx.cr6.eq) goto loc_8818864C;
	// lis r9,12593
	ctx.r9.s64 = 825294848;
	// ori r8,r9,13392
	ctx.r8.u64 = ctx.r9.u64 | 13392;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8818866c
	if (!ctx.cr6.eq) goto loc_8818866C;
loc_8818864C:
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r3,r10,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r10.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8818866C:
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r6,r7,r5
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r3,r10,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r10.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8818A158) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8818A158;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8818A158) {
			switch (rex_dispatch_address) {
				case 0x8818A160:
				case 0x8818A3C0:
				case 0x8818A990:
				case 0x8818AF1C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8818A158;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8818A160: goto loc_8818A160;
		case 0x8818A3C0: goto loc_8818A3C0;
		case 0x8818A990: goto loc_8818A990;
		case 0x8818AF1C: goto loc_8818AF1C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8818A160;
	__savegprlr_14(ctx, base);
loc_8818A160:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x8818A160;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r1)
	ctx.current_instruction = 0x8818A164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// stw r3,308(r1)
	ctx.current_instruction = 0x8818A168;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// stw r4,316(r1)
	ctx.current_instruction = 0x8818A16C;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,340(r1)
	ctx.current_instruction = 0x8818A174;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// stw r8,348(r1)
	ctx.current_instruction = 0x8818A178;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// beq cr6,0x8818a74c
	if (ctx.cr6.eq) goto loc_8818A74C;
	// addi r20,r4,8
	ctx.r20.s64 = ctx.r4.s64 + 8;
	// lwz r23,256(r3)
	ctx.current_instruction = 0x8818A184;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r19,r20,-1
	ctx.r19.s64 = ctx.r20.s64 + -1;
	// addi r15,r20,1
	ctx.r15.s64 = ctx.r20.s64 + 1;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8818A194;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r16,r19,-1
	ctx.r16.s64 = ctx.r19.s64 + -1;
	// addi r14,r15,1
	ctx.r14.s64 = ctx.r15.s64 + 1;
	// stw r15,120(r1)
	ctx.current_instruction = 0x8818A1A0;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// addi r17,r16,-1
	ctx.r17.s64 = ctx.r16.s64 + -1;
	// stw r16,116(r1)
	ctx.current_instruction = 0x8818A1A8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// stw r14,124(r1)
	ctx.current_instruction = 0x8818A1B0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// addi r18,r17,-1
	ctx.r18.s64 = ctx.r17.s64 + -1;
	// stw r17,112(r1)
	ctx.current_instruction = 0x8818A1B8;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	ctx.current_instruction = 0x8818A1C0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r9,r18,-1
	ctx.r9.s64 = ctx.r18.s64 + -1;
	// stw r10,108(r1)
	ctx.current_instruction = 0x8818A1C8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,104(r1)
	ctx.current_instruction = 0x8818A1CC;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_8818A1D0:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x8818A1D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.current_instruction = 0x8818A1D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,100(r1)
	ctx.current_instruction = 0x8818A1D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.current_instruction = 0x8818A1DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// lbz r25,0(r18)
	ctx.current_instruction = 0x8818A1E4;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// lbz r21,0(r11)
	ctx.current_instruction = 0x8818A1E8;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r22,0(r10)
	ctx.current_instruction = 0x8818A1EC;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r27,0(r17)
	ctx.current_instruction = 0x8818A1F4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// lbz r29,0(r16)
	ctx.current_instruction = 0x8818A1F8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// lbz r31,0(r19)
	ctx.current_instruction = 0x8818A1FC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lbz r30,0(r20)
	ctx.current_instruction = 0x8818A200;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// lbz r28,0(r15)
	ctx.current_instruction = 0x8818A204;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbz r26,0(r14)
	ctx.current_instruction = 0x8818A208;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// lbz r24,0(r8)
	ctx.current_instruction = 0x8818A20C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// bne cr6,0x8818a384
	if (!ctx.cr6.eq) goto loc_8818A384;
	// subf r10,r22,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r22.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r24,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r24.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r26,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r26.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r17,r30,r31
	ctx.r17.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r4,r28,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r28.u64;
	// subfc r8,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subf r16,r29,r27
	ctx.r16.u64 = ctx.r27.u64 - ctx.r29.u64;
	// adde r8,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r6,r5,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r5.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r5,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// adde r6,r11,r3
	temp.u8 = (ctx.r11.u32 + ctx.r3.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// subf r3,r31,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r4,r7,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r10,r7,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// adde r5,r10,r5
	temp.u8 = (ctx.r10.u32 + ctx.r5.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r17.s32 >> 31;
	// srawi r4,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 31;
	// xor r17,r17,r7
	ctx.r17.u64 = ctx.r17.u64 ^ ctx.r7.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subf r7,r7,r17
	ctx.r7.u64 = ctx.r17.u64 - ctx.r7.u64;
	// subf r17,r27,r25
	ctx.r17.u64 = ctx.r25.u64 - ctx.r27.u64;
	// subfc r15,r7,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r7.u32;
	ctx.r15.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// adde r8,r7,r4
	temp.u8 = (ctx.r7.u32 + ctx.r4.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r7.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 31;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// xor r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// subf r9,r6,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r6.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subfc r7,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// li r9,2
	ctx.r9.s64 = 2;
	// adde r11,r6,r4
	temp.u8 = (ctx.r6.u32 + ctx.r4.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r16.s32 >> 31;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r3,r16,r5
	ctx.r3.u64 = ctx.r16.u64 ^ ctx.r5.u64;
	// lwz r16,116(r1)
	ctx.current_instruction = 0x8818A310;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// srawi r4,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 31;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r7,r25,r21
	ctx.r7.u64 = ctx.r21.u64 - ctx.r25.u64;
	// subfc r6,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// adde r11,r5,r4
	temp.u8 = (ctx.r5.u32 + ctx.r4.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r17.s32 >> 31;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r6,r17,r4
	ctx.r6.u64 = ctx.r17.u64 ^ ctx.r4.u64;
	// srawi r3,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 31;
	// subf r5,r4,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subfc r11,r5,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r5.u64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r11,r4,r3
	temp.u8 = (ctx.r4.u32 + ctx.r3.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r9,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 31;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// xor r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// lwz r17,112(r1)
	ctx.current_instruction = 0x8818A35C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// lwz r15,120(r1)
	ctx.current_instruction = 0x8818A364;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r14,124(r1)
	ctx.current_instruction = 0x8818A36C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r4,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// adde r11,r5,r7
	temp.u8 = (ctx.r5.u32 + ctx.r7.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,128(r1)
	ctx.current_instruction = 0x8818A380;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_8818A384:
	// lwz r11,128(r1)
	ctx.current_instruction = 0x8818A384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8818a5ac
	if (ctx.cr6.lt) goto loc_8818A5AC;
	// lwz r11,380(r1)
	ctx.current_instruction = 0x8818A390;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r6,84(r1)
	ctx.current_instruction = 0x8818A3A4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x881b3a88
	ctx.lr = 0x8818A3C0;
	sub_881B3A88(ctx, base);
loc_8818A3C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818a6dc
	if (ctx.cr6.eq) goto loc_8818A6DC;
	// subf r10,r21,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r21.u64;
	// lwz r11,380(r1)
	ctx.current_instruction = 0x8818A3CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8818a3e8
	if (ctx.cr6.lt) goto loc_8818A3E8;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
loc_8818A3E8:
	// subf r10,r22,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r22.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8818a404
	if (ctx.cr6.lt) goto loc_8818A404;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
loc_8818A404:
	// addi r10,r25,2
	ctx.r10.s64 = ctx.r25.s64 + 2;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r9,r27,r21
	ctx.r9.u64 = ctx.r27.u64 + ctx.r21.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r5,r23
	ctx.current_instruction = 0x8818A45C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// addi r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 2;
	// srawi r7,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 4;
	// addi r6,r28,2
	ctx.r6.s64 = ctx.r28.s64 + 2;
	// stb r11,0(r18)
	ctx.current_instruction = 0x8818A470;
	REX_STORE_U8(ctx.r18.u32 + 0, ctx.r11.u8);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r5,r11,r21
	ctx.r5.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + ctx.r22.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r10,r8,r24
	ctx.r10.u64 = ctx.r8.u64 + ctx.r24.u64;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// lbzx r3,r7,r23
	ctx.current_instruction = 0x8818A4C4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r23.u32);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r3,0(r17)
	ctx.current_instruction = 0x8818A4CC;
	REX_STORE_U8(ctx.r17.u32 + 0, ctx.r3.u8);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r6,r8,r28
	ctx.r6.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// srawi r4,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 4;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r3,r9,r21
	ctx.r3.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r6,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 4;
	// add r11,r22,r26
	ctx.r11.u64 = ctx.r22.u64 + ctx.r26.u64;
	// lbzx r8,r4,r23
	ctx.current_instruction = 0x8818A520;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r23.u32);
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// stb r8,0(r16)
	ctx.current_instruction = 0x8818A52C;
	REX_STORE_U8(ctx.r16.u32 + 0, ctx.r8.u8);
	// lbzx r3,r9,r23
	ctx.current_instruction = 0x8818A530;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// stb r3,0(r19)
	ctx.current_instruction = 0x8818A534;
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r3.u8);
	// lbzx r11,r6,r23
	ctx.current_instruction = 0x8818A538;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r23.u32);
	// stb r11,0(r20)
	ctx.current_instruction = 0x8818A53C;
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r11.u8);
	// lbzx r10,r5,r23
	ctx.current_instruction = 0x8818A540;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// stb r10,0(r15)
	ctx.current_instruction = 0x8818A544;
	REX_STORE_U8(ctx.r15.u32 + 0, ctx.r10.u8);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,96(r1)
	ctx.current_instruction = 0x8818A54C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r24,2
	ctx.r7.s64 = ctx.r24.s64 + 2;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r10,r22,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r22,r10
	ctx.r10.u64 = ctx.r22.u64 + ctx.r10.u64;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r10,r3,r23
	ctx.current_instruction = 0x8818A594;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r23.u32);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// stb r10,0(r14)
	ctx.current_instruction = 0x8818A59C;
	REX_STORE_U8(ctx.r14.u32 + 0, ctx.r10.u8);
	// lbzx r7,r9,r23
	ctx.current_instruction = 0x8818A5A0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// stb r7,0(r8)
	ctx.current_instruction = 0x8818A5A4;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// b 0x8818a6dc
	goto loc_8818A6DC;
loc_8818A5AC:
	// subf r5,r30,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r30.u64;
	// lwz r9,380(r1)
	ctx.current_instruction = 0x8818A5B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subf r10,r28,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r28.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// xor r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8818a6dc
	if (!ctx.cr6.lt) goto loc_8818A6DC;
	// subf r10,r27,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r27.u64;
	// subf r11,r31,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r31.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// subf r9,r24,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r24.u64;
	// subf r11,r28,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r28.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r3,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r3.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8818a654
	if (!ctx.cr6.lt) goto loc_8818A654;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8818A654:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8818a6dc
	if (!ctx.cr6.lt) goto loc_8818A6DC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// blt cr6,0x8818a66c
	if (ctx.cr6.lt) goto loc_8818A66C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8818A66C:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze. r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// ble 0x8818a6a8
	if (!ctx.cr0.gt) goto loc_8818A6A8;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8818a6c4
	if (!ctx.cr6.gt) goto loc_8818A6C4;
	// b 0x8818a6c0
	goto loc_8818A6C0;
loc_8818A6A8:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfze r7,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8818a6c4
	if (!ctx.cr6.lt) goto loc_8818A6C4;
loc_8818A6C0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8818A6C4:
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r8,r10,r23
	ctx.current_instruction = 0x8818A6CC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// stb r8,0(r19)
	ctx.current_instruction = 0x8818A6D0;
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r23
	ctx.current_instruction = 0x8818A6D4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// stb r7,0(r20)
	ctx.current_instruction = 0x8818A6D8;
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r7.u8);
loc_8818A6DC:
	// lwz r11,388(r1)
	ctx.current_instruction = 0x8818A6DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r10,100(r1)
	ctx.current_instruction = 0x8818A6E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.current_instruction = 0x8818A6E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r17,r17,r11
	ctx.r17.u64 = ctx.r17.u64 + ctx.r11.u64;
	// lwz r8,96(r1)
	ctx.current_instruction = 0x8818A6EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,108(r1)
	ctx.current_instruction = 0x8818A6F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r16,r16,r11
	ctx.r16.u64 = ctx.r16.u64 + ctx.r11.u64;
	// stw r10,100(r1)
	ctx.current_instruction = 0x8818A700;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// stw r6,104(r1)
	ctx.current_instruction = 0x8818A708;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// add r14,r14,r11
	ctx.r14.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stw r17,112(r1)
	ctx.current_instruction = 0x8818A710;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r16,116(r1)
	ctx.current_instruction = 0x8818A718;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r15,120(r1)
	ctx.current_instruction = 0x8818A720;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// add r18,r18,r11
	ctx.r18.u64 = ctx.r18.u64 + ctx.r11.u64;
	// stw r14,124(r1)
	ctx.current_instruction = 0x8818A728;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// stw r5,96(r1)
	ctx.current_instruction = 0x8818A730;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// stw r4,108(r1)
	ctx.current_instruction = 0x8818A738;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x8818a1d0
	if (ctx.cr6.lt) goto loc_8818A1D0;
	// lwz r3,308(r1)
	ctx.current_instruction = 0x8818A744;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,316(r1)
	ctx.current_instruction = 0x8818A748;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_8818A74C:
	// lwz r11,340(r1)
	ctx.current_instruction = 0x8818A74C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818ad10
	if (ctx.cr6.eq) goto loc_8818AD10;
	// addi r19,r4,-1
	ctx.r19.s64 = ctx.r4.s64 + -1;
	// lwz r23,256(r3)
	ctx.current_instruction = 0x8818A75C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r15,r19,-1
	ctx.r15.s64 = ctx.r19.s64 + -1;
	// addi r14,r11,1
	ctx.r14.s64 = ctx.r11.s64 + 1;
	// addi r16,r15,-1
	ctx.r16.s64 = ctx.r15.s64 + -1;
	// stw r15,120(r1)
	ctx.current_instruction = 0x8818A770;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// stw r14,116(r1)
	ctx.current_instruction = 0x8818A778;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r17,r16,-1
	ctx.r17.s64 = ctx.r16.s64 + -1;
	// stw r16,124(r1)
	ctx.current_instruction = 0x8818A780;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	ctx.current_instruction = 0x8818A788;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r9,r17,-1
	ctx.r9.s64 = ctx.r17.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,100(r1)
	ctx.current_instruction = 0x8818A794;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	ctx.current_instruction = 0x8818A798;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r20,r19,1
	ctx.r20.s64 = ctx.r19.s64 + 1;
	// stw r8,108(r1)
	ctx.current_instruction = 0x8818A7A0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_8818A7A4:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x8818A7A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.current_instruction = 0x8818A7A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,108(r1)
	ctx.current_instruction = 0x8818A7AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,96(r1)
	ctx.current_instruction = 0x8818A7B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// lbz r25,0(r17)
	ctx.current_instruction = 0x8818A7B8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r17.u32 + 0);
	// lbz r21,0(r11)
	ctx.current_instruction = 0x8818A7BC;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r22,0(r10)
	ctx.current_instruction = 0x8818A7C0;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r27,0(r16)
	ctx.current_instruction = 0x8818A7C8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// lbz r29,0(r15)
	ctx.current_instruction = 0x8818A7CC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// lbz r31,0(r19)
	ctx.current_instruction = 0x8818A7D0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// lbz r30,0(r20)
	ctx.current_instruction = 0x8818A7D4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// lbz r28,1(r20)
	ctx.current_instruction = 0x8818A7D8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r20.u32 + 1);
	// lbz r26,0(r14)
	ctx.current_instruction = 0x8818A7DC;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// lbz r24,0(r8)
	ctx.current_instruction = 0x8818A7E0;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// bne cr6,0x8818a954
	if (!ctx.cr6.eq) goto loc_8818A954;
	// subf r10,r22,r24
	ctx.r10.u64 = ctx.r24.u64 - ctx.r22.u64;
	// lwz r14,116(r1)
	ctx.current_instruction = 0x8818A7EC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,2
	ctx.r11.s64 = 2;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r24,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r24.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r9,r26,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r26.u64;
	// adde r7,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r18,r30,r31
	ctx.r18.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r3,r8,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r8,r28,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r28.u64;
	// subfc r6,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r4,r3,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subf r16,r31,r29
	ctx.r16.u64 = ctx.r29.u64 - ctx.r31.u64;
	// adde r5,r4,r5
	temp.u8 = (ctx.r4.u32 + ctx.r5.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
	// xor r4,r9,r3
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r11,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// rlwinm r4,r3,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r6,r4,r6
	temp.u8 = (ctx.r4.u32 + ctx.r6.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 31;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// xor r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r4,r29,r27
	ctx.r4.u64 = ctx.r27.u64 - ctx.r29.u64;
	// subfc r10,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r8,r8,r5
	temp.u8 = (ctx.r8.u32 + ctx.r5.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r18.s32 >> 31;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r18,r18,r3
	ctx.r18.u64 = ctx.r18.u64 ^ ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subf r3,r3,r18
	ctx.r3.u64 = ctx.r18.u64 - ctx.r3.u64;
	// subf r18,r27,r25
	ctx.r18.u64 = ctx.r25.u64 - ctx.r27.u64;
	// subfc r15,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r15.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// adde r7,r3,r5
	temp.u8 = (ctx.r3.u32 + ctx.r5.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r16.s32 >> 31;
	// srawi r5,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 31;
	// xor r3,r16,r6
	ctx.r3.u64 = ctx.r16.u64 ^ ctx.r6.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfc r3,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// adde r8,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r5,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 31;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// xor r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r5,r25,r21
	ctx.r5.u64 = ctx.r21.u64 - ctx.r25.u64;
	// subfc r4,r6,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rlwinm r10,r6,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// adde r10,r10,r3
	temp.u8 = (ctx.r10.u32 + ctx.r3.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r18.s32 >> 31;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xor r6,r18,r8
	ctx.r6.u64 = ctx.r18.u64 ^ ctx.r8.u64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subfc r10,r4,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r4.u32;
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// adde r10,r3,r7
	temp.u8 = (ctx.r3.u32 + ctx.r7.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r3.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// xor r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// lwz r16,124(r1)
	ctx.current_instruction = 0x8818A930;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// lwz r15,120(r1)
	ctx.current_instruction = 0x8818A938;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r4,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// adde r11,r5,r7
	temp.u8 = (ctx.r5.u32 + ctx.r7.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,128(r1)
	ctx.current_instruction = 0x8818A950;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_8818A954:
	// lwz r11,128(r1)
	ctx.current_instruction = 0x8818A954;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8818ab78
	if (ctx.cr6.lt) goto loc_8818AB78;
	// lwz r18,380(r1)
	ctx.current_instruction = 0x8818A960;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8818A978;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x881b3a88
	ctx.lr = 0x8818A990;
	sub_881B3A88(ctx, base);
loc_8818A990:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818aca8
	if (ctx.cr6.eq) goto loc_8818ACA8;
	// subf r11,r21,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r21.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x8818a9b4
	if (ctx.cr6.lt) goto loc_8818A9B4;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
loc_8818A9B4:
	// subf r11,r22,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r22.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x8818a9d0
	if (ctx.cr6.lt) goto loc_8818A9D0;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
loc_8818A9D0:
	// rlwinm r10,r21,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r25,2
	ctx.r11.s64 = ctx.r25.s64 + 2;
	// add r9,r21,r10
	ctx.r9.u64 = ctx.r21.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r21
	ctx.r10.u64 = ctx.r27.u64 + ctx.r21.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r29,2
	ctx.r5.s64 = ctx.r29.s64 + 2;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r8,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r7,r30,2
	ctx.r7.s64 = ctx.r30.s64 + 2;
	// lbzx r6,r8,r23
	ctx.current_instruction = 0x8818AA64;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r23.u32);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r3,r28,2
	ctx.r3.s64 = ctx.r28.s64 + 2;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r6,0(r17)
	ctx.current_instruction = 0x8818AA80;
	REX_STORE_U8(ctx.r17.u32 + 0, ctx.r6.u8);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r6,r9,r21
	ctx.r6.u64 = ctx.r9.u64 + ctx.r21.u64;
	// srawi r5,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r4,r8,r23
	ctx.current_instruction = 0x8818AAD0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r23.u32);
	// add r3,r10,r25
	ctx.r3.u64 = ctx.r10.u64 + ctx.r25.u64;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r8,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 4;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// stb r4,0(r16)
	ctx.current_instruction = 0x8818AAE8;
	REX_STORE_U8(ctx.r16.u32 + 0, ctx.r4.u8);
	// add r11,r22,r26
	ctx.r11.u64 = ctx.r22.u64 + ctx.r26.u64;
	// lbzx r6,r5,r23
	ctx.current_instruction = 0x8818AAF0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r23.u32);
	// stb r6,0(r15)
	ctx.current_instruction = 0x8818AAF4;
	REX_STORE_U8(ctx.r15.u32 + 0, ctx.r6.u8);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lbzx r4,r10,r23
	ctx.current_instruction = 0x8818AAFC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// stb r4,0(r19)
	ctx.current_instruction = 0x8818AB00;
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r4.u8);
	// lbzx r3,r8,r23
	ctx.current_instruction = 0x8818AB04;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r23.u32);
	// stb r3,0(r20)
	ctx.current_instruction = 0x8818AB08;
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r3.u8);
	// lbzx r11,r7,r23
	ctx.current_instruction = 0x8818AB0C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r23.u32);
	// stb r11,1(r20)
	ctx.current_instruction = 0x8818AB10;
	REX_STORE_U8(ctx.r20.u32 + 1, ctx.r11.u8);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,96(r1)
	ctx.current_instruction = 0x8818AB18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r24,2
	ctx.r7.s64 = ctx.r24.s64 + 2;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r10,r22,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r22,r10
	ctx.r10.u64 = ctx.r22.u64 + ctx.r10.u64;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r10,r3,r23
	ctx.current_instruction = 0x8818AB60;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r23.u32);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// stb r10,0(r14)
	ctx.current_instruction = 0x8818AB68;
	REX_STORE_U8(ctx.r14.u32 + 0, ctx.r10.u8);
	// lbzx r7,r9,r23
	ctx.current_instruction = 0x8818AB6C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// stb r7,0(r8)
	ctx.current_instruction = 0x8818AB70;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// b 0x8818aca8
	goto loc_8818ACA8;
loc_8818AB78:
	// subf r5,r30,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r30.u64;
	// lwz r9,380(r1)
	ctx.current_instruction = 0x8818AB7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subf r10,r28,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r28.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// xor r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8818aca8
	if (!ctx.cr6.lt) goto loc_8818ACA8;
	// subf r10,r27,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r27.u64;
	// subf r11,r31,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r31.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// subf r9,r24,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r24.u64;
	// subf r11,r28,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r28.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// xor r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r3,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r3.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8818ac20
	if (!ctx.cr6.lt) goto loc_8818AC20;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8818AC20:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8818aca8
	if (!ctx.cr6.lt) goto loc_8818ACA8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// blt cr6,0x8818ac38
	if (ctx.cr6.lt) goto loc_8818AC38;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8818AC38:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze. r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// ble 0x8818ac74
	if (!ctx.cr0.gt) goto loc_8818AC74;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8818ac90
	if (!ctx.cr6.gt) goto loc_8818AC90;
	// b 0x8818ac8c
	goto loc_8818AC8C;
loc_8818AC74:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfze r7,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8818ac90
	if (!ctx.cr6.lt) goto loc_8818AC90;
loc_8818AC8C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8818AC90:
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r8,r10,r23
	ctx.current_instruction = 0x8818AC98;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// stb r8,0(r19)
	ctx.current_instruction = 0x8818AC9C;
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r8.u8);
	// lbzx r7,r9,r23
	ctx.current_instruction = 0x8818ACA0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// stb r7,0(r20)
	ctx.current_instruction = 0x8818ACA4;
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r7.u8);
loc_8818ACA8:
	// lwz r11,388(r1)
	ctx.current_instruction = 0x8818ACA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r10,108(r1)
	ctx.current_instruction = 0x8818ACAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.current_instruction = 0x8818ACB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r16,r16,r11
	ctx.r16.u64 = ctx.r16.u64 + ctx.r11.u64;
	// lwz r8,96(r1)
	ctx.current_instruction = 0x8818ACB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,100(r1)
	ctx.current_instruction = 0x8818ACC0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// stw r10,108(r1)
	ctx.current_instruction = 0x8818ACCC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// add r14,r14,r11
	ctx.r14.u64 = ctx.r14.u64 + ctx.r11.u64;
	// stw r6,104(r1)
	ctx.current_instruction = 0x8818ACD4;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r16,124(r1)
	ctx.current_instruction = 0x8818ACDC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r15,120(r1)
	ctx.current_instruction = 0x8818ACE4;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// add r17,r17,r11
	ctx.r17.u64 = ctx.r17.u64 + ctx.r11.u64;
	// stw r14,116(r1)
	ctx.current_instruction = 0x8818ACEC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// stw r5,96(r1)
	ctx.current_instruction = 0x8818ACF4;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// stw r4,100(r1)
	ctx.current_instruction = 0x8818ACFC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x8818a7a4
	if (ctx.cr6.lt) goto loc_8818A7A4;
	// lwz r3,308(r1)
	ctx.current_instruction = 0x8818AD08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,316(r1)
	ctx.current_instruction = 0x8818AD0C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_8818AD10:
	// lwz r11,348(r1)
	ctx.current_instruction = 0x8818AD10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818b190
	if (ctx.cr6.eq) goto loc_8818B190;
	// addi r16,r4,16
	ctx.r16.s64 = ctx.r4.s64 + 16;
	// lwz r18,256(r3)
	ctx.current_instruction = 0x8818AD20;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r22,r16,-1
	ctx.r22.s64 = ctx.r16.s64 + -1;
	// addi r15,r16,1
	ctx.r15.s64 = ctx.r16.s64 + 1;
	// stw r11,124(r1)
	ctx.current_instruction = 0x8818AD30;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r19,r22,-1
	ctx.r19.s64 = ctx.r22.s64 + -1;
	// addi r9,r15,1
	ctx.r9.s64 = ctx.r15.s64 + 1;
	// addi r20,r19,-1
	ctx.r20.s64 = ctx.r19.s64 + -1;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r9,116(r1)
	ctx.current_instruction = 0x8818AD44;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r21,r20,-1
	ctx.r21.s64 = ctx.r20.s64 + -1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r10,112(r1)
	ctx.current_instruction = 0x8818AD50;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r8,r21,-1
	ctx.r8.s64 = ctx.r21.s64 + -1;
	// stw r7,108(r1)
	ctx.current_instruction = 0x8818AD58;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r8,120(r1)
	ctx.current_instruction = 0x8818AD5C;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
loc_8818AD60:
	// lbz r3,0(r7)
	ctx.current_instruction = 0x8818AD60;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// lbz r23,0(r10)
	ctx.current_instruction = 0x8818AD68;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// lbz r5,0(r8)
	ctx.current_instruction = 0x8818AD70;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// subf r3,r3,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r3.u64;
	// lbz r24,0(r9)
	ctx.current_instruction = 0x8818AD78;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r25,0(r15)
	ctx.current_instruction = 0x8818AD7C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// srawi r6,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 31;
	// lbz r28,0(r16)
	ctx.current_instruction = 0x8818AD84;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// lbz r31,0(r19)
	ctx.current_instruction = 0x8818AD8C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// xor r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// lbz r26,0(r22)
	ctx.current_instruction = 0x8818AD94;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r22.u32 + 0);
	// subf r7,r23,r24
	ctx.r7.u64 = ctx.r24.u64 - ctx.r23.u64;
	// lbz r29,0(r20)
	ctx.current_instruction = 0x8818AD9C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r20.u32 + 0);
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// lbz r30,0(r21)
	ctx.current_instruction = 0x8818ADA4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// subf r4,r24,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r24.u64;
	// subfc r3,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subf r27,r25,r28
	ctx.r27.u64 = ctx.r28.u64 - ctx.r25.u64;
	// adde r8,r6,r8
	temp.u8 = (ctx.r6.u32 + ctx.r8.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// xor r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// subf r17,r31,r29
	ctx.r17.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r3,r3,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subfc r9,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r7,r3,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// adde r7,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// xor r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r4,r26,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r26.u64;
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// li r9,2
	ctx.r9.s64 = 2;
	// adde r6,r6,r3
	temp.u8 = (ctx.r6.u32 + ctx.r3.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 ^ ctx.r3.u64;
	// subf r3,r3,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r27,r3,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r3.u32;
	ctx.r27.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// adde r8,r3,r8
	temp.u8 = (ctx.r3.u32 + ctx.r8.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 31;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// subfc r4,r7,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r7.u32;
	ctx.r4.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r9,r7,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// subf r3,r29,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r29.u64;
	// adde r9,r9,r6
	temp.u8 = (ctx.r9.u32 + ctx.r6.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r8,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r17.s32 >> 31;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// xor r6,r17,r8
	ctx.r6.u64 = ctx.r17.u64 ^ ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r9,r28,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r28.u64;
	// subfc r4,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r8,r5,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r8,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// xor r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r10,r30,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r30.u64;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r7,r11,r4
	temp.u8 = (ctx.r11.u32 + ctx.r4.u32 < ctx.r11.u32) | (ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 31;
	// li r11,2
	ctx.r11.s64 = 2;
	// xor r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// subfc r6,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r3.u64;
	// rlwinm r5,r3,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// adde r8,r5,r4
	temp.u8 = (ctx.r5.u32 + ctx.r4.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r5.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 31;
	// li r10,2
	ctx.r10.s64 = 2;
	// xor r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// subf r6,r4,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r4,r6,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// adde r10,r5,r3
	temp.u8 = (ctx.r5.u32 + ctx.r3.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// blt cr6,0x8818b014
	if (ctx.cr6.lt) goto loc_8818B014;
	// lwz r17,380(r1)
	ctx.current_instruction = 0x8818AEEC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// rlwinm r11,r17,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8818AF04;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b3a88
	ctx.lr = 0x8818AF1C;
	sub_881B3A88(ctx, base);
loc_8818AF1C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818b134
	if (ctx.cr6.eq) goto loc_8818B134;
	// subf r11,r27,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r27.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x8818af40
	if (ctx.cr6.lt) goto loc_8818AF40;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8818AF40:
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// add r9,r27,r10
	ctx.r9.u64 = ctx.r27.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r26,2
	ctx.r10.s64 = ctx.r26.s64 + 2;
	// addi r7,r31,2
	ctx.r7.s64 = ctx.r31.s64 + 2;
	// add r8,r29,r27
	ctx.r8.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + ctx.r26.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lbzx r5,r7,r18
	ctx.current_instruction = 0x8818AFD8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r18.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// srawi r3,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 4;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r10,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 4;
	// stb r5,0(r21)
	ctx.current_instruction = 0x8818AFF0;
	REX_STORE_U8(ctx.r21.u32 + 0, ctx.r5.u8);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// lbzx r8,r3,r18
	ctx.current_instruction = 0x8818AFF8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r18.u32);
	// stb r8,0(r20)
	ctx.current_instruction = 0x8818AFFC;
	REX_STORE_U8(ctx.r20.u32 + 0, ctx.r8.u8);
	// lbzx r7,r10,r18
	ctx.current_instruction = 0x8818B000;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r18.u32);
	// stb r7,0(r19)
	ctx.current_instruction = 0x8818B004;
	REX_STORE_U8(ctx.r19.u32 + 0, ctx.r7.u8);
	// lbzx r6,r9,r18
	ctx.current_instruction = 0x8818B008;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r18.u32);
	// stb r6,0(r22)
	ctx.current_instruction = 0x8818B00C;
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r6.u8);
	// b 0x8818b134
	goto loc_8818B134;
loc_8818B014:
	// subf r10,r25,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r25.u64;
	// lwz r8,380(r1)
	ctx.current_instruction = 0x8818B018;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r6,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r6.u64;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// xor r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8818b134
	if (!ctx.cr6.lt) goto loc_8818B134;
	// subf r10,r29,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r29.u64;
	// subf r11,r26,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r26.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// subf r8,r23,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r23.u64;
	// subf r11,r25,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r25.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r11,r3,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8818b0b8
	if (!ctx.cr6.lt) goto loc_8818B0B8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8818B0B8:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8818b134
	if (!ctx.cr6.lt) goto loc_8818B134;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r8,-1
	ctx.r8.s64 = -1;
	// blt cr6,0x8818b0d0
	if (ctx.cr6.lt) goto loc_8818B0D0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8818B0D0:
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addze. r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// ble 0x8818b10c
	if (!ctx.cr0.gt) goto loc_8818B10C;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8818b128
	if (!ctx.cr6.gt) goto loc_8818B128;
	// b 0x8818b124
	goto loc_8818B124;
loc_8818B10C:
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfze r7,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8818b128
	if (!ctx.cr6.lt) goto loc_8818B128;
loc_8818B124:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8818B128:
	// subf r11,r10,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r10.u64;
	// lbzx r10,r11,r18
	ctx.current_instruction = 0x8818B12C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r18.u32);
	// stb r10,0(r22)
	ctx.current_instruction = 0x8818B130;
	REX_STORE_U8(ctx.r22.u32 + 0, ctx.r10.u8);
loc_8818B134:
	// lwz r11,388(r1)
	ctx.current_instruction = 0x8818B134;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r9,120(r1)
	ctx.current_instruction = 0x8818B138;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,124(r1)
	ctx.current_instruction = 0x8818B13C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r21,r21,r11
	ctx.r21.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lwz r7,116(r1)
	ctx.current_instruction = 0x8818B144;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,112(r1)
	ctx.current_instruction = 0x8818B14C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addic. r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r4,108(r1)
	ctx.current_instruction = 0x8818B154;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r6,124(r1)
	ctx.current_instruction = 0x8818B160;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r8,120(r1)
	ctx.current_instruction = 0x8818B168;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// add r20,r20,r11
	ctx.r20.u64 = ctx.r20.u64 + ctx.r11.u64;
	// stw r9,116(r1)
	ctx.current_instruction = 0x8818B170;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// add r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 + ctx.r11.u64;
	// stw r10,112(r1)
	ctx.current_instruction = 0x8818B178;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// add r22,r22,r11
	ctx.r22.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stw r7,108(r1)
	ctx.current_instruction = 0x8818B180;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// add r16,r16,r11
	ctx.r16.u64 = ctx.r16.u64 + ctx.r11.u64;
	// add r15,r15,r11
	ctx.r15.u64 = ctx.r15.u64 + ctx.r11.u64;
	// bne 0x8818ad60
	if (!ctx.cr0.eq) goto loc_8818AD60;
loc_8818B190:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B3788) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B3788;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B3788) {
			switch (rex_dispatch_address) {
				case 0x881B3790:
				case 0x881B37F8:
				case 0x881B3850:
				case 0x881B3874:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B3788;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B3790: goto loc_881B3790;
		case 0x881B37F8: goto loc_881B37F8;
		case 0x881B3850: goto loc_881B3850;
		case 0x881B3874: goto loc_881B3874;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881B3790;
	__savegprlr_26(ctx, base);
loc_881B3790:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881B3790;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x881b37b8
	if (!ctx.cr6.eq) goto loc_881B37B8;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881B37B8:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B37C8:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x881B37C8;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x881b37c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B37C8;
	// addi r26,r28,8
	ctx.r26.s64 = ctx.r28.s64 + 8;
	// stw r27,20(r28)
	ctx.current_instruction = 0x881B37D4;
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stw r31,16(r28)
	ctx.current_instruction = 0x881B37D8;
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x881b3820
	if (!ctx.cr6.gt) goto loc_881B3820;
loc_881B37EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8815b9f8
	ctx.lr = 0x881B37F8;
	sub_8815B9F8(ctx, base);
loc_881B37F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b383c
	if (ctx.cr6.eq) goto loc_881B383C;
	// stw r31,0(r3)
	ctx.current_instruction = 0x881B3800;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r31,4(r3)
	ctx.current_instruction = 0x881B3808;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,4(r3)
	ctx.current_instruction = 0x881B380C;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// stw r3,0(r29)
	ctx.current_instruction = 0x881B3814;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// blt cr6,0x881b37ec
	if (ctx.cr6.lt) goto loc_881B37EC;
loc_881B3820:
	// stw r3,12(r28)
	ctx.current_instruction = 0x881B3820;
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// stw r31,0(r3)
	ctx.current_instruction = 0x881B3824;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,4(r28)
	ctx.current_instruction = 0x881B382C;
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,0(r28)
	ctx.current_instruction = 0x881B3830;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881B383C:
	// lwz r3,0(r26)
	ctx.current_instruction = 0x881B383C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b385c
	if (ctx.cr6.eq) goto loc_881B385C;
loc_881B3848:
	// lwz r30,0(r3)
	ctx.current_instruction = 0x881B3848;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8815ba70
	ctx.lr = 0x881B3850;
	sub_8815BA70(ctx, base);
loc_881B3850:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881b3848
	if (!ctx.cr6.eq) goto loc_881B3848;
loc_881B385C:
	// lwz r3,0(r28)
	ctx.current_instruction = 0x881B385C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,0(r26)
	ctx.current_instruction = 0x881B3860;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b3880
	if (ctx.cr6.eq) goto loc_881B3880;
loc_881B386C:
	// lwz r30,0(r3)
	ctx.current_instruction = 0x881B386C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8815ba70
	ctx.lr = 0x881B3874;
	sub_8815BA70(ctx, base);
loc_881B3874:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881b386c
	if (!ctx.cr6.eq) goto loc_881B386C;
loc_881B3880:
	// li r3,-9
	ctx.r3.s64 = -9;
	// stw r31,0(r28)
	ctx.current_instruction = 0x881B3884;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B58F8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B58F8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B58F8;
	ctx.current_instruction = 0x881B58F8;
	// std r31,-8(r1)
	ctx.current_instruction = 0x881B58F8;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r4,68(r3)
	ctx.current_instruction = 0x881B5900;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,4(r3)
	ctx.current_instruction = 0x881B590C;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x881b5924
	if (ctx.cr6.eq) goto loc_881B5924;
	// stw r31,60(r3)
	ctx.current_instruction = 0x881B5918;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r7,8(r3)
	ctx.current_instruction = 0x881B591C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// b 0x881b5928
	goto loc_881B5928;
loc_881B5924:
	// stw r7,60(r3)
	ctx.current_instruction = 0x881B5924;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
loc_881B5928:
	// lwz r11,64(r3)
	ctx.current_instruction = 0x881B5928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881b5a24
	if (!ctx.cr6.gt) goto loc_881B5A24;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// li r6,146
	ctx.r6.s64 = 146;
	// addi r9,r11,-2536
	ctx.r9.s64 = ctx.r11.s64 + -2536;
loc_881B5944:
	// lwz r10,0(r8)
	ctx.current_instruction = 0x881B5944;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,16(r10)
	ctx.current_instruction = 0x881B5948;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b59e0
	if (ctx.cr6.eq) goto loc_881B59E0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881b59e0
	if (ctx.cr6.eq) goto loc_881B59E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881b59cc
	if (ctx.cr6.eq) goto loc_881B59CC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x881b59cc
	if (ctx.cr6.eq) goto loc_881B59CC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881b5988
	if (!ctx.cr6.eq) goto loc_881B5988;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-1480
	ctx.r11.s64 = ctx.r9.s64 + -1480;
	// blt cr6,0x881b59f0
	if (ctx.cr6.lt) goto loc_881B59F0;
	// addi r11,r9,-1496
	ctx.r11.s64 = ctx.r9.s64 + -1496;
	// b 0x881b59f0
	goto loc_881B59F0;
loc_881B5988:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x881b59bc
	if (ctx.cr6.eq) goto loc_881B59BC;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x881b59b4
	if (ctx.cr6.eq) goto loc_881B59B4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x881b59f4
	if (!ctx.cr6.gt) goto loc_881B59F4;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-144
	ctx.r11.s64 = ctx.r9.s64 + -144;
	// blt cr6,0x881b59f0
	if (ctx.cr6.lt) goto loc_881B59F0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x881b59f0
	goto loc_881B59F0;
loc_881B59B4:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x881b5a10
	if (!ctx.cr6.eq) goto loc_881B5A10;
loc_881B59BC:
	// addi r11,r9,-1744
	ctx.r11.s64 = ctx.r9.s64 + -1744;
	// stw r6,12(r10)
	ctx.current_instruction = 0x881B59C0;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r11,8(r10)
	ctx.current_instruction = 0x881B59C4;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x881b5a10
	goto loc_881B5A10;
loc_881B59CC:
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-464
	ctx.r11.s64 = ctx.r9.s64 + -464;
	// blt cr6,0x881b59f0
	if (ctx.cr6.lt) goto loc_881B59F0;
	// addi r11,r9,-784
	ctx.r11.s64 = ctx.r9.s64 + -784;
	// b 0x881b59f0
	goto loc_881B59F0;
loc_881B59E0:
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r11,r9,-1104
	ctx.r11.s64 = ctx.r9.s64 + -1104;
	// blt cr6,0x881b59f0
	if (ctx.cr6.lt) goto loc_881B59F0;
	// addi r11,r9,-1424
	ctx.r11.s64 = ctx.r9.s64 + -1424;
loc_881B59F0:
	// stw r11,32(r10)
	ctx.current_instruction = 0x881B59F0;
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_881B59F4:
	// lwz r11,32(r10)
	ctx.current_instruction = 0x881B59F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.current_instruction = 0x881B59FC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r5,32(r10)
	ctx.current_instruction = 0x881B5A00;
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// slw r5,r31,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,28(r10)
	ctx.current_instruction = 0x881B5A08;
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r5,24(r10)
	ctx.current_instruction = 0x881B5A0C;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r5.u32);
loc_881B5A10:
	// lwz r11,64(r3)
	ctx.current_instruction = 0x881B5A10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881b5944
	if (ctx.cr6.lt) goto loc_881B5944;
loc_881B5A24:
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881B5A24;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881BB748) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881BB748;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881BB748) {
			switch (rex_dispatch_address) {
				case 0x881BB750:
				case 0x881BB89C:
				case 0x881BB8F4:
				case 0x881BB94C:
				case 0x881BB980:
				case 0x881BBA10:
				case 0x881BBA5C:
				case 0x881BBA84:
				case 0x881BBAE0:
				case 0x881BBB0C:
				case 0x881BBB6C:
				case 0x881BBBC4:
				case 0x881BBBEC:
				case 0x881BBC48:
				case 0x881BBCA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881BB748;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881BB750: goto loc_881BB750;
		case 0x881BB89C: goto loc_881BB89C;
		case 0x881BB8F4: goto loc_881BB8F4;
		case 0x881BB94C: goto loc_881BB94C;
		case 0x881BB980: goto loc_881BB980;
		case 0x881BBA10: goto loc_881BBA10;
		case 0x881BBA5C: goto loc_881BBA5C;
		case 0x881BBA84: goto loc_881BBA84;
		case 0x881BBAE0: goto loc_881BBAE0;
		case 0x881BBB0C: goto loc_881BBB0C;
		case 0x881BBB6C: goto loc_881BBB6C;
		case 0x881BBBC4: goto loc_881BBBC4;
		case 0x881BBBEC: goto loc_881BBBEC;
		case 0x881BBC48: goto loc_881BBC48;
		case 0x881BBCA0: goto loc_881BBCA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881BB750;
	__savegprlr_14(ctx, base);
loc_881BB750:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x881BB750;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,332(r1)
	ctx.current_instruction = 0x881BB758;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r7,340(r1)
	ctx.current_instruction = 0x881BB760;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// beq cr6,0x881bb7a8
	if (ctx.cr6.eq) goto loc_881BB7A8;
	// lwz r11,-24(r4)
	ctx.current_instruction = 0x881BB780;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -24);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881bb79c
	if (!ctx.cr6.eq) goto loc_881BB79C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,120(r1)
	ctx.current_instruction = 0x881BB794;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x881bb7ac
	goto loc_881BB7AC;
loc_881BB79C:
	// li r17,1
	ctx.r17.s64 = 1;
	// stw r23,120(r1)
	ctx.current_instruction = 0x881BB7A0;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// b 0x881bb7b0
	goto loc_881BB7B0;
loc_881BB7A8:
	// stw r23,120(r1)
	ctx.current_instruction = 0x881BB7A8;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
loc_881BB7AC:
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
loc_881BB7B0:
	// lwz r30,372(r1)
	ctx.current_instruction = 0x881BB7B0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881bb7f4
	if (ctx.cr6.eq) goto loc_881BB7F4;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881BB7BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r10.u64;
	// lwz r8,0(r9)
	ctx.current_instruction = 0x881BB7D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881bb7e8
	if (!ctx.cr6.eq) goto loc_881BB7E8;
	// li r16,1
	ctx.r16.s64 = 1;
	// b 0x881bb7f8
	goto loc_881BB7F8;
loc_881BB7E8:
	// mr r16,r23
	ctx.r16.u64 = ctx.r23.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x881bb7fc
	goto loc_881BB7FC;
loc_881BB7F4:
	// mr r16,r23
	ctx.r16.u64 = ctx.r23.u64;
loc_881BB7F8:
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
loc_881BB7FC:
	// lwz r19,380(r1)
	ctx.current_instruction = 0x881BB7FC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x881bb844
	if (ctx.cr6.eq) goto loc_881BB844;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881BB808;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r10.u64;
	// lwz r8,0(r9)
	ctx.current_instruction = 0x881BB820;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x881bb838
	if (!ctx.cr6.eq) goto loc_881BB838;
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x881bb848
	goto loc_881BB848;
loc_881BB838:
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// b 0x881bb84c
	goto loc_881BB84C;
loc_881BB844:
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
loc_881BB848:
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
loc_881BB84C:
	// lwz r11,396(r31)
	ctx.current_instruction = 0x881BB84C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881bb87c
	if (ctx.cr6.eq) goto loc_881BB87C;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x881BB858;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
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
	// add r24,r10,r31
	ctx.r24.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r20,r11,r31
	ctx.r20.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x881bb884
	goto loc_881BB884;
loc_881BB87C:
	// addi r20,r31,2916
	ctx.r20.s64 = ctx.r31.s64 + 2916;
	// addi r24,r31,2928
	ctx.r24.s64 = ctx.r31.s64 + 2928;
loc_881BB884:
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,300(r31)
	ctx.current_instruction = 0x881BB888;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,2096(r31)
	ctx.current_instruction = 0x881BB890;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c6198
	ctx.lr = 0x881BB89C;
	sub_881C6198(ctx, base);
loc_881BB89C:
	// lwz r3,112(r1)
	ctx.current_instruction = 0x881BB89C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881bbca0
	if (!ctx.cr6.eq) goto loc_881BBCA0;
	// lwz r4,204(r31)
	ctx.current_instruction = 0x881BB8A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lbz r9,20(r29)
	ctx.current_instruction = 0x881BB8B0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 20);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,300(r31)
	ctx.current_instruction = 0x881BB8B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// rlwinm r30,r9,31,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// stw r8,92(r1)
	ctx.current_instruction = 0x881BB8C4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// stw r22,84(r1)
	ctx.current_instruction = 0x881BB8CC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r4,100(r1)
	ctx.current_instruction = 0x881BB8D0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// stw r30,116(r1)
	ctx.current_instruction = 0x881BB8DC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r11,108(r1)
	ctx.current_instruction = 0x881BB8E4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b8f40
	ctx.lr = 0x881BB8F4;
	sub_881B8F40(ctx, base);
loc_881BB8F4:
	// lwz r11,1764(r31)
	ctx.current_instruction = 0x881BB8F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lhz r7,0(r3)
	ctx.current_instruction = 0x881BB8F8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881BB900;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r30,84(r1)
	ctx.current_instruction = 0x881BB908;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r23,92(r1)
	ctx.current_instruction = 0x881BB914;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// sth r7,0(r26)
	ctx.current_instruction = 0x881BB924;
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r7,1764(r31)
	ctx.current_instruction = 0x881BB92C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r30,300(r31)
	ctx.current_instruction = 0x881BB934;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// stw r11,0(r7)
	ctx.current_instruction = 0x881BB93C;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,204(r31)
	ctx.current_instruction = 0x881BB944;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x881b7b10
	ctx.lr = 0x881BB94C;
	sub_881B7B10(ctx, base);
loc_881BB94C:
	// stw r3,112(r1)
	ctx.current_instruction = 0x881BB94C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881bbca0
	if (!ctx.cr6.eq) goto loc_881BBCA0;
	// addi r27,r28,8
	ctx.r27.s64 = ctx.r28.s64 + 8;
	// addi r30,r26,32
	ctx.r30.s64 = ctx.r26.s64 + 32;
	// addi r26,r25,24
	ctx.r26.s64 = ctx.r25.s64 + 24;
	// li r28,1
	ctx.r28.s64 = 1;
loc_881BB968:
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,300(r31)
	ctx.current_instruction = 0x881BB96C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,2096(r31)
	ctx.current_instruction = 0x881BB974;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c6198
	ctx.lr = 0x881BB980;
	sub_881C6198(ctx, base);
loc_881BB980:
	// lwz r3,112(r1)
	ctx.current_instruction = 0x881BB980;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881bbca0
	if (!ctx.cr6.eq) goto loc_881BBCA0;
	// addi r25,r28,1
	ctx.r25.s64 = ctx.r28.s64 + 1;
	// lbz r11,20(r29)
	ctx.current_instruction = 0x881BB990;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r25
	ctx.r9.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r25.u8 & 0x3F));
	// lwz r10,120(r1)
	ctx.current_instruction = 0x881BB99C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// sraw. r11,r8,r25
	temp.u32 = ctx.r25.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,116(r1)
	ctx.current_instruction = 0x881BB9A8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq 0x881bb9b4
	if (ctx.cr0.eq) goto loc_881BB9B4;
	// addi r10,r16,2
	ctx.r10.s64 = ctx.r16.s64 + 2;
loc_881BB9B4:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,1764(r31)
	ctx.current_instruction = 0x881BB9B8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// stw r11,84(r1)
	ctx.current_instruction = 0x881BB9BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r23,92(r1)
	ctx.current_instruction = 0x881BB9C4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r9,r26
	ctx.current_instruction = 0x881BB9D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r11,0(r5)
	ctx.current_instruction = 0x881BB9DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r7,0(r10)
	ctx.current_instruction = 0x881BB9E4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sth r7,0(r30)
	ctx.current_instruction = 0x881BB9F0;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r14,1764(r31)
	ctx.current_instruction = 0x881BB9F8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lwz r7,300(r31)
	ctx.current_instruction = 0x881BB9FC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// stw r11,0(r14)
	ctx.current_instruction = 0x881BBA04;
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// lwz r7,204(r31)
	ctx.current_instruction = 0x881BBA08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x881b7b10
	ctx.lr = 0x881BBA10;
	sub_881B7B10(ctx, base);
loc_881BBA10:
	// stw r3,112(r1)
	ctx.current_instruction = 0x881BBA10;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881bbca0
	if (!ctx.cr6.eq) goto loc_881BBCA0;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne cr6,0x881bba2c
	if (!ctx.cr6.eq) goto loc_881BBA2C;
	// lwz r11,236(r31)
	ctx.current_instruction = 0x881BBA28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
loc_881BBA2C:
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 3, ctx.xer);
	// blt cr6,0x881bb968
	if (ctx.cr6.lt) goto loc_881BB968;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,300(r31)
	ctx.current_instruction = 0x881BBA48;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,2096(r31)
	ctx.current_instruction = 0x881BBA50;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c6198
	ctx.lr = 0x881BBA5C;
	sub_881C6198(ctx, base);
loc_881BBA5C:
	// lwz r3,112(r1)
	ctx.current_instruction = 0x881BBA5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881bbca0
	if (!ctx.cr6.eq) goto loc_881BBCA0;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lwz r5,120(r1)
	ctx.current_instruction = 0x881BBA6C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b7fd8
	ctx.lr = 0x881BBA84;
	sub_881B7FD8(ctx, base);
loc_881BBA84:
	// lwz r11,1764(r31)
	ctx.current_instruction = 0x881BBA84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lhz r7,0(r3)
	ctx.current_instruction = 0x881BBA88;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r28,116(r1)
	ctx.current_instruction = 0x881BBA90;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r23,92(r1)
	ctx.current_instruction = 0x881BBA9C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881BBAA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r28,84(r1)
	ctx.current_instruction = 0x881BBAB4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// sth r7,0(r30)
	ctx.current_instruction = 0x881BBAC4;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r7.u16);
	// lwz r7,300(r31)
	ctx.current_instruction = 0x881BBAC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 300);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r7,1764(r31)
	ctx.current_instruction = 0x881BBAD0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// stw r11,0(r7)
	ctx.current_instruction = 0x881BBAD4;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r7,204(r31)
	ctx.current_instruction = 0x881BBAD8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x881b7b10
	ctx.lr = 0x881BBAE0;
	sub_881B7B10(ctx, base);
loc_881BBAE0:
	// stw r3,112(r1)
	ctx.current_instruction = 0x881BBAE0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881bbca0
	if (!ctx.cr6.eq) goto loc_881BBCA0;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,304(r31)
	ctx.current_instruction = 0x881BBAF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,2100(r31)
	ctx.current_instruction = 0x881BBAF8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r28,r26,24
	ctx.r28.s64 = ctx.r26.s64 + 24;
	// bl 0x881c6198
	ctx.lr = 0x881BBB0C;
	sub_881C6198(ctx, base);
loc_881BBB0C:
	// lwz r3,112(r1)
	ctx.current_instruction = 0x881BBB0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881bbca0
	if (!ctx.cr6.eq) goto loc_881BBCA0;
	// lbz r11,20(r29)
	ctx.current_instruction = 0x881BBB18;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 20);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r3,304(r31)
	ctx.current_instruction = 0x881BBB20;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881BBB2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r26,332(r1)
	ctx.current_instruction = 0x881BBB30;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// stw r27,116(r1)
	ctx.current_instruction = 0x881BBB38;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// lwz r25,372(r1)
	ctx.current_instruction = 0x881BBB40;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r5,92(r1)
	ctx.current_instruction = 0x881BBB48;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// stw r3,108(r1)
	ctx.current_instruction = 0x881BBB50;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r22,84(r1)
	ctx.current_instruction = 0x881BBB5C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x881BBB64;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x881b8f40
	ctx.lr = 0x881BBB6C;
	sub_881B8F40(ctx, base);
loc_881BBB6C:
	// lwz r7,1764(r31)
	ctx.current_instruction = 0x881BBB6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lhz r11,0(r3)
	ctx.current_instruction = 0x881BBB70;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r7,0(r7)
	ctx.current_instruction = 0x881BBB78;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	ctx.current_instruction = 0x881BBB80;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r23,92(r1)
	ctx.current_instruction = 0x881BBB8C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// sth r7,0(r30)
	ctx.current_instruction = 0x881BBB9C;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r7,1764(r31)
	ctx.current_instruction = 0x881BBBA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r27,304(r31)
	ctx.current_instruction = 0x881BBBAC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// stw r11,0(r7)
	ctx.current_instruction = 0x881BBBB4;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,208(r31)
	ctx.current_instruction = 0x881BBBBC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x881b7b10
	ctx.lr = 0x881BBBC4;
	sub_881B7B10(ctx, base);
loc_881BBBC4:
	// stw r3,112(r1)
	ctx.current_instruction = 0x881BBBC4;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881bbca0
	if (!ctx.cr6.eq) goto loc_881BBCA0;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,304(r31)
	ctx.current_instruction = 0x881BBBD4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,2100(r31)
	ctx.current_instruction = 0x881BBBDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bl 0x881c6198
	ctx.lr = 0x881BBBEC;
	sub_881C6198(ctx, base);
loc_881BBBEC:
	// lwz r3,112(r1)
	ctx.current_instruction = 0x881BBBEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881bbca0
	if (!ctx.cr6.eq) goto loc_881BBCA0;
	// lbz r8,20(r29)
	ctx.current_instruction = 0x881BBBF8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 20);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r11,304(r31)
	ctx.current_instruction = 0x881BBC00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// addi r5,r28,24
	ctx.r5.s64 = ctx.r28.s64 + 24;
	// rlwinm r27,r8,26,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// stw r3,92(r1)
	ctx.current_instruction = 0x881BBC0C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r22,84(r1)
	ctx.current_instruction = 0x881BBC10;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r27,116(r1)
	ctx.current_instruction = 0x881BBC18;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// lwz r7,208(r31)
	ctx.current_instruction = 0x881BBC20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// stw r11,108(r1)
	ctx.current_instruction = 0x881BBC28;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r28,340(r1)
	ctx.current_instruction = 0x881BBC30;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r7,100(r1)
	ctx.current_instruction = 0x881BBC3C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x881b8f40
	ctx.lr = 0x881BBC48;
	sub_881B8F40(ctx, base);
loc_881BBC48:
	// lwz r7,1764(r31)
	ctx.current_instruction = 0x881BBC48;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// lhz r11,0(r3)
	ctx.current_instruction = 0x881BBC4C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	ctx.current_instruction = 0x881BBC54;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r7,0(r7)
	ctx.current_instruction = 0x881BBC5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r23,92(r1)
	ctx.current_instruction = 0x881BBC64;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// sth r7,0(r30)
	ctx.current_instruction = 0x881BBC7C;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r7,1764(r31)
	ctx.current_instruction = 0x881BBC84;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1764);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,304(r31)
	ctx.current_instruction = 0x881BBC8C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// stw r11,0(r7)
	ctx.current_instruction = 0x881BBC94;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.current_instruction = 0x881BBC98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x881b7b10
	ctx.lr = 0x881BBCA0;
	sub_881B7B10(ctx, base);
loc_881BBCA0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CD678) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CD678;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CD678) {
			switch (rex_dispatch_address) {
				case 0x881CD680:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CD678;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881CD680: goto loc_881CD680;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881CD680;
	__savegprlr_14(ctx, base);
loc_881CD680:
	// lis r11,-30686
	ctx.r11.s64 = -2011037696;
	// lis r9,-30686
	ctx.r9.s64 = -2011037696;
	// stw r11,-160(r1)
	ctx.current_instruction = 0x881CD688;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-30686
	ctx.r10.s64 = -2011037696;
	// lis r8,-30686
	ctx.r8.s64 = -2011037696;
	// lis r6,-30686
	ctx.r6.s64 = -2011037696;
	// lis r5,-30686
	ctx.r5.s64 = -2011037696;
	// lis r3,-30686
	ctx.r3.s64 = -2011037696;
	// lis r11,-30686
	ctx.r11.s64 = -2011037696;
	// addi r9,r9,-26592
	ctx.r9.s64 = ctx.r9.s64 + -26592;
	// addi r10,r10,-26952
	ctx.r10.s64 = ctx.r10.s64 + -26952;
	// addi r8,r8,-26512
	ctx.r8.s64 = ctx.r8.s64 + -26512;
	// stw r9,708(r4)
	ctx.current_instruction = 0x881CD6B4;
	REX_STORE_U32(ctx.r4.u32 + 708, ctx.r9.u32);
	// lis r30,-30686
	ctx.r30.s64 = -2011037696;
	// stw r10,704(r4)
	ctx.current_instruction = 0x881CD6BC;
	REX_STORE_U32(ctx.r4.u32 + 704, ctx.r10.u32);
	// addi r7,r7,-26432
	ctx.r7.s64 = ctx.r7.s64 + -26432;
	// stw r8,712(r4)
	ctx.current_instruction = 0x881CD6C4;
	REX_STORE_U32(ctx.r4.u32 + 712, ctx.r8.u32);
	// addi r6,r6,-26352
	ctx.r6.s64 = ctx.r6.s64 + -26352;
	// addi r5,r5,-26232
	ctx.r5.s64 = ctx.r5.s64 + -26232;
	// stw r7,716(r4)
	ctx.current_instruction = 0x881CD6D0;
	REX_STORE_U32(ctx.r4.u32 + 716, ctx.r7.u32);
	// addi r3,r3,-25280
	ctx.r3.s64 = ctx.r3.s64 + -25280;
	// stw r6,720(r4)
	ctx.current_instruction = 0x881CD6D8;
	REX_STORE_U32(ctx.r4.u32 + 720, ctx.r6.u32);
	// addi r11,r11,-25168
	ctx.r11.s64 = ctx.r11.s64 + -25168;
	// stw r5,724(r4)
	ctx.current_instruction = 0x881CD6E0;
	REX_STORE_U32(ctx.r4.u32 + 724, ctx.r5.u32);
	// lis r31,-30686
	ctx.r31.s64 = -2011037696;
	// stw r3,728(r4)
	ctx.current_instruction = 0x881CD6E8;
	REX_STORE_U32(ctx.r4.u32 + 728, ctx.r3.u32);
	// lis r29,-30686
	ctx.r29.s64 = -2011037696;
	// stw r11,732(r4)
	ctx.current_instruction = 0x881CD6F0;
	REX_STORE_U32(ctx.r4.u32 + 732, ctx.r11.u32);
	// lis r28,-30686
	ctx.r28.s64 = -2011037696;
	// lis r27,-30686
	ctx.r27.s64 = -2011037696;
	// lis r26,-30686
	ctx.r26.s64 = -2011037696;
	// lis r25,-30686
	ctx.r25.s64 = -2011037696;
	// lis r24,-30686
	ctx.r24.s64 = -2011037696;
	// addi r9,r30,-24096
	ctx.r9.s64 = ctx.r30.s64 + -24096;
	// addi r10,r31,-24208
	ctx.r10.s64 = ctx.r31.s64 + -24208;
	// addi r8,r29,-23144
	ctx.r8.s64 = ctx.r29.s64 + -23144;
	// stw r9,740(r4)
	ctx.current_instruction = 0x881CD714;
	REX_STORE_U32(ctx.r4.u32 + 740, ctx.r9.u32);
	// lis r22,-30686
	ctx.r22.s64 = -2011037696;
	// stw r10,736(r4)
	ctx.current_instruction = 0x881CD71C;
	REX_STORE_U32(ctx.r4.u32 + 736, ctx.r10.u32);
	// addi r7,r28,-23032
	ctx.r7.s64 = ctx.r28.s64 + -23032;
	// stw r8,744(r4)
	ctx.current_instruction = 0x881CD724;
	REX_STORE_U32(ctx.r4.u32 + 744, ctx.r8.u32);
	// addi r6,r27,-22072
	ctx.r6.s64 = ctx.r27.s64 + -22072;
	// addi r5,r26,-21952
	ctx.r5.s64 = ctx.r26.s64 + -21952;
	// stw r7,748(r4)
	ctx.current_instruction = 0x881CD730;
	REX_STORE_U32(ctx.r4.u32 + 748, ctx.r7.u32);
	// addi r3,r25,-21000
	ctx.r3.s64 = ctx.r25.s64 + -21000;
	// stw r6,752(r4)
	ctx.current_instruction = 0x881CD738;
	REX_STORE_U32(ctx.r4.u32 + 752, ctx.r6.u32);
	// addi r11,r24,-20888
	ctx.r11.s64 = ctx.r24.s64 + -20888;
	// stw r5,756(r4)
	ctx.current_instruction = 0x881CD740;
	REX_STORE_U32(ctx.r4.u32 + 756, ctx.r5.u32);
	// lis r23,-30686
	ctx.r23.s64 = -2011037696;
	// stw r3,760(r4)
	ctx.current_instruction = 0x881CD748;
	REX_STORE_U32(ctx.r4.u32 + 760, ctx.r3.u32);
	// lis r21,-30686
	ctx.r21.s64 = -2011037696;
	// stw r11,764(r4)
	ctx.current_instruction = 0x881CD750;
	REX_STORE_U32(ctx.r4.u32 + 764, ctx.r11.u32);
	// lis r20,-30686
	ctx.r20.s64 = -2011037696;
	// lis r19,-30686
	ctx.r19.s64 = -2011037696;
	// lis r18,-30686
	ctx.r18.s64 = -2011037696;
	// lis r17,-30686
	ctx.r17.s64 = -2011037696;
	// lis r16,-30686
	ctx.r16.s64 = -2011037696;
	// lis r14,-30686
	ctx.r14.s64 = -2011037696;
	// addi r9,r22,-4496
	ctx.r9.s64 = ctx.r22.s64 + -4496;
	// addi r10,r23,-7032
	ctx.r10.s64 = ctx.r23.s64 + -7032;
	// stw r14,-160(r1)
	ctx.current_instruction = 0x881CD774;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r8,r21,-4304
	ctx.r8.s64 = ctx.r21.s64 + -4304;
	// stw r9,836(r4)
	ctx.current_instruction = 0x881CD77C;
	REX_STORE_U32(ctx.r4.u32 + 836, ctx.r9.u32);
	// lis r15,-30686
	ctx.r15.s64 = -2011037696;
	// lwz r9,-160(r1)
	ctx.current_instruction = 0x881CD784;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// addi r7,r20,-4400
	ctx.r7.s64 = ctx.r20.s64 + -4400;
	// stw r10,832(r4)
	ctx.current_instruction = 0x881CD78C;
	REX_STORE_U32(ctx.r4.u32 + 832, ctx.r10.u32);
	// addi r6,r19,-4216
	ctx.r6.s64 = ctx.r19.s64 + -4216;
	// stw r8,840(r4)
	ctx.current_instruction = 0x881CD794;
	REX_STORE_U32(ctx.r4.u32 + 840, ctx.r8.u32);
	// addi r5,r18,-2952
	ctx.r5.s64 = ctx.r18.s64 + -2952;
	// stw r7,844(r4)
	ctx.current_instruction = 0x881CD79C;
	REX_STORE_U32(ctx.r4.u32 + 844, ctx.r7.u32);
	// addi r3,r17,2408
	ctx.r3.s64 = ctx.r17.s64 + 2408;
	// stw r6,848(r4)
	ctx.current_instruction = 0x881CD7A4;
	REX_STORE_U32(ctx.r4.u32 + 848, ctx.r6.u32);
	// addi r11,r16,-1616
	ctx.r11.s64 = ctx.r16.s64 + -1616;
	// stw r5,852(r4)
	ctx.current_instruction = 0x881CD7AC;
	REX_STORE_U32(ctx.r4.u32 + 852, ctx.r5.u32);
	// lis r14,-30686
	ctx.r14.s64 = -2011037696;
	// stw r3,856(r4)
	ctx.current_instruction = 0x881CD7B4;
	REX_STORE_U32(ctx.r4.u32 + 856, ctx.r3.u32);
	// addi r10,r15,3640
	ctx.r10.s64 = ctx.r15.s64 + 3640;
	// stw r11,860(r4)
	ctx.current_instruction = 0x881CD7BC;
	REX_STORE_U32(ctx.r4.u32 + 860, ctx.r11.u32);
	// addi r8,r9,4120
	ctx.r8.s64 = ctx.r9.s64 + 4120;
	// addi r7,r14,6592
	ctx.r7.s64 = ctx.r14.s64 + 6592;
	// stw r10,864(r4)
	ctx.current_instruction = 0x881CD7C8;
	REX_STORE_U32(ctx.r4.u32 + 864, ctx.r10.u32);
	// lis r6,-30686
	ctx.r6.s64 = -2011037696;
	// stw r8,868(r4)
	ctx.current_instruction = 0x881CD7D0;
	REX_STORE_U32(ctx.r4.u32 + 868, ctx.r8.u32);
	// stw r7,872(r4)
	ctx.current_instruction = 0x881CD7D4;
	REX_STORE_U32(ctx.r4.u32 + 872, ctx.r7.u32);
	// lis r5,-30686
	ctx.r5.s64 = -2011037696;
	// lis r3,-30686
	ctx.r3.s64 = -2011037696;
	// stw r6,-160(r1)
	ctx.current_instruction = 0x881CD7E0;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r6.u32);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lis r11,-30686
	ctx.r11.s64 = -2011037696;
	// lis r9,-30686
	ctx.r9.s64 = -2011037696;
	// lis r8,-30686
	ctx.r8.s64 = -2011037696;
	// lis r7,-30686
	ctx.r7.s64 = -2011037696;
	// addi r5,r5,5352
	ctx.r5.s64 = ctx.r5.s64 + 5352;
	// addi r3,r3,-3584
	ctx.r3.s64 = ctx.r3.s64 + -3584;
	// addi r11,r11,-272
	ctx.r11.s64 = ctx.r11.s64 + -272;
	// stw r5,876(r4)
	ctx.current_instruction = 0x881CD804;
	REX_STORE_U32(ctx.r4.u32 + 876, ctx.r5.u32);
	// addi r10,r10,3024
	ctx.r10.s64 = ctx.r10.s64 + 3024;
	// stw r3,880(r4)
	ctx.current_instruction = 0x881CD80C;
	REX_STORE_U32(ctx.r4.u32 + 880, ctx.r3.u32);
	// addi r9,r9,1064
	ctx.r9.s64 = ctx.r9.s64 + 1064;
	// stw r11,884(r4)
	ctx.current_instruction = 0x881CD814;
	REX_STORE_U32(ctx.r4.u32 + 884, ctx.r11.u32);
	// addi r8,r8,28424
	ctx.r8.s64 = ctx.r8.s64 + 28424;
	// stw r10,888(r4)
	ctx.current_instruction = 0x881CD81C;
	REX_STORE_U32(ctx.r4.u32 + 888, ctx.r10.u32);
	// addi r7,r7,28896
	ctx.r7.s64 = ctx.r7.s64 + 28896;
	// stw r9,892(r4)
	ctx.current_instruction = 0x881CD824;
	REX_STORE_U32(ctx.r4.u32 + 892, ctx.r9.u32);
	// lis r6,-30686
	ctx.r6.s64 = -2011037696;
	// stw r8,964(r4)
	ctx.current_instruction = 0x881CD82C;
	REX_STORE_U32(ctx.r4.u32 + 964, ctx.r8.u32);
	// lis r31,-30686
	ctx.r31.s64 = -2011037696;
	// stw r7,968(r4)
	ctx.current_instruction = 0x881CD834;
	REX_STORE_U32(ctx.r4.u32 + 968, ctx.r7.u32);
	// lis r30,-30686
	ctx.r30.s64 = -2011037696;
	// lis r29,-30686
	ctx.r29.s64 = -2011037696;
	// lis r28,-30686
	ctx.r28.s64 = -2011037696;
	// lis r27,-30686
	ctx.r27.s64 = -2011037696;
	// lis r26,-30685
	ctx.r26.s64 = -2010972160;
	// lis r25,-30685
	ctx.r25.s64 = -2010972160;
	// addi r6,r6,28984
	ctx.r6.s64 = ctx.r6.s64 + 28984;
	// addi r5,r31,29072
	ctx.r5.s64 = ctx.r31.s64 + 29072;
	// addi r3,r30,29160
	ctx.r3.s64 = ctx.r30.s64 + 29160;
	// stw r6,972(r4)
	ctx.current_instruction = 0x881CD85C;
	REX_STORE_U32(ctx.r4.u32 + 972, ctx.r6.u32);
	// addi r11,r29,29776
	ctx.r11.s64 = ctx.r29.s64 + 29776;
	// stw r5,976(r4)
	ctx.current_instruction = 0x881CD864;
	REX_STORE_U32(ctx.r4.u32 + 976, ctx.r5.u32);
	// addi r10,r28,31144
	ctx.r10.s64 = ctx.r28.s64 + 31144;
	// stw r3,980(r4)
	ctx.current_instruction = 0x881CD86C;
	REX_STORE_U32(ctx.r4.u32 + 980, ctx.r3.u32);
	// addi r9,r27,31784
	ctx.r9.s64 = ctx.r27.s64 + 31784;
	// stw r11,984(r4)
	ctx.current_instruction = 0x881CD874;
	REX_STORE_U32(ctx.r4.u32 + 984, ctx.r11.u32);
	// addi r8,r26,-32376
	ctx.r8.s64 = ctx.r26.s64 + -32376;
	// stw r10,988(r4)
	ctx.current_instruction = 0x881CD87C;
	REX_STORE_U32(ctx.r4.u32 + 988, ctx.r10.u32);
	// addi r7,r25,-31888
	ctx.r7.s64 = ctx.r25.s64 + -31888;
	// stw r9,992(r4)
	ctx.current_instruction = 0x881CD884;
	REX_STORE_U32(ctx.r4.u32 + 992, ctx.r9.u32);
	// lis r24,-30685
	ctx.r24.s64 = -2010972160;
	// stw r8,996(r4)
	ctx.current_instruction = 0x881CD88C;
	REX_STORE_U32(ctx.r4.u32 + 996, ctx.r8.u32);
	// lis r23,-30685
	ctx.r23.s64 = -2010972160;
	// stw r7,1000(r4)
	ctx.current_instruction = 0x881CD894;
	REX_STORE_U32(ctx.r4.u32 + 1000, ctx.r7.u32);
	// lis r22,-30685
	ctx.r22.s64 = -2010972160;
	// lis r21,-30685
	ctx.r21.s64 = -2010972160;
	// lis r20,-30685
	ctx.r20.s64 = -2010972160;
	// lis r19,-30685
	ctx.r19.s64 = -2010972160;
	// lis r18,-30686
	ctx.r18.s64 = -2011037696;
	// lis r17,-30686
	ctx.r17.s64 = -2011037696;
	// addi r6,r24,-30624
	ctx.r6.s64 = ctx.r24.s64 + -30624;
	// addi r5,r23,-30112
	ctx.r5.s64 = ctx.r23.s64 + -30112;
	// addi r3,r22,-28840
	ctx.r3.s64 = ctx.r22.s64 + -28840;
	// stw r6,1004(r4)
	ctx.current_instruction = 0x881CD8BC;
	REX_STORE_U32(ctx.r4.u32 + 1004, ctx.r6.u32);
	// lis r16,-30686
	ctx.r16.s64 = -2011037696;
	// stw r5,1008(r4)
	ctx.current_instruction = 0x881CD8C4;
	REX_STORE_U32(ctx.r4.u32 + 1008, ctx.r5.u32);
	// lis r15,-30686
	ctx.r15.s64 = -2011037696;
	// stw r3,1012(r4)
	ctx.current_instruction = 0x881CD8CC;
	REX_STORE_U32(ctx.r4.u32 + 1012, ctx.r3.u32);
	// addi r11,r21,-28224
	ctx.r11.s64 = ctx.r21.s64 + -28224;
	// addi r10,r20,-26856
	ctx.r10.s64 = ctx.r20.s64 + -26856;
	// addi r9,r19,-26216
	ctx.r9.s64 = ctx.r19.s64 + -26216;
	// stw r11,1016(r4)
	ctx.current_instruction = 0x881CD8DC;
	REX_STORE_U32(ctx.r4.u32 + 1016, ctx.r11.u32);
	// addi r8,r18,-7032
	ctx.r8.s64 = ctx.r18.s64 + -7032;
	// stw r10,1020(r4)
	ctx.current_instruction = 0x881CD8E4;
	REX_STORE_U32(ctx.r4.u32 + 1020, ctx.r10.u32);
	// addi r7,r17,12984
	ctx.r7.s64 = ctx.r17.s64 + 12984;
	// stw r9,1024(r4)
	ctx.current_instruction = 0x881CD8EC;
	REX_STORE_U32(ctx.r4.u32 + 1024, ctx.r9.u32);
	// lis r14,-30686
	ctx.r14.s64 = -2011037696;
	// stw r8,896(r4)
	ctx.current_instruction = 0x881CD8F4;
	REX_STORE_U32(ctx.r4.u32 + 896, ctx.r8.u32);
	// addi r6,r16,13016
	ctx.r6.s64 = ctx.r16.s64 + 13016;
	// stw r7,900(r4)
	ctx.current_instruction = 0x881CD8FC;
	REX_STORE_U32(ctx.r4.u32 + 900, ctx.r7.u32);
	// lis r5,-30686
	ctx.r5.s64 = -2011037696;
	// addi r3,r15,13048
	ctx.r3.s64 = ctx.r15.s64 + 13048;
	// addi r11,r14,13080
	ctx.r11.s64 = ctx.r14.s64 + 13080;
	// stw r6,904(r4)
	ctx.current_instruction = 0x881CD90C;
	REX_STORE_U32(ctx.r4.u32 + 904, ctx.r6.u32);
	// lis r10,-30686
	ctx.r10.s64 = -2011037696;
	// stw r3,908(r4)
	ctx.current_instruction = 0x881CD914;
	REX_STORE_U32(ctx.r4.u32 + 908, ctx.r3.u32);
	// addi r5,r5,13112
	ctx.r5.s64 = ctx.r5.s64 + 13112;
	// stw r11,912(r4)
	ctx.current_instruction = 0x881CD91C;
	REX_STORE_U32(ctx.r4.u32 + 912, ctx.r11.u32);
	// lis r8,-30686
	ctx.r8.s64 = -2011037696;
	// lis r3,-30686
	ctx.r3.s64 = -2011037696;
	// stw r5,916(r4)
	ctx.current_instruction = 0x881CD928;
	REX_STORE_U32(ctx.r4.u32 + 916, ctx.r5.u32);
	// lis r9,-30686
	ctx.r9.s64 = -2011037696;
	// lis r7,-30686
	ctx.r7.s64 = -2011037696;
	// lis r6,-30686
	ctx.r6.s64 = -2011037696;
	// addi r10,r10,13696
	ctx.r10.s64 = ctx.r10.s64 + 13696;
	// addi r8,r8,15208
	ctx.r8.s64 = ctx.r8.s64 + 15208;
	// lis r11,-30686
	ctx.r11.s64 = -2011037696;
	// stw r10,920(r4)
	ctx.current_instruction = 0x881CD944;
	REX_STORE_U32(ctx.r4.u32 + 920, ctx.r10.u32);
	// lis r30,-30686
	ctx.r30.s64 = -2011037696;
	// stw r8,928(r4)
	ctx.current_instruction = 0x881CD94C;
	REX_STORE_U32(ctx.r4.u32 + 928, ctx.r8.u32);
	// addi r5,r3,17248
	ctx.r5.s64 = ctx.r3.s64 + 17248;
	// addi r9,r9,15120
	ctx.r9.s64 = ctx.r9.s64 + 15120;
	// addi r7,r7,15240
	ctx.r7.s64 = ctx.r7.s64 + 15240;
	// stw r5,940(r4)
	ctx.current_instruction = 0x881CD95C;
	REX_STORE_U32(ctx.r4.u32 + 940, ctx.r5.u32);
	// addi r6,r6,15824
	ctx.r6.s64 = ctx.r6.s64 + 15824;
	// stw r9,924(r4)
	ctx.current_instruction = 0x881CD964;
	REX_STORE_U32(ctx.r4.u32 + 924, ctx.r9.u32);
	// lis r31,-30686
	ctx.r31.s64 = -2011037696;
	// stw r7,932(r4)
	ctx.current_instruction = 0x881CD96C;
	REX_STORE_U32(ctx.r4.u32 + 932, ctx.r7.u32);
	// lis r28,-30686
	ctx.r28.s64 = -2011037696;
	// stw r6,936(r4)
	ctx.current_instruction = 0x881CD974;
	REX_STORE_U32(ctx.r4.u32 + 936, ctx.r6.u32);
	// lis r29,-30686
	ctx.r29.s64 = -2011037696;
	// lis r27,-30686
	ctx.r27.s64 = -2011037696;
	// lis r26,-30686
	ctx.r26.s64 = -2011037696;
	// lis r25,-30686
	ctx.r25.s64 = -2011037696;
	// addi r3,r11,17336
	ctx.r3.s64 = ctx.r11.s64 + 17336;
	// addi r10,r30,17952
	ctx.r10.s64 = ctx.r30.s64 + 17952;
	// addi r11,r31,17368
	ctx.r11.s64 = ctx.r31.s64 + 17368;
	// stw r3,944(r4)
	ctx.current_instruction = 0x881CD994;
	REX_STORE_U32(ctx.r4.u32 + 944, ctx.r3.u32);
	// addi r8,r28,-26952
	ctx.r8.s64 = ctx.r28.s64 + -26952;
	// stw r10,952(r4)
	ctx.current_instruction = 0x881CD99C;
	REX_STORE_U32(ctx.r4.u32 + 952, ctx.r10.u32);
	// lis r22,-30686
	ctx.r22.s64 = -2011037696;
	// stw r11,948(r4)
	ctx.current_instruction = 0x881CD9A4;
	REX_STORE_U32(ctx.r4.u32 + 948, ctx.r11.u32);
	// addi r9,r29,19376
	ctx.r9.s64 = ctx.r29.s64 + 19376;
	// stw r8,768(r4)
	ctx.current_instruction = 0x881CD9AC;
	REX_STORE_U32(ctx.r4.u32 + 768, ctx.r8.u32);
	// addi r7,r27,-15968
	ctx.r7.s64 = ctx.r27.s64 + -15968;
	// addi r6,r26,-15480
	ctx.r6.s64 = ctx.r26.s64 + -15480;
	// stw r9,956(r4)
	ctx.current_instruction = 0x881CD9B8;
	REX_STORE_U32(ctx.r4.u32 + 956, ctx.r9.u32);
	// addi r5,r25,-15456
	ctx.r5.s64 = ctx.r25.s64 + -15456;
	// stw r7,772(r4)
	ctx.current_instruction = 0x881CD9C0;
	REX_STORE_U32(ctx.r4.u32 + 772, ctx.r7.u32);
	// lis r24,-30686
	ctx.r24.s64 = -2011037696;
	// stw r6,776(r4)
	ctx.current_instruction = 0x881CD9C8;
	REX_STORE_U32(ctx.r4.u32 + 776, ctx.r6.u32);
	// lis r23,-30686
	ctx.r23.s64 = -2011037696;
	// stw r5,780(r4)
	ctx.current_instruction = 0x881CD9D0;
	REX_STORE_U32(ctx.r4.u32 + 780, ctx.r5.u32);
	// lis r20,-30686
	ctx.r20.s64 = -2011037696;
	// lis r21,-30686
	ctx.r21.s64 = -2011037696;
	// lis r19,-30686
	ctx.r19.s64 = -2011037696;
	// lis r18,-30686
	ctx.r18.s64 = -2011037696;
	// lis r17,-30686
	ctx.r17.s64 = -2011037696;
	// lis r14,-30686
	ctx.r14.s64 = -2011037696;
	// addi r10,r22,-13968
	ctx.r10.s64 = ctx.r22.s64 + -13968;
	// addi r3,r24,-14952
	ctx.r3.s64 = ctx.r24.s64 + -14952;
	// stw r14,-160(r1)
	ctx.current_instruction = 0x881CD9F4;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// addi r11,r23,-14920
	ctx.r11.s64 = ctx.r23.s64 + -14920;
	// stw r10,792(r4)
	ctx.current_instruction = 0x881CD9FC;
	REX_STORE_U32(ctx.r4.u32 + 792, ctx.r10.u32);
	// addi r8,r20,-11744
	ctx.r8.s64 = ctx.r20.s64 + -11744;
	// lwz r10,-160(r1)
	ctx.current_instruction = 0x881CDA04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lis r16,-30686
	ctx.r16.s64 = -2011037696;
	// stw r3,784(r4)
	ctx.current_instruction = 0x881CDA0C;
	REX_STORE_U32(ctx.r4.u32 + 784, ctx.r3.u32);
	// lis r15,-30686
	ctx.r15.s64 = -2011037696;
	// stw r11,788(r4)
	ctx.current_instruction = 0x881CDA14;
	REX_STORE_U32(ctx.r4.u32 + 788, ctx.r11.u32);
	// addi r9,r21,-12192
	ctx.r9.s64 = ctx.r21.s64 + -12192;
	// stw r8,800(r4)
	ctx.current_instruction = 0x881CDA1C;
	REX_STORE_U32(ctx.r4.u32 + 800, ctx.r8.u32);
	// addi r7,r19,-11712
	ctx.r7.s64 = ctx.r19.s64 + -11712;
	// addi r6,r18,-11120
	ctx.r6.s64 = ctx.r18.s64 + -11120;
	// stw r9,796(r4)
	ctx.current_instruction = 0x881CDA28;
	REX_STORE_U32(ctx.r4.u32 + 796, ctx.r9.u32);
	// addi r5,r17,-9696
	ctx.r5.s64 = ctx.r17.s64 + -9696;
	// stw r7,804(r4)
	ctx.current_instruction = 0x881CDA30;
	REX_STORE_U32(ctx.r4.u32 + 804, ctx.r7.u32);
	// lis r14,-30686
	ctx.r14.s64 = -2011037696;
	// stw r6,808(r4)
	ctx.current_instruction = 0x881CDA38;
	REX_STORE_U32(ctx.r4.u32 + 808, ctx.r6.u32);
	// addi r3,r16,-9616
	ctx.r3.s64 = ctx.r16.s64 + -9616;
	// stw r5,812(r4)
	ctx.current_instruction = 0x881CDA40;
	REX_STORE_U32(ctx.r4.u32 + 812, ctx.r5.u32);
	// addi r11,r15,-9584
	ctx.r11.s64 = ctx.r15.s64 + -9584;
	// addi r8,r10,-8992
	ctx.r8.s64 = ctx.r10.s64 + -8992;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,820(r4)
	ctx.current_instruction = 0x881CDA50;
	REX_STORE_U32(ctx.r4.u32 + 820, ctx.r11.u32);
	// addi r7,r14,-7568
	ctx.r7.s64 = ctx.r14.s64 + -7568;
	// stw r3,816(r4)
	ctx.current_instruction = 0x881CDA58;
	REX_STORE_U32(ctx.r4.u32 + 816, ctx.r3.u32);
	// addi r10,r4,1032
	ctx.r10.s64 = ctx.r4.s64 + 1032;
	// stw r8,824(r4)
	ctx.current_instruction = 0x881CDA60;
	REX_STORE_U32(ctx.r4.u32 + 824, ctx.r8.u32);
	// stw r7,828(r4)
	ctx.current_instruction = 0x881CDA64;
	REX_STORE_U32(ctx.r4.u32 + 828, ctx.r7.u32);
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881CDA70:
	// lis r9,-30691
	ctx.r9.s64 = -2011365376;
	// lis r8,-30691
	ctx.r8.s64 = -2011365376;
	// lis r7,-30691
	ctx.r7.s64 = -2011365376;
	// lis r6,-30691
	ctx.r6.s64 = -2011365376;
	// addi r5,r9,-12920
	ctx.r5.s64 = ctx.r9.s64 + -12920;
	// addi r3,r8,-12920
	ctx.r3.s64 = ctx.r8.s64 + -12920;
	// addi r9,r7,-12920
	ctx.r9.s64 = ctx.r7.s64 + -12920;
	// stw r5,4(r11)
	ctx.current_instruction = 0x881CDA8C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r8,r6,-12920
	ctx.r8.s64 = ctx.r6.s64 + -12920;
	// stw r3,8(r11)
	ctx.current_instruction = 0x881CDA94;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r9,12(r11)
	ctx.current_instruction = 0x881CDA98;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stwu r8,16(r11)
	ctx.current_instruction = 0x881CDA9C;
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x881cda70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CDA70;
	// lis r11,-30686
	ctx.r11.s64 = -2011037696;
	// lis r9,-30686
	ctx.r9.s64 = -2011037696;
	// addi r11,r11,20280
	ctx.r11.s64 = ctx.r11.s64 + 20280;
	// lis r8,-30686
	ctx.r8.s64 = -2011037696;
	// lis r7,-30686
	ctx.r7.s64 = -2011037696;
	// stw r11,1028(r4)
	ctx.current_instruction = 0x881CDAB8;
	REX_STORE_U32(ctx.r4.u32 + 1028, ctx.r11.u32);
	// lis r6,-30686
	ctx.r6.s64 = -2011037696;
	// lis r5,-30686
	ctx.r5.s64 = -2011037696;
	// lis r3,-30686
	ctx.r3.s64 = -2011037696;
	// lis r31,-30686
	ctx.r31.s64 = -2011037696;
	// addi r9,r9,20840
	ctx.r9.s64 = ctx.r9.s64 + 20840;
	// addi r8,r8,20944
	ctx.r8.s64 = ctx.r8.s64 + 20944;
	// addi r7,r7,21048
	ctx.r7.s64 = ctx.r7.s64 + 21048;
	// stw r9,0(r10)
	ctx.current_instruction = 0x881CDAD8;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r6,r6,21152
	ctx.r6.s64 = ctx.r6.s64 + 21152;
	// stw r8,1036(r4)
	ctx.current_instruction = 0x881CDAE0;
	REX_STORE_U32(ctx.r4.u32 + 1036, ctx.r8.u32);
	// addi r5,r5,21256
	ctx.r5.s64 = ctx.r5.s64 + 21256;
	// stw r7,1040(r4)
	ctx.current_instruction = 0x881CDAE8;
	REX_STORE_U32(ctx.r4.u32 + 1040, ctx.r7.u32);
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// stw r6,1044(r4)
	ctx.current_instruction = 0x881CDAF0;
	REX_STORE_U32(ctx.r4.u32 + 1044, ctx.r6.u32);
	// addi r11,r31,23448
	ctx.r11.s64 = ctx.r31.s64 + 23448;
	// stw r5,1048(r4)
	ctx.current_instruction = 0x881CDAF8;
	REX_STORE_U32(ctx.r4.u32 + 1048, ctx.r5.u32);
	// lis r30,-30686
	ctx.r30.s64 = -2011037696;
	// stw r3,1052(r4)
	ctx.current_instruction = 0x881CDB00;
	REX_STORE_U32(ctx.r4.u32 + 1052, ctx.r3.u32);
	// lis r29,-30686
	ctx.r29.s64 = -2011037696;
	// stw r11,1056(r4)
	ctx.current_instruction = 0x881CDB08;
	REX_STORE_U32(ctx.r4.u32 + 1056, ctx.r11.u32);
	// lis r28,-30686
	ctx.r28.s64 = -2011037696;
	// lis r27,-30686
	ctx.r27.s64 = -2011037696;
	// lis r26,-30686
	ctx.r26.s64 = -2011037696;
	// lis r25,-30686
	ctx.r25.s64 = -2011037696;
	// lis r24,-30686
	ctx.r24.s64 = -2011037696;
	// lis r23,-30686
	ctx.r23.s64 = -2011037696;
	// addi r10,r30,23576
	ctx.r10.s64 = ctx.r30.s64 + 23576;
	// addi r9,r29,23680
	ctx.r9.s64 = ctx.r29.s64 + 23680;
	// addi r8,r28,24312
	ctx.r8.s64 = ctx.r28.s64 + 24312;
	// stw r10,1060(r4)
	ctx.current_instruction = 0x881CDB30;
	REX_STORE_U32(ctx.r4.u32 + 1060, ctx.r10.u32);
	// addi r7,r27,25872
	ctx.r7.s64 = ctx.r27.s64 + 25872;
	// stw r9,1064(r4)
	ctx.current_instruction = 0x881CDB38;
	REX_STORE_U32(ctx.r4.u32 + 1064, ctx.r9.u32);
	// addi r6,r26,26000
	ctx.r6.s64 = ctx.r26.s64 + 26000;
	// stw r8,1068(r4)
	ctx.current_instruction = 0x881CDB40;
	REX_STORE_U32(ctx.r4.u32 + 1068, ctx.r8.u32);
	// addi r5,r25,26104
	ctx.r5.s64 = ctx.r25.s64 + 26104;
	// stw r7,1072(r4)
	ctx.current_instruction = 0x881CDB48;
	REX_STORE_U32(ctx.r4.u32 + 1072, ctx.r7.u32);
	// addi r3,r24,26736
	ctx.r3.s64 = ctx.r24.s64 + 26736;
	// stw r6,1076(r4)
	ctx.current_instruction = 0x881CDB50;
	REX_STORE_U32(ctx.r4.u32 + 1076, ctx.r6.u32);
	// addi r11,r23,28296
	ctx.r11.s64 = ctx.r23.s64 + 28296;
	// stw r5,1080(r4)
	ctx.current_instruction = 0x881CDB58;
	REX_STORE_U32(ctx.r4.u32 + 1080, ctx.r5.u32);
	// stw r3,1084(r4)
	ctx.current_instruction = 0x881CDB5C;
	REX_STORE_U32(ctx.r4.u32 + 1084, ctx.r3.u32);
	// stw r11,1088(r4)
	ctx.current_instruction = 0x881CDB60;
	REX_STORE_U32(ctx.r4.u32 + 1088, ctx.r11.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DC2A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DC2A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DC2A0) {
			switch (rex_dispatch_address) {
				case 0x881DC2A8:
				case 0x881DC334:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DC2A0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DC2A8: goto loc_881DC2A8;
		case 0x881DC334: goto loc_881DC334;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881DC2A8;
	__savegprlr_22(ctx, base);
loc_881DC2A8:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881DC2A8;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,260(r1)
	ctx.current_instruction = 0x881DC2AC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf. r23,r9,r10
	ctx.r23.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r11,14588(r31)
	ctx.current_instruction = 0x881DC2B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14588);
	// lwz r24,14596(r31)
	ctx.current_instruction = 0x881DC2B8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 14596);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r30,14540(r31)
	ctx.current_instruction = 0x881DC2C0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 14540);
	// lwz r27,14504(r31)
	ctx.current_instruction = 0x881DC2C4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 14504);
	// lwz r29,14544(r31)
	ctx.current_instruction = 0x881DC2C8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 14544);
	// lwz r28,14548(r31)
	ctx.current_instruction = 0x881DC2CC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 14548);
	// lwz r26,14508(r31)
	ctx.current_instruction = 0x881DC2D0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 14508);
	// lwz r25,14512(r31)
	ctx.current_instruction = 0x881DC2D4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 14512);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// mullw r9,r24,r9
	ctx.r9.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r9.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r22,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r9.s32 >> 2;
	// add r24,r30,r10
	ctx.r24.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addze r10,r22
	temp.s64 = ctx.r22.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r22.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r27,r9
	ctx.r30.u64 = ctx.r27.u64 + ctx.r9.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r9,r26,r10
	ctx.r9.u64 = ctx.r26.u64 + ctx.r10.u64;
	// add r11,r25,r10
	ctx.r11.u64 = ctx.r25.u64 + ctx.r10.u64;
	// add r26,r24,r3
	ctx.r26.u64 = ctx.r24.u64 + ctx.r3.u64;
	// add r27,r30,r6
	ctx.r27.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 + ctx.r5.u64;
	// add r24,r9,r7
	ctx.r24.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ble 0x881dc34c
	if (!ctx.cr0.gt) goto loc_881DC34C;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_881DC324:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,14480(r31)
	ctx.current_instruction = 0x881DC328;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14480);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x881DC334;
	sub_880547A0(ctx, base);
loc_881DC334:
	// lwz r10,14596(r31)
	ctx.current_instruction = 0x881DC334;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14596);
	// lwz r11,14588(r31)
	ctx.current_instruction = 0x881DC338;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14588);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bne 0x881dc324
	if (!ctx.cr0.eq) goto loc_881DC324;
loc_881DC34C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x881dc3d0
	if (!ctx.cr6.gt) goto loc_881DC3D0;
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// lwz r10,14488(r31)
	ctx.current_instruction = 0x881DC358;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14488);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881DC368:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881dc3b0
	if (!ctx.cr6.gt) goto loc_881DC3B0;
	// addi r8,r24,1
	ctx.r8.s64 = ctx.r24.s64 + 1;
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// subf r6,r30,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r30.u64;
loc_881DC380:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r5,r10,r29
	ctx.current_instruction = 0x881DC388;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// stbx r5,r8,r11
	ctx.current_instruction = 0x881DC38C;
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r5.u8);
	// stbx r5,r6,r9
	ctx.current_instruction = 0x881DC390;
	REX_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r5.u8);
	// lbzx r4,r10,r28
	ctx.current_instruction = 0x881DC394;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// stbx r4,r7,r11
	ctx.current_instruction = 0x881DC398;
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r4.u8);
	// stbx r4,r11,r30
	ctx.current_instruction = 0x881DC39C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,14488(r31)
	ctx.current_instruction = 0x881DC3A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14488);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881dc380
	if (ctx.cr6.lt) goto loc_881DC380;
loc_881DC3B0:
	// lwz r11,14644(r31)
	ctx.current_instruction = 0x881DC3B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14644);
	// lwz r9,14648(r31)
	ctx.current_instruction = 0x881DC3B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14648);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r9,r24
	ctx.r24.u64 = ctx.r9.u64 + ctx.r24.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bdnz 0x881dc368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DC368;
loc_881DC3D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DE258) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881DE258);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DE258;
	ctx.current_instruction = 0x881DE258;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x881DE258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,16(r11)
	ctx.current_instruction = 0x881DE25C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881de274
	if (ctx.cr6.eq) goto loc_881DE274;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x881de278
	if (!ctx.cr6.eq) goto loc_881DE278;
loc_881DE274:
	// li r6,1
	ctx.r6.s64 = 1;
loc_881DE278:
	// lwz r11,0(r3)
	ctx.current_instruction = 0x881DE278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// lis r8,12338
	ctx.r8.s64 = 808583168;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// ori r8,r8,13385
	ctx.r8.u64 = ctx.r8.u64 | 13385;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x881DE290;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r7,r7,22857
	ctx.r7.u64 = ctx.r7.u64 | 22857;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x881de320
	if (ctx.cr6.gt) goto loc_881DE320;
	// beq cr6,0x881de340
	if (ctx.cr6.eq) goto loc_881DE340;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881de340
	if (ctx.cr6.eq) goto loc_881DE340;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r7,r10,13392
	ctx.r7.u64 = ctx.r10.u64 | 13392;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881de338
	if (!ctx.cr6.eq) goto loc_881DE338;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x881de348
	if (!ctx.cr6.eq) goto loc_881DE348;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881de2e8
	if (!ctx.cr6.eq) goto loc_881DE2E8;
	// lis r11,-30690
	ctx.r11.s64 = -2011299840;
	// addi r10,r11,-11088
	ctx.r10.s64 = ctx.r11.s64 + -11088;
	// stw r10,14664(r3)
	ctx.current_instruction = 0x881DE2DC;
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DE2E8:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x881de300
	if (ctx.cr6.eq) goto loc_881DE300;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x881de348
	if (!ctx.cr6.eq) goto loc_881DE348;
loc_881DE300:
	// lwz r11,14620(r3)
	ctx.current_instruction = 0x881DE300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881de348
	if (ctx.cr6.eq) goto loc_881DE348;
	// lis r11,-30690
	ctx.r11.s64 = -2011299840;
	// addi r10,r11,-15712
	ctx.r10.s64 = ctx.r11.s64 + -15712;
	// stw r10,14660(r3)
	ctx.current_instruction = 0x881DE314;
	REX_STORE_U32(ctx.r3.u32 + 14660, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DE320:
	// lis r5,12850
	ctx.r5.s64 = 842137600;
	// ori r4,r5,13392
	ctx.r4.u64 = ctx.r5.u64 | 13392;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x881de3c0
	if (ctx.cr6.eq) goto loc_881DE3C0;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x881de340
	if (ctx.cr6.eq) goto loc_881DE340;
loc_881DE338:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DE340:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881de350
	if (ctx.cr6.eq) goto loc_881DE350;
loc_881DE348:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DE350:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r6,r11,21849
	ctx.r6.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881de394
	if (!ctx.cr6.eq) goto loc_881DE394;
	// lwz r11,14620(r3)
	ctx.current_instruction = 0x881DE360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x881de380
	if (!ctx.cr6.eq) goto loc_881DE380;
	// lis r11,-30690
	ctx.r11.s64 = -2011299840;
	// addi r10,r11,-10760
	ctx.r10.s64 = ctx.r11.s64 + -10760;
	// stw r10,14664(r3)
	ctx.current_instruction = 0x881DE374;
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DE380:
	// lis r11,-30690
	ctx.r11.s64 = -2011299840;
	// addi r10,r11,-8440
	ctx.r10.s64 = ctx.r11.s64 + -8440;
	// stw r10,14664(r3)
	ctx.current_instruction = 0x881DE388;
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DE394:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881de3ac
	if (ctx.cr6.eq) goto loc_881DE3AC;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x881de3ac
	if (ctx.cr6.eq) goto loc_881DE3AC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881de348
	if (!ctx.cr6.eq) goto loc_881DE348;
loc_881DE3AC:
	// lis r11,-30690
	ctx.r11.s64 = -2011299840;
	// addi r10,r11,9888
	ctx.r10.s64 = ctx.r11.s64 + 9888;
	// stw r10,14660(r3)
	ctx.current_instruction = 0x881DE3B4;
	REX_STORE_U32(ctx.r3.u32 + 14660, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DE3C0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x881de348
	if (!ctx.cr6.eq) goto loc_881DE348;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r8,r11,21849
	ctx.r8.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x881de3ec
	if (!ctx.cr6.eq) goto loc_881DE3EC;
	// lis r11,-30690
	ctx.r11.s64 = -2011299840;
	// addi r10,r11,-9632
	ctx.r10.s64 = ctx.r11.s64 + -9632;
	// stw r10,14664(r3)
	ctx.current_instruction = 0x881DE3E0;
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DE3EC:
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r8,r11,13385
	ctx.r8.u64 = ctx.r11.u64 | 13385;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881de414
	if (ctx.cr6.eq) goto loc_881DE414;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r8,r11,22857
	ctx.r8.u64 = ctx.r11.u64 | 22857;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881de414
	if (ctx.cr6.eq) goto loc_881DE414;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881de348
	if (!ctx.cr6.eq) goto loc_881DE348;
loc_881DE414:
	// lis r11,-30690
	ctx.r11.s64 = -2011299840;
	// addi r10,r11,-13264
	ctx.r10.s64 = ctx.r11.s64 + -13264;
	// stw r10,14660(r3)
	ctx.current_instruction = 0x881DE41C;
	REX_STORE_U32(ctx.r3.u32 + 14660, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881E0830) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E0830;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E0830) {
			switch (rex_dispatch_address) {
				case 0x881E0838:
				case 0x881E08A4:
				case 0x881E08BC:
				case 0x881E0950:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E0830;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E0838: goto loc_881E0838;
		case 0x881E08A4: goto loc_881E08A4;
		case 0x881E08BC: goto loc_881E08BC;
		case 0x881E0950: goto loc_881E0950;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x881E0838;
	__savegprlr_17(ctx, base);
loc_881E0838:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x881E0838;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,316(r1)
	ctx.current_instruction = 0x881E083C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r11,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 31;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// xor r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 ^ ctx.r11.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// beq cr6,0x881e087c
	if (ctx.cr6.eq) goto loc_881E087C;
	// srawi r30,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r24.s32 >> 1;
loc_881E087C:
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// srawi r28,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r23.s32 >> 1;
	// srawi r31,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r22.s32 >> 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881e08c0
	if (!ctx.cr6.eq) goto loc_881E08C0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r3,332(r1)
	ctx.current_instruction = 0x881E0894;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x881e00f8
	ctx.lr = 0x881E08A4;
	sub_881E00F8(ctx, base);
loc_881E08A4:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,340(r1)
	ctx.current_instruction = 0x881E08AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x881e00f8
	ctx.lr = 0x881E08BC;
	sub_881E00F8(ctx, base);
loc_881E08BC:
	// b 0x881e0934
	goto loc_881E0934;
loc_881E08C0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x881e0934
	if (!ctx.cr6.gt) goto loc_881E0934;
	// lwz r27,340(r1)
	ctx.current_instruction = 0x881E08C8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r29,332(r1)
	ctx.current_instruction = 0x881E08D0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_881E08DC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x881e0924
	if (!ctx.cr6.gt) goto loc_881E0924;
	// add r3,r7,r26
	ctx.r3.u64 = ctx.r7.u64 + ctx.r26.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// add r31,r6,r27
	ctx.r31.u64 = ctx.r6.u64 + ctx.r27.u64;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
loc_881E0900:
	// lbzx r18,r9,r4
	ctx.current_instruction = 0x881E0900;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbzx r17,r3,r11
	ctx.current_instruction = 0x881E0904;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stbx r18,r8,r29
	ctx.current_instruction = 0x881E0910;
	REX_STORE_U8(ctx.r8.u32 + ctx.r29.u32, ctx.r18.u8);
	// stbx r17,r31,r10
	ctx.current_instruction = 0x881E0914;
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r17.u8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x881e0900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E0900;
loc_881E0924:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// bne 0x881e08dc
	if (!ctx.cr0.eq) goto loc_881E08DC;
loc_881E0934:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x881e00f8
	ctx.lr = 0x881E0950;
	sub_881E00F8(ctx, base);
loc_881E0950:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E1CD8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E1CD8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E1CD8) {
			switch (rex_dispatch_address) {
				case 0x881E1CE0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E1CD8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881E1CE0: goto loc_881E1CE0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881E1CE0;
	__savegprlr_14(ctx, base);
loc_881E1CE0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,92(r1)
	ctx.current_instruction = 0x881E1CE4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,76(r1)
	ctx.current_instruction = 0x881E1CEC;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r9,68(r1)
	ctx.current_instruction = 0x881E1CF4;
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r6,44(r1)
	ctx.current_instruction = 0x881E1CFC;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// stw r4,28(r1)
	ctx.current_instruction = 0x881E1D04;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// subf r9,r3,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r3.u64;
	// lwz r26,84(r1)
	ctx.current_instruction = 0x881E1D0C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r31,-1
	ctx.r6.s64 = ctx.r31.s64 + -1;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// divw r4,r9,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r9.s32 / ctx.r6.s32 : 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// stw r4,-168(r1)
	ctx.current_instruction = 0x881E1D28;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// addi r30,r7,-1
	ctx.r30.s64 = ctx.r7.s64 + -1;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// rotlwi r3,r9,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r29,r26,-1
	ctx.r29.s64 = ctx.r26.s64 + -1;
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// andc r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 & ~ctx.r30.u64;
	// andc r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// subf r25,r8,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r8.u64;
	// divw r19,r10,r29
	ctx.r19.u64 = uint32_t((ctx.r29.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r29.s32 == -1)) ? ctx.r10.s32 / ctx.r29.s32 : 0);
	// twllei r29,0
	if (ctx.r29.s32 == 0 || ctx.r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r25,-176(r1)
	ctx.current_instruction = 0x881E1D68;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r25.u32);
	// twlgei r30,-1
	if (ctx.r30.s32 == -1 || ctx.r30.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881e1eec
	if (!ctx.cr6.eq) goto loc_881E1EEC;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x881e2070
	if (!ctx.cr6.gt) goto loc_881E2070;
	// lwz r20,108(r1)
	ctx.current_instruction = 0x881E1D8C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r6,r19,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r20,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r31,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r31.u64;
	// rlwinm r14,r9,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E1DA0:
	// addi r9,r18,16
	ctx.r9.s64 = ctx.r18.s64 + 16;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x881e1db4
	if (!ctx.cr6.gt) goto loc_881E1DB4;
	// mr r17,r26
	ctx.r17.u64 = ctx.r26.u64;
loc_881E1DB4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881e1ed4
	if (!ctx.cr6.gt) goto loc_881E1ED4;
	// subf r16,r18,r17
	ctx.r16.u64 = ctx.r17.u64 - ctx.r18.u64;
	// mullw r10,r16,r20
	ctx.r10.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r20.s32);
	// subfic r7,r10,2
	ctx.xer.ca = ctx.r10.u32 <= 2;
	ctx.r7.u64 = static_cast<uint64_t>(2) - ctx.r10.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E1DD0:
	// srawi r7,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 17;
	// srawi r3,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 16;
	// add r21,r8,r4
	ctx.r21.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r8,r3,r27
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// srawi r3,r21,16
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r21.s32 >> 16;
	// add r30,r8,r28
	ctx.r30.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mullw r8,r3,r27
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// add r29,r8,r28
	ctx.r29.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// cmpw cr6,r18,r17
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x881e1ebc
	if (!ctx.cr6.lt) goto loc_881E1EBC;
	// lwz r4,76(r1)
	ctx.current_instruction = 0x881E1DFC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// addi r3,r16,-1
	ctx.r3.s64 = ctx.r16.s64 + -1;
	// lwz r31,44(r1)
	ctx.current_instruction = 0x881E1E04;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r24,r20,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r26,r7,r4
	ctx.r26.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// rlwinm r7,r3,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r25,r26,r31
	ctx.r25.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r23,r19,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r20,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881E1E28:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r4,r8,r19
	ctx.r4.u64 = ctx.r8.u64 + ctx.r19.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r8,r23,r8
	ctx.r8.u64 = ctx.r23.u64 + ctx.r8.u64;
	// add r31,r26,r3
	ctx.r31.u64 = ctx.r26.u64 + ctx.r3.u64;
	// lbzx r28,r7,r30
	ctx.current_instruction = 0x881E1E3C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// lbzx r7,r7,r29
	ctx.current_instruction = 0x881E1E40;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// rotlwi r27,r28,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r28.u32, 8);
	// lbzx r3,r25,r3
	ctx.current_instruction = 0x881E1E48;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r3.u32);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// stw r7,-172(r1)
	ctx.current_instruction = 0x881E1E50;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r7.u32);
	// srawi r7,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 16;
	// lwz r4,-172(r1)
	ctx.current_instruction = 0x881E1E58;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r28,r4,24,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// lbzx r4,r31,r5
	ctx.current_instruction = 0x881E1E60;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// lbzx r31,r7,r29
	ctx.current_instruction = 0x881E1E64;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r29.u32);
	// lbzx r7,r7,r30
	ctx.current_instruction = 0x881E1E68;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stw r31,-172(r1)
	ctx.current_instruction = 0x881E1E70;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r31.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r4,r28,r3
	ctx.r4.u64 = ctx.r28.u64 + ctx.r3.u64;
	// lwz r28,-172(r1)
	ctx.current_instruction = 0x881E1E7C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r28,r28,24,0,7
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF000000;
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r3,r28,r3
	ctx.r3.u64 = ctx.r28.u64 + ctx.r3.u64;
	// or r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 | ctx.r4.u64;
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stw r4,0(r11)
	ctx.current_instruction = 0x881E1E98;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stwx r3,r11,r24
	ctx.current_instruction = 0x881E1E9C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r3.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bdnz 0x881e1e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E1E28;
	// lwz r4,-168(r1)
	ctx.current_instruction = 0x881E1EA8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r25,-176(r1)
	ctx.current_instruction = 0x881E1EAC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r28,28(r1)
	ctx.current_instruction = 0x881E1EB0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r27,68(r1)
	ctx.current_instruction = 0x881E1EB4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r26,84(r1)
	ctx.current_instruction = 0x881E1EB8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881E1EBC:
	// add r8,r21,r4
	ctx.r8.u64 = ctx.r21.u64 + ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x881e1dd0
	if (ctx.cr6.lt) goto loc_881E1DD0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
loc_881E1ED4:
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// add r15,r15,r6
	ctx.r15.u64 = ctx.r15.u64 + ctx.r6.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881e1da0
	if (ctx.cr6.lt) goto loc_881E1DA0;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881E1EEC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x881e2070
	if (!ctx.cr6.gt) goto loc_881E2070;
	// lwz r17,108(r1)
	ctx.current_instruction = 0x881E1EFC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r9,r17,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r31.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,-172(r1)
	ctx.current_instruction = 0x881E1F0C;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r6.u32);
loc_881E1F10:
	// addi r6,r16,16
	ctx.r6.s64 = ctx.r16.s64 + 16;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x881e1f24
	if (!ctx.cr6.gt) goto loc_881E1F24;
	// mr r14,r26
	ctx.r14.u64 = ctx.r26.u64;
loc_881E1F24:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881e2054
	if (!ctx.cr6.gt) goto loc_881E2054;
	// subf r15,r16,r14
	ctx.r15.u64 = ctx.r14.u64 - ctx.r16.u64;
	// mullw r9,r15,r17
	ctx.r9.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r17.s32);
	// subfic r7,r9,2
	ctx.xer.ca = ctx.r9.u32 <= 2;
	ctx.r7.u64 = static_cast<uint64_t>(2) - ctx.r9.u64;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E1F40:
	// srawi r3,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 17;
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r18,r8,r4
	ctx.r18.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r8,r7,r27
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// srawi r7,r18,16
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r18.s32 >> 16;
	// add r30,r8,r28
	ctx.r30.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mullw r8,r7,r27
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// add r29,r8,r28
	ctx.r29.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpw cr6,r16,r14
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r14.s32, ctx.xer);
	// bge cr6,0x881e203c
	if (!ctx.cr6.lt) goto loc_881E203C;
	// addi r8,r15,-1
	ctx.r8.s64 = ctx.r15.s64 + -1;
	// lwz r31,76(r1)
	ctx.current_instruction = 0x881E1F70;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// lwz r28,44(r1)
	ctx.current_instruction = 0x881E1F74;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rlwinm r24,r17,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r25,r3,r31
	ctx.r25.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r23,r25,r28
	ctx.r23.u64 = ctx.r25.u64 + ctx.r28.u64;
	// addi r22,r24,2
	ctx.r22.s64 = ctx.r24.s64 + 2;
	// rlwinm r21,r19,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r17,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881E1F9C:
	// srawi r8,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 16;
	// add r31,r7,r19
	ctx.r31.u64 = ctx.r7.u64 + ctx.r19.u64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// add r7,r21,r7
	ctx.r7.u64 = ctx.r21.u64 + ctx.r7.u64;
	// add r28,r25,r3
	ctx.r28.u64 = ctx.r25.u64 + ctx.r3.u64;
	// lbzx r27,r8,r30
	ctx.current_instruction = 0x881E1FB0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbzx r8,r8,r29
	ctx.current_instruction = 0x881E1FB4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// lbzx r3,r23,r3
	ctx.current_instruction = 0x881E1FB8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r3.u32);
	// rotlwi r26,r27,8
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// lbzx r28,r28,r5
	ctx.current_instruction = 0x881E1FC0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// stw r8,-168(r1)
	ctx.current_instruction = 0x881E1FC4;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// srawi r8,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 16;
	// lwz r31,-168(r1)
	ctx.current_instruction = 0x881E1FCC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r27,r31,8,0,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r3,r8,r30
	ctx.current_instruction = 0x881E1FD8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbzx r8,r8,r29
	ctx.current_instruction = 0x881E1FDC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// add r26,r26,r31
	ctx.r26.u64 = ctx.r26.u64 + ctx.r31.u64;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r3,-168(r1)
	ctx.current_instruction = 0x881E1FE8;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r28,-168(r1)
	ctx.current_instruction = 0x881E1FF0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// clrlwi r8,r26,16
	ctx.r8.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r28,r27,16
	ctx.r28.u64 = ctx.r27.u32 & 0xFFFF;
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// sth r8,0(r11)
	ctx.current_instruction = 0x881E2010;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r28,2(r11)
	ctx.current_instruction = 0x881E2018;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r28.u16);
	// sthx r31,r11,r24
	ctx.current_instruction = 0x881E201C;
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r31.u16);
	// sthx r3,r22,r11
	ctx.current_instruction = 0x881E2020;
	REX_STORE_U16(ctx.r22.u32 + ctx.r11.u32, ctx.r3.u16);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bdnz 0x881e1f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E1F9C;
	// lwz r25,-176(r1)
	ctx.current_instruction = 0x881E202C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r28,28(r1)
	ctx.current_instruction = 0x881E2030;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r27,68(r1)
	ctx.current_instruction = 0x881E2034;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r26,84(r1)
	ctx.current_instruction = 0x881E2038;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881E203C:
	// add r8,r18,r4
	ctx.r8.u64 = ctx.r18.u64 + ctx.r4.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x881e1f40
	if (ctx.cr6.lt) goto loc_881E1F40;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
loc_881E2054:
	// lwz r7,-172(r1)
	ctx.current_instruction = 0x881E2054;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// rlwinm r9,r19,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x881e1f10
	if (ctx.cr6.lt) goto loc_881E1F10;
loc_881E2070:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EBC90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EBC90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EBC90) {
			switch (rex_dispatch_address) {
				case 0x881EBC98:
				case 0x881EBCDC:
				case 0x881EBD00:
				case 0x881EBD94:
				case 0x881EBEC4:
				case 0x881EBF0C:
				case 0x881EC154:
				case 0x881EC270:
				case 0x881EC294:
				case 0x881EC39C:
				case 0x881EC438:
				case 0x881EC458:
				case 0x881EC468:
				case 0x881EC4A4:
				case 0x881EC4CC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EBC90;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EBC98: goto loc_881EBC98;
		case 0x881EBCDC: goto loc_881EBCDC;
		case 0x881EBD00: goto loc_881EBD00;
		case 0x881EBD94: goto loc_881EBD94;
		case 0x881EBEC4: goto loc_881EBEC4;
		case 0x881EBF0C: goto loc_881EBF0C;
		case 0x881EC154: goto loc_881EC154;
		case 0x881EC270: goto loc_881EC270;
		case 0x881EC294: goto loc_881EC294;
		case 0x881EC39C: goto loc_881EC39C;
		case 0x881EC438: goto loc_881EC438;
		case 0x881EC458: goto loc_881EC458;
		case 0x881EC468: goto loc_881EC468;
		case 0x881EC4A4: goto loc_881EC4A4;
		case 0x881EC4CC: goto loc_881EC4CC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881EBC98;
	__savegprlr_19(ctx, base);
loc_881EBC98:
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x881EBC9C;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,340(r31)
	ctx.current_instruction = 0x881EBCA4;
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// lwz r11,20(r3)
	ctx.current_instruction = 0x881EBCA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,96(r31)
	ctx.current_instruction = 0x881EBCB8;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r19.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r5,356(r31)
	ctx.current_instruction = 0x881EBCC0;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r5.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r6,364(r31)
	ctx.current_instruction = 0x881EBCC8;
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r3,84(r31)
	ctx.current_instruction = 0x881EBCD0;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// beq 0x881ebd00
	if (ctx.cr0.eq) goto loc_881EBD00;
	// bl 0x88243740
	ctx.lr = 0x881EBCDC;
	__imp__KeGetCurrentProcessType(ctx, base);
loc_881EBCDC:
	// lbz r11,379(r21)
	ctx.current_instruction = 0x881EBCDC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x881ebd00
	if (ctx.cr6.eq) goto loc_881EBD00;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,3196
	ctx.r6.s64 = 3196;
	// lwz r5,312(r31)
	ctx.current_instruction = 0x881EBCF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x88243730
	ctx.lr = 0x881EBD00;
	__imp__KeBugCheckEx(ctx, base);
loc_881EBD00:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x881ebd10
	if (!ctx.cr6.eq) goto loc_881EBD10;
loc_881EBD08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x881ec4d0
	goto loc_881EC4D0;
loc_881EBD10:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.current_instruction = 0x881EBD14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// or r23,r10,r30
	ctx.r23.u64 = ctx.r10.u64 | ctx.r30.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881ebd08
	if (ctx.cr6.gt) goto loc_881EBD08;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x881ebd3c
	if (!ctx.cr6.eq) goto loc_881EBD3C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_881EBD3C:
	// lwz r10,80(r27)
	ctx.current_instruction = 0x881EBD3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,84(r27)
	ctx.current_instruction = 0x881EBD48;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	ctx.current_instruction = 0x881EBD54;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// bne 0x881ebd74
	if (!ctx.cr0.eq) goto loc_881EBD74;
	// lwz r11,380(r27)
	ctx.current_instruction = 0x881EBD5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ebd74
	if (!ctx.cr6.eq) goto loc_881EBD74;
	// lbz r11,-11(r20)
	ctx.current_instruction = 0x881EBD68;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ebd7c
	if (ctx.cr0.eq) goto loc_881EBD7C;
loc_881EBD74:
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r24,80(r31)
	ctx.current_instruction = 0x881EBD78;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_881EBD7C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x881ebda0
	if (!ctx.cr0.eq) goto loc_881EBDA0;
	// lwz r3,1408(r27)
	ctx.current_instruction = 0x881EBD8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 1408);
	// bl 0x88243680
	ctx.lr = 0x881EBD94;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_881EBD94:
	// xori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 ^ 1;
	// stw r22,96(r31)
	ctx.current_instruction = 0x881EBD98;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r22.u32);
	// stw r23,348(r31)
	ctx.current_instruction = 0x881EBD9C;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_881EBDA0:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	ctx.r30.s64 = ctx.r20.s64 + -16;
	// stw r30,124(r31)
	ctx.current_instruction = 0x881EBDB0;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lbz r7,5(r30)
	ctx.current_instruction = 0x881EBDB4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec4a4
	if (ctx.cr0.eq) goto loc_881EC4A4;
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r11,0(r30)
	ctx.current_instruction = 0x881EBDC4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// beq 0x881ebe08
	if (ctx.cr0.eq) goto loc_881EBE08;
	// addi r9,r24,32
	ctx.r9.s64 = ctx.r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.current_instruction = 0x881EBDD0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r9,80(r31)
	ctx.current_instruction = 0x881EBDE8;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	ctx.current_instruction = 0x881EBDF0;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	ctx.r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	ctx.current_instruction = 0x881EBDF8;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	ctx.current_instruction = 0x881EBE00;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x881ebe18
	goto loc_881EBE18;
loc_881EBE08:
	// lbz r10,6(r30)
	ctx.current_instruction = 0x881EBE08;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r25,r10,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_881EBE18:
	// stw r25,92(r31)
	ctx.current_instruction = 0x881EBE18;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// rlwinm r28,r24,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	ctx.current_instruction = 0x881EBE20;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x881ec274
	if (ctx.cr6.gt) goto loc_881EC274;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x881ebe48
	if (!ctx.cr6.eq) goto loc_881EBE48;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r10,100(r31)
	ctx.current_instruction = 0x881EBE40;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r24,80(r31)
	ctx.current_instruction = 0x881EBE44;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_881EBE48:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881ebe64
	if (ctx.cr6.eq) goto loc_881EBE64;
	// subf r11,r26,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r26.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// sth r11,0(r30)
	ctx.current_instruction = 0x881EBE5C;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x881ebea4
	goto loc_881EBEA4;
loc_881EBE64:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881ebe9c
	if (ctx.cr0.eq) goto loc_881EBE9C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r9,r26,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r26.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.current_instruction = 0x881EBE84;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	ctx.current_instruction = 0x881EBE88;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.current_instruction = 0x881EBE8C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	ctx.current_instruction = 0x881EBE90;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	ctx.current_instruction = 0x881EBE94;
	REX_STORE_U8(ctx.r30.u32 + 6, ctx.r9.u8);
	// b 0x881ebea4
	goto loc_881EBEA4;
loc_881EBE9C:
	// subf r11,r26,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r26.u64;
	// stb r11,6(r30)
	ctx.current_instruction = 0x881EBEA0;
	REX_STORE_U8(ctx.r30.u32 + 6, ctx.r11.u8);
loc_881EBEA4:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x881ebec4
	if (!ctx.cr6.gt) goto loc_881EBEC4;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ebec4
	if (ctx.cr0.eq) goto loc_881EBEC4;
	// subf r5,r25,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = ctx.r25.u64 + ctx.r20.u64;
	// bl 0x88052d90
	ctx.lr = 0x881EBEC4;
	sub_88052D90(ctx, base);
loc_881EBEC4:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x881ec470
	if (ctx.cr6.eq) goto loc_881EC470;
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881EBECC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881ebf28
	if (ctx.cr0.eq) goto loc_881EBF28;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
	// stw r10,104(r31)
	ctx.current_instruction = 0x881EBEEC;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	ctx.current_instruction = 0x881EBEF4;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,1424(r27)
	ctx.current_instruction = 0x881EBF00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 1424);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x88243750
	ctx.lr = 0x881EBF0C;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_881EBF0C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881ec470
	if (ctx.cr0.lt) goto loc_881EC470;
	// lwz r11,24(r30)
	ctx.current_instruction = 0x881EBF14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.current_instruction = 0x881EBF18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,24(r30)
	ctx.current_instruction = 0x881EBF20;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x881ec470
	goto loc_881EC470;
loc_881EBF28:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// add r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,5(r29)
	ctx.current_instruction = 0x881EBF38;
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// sth r9,2(r29)
	ctx.current_instruction = 0x881EBF3C;
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	ctx.current_instruction = 0x881EBF40;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// stb r11,4(r29)
	ctx.current_instruction = 0x881EBF44;
	REX_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// lhz r11,0(r30)
	ctx.current_instruction = 0x881EBF48;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// subf r28,r28,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r28.u64;
	// sth r9,0(r30)
	ctx.current_instruction = 0x881EBF50;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881EBF54;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	ctx.current_instruction = 0x881EBF60;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq 0x881ebfdc
	if (ctx.cr0.eq) goto loc_881EBFDC;
	// lbz r11,4(r29)
	ctx.current_instruction = 0x881EBF68;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lwzx r9,r9,r27
	ctx.current_instruction = 0x881EBF80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r29,64(r9)
	ctx.current_instruction = 0x881EBF84;
	REX_STORE_U32(ctx.r9.u32 + 64, ctx.r29.u32);
	// sth r11,0(r29)
	ctx.current_instruction = 0x881EBF88;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r11,5(r29)
	ctx.current_instruction = 0x881EBF8C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	ctx.current_instruction = 0x881EBF94;
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x881ebfa4
	if (!ctx.cr6.lt) goto loc_881EBFA4;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x881ec018
	goto loc_881EC018;
loc_881EBFA4:
	// lwz r11,384(r27)
	ctx.current_instruction = 0x881EBFA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,108(r31)
	ctx.current_instruction = 0x881EBFAC;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_881EBFB0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881ec050
	if (ctx.cr6.eq) goto loc_881EC050;
	// lhz r8,-8(r11)
	ctx.current_instruction = 0x881EBFB8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	ctx.current_instruction = 0x881EBFC0;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881ec050
	if (!ctx.cr6.gt) goto loc_881EC050;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881EBFCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,108(r31)
	ctx.current_instruction = 0x881EBFD0;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881ebfb0
	goto loc_881EBFB0;
loc_881EBFDC:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881EBFE4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881ec0ac
	if (ctx.cr0.eq) goto loc_881EC0AC;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	ctx.current_instruction = 0x881EBFF4;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,2(r30)
	ctx.current_instruction = 0x881EBFFC;
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lbz r11,5(r29)
	ctx.current_instruction = 0x881EC004;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	ctx.current_instruction = 0x881EC00C;
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x881ec074
	if (!ctx.cr6.lt) goto loc_881EC074;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_881EC018:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881EC020;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881ec050
	if (!ctx.cr6.eq) goto loc_881EC050;
	// lhz r9,0(r29)
	ctx.current_instruction = 0x881EC02C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x881EC044;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	ctx.current_instruction = 0x881EC04C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
loc_881EC050:
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881EC050;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	ctx.current_instruction = 0x881EC058;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	ctx.current_instruction = 0x881EC05C;
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	ctx.current_instruction = 0x881EC060;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	ctx.current_instruction = 0x881EC064;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.current_instruction = 0x881EC068;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// b 0x881ec25c
	goto loc_881EC25C;
loc_881EC074:
	// lwz r11,384(r27)
	ctx.current_instruction = 0x881EC074;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 384);
	// addi r10,r27,384
	ctx.r10.s64 = ctx.r27.s64 + 384;
	// stw r11,112(r31)
	ctx.current_instruction = 0x881EC07C;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_881EC080:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881ec050
	if (ctx.cr6.eq) goto loc_881EC050;
	// lhz r8,-8(r11)
	ctx.current_instruction = 0x881EC088;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	ctx.current_instruction = 0x881EC090;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881ec050
	if (!ctx.cr6.gt) goto loc_881EC050;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881EC09C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	ctx.current_instruction = 0x881EC0A0;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881ec080
	goto loc_881EC080;
loc_881EC0AC:
	// stb r11,5(r29)
	ctx.current_instruction = 0x881EC0AC;
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881EC0B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881EC0B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881EC0BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x881EC0C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881ec110
	if (!ctx.cr6.eq) goto loc_881EC110;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881ec110
	if (!ctx.cr6.eq) goto loc_881EC110;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881EC0D4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x881EC0DC;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x881ec110
	if (!ctx.cr6.eq) goto loc_881EC110;
	// lhz r11,0(r30)
	ctx.current_instruction = 0x881EC0E4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x881ec110
	if (!ctx.cr6.lt) goto loc_881EC110;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.current_instruction = 0x881EC104;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r27
	ctx.current_instruction = 0x881EC10C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
loc_881EC110:
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881EC110;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881ec154
	if (ctx.cr0.eq) goto loc_881EC154;
	// lhz r10,0(r30)
	ctx.current_instruction = 0x881EC11C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,116(r31)
	ctx.current_instruction = 0x881EC12C;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// beq 0x881ec144
	if (ctx.cr0.eq) goto loc_881EC144;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x881ec144
	if (!ctx.cr6.gt) goto loc_881EC144;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	ctx.current_instruction = 0x881EC140;
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
loc_881EC144:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x88243760
	ctx.lr = 0x881EC154;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_881EC154:
	// lhz r11,0(r30)
	ctx.current_instruction = 0x881EC154;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.current_instruction = 0x881EC158;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r27)
	ctx.current_instruction = 0x881EC160;
	REX_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.current_instruction = 0x881EC164;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x881ec264
	if (ctx.cr6.gt) goto loc_881EC264;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	ctx.current_instruction = 0x881EC178;
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r29)
	ctx.current_instruction = 0x881EC17C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881ec198
	if (!ctx.cr0.eq) goto loc_881EC198;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r11,2(r10)
	ctx.current_instruction = 0x881EC190;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x881ec1ac
	goto loc_881EC1AC;
loc_881EC198:
	// lbz r10,4(r29)
	ctx.current_instruction = 0x881EC198;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.current_instruction = 0x881EC1A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r29,64(r10)
	ctx.current_instruction = 0x881EC1A8;
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r29.u32);
loc_881EC1AC:
	// lbz r9,5(r29)
	ctx.current_instruction = 0x881EC1AC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	ctx.current_instruction = 0x881EC1BC;
	REX_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x881ec204
	if (!ctx.cr6.lt) goto loc_881EC204;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881EC1D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881ec23c
	if (!ctx.cr6.eq) goto loc_881EC23C;
	// lhz r9,0(r29)
	ctx.current_instruction = 0x881EC1DC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x881EC1F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	ctx.current_instruction = 0x881EC1FC;
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
	// b 0x881ec23c
	goto loc_881EC23C;
loc_881EC204:
	// lwz r11,384(r27)
	ctx.current_instruction = 0x881EC204;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,120(r31)
	ctx.current_instruction = 0x881EC20C;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_881EC210:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881ec23c
	if (ctx.cr6.eq) goto loc_881EC23C;
	// lhz r8,-8(r11)
	ctx.current_instruction = 0x881EC218;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	ctx.current_instruction = 0x881EC220;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881ec23c
	if (!ctx.cr6.gt) goto loc_881EC23C;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881EC22C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	ctx.current_instruction = 0x881EC230;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881ec210
	goto loc_881EC210;
loc_881EC23C:
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881EC23C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	ctx.current_instruction = 0x881EC244;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	ctx.current_instruction = 0x881EC248;
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	ctx.current_instruction = 0x881EC24C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	ctx.current_instruction = 0x881EC250;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.current_instruction = 0x881EC254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_881EC25C:
	// stw r11,48(r21)
	ctx.current_instruction = 0x881EC25C;
	REX_STORE_U32(ctx.r21.u32 + 48, ctx.r11.u32);
	// b 0x881ec470
	goto loc_881EC470;
loc_881EC264:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881e9b48
	ctx.lr = 0x881EC270;
	sub_881E9B48(ctx, base);
loc_881EC270:
	// b 0x881ec470
	goto loc_881EC470;
loc_881EC274:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x881ec29c
	if (!ctx.cr6.eq) goto loc_881EC29C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881e9d98
	ctx.lr = 0x881EC294;
	sub_881E9D98(ctx, base);
loc_881EC294:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x881ec470
	if (!ctx.cr0.eq) goto loc_881EC470;
loc_881EC29C:
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec2ac
	if (ctx.cr0.eq) goto loc_881EC2AC;
	// stw r19,356(r31)
	ctx.current_instruction = 0x881EC2A4;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r19.u32);
	// b 0x881ec478
	goto loc_881EC478;
loc_881EC2AC:
	// rlwinm r23,r23,0,14,1
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	ctx.current_instruction = 0x881EC2B0;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881EC2B4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec374
	if (ctx.cr0.eq) goto loc_881EC374;
	// rlwinm r11,r23,0,23,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	ctx.current_instruction = 0x881EC2C8;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lbz r9,5(r30)
	ctx.current_instruction = 0x881EC2CC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r23,348(r31)
	ctx.current_instruction = 0x881EC2DC;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// beq 0x881ec2f0
	if (ctx.cr0.eq) goto loc_881EC2F0;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x881ec300
	goto loc_881EC300;
loc_881EC2F0:
	// lhz r11,0(r30)
	ctx.current_instruction = 0x881EC2F0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_881EC300:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	ctx.current_instruction = 0x881EC30C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x881ec32c
	if (ctx.cr0.eq) goto loc_881EC32C;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881ec32c
	if (!ctx.cr0.eq) goto loc_881EC32C;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	ctx.current_instruction = 0x881EC328;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_881EC32C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881ec38c
	goto loc_881EC38C;
loc_881EC374:
	// lbz r11,7(r30)
	ctx.current_instruction = 0x881EC374;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x881ec38c
	if (ctx.cr0.eq) goto loc_881EC38C;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	ctx.current_instruction = 0x881EC388;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_881EC38C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881eb0a0
	ctx.lr = 0x881EC39C;
	sub_881EB0A0(ctx, base);
loc_881EC39C:
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x881ec468
	if (ctx.cr0.eq) goto loc_881EC468;
	// lbz r10,-11(r29)
	ctx.current_instruction = 0x881EC3A4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + -11);
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x881ec41c
	if (ctx.cr0.eq) goto loc_881EC41C;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881ec3c8
	if (ctx.cr0.eq) goto loc_881EC3C8;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x881ec3d8
	goto loc_881EC3D8;
loc_881EC3C8:
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881EC3C8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
loc_881EC3D8:
	// lbz r11,5(r30)
	ctx.current_instruction = 0x881EC3D8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x881ec414
	if (ctx.cr0.eq) goto loc_881EC414;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec3f8
	if (ctx.cr0.eq) goto loc_881EC3F8;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x881ec408
	goto loc_881EC408;
loc_881EC3F8:
	// lhz r11,0(r30)
	ctx.current_instruction = 0x881EC3F8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_881EC408:
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881EC408;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	ctx.current_instruction = 0x881EC40C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x881ec41c
	goto loc_881EC41C;
loc_881EC414:
	// std r19,0(r10)
	ctx.current_instruction = 0x881EC414;
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r19.u64);
	// std r19,8(r10)
	ctx.current_instruction = 0x881EC418;
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r19.u64);
loc_881EC41C:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// blt cr6,0x881ec42c
	if (ctx.cr6.lt) goto loc_881EC42C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_881EC42C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880527e0
	ctx.lr = 0x881EC438;
	sub_880527E0(ctx, base);
loc_881EC438:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x881ec458
	if (!ctx.cr6.gt) goto loc_881EC458;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec458
	if (ctx.cr0.eq) goto loc_881EC458;
	// subf r5,r25,r26
	ctx.r5.u64 = ctx.r26.u64 - ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// bl 0x88052d90
	ctx.lr = 0x881EC458;
	sub_88052D90(ctx, base);
loc_881EC458:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881eb998
	ctx.lr = 0x881EC468;
	sub_881EB998(ctx, base);
loc_881EC468:
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// stw r29,356(r31)
	ctx.current_instruction = 0x881EC46C;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
loc_881EC470:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x881ec4a4
	if (!ctx.cr6.eq) goto loc_881EC4A4;
loc_881EC478:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ec4a4
	if (ctx.cr0.eq) goto loc_881EC4A4;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,128(r31)
	ctx.current_instruction = 0x881EC48C;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r19,136(r31)
	ctx.current_instruction = 0x881EC490;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r19.u32);
	// stw r22,144(r31)
	ctx.current_instruction = 0x881EC494;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r22.u32);
	// stw r19,132(r31)
	ctx.current_instruction = 0x881EC498;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r19.u32);
	// stw r24,148(r31)
	ctx.current_instruction = 0x881EC49C;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// bl 0x88243780
	ctx.lr = 0x881EC4A4;
	__imp__RtlRaiseException(ctx, base);
loc_881EC4A4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881ec4c0
	goto loc_881EC4C0;
loc_881EC4C0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x881ec4f8
	ctx.lr = 0x881EC4CC;
	sub_881EC4F8(ctx, base);
loc_881EC4CC:
	// lwz r3,356(r31)
	ctx.current_instruction = 0x881EC4CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
loc_881EC4D0:
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_116) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF14);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEF14;
	ctx.current_instruction = 0x881EEF14;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_79) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF084);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF084;
	ctx.current_instruction = 0x881EF084;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_115) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF1A4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF1A4;
	ctx.current_instruction = 0x881EF1A4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restfpr_14) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF29C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF29C;
	ctx.current_instruction = 0x881EF29C;
	// lfd f14,-144(r12)
	ctx.current_instruction = 0x881EF29C;
	ctx.fpscr.disableFlushMode();
	ctx.f14.u64 = REX_LOAD_U64(ctx.r12.u32 + -144);
	// lfd f15,-136(r12)
	ctx.current_instruction = 0x881EF2A0;
	ctx.f15.u64 = REX_LOAD_U64(ctx.r12.u32 + -136);
	// lfd f16,-128(r12)
	ctx.current_instruction = 0x881EF2A4;
	ctx.f16.u64 = REX_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.current_instruction = 0x881EF2A8;
	ctx.f17.u64 = REX_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.current_instruction = 0x881EF2AC;
	ctx.f18.u64 = REX_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.current_instruction = 0x881EF2B0;
	ctx.f19.u64 = REX_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.current_instruction = 0x881EF2B4;
	ctx.f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.current_instruction = 0x881EF2B8;
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

DEFINE_REX_FUNC(sub_881F0610) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0610;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0610) {
			switch (rex_dispatch_address) {
				case 0x881F0618:
				case 0x881F0628:
				case 0x881F065C:
				case 0x881F068C:
				case 0x881F06A8:
				case 0x881F06E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0610;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0618: goto loc_881F0618;
		case 0x881F0628: goto loc_881F0628;
		case 0x881F065C: goto loc_881F065C;
		case 0x881F068C: goto loc_881F068C;
		case 0x881F06A8: goto loc_881F06A8;
		case 0x881F06E8: goto loc_881F06E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881F0618;
	__savegprlr_23(ctx, base);
loc_881F0618:
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881F061C;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x88050cd0
	ctx.lr = 0x881F0628;
	sub_88050CD0(ctx, base);
loc_881F0628:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-30678
	ctx.r24.s64 = -2010513408;
	// lis r25,-30678
	ctx.r25.s64 = -2010513408;
	// lwz r30,24332(r24)
	ctx.current_instruction = 0x881F0634;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 24332);
	// lwz r28,24336(r25)
	ctx.current_instruction = 0x881F0638;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 24336);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x881f06d4
	if (ctx.cr6.lt) goto loc_881F06D4;
	// subf r26,r28,r30
	ctx.r26.u64 = ctx.r30.u64 - ctx.r28.u64;
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x881f06d4
	if (ctx.cr6.lt) goto loc_881F06D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881f1898
	ctx.lr = 0x881F065C;
	sub_881F1898(ctx, base);
loc_881F065C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x881f06c0
	if (!ctx.cr6.lt) goto loc_881F06C0;
	// cmplwi cr6,r3,2048
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2048, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// blt cr6,0x881f0678
	if (ctx.cr6.lt) goto loc_881F0678;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_881F0678:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x881f0694
	if (ctx.cr6.lt) goto loc_881F0694;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881f17a8
	ctx.lr = 0x881F068C;
	sub_881F17A8(ctx, base);
loc_881F068C:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x881f06b0
	if (!ctx.cr0.eq) goto loc_881F06B0;
loc_881F0694:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x881f06d4
	if (ctx.cr6.lt) goto loc_881F06D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881f17a8
	ctx.lr = 0x881F06A8;
	sub_881F17A8(ctx, base);
loc_881F06A8:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x881f06d4
	if (ctx.cr0.eq) goto loc_881F06D4;
loc_881F06B0:
	// srawi r11,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// stw r3,24336(r25)
	ctx.current_instruction = 0x881F06B4;
	REX_STORE_U32(ctx.r25.u32 + 24336, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_881F06C0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r23,0(r30)
	ctx.current_instruction = 0x881F06C4;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// stw r23,80(r31)
	ctx.current_instruction = 0x881F06C8;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r11,24332(r24)
	ctx.current_instruction = 0x881F06CC;
	REX_STORE_U32(ctx.r24.u32 + 24332, ctx.r11.u32);
	// b 0x881f06dc
	goto loc_881F06DC;
loc_881F06D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	ctx.current_instruction = 0x881F06D8;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_881F06DC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x881f06f4
	ctx.lr = 0x881F06E8;
	sub_881F06F4(ctx, base);
loc_881F06E8:
	// lwz r3,80(r31)
	ctx.current_instruction = 0x881F06E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F2120) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F2120;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F2120) {
			switch (rex_dispatch_address) {
				case 0x881F2128:
				case 0x881F2198:
				case 0x881F21DC:
				case 0x881F21F8:
				case 0x881F2238:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F2120;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F2128: goto loc_881F2128;
		case 0x881F2198: goto loc_881F2198;
		case 0x881F21DC: goto loc_881F21DC;
		case 0x881F21F8: goto loc_881F21F8;
		case 0x881F2238: goto loc_881F2238;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881F2128;
	__savegprlr_29(ctx, base);
loc_881F2128:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x881F2128;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881f2150
	if (ctx.cr6.eq) goto loc_881F2150;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	ctx.current_instruction = 0x881F214C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_881F2150:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x881f21c8
	if (ctx.cr6.eq) goto loc_881F21C8;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x881F2160;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,259
	ctx.r7.s64 = 259;
	// lwz r6,12(r31)
	ctx.current_instruction = 0x881F2168;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r7,0(r31)
	ctx.current_instruction = 0x881F2170;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.current_instruction = 0x881F2178;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,92(r1)
	ctx.current_instruction = 0x881F217C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// stw r6,88(r1)
	ctx.current_instruction = 0x881F2184;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 & ctx.r31.u64;
	// bl 0x88243980
	ctx.lr = 0x881F2198;
	__imp__NtWriteFile(ctx, base);
loc_881F2198:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x881f2234
	if (ctx.cr6.eq) goto loc_881F2234;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// beq cr6,0x881f2234
	if (ctx.cr6.eq) goto loc_881F2234;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x881f21c0
	if (ctx.cr6.eq) goto loc_881F21C0;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x881F21B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r29)
	ctx.current_instruction = 0x881F21BC;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_881F21C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881f223c
	goto loc_881F223C;
loc_881F21C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88243980
	ctx.lr = 0x881F21DC;
	__imp__NtWriteFile(ctx, base);
loc_881F21DC:
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x881f2204
	if (!ctx.cr6.eq) goto loc_881F2204;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88243840
	ctx.lr = 0x881F21F8;
	__imp__NtWaitForSingleObjectEx(ctx, base);
loc_881F21F8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881f221c
	if (ctx.cr0.lt) goto loc_881F221C;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x881F2200;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881F2204:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881f221c
	if (ctx.cr6.lt) goto loc_881F221C;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881F220C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	ctx.current_instruction = 0x881F2214;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x881f223c
	goto loc_881F223C;
loc_881F221C:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881f2234
	if (!ctx.cr6.eq) goto loc_881F2234;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x881F222C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	ctx.current_instruction = 0x881F2230;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_881F2234:
	// bl 0x881ed488
	ctx.lr = 0x881F2238;
	sub_881ED488(ctx, base);
loc_881F2238:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881F223C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88203CC0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88203CC0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88203CC0) {
			switch (rex_dispatch_address) {
				case 0x88203CC8:
				case 0x88203DA8:
				case 0x88203E34:
				case 0x88203E54:
				case 0x88203EA8:
				case 0x882041F8:
				case 0x88204498:
				case 0x88204650:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88203CC0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88203CC8: goto loc_88203CC8;
		case 0x88203DA8: goto loc_88203DA8;
		case 0x88203E34: goto loc_88203E34;
		case 0x88203E54: goto loc_88203E54;
		case 0x88203EA8: goto loc_88203EA8;
		case 0x882041F8: goto loc_882041F8;
		case 0x88204498: goto loc_88204498;
		case 0x88204650: goto loc_88204650;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88203CC8;
	__savegprlr_14(ctx, base);
loc_88203CC8:
	// stwu r1,-272(r1)
	ctx.current_instruction = 0x88203CC8;
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r26,50(r3)
	ctx.current_instruction = 0x88203CCC;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r19,0(r7)
	ctx.current_instruction = 0x88203CD4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r16,0
	ctx.r16.s64 = 0;
	// srawi r23,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r26.s32 >> 1;
	// beq cr6,0x88203d08
	if (ctx.cr6.eq) goto loc_88203D08;
	// lwz r11,1304(r3)
	ctx.current_instruction = 0x88203CF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x88203CFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88203d0c
	if (ctx.cr6.eq) goto loc_88203D0C;
loc_88203D08:
	// li r22,1
	ctx.r22.s64 = 1;
loc_88203D0C:
	// lwz r11,340(r18)
	ctx.current_instruction = 0x88203D0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 340);
	// lwz r29,348(r18)
	ctx.current_instruction = 0x88203D10;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r18.u32 + 348);
	// lhz r25,62(r18)
	ctx.current_instruction = 0x88203D14;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r18.u32 + 62);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r21,66(r18)
	ctx.current_instruction = 0x88203D1C;
	ctx.r21.u64 = REX_LOAD_U16(ctx.r18.u32 + 66);
	// lhz r24,64(r18)
	ctx.current_instruction = 0x88203D20;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r18.u32 + 64);
	// lhz r20,68(r18)
	ctx.current_instruction = 0x88203D24;
	ctx.r20.u64 = REX_LOAD_U16(ctx.r18.u32 + 68);
	// lwz r31,0(r18)
	ctx.current_instruction = 0x88203D28;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// bne cr6,0x88203d40
	if (!ctx.cr6.eq) goto loc_88203D40;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// stw r11,20(r31)
	ctx.current_instruction = 0x88203D38;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x88203e70
	goto loc_88203E70;
loc_88203D40:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x88203D40;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.current_instruction = 0x88203D44;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r27,0(r11)
	ctx.current_instruction = 0x88203D4C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r27
	ctx.current_instruction = 0x88203D5C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r27.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88203e2c
	if (ctx.cr6.lt) goto loc_88203E2C;
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88203D6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x88203D7C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x88203D84;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88203e24
	if (!ctx.cr6.lt) goto loc_88203E24;
loc_88203D8C:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88203D8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88203D90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88203db8
	if (ctx.cr6.lt) goto loc_88203DB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88203DA8;
	sub_88156440(ctx, base);
loc_88203DA8:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88203d8c
	if (ctx.cr6.eq) goto loc_88203D8C;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88203e6c
	goto loc_88203E6C;
loc_88203DB8:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88203DB8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x88203DC0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x88203DC8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x88203DCC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x88203DD4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x88203DD8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88203DE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88203DE4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x88203DEC;
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
	ctx.current_instruction = 0x88203E08;
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
	ctx.current_instruction = 0x88203E20;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_88203E24:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x88203e6c
	goto loc_88203E6C;
loc_88203E2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x88203E34;
	sub_88156500(ctx, base);
loc_88203E34:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
loc_88203E3C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x88203E3C;
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
	ctx.lr = 0x88203E54;
	sub_88156500(ctx, base);
loc_88203E54:
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r27
	ctx.current_instruction = 0x88203E5C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88203e3c
	if (ctx.cr6.lt) goto loc_88203E3C;
loc_88203E6C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_88203E70:
	// lwz r11,0(r18)
	ctx.current_instruction = 0x88203E70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88203E74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88203e8c
	if (ctx.cr6.eq) goto loc_88203E8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88203E8C:
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88203ea8
	if (ctx.cr6.eq) goto loc_88203EA8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,336(r18)
	ctx.current_instruction = 0x88203EA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x88203EA8;
	sub_88202E58(ctx, base);
loc_88203EA8:
	// stw r16,96(r1)
	ctx.current_instruction = 0x88203EA8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r16,104(r1)
	ctx.current_instruction = 0x88203EB0;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r16,100(r1)
	ctx.current_instruction = 0x88203EB8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// beq cr6,0x88203f58
	if (ctx.cr6.eq) goto loc_88203F58;
	// lwz r10,-24(r17)
	ctx.current_instruction = 0x88203EC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + -24);
	// addi r11,r19,-1
	ctx.r11.s64 = ctx.r19.s64 + -1;
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88203f58
	if (ctx.cr6.eq) goto loc_88203F58;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x88203ef0
	if (!ctx.cr6.lt) goto loc_88203EF0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.current_instruction = 0x88203EE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,80(r1)
	ctx.current_instruction = 0x88203EE8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x88203f4c
	goto loc_88203F4C;
loc_88203EF0:
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.current_instruction = 0x88203EFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r6,r8,r29
	ctx.current_instruction = 0x88203F00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// stw r7,88(r1)
	ctx.current_instruction = 0x88203F04;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,84(r1)
	ctx.current_instruction = 0x88203F08;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lhz r8,86(r1)
	ctx.current_instruction = 0x88203F0C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,84(r1)
	ctx.current_instruction = 0x88203F10;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,88(r1)
	ctx.current_instruction = 0x88203F14;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r5,90(r1)
	ctx.current_instruction = 0x88203F18;
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
	ctx.current_instruction = 0x88203F44;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r5.u16);
	// sth r4,80(r1)
	ctx.current_instruction = 0x88203F48;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
loc_88203F4C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88203F4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,96(r1)
	ctx.current_instruction = 0x88203F54;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_88203F58:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x882040d4
	if (!ctx.cr6.eq) goto loc_882040D4;
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r26,r19
	ctx.r11.u64 = ctx.r19.u64 - ctx.r26.u64;
	// add r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 + ctx.r10.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r9,r17
	ctx.r6.u64 = ctx.r17.u64 - ctx.r9.u64;
	// lwz r10,0(r6)
	ctx.current_instruction = 0x88203F74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88204010
	if (ctx.cr6.eq) goto loc_88204010;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x88203fa0
	if (!ctx.cr6.lt) goto loc_88203FA0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r29
	ctx.current_instruction = 0x88203F94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stw r9,80(r1)
	ctx.current_instruction = 0x88203F98;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x88203ffc
	goto loc_88203FFC;
loc_88203FA0:
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.current_instruction = 0x88203FAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r4,r8,r29
	ctx.current_instruction = 0x88203FB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x88203FB4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r4,88(r1)
	ctx.current_instruction = 0x88203FB8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lhz r9,90(r1)
	ctx.current_instruction = 0x88203FBC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r7,86(r1)
	ctx.current_instruction = 0x88203FC0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,84(r1)
	ctx.current_instruction = 0x88203FC4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r10,88(r1)
	ctx.current_instruction = 0x88203FC8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// sth r8,82(r1)
	ctx.current_instruction = 0x88203FF4;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// sth r7,80(r1)
	ctx.current_instruction = 0x88203FF8;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
loc_88203FFC:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88203FFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwx r10,r9,r8
	ctx.current_instruction = 0x8820400C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_88204010:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x882040d4
	if (ctx.cr6.eq) goto loc_882040D4;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// cmpw cr6,r15,r10
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88204030
	if (ctx.cr6.eq) goto loc_88204030;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
	// b 0x88204038
	goto loc_88204038;
loc_88204030:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r6,-24
	ctx.r10.s64 = ctx.r6.s64 + -24;
loc_88204038:
	// lwz r10,0(r10)
	ctx.current_instruction = 0x88204038;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x882040d4
	if (ctx.cr6.eq) goto loc_882040D4;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x88204064
	if (!ctx.cr6.lt) goto loc_88204064;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.current_instruction = 0x88204058;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,80(r1)
	ctx.current_instruction = 0x8820405C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x882040c0
	goto loc_882040C0;
loc_88204064:
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.current_instruction = 0x88204070;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r6,r8,r29
	ctx.current_instruction = 0x88204074;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x88204078;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	ctx.current_instruction = 0x8820407C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lhz r11,90(r1)
	ctx.current_instruction = 0x88204080;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r4,86(r1)
	ctx.current_instruction = 0x88204088;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r9,84(r1)
	ctx.current_instruction = 0x8820408C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r7,88(r1)
	ctx.current_instruction = 0x88204090;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// sth r11,82(r1)
	ctx.current_instruction = 0x882040B8;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r10,80(r1)
	ctx.current_instruction = 0x882040BC;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
loc_882040C0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x882040C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwx r11,r10,r9
	ctx.current_instruction = 0x882040D0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_882040D4:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x88204180
	if (ctx.cr6.lt) goto loc_88204180;
	// lhz r11,106(r1)
	ctx.current_instruction = 0x882040DC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r10,102(r1)
	ctx.current_instruction = 0x882040E0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r9,98(r1)
	ctx.current_instruction = 0x882040E4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,96(r1)
	ctx.current_instruction = 0x882040EC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,104(r1)
	ctx.current_instruction = 0x882040F4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// lhz r4,100(r1)
	ctx.current_instruction = 0x882040FC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
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
	// subf r27,r6,r4
	ctx.r27.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r14,r30,r6
	ctx.r14.u64 = ctx.r6.u64 - ctx.r30.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r27,r27,r8
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r14,r8
	ctx.r8.u64 = ctx.r14.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r14,r9,r8
	ctx.r14.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ctx.r31.u64;
	// andc r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r27.u64;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
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
	ctx.current_instruction = 0x88204174;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	ctx.current_instruction = 0x88204178;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x88204198
	goto loc_88204198;
loc_88204180:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r10,96(r1)
	ctx.current_instruction = 0x88204184;
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
	ctx.current_instruction = 0x88204194;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_88204198:
	// lhz r11,82(r1)
	ctx.current_instruction = 0x88204198;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.current_instruction = 0x882041A0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r28,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + ctx.r24.u64;
	// and r5,r7,r21
	ctx.r5.u64 = ctx.r7.u64 & ctx.r21.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// and r4,r6,r20
	ctx.r4.u64 = ctx.r6.u64 & ctx.r20.u64;
	// subf r3,r25,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r25.u64;
	// subf r10,r24,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r3,2(r31)
	ctx.current_instruction = 0x882041DC;
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// sthx r10,r11,r29
	ctx.current_instruction = 0x882041E4;
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u16);
	// beq cr6,0x882041f8
	if (ctx.cr6.eq) goto loc_882041F8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,336(r18)
	ctx.current_instruction = 0x882041F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x882041F8;
	sub_88202E58(ctx, base);
loc_882041F8:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x882041F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r16,104(r1)
	ctx.current_instruction = 0x88204200;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r16,100(r1)
	ctx.current_instruction = 0x88204208;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// stw r11,96(r1)
	ctx.current_instruction = 0x8820420C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x88204438
	if (!ctx.cr6.eq) goto loc_88204438;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r26,r19
	ctx.r10.u64 = ctx.r19.u64 - ctx.r26.u64;
	// add r9,r23,r11
	ctx.r9.u64 = ctx.r23.u64 + ctx.r11.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r8,r17
	ctx.r6.u64 = ctx.r17.u64 - ctx.r8.u64;
	// lwz r10,0(r6)
	ctx.current_instruction = 0x8820422C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r5,r10,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x882042c0
	if (ctx.cr6.eq) goto loc_882042C0;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x88204258
	if (!ctx.cr6.lt) goto loc_88204258;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r29
	ctx.current_instruction = 0x8820424C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stw r9,80(r1)
	ctx.current_instruction = 0x88204250;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x882042b4
	goto loc_882042B4;
loc_88204258:
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.current_instruction = 0x88204264;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r5,r8,r29
	ctx.current_instruction = 0x88204268;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x8820426C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r5,88(r1)
	ctx.current_instruction = 0x88204270;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lhz r10,86(r1)
	ctx.current_instruction = 0x88204274;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r4,90(r1)
	ctx.current_instruction = 0x8820427C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r8,88(r1)
	ctx.current_instruction = 0x88204280;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r5,84(r1)
	ctx.current_instruction = 0x88204284;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// sth r9,82(r1)
	ctx.current_instruction = 0x882042AC;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	ctx.current_instruction = 0x882042B0;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
loc_882042B4:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x882042B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r10,100(r1)
	ctx.current_instruction = 0x882042BC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_882042C0:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x88204384
	if (ctx.cr6.eq) goto loc_88204384;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// cmpw cr6,r15,r10
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x882042e0
	if (ctx.cr6.eq) goto loc_882042E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
	// b 0x882042e8
	goto loc_882042E8;
loc_882042E0:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r6,-24
	ctx.r10.s64 = ctx.r6.s64 + -24;
loc_882042E8:
	// lwz r10,0(r10)
	ctx.current_instruction = 0x882042E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88204384
	if (ctx.cr6.eq) goto loc_88204384;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x88204314
	if (!ctx.cr6.lt) goto loc_88204314;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.current_instruction = 0x88204308;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,80(r1)
	ctx.current_instruction = 0x8820430C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x88204370
	goto loc_88204370;
loc_88204314:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r29
	ctx.current_instruction = 0x88204320;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r5,r8,r29
	ctx.current_instruction = 0x88204324;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// stw r6,84(r1)
	ctx.current_instruction = 0x88204328;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lhz r9,84(r1)
	ctx.current_instruction = 0x8820432C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// stw r5,88(r1)
	ctx.current_instruction = 0x88204330;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lhz r11,90(r1)
	ctx.current_instruction = 0x88204334;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r4,86(r1)
	ctx.current_instruction = 0x8820433C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lhz r6,88(r1)
	ctx.current_instruction = 0x88204344;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// sth r11,82(r1)
	ctx.current_instruction = 0x88204368;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r10,80(r1)
	ctx.current_instruction = 0x8820436C;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
loc_88204370:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88204370;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r11,r10,r9
	ctx.current_instruction = 0x88204380;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_88204384:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x88204430
	if (ctx.cr6.lt) goto loc_88204430;
	// lhz r11,106(r1)
	ctx.current_instruction = 0x8820438C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r10,102(r1)
	ctx.current_instruction = 0x88204390;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r9,98(r1)
	ctx.current_instruction = 0x88204394;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,96(r1)
	ctx.current_instruction = 0x8820439C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,104(r1)
	ctx.current_instruction = 0x882043A4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lhz r4,100(r1)
	ctx.current_instruction = 0x882043AC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r30,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r30.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r30,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r30.u64;
	// subf r8,r27,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r27.u64;
	// subf r23,r6,r4
	ctx.r23.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r22,r27,r6
	ctx.r22.u64 = ctx.r6.u64 - ctx.r27.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r23,r23,r8
	ctx.r23.u64 = ctx.r23.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r22,r8
	ctx.r8.u64 = ctx.r22.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r22,r9,r8
	ctx.r22.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// andc r7,r7,r23
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r23.u64;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & ctx.r27.u64;
	// andc r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r22.u64;
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
	ctx.current_instruction = 0x88204424;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	ctx.current_instruction = 0x88204428;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x88204440
	goto loc_88204440;
loc_88204430:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x88204440
	if (!ctx.cr6.eq) goto loc_88204440;
loc_88204438:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88204438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,80(r1)
	ctx.current_instruction = 0x8820443C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_88204440:
	// lhz r10,82(r1)
	ctx.current_instruction = 0x88204440;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// lhz r9,80(r1)
	ctx.current_instruction = 0x88204448;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r28,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// and r5,r7,r21
	ctx.r5.u64 = ctx.r7.u64 & ctx.r21.u64;
	// and r4,r6,r20
	ctx.r4.u64 = ctx.r6.u64 & ctx.r20.u64;
	// subf r3,r25,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r25.u64;
	// subf r11,r24,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r24.u64;
	// sth r3,6(r31)
	ctx.current_instruction = 0x88204478;
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// sth r11,4(r31)
	ctx.current_instruction = 0x88204480;
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88204498
	if (ctx.cr6.eq) goto loc_88204498;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,336(r18)
	ctx.current_instruction = 0x88204490;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x88204498;
	sub_88202E58(ctx, base);
loc_88204498:
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// stw r16,104(r1)
	ctx.current_instruction = 0x8820449C;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x88204540
	if (ctx.cr6.eq) goto loc_88204540;
	// lwz r9,-24(r17)
	ctx.current_instruction = 0x882044A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r17.u32 + -24);
	// add r11,r19,r26
	ctx.r11.u64 = ctx.r19.u64 + ctx.r26.u64;
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x88204540
	if (ctx.cr6.eq) goto loc_88204540;
	// rlwinm r10,r9,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x882044d8
	if (!ctx.cr6.lt) goto loc_882044D8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.current_instruction = 0x882044D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// b 0x88204538
	goto loc_88204538;
loc_882044D8:
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.current_instruction = 0x882044E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r6,r8,r29
	ctx.current_instruction = 0x882044E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x882044EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	ctx.current_instruction = 0x882044F0;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lhz r5,86(r1)
	ctx.current_instruction = 0x882044F4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,90(r1)
	ctx.current_instruction = 0x882044F8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r11,84(r1)
	ctx.current_instruction = 0x882044FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// lhz r9,88(r1)
	ctx.current_instruction = 0x88204504;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// sth r6,82(r1)
	ctx.current_instruction = 0x8820452C;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r6.u16);
	// sth r5,80(r1)
	ctx.current_instruction = 0x88204530;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88204534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88204538:
	// stw r11,96(r1)
	ctx.current_instruction = 0x88204538;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
loc_88204540:
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88204544;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,4(r31)
	ctx.current_instruction = 0x8820454C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// add r30,r19,r26
	ctx.r30.u64 = ctx.r19.u64 + ctx.r26.u64;
	// clrlwi r4,r28,31
	ctx.r4.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r7
	ctx.current_instruction = 0x88204560;
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwx r6,r8,r5
	ctx.current_instruction = 0x88204568;
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r6.u32);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,106(r1)
	ctx.current_instruction = 0x88204570;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r9,104(r1)
	ctx.current_instruction = 0x88204574;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r8,100(r1)
	ctx.current_instruction = 0x88204578;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r7,96(r1)
	ctx.current_instruction = 0x8820457C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r6,102(r1)
	ctx.current_instruction = 0x88204580;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// lhz r11,98(r1)
	ctx.current_instruction = 0x88204588;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r9,r6,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r8,r7,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r7.u64;
	// subf r23,r28,r27
	ctx.r23.u64 = ctx.r27.u64 - ctx.r28.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r22,r7,r28
	ctx.r22.u64 = ctx.r28.u64 - ctx.r7.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r23,r23,r8
	ctx.r23.u64 = ctx.r23.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r22,r8
	ctx.r8.u64 = ctx.r22.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r22,r9,r8
	ctx.r22.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// andc r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 & ~ctx.r23.u64;
	// andc r10,r28,r22
	ctx.r10.u64 = ctx.r28.u64 & ~ctx.r22.u64;
	// and r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 & ctx.r5.u64;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// and r5,r9,r27
	ctx.r5.u64 = ctx.r9.u64 & ctx.r27.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 | ctx.r5.u64;
	// or r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 | ctx.r7.u64;
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r10,r25
	ctx.r6.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// and r4,r6,r21
	ctx.r4.u64 = ctx.r6.u64 & ctx.r21.u64;
	// and r3,r5,r20
	ctx.r3.u64 = ctx.r5.u64 & ctx.r20.u64;
	// subf r11,r25,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r25.u64;
	// subf r8,r24,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r24.u64;
	// sth r11,2(r31)
	ctx.current_instruction = 0x88204634;
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// sth r8,0(r31)
	ctx.current_instruction = 0x8820463C;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// beq cr6,0x88204654
	if (ctx.cr6.eq) goto loc_88204654;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,336(r18)
	ctx.current_instruction = 0x88204648;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 336);
	// bl 0x88202e58
	ctx.lr = 0x88204650;
	sub_88202E58(ctx, base);
loc_88204650:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_88204654:
	// subf r11,r26,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r26.u64;
	// lhz r9,2(r31)
	ctx.current_instruction = 0x88204658;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r8,0(r31)
	ctx.current_instruction = 0x8820465C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r9,2(r11)
	ctx.current_instruction = 0x88204674;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r4,6(r11)
	ctx.current_instruction = 0x88204678;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r8,4(r11)
	ctx.current_instruction = 0x8820467C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lhz r11,0(r11)
	ctx.current_instruction = 0x88204684;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// subf r8,r6,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r9,r30,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r30.u64;
	// subf r7,r30,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r30.u64;
	// subf r11,r5,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r5.u64;
	// subf r27,r28,r29
	ctx.r27.u64 = ctx.r29.u64 - ctx.r28.u64;
	// xor r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r26,r28,r5
	ctx.r26.u64 = ctx.r5.u64 - ctx.r28.u64;
	// xor r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// xor r23,r11,r27
	ctx.r23.u64 = ctx.r11.u64 ^ ctx.r27.u64;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// xor r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 ^ ctx.r27.u64;
	// srawi r9,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 31;
	// srawi r8,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r23.s32 >> 31;
	// srawi r7,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r27.s32 >> 31;
	// or r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r26,r8,r7
	ctx.r26.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ctx.r4.u64;
	// andc r11,r6,r27
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r27.u64;
	// andc r6,r5,r26
	ctx.r6.u64 = ctx.r5.u64 & ~ctx.r26.u64;
	// and r5,r7,r28
	ctx.r5.u64 = ctx.r7.u64 & ctx.r28.u64;
	// or r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 | ctx.r4.u64;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// srawi r11,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r6,r10,r25
	ctx.r6.u64 = ctx.r10.u64 + ctx.r25.u64;
	// and r11,r5,r20
	ctx.r11.u64 = ctx.r5.u64 & ctx.r20.u64;
	// and r4,r6,r21
	ctx.r4.u64 = ctx.r6.u64 & ctx.r21.u64;
	// subf r9,r24,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r24.u64;
	// subf r10,r25,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r25.u64;
	// sth r9,4(r31)
	ctx.current_instruction = 0x88204728;
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// sth r10,6(r31)
	ctx.current_instruction = 0x8820472C;
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821EF30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821EF30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821EF30) {
			switch (rex_dispatch_address) {
				case 0x8821EF74:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821EF30;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821EF74: goto loc_8821EF74;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8821EF34;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8821EF38;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,1120
	ctx.r10.s64 = 1120;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vspltish v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x4)));
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
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
	// bl 0x8821e9c8
	ctx.lr = 0x8821EF74;
	sub_8821E9C8(ctx, base);
loc_8821EF74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8821EF7C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88220428) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88220428;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88220428) {
			switch (rex_dispatch_address) {
				case 0x88220430:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88220428;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88220430: goto loc_88220430;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88220430;
	__savegprlr_28(ctx, base);
loc_88220430:
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
	ctx.current_instruction = 0x88220444;
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
	// bne cr6,0x882205e4
	if (!ctx.cr6.eq) goto loc_882205E4;
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
	// ble cr6,0x882207b8
	if (!ctx.cr6.gt) goto loc_882207B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_882204FC:
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
	// blt cr6,0x882204fc
	if (ctx.cr6.lt) goto loc_882204FC;
	// b 0x882207b8
	goto loc_882207B8;
loc_882205E4:
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
	// ble cr6,0x882207b8
	if (!ctx.cr6.gt) goto loc_882207B8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
loc_88220668:
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
	// blt cr6,0x88220668
	if (ctx.cr6.lt) goto loc_88220668;
loc_882207B8:
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
	// bne cr6,0x88220868
	if (!ctx.cr6.eq) goto loc_88220868;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88220950
	if (!ctx.cr6.gt) goto loc_88220950;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_882207EC:
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
	// vsldoi128 v9,v10,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// vsldoi128 v8,v10,v41,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 14));
	// vsldoi128 v4,v10,v41,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 10));
	// vsubshs v3,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v1,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v24,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubshs v20,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v17,v19,v26
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v15,v16,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v40,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vor v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvewx128 v40,r0,r11
	ctx.current_instruction = 0x88220854;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r9
	ctx.current_instruction = 0x88220858;
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x882207ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882207EC;
	// b 0x88220950
	goto loc_88220950;
loc_88220868:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88220950
	if (!ctx.cr6.gt) goto loc_88220950;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_88220880:
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
	// vsldoi v8,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v6,v10,v39,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 12));
	// vsubshs v31,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi128 v3,v10,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 14));
	// vsubshs v30,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v9,v10,6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v25,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v24,v10,v39,6
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 10));
	// vslh v23,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v23,v29
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v16,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v15,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v9,v20,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
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
	// vslh v14,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v6,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v8,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v25,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v24,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsubshs v28,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vadduhm v23,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v21,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v20,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v22,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v19,v23,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v18,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v17,v19,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
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
	// bdnz 0x88220880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88220880;
loc_88220950:
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

